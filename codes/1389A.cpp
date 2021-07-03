#include <iostream>
using namespace std;
int main(void)
{
	int t,x,y;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&x,&y);
		if(x*2 > y) printf("-1 -1\n");
		else printf("%d %d\n",x,2*x); 
	}
	return 0;
} 
