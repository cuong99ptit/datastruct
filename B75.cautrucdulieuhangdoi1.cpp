#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	int n;
	while(t--){
		cin>>n;
		queue<int> q;
		int x;
		while(n--){
			cin>>x;
			if(x==1){
				cout<<q.size()<<endl;
			}
			else if(x==2){
				if(q.empty()) cout<<"YES\n";
				else cout<<"NO\n";
			}
			else if(x==3){
				int v;
				cin>>v;
				q.push(v);
			}
			else if(x==4){
				if(!q.empty()) q.pop();
			}
			else if(x==5){
				if(!q.empty()) cout<<q.front()<<endl;
				else cout<<"-1\n";
			}
			else {
				if(!q.empty()) cout<<q.back()<<endl;
				else cout<<"-1\n";
			}
		}
	}

}

