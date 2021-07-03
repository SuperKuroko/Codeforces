#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
struct node
{
	ll val;
	int index;
};
int main(void)
{
	ll a,b,n,sum,x,y;
	scanf("%lld %lld %lld %lld",&n,&sum,&a,&b);
	node* v = new node [n];
	for(int i = 0;i < n;i++)
	{
		scanf("%lld %lld",&x,&y);
		v[i].val = x*a+y*b;
		v[i].index = i+1;
	}
	sort(v,v+n,[](const node &p,const node &q){
		return p.val < q.val;
	});
	int j;
	for(j = 0;j < n;j++)
	{
		if(sum-v[j].val < 0) break;
		sum -= v[j].val;
	}
	printf("%d\n",j);
	for(int i = 0;i < j;i++) printf("%d%c",v[i].index,i==j-1?'\n':' ');
	return 0;
}
