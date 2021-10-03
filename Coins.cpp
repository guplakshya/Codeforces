#include <bits/stdc++.h>
using namespace std;

// Coins

int main(){
	int n,sum;
	cin>>n>>sum;
	int ans=0;
	if(sum%n==0)
		cout<<sum/n<<endl;
	else
		cout<<(sum/n)+1<<endl;
	return 0;
}
