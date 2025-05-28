#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int i,j,rows,n;
    int a[100][100] , b[100][100] , c[100][100];
    clock_t start,end;
    double cpu_time_used;

    printf("Enter the num N  *  N matrix:");
    scanf("%d",&n);
    if(n>100)
    {
        printf("max allowed size is 100");
        return 1;
    }
    srand(time(NULL));

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j] = rand()%10;
            b[i][j] = rand()%10;
            c[i][j] = 0;
        }
    }

    start =  clock();
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j] += a[i][j]*b[i][j];
        }
    }

    end = clock();
    cpu_time_used =((double)(end-start)) / CLOCKS_PER_SEC;

    printf("\nMatrix A:\n");

    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

     printf("\nMatrix B:\n");
     for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix c\n");
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    printf("\nthe time taken for multiplication :%f ms\n",cpu_time_used*10000);
    
}