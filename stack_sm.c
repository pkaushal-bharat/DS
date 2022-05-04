#include<stdio.h>
int stack[100],n,choice,top,element,i;
void push();
void pop();	
void display();
int main()
{
    top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\nSTACK OPERATIONS USING ARRAY");
    printf("\n--------------------------------");
    printf("\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT");
    do
    {
        printf("\nEnter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
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
void push()
{
    if(top>=n-1)
    {
        printf("\nSTACK is over flow");

    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&element);
        top++;
        stack[top]=element;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\nStack is under flow");
    }
    else
    {
        printf("\nThe popped elements is %d",stack[top]);
        top--;  
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }

}

