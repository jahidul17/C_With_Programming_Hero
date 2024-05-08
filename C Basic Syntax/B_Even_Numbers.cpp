#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=2;i<=n;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
        else{
            printf("-1");
        }
        
    }

    return 0;
}
