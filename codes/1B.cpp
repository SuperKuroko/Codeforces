#include <iostream>
#include <cctype>
#include <cstring>
using namespace std; 

int main(void)
{
	int n,v,w,C,R;
	char s[20],u[10];
	cin>>n;
	for(int _ = 0;_ < n;_++)
	{
		scanf("%s",s);
		int m = strlen(s); 
		int idx = -1;
		if(isdigit(s[1]))
		{
			for(int i = 2;i < m;i++)
			{
				if(s[i] == 'C')
				{
					idx = i;
					R = 0,C = 0;
					for(int j = 1;j < idx;j++) 
					{
						R *= 10;
						R += s[j]-'0';
					}
					for(int j = idx+1;j < m;j++) 
					{
						C *= 10;
						C += s[j]-'0';
					}
					v = 0;
				    while(C > 0)
					{
					    C--;
					    u[v++] = char(C%26+'A');
					    C /= 26;
					}
					for(int i = v-1;i >= 0;i--)putchar(u[i]);
					printf("%d\n",R);
					break; 
				}
			}
		}
		if(idx == -1)
		{
			for(int i = 1;i < m;i++) 
			{
				if(isdigit(s[i]))
				{
					idx = i;
					break;
				}
			}
			C = 0,w = 1;
			for(int i = idx-1;i >= 0;i--)
			{
				C += (s[i]-'A'+1)*w;
				w *= 26;
			}
			putchar('R');
			for(int i = idx;i < m;i++) putchar(s[i]);
			putchar('C');
			printf("%d\n",C);
		}
	}
	return 0;
	
}
