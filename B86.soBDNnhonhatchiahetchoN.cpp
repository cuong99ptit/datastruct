#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	ull n;
	while(t--){
		cin>>n;
		queue<ull> q;
		q.push(1);
		while(!q.empty()){
			ull x=q.front();
			q.pop();
			if(x%n==0){
				cout<<x<<endl;
				break;
			}
			q.push(x*10);
			q.push(x*10+1);
		}
	}
	

}

