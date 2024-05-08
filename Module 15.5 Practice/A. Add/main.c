#include <stdio.h>
#include <stdlib.h>

void summation(int *x,int *y){

printf("%d",*x+*y);

}

int main()
{
    int a,b;

    scanf("%d %d",&a,&b);

    summation(&a,&b);

    return 0;
}
