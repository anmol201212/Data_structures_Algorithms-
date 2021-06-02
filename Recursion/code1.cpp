#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;


//  To get the sum of the first n number using recursion
// int sum(int n)
// {
//     if(n==0)
//     return 0;
//     return n+sum(n-1);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<sum(n);


// }






//  Print the number in increasing order up to n then print the number in decreasing order from n to 1
//   1 2 3 4 5 5 4 3 2 1
// void series(int n)
// {
//     static int a=1;
//     static int b=n;
//     if(n==0){
//         if(b==0)
//         return;
//     cout<<b<<" ";
//     b--;
//     series(0);
//     }

//     else{
//         cout<<a<<" ";
//         a++;
//         series(n-1);
//     }
// }
// int main()
// {
//     int n;
//     cout<<"Enter: ";
//     cin>>n;
//     series(n);
//     // cout
// }





// To get the Fibonacci of n
// int series(int n)
// {
//     if(n==0 || n==1)
//     return n;
//     return series(n-1) + series(n-2);
// }
// int main()
// {
//     int n;
//     cout<<"Enter: ";
//     cin>>n;
//     cout<<series(n);
// }



//  Factorial



// int series(int n)
// {
//     if(n==0 || n==1)
//     return n;
//     return n*series(n-1);

// }
// int main()
// {
//     int n;
//     cout<<"Enter: ";
//     cin>>n;
//     cout<<series(n)<<endl;
// }



//  To calculate pth power of n

int power(int n,int p)
{ 
    if(p==0)
    return 1;
    else
    {
        return n * power(n,p-1);
    }
}
int main()
{
    int n,p;
    cout<<"Enter: ";
    cin>>n>>p;
    cout<<power(n,p)<<endl;
}