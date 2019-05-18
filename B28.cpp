#include<bits/stdc++.h>
using namespace std;
int ns(string a){
	int res=0;
	stringstream v;
	for(int i=0;i<a.length();i++){
		if(a[i]=='5') a[i]='6';
	}
	string b=a;
	v<<b;
	v>>res;
	return res;
}
int sn(string a){
	int res=0;
	stringstream v;
	for(int i=0;i<a.length();i++){
		if(a[i]=='6') a[i]='5';
	}
	string b=a;
	v<<b;
	v>>res;
	return res;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string a,b;
	cin>>a>>b;
	cout<<sn(a)+sn(b)<<" "<<ns(a)+ns(b);
	
	

}

