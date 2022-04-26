#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;


int sumofnum_recursion(int n){
    if(n==0){
        return 0;
    }
    return n + sumofnum_recursion(n-1);
}
int sumofnum_ileration(int n){
    int sum =0;
    for(int i=0:n){
        sum=sum+i;
    }
    return sum;
}
int main(){
    cout<<sumofnum_recursion(5);
    cout<<sumofnum_ileration(5);
}
