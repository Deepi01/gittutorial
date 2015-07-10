#include<stdio.h>
#include<stdlib.h>
#define size 4
struct stack
{
    int top;
    int element[size];
    struct stack *next;

};
typedef struct stack Stack;
Stack *top;
Stack *head;
Stack *tail;
void push(int);
int pop(int);
void display();
Stack s;
int ch,value;
void main(int argv, char* argc[])
{
    while(1)
    {
        printf("1.push\n 2.pop\n 3.display\n4.exit");
    printf("\n\nenter the choice");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        {
            printf("enter the value to push");
            scanf("%d",&value);
            push(value);
            printf("you have pushed a value");
            break;
        }
    case 2:{
        printf("popped value");
        value = pop();
        printf("%d",value);
        printf("you have popped a value");
        break;
    }
    case 3:{
        printf("status of stack");
        display();
        break;
    }
    case 4:{
        printf("exiting.......");
        return 0;
    }
    default:
        break;

}
}
}
int pop(value)
{
int i,top;
if(top==NULL)
{
    printf("stack is empty");
}
Stack *p = top;
for(i=0;i<value;i++)
{
   if(top == NULL)
   {
       return -1;
   }
   p=p->next;
}
return p->value;

}
void push(int value)
{
    if(top == NULL)
    {
     top = (Stack*)malloc(size of (Stack));
     top->value =  value;
     top->next=NULL;
    }
    else
    {
    top->next=(Stack*)malloc(size of (Stack));
    top->next->value=value;
    top=top->next;
    }
}
void display()
{
    int i;
    Stack *im;
    im=top;
    if(top==NULL)
    {
        printf("stack is empty");
    }
    else{
        printf("status of stack is\n");
        while(im->next!=NULL)
        {
            printf("%d\n",(im->value));
            im=im->next;
        }
        printf("%d\n",(im->value));
        im=im->next;
    }
}



