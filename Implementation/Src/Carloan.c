void carloan()
{
printf("enter pan number \n");
    	        scanf("%s",&pan);
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
}
