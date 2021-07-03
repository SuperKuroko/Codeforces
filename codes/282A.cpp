#include <iostream>
using namespace std;
int main(void)
{
	int n,x = 0;
	char cmd[4];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",cmd);
		if(cmd[1] == '+') x++;
		else x--;
	} 
	printf("%d\n",x);
	return 0;
} 
