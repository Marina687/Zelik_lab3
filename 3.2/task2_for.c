#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"

double summ2(double eps)
{ 
    int res = 0;
    for (int i = 0; fabs(res) > eps; i++)
    {
        res = pow((-1),i)*(i+1)/(pow(i,3)-pow(i,2)+1)+res;  
    }
    return res;
}
