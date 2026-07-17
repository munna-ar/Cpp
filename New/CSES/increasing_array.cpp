#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    int increasing(vector<int> arr){
        int moves = 0;
        for(int i=1; i<arr.size(); i++){
            if(arr[i] < arr[i-1]){
                moves += arr[i-1] - arr[i];
                arr[i] = arr[i-1];
            }
        }
        return moves;
    }
};
int main(){
    solution a;
    cout<<a.increasing({3,2,5,1,7});
    return 0;
}
