#include <iostream>
using namespace std;
int main(void)
{
	int n,pre = 0,x,ans = 0;
	scanf("%d",&n);
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&x);
		if(x != pre) ans++;
		pre = x; 
	}
	printf("%d\n",ans);
	return 0;
} 
