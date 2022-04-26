#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    vector<int> vec={34,10,45,89,65,29};
    for(int i=0;i<vec.size()-1;i++){
        int min = i;
        for(int j=i+1;j<vec.size();j++){
            if(vec.at(j)<vec.at(min)){
                min = j;
            }
        }
        swap(vec[min],vec[i]);
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}