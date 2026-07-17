#include<bits/stdc++.h>
using namespace std;

int fav_num(){
    int num;
    while(num){
        cout<<"enter guessing number (1-10): ";
        cin>>num;
        if(num == 1 || num == 5 || num == 7){
            cout<<"you won";
            break;
        }
    }
}
int main(){
    fav_num();
    return 0;
}