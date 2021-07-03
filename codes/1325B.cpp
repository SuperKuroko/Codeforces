#include <iostream>
#include <set>
using namespace std;
int main(void)
{
	int t,n,x;
	set<int> s;
	scanf("%d",&t);
	for(int _ = 0;_ < t;_++)
	{
		scanf("%d",&n);
		s.clear();
		for(int i = 0;i < n;i++)
		{
			scanf("%d",&x);
			s.insert(x);
		}
		printf("%d\n",s.size());
	}
	return 0; 
} 
