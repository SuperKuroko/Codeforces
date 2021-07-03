#include <iostream>
using namespace std;
int main(void)
{
	int n,x;
	scanf("%d",&n);
	int* a = new int [n];
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&x); 
		a[x-1] = i+1;
	}
	for(int i = 0;i < n;i++) printf("%d%c",a[i],i==n-1?'\n':' ');
	return 0;
}
