#include <stdio.h>
#include <stdlib.h>
void digitseparet(int m)
{

    if(m==0)
    {
        return;
    }
    int x=m%10;
    digitseparet(m/10);
    printf("%d ",x);

}

int main()
{
    int t;
    scanf("%d",&t);

    while(t>=1)
    {
        int n;
        scanf("%d",&n);

        digitseparet(n);
        if(n==0)
        {
            printf("0");
        }
        printf("\n");

        t--;
    }


    return 0;
}
