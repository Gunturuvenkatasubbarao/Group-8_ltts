void CarLoan(){
    printf("ENTER YOUR NAME \n");
    	        scanf("%s",&pan);
    	        printf("ENTER IT RETURNS \n");
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
    	       
    	        
    	        printf("ENTER THE TIME IN YEARS");
    	        scanf("%d",&m);
    	        m1=m*12;
    	        prfee = (0.5/100)*scamt;
                inter = (7.3/100)*scamt*m;
                ctotal = scamt+ prfee+inter;
                
                
                printf("SANCTINED AMOUNT IS %d \n",scamt);
        	    printf("TOTAL REPAYMENT %lf \n" ,ctotal);
