#include <iostream>
using namespace std;
int main(void)
{
	int t,n,x,sum;
	bool f1,f2;
	scanf("%d",&t);
	for(int _ = 0;_ < t;_++)
	{
		scanf("%d",&n);
		int sum = 0;
		f1 = f2 = false;
		for(int i = 0;i < n;i++)
		{
			scanf("%d",&x);
			if(x&1) f1 = true;
			else f2 = true;
			sum += x;
		}
		if(!(sum&1) && !(f1&f2)) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}
