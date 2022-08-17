//
//  main.c
//  Recurssion
//
//  Created by 👻 on 21/11/2021.
//
#include<stdio.h>

double grains(double,double);
int main()
{
    double ans = grains(1.0, 64.0);
    if(ans==0)
    {
    printf("\n");
    }
    printf("\n\n\n\n");
    
    printf("The 64th block sum of grains is = %lf",ans);
    printf("\n\n");
    return 0;
}
double grains(double one,double total)
{
  long double grainCounter;
    if (total==0)
        return one;
    
    grainCounter=one*2;
    printf("%lf ",grainCounter);
    one=grainCounter;
    return grains(one,total-1);
}
