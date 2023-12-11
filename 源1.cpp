#include<cstdio>
using namespace std;
void ssearch(int m, int n, int& b, int& c)
{
	for (int i = 2;i < (m < n ? m : n);i++)
	{
		if (m % i == 0 && n % i == 0)
		{
			b = i;


		}
	}
	for (int i = (m > n ? m : n);1;i++)
	{
		if (i % m == 0 && i % n == 0)
		{
			c = i;
			return;

		}


	}

}
int main()
{
	int m=0, n=0;
	int a, b,c;
	while (scanf_s("%d%d",& m,& n))
	{
		a =b=c= 0;
		
		for (int i = 2;i < (m < n ? m : n);i++)
		{
			if (m % i == 0 && n % i == 0)
			{
				a = i;


			}


		}
	     ssearch(m, n, b, c);

		printf("%d %d %d", a,b,c);

	}





}