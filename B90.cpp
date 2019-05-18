#include<bits/stdc++.h>
using namespace std;
int stringint(string s){
	int res;
	stringstream v;
	v<<s;
	v>>res;
	return res;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n;
	int a[100][100];
	memset(a,0,sizeof(a));
	string s;
	vector<int> b[n];
	cin.ignore();
	for(int i=1;i<=n;i++){
		getline(cin,s);
		string v="";
		for(int j=0;j<s.length()+1;j++){
			if(s[j]!=' '){
				v+=s[j];
			}
			if(s[j]==' ' || s[j]=='\0'){
				int x=stringint((v));
				a[i][x]=1;
				a[x][i]=1;
				v="";
			}
		}
	}
	int dem=2;
	for(int i=1;i<=n;i++){
		for(int j=dem;j<=n;j++){
			if(a[i][j]==1) cout<<i<<" "<<j<<endl;
		}
		dem++;
		
	}

}

