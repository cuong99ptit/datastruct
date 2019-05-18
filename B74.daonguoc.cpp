#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s;
	vector<vector<char> >vt;
	
	while(cin>>s){
		vector<char> at;
		for(int i=0;i<s.length();i++){
			at.push_back(s[i]);
		}
		vt.push_back(at);
		
	}
	for(int i=0;i<vt.size();i++){
		for(int j=vt[i].size()-1;j>=0;j--){
			cout<<vt[i][j];
		}
		cout<<" ";
	}

}

