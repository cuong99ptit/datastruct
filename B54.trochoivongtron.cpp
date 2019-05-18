#include<bits/stdc++.h>
using namespace std;
int vong(int n,int k){
	if(n==1) return 1;
	else return (vong(n-1,k)+k)%n+1;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<vong(n,k)<<endl;
	}

}

