
#include <stdio.h>

// Write a program to add 2 numbers
// ask user for 2 different numbers using scanf
// scanf("%i", ...);
// Then printf the sum of the three numbers

int main() {
	int L, W;
	printf("Enter 1st number: ");
	scanf("%i", &L);
	printf("Enter 2nd number: ");
	scanf("%i", &W);
	printf("Your character's name is %i\n", L*W);
}
