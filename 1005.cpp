#include<stdio.h>
#include<math.h>

int main()
{
	double PI = 3.14159265358979323846264338327;
	int n;
	scanf("%d", &n);
	double x, y;
	int i = 1;
	while (n--)
	{

		scanf("%lf%lf", &x, &y);
		double len = (x * x + y * y) *PI;
		printf("Property %d: This property will begin eroding in year %d.\n", i++, (int)len / 100 + 1);
	}
	printf("END OF OUTPUT.\n");
}