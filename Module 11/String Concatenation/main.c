#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{

    char a[100],b[100];

    scanf("%s %s",&a,&b);


    int k=strlen(a);

    for(int i=0;i<=3/*strlen(b)*/;i++){
        a[k]=b[i];
        k++;
    }



    a[k]='\0';
    printf("%s %s",a,b);

    /*
    Use concatetion function-----

    strcat(a,b);
    */

    return 0;
}
