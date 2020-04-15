/// 0-n number print...
#include <bits/stdc++.h>
using namespace std;

#define Max 10000
bool prime[Max];
vector<int> v;

void sieve(int n) {
  for ( int i = 0; i<Max; i++) prime[i] = true;
  for ( int i = 2; i*i<=Max ; i++) {
    if( prime[i]) {
      for ( int j = i*i; j<=Max; j+=i) {
        prime[j] = false;
      }
    }
  }
  for ( int i =2; i<Max; i++) {
    if(prime[i]) {
      v.push_back(i);
    }
  }
  for(int i = 0; i<v.size(); i++) {
    cout<<v[i]<<endl;
  }
}

int main() {
  int n;
  sieve(n);
  return 0;
}

// second prime code 
#include<bits/stdc++.h>
using namespace std;
#define m 1000
vector<int> prime;
bool status[m];

void isprime ( int n) {

  for ( int i = 3; i*i<=m; i+=2) {
    if ( status[i] == false) {
      for ( int j = i*i; j<=m; j+=i+i) {
        status[j] = true;
      }
    }
  }
  prime.push_back(2);
  for ( int i = 3; i<=m; i+=2) {
    if ( status[i] == false) {
      prime.push_back(i);
    }
  }
  for (int i = 0; i<n; i++) {
    cout<<prime[i]<<" ";
  }
}
int main () {
  int n;
  cin>>n;
  isprime(n);
  return 0;
}


// primefactorization ...
#include <bits/stdc++.h>
using namespace std;

#define m 10000
vector<int> prime;
bool status[m];
int List[130];
int listcount;

void sieve() {
  for ( int i = 3; i*i<=m; i+=2) {
    if ( status[i] == false) {
      for ( int j = i*i; j<=m; j+=i+i) {
        status[j] = true;
      }
    }
  }
  prime.push_back(2);
  for ( int i = 3; i<=m; i+=2) {
    if ( status[i] == false) {
      prime.push_back(i);
    }
  }
}
void primefactorize( int n) {
  listcount=0;
  for  (int i =0; i<n; i++) {
      if  ( n%prime[i] == 0) {
        while ( n%prime[i] == 0) {
          n/=prime[i];
          List[listcount] = prime[i];
          listcount++;
        }
      }
  }
}

int main () {
  sieve();
  int n;
  cin>>n;
  primefactorize(n);
  for (int i = 0; i<listcount; i++) {
    cout<<List[i]<< " ";
  }
  return 0;
}