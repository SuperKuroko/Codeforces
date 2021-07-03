#include <iostream>
using namespace std;
typedef long long ll;
int main(void)
{
	ll n,w,k;
	scanf("%lld %lld %lld",&k,&w,&n);
	ll sum = (n+1)*n*k/2;
	cout<<max(sum-w,0ll)<<endl;
	return 0;
}
