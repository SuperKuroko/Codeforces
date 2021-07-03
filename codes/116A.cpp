#include <iostream>
using namespace std;
int main(void)
{
	int n,ans = 0,cnt = 0,x,y;
	scanf("%d",&n);
	for(int i = 0;i < n;i++)
	{
		scanf("%d %d",&x,&y);
		cnt += y-x;
		ans = max(ans,cnt);
	}
	cout<<ans<<endl;
	return 0;
}
