#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	double arr[10];
	for (int i = 0;i < 10;i++)
	{
		scanf_s("%lf", &arr[i]);

	}
	//printf("%d\n", arr[0]);
	for (int i = 0;i < 10;i++)
	{
		//printf("%d\n", i);
		for (int j = 0;j < 9 - i;j++)
		{
			if (arr[j] < arr[j + 1])
			{
				double t;
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}




		}

	}
	//printf("%d\n", arr[0]);
	for (int i = 0;i < 10;i++)
	{
		printf("%.2lf ", arr[i]);

	}

}