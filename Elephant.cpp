#include <bits/stdc++.h>
using namespace std;

//Elephant

int main(){
	int n;
	cin>>n;
	if(n%5==0)
		n = n/5;
	else
		n = (n/5) + 1;
	cout<<n;
	return 0;
}
