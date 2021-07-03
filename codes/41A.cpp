#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
	char a[105],b[105];
	scanf("%s %s",a,b);
	int n = strlen(a),m = strlen(b);
	bool ans = true;
	if(n == m)
	{
		for(int i = 0;i < n;i++)
		{
			if(a[i] != b[n-i-1])
			{
				ans = false;
				break;
			}
		}
	}
	else ans = false;
	printf("%s",ans?"YES":"NO");
	return 0;
}
