#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[1000001];
    int summation=0;

    scanf("%s",&s);

    for(int i=0;i<strlen(s);i++){
        summation=summation+(s[i]-'0');//'0'=48;
    }

    printf("%d",summation);

    return 0;
}
