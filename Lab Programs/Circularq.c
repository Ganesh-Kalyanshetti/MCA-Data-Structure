#include<stdio.h>
#include<stdlib.h>
int front = -1;
int rear = -1;
int n;
int a[10];

void insert()
{
    int item;
    printf("\nenter the item to be inserted:\n");
    scanf("%d",&item);
    if((rear + 1) % n == front)
    {
        printf("stack is fulll");
        return;
    }
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        a[rear]=item;
    }
    else{
    rear=(rear+1)%n;
    a[rear]=item;

    }
    printf("\nelement %d is inserted\n",item);

}
void pop()
{
    if(front==-1 && rear == -1)
    {
        printf("\nstcak is empty\n");
        

    }
    else if(front==rear)
    {
        printf("\nelemenst is delated\n");
        front=-1;
        rear=-1;
    }
    else{
        printf("\nelemenst is delated\n");
        front=((front+1)%n);
    }
    
}

void display()
{
     if(front==-1 && rear == -1)
    {
        printf("\nstcak is empty\n");
        return ;

    }
    else{
        int i=front;
        printf("\nelements are:");
    while (i != rear)
    {
        printf("%d ", a[i]);
        i = (i + 1) % n;
    }
    printf("%d",a[rear]);
    printf("\n");

        
    }
}
void main()
{
    int ch;
    printf("enter the Size of array:");
    scanf("%d",&n);
    while(1)
    {
        printf("\nenter the choice:\n1.insert\n2.delete\n3.display\n4.exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);

        default:
            printf("\ninvalid Choice\n");
            break;
        }
    }
}
