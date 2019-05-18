#include<bits/stdc++.h>
using namespace std;
struct cv{
	int bd,kt;
};
int cmp(cv a,cv b){
	return a.kt<b.kt;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	int n;
	while(t--){
		cin>>n;
		cv a[n+1];
		for(int i=0;i<n;i++){
			cin>>a[i].bd>>a[i].kt;
		}
		sort(a,a+n,cmp);
		int res=0;
		int i=0;
		for (int j=1 ; j <n; j++) {
			if (a[j].bd>=a[i].kt){
				i=j;
				res++;
			}
		}
		cout<<res+1<<endl;
	}
}

