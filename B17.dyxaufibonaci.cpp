#include<bits/stdc++.h>
using namespace std;
long long i;
int n;
long long a[100];
void fibo(){
	for(int i=0;i<=93;i++){
		if(i==0) a[i]=0;
		if(i==1) a[i]=1;
		if(i>=2) a[i]=a[i-1]+a[i-2];
	}
}
char tim(long long a[],int n,long long i){
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(i<=a[n-2]) return tim(a,n-2,i);
	if(i>a[n-2]) return tim(a,n-1,i-(a[n-2]));
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	fibo();
	while(t--){
		cin>>n>>i;
		
		cout<<tim(a,n,i)<<endl;
	}

}

