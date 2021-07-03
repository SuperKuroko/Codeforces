#include <iostream>
using namespace std;
typedef long long ll;
int main(void)
{
	ll n,m,a;
	scanf("%lld %lld %lld",&n,&m,&a);
	ll x = n/a,y = m/a;
	if(n%a != 0) x++;
	if(m%a != 0) y++;
	cout<<x*y<<endl;
	return 0;
}
