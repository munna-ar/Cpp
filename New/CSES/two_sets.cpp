#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    void two_sets(int n){
        int sum = n*(n+1) / 2;
        if(sum % 2 != 0){
            cout<<"No";
        }
        vector<int> set1, set2;
        int target = sum / 2;
        for(int i=n; i>=1; i--){
            if(i <= target){
                set1.push_back(i);
                target -= i;
            }
            else{
                set2.push_back(i);
            }
        }
        cout<<"Yes"<<"\n";
        cout<<set1.size()<<"\n";
        for(int i=0; i<set1.size(); i++){
            cout<<set1[i]<<" ";
        }
        cout<<"\n";
        cout<<set2.size()<<"\n";
        for(int i=0; i<set2.size(); i++){
            cout<<set2[i]<<" ";
        }
    }
};
int main(){
    solution a;
    a.two_sets(7);
    return 0;
}
