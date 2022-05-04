#include<stdio.h>
int queue[100],n=0,choice,front,rear,element,i;
void add();
void del();	
void display();
int main()
{
    front=-1; rear=-1;
    printf("\n Enter the size of QUEUE[MAX=100]:");
    while(!(n<=100 && n>0))scanf("%d",&n);
    printf("\nQUEUE OPERATIONS USING ARRAY");
    printf("\n--------------------------------");
    printf("\n 1.INSERT\n 2.DELETE\n 3.DISPLAY\n 4.EXIT");
    do
    {
        printf("\nEnter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                add();
                break;
            }
            case 2:
            {
                del();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\nEXIT POINT ");
                break;
            }
            default:
            {
                printf ("\nPlease Enter a Valid Choice(1/2/3/4)");
            }

        }
    }
    while(choice!=4);
    return 0;
}
void add()
{
    if(rear==n-1 )
    {
        printf("\nQueue is over flow");
    }
    else
    {
        if(front==-1)front=0;
        printf(" Enter a value to be added:");
        scanf("%d",&element);
        rear++;
        queue[rear]=element;
    }
}
void del()
{
    if(front==-1)
    {
        printf("\nQueue is empty");
    }
    else {
    	if(front>rear){
    		front=rear=-1;
    		printf("\nQueue is empty");
		}
    	else
    	{
        	printf("\nThe deleted elements is %d",queue[front]);
        	front++;
    	}
	}
}
void display()
{
    if(front==-1)
    {
        printf("\n The QUEUE is empty");
    }
    else
    {
        printf("\n The elements in QUEUE \n");
        for(i=front; i<=rear; i++)
            printf("\n%d",queue[i]);
        printf("\n Press Next Choice");
    }

}