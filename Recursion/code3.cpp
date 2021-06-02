//   1 Qus
#include<bits/stdc++.h>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;


// To print the string in reverse.
// void printrev(string s)
// {
//     static int a=s.length();
//     if(a==-1)
//     return;
    
//     cout<<s[a];
//     a--;
//     return printrev(s);

// }
// int main()
// {
//     string s;
//     cout<<"Enter: ";
//     cin>>s;
//     printrev(s);
//     return 0;
// }












//Move all ‘x’ to the end of the string

// class movetoend
// {
//     private:
//     int size;
//     int a=0;
//     int count=0;

//     public:
//     void input(){
//         string s;
//         cin>>s;
//         size=s.length();
//         movethex(s);
//     }
//     void movethex(string s){
//         if(size==0)
//         printx();
//         else if(s[0]=='x'){
//             count++;
//             size--;
//             movethex(s.substr(1));
//         }
//         else{
//             size--;
//             cout<<s[0];
//             movethex(s.substr(1));
//         }

//     }
//     void printx()
//     {
//         if(a==count)
//         {
//             return;
//         }
//         else{
//             cout<<"x";
//             a++;
//             printx();
//         }
//     }

// };
// int main()
// {
//     movetoend obj;
//     obj.input();
//     return 0;
// }









// Remove Duplicates
// class removedub
// {
//     private:
//     int a=0;
//     int size;
//     string s;

//     public:
//     void input()
//     {
//         cout<<"Enter: ";
//         cin>>s;
//         size=s.length();
//         removedubl(s);
//     }
//     void removedubl(string s){
//         if(size==0)
//         {
//             return;
//         }
//         else if (s[0]==s[1])
//         {
//             size--;
//             removedubl(s.substr(1));
           
//         }
//         else{
//             cout<<s[0];
//             size--;
//             removedubl(s.substr(1));
//         }
//     }
// };
// int main()
// {
    
//     removedub obj;
//     obj.input();
//     return 0;
// }




//  Replace Pi
// void replacepi(string s){
//     if(s.length()==0)
//     return; 
//     if(s[0] == 'p' && s[1] == 'i')
//     {
//         cout<<"3.14";
//         replacepi(s.substr(2));
//     }
//     else{
//     cout<<s[0];
//     replacepi(s.substr(1));
//     }
// }
//  int main()
// {
//     string s;
//     cout<<"Enter: ";
//     cin>>s;
//     replacepi(s);
//     return 0;
// }









//Tower of hanoi
// void TOH(int n,char fr,char tr,char ax)
// {
//     if(n==0)
//     {
//         return;
//     }
//     TOH(n-1,fr,ax,tr);
//     cout<<"Move from "<<fr<<" to "<<tr<<endl;

//     TOH(n-1,ax,tr,fr);
// }
// int main()
// {
//     int n;
//     cout<<"TOH Enter: ";
//     cin>>n;
//     TOH(n,'A','C','B');
// }








//print all the substrings
// void subsq(string s,string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char F=s[0];
//     int code = F;
//     string rest= s.substr(1);
//     subsq(rest,ans);
//     subsq(rest,ans+F);
//     subsq(rest,ans+std::to_string(code));
// }
// int main()
// {
//     string s;
//     cout<<"Enter: ";
//     cin>>s;
//     subsq(s,"");
//     return 0;
// }








// Samjao koi mujhe yeh
// keypad problem
string keypadarr[]={"","./","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void keypad(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string code = keypadarr[ch-'0'];
    string rest = s.substr(1);
    for(int i=0;i<code.length();i++)
    {
        keypad(rest,ans+code[i]);
    }
}
int main()
{
    keypad("23","");
    return 0;
}