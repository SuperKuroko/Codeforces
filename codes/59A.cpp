#include <iostream>
#include <cctype>
using namespace std;
int main(void)
{
	int up = 0,low = 0;
	string s;
	cin>>s;
	for(char c:s)
	{
		if(isupper(c)) up++;
		else low++;
	}
	if(up > low) for(int i = 0;i < s.size();i++) s[i] = toupper(s[i]);
	else for(int i = 0;i < s.size();i++) s[i] = tolower(s[i]);
	cout<<s<<endl;
	return 0;
	
}
