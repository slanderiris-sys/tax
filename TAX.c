//Name  Nelly
//Reg no CT100/G/30689/26

#include<stdio.h>

//function prototype
float calculateTax(float gross_salary);

 int main() {
 	float amount ,tax , net_salary;
 	printf("Enter the amount taxed: \t");
 	scanf("%f" , &amount);
 	//function call
 	tax =calculateTax(amount);
 	net_salary=amount-tax;
 	
 	printf("\n");
 	printf("SLANDER ENTERPRICE PROGRAM \n");
 	printf("==================== \n");
 	printf("Initial amount: Ksh .%.2f \n", amount);
 	printf("Tax : Ksh %.2f \n" ,tax);
 	printf("net_salary : Ksh %.2f \n" , net_salary);
 	printf("=====================\n");
 	
 	return 0 ;	
}
//function defination
float calculateTax (float gross_salary) {
		float tax;
		if (gross_salary<=30000){
			tax=0.05*gross_salary;
				
	}
	else if (gross_salary>30000 && gross_salary<=59999) {
		tax=0.1*(gross_salary-30000);
				
	}
	else if (gross_salary>=60000) {
		tax=0.1*(59999-30000) +(gross_salary-59999)*0.15 ;
	}
	
	return tax;
}	
		
	