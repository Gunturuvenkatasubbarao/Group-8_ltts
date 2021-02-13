#include <stdio.h>
#include <stdlib.h>

#include "Goldloan.h"
#include "Carloan.h"

void do_Goldloan();
void do_Carloan();


void calc_opr()
{
	printf("\n             Welcome to Loan calculator \n\n");
	calc_inst();

	printf("Enter 1 for Goldloan \n");
	printf("Enter 2 for Carloan \n");
	
}

int main(void)
{
	int X = 1;
	char input;
	char respo;

	opr();
	scanf("%c", &input);
	switch(input)
	{ 
		case '1': do_Goldloan();
				break; 
		case '2': do_carloan();
				break;
		
		default : 
			printf("\n**********You have entered unavailable option");
    		printf("***********\n");
    		printf("\n*****Please Enter any one of below available ");
    		printf("options****\n");
			opr();

	}

	
