#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);

    int a[n];

    //Array Initialization.
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    //Print initial array
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    //Deleteing position
    int position;
    scanf("%d",&position);

    for(i=position;i<n-1;i++){
        a[position]=a[position+1];
    }

    //Print after delete.
    for(i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }


    return 0;
}
