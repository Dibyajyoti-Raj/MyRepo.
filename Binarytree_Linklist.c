                                                //Binary tree for insertion, deletion and traversing.
#include<stdio.h>
#include<stdlib.h>
int max=0,a;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL,*prev=NULL,*head=NULL;
void LL(struct node *root)
{
    if(root==NULL)
    return;
    LL(root->left);
    if(prev==NULL)
    head=root;
    else
    {
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    LL(root->right);
}
struct node *creat()
{
    struct node *newN;
    int x;
    newN=(struct node*)malloc(sizeof(struct node));
    printf("Enter data.\n");
    scanf("%d",&x);
    if(x==-1)
    return 0;
    else
    {
        newN->data=x;
        printf("Enter Left Child.\n");
        newN->left=creat();
        printf("Enter Right Child.\n");
        newN->right=creat();
        return newN;
    }
}
void display(struct node *head)
{
    /*root=head;
    while(root->right!=NULL)
    {
        printf("%3d",root->data);
        root=root->right;
    }*/
    if(head==0)
    return;
    printf("%2d",head->data);
    display(head->right);
}
void in(struct node *root)
{
    if(root==0)
    return;
    in(root->left);
    printf("%2d ",root->data);
    in(root->right);
}
int main()
{
    int x,c=1;
    root=creat();
    printf("\nInOrder=");
    in(root);
    LL(root);
    printf("LinkList is \n");
    display(head);
    return 0;
}