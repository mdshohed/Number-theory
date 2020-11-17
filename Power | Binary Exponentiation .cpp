/*
time complexity: O(logn)
algorithm: binary Exponentiation
*/
#include <bits/stdc++.h>
using namespace std;

int binpow(int a, int b) {
    int ans = 1;
    while ( b>0) {
        if ( b&1) ans *=a;
        a*=a;
        b>>=1;
    }
    return ans;
}

int main(){
    int a, b;
    cin >> a >> b;

    int x = binpow(a,b);
    cout << x << endl;
    return 0;
}
