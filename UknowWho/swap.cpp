#include<bits/stdc++.h>
using namespace std;

int swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
    cout<<x<<" "<<y;
}
int main(){
    swap(5,2);
    return 0;
}
