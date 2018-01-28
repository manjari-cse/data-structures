#include<stdio.h>
void push();
int pop();
void traverse();
int top=0,ele,element;
int stack[40];
void main()
{
    int opt;
    do{
    printf("Enter the option\n1.push 2.pop 3.view");
    scanf("%d",&opt);
    switch(opt){
        case 1:
        printf("enteR the element");
        scanf("%d",&element);
        push();
        break;
        case 2:
        ele=pop();
        printf("%d has poped",ele);
        break;
        case 3:
        traverse();
        break;
    }
}while(opt!=0);
}
void push()
{
    stack[top]=element;
    top++;
}
int pop()
{
top--;
ele=stack[top];
return ele;
}
void traverse()
{int i;
for(i=top-1;i>=0;i--)
printf("%d",stack[top]);
}
