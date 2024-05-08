#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int a[100],b[100];

    scanf("%s %s",&a,&b);


    for(int i=0;i<strlen(b);i++){

        a[i]=b[i];


    }

    printf("%s %s",a,b);

    /*
    Use built in function;

    strcpy(a,b);

    printf("%s %s",a,b);

    */

    return 0;
}
