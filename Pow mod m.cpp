/*
time complexity: O(logn)
algorithm: binary Exponentiation
*/
#include <bits/stdc++.h>
using namespace std;

int binpow(int a, int b, int m) {
    a%=m; 
    int ans = 1;
    while ( b>0) {
        if ( b&1) ans = ans*a%m; 
        a = a*a%m;
        b>>=1;
    }
    return ans;
}

int main(){
    int a, b, m; 
    cin >> a >> b >> m; 

    int x = binpow(a,b, m);
    cout << x << endl;
    return 0;
}
