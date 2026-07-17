#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string relative_ranks(vector<int> score){
        int n = score.size();
        int place = 1;
        priority_queue<pair<int,int>>heap;
        vector<string> rank(n);
        for(int i=0; i<n; i++){
            heap.push({score[i], i});
        }
        while(!heap.empty()){
            int topin = heap.top().second;
            heap.pop();
            if(place == 1) rank[topin] = "Gold Medal";
            else if(place == 2) rank[topin] = "Silver Medal";
            else if(place == 3) rank[topin] = "Broze Medal";
            else rank[topin] = to_string(place);
            place++;
        }
        for(int i=0; i<rank.size(); i++){
            cout<<score[i]<<":"<<rank[i]<<endl;
        }
    }
};
int main(){
    Solution a;
    a.relative_ranks({3,2,5,4});
    return 0;
}