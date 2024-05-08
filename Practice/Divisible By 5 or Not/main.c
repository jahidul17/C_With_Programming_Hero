#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;

    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(i%5==0){
            printf("%d Yes\n",i);
        }
        else{
            printf("%d No\n",i);
        }
    }

    return 0;
}
