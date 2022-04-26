#include<bits/stdc++.h>
using std::cin;
using std::cout;

//Iterative Approach
// int countnum(int n){
//     int count = 0;
//     while(n!=0){
//         n=n/10;
//         count++;
//     }
//     return count;
// }

//Recursive Approach
// int countnum(int n){
//     if(n==0){
//         return 0;
//     }
//     return 1+countnum(n/10);
// }

// Logarithmic Approach
int countnum(int n){
    return floor(log10(n)+1);
}

int main(){
    int n;
    cin>>n;
    cout<<countnum(n);
}