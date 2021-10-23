#include <bits/stdc++.h>
using namespace std;

// Minutes before the new year

int main(){
	int t;
	cin>>t;
	while(t--){
		int h,m;
		cin>>h>>m;
		cout<<(23-h)*60+(60-m)<<endl;
	}
	return 0;
}
