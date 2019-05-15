#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *right;
  struct node *left;
}*root = NULL;

struct node* insert(struct node *tree,int item)
{
  if(tree == NULL)
    {tree = (struct node *)malloc(sizeof(struct node));
    tree->left = NULL;
    tree->right = NULL;
    tree->data = item;
    }
  else if(tree->data > item)
    {
      tree->left = insert(tree->left,item);
    }
  else if(tree->data < item)
    {
      tree->right = insert(tree->right,item);
    }
  else if(tree->data == item)
    printf("Duplicate data\n");
  return tree;
}

void search(struct node *tree,int item)
{
  if(tree == NULL)
  {
    printf("No such item\n");
  }
  else if(tree->data == item)
    {
      printf("Found item\n");
    }
  else if(tree->data > item)
    {
      search(tree->left,item);
    }
  else if(tree->data < item)
    {
      search(tree->right,item);
    }
}

void preorder(struct node *tree)
{
  if(tree == NULL)
    return;
  printf("%d\n",tree->data);
  preorder(tree->left);
  preorder(tree->right);
}
void inorder(struct node *tree)
{
  if(tree == NULL)
    return;
  preorder(tree->left);
  printf("%d\n",tree->data);
  preorder(tree->right);
}
void postorder(struct node *tree)
{
  if(tree == NULL)
    return;
  preorder(tree->left);
  preorder(tree->right);
  printf("%d\n",tree->data);
}

void MinValue(struct node *tree){
  while(tree->left != NULL){
    tree = tree->left;
  }
  printf("Min Value %d\n",tree->data);
}

void MaxValue(struct node *tree){
  while(tree->right != NULL){
    tree = tree->right;
  }
  printf("Max Value%d\n",tree->data);
}

int main()
{

  int ch,item;
  do{
  printf("\n\tMENU\n\t1)Insert\n\t2)search\n\t3)Preorder\n\t4)inorder\n\t5)postorder\n\t6)MinValue\n\t7)MaxValue\n\tEnter choice");
  scanf("%d",&ch);
  switch (ch) {
    case 1 : printf("Enter the value\n");
            scanf("%d",&item);
            root = insert(root,item);
              break;
    case 2 : printf("Enter the value\n");
            scanf("%d",&item);
              search(root,item);
              break;
    case 3 : preorder(root);
              break;
    case 4 : inorder(root);
              break;
    case 5 : postorder(root);
              break;
    case 6 : MinValue(root);
              break;
    case 7 : MaxValue(root);
              break;
  }
}while(ch!=0);
  return 0;
}
