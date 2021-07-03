#include <iostream>
using namespace std;
int main(void)
{
	int n,ans = 0;
	char pre,current;
	scanf("%d",&n); getchar();
	scanf("%c",&pre);
	for(int i = 1;i < n;i++)
	{
		scanf("%c",&current);
		if(current == pre) ans++;
		pre = current;
	}
	printf("%d\n",ans);
	return 0;
}
