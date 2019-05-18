#include<bits/stdc++.h>
using namespace std;
int n,k;
bool ok=true;
int a[100];
int b[100][100];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>b[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
	int Count=0;
	do{
		int dem=0;
		for(int i=1;i<=n;i++){
			dem+=b[i][a[i]];
		}
		if(dem==k){
			Count++;
		}
		
	}while(next_permutation(a+1,a+1+n));
	cout<<Count<<endl;
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
	do{
		int dem=0;
		for(int i=1;i<=n;i++){
			dem+=b[i][a[i]];
		}
		if(dem==k){
			for(int i=1;i<=n;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		
	}while(next_permutation(a+1,a+1+n));
	

}

