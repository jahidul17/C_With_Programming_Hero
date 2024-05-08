#include <stdio.h>
#include <stdlib.h>

// or int a[],int n
void fun(int *a,int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

int main()
{ 
    int a[5]={10,20,30,40,50};

    int sz=sizeof(a)/sizeof(int);

    fun(a,sz);

    
    return 0;
}
