#include<bits/stdc++.h>
using namespace std;
bool ok=true;
string s;
int n;
int a[100];
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<endl;
}
void init(){
	for(int i=1;i<=n;i++){
		a[i]=s[i-1]-'0';
	}
}
void next(){
	int i=n-1;
	while(i>0 && a[i]>=a[i+1]){
		i--;
	}
	if(i>0){
		int j=n;
		while(a[i]>=a[j]){
			j--;
		}
		swap(a[i],a[j]);
		int l=i+1,r=n;
		while(l<=r){
			swap(a[r],a[l]);
			l++;r--;
		}
	}
	else ok=false;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t,tt;
	cin>>t;
	while(t--){
		cin>>tt;
		cin>>s;
		n=s.length();
		init();
		next();
		cout<<tt<<" ";
		if(!ok) cout<<"BIGGEST"<<endl;
		
		else in();
		ok=true;
		
	}

}

