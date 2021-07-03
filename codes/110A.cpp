#include <iostream>
using namespace std;
int main(void)
{
	long long x;
	int ans = 0;
	cin>>x;
	while(x){
		if(x%10 == 4 || x%10 == 7) ans++;
		x /= 10; 
	}
	cout<<((ans==4 || ans==7)?"YES":"NO")<<endl;
	return 0;
}
