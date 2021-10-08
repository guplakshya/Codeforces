#include <bits/stdc++.h>
using namespace std;

// Divisibility Problem

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int res = 0;
		if(a%b==0){
			res = 0;
		}
		else{
			res = b-a%b;
		}
		cout<<res<<endl;
	}
	return 0;
}
