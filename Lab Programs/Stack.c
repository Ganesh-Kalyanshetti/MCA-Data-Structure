#include<stdio.h>
#include<stdlib.h>
int top=-1;
int n;
void push(int a[],int x)
{
    
    if(top==n-1)
    {
        printf("stack is full");
    }
    else{
        printf("%d is inserted\n",x);
    a[++top]=x;
    }
    
}
void pop(int a[])
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else{
    
    printf("delated elememt is %d",a[top]);
    top--;
    }
    
}
void display(int a[])
{
    if(top==-1){
        printf("stack is empty\n");
    }
    else{
    int i;
    printf("elements are:");
    for(i=top;i>-1;i--)
    {
        printf("\n%d",a[i]);
    }
    }
}
void  main()
{
    int a[10],x;
    int ch;
    printf("enter the size of array :");
    scanf("%d",&n);
    while(1)
    {
        printf("\nenter the choice:\n1.push\n2.pop\n3.display\n4.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("enter the number:");
            scanf("%d",&x);
            push(a,x);
            break ;
            
            case 2:
            pop(a);
            break ;
            
            case 3:
            display(a);
            break;
            
            case 4:
            exit(0);
            
            
            default:
            printf("invlaid option\n");
        }
        
        
    }
    
    
}
   
