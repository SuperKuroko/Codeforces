#include <iostream>
using namespace std;
int main(void)
{
	int a[8];
	for(int i = 0;i < 8;i++) scanf("%d",&a[i]);
	int x = a[1]*a[2]/a[6];
	int y = a[3]*a[4];
	int z = a[5]/a[7];
	int ans = min(x,min(y,z))/a[0];
	printf("%d\n",ans);
	return 0;
}
