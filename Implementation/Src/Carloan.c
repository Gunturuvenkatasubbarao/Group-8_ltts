void CarLoan(){
    int pan,int scmt;
     printf("ENTER YOUR NAME \n");
    	        scanf("%d",&pan);
                int ITR;
    	        printf("ENTER IT REUTNS \n");
    	        scanf("%d",&itr);
    	        if(itr <500000  && itr >100000){
    	            scamt = 500000;
    	        }
    	        else{
    	            scamt=2500000;
    	        }
                
    	       int amt;
    	        printf("ENTER THE AMOUNT YOU WANT");
    	        scanf("%d",&amt);
                int m;
    	        printf("enter the time in years");
    	        scanf("%d",&m);
    	        int m1=m*12;
    	        prfee = (0.5/100)*scamt;
                inter = (7.3/100)*scamt*m;
                ctotal = scamt+ prfee+inter;
                
                
                printf("Sanctioned loan amount is %d \n",scamt);
        	    printf("total repayment %lf \n" ,ctotal);
}
