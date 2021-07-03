#include <iostream>
using namespace std;
int main(void)
{
	int n,ans = 0,x,y;
	scanf("%d",&n);
	for(int i = 0;i < n;i++)
	{
		scanf("%d %d",&x,&y);
		if(y-x > 1) ans++;
	}
	printf("%d\n",ans);
	return 0;
}
