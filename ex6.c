#include <stdio.h>

int main(int argc, char *argv[])
{
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4532;
	char first_name[] = "Daniel";
	char last_name[] = "Marasco";

	printf("You are %d miles away.\n", distance);
	printf("You have %f levels of powers. \n", power);
	printf("You have %f awesome super powers.\n", super_power);
	printf("I have a first name %s. \n", first_name);
	printf("I have a last name %s. \n", last_name);
	printf("My whole name is %s %s. \n", 
		first_name, last_name);

	return 0;
}
