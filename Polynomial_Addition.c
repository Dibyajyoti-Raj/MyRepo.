#include<stdio.h>
#include<stdlib.h>
struct node
{
    int coff;
    int pow;
    struct node *next;
};
struct node *head=NULL, *temp,*newN,*head2=NULL,*x,*y;
void ex1()
{
    newN=(struct node*)malloc(sizeof(struct node));
    printf("Enter expressions coeficient and power.\n");
    scanf("%d%d",&newN->coff,&newN->pow);
    if(head==NULL)
    {
        head=newN;
        temp=newN;
        newN->next=NULL;
    }
    else
    {
        temp->next=newN;
        newN->next=NULL;
        temp=newN;
    }
    //if(newN->pow==0)
    //break;
}
void ex2()
{
     newN=(struct node*)malloc(sizeof(struct node));
    printf("Enter expressions coeficient and power.\n");
    scanf("%d%d",&newN->coff,&newN->pow);
    if(head2==NULL)
    {
        head2=newN;
        temp=newN;
        newN->next=NULL;
    }
    else
    {
        temp->next=newN;
        newN->next=NULL;
        temp=newN;
    }
}
int main()
{
int choice=1;
while(choice)
{
    printf("Enter choice.\n");
    scanf("%d",&choice);
    if(choice==1)
    ex1();
    else if(choice==2)
    ex2();
}
/*temp=head;
while(temp->next!=NULL)
{
    printf("%dx^%d\t",temp->coff,temp->pow);
    temp=temp->next;
}
printf("%dx^%d\n",temp->coff,temp->pow);
temp=head2;
while(temp->next!=NULL)
{
    printf("%dx^%d\t",temp->coff,temp->pow);
    temp=temp->next;
}
printf("%dx^%d\n",temp->coff,temp->pow);*/
x=head;
y=head2;
while(x->next!=NULL)
{
    y=head2;
    while(y->next!=NULL){
    if(x->pow==y->pow)
        x->coff=(x->coff)+(y->coff);
        y=y->next;
    }
    if(x->pow==y->pow)
        x->coff=(x->coff)+(y->coff);
    x=x->next;
}
y=head2;
while(y->next!=NULL){
    if(x->pow==y->pow)
        x->coff=(x->coff)+(y->coff);
    y=y->next;
    }
    if(x->pow==y->pow)
        x->coff=(x->coff)+(y->coff);

temp=head;
printf("sum of the two polynomials.\n");
while(temp->next!=NULL)
{
    printf("%dx^%d + ",temp->coff,temp->pow);
    temp=temp->next;
}
printf("%dx^%d\n",temp->coff,temp->pow);
return 0;
}