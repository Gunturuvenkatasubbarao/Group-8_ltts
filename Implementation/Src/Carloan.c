<<<<<<< HEAD
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include <ctype.h>

int main()
{
	    int age,ch,months,months1,amount,amt,scamt,m,m1,pan,itr;
	    char name[20];
	         int grams,years;
	    double pfee,inte,total,emi,prfee,inter,ctotal;
	   printf("enter name:");
	   scanf("%s", name);
	   printf("enter age \n");
	   scanf("%d", &age);
      if(age>=18 && age<=60){
        	 printf("ENTER YOUR NAME \n");
    	        scanf("%d",&pan);
    	        printf("ENTER ITR \n");
=======
void CarLoan(){
    printf("ENTER YOUR NAME \n");
    	        scanf("%s",&pan);
    	        printf("ENTER IT RETURNS \n");
>>>>>>> 7d1afb4c0e18bf4609ca4d03c633c6462cb92457
    	        scanf("%d",&itr);
    	        //if(itr <100000 )
    	        {
    	        	printf("YOU ARE NOT ELIGIBLE FOR THE LOAN ");
    	    //
    	        }
    	        if(itr >100000 && itr<500000){
    	            scamt = 500000;
    	        }
    	        else
				{
    	            scamt=2500000;
    	        }
    	       
    	        
    	        printf("ENTER THE TIME IN YEARS");
    	        scanf("%d",&m);
    	        m1=m*12;
    	        prfee = (0.5/100)*scamt;
                inter = (7.3/100)*scamt*m;
                ctotal = scamt+ prfee+inter;
                
                
                printf("SANCTINED AMOUNT IS %d \n",scamt);
        	    printf("TOTAL REPAYMENT %lf \n" ,ctotal);
<<<<<<< HEAD
	  }
 }
=======
>>>>>>> 7d1afb4c0e18bf4609ca4d03c633c6462cb92457
