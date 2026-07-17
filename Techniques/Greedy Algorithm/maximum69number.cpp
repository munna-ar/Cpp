#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maximum_69_number(int num){
        string str = to_string(num);    // to_string(..) > converts integer to string
        for(int i = 0; i<str.size(); i++){
            if(str[i] == '6'){
                str[i] = '9';
                break;
            }
        }
        return stoi(str);            // stoi(..) >  converts string to integer
    }
};
int main(){
    Solution a;
    cout<<a.maximum_69_number(9669);
    return 0;
}