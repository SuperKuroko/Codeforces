#include <iostream>
using namespace std;
int main(void)
{
	int a,b,ans;
	cin>>a>>b;
	for(ans = 0;a <= b;ans++,a *= 3,b*=2);
	cout<<ans<<endl;
	return 0;
}
