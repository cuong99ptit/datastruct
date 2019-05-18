#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	string s;
	deque<int> q;
	while(t--){
		cin>>s;
		if(s=="PUSHBACK"){
			int x;
			cin>>x;
			q.push_back(x);
		}
		else if(s=="PUSHFRONT"){
			int x;
			cin>>x;
			q.push_front(x);
		}
		else if(s=="POPFRONT"){
			if(!q.empty()) q.pop_front();
			
		}
		else if(s=="POPBACK"){
			if(!q.empty()) q.pop_back();
		}
		else if(s=="PRINTFRONT"){
			if(!q.empty()) cout<<q.front()<<endl;
			else cout<<"NONE\n";
		}
		else{
			if(!q.empty()) cout<<q.back()<<endl;
			else cout<<"NONE\n";
		}
	}

}

