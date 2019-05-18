#include<iostream>
using namespace std;
int n,dem = 0,COT[10],DCXUOI[10],DCNGUOC[10],a[10],A[10][10];
int 	Max=0;
void Init(){
	for(int i=1;i<=8;i++){
		COT[i]=1;
	}
	for(int i=1;i<16;i++){
		DCXUOI[i]=1;
		DCNGUOC[i]=1;
	}
	for(int i=1;i<=8;i++){
		for(int j=1;j<=8;j++){
			cin>>A[i][j];
		}
	}
	
}
void Result(){
	int sum = 0;
	
	for(int i=1;i<=8;i++){
		sum+=A[i][a[i]];
	}
	if(sum>Max)
	Max = sum;

}
void Try(int i){
	for(int j=1;j<=8;j++){
		if(COT[j]==1 && DCXUOI[i-j+8]==1 && DCNGUOC[i+j-1]==1){
			a[i]=j;
			COT[j]=0;
			DCXUOI[i-j+8] = 0;
			DCNGUOC[i+j-1] = 0;
			if(i==8)
			Result();
			else{
				Try(i+1);
			}
			COT[j]=1;
			DCXUOI[i-j+8]=1;
			DCNGUOC[i+j-1]=1;
		}
	}
}
int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		Init();
		Try(1);
		cout<<Max<<endl;
		Max=0;
	}
	
	
}
