#include <iostream>
using namespace std;
int main(void)
{
	int n,h,ans = 0,x;
	scanf("%d %d",&n,&h);
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&x);
		ans += (x>h)?2:1;
	}
	printf("%d\n",ans);
	return 0;
}
