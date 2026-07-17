#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    int repeats(string dna){
        int current = 1, total = 1;
        for(int i=1; i<dna.size(); i++){
            if(dna[i] == dna[i-1]){
                current++;
            }
            else{
                current = 1;
            }
            total = max(total, current);
        }
        return total;
    }
};
int main(){
    string s;
    cin>>s;

    solution x;
    cout<<x.repeats(s);
    return 0;
}
