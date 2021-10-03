#include <bits/stdc++.h>
using namespace std;

// Chat Room

int main(){
	int n,i,count=0;
	char s[100];
	cin>>s;
	n = strlen(s);
	for(i=0;i<n;i++){
		if(s[i]=='h' && count==0)
			count++;
		else if(s[i]=='e' && count==1)
			count++;
		else if(s[i]=='l' && count==2)
			count++;
		else if(s[i]=='l' && count==3)
			count++;
		else if(s[i]=='o' && count==4)
			count++;
		if(count==5)
			break;	
	}
	if(count==5){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
	return 0;
}
