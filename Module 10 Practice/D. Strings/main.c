#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[11],b[11];
    int temp;

    scanf("%s %s",&a,&b);

    printf("%d ",strlen(a));
    printf("%d\n",strlen(b));
    printf("%s%s\n",a,b);

    for(int i=0;i<strlen(a);i++){
        if(i==0){

            temp=a[i];
            a[i]=b[i];
            b[i]=temp;
        }
        printf("%c",a[i]);
    }

    printf(" ");

     for(int i=0;i<strlen(b);i++){
        printf("%c",b[i]);
    }

    return 0;
}
