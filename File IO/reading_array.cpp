#include<bits/stdc++.h>
#include<fstream>
using namespace std;
 
int main(){
    ifstream in("array2.txt");

    int n;
    in >> n; // array size
    
    int arr[100];
    for(int i=0; i<n; i++){
        in >> arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    in.close();
    return 0;
}