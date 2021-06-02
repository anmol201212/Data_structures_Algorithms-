r,char tr,char ax)
{
    if(n==0)
    {
        return;
    }
    TOH(n-1,fr,ax,tr);
    cout<<"Move from "<<fr<<" to "<<tr<<endl;

    TOH(n-1,ax,tr,fr);
}
int main()
{
    int n;
    cout<<"TOH Enter: ";
    cin>>n;
    TOH(n,'A','C','B');
}