#include <iostream>
using namespace std;
int main(void)
{
	int n,a,b,c;
	int ans = 0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d %d",&a,&b,&c);
		a += b+c;
		if(a > 1) ans++;
	}
	printf("%d\n",ans);
	return 0;
}
