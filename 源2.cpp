#include<cstdio>
#include<cstring>
using namespace std;
#define MAXN 200
bool is_prime(int num)
{
	if (num == 2)
	{
		return true;
	}
	else {
		for (int i = 2;i < num;i++)
		{
			if (num % i == 0 && i != 2)
			{
				return false;

			}
			if (i == num - 1)
			{
				return true;
			}

		}

	}
	


}
int main()
{
	int a = 200;
	int arr[MAXN];
	memset(arr, 0, sizeof(arr));
	int p = 0;
	for (int i = 2;i <= 200;i++)
	{
		if (is_prime(i))
		{
			arr[p] = i;
			p++;


		}


	}
	//printf("%d ", arr[10]);
	for (int i = 0;i <p;i++)
	{
		if (i % 10 == 0 && i > 0)
		{
			printf("\n");
		}
		printf("%d ", arr[i]);

		


	}



}