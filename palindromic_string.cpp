#include <iostream>
#include<string.h>
using namespace std;

int main() {
	char s[100];
	int len,i,f=0;
	cin >> s;
	len=strlen(s);
	for(i=0;i<len/2;i++,len--)
	{
	    if(s[i]!=s[len-1])
	    f=1;
	    
	}
	// Reading input from STDIN
	if(f)
	cout << "NO";
	else
	cout<<"YES";// Writing output to STDOUT
}
