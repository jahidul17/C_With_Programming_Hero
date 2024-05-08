#include <stdio.h>
#include <stdlib.h>

void fun(int x){
    printf("Fun x er address - %p\n",&x);
    x=200;
    printf("%d\n",x);
}


int main()
{
    
    int x=10;
 
    fun(x);
    printf("Main x er address - %p\n",&x);
    printf("%d\n",x);
    

    return 0;
}
