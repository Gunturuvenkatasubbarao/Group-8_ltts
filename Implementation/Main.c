#include <stdio.h>
#include <stdlib.h>

#include "Goldloan.h"
#include "Carloan.h"

void Goldloan();
void Carloan();
int main()
{
	 char name[20];
	 int age;
	 printf("enter name:");
	 scanf("%s", name);
	 
	 
	printf("Enter age:\n");
	scanf("%d",&age);
	   
	   int count=1;
	   while(count)
	   {
	   	if(age<18)
	   	{
	   		printf("Not eligible: ");
	   		scanf("%d",&age);
		}
		else
		{
			count=0;
		}
	   }
	   int value;
	   printf("1. Gold Loan\n");
	   printf("2.Car Loan\n");
	   printf("choose : \n");
	   scanf("%d",&value);
	   switch(value){
            case 1:
            Goldloan();
            break;
            case 2:
            Carloan();
            break;
            
            default:
            	printf("Invalid");
            
        }
	   
	   
	    return 0;
}

	
