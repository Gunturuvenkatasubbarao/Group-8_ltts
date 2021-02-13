#include <stdio.h>
#include <stdlib.h>

#include "Goldloan.h"
#include "Carloan.h"
#include "verifyAge.h"

void Goldloan();
void Carloan();
void verifyage();
int main()
{
	 char name[20];
	   printf("enter name:");
	   scanf("%s", name);
	   verifyAge();
	    return 0;
}


	
