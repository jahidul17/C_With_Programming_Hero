#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,temp;
    scanf("%d",&n);

    int a[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    //Reverse

    for(i=0,j=n-1; i<j; i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }

    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }


    return 0;
}
