#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100],b[100];

    scanf("%s %s",&a,&b);

    int i=0;
    while(1)
    {
        if(a[i]=='\0' && b[i]=='\0')
        {
            printf(" A equal B");
            break;
        }
        else if(a[i]=='\0')
        {
            printf("A is smaller than B");
            break;
        }
        else if(b[i]=='\0')
        {
            printf("B is smaller than A");
            break;

        }


        if(a[i]==b[i])
        {
            i++;
        }
        else if(a[i]<b[i])
        {
            printf("A is smaller than B");
            break;
        }
        else
        {
            printf("B is smaller than A");
            break;

        }

    }


    /*
    Another way-----

    int v=strcmp(a,b);
    printf("%d",v);

    When a>b return 1
    or a<b return -1
    else a==b return 0

    */


    return 0;
}
