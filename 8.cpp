#include<cstdio>
#include<cstring>
using namespace std;
#define MAXN 100
int arr[MAXN];
int main()
{
	int n=2;
	int ans[MAXN];
	int length = 0;
	memset(arr, 0, sizeof(arr));
	for (int i = 0;i < 100;i++)
	{

		arr[i] =1;
	}
	for (int i = 1;i < 100;i++)
	{
		for (int j = n-1;j < 100;j += (n + 1))
		{
			if (arr[j] == 0)
				arr[j] = 1;
			else
				arr[j] = 0;



		}
	}
	for (int i = 0;i < 100;i++)
	{
		if (arr[i] == 1)
		{
			ans[length] = i+1;
			length++;
		}
	}
	for (int i = 0;i < length;i++)
	{
		printf("%d ", ans[i]);

	}
}
