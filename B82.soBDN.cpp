#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	unsigned long long n;
	while(t--){
		cin>>n;
		queue<unsigned long long> q;
		int dem=0;
		q.push(1);
		
	 	while(!q.empty()){
	 		unsigned long long v=q.front();
	 		q.pop();
			if(v<=n) dem++;
			else break;
			q.push(v*10);
			q.push(v*10+1);
		}
		cout<<dem<<endl;
	}
	
}

