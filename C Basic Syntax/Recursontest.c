#include <stdio.h>
#include <stdlib.h>

void fun(int i){

    if(i>=6){
        return;
    }

    printf("%d ",i);
    fun(i+2);

}

int main()
{
    fun(0);
    
    return 0;
}
