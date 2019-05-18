#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	int n;
	while(t--){
		cin>>n;
		int kt=0;
		int so4,so7;
		for(int i=n/7;i>=0;i--){
			if((n-i*7)%4==0){
				so7=i;
				so4=(n-i*7)/4;
				kt=1;
				break;
			}
			
		}
		if(kt==1){
			for(int i=1;i<=so4;i++) cout<<"4";
			
			for(int i=1;i<=so7;i++) cout<<"7";
		}
		else cout<<"-1\n";
		cout<<endl;
		
	}

}

