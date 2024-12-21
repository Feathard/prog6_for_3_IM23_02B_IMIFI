#include "polynomiac_basic.hpp"

//#if POLYNOMIAC_BASIC_HPP_OPERATIONS

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
    polynomial maxp = (other.deegree>this->deegree)?other:*this;
    polynomial minp = (other.deegree>this->deegree)?*this:other;
    polynomial res(maxp.deegree);
    for (unsigned index = 0; index <= minp.deegree; ++index)
        res.coeff[index] = this->coeff[index] - other.coeff[index];
    for (unsigned index = minp.deegree + 1; index <= maxp.deegree; ++index)
        res.coeff[index] = -maxp.coeff[index];
    res.calculate();
    return res;
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


//#endif // POLYNOMIAC_BASIC_HPP_OPERATIONS

