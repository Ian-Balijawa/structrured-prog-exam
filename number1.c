#include <stdio.h>


void calculateNetSalary();
void calculatePartTimeSalary(int salary, int hoursWorked,int PART_TIMER_RATE,int taxDeductions,double taxRate);
void calculateFullTimeSalary(int basicSalary,int monthlyDeductions,int netSalary);

int PART_TIMER_RATE = 2500;

int main(){

    calculateNetSalary();

    int prompt;
      for(int i = 0;i < 100;i++){
        printf("\nPRESS 0 IF YOU WANT TO TERMINATE OR 1 IF YOU WANT  TO  CONTINUE:");
        scanf("%d",&prompt);
        if(prompt == 1)
          calculateNetSalary();
        else{
          return 0;
        }
      }

    return 0;
}

void calculateNetSalary(){

    char staffNumber[20];
    char staffName[20];
    int salary,netSalary,hoursWorked,taxDeductions,monthlyDeductions,basicSalary;
    double taxRate = 0.3;

    printf("\nENTER STAFF NUMBER:");
    scanf("%s",&staffNumber);

    printf("\nENTER STAFF NUMBER:");
    scanf("%s",&staffName);
       
    printf("\nENTER NUMBER OF HOURS FOR PARTIME WORK ELSE 0 FOR FULLTIME:");
      scanf("%d",&hoursWorked);

    if(hoursWorked > 0){
      calculatePartTimeSalary(salary, hoursWorked,PART_TIMER_RATE,taxDeductions,taxRate);
    }
    else{
      calculateFullTimeSalary(basicSalary,monthlyDeductions,netSalary);
    }

}

void calculatePartTimeSalary(int salary, int hoursWorked,int PART_TIMER_RATE,int taxDeductions,double taxRate){
    int netPay;
    salary = hoursWorked * PART_TIMER_RATE;
    taxDeductions = (int)(salary * taxRate);
    netPay= salary - taxDeductions;

    printf("\nTHE PART-TIMER NET SALARY IS: %d",netPay);
}
void calculateFullTimeSalary(int basicSalary,int monthlyDeductions,int netSalary){
    printf("\nENTER THE BASIC SALARY DEDUCTIONS: ");
    scanf("%d",&monthlyDeductions);

    printf("\nENTER THE BASIC SALARY:");
    scanf("%d",&basicSalary);

    netSalary = basicSalary - monthlyDeductions;
    printf("FULL TIMER NET SALARY IS: %d",netSalary);
}