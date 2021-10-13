#include "math_helper.h"
#include <cmath>
#include <limits>

double sum_helper(const double a, const double b)
{
    return a + b;
}

double sub_helper(const double a, const double b)
{
    return a - b;
}

double multiply_helper(const double a, const double b)
{
    return a * b;
}

double div_helper(const double a, const double b)
{
    return a / b;
}

bool are_equal(const double a, const double b)
{
    return abs(a - b) <= std::numeric_limits<double>::min();
}