#include<bits/stdc++.h>
using namespace std;
bool solve(string s){
	stack<char> a;
	
	for(int i=0;i<s.length();i++){
		char x=s[i];
		if(x=='(' || x=='['|| x=='{') a.push(x);
		else{
			if(!a.empty()){
				if(x==')'){
					if(a.top() !='(') return false;
				}	
				else if(x==']'){
					if(a.top() !='[') return false;
				}
				else if(x=='}'){
					if(a.top()!='{') return false;
				}
				a.pop();
			}
			
		}
	}
	if(!a.empty()) return false;
	return true;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	string s;
	while(t--){
		stack<char> a;
		cin>>s;
		bool kt;
		kt=solve(s);
		if(!kt) cout<<"NO\n";
		else cout<<"YES\n";
	}
	

}

