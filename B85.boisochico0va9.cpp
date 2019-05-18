#include<bits/stdc++.h>
using namespace std;
bool ok=true;
int n;
int a[20];
void init()
{
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
	a[n]=9;
}
void next(){
	int i=n;
	while(i>0 && a[i]==9){
		a[i]=0;
		i--;
	}
	if(i>0){
		a[i]=9;
	}
	else ok=false;
}

void solve(int N){
	
	
	for(int i=1;i<=20;i++){
	
	
		n=i;
		init();
		while(ok){
			long long sum=0;
			for(int j=1;j<=n;j++){
				sum=sum*10+a[j];
			}
			if(sum%N==0){
				cout<<sum<<endl;
				return;
			}
			next();
		}
		ok=true;
	}
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
		solve(N);
	}
	
	

}

