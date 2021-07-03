#include <iostream>
using namespace std;
int main(void)
{
	int n,x,sum = 0;
	scanf("%d",&n);
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&x);
		sum += x;
	}
	printf("%.6f",sum*1.0/n);
	return 0;
}
