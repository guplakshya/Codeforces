#include <bits/stdc++.h>
using namespace std;

// Fake news

bool isSubSequence(char str1[], char str2[])
{
	int m = str1.length;
	int n = str2.length;
    int j = 0;
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;
    return (j == m);
}
int main(){
	string str1;
	cin>>str1;
	string str2 = "heidi";
	boolean res = isSubSequence(str1, str2);
	if(true)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
