#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int len1, len2;
int indexOf(const char s1[], const char s2[])
{
	for (int i = 0;i <= len1 - len2 + 1;i++)
	{
		for (int j = 0;j < len2 && s2[j] == s1[i + j];j++)
		{
			if (j == len2 - 1 && s2[j] == s1[i + j])
				return i;

		}

	}


}
int main()
{
	char s1[50];
	char s2[50];
	cin.getline(s1, 50);
	cin.getline(s2, 50);
	len1 = strlen(s1);
	len2 = strlen(s2);
	int place = indexOf(s1, s2);
	cout << place+1<< endl;


}