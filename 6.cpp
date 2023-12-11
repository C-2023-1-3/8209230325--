#include<cstdio>
#include<cstring>
using namespace std;
const int MAX = 10;
int main()
{
	int arr[MAX];
	int ans[MAX];
	int length = 0;
	while (1)
	{
		length = 0;
		memset(arr, 0, sizeof(arr));
		memset(ans, 0, sizeof(ans));
		for (int i = 0;i < 10;i++)
		{
			scanf_s("%d", &arr[i]);
		}
		ans[0] =arr[0];
		length += 1;
		for (int i = 1;i < 10;i++)
		{
			for (int j = 0;j < length;j++)
			{
				if (arr[i] == ans[j])
				{
					break;

				}
					
				if (j==length-1)
				{
					ans[length] = arr[i];
					length++;

				}
				//printf("%d\n", length);

			}


		}
		//printf("%d\n", length);
		for (int i = 0;i < length;i++)
		{
			printf("%d ", ans[i]);
		}


	}
}