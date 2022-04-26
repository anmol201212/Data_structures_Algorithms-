#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;
using std::vector;


int main(){
    vector<int> vec1={10,45,45};
    vector<int> vec2={15,22,40,45,50};
    vector<int> vec3={};
    int i=0,j=0;
    while(i!=vec1.size() && j!=vec2.size()){
        if(vec1.at(i)<=
        vec2.at(j)){
            vec3.push_back(vec1[i]);
            i++;
        }
        else if(vec1.at(i)>vec2.at(j)){
            vec3.push_back(vec2[j]);
            j++;
        }
    }
    // cout<<j<<endl;
    if(i!=vec1.size()){
        for(int k=i;k<vec1.size();k++){
            vec3.push_back(vec1[k]);
        }
    }
    if(j!=vec2.size()){
        for(int k=j;k<vec2.size();k++){
            vec3.push_back(vec2[k]);
        }
    }


    for(int k=0;k<vec3.size();k++){
        cout<<vec3[k]<<" ";
    }
}
