#include "polynomiac_basic.hpp"

polynomial::polynomial ( void ) : deegree(0) {}

polynomial::polynomial ( std::vector<double> vec) : coeff(vec), deegree(vec.size()-1) {}

polynomial::polynomial (unsigned dg) : deegree(dg), coeff(dg+1) {}

polynomial::polynomial (const polynomial & other) : deegree(other.deegree), coeff(other.coeff) {}

polynomial::polynomial (std::initializer_list<double> il) : deegree (il.size()-1)
{
    coeff = il;
    calculate();
}

polynomial::polynomial (std::istream& in)
{
    std::string tmp;
    std::getline(in, tmp);
    std::stringstream lines(tmp);
    while (std::getline(lines, tmp, ','))
    {
        double a;
        std::stringstream(tmp) >> a;
        coeff.push_back(a);
    }
    calculate();
}

polynomial::polynomial (int range_min, int range_max, unsigned dg) : deegree(dg), coeff(dg+1)
{
    int s = range_max - range_min;
    std::random_device rnd;
    for(unsigned index = 0; index <= dg; ++index)
    {
        coeff[index] = (rnd()%s);
        coeff[index] += range_min;
    }
    
    for(;;)
    {
        if(coeff[dg]!=0)break;
        coeff[dg] = (rnd()%s);
        coeff[dg] += range_min;
    }
    
    calculate();
}

bool polynomial::operator!= ( const polynomial & other) const
{
    return (deegree != other.deegree) or (coeff != other.coeff);
}

polynomial& polynomial::operator= (const polynomial & other)
{
    if(*this != other)
    {
        this->deegree = other.deegree;
        this->coeff = other.coeff;
    }
    return *this;
}

void polynomial::calculate ( void )
{
    if(coeff.empty())
    {
        deegree = 0;
        return;
    }
    
    if(coeff.size() == 1)
    {
        deegree = 0;
        return;
    }

    auto e = coeff.begin(); --e;
    auto b = coeff.end(); --b;

    for(;b!=e;--b)
        if (*b != 0)
        {
            ++b;
            break;
        }

    coeff.erase(b, coeff.end());
    deegree = coeff.size()-1;
}

bool polynomial::operator== (const polynomial & other) const
{
    return (deegree == other.deegree) and (coeff == other.coeff);
}

double polynomial::operator() (double x) const
{
    double s=0, xa=1;
    for(unsigned index=0;index<=deegree;++index)
    {
        s+=coeff[index]*xa;
        xa*=x;
    }
    return s;
}

double polynomial::at(unsigned pos) const
{
    if(pos>deegree)
        throw "Out of range";
    else 
        return coeff[pos];
}

void polynomial::set (unsigned index, double value)
{
    if(index <= deegree) coeff[index] = value;
    else 
    {
        for (unsigned jndex = 1; jndex < index - deegree; ++jndex)
            coeff.push_back(0);
        coeff.push_back(value);
    }
    calculate();
}

void polynomial::set (std::initializer_list<double> il)
{
    coeff = il;
    calculate();
}

void polynomial::special_out (std::ostream& out) const
{
    for(unsigned index = 0; index <= deegree; ++index)
        out << coeff[index] << ',';
    out << std::endl;
}

polynomial::~polynomial (void)
{
    //destructor is not required.
}

//////////////////


std::ostream& operator<< (std::ostream& out, const polynomial& obj)
{
    if(obj.coeff.empty())
    {
        std::cout << "Полином пуст" << std::endl;
        return out;
    }
    auto b = obj.coeff.end(); --b;
    auto e = obj.coeff.begin();
    for(;b!=e;--b)
    {
        if (*b != 0) out << *b << "*x^" << (b-e) << " + ";
    }
    out << *b;
    return out;
}

unsigned deg( const polynomial& P )
{
    return P.deegree;
}

polynomial x_monomial (unsigned dg, double a)
{
    polynomial res(0);
    res.set(dg, a);
    return res;
}