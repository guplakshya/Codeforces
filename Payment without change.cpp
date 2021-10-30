#include <bits/stdc++.h>
using namespace std;

// Payment without change
int t;
int a,b,n,S,d;
int main(){
	cin>>t;
	while(t--){
		cin>>a>>b>>n>>S;
		d = min(S/n,a);
		d = S-d*n;
		if(d<=b)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
