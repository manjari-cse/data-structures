#include<stdio.h>
void enqueue(int);
int dequeue();
void traverse();
int front=0,ele,element,rear=0;
int queue[40];
int max=3;
void main()
{
    int opt;
    do{
    printf("\nEnter the option\n1.enqueue 2.dequeue 3.view");
    scanf("%d",&opt);
    switch(opt){
        case 1:
        if(rear==max)
        printf("\nqueue is full");
        else
        {
        printf("\nenteR the element");
        scanf("%d",&element);
        enqueue(element);
        }
        break;
        case 2:
        if(front==rear)
        printf("\nqueue is empty");
        else
        {
        ele=dequeue();
        printf("%d has poped",ele);
        }
        break;
        case 3:
        traverse();
        break;
    }
}while(opt!=0);
}
void enqueue(element)
{
    queue[rear]=element;
    rear++;
}
int dequeue()
{
ele=queue[front];
front++;
return ele;
}
void traverse()
{int i;
for(i=front;i<max;i++)
printf("%d",queue[i]);
}
