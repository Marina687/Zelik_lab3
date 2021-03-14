#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"

void print(int n, int k)
{ 
    int res = 0;
    scanf("%d %d", &k,&n);
    for (int i = 0; i <= n; i++)
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
    }
}
