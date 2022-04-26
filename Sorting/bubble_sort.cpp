#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main(){
    bool swapped = false;
    vector<int> vec={34,10,45,89,65,29};
    // vector<int> vec={10,20,30,40,50};
    for(int i=0;i<vec.size();i++){
        for(int j=i;j<vec.size();j++){
            if(vec.at(i)>vec.at(j)){
                int temp = vec.at(i);
                vec.at(i)=vec.at(j);
                vec.at(j)=temp;
                swapped = true;
            }
        }
        if(swapped == false){
            cout<<"Already sorted"<<endl;
            break;
        }
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}