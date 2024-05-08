#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char x[21],y[21];

    scanf("%s %s",x,y);

    int cmp=strcmp(x,y);

    if(cmp<0){
        printf("%s",x);
    }
    else if(cmp==0){
        printf("%s",x);
    }
    return 0;
}
