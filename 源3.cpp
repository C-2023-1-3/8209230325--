#include<cstdio>
#include"mytemperature.h"
using namespace std;
int main()
{
	char str1[20] = "Celsius";
	char str2[20] = "Fahrenheit";
	double cel = 0,fah=0;
	printf("%s   %s|%s   %s\n", str1, str2, str2, str1);
	for (;1;)
	{
		scanf_s("%lf",& cel);
		printf("%.2lf\n", celsius_to_fah(cel));
		scanf_s("%lf", &fah);
		printf("%.2lf\n", fahrenheit_to_cels(fah));
	}







}
