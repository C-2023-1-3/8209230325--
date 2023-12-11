#include<cstdio>
#include"mytriangle.h"
using namespace std;
int main()
{
	double a, b, c;
	double aarea;
	while (scanf_s("%lf%lf%lf", &a, &b, &c) == 3 && a > 0)
	{
		if (is_vaild(a, b, c))
		{
			printf("%.2lf", area(a, b, c));



		}
		else
			printf("error");




	}




}
