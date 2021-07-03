#include <iostream>
using namespace std;
int main(void)
{
	int n,k,ans = 0,val,key;
	scanf("%d %d",&n,&k);
	for(int i = 0;i < k-1;i++)
	{
		scanf("%d",&val);
		if(val > 0) ans++;
	}
	scanf("%d",&key);
	if(key > 0) ans++;
	for(int i = k;i < n;i++)
	{
		scanf("%d",&val);
		if(val >= key && val > 0) ans++; 
	}
	printf("%d\n",ans);
	return 0; 
 } 
