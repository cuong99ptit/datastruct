#include<bits/stdc++.h>
using namespace std;
int nt[12]={2,3,5,7,11,13,17,19,23,29,31,37};
unsigned long long res;
void solve(int x,int num,int n,unsigned long long a)
{
	if(num>n) return;
	if(num==n) res=min(a,res);
	for(int i=1;i<=100;i++){
		if(a*nt[x]>res) break;
		a*=nt[x];
		solve(x+1,num*(i+1),n,a);
	} 
	
}
int main(){
	int t;
	cin>>t;
	int n;
	while(t--)
	{
		res=1e19+1;
		cin>>n;
		solve(0,1,n,1);
		cout<<res<<endl;
	}

}

