#include<bits/stdc++.h>
using namespace std;
struct Time{
	int bd,t;
	
};
int cmp(Time a,Time b){
	return a.bd<b.bd;
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	Time a[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i].bd>>a[i].t;
	}
	sort(a,a+n,cmp);
	int sum=0;
	for(int i=0;i<n;i++){
		if(a[i].bd>sum) sum=a[i].bd+a[i].t;
		else sum+=a[i].t;
	}
	cout<<sum;
	

}

