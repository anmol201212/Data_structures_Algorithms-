#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;
using namespace std;



// Check if Array is Sorted
// bool check(int n,int arr[100])
// {
//     static int a=0;
//     if(n==1)
//     {
//         return true;
//     }
//     else{
//         if(arr[a]>arr[a+1])
//         {
//             return false;
//         }
//         else{ 
//         a++;
//         check(n-1,arr);
//         }
//     }

// }


// int main()
// {
//     int n;
//     cout<<"Enter:";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     bool ans=true;
//     ans=check(n,arr);
//     cout<<boolalpha<<ans<<endl;

// }




// To find the first occurrence, we return as soon as we find the element.
// To find the last occurrence, we return the result we get from further function calls
int beginpt(int arr[],int size,int key,int pt)
{
   // static int pt=0;
    if(arr[pt]==key)
    {
        cout<<"ans:"<<pt+1<<endl;
        return pt+1;
    }
    if(pt==size)
    {
        return -1;
    }
    return beginpt(arr,size,key,pt+1);

}
int endpt(int arr[],int size,int key,int pt)
{
    if(pt==0)
    {
        return -1;
    }
    if(arr[pt]==key)
    {
        cout<<"ans:"<<pt+1<<endl;
        return pt+1;
    }
    return endpt(arr,size,key,pt-1);  
}
int main()
{
    int arr[100];
    int size;
    int key;
    cout<<"Size and key:";
    cin>>size>>key;
    cout<<"Elements: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    int pt=0;
    cout<<"Position of key from beginning" <<beginpt(arr,size,key,pt)<<endl;
    pt=size-1;
    cout<<"Position of key from end" <<endpt(arr,size,key,pt)<<endl;
    return 0;
}