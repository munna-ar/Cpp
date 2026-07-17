#include<bits/stdc++.h>
using namespace std;
int main(){
    int decimal, rem;
    vector<int>binary;
    cout<<"enter decimal number: ";
    cin>>decimal; //                   4
    while(decimal != 0){
        rem = decimal % 2;  //         001
        binary.push_back(rem); //      001
        decimal /= 2;          //      210
    }
    for(int i=binary.size()-1; i>=0; i--) cout<<binary[i];
    return 0;
}