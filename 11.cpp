#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
const char alphal[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
int arr[26];
int length;
int ssearch(char c)
{
	for (int i = 0;i < 26;i++)
	{
		if (c == alphal[i])
		{
			return i;


		}



	}


}
void count(char* str)
{
	int place = 0;

	for (int i = 0;i < length;i++)
	{
		place = ssearch(str[i]);
		arr[place]++;

	}





}
int main()
{
     char str[50];
	memset(arr, 0, sizeof(arr));
	for (;;)
	{
		scanf_s("%s", str,sizeof(str));
		length = strlen(str);
		count(str);
		
		for (int i = 0;i < 26;i++)
		{
			printf("%c:%dtimes\n", alphal[i], arr[i]);


		}
	}
	//printf("%d", 1);



}