#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);

    int a[n+1];

    //Array Initialization.
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    //Print initial array
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    //Inserting value and position
    int position,value;

    scanf("%d %d",&position,&value);

    for(i=n;i>=position+1;i--){
        a[i]=a[i-1];
    }

    a[position]=value;


    //Print inserting value
    for(i=0;i<=n;i++){
        printf("%d ",a[i]);
    }


    return 0;
}
