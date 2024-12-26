#include "polynomiac_basic.hpp"

polynomial polynomial::operator+ () const
{
    return *this;
}

polynomial polynomial::operator- () const
{
    polynomial res = *this;
    for (double & index : res.coeff)
        index = -index;
    return res;
}

polynomial polynomial::operator+ (const polynomial& other) const
{
    polynomial maxp = (other.deegree>this->deegree)?other:*this;
    polynomial minp = (other.deegree>this->deegree)?*this:other;
    polynomial res(maxp.deegree);
    for (unsigned index = 0; index <= minp.deegree; ++index)
        res.coeff[index] = this->coeff[index] + other.coeff[index];
    for (unsigned index = minp.deegree + 1; index <= maxp.deegree; ++index)
        res.coeff[index] = maxp.coeff[index];
    res.calculate();
    return res;
}


polynomial polynomial::operator- (const polynomial& other) const
{
    return *this + (-other);
}

polynomial polynomial::operator+= (const polynomial& other)
{
    *this = *this + other;
    return *this;
}

polynomial polynomial::operator-= (const polynomial& other)
{
    *this = *this - other;
    return *this;
}


polynomial polynomial::operator* (const polynomial& other) const
{
    
    polynomial res(this->deegree + other.deegree);
    for(unsigned index=0;index <= res.deegree; ++index)
        res.coeff[index] = 0;

    for(unsigned index=0;index <= this->deegree; ++index)
        for(unsigned jndex=0; jndex <= other.deegree; ++jndex)
            res.coeff[index + jndex] += this->coeff[index] * other.coeff[jndex];
    res.calculate();
    return res;
}

polynomial polynomial::operator*= (const polynomial& other)
{
    *this = *this * other;
    return *this;
}

polynomial polynomial::derivative () const
{
    if(deegree <= 0)return polynomial{0};
    polynomial res(deegree - 1);
    for (unsigned index = 0; index <= res.deegree; ++index)
        res.coeff[index]=coeff[index+1]*(index+1);
    res.calculate();
    return res;
}


polynomial polynomial::operator/ (const polynomial& other) const
{
    polynomial q{0}, r=*this;
    if(other == ZERO)throw std::runtime_error("Devide by ZERO");
    if(other.deegree == 0) return (*this)*polynomial{1 / other.coeff[0]};
    if(this->deegree < other.deegree)return q;
    for(unsigned index = this->deegree; index >= other.deegree; --index)
        if(r.coeff[index]!=0)
        {
            polynomial tmp = x_monomial(index - other.deegree, r.coeff[index]/ other.coeff[other.deegree]);
            q += tmp;
            r -= tmp*other;
        }
    q.calculate();
    return q;
}

polynomial polynomial::operator% (const polynomial& other) const
{
    polynomial q{0}, r=*this;
    if(other == ZERO)throw std::runtime_error("Devide by ZERO");
    if(other.deegree == 0) return (*this)*polynomial{1/other.at(0)};
    if(this->deegree < other.deegree)return r;
    for(unsigned index = this->deegree; index >= other.deegree; --index)
        if(r.coeff[index]!=0)
        {
            polynomial tmp = x_monomial(index - other.deegree, r.coeff[index]/ other.coeff[other.deegree]);
            q += tmp;
            r -= tmp*other;
        }
    r.calculate();
    return r;
}

polynomial polynomial::operator/= (const polynomial& other)
{
    *this = *this / other;
    return *this;
}

polynomial polynomial::operator%= (const polynomial& other)
{
    *this = *this % other;
    return *this;
}