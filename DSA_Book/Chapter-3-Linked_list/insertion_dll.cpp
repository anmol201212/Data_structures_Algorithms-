#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};
Node* head = NULL;

// Function to print value of linked List and there total count
void ListLength(Node* head){
    int count = 0;
    Node* current = head;
    Node* previous = NULL;
    cout<<"From starting: ";
    while(current!=NULL){
        count++;
        cout<<current -> data <<" ";
        previous = current;
        current = current -> next;
        // head = head -> next;
    }
    cout<<endl<<"From End: ";
    do{
        cout<<previous -> data <<" ";
        previous = previous -> prev;
        // head = head -> next;
    }
    while(previous!=NULL);
    cout<<"\nTotal Elements: "<<count<<endl;
}



void insertatstart(){
    Node* newdll = new Node();
    cout<<"Enter the value of the data: ";
    cin>> newdll -> data;
    newdll->next= head;
    head -> prev = newdll;
    newdll-> prev = NULL;
    head = newdll;
}


void insertatend(){
    Node* newdll = new Node();
    Node* ptr = head;
    Node* previous = NULL;
    cout<<"Enter the value of the data: ";
    cin>> newdll -> data;
    while(ptr != NULL){
        previous=ptr;
        ptr=ptr->next;
    }
    previous -> next = newdll;
    newdll -> next = NULL;
    newdll -> prev = previous;
}

void insertatanypt(){
    Node* newdll = new Node();
    Node* ptr = head;
    Node* previous = NULL;
    cout<<"Enter the position: ";
    int pos;
    cin>>pos;
    cout<<"Enter the value of the data: ";
    cin>> newdll -> data;
    for(int i=0;i<pos-1;i++){
        previous = ptr;
        ptr = ptr->next;
    }
    newdll->prev = previous;
    newdll->next = ptr;
    previous->next = newdll;
    ptr->prev = newdll;



}
int main(){
    Node* second = NULL;
    Node* third = NULL;

    // Allocating 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();

    //Giving data
    head -> data = 10;
    head -> next = second;
    head -> prev =NULL;

    second -> data = 20;
    second -> next = third;
    second -> prev = head;

    third -> data = 30;
    third -> next = NULL;
    third -> prev = second;
    // insertatstart();
    // ListLength(head);

    // insertatend();
    // ListLength(head);

    insertatanypt();
    ListLength(head);




    
}
