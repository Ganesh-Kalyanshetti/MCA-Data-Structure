#include <stdio.h>
int first=-1;
int rare=-1;
int n;
void insert(int a[],int e)
{
    if(rare==n-1)
    {
        printf("Queue is Full");
    }
    else 
    {
        if(first==-1)
        {
            first=0;
        }
        
        rare++;
        printf("%d is inserted\n",e);
        a[rare]=e;
        
    }
}
void pop(int a[])
{
    if(rare==-1|| first<rare)
    {
        printf("stack is empty\n");
        
    }
    else if(front==rear){
      front =-1;
      rear =-1;
    }
    else{
        printf("element is delated %d",a[first]);
        a[first]++;
        
    }
}
void Display(int a[])
{
    int i;
	if(rare == -1 || first > rare)
	{
		printf("The queue is Underflow \n");
		
	}
	else{
	    printf("The elements are \n");
		for(int i = first; i<=rare; i++)
		{
			printf("%d \n",a[i]);
		}
	}
}
void peek(int a[])
{
    printf("top element added is %d ",a[first]);
    
}
int main() {
   
   int a[20],e,ch;
   printf("enter the size of array:");
   scanf("%d",&n);
   while(1){
   printf("enter the choice:\n1.Insert\n2.Pop\n3.Display\n4.Peek\n");
   scanf("%d",&ch);
   
   switch(ch)
   {
       case 1:
       printf("enter the element");
       scanf("%d",&e);
       
       insert(a,e);
       break;
       case 2:
       pop(a);
       break;
       case 3:
       Display(a);
       break;
       case 4:
       peek(a);
       default:
      printf("nter the valid option:\n");
       break;
       
   }
   }
   
}
