#include<bits/stdc++.h>
using namespace std; 
int main(){       // Bitwise operators > AND, OR, XOR
    int n, k;    // given n and k, perform three operations AND, OR, XOR through 1 to n and
    cin>>n>>k;  // all three results should be less than k
    int max_and = 0, max_or = 0, max_xor = 0;
    for(int i=1; i<n; i++){
        for(int j=i+1; j<=n; j++){
            int a = i & j;                     // Bitwise AND operator
            int b = i | j;                    //  Bitwise OR operator
            int c = i ^ j;                   //   Bitwise XOR operator
            if(a < k) max_and = max(max_and, a);
            if(b < k) max_or = max(max_or, b);
            if(c < k) max_xor = max(max_xor, c);
        }
    }
    cout<<max_and<<"\n"<<max_or<<"\n"<<max_xor;
    return 0;
}
