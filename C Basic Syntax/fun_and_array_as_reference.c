#include <stdio.h>
#include <stdlib.h>

//int a[],int n
//void fun(int *a,int n){
void fun(char *str){
    // for(int i=0;i<n;i++){
    //     printf("%d ",a[i]);
    // }
    // printf("\n");

    // *a=500;

    // a[0]=500;

     str[0]='X';

}

int main()
{
    // int a[5]={10,20,30,40,50};

    // fun(a,5);

    // for(int i=0;i<5;i++){
    //     printf("%d ",a[i]);
    // }

    char str[10]="Zahidul";
    fun(str);
    printf("%s",str);

    return 0;
}
