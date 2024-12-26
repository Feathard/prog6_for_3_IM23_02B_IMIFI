#include "PolynomialOperations.hpp"

polynomial PolynomialOperations :: sum (const polynomial& a, const polynomial& b)
{
    polynomial maxp = (b.deegree>a.deegree)?b:a;
    polynomial minp = (b.deegree>a.deegree)?a:b;
    polynomial res(maxp.deegree);
    for (unsigned index = 0; index <= minp.deegree; ++index)
        res.coeff[index] = a.coeff[index] + b.coeff[index];
    for (unsigned index = minp.deegree + 1; index <= maxp.deegree; ++index)
        res.coeff[index] = maxp.coeff[index];
    res.calculate();
    return res;
}

polynomial PolynomialOperations :: minus (const polynomial& a)
{
    polynomial res = a;
    for (double & index : res.coeff)
        index = -index;
    return res;
}

polynomial PolynomialOperations :: dif (const polynomial& a, const polynomial& b)
{
    return sum(a, minus(b));
}

polynomial PolynomialOperations :: mult (const polynomial& a, const polynomial& b)
{

    polynomial res(a.deegree + b.deegree);
    for(unsigned index=0;index <= res.deegree; ++index)
        res.coeff[index] = 0;

    for(unsigned index=0;index <= a.deegree; ++index)
        for(unsigned jndex=0; jndex <= b.deegree; ++jndex)
            res.coeff[index + jndex] += a.coeff[index] * b.coeff[jndex];
    res.calculate();
    return res;
}

polynomial PolynomialOperations :: mod(const polynomial& a, const polynomial& b){
    polynomial q{0}, r=a;
    divisor_not_null(b);
    if(b.deegree == 0) return (a)*polynomial{1 / b.coeff[0]};
    if(a.deegree < b.deegree)return q;
    for(unsigned index = a.deegree; index >= b.deegree; --index)
        if(r.coeff[index]!=0)
        {
            polynomial tmp = x_monomial(index - b.deegree, r.coeff[index]/ b.coeff[b.deegree]);
            q += tmp;
            r -= tmp*b;
        }
    return r;
}

polynomial PolynomialOperations :: div(const polynomial& a, const polynomial& b){
    polynomial q{0}, r=a;
    divisor_not_null(b);
    if(b.deegree == 0) return (a)*polynomial{1 / b.coeff[0]};
    if(a.deegree < b.deegree)return q;
    for(unsigned index = a.deegree; index >= b.deegree; --index)
        if(r.coeff[index]!=0)
        {
            polynomial tmp = x_monomial(index - b.deegree, r.coeff[index]/ b.coeff[b.deegree]);
            q += tmp;
            r -= tmp*b;
        }
    return q;
}

polynomial PolynomialOperations :: derivative (const polynomial& a) {
    if (a.coeff.size() <= 1) {
        return polynomial(0);
    }

    polynomial res(a.deegree-1);

    for (size_t i = 1; i < a.coeff.size(); ++i) {
        res.coeff[i-1] = a.coeff[i] * i;
    }
    return res;
}

polynomial PolynomialOperations :: normalize(const polynomial &p){
    std::vector<double> temp = p.coeff;
    while (temp.size() > 1 && temp.back() == 0.0) {
        temp.pop_back();
    }
    return polynomial(temp);
}

bool PolynomialOperations :: div_ok(const polynomial& a, const polynomial&b){
    return (a.deegree >= b.deegree);
}

bool PolynomialOperations :: degree_equal(const polynomial& a, const polynomial& b){
    return (a.deegree == b.deegree);
}

bool PolynomialOperations :: divisor_not_null(const polynomial& b){
    if (b.deegree == 0 && b.coeff[0] == 0) {
        throw std::runtime_error("Деление на ноль");
    }
    return false;
}
