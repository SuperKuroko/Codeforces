#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
	int x,y,val;
	for(int i = 0;i < 5;i++)
	{
		for(int j = 0;j < 5;j++)
		{
			scanf("%d",&val);
			if(val == 1)
			{
				x = i;
				y = j;
			}
		}
	}
	printf("%d\n",abs(x-2)+abs(y-2));
	return 0;
}
