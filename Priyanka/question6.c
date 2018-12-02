//program to represent inorder,post order and preorder traversal of an binary try 
//where binary tree is a tree where each node have one right child and one left child 
#include<stdio.h>
#include<stdlib.h>

struct node
{
struct node*right; //pointer to point to the right child
struct node*left;  //pointer to point to the left child
int data;
};

struct node*newnode(int data) //here newnode is a fuction of type (struct node)
{
struct node*node;
node=(struct node*)malloc(sizeof(struct node));
node->data=data;
node->right=NULL;
node->left=NULL;
return(node); //return the node value
}

void inorder(struct node*node) //here whole structure that is (struct node) is passed to this fuction by address
{
if(node==NULL) //unfortunately!! if the node is null execution of these function will be terminated and control will pass over to main funtion
{
return;
}
inorder(node->left); //recur the left sub tree
printf("%d\n",node->data);//printf the data
inorder(node->right);//recur the right sub tree
}

void preorder(struct node*node) //here whole structure that is (struct node) is passed to this fuction by address
{
if(node==NULL) //unfortunately!! if the node is null execution of these function will be terminated and control will pass over to main funtion
{
return;
}
printf("%d\n",node->data);//printf the data
preorder(node->left); //recur the left sub tree
preorder(node->right);//recur the right sub tree
}

void postorder(struct node*node) //here whole structure that is (struct node) is passed to this fuction by address
{
if(node==NULL) //unfortunately!! if the node is null execution of these function will be terminated and control will pass over to main funtion
{
return;
}
postorder(node->left); //recur the left sub tree
postorder(node->right);//recur the right sub tree
printf("%d\n",node->data);//printf the data
}

void main()
{
struct node*root;
root=newnode(1);
root->right=newnode(2);
root->left=newnode(3);

printf("if tree is traversed in in order \n");
inorder(root);
printf("if tree is traversed in postorder \n");
preorder(root);
printf("if tree is traversed in postorder \n");
postorder(root);
}