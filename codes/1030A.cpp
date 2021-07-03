#include <iostream>
using namespace std;
int main(void)
{
	int n,x,ans = 0;
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&x);
		ans |= x;
	}
	cout<<(ans?"HARD":"EASY")<<endl;
	return 0;
}
