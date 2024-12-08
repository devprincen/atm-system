
#include <stdio.h>

int main() {
    const float OpeningBalance = 100000.50 ;
    float ClosingBalance ;
    int i;
    char userWant, name[40];
    
    printf("Wellcome to ATM Machine \n");
    
    printf("Enter Your Name ");
    scanf("%s",&name);
    
    restart:
    
    printf("Press one for operation : \n\n1 Balance Enquiry \n2 Withdrawal \n3 Deposite \n4 Exite \n");
    
    printf("Enter your Opening Balance %.2f\n",OpeningBalance);
    
    printf("Press 1,2,3,4 Keys only ");
    scanf("%d",&i);
    
    switch (i){
        case 1:
        printf("\n Your Current Balance is %f\n", OpeningBalance);
        break;
        
        case 2:
        printf("Enter your withdrawal amount: ");
        scanf("%f",&ClosingBalance);
        float cb=OpeningBalance-ClosingBalance;
        printf("\nyour Total Amount : %2f", cb);
        break ;
        
        case 3:
        printf("Enter your deposite amount: "); 
        scanf("%2f",&ClosingBalance);
        cb=OpeningBalance+ClosingBalance;
        printf("\nYour Total Amount : %2f", cb);
        break ;
        
        case 4:
        printf("Wellcome to Comeback");
        break;
        
        default:
        printf("it's not valid operation");
        break ;
     }
        printf("\n Are you want to restart? (y|n) ");
        scanf("%s",&userWant);
        
         if(userWant == 'y' || userWant == 'Y');
               goto  restart;
     
                 return 0;
    }
    




