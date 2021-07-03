#include <iostream>
using namespace std;
int main(void)
{
	int n;
	scanf("%d",&n);
	if(n&1 || n == 2) printf("NO\n");
	else printf("YES\n");
	return 0;
} 
