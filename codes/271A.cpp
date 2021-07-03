#include <iostream>
using namespace std;
bool f(int x)
{
	bool vis[10] = {0};
	while(x != 0)
	{
		int c = x%10;
		if(vis[c]) return false;
		vis[c] = true;
		x /= 10;
	}
	return true;
}
int main(void)
{
	int x;
	scanf("%d",&x);
	do
	{
		x++;
	}while(!f(x));
	printf("%d\n",x);
	return 0;
} 
