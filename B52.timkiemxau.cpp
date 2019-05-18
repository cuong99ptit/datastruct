#include <bits/stdc++.h> 
using namespace std;
int search(string a,string b) {
  if (b.empty()) return 0;

  vector<int> vt(b.size(), 0);
  for (int i = 1, k = 0; i < b.size();i++) {
    while (k && b[k] != b[i]) k = vt[k - 1];
    if (b[k] == b[i]) ++k;
    vt[i] = k;
  }

  for (int i = 0, k = 0; i < a.size(); ++i) {
    while (k && b[k] != a[i]) k = vt[k - 1];
    if (b[k] == a[i]) ++k;
    if (k==b.size()) return i - k + 1;
  }

  return -1;
}
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
    	string a;
    	string b;
    	cin>>a;
    	cin>>b;
    	if(search(a,b)==-1) cout<<"NO\n";
    	else cout<<"YES\n";
	}
} 
