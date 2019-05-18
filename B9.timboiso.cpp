#include<bits/stdc++.h>
using namespace std;
int n;
bool ok=true;
void init(int a[]){
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
	a[n]=9;
}
void next(int a[]){
	int i=n;
	while(i>0 && a[i]!=0){
		a[i]=0;
		i--;
	}
	if(i>0){
		a[i]=9;	
	}
	else ok=false;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int h,N;
	cin>>h;
	long long sum;
	while(h--){
		cin>>N;
		for(int i=1;i<=20;i++){
			int a[20];
			n=i+1;
			init(a);
			int kt=1;
			
			while(ok){
				sum=0;
				
					
				for(int j=1;j<=n;j++){
					sum=sum*10+a[j];
				}
				if(sum%N ==0){
					cout<<sum<<endl;
					kt=0;
					break;
				}
				next(a);
				
			}
			ok=true;
				
			
			if(kt==0) break;	
			
			
		}
	}
}
