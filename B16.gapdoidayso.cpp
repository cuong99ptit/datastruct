#include<bits/stdc++.h>
using namespace std;
long solve(int n,long long k){
	long long mid=pow(2,n-1);
	if(k==mid) return n;
	if(k<mid) return solve(n-1,k);
	else return solve(n-1,k-mid);
	
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	int n;
	long long k;
	while(t--){
		cin>>n>>k;
		cout<<solve(n,k);
		cout<<endl;
	}

}

