#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
       // Qus 4
       // ****
       // ****
       // ****
       // ****
       // ****
// int main() {
//   int row,column;
//   cout<<"Enter rows and columns respectively: ";
//   cin>>row>>column;
//   for(int i=0;i<row;i++)
//   {
//     for(int j=0;j<column;j++){
//     cout<<"* ";
//     }
//     cout<<endl;
//   }
// }

// Qus 5
// print a hollow circle
// *****
// *   *
// *   *
// *   *
// *****

// int main()
// {
//   int row,column;
//   cout<<"Row and Column: ";
//   cin>>row>>column;
//   for(int i=0;i<row;i++)
//   {
//     for(int j=0;j<column;j++)
//     {
//       if(j==0 || j==(column-1) || i==0 || i==(row-1))
//       cout<<"*";
//       else
//       cout<<" ";
//     }
//     cout<<endl;
//   }
// }


// Qus 6
// print half traingle
// *
// **
// ***
// ****
// int main()
// {
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++)
//   {
//     for(int j=0;j<i;j++)
//     {
//     cout<<"*";
//     }
//     cout<<endl;
//   }
// }

// Qus 7
// Inverted half Pyramid
// *****
// ****
// ***
// **
// *
// int main()
// {
//   int n;
//   cin>>n;
//   for(int i=0;i<n;i++)
//   {
//     for(int j=n;j>i;j--)
//     {
//       cout<<"*";
//     }
//     cout<<endl;
//   }
// }


// Qus 8
// half triangle 180' rotation
//     *
//    **
//   ***
//  ****
// *****
// int main()
// {
//   int n;
//   cin>>n;
//   int temp=n;
//   for(int i=0;i<n;i++)
//   {
//     for(int k=temp-1;k>0;k--)
//     {
//       cout<<"-";
//
//     }
//     for(int j=temp;j<=n;j++)
//     {
//       cout<<"*";
//     }
//     temp--;
//     cout<<endl;
//   }
// }


// Qus 9
// half pyramid using numbers
// 1
// 12
// 123
// 1234
// 12345
// int main()
// {
//   int n;
//   cin>>n;
//   for(int i=0;i<n;i++)
//   {
//     for(int j=1;j<=i+1;j++)
//     {
//       cout<<j;
//     }
//     cout<<endl;
//   }
// }

// Qus 10
// inverted half triangle
// 12345
// 1234
// 123
// 12
// 1
// int main()
// {
//   int n,temp;
//   cin>>n;
//   temp=n;
//   for(int i=0;i<n;i++)
//   {
//     int j=1;
//     while(j<=temp)
//     {
//       cout<<j<<" ";
//       j++;
//     }
//     temp--;
//     cout<<endl;
//   }
// }

// Qus 11
// half pyramid using numbers
// 1
// 22
// 333
// 4444
// 55555
// int main()
// {
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++)
//   {
//     for(int j=1;j<=i;++j)
//     {
//       cout<<i<<" ";
//     }
//     cout<<endl;
//   }
// }

// Qus 12
// inverted half triangle
// 11111
// 2222
// 333
// 44
// 5
// int main()
// {
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++)
//   {
//     for(int j=0;j<=n-i;j++)
//     {
//       cout<<i<<" ";
//     }
//     cout<<endl;
//   }
// }

// Qus 13
// Floyd's traingle
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// int main()
// {
//   int n;
//   cin>>n;
//   int temp=1;
//   for(int i=1;i<=n;i++)
//   {
//     for(int j=0;j<i;j++)
//     {
//       cout<<temp<<" ";
//       temp++;
//     }
//     cout<<endl;
//   }
// }


// Qus 14
// print 0-1 pattern
// 1
// 0 1
// 0 1 0
// 1 0 1 0
// 1 0 1 0 1
// int main()
// {
//   int n;
//   cin>>n;
//   cout<<"1"<<endl;
//   int temp=2;
//   for(int i=2;i<=n;i++)
//   {
//     for(int j=0;j<i;j++)
//     {
//       cout<<temp%2<<" ";
//       temp++;
//     }
//     cout<<endl;
//   }
// }

// Qus 15
// palindromic pattern
//         1
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5
// int main()
// {
//   int n;
//   cin>>n;
//   int temp=n;
//   cout<<"1"<<endl;
//   for(int i=1;i<=n;i++)
//   {
//     // for(int k=n-i;k>0;k--)
//     // {
//     //   cout<<" ";
//     // }
//     for(int j=0;j<n;j++)
//     {
//       cout<<i+1<<" "<<i<<" "<<i+1<<" ";
//     }
//     cout<<endl;
//   }
// }
// Qus 16
// print diamond using star: Given n,print diamond with 2*n row.
//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *
// int main()
// {
//   int n;
//   cin>>n;
//
// }


// Qus 17
// Butterfly pattern
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *
int main()
{
  int n;
  cin>>n;
  // Upper part
  for(int i=1;i<=n;i++)
  {
    for(int j=0;j<i;j++)
    {
      cout<<"*";
    }
    for(int a=0;a<(n*2)-(2*i);a++)
    {
      cout<<" ";
    }
    for(int k=n;k>n-i;k--)
    {
      cout<<"*";
    }
    cout<<endl;
  }
  //Lower part
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n-i;j++)
    {
      cout<<"*";
    }
    for(int a=n;a<n-i;a--)
    {
      cout<<" ";
    }
    for(int k=0;k<n-i;k++)
    {
      cout<<"*";
    }
    cout<<endl;
  }

}
