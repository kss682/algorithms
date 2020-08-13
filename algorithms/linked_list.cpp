#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
}*HEAD=NULL;


void insert(int value){
    node *ptr;
    ptr = (node*)malloc(sizeof(node));
    ptr->data = value;
    ptr->next = NULL;
    
    if(HEAD == NULL)
        HEAD = ptr;
    else{
        node *temp = HEAD;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = ptr;
    }
}


void delete_value(int value){
    node *temp1, *temp2, *del;
    temp1 = temp2 = HEAD;
    while(temp2 != NULL){
        if((temp2 == HEAD) && (temp2->data==value)){
            HEAD = temp2->next;
            del = temp2;
            temp2 = temp1 = HEAD;
            free(del);
        }
        else if(temp2->data == value){
            temp1->next = temp2->next;
            del = temp2;
            temp2 = temp2->next;
            free(del);
        }
        else{
            temp1 = temp2;
            temp2 = temp2->next;
        }
    }
    
}


void search(int value){
   int counter = 0;
   node *temp;
   temp = HEAD;
   while(temp != NULL){
      if(temp->data == value)
            cout<<value<<" is at position: "<<counter<<endl;
      counter++;
      temp = temp->next;
   }
  cout<<endl;
}


void print_linkedlist(){
   node *temp;
   temp = HEAD;
   while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
   }
   cout<<endl;
}



int main(){
    int ch = 0, value;
    while(ch != 5){
        cout<<"1.Insert\n2.Delete\n3.Search\n4.Print\n";
        cin>>ch;
        switch(ch){
            case 1: cout<<"Enter the value to insert: \t";
                    cin>>value;
                    insert(value);
                    break;            

            case 2: cout<<"Enter the value to delete: \t";
                    cin>>value;
                    delete_value(value);
                    break;
            
            case 3: cout<<"Enter the value to search: \t";
                    cin>>value;
                    search(value);
                    break;
            case 4: print_linkedlist();
            
        }
    }
}

