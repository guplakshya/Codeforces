#include <bits/stdc++.h>
using namespace std;

// Candies and Two Sisters

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int res=0;
		if(n<2){
			res = 0;	
		}
		else if(n%2==0){
			res = n/2-1;
		}
		else{
			res = n/2;
		}
		printf("%d\n", res);
	}
	return 0;
}
