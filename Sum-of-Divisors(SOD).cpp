#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define getbit(x,i) (((x)&(1ll<<(i))) != 0)
#define pii pair<int,int> 
#define ll long long 

int main(){
    int n; 
    cin >> n; 
    map<ll,int> mp;
    auto factor = [&](ll n){
        for(int i = 2; i*i<=n; i++){
            while( n%i ==0){
                mp[i]++;
                n/=i; 
            }
        }
        if(n>1) mp[n]++;
    };
    auto SOD = [&](){
        ll sod = 1;
        for(auto i: mp){
            int p = i.first, a = i.second;
            sod=sod * (pow(p, a+1)-1) / (p-1);
        }
        return sod;
    };
    factor(n);
    cout << SOD() << endl; 
    return 0;
}

