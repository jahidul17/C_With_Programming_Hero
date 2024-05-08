#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5]={10,20,30,40,50};

    printf("%p\n",&a);
    printf("%p\n",&a[0]);
    printf("%p\n",&a[1]);
    printf("%p\n\n\n",&a[2]);

    //a[1]==*(a+1)
    //a[1]==*(1+a)
    //*(1+a)==1[a];
    //*(2+a)==2[a];

    printf("%d\n",*(a));
    printf("%d\n",*(a+2));
    printf("%d\n",*(2+a));
    printf("%d\n\n\n",*(2+a));

    printf("%d\n",a[1]);
    printf("%d\n",1[a]);
    printf("%d\n",3[a]);

    
    return 0;
}
