#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr = {5,2,1,6,7};
    int max = 0;
    for(int i=0; i<arr.size(); i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout<<"max is: "<<max;
    return 0;
}