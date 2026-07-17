#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec; // front, back, clear, sort, reverse, insert, erase, iteration...
    vector<int>vec1;
    vector<int>::iterator vec2;
    vec.push_back(5); vec.push_back(3); vec.push_back(1); vec.push_back(2); vec.push_back(4);
    cout<<"index 1 > "<<vec[1]<<endl;
    for(int i = 0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }cout<<endl;
    vec.pop_back();
    for(int i = 0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }cout<<endl;
    vec.push_back(0);
    for(int i = 0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }cout<<endl;
    vec.erase(vec.begin()+4);
    for(int i = 0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }cout<<endl;
    vec.erase(vec.begin()+3, vec.end());
    for(int i = 0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }cout<<endl;

    vec.insert(vec.begin()+3, 2);
    vec.insert(vec.begin()+4, 0);
    for(int i = 0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }cout<<endl;
    swap(vec, vec1);
    for(int i = 0; i<vec1.size(); i++){
        cout<<vec1[i]<<" ";
    }cout<<endl;
    sort(vec1.begin(), vec1.end());
    for(int i = 0; i<vec1.size(); i++){
        cout<<vec1[i]<<" ";
    }cout<<endl;
    reverse(vec1.begin(), vec1.end());
    for(int i = 0; i<vec1.size(); i++){
        cout<<vec1[i]<<" ";
    }cout<<endl;
    vec2 = vec1.begin();
    cout<<*vec2<<endl;
    for(vec2 = vec1.begin(); vec2 != vec1.end(); vec2++){
        cout<<*vec2<<" ";
    }

    return 0;
}