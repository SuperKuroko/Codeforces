#include <iostream>
using namespace std;
int main(void)
{
	string a,b;
	cin>>a>>b;
	for(int i = 0;i < a.size();i++) putchar((a[i]==b[i])?'0':'1');
	return 0;
}
