#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[50];
bool ok=true;
void init(){
	for(int i=1;i<=k;i++){
		cin>>a[i];
	}
}
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<endl;
}
void next(){
	int i=k;
	while(i>0 && a[i]==n-k+i){
		i--;
	}
	if(i>0){
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;	
		}
	}
	else ok=false;
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
		int b[k+1];
		for(int i=1;i<=k;i++){
			b[i]=a[i];
		}
		int dem=0;
	
		next();
		for(int i=1;i<=k;i++){
			for(int j=1;j<=k;j++){
				if(a[i]==b[j]){
					dem++;
					break;
				}
			}	
		}
		if(!ok) cout<<k<<endl;
		else cout<<k-dem<<endl;
		
		
		ok=true;
		
	}

}

