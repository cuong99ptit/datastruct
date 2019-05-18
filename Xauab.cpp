#include<bits/stdc++.h>
using namespace std;
int a[100];
int k,n;
bool ok=true;
void init(){
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}
void in(){
	for(int i=1;i<=n;i++){
		if(a[i]==1) cout<<"B";
		else cout<<"A";
	}
	cout<<endl;
}
void next(int &duynhat,int &h){
	int i=n;
	duynhat=0;h=0;
	while(i>0 && a[i]==1){
		a[i]=0;
		i--;
	}
	if(i>0){
		a[i]=1;
	}
	
	else ok=false;
	int dem;
	a[0]=2;
	for(int i=1;i<=n;i++){
		dem=0;
		if(a[i-1]!=a[i]){
			for(int j=i;j<=n;j++){
				if(a[j]==1) break;
				dem++;
			
			}
			if(dem==k){
				duynhat++;
				h=dem;
			}
		}
		if(duynhat>1) break;
	}
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>k;
	init();
	int Count=0;
	int duynhat,h;
	while(ok){
		next(duynhat,h);
		if(duynhat==1 && h==k) Count++;
	}
	ok=true;
	cout<<Count<<endl;
	while(ok){
		next(duynhat,h);
		if(duynhat==1 && h==k) in();
	}
	
}

