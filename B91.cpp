#include<bits/stdc++.h>
using namespace std;
int a[1001][1001];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	vector<int> b[n+1];
	int dem=2;
	for(int i=1;i<=n;i++){
		for(int j=dem;j<=n;j++){
			if(a[i][j]==1){
				 b[i].push_back(j);
				 b[j].push_back(i);
				 
			}
		}
		dem++;
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<b[i].size();j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}

}

