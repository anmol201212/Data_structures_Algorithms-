#include<bits/stdc++.h>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;




//  Samajh nahi aya
//  To print all the permutations of a string.
// class permutation
// {
//     private:
//     string s;
//     string org;
//     int key;
//     int rot=0;
//     char temp;
//     int size;

//     public:
//     void input()
//     {
//         // string s;
//         cout<<"Enter the String: ";
//         cin>>s;
//         org=s;
//         size=s.length();
//         permut(s);
//     }
//     void permut(string s)
//     {
//         // cout<<s;
//         int total = 2^s.length();
//         for(int i=0;i<total;i++)
//         {
//             for(int j=0;j<s.length()-1;j++){
//                 string ans=rotate();
//                 cout<<s[0]<<ans.substr(1)<<endl;
//             }
//             // s=org;
//             s=swap(org,i);
//             cout<<s;
//         }
//     }
//     string swap(string op,int i)
//     {
//         // char temp = s1;
//         // s1=s2;
//         // s2=temp;
//         char temp = op[0];
//         op[0]=op[i];
//         op[i]=temp;
//         return op;
//     }
//     string rotate(){
//         int i=s.length();
//         int n=i;
//         int last=s[n-1];
//         while(i!=1){
//             s[i]=s[i-1];
//             i--;
//         }
//         s[1]=last;
//         return s;
// }
    
// };
// void permutate(string s,string ans){
//     if(s.length()==0)
//     {
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i=0;i<s.length();i++)
//     {
//         char ch=s[i];
//         string rest = s.substr(0,i)+s.substr(i+1);
//         permutate(rest,ans+ch);
//     }
// }
// int main()
// {
//     // permutation obj;
//     // obj.input();
//     string s;
//     cin>>s;
//     permutate(s,"");
//     return 0;

// }




// samajh nahi aya
//  Find the number of ways to reach e from s.

// int solve(int s,int e){
//     if(s==e)
//     return 1;
//     else if(s>e)
//     return 0;
//     int count =0;
//     for(int i=1;i<=6;i++)
//     {
//         count += solve(s+i,e);
//     }
//     return count;
    
// }
// int main()
// {
//     int s,e;
//     cout<<"Start & End: ";
//     cin>>s>>e;
//     cout<<solve(s,e)<<endl;
//     return 0;
// }





//  samajh nahi aya
//  Given a 2D grid, find the number of ways to reach (n-1, n-1).
int countpathmaze(int n,int i,int j)
{
    if(i==n-1 && j==n-1 ){
        return 1;
    }
    if(i>=n || j>=n)
    {
        return 0;
    }
    return countpathmaze(n,i+1,j)+countpathmaze(n,i,j+1);
}
int main()
{
    cout<<countpathmaze(5,0,0);
}
