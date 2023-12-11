#include<cstdio>
#include<cstring>
using namespace std;
const int SIZE = 80;
int list3[2 * SIZE];
void merge(const int list1[], int size1, const int list2[], int size2)
{
	for (int i = 0;i < size1 + size2;i++)
	{
		if (i < size1)
		{
			list3[i] = list1[i];

		}
		else
		{
			list3[i] = list2[i - size1];

		}
	}
	for (int i = 0;i < size1 + size2 - 1;i++)
	{
		for (int j = 0;j < size1 + size2 - i-1;j++)
		{
			if (list3[j]>list3[j+1])
			{
				int t ;
				t = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = t;
			}


		}


	}


}
int main()
{
	int list1[SIZE];
	int list2[SIZE];
	

	for (;;)
	{
		memset(list1, 0, sizeof(list1));
		memset(list2, 0, sizeof(list1));
		memset(list3, 0, sizeof(list1));
		int size1 = 0;
		int size2 = 0;
		scanf_s("%d", &size1);
		for (int i = 0;i < size1;i++)
		{
			scanf_s("%d", &list1[i]);


		}
		scanf_s("%d", &size2);
		for (int i = 0;i < size2;i++)
		{
			scanf_s("%d", &list2[i]);


		}

		merge(list1, size1, list2, size2);
		for (int i = 0;i < size1 + size2;i++)
		{
			printf("%d ", list3[i]);


		}

	}


}