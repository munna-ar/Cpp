#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, y;
    cin>>x>>y;
    if(x == 0 && y == 0) cout<<"Origem";
    else if(x > 0 && y > 0) cout<<"Q1";
    else if(x < 0 && y < 0) cout<<"Q3";
    else if(x < 0 && y > 0) cout<<"Q2";
    else if(x > 0 && y < 0) cout<<"Q4";
    else if(x == 0 && y > 0) cout<<"Exio Y";
    else cout<<"Exio X";
    return 0;
}
