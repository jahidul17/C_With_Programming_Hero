#include <stdio.h>
#include <stdlib.h>

void fun(int *p){
    
    *p=500;
    printf("Address fun %p\n",*p);
}

int main()
{
    int x=100;

    fun(&x);

    printf("%d\n",x);
    printf("Address %p",x);
    
    return 0;
}

