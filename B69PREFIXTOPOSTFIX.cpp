#include <bits/stdc++.h> 
using namespace std; 
bool tt(char x) { 
  	if(x=='+' || x=='-' || x=='*' || x=='/') return true;
  	return false;
} 
void solve(string s) { 
  	stack<string> v; 
  	for (int i =s.length()-1; i >= 0; i--) { 
  
    	if (tt(s[i])) { 
    		string op1 = v.top(); v.pop(); 
    		string op2 = v.top(); v.pop(); 
      		string temp = op1 + op2 + s[i]; 
      		v.push(temp); 
    	} 
    	else v.push(string(1, s[i])); 
  	} 
	cout<<v.top()<<endl;
} 
int main(){
	
	int t;
	cin>>t;
	string s;
	while(t--){
		cin>>s;
		solve(s);
	}


}
