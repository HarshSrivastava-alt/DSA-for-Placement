#include<iostream>
#include<vector>
using namespace std;
//vector function
int main(){
    vector<int>vec;
    vec.puch_back(1);
    vec.push_back(2);     
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    return 0;
}