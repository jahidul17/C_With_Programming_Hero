#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    char a[n];
    int summation=0;

    scanf("%s",a);
    for(int i=0;i<n;i++){
            summation=summation+(a[i]-48);

    }

    printf("%d",summation);

    return 0;
}
