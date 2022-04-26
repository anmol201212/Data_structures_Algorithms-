#include<bits/stdc++.h>
using std::cin;
using std::cout;

// Iteration method
// int main(){
//     int arr[] = {10,20,30,40,50};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int key = 30;
//     int mid,high,low;
//     low=0;
//     high = n-1;
//     while(low<=high){
//         mid = (low+high)/2;
//         if(arr[mid]==key){
//             cout<<mid<<"\n";
//             return 0;
//         }
//         else if(arr[mid]>key){
//             high = mid-1;
//         }
//         else{
//             low= mid+1;
//         }
//     }
//     cout<<"-1"<<"\n";
// }

// Recursive Method
int binSearch(int arr[],int key, int low, int high){
    int mid=(low+high)/2;
    if(low>high) return -1;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        return binSearch(arr,key,low,mid-1);
    }
    else{
        return binSearch(arr,key,mid+1,high);
    }
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mid = n/2;
    int key = 50;
    cout<<binSearch(arr,key,0,n-1);
}