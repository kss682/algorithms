#include<bits/stdc++.h>

using namespace std;

struct node{
  int item;
  struct node *left;
  struct node *right;
}*root = NULL;

struct node* insert(struct node *tree,int item){
  if(tree == NULL){
    tree = (struct node *)malloc(sizeof(struct node));
    tree->item = item;
    tree->left = NULL;
    tree->right = NULL;
  }
  else if(tree->item < item){
  tree->right = insert(tree->right,item);
  }
  else if(tree->item > item){
    tree->left = insert(tree->left,item);
  }
  return tree;
}

void inorder(struct node *tree)
{
  if(tree == NULL){
      return;
  }
  inorder(tree->left);
  printf("%d\n",tree->item);
  inorder(tree->right);

}

int main(){
  int N,i,value;
  vector<int> arr;
  cout<<"Enter the limit\n";
  cin>>N;
  cout<<"Enter the array\n";
  for(i=0;i<N;i++){
    cin>>value;
    arr.push_back(value);
  }
  for(i=0;i<N;i++){
    root = insert(root,arr[i]);
  }
  cout<<"Sorted array\n";
  inorder(root);

}
