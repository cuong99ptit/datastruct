#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	int a[10]={ 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	int n;
	while(t--){
		cin>>n;
		int res=0;
		for(int i=9;i>=0;i--){
			if(n>=a[i]){
				int k=n/a[i];
				res+=k;
				n=n-k*a[i];
				if(n==0) break;
			}
		}
		cout<<res<<endl;
	}

}

