#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++){
		int key=a[i];
		int j=i-1;
		while(j>=0 && a[j]>key ){
			
			a[j+1]=a[j];
			j--;
		}
		cout<<"Buoc "<<i<<": ";
		a[j+1]=key;
		for(int h=0;h<=i;h++){
			cout<<a[h]<<" ";
		}
		cout<<endl;
	}

}

