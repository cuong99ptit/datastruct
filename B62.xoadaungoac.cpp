#include<bits/stdc++.h>
using namespace std;
struct ngoac{
	int bd,kt;
};
ngoac a[202];
bool ok=true;
int b[201];
int n;
string res[1000];
void init(){
	for(int i=1;i<=n;i++){
		b[i]=0;
	}
	b[n]=1;
	
}
void next(){
	int i=n;;
	while(i>0 && b[i]==1){
		b[i]=0;
		i--;
		
	}
	if(i>0){
		b[i]=1;
	}
	else ok=false;
}
int giong(string a,string b){
	for(int i=0;i<a.length();i++){
		if(a[i]!=b[i]) return false;
	}
	return true;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s;
	cin>>s;
	int dem=0;
	stack<int> st;
	for(int i=0;i<s.length();i++){
		char x=s[i];
		if(x=='('){
			st.push(i);
		}
		if(x==')'){
			int k=st.top();
			st.pop();
			a[dem].kt=i;
			a[dem].bd=k;
			dem++;
		}
	}
	n=dem;
	init();
	string m="0";
	int Count=0;
	while(ok){
		
		int kt[201];
		for(int i=0;i<s.length();i++){
			kt[i]=0;
		}
		string v="";
		for(int i=1;i<=n;i++){
			if(b[i]==1){
				kt[a[n-i].bd]=1;
				kt[a[n-i].kt]=1;
			}
		}
		for(int i=0;i<s.length();i++){
			if(kt[i]==0) v+=s[i];
		}
		res[Count]=v;
		Count++;
		next();
	}
	sort(res,res+Count);
	for(int i=0;i<Count;i++){
		if(!giong(res[i],res[i+1])){
			cout<<res[i]<<endl;
		}
	}
	

}

