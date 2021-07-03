#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main(void)
{
	char a[105],b[105];
	scanf("%s %s",a,b);
	int n = strlen(a),m = strlen(b);
 	int size = min(n,m),i,ans = 0;
 	for(i = 0;i < size;i++)
 	{
 		a[i] = tolower(a[i]);
 		b[i] = tolower(b[i]);
 		if(a[i] != b[i])
 		{
 			ans = a[i]>b[i]?1:-1;
 			break;
		}
	}
	if(i == size && n != m) ans = n>m?1:-1;
	printf("%d\n",ans);
	return 0;
}
