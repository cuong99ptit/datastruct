#include<bits/stdc++.h>
using namespace std;
bool tt(char x){
	if(x=='+' || x=='-' || x=='*' || x=='/') return true;
	return false;
}
void solve(string s){
	stack<string> a;
	for(int i=0;i<s.length();i++){
		string x="";
		x+=s[i];
		if(tt(s[i])){
			string m=a.top();a.pop();
			string h=a.top();a.pop();
			string NEW=s[i]+h+m;
			a.push(NEW);
		}
		else a.push(x);
	}
	cout<<a.top()<<endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	string s;
	while(t--){
		cin>>s;
		solve(s);
	
	}

}

