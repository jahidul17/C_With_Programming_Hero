#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;

    scanf("%d %d",&n,&m);
    int a[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {

            scanf("%d",&a[i][j]);

        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i==n-1)
            {
                printf("%d ",a[i][j]);
            }
        }

    }
    printf("\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {

            if(j==m-1)
            {
                printf("%d ",a[i][j]);
            }
        }

    }



    return 0;
}
