#include <iostream>
using namespace std;
int main(void)
{
	int cnt[26] = {0};
	char c;
	while(cin>>c) cnt[c-'a']++;
	int ans = 26;
	for(int i = 0;i < 26;i++) if(!cnt[i]) ans--;
	cout<<((ans&1)?"IGNORE HIM!":"CHAT WITH HER!")<<endl;
	return 0;
}
