#include<bits/stdc++.h>//                            *         *
using namespace std;//                               * *     * *
 //                                                  * * * * * *
 //
int main(){//                                        * * * * * *
    //                                               * *     * *
    //                                               *         *
    int n = 3;
    // Upper half
    for(int i=1; i<=n; i++){
        // Left stars
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        // Spaces
        for(int k=1; k<=2*(n-i); k++){
            cout<<" ";
        }
        // Right stars
        for(int l=1; l<=i; l++){
            cout<<"*";
        }
        cout<<"\n";
    }
    // Lower half
    for(int i=n; i>0; i--){
        // Left stars
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        // Spaces
        for(int k=1; k<=2*(n-i); k++){
            cout<<" ";
        }
        // Right stars
        for(int l=1; l<=i; l++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}