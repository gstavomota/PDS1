#include "ex2Modulo.h"
#include <math.h>

#define PI 3.141592

double cauchyPadrao(double x){
    return 1/(PI*(1+(pow(x,2))));
}

double gumbel(double x, double u, double b){
    double z = (x-u)/b;
    return (1/b)*exp(-(z+exp(-z)));
}

double laplace(double x, double u, double b){
    return (1/2*b)*exp(-fabs(x-u)/b);
}