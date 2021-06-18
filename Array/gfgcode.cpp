#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;

// Reverse an array
// void reverse(int arr[],int n)
// {
//     for(int i=n-1;i>=0;i--)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return;
// }

// int main()
// {
//     int n;
//     cout<<"Size: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     reverse(arr,n);

//     return 0;
// }




// rotate an array                                   //  O(n^2)
// int arr[1000];
// void rotate(int arr[],int n,int j){
//     cout<<"Rotation "<<j+1<<" : ";
//     int i=n;
//     int last=arr[n-1];
//     while(i!=0){
//         arr[i]=arr[i-1];
//         i--;
//     }
//     arr[0]=last;
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return;
// }
// int main()
// {
//     int n;
//     cout<<"Size: ";
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int rot;
//     cout<<"How many rotation: ";
//     cin>>rot;
//     for(int i=0;i<rot;i++){
//         rotate(arr,n,i);
//     }

//     return 0;
// }






//  Leader in an array
void leader(int arr[],int key)
{
    // int ans;
    static int a=0;
    // static int key=n-1;
    if(key==0)
    {
        return;
    }
    if(a==0)
    {
        cout<<arr[key]<<endl;
        // cout<<"a is there bitch!"<<endl;
        a++;
        leader(arr,key);
    }
    if(arr[key]<arr[key-1])
    {
        cout<<arr[key-1]<<endl;
        // key--;
        leader(arr,key-1);
    }
    if(arr[key]>arr[key-1])
    {
        // key--;
        leader(arr,key-1);
    }


}
int main()
{
    int n;
    int arr[100];
    cout<<"Size: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    leader(arr,n-1);
}