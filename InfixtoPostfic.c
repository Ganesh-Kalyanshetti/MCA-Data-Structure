#include<stdio.h>
#include<ctype.h>
int top=-1;
char stack[20];
void push(char e)
{
    stack[++top]=e;
    
    
}
char pop()
{
    if(top==-1)
    {
        return -1;
    }
    else{
    
    return stack[top--];
    }
    
}
int priority(char e)
{
    if(e=='('){
        return 0;
    }
    else if(e=='+' || e=='-')
    {
        return 1;
    }
    else if(e=='*' || e=='/')
    {
        return 2;
    }
    else if(e=='^')
    {
        return 3;
    }
}
void  main()
{
    char *e;
    char exp[50];
    char x;
    printf("enter the expression:");
    scanf("%s",exp);
    e=exp;
    while(*e!='\0')
    {
        if(isalnum(*e))
        {
            printf("%c",*e);
        }
        else if(*e=='(')
        {
            push(*e);
        }
        else if(*e==')')
        {
            while((x=pop())!='(')
            {
                printf("%c",x);
                // pop(stack(top));
            }
            
        }
        else
        {
            while(priority(stack[top])>=priority(*e))
            {
                printf("%c",pop());
            }
            
            push(*e);
            
        }
        
       e++;
    }
    
    
     while(top!=-1){
            printf("%c",pop(top));
        }
}
