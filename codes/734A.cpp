#include <iostream>
using namespace std;
int main(void)
{
	int n,cnt = 0;
	scanf("%d",&n); getchar();
	for(int i = 0;i < n;i++)
	{
		if(getchar() == 'A') cnt++;
		else cnt--;
	}
	if(cnt == 0) printf("Friendship\n");
	else printf("%s",cnt > 0?"Anton":"Danik");
	return 0;
} 
