#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
	int n,len;
	char s[105];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",s);
		len = strlen(s);
		if(len <= 10) printf("%s\n",s);
		else printf("%c%d%c\n",s[0],len-2,s[len-1]);
	} 
	return 0;
} 
