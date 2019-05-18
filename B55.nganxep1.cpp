#include<bits/stdc++.h>
using namespace std;
int top=0;
int a[201];
void push(int x){
	top++;
	a[top]=x;
}
bool empty(){
	if(top==0) return true;
	return false;
}
void pop(){
	if(!empty()) top--;
}
void show(){
	for(int i=1;i<=top;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s;
	stack<int> a;
	while(cin>>s){
		if(s=="push"){
			int x;
			cin>>x;
			push(x);
		}
		else if(s=="pop"){
			pop();
		}
		else if(s=="show"){
			if(top==0) cout<<"empty\n";
			else show();
		}
	}

}

