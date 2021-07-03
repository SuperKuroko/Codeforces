#include <iostream>
using namespace std;
void solve(string &s)
{
	int i = 0,n = s.size();
	while(i < n)
	{
		if(s[i] == 'G' && s[i-1] == 'B')
		{
			swap(s[i],s[i-1]);
			i += 2;
		}
		else i++;
	} 
}
int main(void)
{
	int n,t;
	scanf("%d %d",&n,&t);
	string s;
	cin>>s;
	for(int i = 0;i < t;i++) solve(s);
	cout<<s<<endl;
	return 0;
}
