#include <bits/stdc++.h>
using namespace std;

//HQ9+

int main(){
	char s[100];
    int i;
    cin>>s;
    for(i=0;i<strlen(s);i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            cout<<"YES";
            return 0;
        }
    }
   	cout<<"NO";
	return 0;
}
