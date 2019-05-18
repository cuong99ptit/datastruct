#include<bits/stdc++.h>
using namespace std;
bool ok=true;
int a[20],n;
void init(){
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void next(){
	int i=n;;
	while(i>0 && a[i]==1){
		a[i]=0;
		i--;
	}
	if(i>0){
		a[i]=1;
	}
	else ok=false;
}
int arrint(int a[],int n){
	int res=0;
	for(int i=1;i<=n;i++){
		if(a[i]==1) res+=pow(2,n-i);
		
	}
	return res;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	int N;
	while(t--){
		cin>>N;
		for(int i=1;i<=N;i++){
			for(int j=1;j<=20;j++){
				n=j;
				int kt=1;
				init();
				while(ok){
					int v=arrint(a,n);
					if(v==i){
						in();
						kt=0;
						break;
					}
					next();
				}
				if(kt==0) break;
				ok=true;
			}
		}
		cout<<endl;
		
	}

}

