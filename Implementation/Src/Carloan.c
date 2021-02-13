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
	        
	    printf("choose 1 or 2 \n");
	    printf("1.gold loan  \n");
	    printf("2.car loan \n");
        scanf("%d",&ch);	        
	    switch(ch){
	        
	        case 1:
	       
    	        printf("enter weight in grams \n");
    	        scanf("%d",&grams);
    		    printf("enter time in years \n");
    		    scanf("%d",&years);
        	    int months;
        	    months1=months*12;
        	    amount = grams*2500;
        	    pfee = 0.5*amount;
        		inte = 0.07*amount;
        	    total = amount+pfee+inte;
        	    //emi = total/months1; 
        	    
        	    printf("Sanctioned loan amount is %d \n",amount);
        	    printf("toal Repayment %lf \n" ,total);
        	    break;
        	    
        	    case 2:
        	    
        	    printf("enter pan number \n");
    	        scanf("%d",&pan);
    	        printf("enter ITR \n");
    	        scanf("%d",&itr);
    	        if(itr <100000 )
    	        {
    	        	printf("YOU ARE NOT ELIGIBLE FOR THE LOAN ");
    	        	break;
    	        }
    	        if(itr >100000 && itr<500000){
    	            scamt = 500000;
    	        }
    	        else
				{
    	            scamt=2500000;
    	        }
    	       
    	        
    	        printf("enter the time in years");
    	        scanf("%d",&m);
    	        m1=m*12;
    	        prfee = (0.5/100)*scamt;
                inter = (7.3/100)*scamt*m;
                ctotal = scamt+ prfee+inter;
                
                
                printf("Sanctioned loan amount is %d \n",scamt);
        	    printf("total repayment %lf \n" ,ctotal);
        	    break;
    	       
	    
	    
        
      }
	    return 0;
	}
}

