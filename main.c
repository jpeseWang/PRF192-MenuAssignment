#include<stdio.h>
#include "./options/option1.c"
#include "./options/option2.c"
#include "./options/option3.c"
#include "./options/option4.c"
#include "./options/option5.c"
#include "./options/option6.c"

int validChoice(char* line) {
	if(*(line+1) == '\0' && *line >= '0' && *line <= '6') return 1;
	printf("\nInvalid input. Please enter again.\n");
	return 0;
}
int main() {
    printf("This is the program developed by group 6 - class SE17D05\n\n");
    printf("Enter 0 to exit the program\n");
    printf("Enter 1 to combine two non-decreasing arrays and print them in decreasing order\n");
    printf("Enter 2 to print all palindrome numbers in the array\n");
    printf("Enter 3 to print all numbers which each has the rightmost digit equal to 5\n");
    printf("Enter 4 to print all index which each number at that index is a prime number\n");
    printf("Enter 5 to calculate number of ways to get n VND (200k by default) from 10k, 20k and 50k\n");
    printf("Enter 6 to find the first positive number in the array\n\n");
    
    char line[3];
    do {
    	*line = '\0';
    	do {
    		printf("Enter your choice: \n");
    		fflush(stdin);
    		scanf("%[^\n]", line);
		} while (!validChoice(line));
		
		printf("\nModify './inputs/input%c.txt' to change the input.\n", *line);
		
		switch(*line) {
			case '0':
				printf("Exit successfully");
				break;
			case '1':
				option1();
				break;
			case '2':
				option2();
				break;
			case '3':
				//option3();
				break;
			case '4':
				//option4();
				break;
			case '5':
				//option5();
				break;
			case '6':
				//option6();
				break;
		}
		
		printf("\n");
	} while (*line >= '1' && *line <= '6');
    
    return 0;
}
