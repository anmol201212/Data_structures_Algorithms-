#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;
void TOH(int n,char fr, char tr, char ax )
{
    if(n==1)
    {
        cout<<"Move disc 1 from "<<fr<<" To "<<tr<<endl;
        return;
    }
    else
    {
        TOH(n-1,fr,ax,tr);
        cout<<"Move disc "<<n<<" from "<<fr<<" to "<<tr<<endl;
        TOH(n-1,ax,tr,fr);
    }
}
int main()
{
    int n;
    cout<<"Enter";
    cin>>n;
    TOH(n,'A','C','B');
    return 0 ;
}