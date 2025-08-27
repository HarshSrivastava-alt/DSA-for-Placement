#include<iostream>
#include<vector>
using namespace std;

vector<int>reverse(vector<int>v){
    int s=0,e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){

    vector<int> v;
    v.push_back(11);
    v.push_back(51);
    v.push_back(18);
    v.push_back(10);
    v.push_back(16);

    vector<int >ans = reverse(v);

    print(ans);

    return 0;
}