const int n= 1e5+7; 
int sp[n]; 
vector<int> prime; 
void seive(){
	for(int i = 2; i<n; i++) {
		if (!sp[i] ) sp[i] = i, prime.push_back(i); 
		for(int j = 0; j<(int)prime.size()&& i*prime[j] < n && prime[j]<=sp[i]; j++){
			sp[i*prime[j]] = prime[j]; 
		}
	}
	for(int i:prime) cout << i << " ";
	cout << endl;
}
