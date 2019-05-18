#include<bits/stdc++.h>
using namespace std;
void solve(int a){
	int res=0;
	for(int i=1;i*i<=a;i++){
		if(a%i==0){
			if((a/i)==i){
				if(i%2==0) res++;
			}
			else{
				if((a/i)%2==0) res++;
				if(i%2==0) res++;
			}
		}
	}
	cout<<res<<endl;
	
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
		solve(n);
		
	}

}

