#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
    //int count=0;

    scanf("%s",&a);

    
    // for(int i=0;a[i]!='\0';i++){
    //     count++;
    // }

    int count=strlen(a);

    printf("%d",count);

    return 0;
}



