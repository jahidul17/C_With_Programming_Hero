#include <stdio.h>
#include <stdlib.h>


int main()
{
    char s[205];
    
    fgets(s,205,stdin);

    

    int count=0;

    for(int i=0;i<205;i++){
        if(s[i]=='\0'){
            break;
        }

        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
        count++;
    }

    }

      
    printf("%d",count);

    return 0;
}
