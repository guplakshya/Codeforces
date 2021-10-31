#include <bits/stdc++.h>
using namespace std;

// Required Remainder

int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,n;
		cin>>x>>y>>n;
		int cnt= n/x;
		int k = x*cnt + y;
		if(k>n){
			k-=x;
		}
		cout<<k<<endl; 
	}
	return 0;
}
