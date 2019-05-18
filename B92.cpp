#include<bits/stdc++.h>
using namespace std;
int a[1001][1001];
int stringint(string s){
	stringstream v;
	int res;
	v<<s;
	v>>res;
	return res;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	string s;
	cin.ignore();
	for(int i=1;i<=n;i++){
		getline(cin,s);
		string v="";
		for(int j=0;j<s.length()+1;j++){
			if(s[j]!=' '){
				v+=s[j];
			}
			if(s[j]==' ' || s[j]=='\0'){
				int res=stringint(v);
				a[i][res]=1;
				a[res][i]=1;
				v="";
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

}

