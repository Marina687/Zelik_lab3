#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"

double summ(int n)
{ 
    int res =0;
    int i = 0;
    do
    {
        res = pow((-1),i)*(i+1)/(pow(i,3)-pow(i,2)+1)+res;
        ++i; 
    } while (i < n);
    return res;
}

