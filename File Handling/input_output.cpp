#include<bits/stdc++.h>
#include<fstream>
using namespace std;
 
int main(){
    ifstream in("input.txt");
    if(!in){
        cout<<"Cannot open file";
        return 1;
    }

    ofstream op("output.txt");

    int n = 0;
    while(in >> n){
        op<<n * 2<<"\n";
    }
    
    in.close();
    op.close();
    return 0;
}