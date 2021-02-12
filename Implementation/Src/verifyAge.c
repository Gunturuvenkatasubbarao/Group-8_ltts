void verifyAge(){
    int age;
    printf("enter age \n");
	   scanf("%d", &age);
      if(age>=18 && age<=60){
          
        int a;
        printf("Enter the type of Loan:\n");
        printf("Choose 1 for GoldLoan\n 2 for CarLoan\n");
        scanf("%d",&a);
        switch(a){
            case 1:
            GoldLoan();
            break;
            case 2:
            CarLoan();
            break;
            
        }
         
      }
      else{
          printf("Not Eligible");
      }
}