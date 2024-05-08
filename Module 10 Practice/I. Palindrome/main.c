#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[1001];

    int i,j,test=0;
    scanf("%s",&s);

    for(i=0,j=strlen(s)-1;i<j;i++,j--){
        if(s[i]!=s[j]){
            test++;
            break;
        }

    }

    if(test==1){
        printf("NO");
    }
    else{
        printf("YES");
    }

    return 0;
}
