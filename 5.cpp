#include<cstdio>
using namespace std;
int i = 0;
void lastday(int& a)
{
	if (i ==9)
		return;
	//printf("%d\n", a);
	i++;
	a = (a + 1) * 2;
	lastday(a);
	
}

int main()
{
	int a = 1;
	int num = 0;
	lastday(a);
	
	printf("%d", a);


}