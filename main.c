#include <stdio.h>
#include <stdlib.h>
int a[100][100];
void mindSweeperBoard(int r,int c,int m)
{
    srand(time(NULL));
    int k,j,i;
    for(i=0;i<m;)
    {
        int row=rand()%r;
        int col=rand()%c;
        if(a[row][col]!=1)
        {
            a[row][col]=1;
            i++;
        }
    }
    for(k=0;k<r;k++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[k][j]);
        }
        printf("\n");
    }
}
int main()
{
    int r,c,m;
    printf("enter no of rows,columns and mines...");
    scanf("%d",&r);
    scanf("%d",&c);
    scanf("%d",&m);
    mindSweeperBoard(r,c,m);
    return 0;
}

