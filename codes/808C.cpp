#include <iostream>
#include <algorithm>
using namespace std;
struct node
{
	int index;
	int val;
	int add = 0;
};
int main(void)
{
	int n,w;
	scanf("%d %d",&n,&w);
	node *a = new node [n];
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&a[i].val);
		a[i].index = i;
	}
	int sum = 0;
	for(int i = 0;i < n;i++) sum += a[i].val/2 + (a[i].val&1); 
	if(sum > w) printf("-1\n");
	else
	{
		int more = w-sum;
		sort(a,a+n,[](const node &u,const node &v){
			return u.val > v.val;	
		});
		for(int i = 0;i < n && more > 0;i++)
		{
			int intrinsic = a[i].val/2+(a[i].val&1);
			if(more >= a[i].val-intrinsic) a[i].add = a[i].val-intrinsic;
			else a[i].add = more;
			more -= a[i].add;
		}
		sort(a,a+n,[](const node &u,const node &v){
			return u.index < v.index;
		});
		for(int i = 0;i < n;i++) printf("%d%c",a[i].val/2+(a[i].val&1)+a[i].add,i==n-1?'\n':' ');
	} 
	return 0;
}
