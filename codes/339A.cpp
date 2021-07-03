#include <iostream>
using namespace std;
int main(void)
{
	int cnt[3] = {0};
	string s;
	cin>>s;
	for(char c:s) cnt[c-'1']++;
	int index = 0;
	s += "+";
	for(int i = 0;i < 3;i++)
	{
		for(int j = 0;j < cnt[i];j++)
		{
			s[index++] = (char)i+'1';
			s[index++] = '+'; 
		}
	}
	s.pop_back();
	cout<<s<<endl;
	return 0;
} 
