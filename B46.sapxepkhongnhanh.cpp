#include<iostream>
using namespace std;
void merge(long long a[],int l,int mid,int r){
	int i, j, k; 
    int n1 = mid - l + 1; 
    int n2 =  r - mid; 
    long long L[n1], R[n2];    
    for (i = 0; i < n1; i++) 
        L[i] = a[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = a[mid + 1+ j]; 
    i = 0;
    j = 0; 
    k = l;
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            a[k] = L[i]; 
            i++; 
        } 
        else
        { 
            a[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i < n1) 
    { 
        a[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) 
    { 
        a[k] = R[j]; 
        j++; 
        k++; 
    } 
}
void mergesort(long long a[],int l,int r){
	if (l < r) 
    { 
        int mid = l+(r-l)/2; 
        mergesort(a, l, mid); 
        mergesort(a, mid+1, r); 
        merge(a, l, mid, r); 
    } 
}
int main(){
	int n;
	cin>>n;
	long long a[100001];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	mergesort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
