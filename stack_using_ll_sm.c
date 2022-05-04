#include<stdio.h>
#include<malloc.h>
void push();
void pop();
void display();
void exit();
struct node
{
 int data;
 struct node *next;
}*top=NULL;
int main()
{
 int choice;
 printf("\nSTACK OPERATIONS USING LINKED LIST");
 printf("\n--------------------------------");
 printf("\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT");
 while(1)
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
void push()
{
 struct node *p;
 int pushedelement;
 p=(struct node *)malloc(sizeof(struct node));
 printf(" Enter a value to be pushed in stack:");
 scanf("%d",&pushedelement);
 p->data=pushedelement;
 p->next=top; 
 top=p;
}
void pop()
{
 struct node *p;
 if(top==NULL)
 printf("Stack is empty");
 else
 {
 p=top;
 printf("Popped element is %d",p->data);
 top=top->next;
 free(p);
 }
}
void display()
{
 struct node *q;
 q=top;
 if(top==NULL) 
 printf("Stack is empty");
 else
 {
 printf("Stack element is\n");
 while(q!=NULL)
 {
 printf("%d\n",q->data);
 q=q->next;
 }
 }
} 