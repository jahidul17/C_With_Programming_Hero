#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    long long b;
    float c;
    char d;

    scanf("%d",&a);
    scanf("%lld",&b);
    scanf("%f",&c);
    scanf(" %c",&d); //space for get char otherwise use get function.

    printf("%d\n",a);
    printf("%lld\n",b);
    printf("%.2f\n",c);
    printf("%c\n",d);

    return 0;
}
