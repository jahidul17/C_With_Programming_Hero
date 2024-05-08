#include <stdio.h>
#include <stdlib.h>

int main()
{
    //char a[10]={'z','a','h','i','d'};

    //char a[10]="zahids";\\Gurentee

    //printf("%s",a);

    char a[100];
    //gets(a);

    fgets(a,20,stdin);
    a[10]='\0';

    printf("%s\n",a);
    printf("%d\n",sizeof(a));



    return 0;
}
