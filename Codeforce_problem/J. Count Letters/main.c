#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    char s[1000001];//10^7 size
    scanf("%s",&s);


    int count[26]= {0},value;

    for(int i=0; i<strlen(s); i++)
    {
        value=s[i]-97;
        count[value]++;

    }

    for(int i=0; i<26; i++)
    {

        /*if(count[i]!=0)
        {
            value=i+97;
            printf("%c : %d\n",value,count[i]);

        }*/

        if(count[i]==0)
        {
            continue;
        }
        printf("%c : %d\n",i+97,count[i]);


    }



    return 0;
}
