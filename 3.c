#include<stdio.h>

int series(int one,int n)
{
    int dummy;
    if (n==0)
        return 0;
    
    dummy=one*2;
    
    printf("%d ",dummy);
    one=dummy;
    return series(one,n-1);
}
int main()
{
    int start,end;
    printf("Enter the Starting Term      :  ");
    scanf("%d",&start);
    printf("Upon which extent of number  :  ");
    scanf("%d",&end);
    printf("Series is = %d ",start);
    int ans = series(start, end);
    if(ans==0)
    {
    printf("\n");
    }
    printf("\n");
    return 0;
}
