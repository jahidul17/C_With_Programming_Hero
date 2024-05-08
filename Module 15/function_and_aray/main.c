#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a[5]={10,20,30,40,50};

    int sz=sizeof(a)/sizeof(int);

    printf("%d",sz);

    return 0;
}
