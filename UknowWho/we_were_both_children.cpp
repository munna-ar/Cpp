#include<bits/stdc++.h>
using namespace std;

int we_were_both_children(int n, vector<int> arr){
    vector<int> freq(n+1, 0);
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
    int ans = 0;
    vector<int> count(n+1, 0);
    for(int i=1; i<=n; i++){
        if(freq[i] == 0) continue;
        for(int j=i; j<=n; j += i){
            count[j] += freq[i];
        }
    }
    for(int i=1; i<=n; i++){
        ans = max(ans, count[i]);
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int t = n;
        vector<int> arr;
        while(n--){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        cout<<we_were_both_children(t, arr)<<"\n";
    }
    return 0;
}