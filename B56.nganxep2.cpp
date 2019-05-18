#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	stack<int > a;
	string s;
	
	while(t--){
		cin>>s;
		if(s=="PUSH"){
			int x;
			cin>>x;
			a.push(x);
		}	
		else if(s=="POP"){
			if(!a.empty()) a.pop();
		}
		else if(s=="PRINT"){
			if(!a.empty()) cout<<a.top()<<endl;
			else cout<<"NONE\n";
		}
	}

}

