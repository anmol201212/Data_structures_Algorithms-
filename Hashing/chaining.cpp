// list is use to implement doubly linked list

#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::list;

struct MyHash{
    int BUCKET;
    list<int> *table;
    MyHash(int b){
        BUCKET = b;
        table = new list<int>[b];
    }
    void insert(int Key){
        int index = Key%BUCKET;
        table[index].push_back(Key);
    }
    bool search(int Key){
        int i = Key%BUCKET;
        for(auto x:table[i]){
            if(x == Key){
                return true;
            }
        }
        return false;
    }
    void remove(int Key){
        int index = Key%BUCKET;
        table[index].remove(Key);
    }
};

int main(){
    MyHash obj(10);
    obj.insert(10);
    obj.insert(20);
    obj.insert(30);
    obj.remove(20);
    cout<<obj.search(20)<<"\n";
    cout<<obj.search(10)<<"\n";

     
}