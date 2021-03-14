#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"

int res = 0;
int findFirstElement(double eps)
{ 
    int i = 0;
    do
    {
        res = pow((-1),i)*(i+1)/(pow(i,3)-pow(i,2)+1)+res;
        if (fabs(res) <= eps)
        {   
            break;
        }
        else
        {
        i++;
        }
    } while (i > 0);
    return i;
}
