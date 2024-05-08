#include <stdio.h>
#include <stdlib.h>

int main()
{
    // char a[]="zahidul";

    // int sz=sizeof(a)/sizeof(char);

    // printf("%d\n",sz);

    char a[100];
   
    fgets(a,30,stdin);
    a[10]='\0';

    printf("%s\n",a);
    printf("%d\n",sizeof(a));

    return 0;
}
