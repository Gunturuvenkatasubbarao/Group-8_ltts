void Goldloan(){
	            int grams,years;
    	            printf("enter weight in grams \n");
    	            scanf("%d",&grams);
    		    printf("enter time in years \n");
    		    scanf("%d",&years);
        	    int  months;
        	    double need;
        	    int months1=years*12;
        	    double amount = grams*2500;
        	  
        	    
        	    
        	    
        	    printf("Sanctioned loan amount is %lf \n",amount);
        	    printf("Amount you need ");
        	    scanf("%lf",&need);
        	    
        	     double inte = 0.007*need;
        	     while(need>amount)
        	     {
        	         printf("please enter the amount below the sanctioned amount");
        	         scanf("%lf",&need);
        	     }
        	    double emi = (need/months1)+inte;
        	     
        	    printf("EMI amount per month is %lf \n" ,emi);
        	   
	    }
