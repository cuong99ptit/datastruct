#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,k;
	cin>>n>>k;
	stack<int> a;
	
	for(int i=0;i<n;i++){
		char x;
		cin>>x;
		int v=x-'0';
		if(a.empty()) a.push(v);
		else{
			while(!a.empty() && k>0 && v>a.top() ){
				a.pop();
				k--;
			}
			a.push(v);
			
		}
	}
	vector<int> vt;
	while(!a.empty()){
		int x=a.top();
		a.pop();
		vt.push_back(x);
	}
	for(int i=vt.size()-1;i>=0;i--){
		cout<<vt[i];
	}

}

