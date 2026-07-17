#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int arr[2][2][3] = {           // 2 layers, 2 rows, 3 columns
        {
            {5,2,3},
            {8,1,6}
        },
        {
            {1,2,5},
            {4,7,3}
        }
    };

    // Accessing element
    cout<<arr[0][0][0]<<"\n";
    cout<<arr[1][1][2];

    return 0;
}
