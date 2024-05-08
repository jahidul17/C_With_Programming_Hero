#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
int main()
{
    char s[100];

    scanf("%s",s);

    int val;
    int count[26]={0};
    //count string
    for(int i=0;i<strlen(s);i++){

        val=s[i]-'a';
        count[val]++;

    }

    //a-z print and count
    for(int i=0;i<26;i++){
            if(count[i]==0){
                continue;
            }
        printf("%c - %d\n",i+97,count[i]);
    }

    printf("\n");
   //accroding sequence given string and count

   for(int i=0;i<strlen(s);i++){
        val=s[i]-97;
        printf("%c - %d\n",s[i],count[val]);
   }

   printf("\n");

   //according sequence but char print only one
   for(int i=0;i<strlen(s);i++){
        val=s[i]-97;

        if(count[val] != 0){
            printf("%c - %d\n",s[i],count[val]);
        }

        count[val]=0;

   }




    return 0;
}
