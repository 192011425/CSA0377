#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left,*right;
}*root=NULL,*newnode;

struct node *create(struct node*root,int val)
{
	if(root==NULL)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=val;
		newnode->left=NULL;
		newnode->right=NULL;
		return(newnode);
	}
	else if(val<root->data)
	root->left=create(root->left,val);
	else if(val<root->data)
	root->right=create(root->right,val);
	return(root);
}

void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d\t",root->data);
		inorder(root->right);
	}
}

void postorder(struct node *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d\t",root->data);
	}
}

void preorder(struct node *root)
{
	if(root!=NULL)
	{
		printf("%d\t",root->data);
		preorder(root->left);
		preorder(root->right);
		
	}
}

int main()
{

int choice,val ;
printf("\nOperations Available \n");
printf("1. Create \n2. Inorder \n3. Exit");
while(1){
printf("\nEnter Choice : ");
scanf("%d", &choice);
switch(choice)
{
	
case 1:
	printf("Enter the value");
	scanf ("%d",&val);
	root=create(root,val);
	break;
case 2:
    printf("Enter the value");
	scanf ("%d",&val);
	root=create(root,val);
	break;
case 3:
    printf("Enter the value");
	scanf ("%d",&val);
	root=create(root,val);
	break;
default:
printf("Invalid Choice. \n");
}
}
}

