#include <iostream>
using namespace std;
typedef long long ll;
int main(void)
{
	ll n;
	cin>>n;
	if(n&1) cout<<-((n+1)>>1)<<endl;
	else cout<<(n>>1)<<endl;
	return 0;
}
