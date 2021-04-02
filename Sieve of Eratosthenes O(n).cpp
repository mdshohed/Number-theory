
#include "bits/stdc++.h";
using namespace std;

const int mx = 1e6+7;
int lp[mx+1];
vector<int> v;

int main() {
    for(int i=2; i<mx; i++) {
        if (!lp[i]) {
            v.push_back(i);
            lp[i] = i;
        }
        for(int j=0; j<(int)v.size()&&v[j]<=lp[i]&&i*v[j]<=mx; j++) {
            lp[i*v[j]]=v[j];
        }
    }
    for(int i = 0; i<100; i++) cout << v[i] << " ";
    cout << endl;
}
