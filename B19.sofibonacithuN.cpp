#include<bits/stdc++.h>
using namespace std;
struct mt{
	long long c[2][2];
	mt(){
		c[0][0]=0;
		c[0][1]=1;
		c[1][0]=1;
		c[1][1]=1;
	}
};
int m=1e9+7;
mt operator *(mt a,mt b){
	mt res;
	for(int i=0;i<=1;i++){
		for(int j=0;j<=1;j++){
			res.c[i][j]=0;
			for(int k=0;k<=1;k++){
				res.c[i][j]=(res.c[i][j]+a.c[i][k]*b.c[k][j])%m;
			}
		}
	}
	return res;
}
mt POW(mt a,long long k){
	if(k==1) return a;
	if(k%2!=0) return POW(a,k-1)*a;
	mt x=POW(a,k/2);
	return x*x;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	long long n;
	while(t--){
		cin>>n;
		mt b;
		b=POW(b,n);
		cout<<b.c[0][1]<<endl;
	}

}

