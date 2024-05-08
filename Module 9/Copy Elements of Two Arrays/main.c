#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x,y;
    scanf("%d",&x);

    int a[x];


    //Input
    for(int i=0; i<x; i++)
    {
        scanf("%d",&a[i]);
    }

    //print;
    for(int i=0; i<x; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    scanf("%d",&y);
    int b[y];
    //Input
    for(int i=0; i<y; i++)
    {
        scanf("%d",&b[i]);
    }
    //print

    for(int i=0; i<y; i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");

    //Combine
    int c[x+y];
    for(int i=0; i<x; i++)
    {
        c[i]=a[i];
    }

    int i=x;
    for(int j=0;j<y;j++){
        c[i]=b[j];
        i++;
    }

    printf("\n");
    printf("After combine\n");
    for(int i=0; i<x+y; i++)
    {
        printf("%d ",c[i]);
    }

    return 0;
}
