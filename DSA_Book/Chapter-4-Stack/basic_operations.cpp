#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;

class myArrayStack{
private:
  int top;
  int capacity;
  int *array;
public:
  void create(int s){
    capacity = s;
    array = new int[capacity];
    top=-1;
  }
  void push(int x){
    if(top==capacity-1){
      cout<<"Stack Full"<<endl;
      return;
    }
    top++;
    array[top] = x;
  }
  void pop(){
    if(top == -1){
      cout<<"Stack Empty"<<endl;
      return;
    }
    top--;
  }
  void print(){
    for(int i=0;i<=top;i++)
    cout<<array[i]<<" ";
    cout<<endl;
  }
};

using std::vector;
class vectorStack{
private:
  int top;
  int cap;
  vector <int> vec;
public:
  void create(int x){
    top=-1;
    cap = x;

  }
  void push(int x){
    if(top==cap-1){
      cout<<"Stack Full"<<endl;
      return;
    }
    vec.push_back(x);
    top++;
  }
  void pop(){
    if(top == -1){
      cout<<"Stack Empty"<<endl;
      return;
    }
    vec.pop_back();
    top--;
  }
  void print(){
    for(int i=0;i<=top;i++)
    cout<<vec.at(i)<<" ";
    cout<<endl;
  }
};

class Node{
public:
  int data;
  Node* next;
};

class LLStack: public Node{
private:
  int cap;
  int top;
  Node* head;
  Node*ptr;
public:
  void create(int x){
    top=-1;
    cap = x;
    head = new Node();
    ptr = head;
  }
  void push(int x){
    if(top==-1){
      head->data = x;
      top++;
      return;
    }
    else if(top==cap-1){
      cout<<"Stack Full"<<endl;
      return;
    }
    Node* temp = new Node();
    temp->data = x;
    ptr->next = temp;
    ptr=ptr->next;
  }
  void pop(){
    Node* ptr1 = head;
    Node* ptr2 = NULL;
    while(ptr1->next != NULL){
      ptr2 = ptr1;
      ptr1 = ptr1->next;
    }
    ptr2->next = NULL;
  }
  void print(){
    Node* ptr1 = head;
    while(ptr1!=NULL){
      cout<<ptr1->data<<" ";
      ptr1=ptr1->next;
    }
    cout<<endl;
  }
};

int main(){
  int num;
  cin>>num;
  // myArrayStack s;
  // s.create(num);
  // for(int i=0;i<num;i++){
  //   int temp;
  //   cin>>temp;
  //   s.push(temp);
  // }
  // s.pop();
  // s.print();


  // vectorStack vs;
  // vs.create(num);
  // for(int i=0;i<num;i++){
  //   int temp;
  //   cin>>temp;
  //   vs.push(temp);
  // }
  // vs.print();

  LLStack ls;
  ls.create(num);
  for(int i=0;i<num;i++){
    int temp;
    cin>>temp;
    ls.push(temp);
  }
  ls.pop();
  ls.print();


}
