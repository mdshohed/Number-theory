/*
Time complexity: O(k Log n)
algorithm: fermal primality 
input:
output:
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int binpow(ll a, ll b, ll mod) {
    a%=mod;
    ll ans = 1;
    while (b>0) {
        if ( b&1) ans = ans*a%mod;
        a = a*a%mod;
        b>>=1;
    }
    return ans;
}

bool fermat_primality(ll n) {
    if ( n<2 || n==4) return false;
    if ( n<=3) return true;

    for (ll i = 0; i<n; i++) {
        ll a = 2 + rand()%(n-3);
        if( binpow(a,n-1,n)!=1 ) return false;
    }
    return true;
}

int main() {
    //freopen( "in.txt", "r", stdin );
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (fermat_primality(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}

