#include<bits/stdc++.h>
using namespace std;
int I=1e9+7;
long long POW(int n,int k){
	if(k==0) return 1;
	long long m=POW(n,k/2);
	if(k%2) return (m*m%I)*n%I;
	return m*m%I;
}
int main(){
	
	int t;
	int n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		
		cout<<POW(n,k)<<endl;;
		
	}
	

}

