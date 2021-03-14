#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"

double findFirstNegativeElement(double eps)
{ 
    int res = 0;
    for (int i = 0; i > 0; i++)
    {
        res = pow((-1),i)*(i+1)/(pow(i,3)-pow(i,2)+1)+res;
        if (fabs(res) <= eps && res < 0)
        {
            return i;
        }
    }
}