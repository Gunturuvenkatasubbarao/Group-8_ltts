void Goldloan(){
    int grams;
    printf("Enter Grams:\n");
    scanf("%d",&grams);
    int months;
    printf("Enter no of months:\n");
    scanf("%d",&months);
    int amount=grams*2500;
    double pfee=0.05*amount;
    double interest=0.07*amount;
    double total=amount+pfee+interest;
    //comment
    printf("Sanctioned amount %d:",amount);
    printf("Total repayment %lf:",total);
}