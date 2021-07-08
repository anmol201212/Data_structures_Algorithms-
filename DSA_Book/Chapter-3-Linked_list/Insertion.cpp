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




void insertatstart(){
    Node* newll =NULL;
    newll = new Node();
    cout<<"Enter the value of the data: ";
    cin>> newll -> data;
    newll->next =head;
    head = newll;
}


void insertatend(){
    Node* newll = new Node();
    Node* ptr = head; // Pointer to transverse till the last node 
    while(ptr->next !=NULL){
        ptr = ptr->next;
    }
    cout<<"Enter the value of the data: ";
    cin>> newll -> data;
    ptr->next = newll;
    newll -> next =NULL; 

}



void insertatantpt(){
    Node* newll = new Node();
    Node* ptr = head;
    int pos;
    cout<<"Enter the position";
    cin>>pos;
    cout<<"Enter the value of the data: ";
    cin>> newll -> data;
    for(int i=0;i<pos-2;i++){
        ptr = ptr->next;
    }
    newll->next = ptr->next;
    ptr->next = newll;
}

// void insertion();   // niche likha hai yeh taaki confuse nah ho

int main(){
    // Declaring
    // Node* head = NULL;
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
    cout<<"\nTotal elements: "<<count<<endl;    // \n is used for new line
    insertatstart();  // this function insert a new node at the start of any linked list
    ListLength(head);

    insertatend();  // this function insert a new node at the end of any linked list
    ListLength(head);  

    insertatantpt();  // this function insert a new node at the any point of any linked list inputted by the user
    // insertion();   // Mother function of insertion,i.e., all in one wala
    ListLength(head);  

}


// void insertion(){
//     Node* newll = new Node();
//     Node* ptr = head;
//     int pos;
//     cout<<"Enter the position";
//     cin>>pos;
//     cout<<"Enter the value of the data: ";
//     cin>> newll -> data;

//     if(pos == 0){
//         newll->next =head;
//         head = newll;
//     }
//     else{
//         for(int i=0;i<pos-2;i++){
//             ptr = ptr->next;
//         }
//         newll->next = ptr->next;
//         ptr->next = newll;
//     }
    
// }