#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }

    //int zero=0,five=0;

    int count[4]={0}; //0-3 assign 0;

    for(int i=0;i<n;i++){

        /*if(a[i]==0){
            zero++;
        }
        if(a[i]==5){
            five++;
        }*/

        /*if(a[i]==0){
            count[0]++;
        }
        if(a[i]==2){
            count[2]++;
        }
        */

        int val=a[i];
        count[val]++;


    }

    for(int i=0;i<4;i++){
        printf("%d -- %d\n",i,count[i]);
    }

    //printf("0-- %d\n",count[0]);
    //printf("1-- %d\n",count[1]);
    //printf("2-- %d",count[2]);

    return 0;
}
