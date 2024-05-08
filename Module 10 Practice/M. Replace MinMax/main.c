// Haven't accept

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,smallest,biggest,smallindex,bigindex;
    scanf("%d",&n);

    int a[n],i;

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    smallest=a[0];
    biggest=a[0];
    for(i=1; i<n; i++)
    {

        if(smallest>a[i])
        {
            smallest=a[i];
            smallindex=i;
        }

        if(biggest<a[i])
        {
            biggest=a[i];
            bigindex=i;
        }

    }


    for(i=0;i<n;i++){
        if(smallindex==i){
            a[i]=biggest;
        }
        if(bigindex==i){
            a[i]=smallest;
        }

        printf("%d",a[i]);
        if(i<n-1){
            printf(" ");
        }

    }


    return 0;
}
