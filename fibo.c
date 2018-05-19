#include<stdio.h>
int main()
{
    int n,a,b,c,i;
     a=0;
     b=1;
    printf("enter the number");
    scanf("%d",&n);
    printf("\n fibonacci series");
    printf("%d%d",a,b);
    for(i=0;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d",c);

    }
    return 0;
}
