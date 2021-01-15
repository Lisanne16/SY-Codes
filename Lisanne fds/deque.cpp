#include<stdio.h>
#include<stdlib.h>
#define size 15
 
int deque_arr[size];
int front=-1;
int rear=-1;
 
void insert_front(int item);
void insert_rear(int item);
int delete_front();
int delete_rear();
void display();
int isEmpty();
int isFull();
int getfront();
int getrear();
 
int main()
{
        int choice,item;
        while(choice!=8)
        {
                printf("\n\n1.Insert at the front end\n");     
                printf("2.Insert at the rear end\n");
                printf("3.Delete from front end\n");
                printf("4.Delete from rear end\n");
                printf("5.Display\n");
                printf("6.Get rear\n7.Get front \n8.Exit");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);
 
                switch(choice)
                {
                case 1:
                        printf("\nInput the element for inserting in queue : ");
                        scanf("%d",&item);
                        insert_front(item);
                        break;
                case 2:
                        printf("\nInput the element to be inserted in queue : ");
                        scanf("%d",&item);
                        insert_rear(item);
                        break;
                 case 3:
                        printf("\nElement deleted from front end is : %d\n",delete_front());
                        break;
                 case 4:
                        printf("\nElement deleted from rear end is : %d\n",delete_rear());
                        break;
                 case 5:
                        display();
                        break;
                 case 6:
                        getrear();break;
                 case 7:
                 	    getfront(); break;
                 default:
                        printf("\nInvalid Input!\n");break;
                }
                display();
        }
}
//case 1
void insert_front(int item)
{
        if( isFull() )
        {
                printf("\nCase : Queue Overflow\n");
                return;
        }
        if( front==-1 )
        {
                front=0;
                rear=0;
        }
        else if(front==0)
                front=size-1;
        else
                front=front-1;
        deque_arr[front]=item ;
}
 
void insert_rear(int item)
{
        if( isFull() )
        {
                printf("\nCase : Queue Overflow\n");
                return;
        }
        if(front==-1)  
        {
                front=0;
                rear=0;
        }
        else if(rear==size-1)  
                rear=0;
        else
                rear=rear+1;
        deque_arr[rear]=item ;
}
 
int delete_front()
{
        int item;
        if( isEmpty() )
        {
                printf("\nQueue Underflow\n");
                exit(1);
        }
        item=deque_arr[front];
        if(front==rear) 
        {
                front=-1;
                rear=-1;
        }
        else
                if(front==size-1)
                        front=0;
                else
                        front=front+1;
        return item;
}
 
int delete_rear()
{
        int item;
        if( isEmpty() )
        {
                printf("\nCase : Queue Underflow\n");
                exit(0);
        }
        item=deque_arr[rear];
 
        if(front==rear) 
        {
                front=-1;
                rear=-1;
        }
        else if(rear==0)
                rear=size-1;
        else
                rear=rear-1;
        return item;
}
 
int isFull()
{
        if ( (front==0 && rear==size-1) || (front==rear+1) )
                return 1;
        else
                return 0;
}
 
int isEmpty()
{
        if( front == -1)
                return 1;
        else
                return 0;
}
 
void display()
{
        int i;
        if( isEmpty() )
        {
                printf("\nCase : Queue is empty\n");
                return;
        }
        printf("\nQueue :\n");
        i=front;
        if( front<=rear )
        {
                while(i<=rear)
                        printf("%d ",deque_arr[i++]);
        }
        else
        {
                while(i<=size-1)
                        printf("%d ",deque_arr[i++]);
                i=0;
                while(i<=rear)
                        printf("%d ",deque_arr[i++]);
        }
        printf("\n");
}
int getrear()
{printf("The rear is %d",deque_arr[rear]);
}
int getfront()
{printf("the front is %d",deque_arr[front]);
}
