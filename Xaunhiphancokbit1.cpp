#include<bits/stdc++.h>
using namespace std;
int n,k;
bool ok=true;
int a[50],h;
void init(){
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<endl;
}
void next(){
	int i=n;
	h=0;
	while(i>0 &&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i>0){
		a[i]=1;
		
	}
	else ok=false;
	for(int i=1;i<=n;i++){
		if(a[i]==1) h++;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;

	while(t--){
		cin>>n>>k;
		init();
		while(ok){
			next();
			if(h==k) in();
		}
		ok=true;
		
	}

}

