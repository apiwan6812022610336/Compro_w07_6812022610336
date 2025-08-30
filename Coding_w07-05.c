#include<stdio.h>
int age;
int VIP_level;
float Purchase_amount;

int main(){

printf("Enter age: ");
scanf("%d", &age);
printf("Enter VIP level (1-5): ");
scanf("%d", &VIP_level);
printf("Enter purchase amount: ");
scanf("%f", &Purchase_amount);


printf("\n");

printf("\n--- Customer Info ---\n");
printf("Age: %d | VIP level: %d | Amount: %.2f\n", age , VIP_level, Purchase_amount);

printf("\n");

if(VIP_level == 5|| Purchase_amount > 50000.00){printf("Discount received 25%% \n");}
else if(age > 60 || VIP_level == 3 || VIP_level == 4){printf("Discount received 20%% \n");}
else if((age <= 40 && age >=30) &&( VIP_level == 1 || VIP_level == 2) && Purchase_amount > 2000.00  ){printf("Discount received 15%% \n");}
else if((age <= 25 && age >=18) &&( VIP_level == 1 || VIP_level == 2) && Purchase_amount > 1000.00  ){printf("Discount received 10%% \n");}
else {printf("No discount applied\n");}

printf("\n");

printf("Thank you for shopping with us!\n");

return 0;
}


/*
if(age > 60 || VIP_level == 3 || VIP_level == 4){printf("Discount received 20%% \n");}
else if((age <= 40 && age >=30) && Purchase_amount > 2000.00 ){printf("Discount received 15%% \n");}
else if((age <= 25 && age >=18) && Purchase_amount > 1000.00 ){printf("Discount received 10%% \n");}
else if(VIP_level == 5|| Purchase_amount > 50000.00){printf("Discount received 25%% \n");}
else {printf("No discount received\n");}
*/
