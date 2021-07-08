// Jonse function chalana hai voh uncomment kar dena bus int main mae
// multiply lines ko comment and uncomment karne ka shortcut hai ctrl + /


#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;

class Node{
    public:
    int data;
    Node* next;
};
Node* head = NULL; // declared it globally so that it can be editted easily
// FUnction to print value of linked List and there total count
int ListLength(Node* head){
    int count = 0;
    Node* current = head;
    while(current!=NULL){
        count++;
        cout<<current -> data <<" ";
        current = current -> next;
        // head = head -> next;
    }
    return count;
}

void deleteatstart(){
    Node* ptr = head;
    ptr =ptr->next;
    head = ptr;
}


void deleteatend(){
    Node* ptr =head;
    Node* prev = NULL;
    while(ptr->next != NULL){
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next =NULL;

}



void deleteatanypt(){
    Node* ptr = head;
    Node* prev = NULL;
    int pos;
    cout<<"Pos:";
    cin>>pos;
    for(int i=0;i<pos-1;i++){
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = ptr->next;
    ptr->next = NULL;
}

// iska all in one wala tu bana bc (◕ᴗ◕✿)
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
    second -> data = 20;
    second -> next = third;
    third -> data = 30;
    third -> next = NULL;
    int count = ListLength(head);
    cout<<"\nTotal elements: "<<count<<endl;

    // deleteatstart();
    // ListLength(head);

    // deleteatend();
    // ListLength(head);

    // deleteatanypt();
    // ListLength(head);
    

}