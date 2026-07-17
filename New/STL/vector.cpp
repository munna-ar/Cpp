// In the name of Allah
#include<bits\stdc++.h>
using namespace std;
int main(){
    // Vector has some function > at(), push_back, pop_back(), size(), empty(), front(), clear()
    // vector<char> ch; 
    // vector<string> str;
    vector<int> vec; // or num = {2,3,4,5};
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(9);
    

    cout<<vec.size()<<endl;
    cout<<vec.front()<<endl;
    vec.pop_back(); // delete the top element
    cout<<vec.size()<<endl; // now the size is 3
    cout<<vec.empty()<<endl; // returns 1 or 0

    // vector iterator
    
    vector<int> :: iterator it;
    for(it = vec.begin(); it != vec.end(); it++){
        cout<<*it<<" ";
    }

    // for(int i=0; i<num.size(); i++){
    //     cout<<num[i]<<" ";
    // }
    return 0;
}