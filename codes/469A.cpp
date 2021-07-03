#include <iostream>
using namespace std;
int main(void)
{
	int n,x,y;
	scanf("%d",&n);
	bool *a = new bool [n+1]();
	for(int i = 0;i < 2;i++)
	{
		scanf("%d",&x);
		for(int j = 0;j < x;j++)
		{
			scanf("%d",&y);
			a[y] = true;
		}	
	}
	bool flag = true;
	for(int i = 1;i <= n;i++) 
	{
		if(!a[i])
		{
			flag = false;
			break ;
		}
	}
	cout<<(flag?"I become the guy.":"Oh, my keyboard!")<<endl;
	return 0;
}
