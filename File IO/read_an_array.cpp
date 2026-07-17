#include<bits/stdc++.h>
#include<fstream>
using namespace std;
 
int main(){
    ifstream in("array.txt");

    int n;
    while(in >> n){
        cout<<n<<" ";
    }
    in.close();
    return 0;
}