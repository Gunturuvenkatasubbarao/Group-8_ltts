void Carloan()

{
double itr,sanctioned,need,inte;
char name[20];
int years;
printf("ENTER PANCARD NUMBER : ");
scanf("%s",name);
printf("ENTER YOUR IT RETURNS: ");
scanf("%lf",&itr);
if(itr<100000)
{
    printf("SORRY! YOU ARE NOT ELIGIBLE ::  ");
    return;
}
else if(itr>=100000 && itr<=500000)
{
    sanctioned = itr/2;
    printf("YOUR SCANCTIONED AMOUNT IS ::  %lf\n",sanctioned);
    printf("AMOUNT YOU NEED: ");
    scanf("%lf",&need);
    
    
    	     while(need>sanctioned)
    	     {
    	         printf("PLEASE ENTER THE AMOUNT BELOW THE SANCTINED AMOUNT");
    	         scanf("%lf",&need);
    	     }
    	     printf("ENTER YEARS: ");
    	     scanf("%d",&years);
    	     inte = 0.007*need;
    	     double emi = (need/(years*12))+inte;
    	     
    	     printf("EMI AMOUNT PER MONTH IS %lf \n" ,emi);
    	    
    	    
    	   
    
}
else
{
    sanctioned = itr*0.7;
    printf("AMOUNT YOU NEED: \n");
    scanf("%lf",&need);
    while(need>sanctioned)
    {
        printf("PLEASE ENTER THE AMOUNT BELOW THE SANCTINED AMOUNT: \n");
        scanf("%lf",&need);
        
    }
    printf("ENTER YEARS: ");
    scanf("%d",&years);
    inte = 0.005*need;
    double emi = (need/(years*12))+inte;
    	     
    printf("EMI AMOUNT PER MONTH IS %lf \n" ,emi);
    	   
}
