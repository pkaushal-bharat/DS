#include<stdio.h>
#include<malloc.h>
void Insert();
void Delete();
void Display();
void exit();
struct node
{
 int data;
 struct node *next;
}*front=NULL,*rear=NULL;
int main()
{
 int choice;
 printf("\nQUEUE OPERATIONS USING ARRAY");
 printf("\n--------------------------------");
 printf("\n 1.INSERT\n 2.DELETE\n 3.DISPLAY\n
4.EXIT");
 while(1)
 { 
 printf("\nEnter the Choice:");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 {
 Insert();
 break;
 }
 case 2:
 {
 Delete();
 break;
 }
 case 3:
 {
 Display();
 break;
 }
 case 4: 
 {
 exit(1);
 }
 default:
 {
 printf ("\nPlease Enter a Valid
Choice(1/2/3/4)");
 }
 }
 }
}
void Insert()
{
 struct node *p;
 int added_element;
 p=(struct node *)malloc(sizeof(struct node));
 printf(" Enter a value to be Adding in Queue:");
 scanf("%d",&added_element);
 p->data=added_element; 
 p->next=NULL;
 if(front==NULL)
 front=p;
 else
 rear->next=p;
 rear=p;
}
void Delete()
{
 struct node *p;
 if(front==NULL)
 printf("Queue Underflow\n");
 else
 {
 p=front;
 printf("Element deleted from Queue is : %d\n",p-
>data);
 front=front->next;
 free(p);
 } 
}
void Display()
{
 struct node *q;
 q=front;
 if(front==NULL)
 printf("Queue is empty");
 else
 {
 printf("Queue element is\n");
 while(q!=NULL)
 {
 printf("%d\n",q->data);
 q=q->next;
 }
 }
} 