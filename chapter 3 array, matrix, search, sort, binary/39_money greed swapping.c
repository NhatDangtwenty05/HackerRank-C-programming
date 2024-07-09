#include <stdio.h>
#include <math.h>

int main()
{
	int the_money[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	long long the_total_amount;
	scanf("%lld", &the_total_amount);
	long long count = 0;
	long long num;
	for(int i = 0;i < 10;i++)
	{
		while(the_total_amount >= the_money[i])
		{
			num = the_total_amount / the_money[i];
			count += num;
			the_total_amount -= the_money[i] * num;
		}
	}
	printf("%lld ", count);

	return 0;
}