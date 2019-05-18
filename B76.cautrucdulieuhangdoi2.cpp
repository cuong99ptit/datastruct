#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	string s;
	queue<int> q;
	while(n--){
		cin>>s;
		if(s=="PUSH"){
			int x;
			cin>>x;
			q.push(x);
		}
		else if(s=="POP"){
			if(!q.empty()) q.pop();
		}
		else if(s=="PRINTFRONT"){
			if(!q.empty()) cout<<q.front()<<endl;
			else cout<<"NONE\n";
		}
	}

}

