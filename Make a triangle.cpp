#include <bits/stdc++.h>
using namespace std;

// Make a triangle

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>c && b+c>a && c+a>b)
		cout<<0<<endl;
	if(a+b<=c)
		cout<<c-a-b+1<<endl;
	if(b+c<=a)
		cout<<a-b-c+1<<endl;
	if(c+a<=b)
		cout<<b-c-a+1<<endl;
	
	return 0;
}
