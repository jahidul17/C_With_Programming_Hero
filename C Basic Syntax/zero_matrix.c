#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,col, i,j;

    scanf("%d %d",&row,&col);

    int a[row][col];

    int element=row*col;
    int count=0;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(a[i][j]==0){
                count++;
            }
        }
        printf("\n");
    }

    if(element==count){
        printf("Zero matrix\n");
    }
    else{
        printf("Not zero matrix.\n");
    }

    return 0;
}
