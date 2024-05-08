#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int row=1;row<=n;row++){
        for(int sp=1;sp<=n-row;sp++){
            printf(" ");
        }
        for(int st=1;st<=row*2-1;st++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
