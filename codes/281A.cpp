#include <iostream>
#include <cctype>
using namespace std;
int main(void)
{
	putchar(toupper(getchar()));
	while(cin.peek() != EOF)putchar(getchar());
	return 0;
}
