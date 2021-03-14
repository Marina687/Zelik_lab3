#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"

void print(int n, int k)
{ 
    scanf("%d %d", &k,&n);
    int res = 0;
    int i=0;
    do 
    {
        if (i == k)
        {
            continue;
        }
        else
        {
            res = pow((-1),i)*(i+1)/(pow(i,3)-pow(i,2)+1)+res;
            printf("%d", &res);
        }
        i++; 
    } while (i <= n);
}
