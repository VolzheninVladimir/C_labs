#include <stdio.h>


int checking_data(float amount, int term, float percentage)
{
	if (amount < 0) return 0;
	else if (term < 0) return 0;
	else if (percentage < 0) return 0;
	else if (term == 0) return 0;
	else return 1;
}


int amount_with_simple_percentage(float initial_amount, int term, float percentage)
{
	int month = 0;
	float month_percentage = percentage / 1200, final_amount = initial_amount;
	float simple_supplement = initial_amount * month_percentage;
	printf("month     amount\n");
	while (month < term)
	{
		final_amount += simple_supplement;
		month += 1;
		printf("%d         %0.4f\n", month, final_amount);
	}
	printf("\n");
	return 0;
}


int amount_with_difficult_percentage(float initial_amount, int term, float percentage)
{
	int month = 0;
	float month_percentage = percentage / 1200, final_amount = initial_amount;
	float simple_supplement = initial_amount * month_percentage;
	printf("month     amount\n");
	while (month < term)
	{
		if (month % 12 == 0) simple_supplement = final_amount * month_percentage;
		final_amount += simple_supplement;
		month += 1;
		printf("%d         %0.4f\n", month, final_amount);
	}
	
	return 0;
}


int main()
{
	float deposit_amount, annual_percentage;
	int deposit_term;
	printf("amount:");
	scanf("%f", &deposit_amount);
	printf("term:");
	scanf("%d", &deposit_term);
	printf("percentage:");
	scanf("%f", &annual_percentage);
	if (checking_data(deposit_amount, deposit_term, annual_percentage) != 0)
	{
		amount_with_simple_percentage(deposit_amount, deposit_term, annual_percentage);
		amount_with_difficult_percentage(deposit_amount, deposit_term, annual_percentage);
	}
	else printf("incorrect data");
	return 0;
}
