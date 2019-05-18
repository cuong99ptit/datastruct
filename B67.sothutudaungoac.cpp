#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s;
	while(cin>>s){
		stack<int> a;
		int Count=0;
	
		for(int i=0;i<s.length();i++){
			char x=s[i];
			if(x=='('){
				Count++;
				a.push(Count);
				cout<<Count<<" ";
			}
			if(x==')'){
				int y=a.top();
				cout<<y<<" ";
				a.pop();
			}
			
		}
		cout<<endl;
		
	}

}

