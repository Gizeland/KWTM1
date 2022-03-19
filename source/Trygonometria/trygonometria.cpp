#include "trygonometria.h"
#include <cmath>
double degreemath::sin(double degree) {
    double radian = degree * (M_PI/180);
    return std::sin(radian);
}

double degreemath::cos(double degree) {
    double radian = degree * (M_PI/180);
    return std::cos(radian);
}

double degreemath::tan(double degree) {
    double radian = degree * (M_PI/180);
    return std::tan(radian);
}

double degreemath::ctg(double degree) {
    double radian = degree * (M_PI/180);
    double tan = std::tan(radian);
    return 1/tan;
} 