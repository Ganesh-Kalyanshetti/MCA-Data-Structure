#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    printf("enter the size of array:");
    int n;
    int largest;
    int a[1000];
    scanf("%d",&n);

    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
        a[i] = rand()%10;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d   ",a[i]);
    }
    clock_t start,end;
    start = clock();
    largest =a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest =a[i];
        }

    }
    // clock = end();
    end = clock();
    double time_taken =((double)(end-start)) /CLOCKS_PER_SEC;
    printf("\nThe largest NUM is :%d",largest);

    printf("\nTime taken is %f",time_taken);

}
