#include <bits/stdc++.h>
using namespace std;

// Multiply by 2 divide by 6

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int ans=0;
		cin>>n;
		while(n%6==0) {
            n = n/6; 
			ans++;
        }
        while(n%3==0){
            n = n/3;
			ans+=2;
        }
        if(n==1)
            cout<<ans<<endl;
        else
            cout<<"-1"<<endl;
	}
	return 0;
}
