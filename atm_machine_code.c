#include<stdio.h>
 int main()
{
    float x, y;
    char ch;

    printf("Enter initial amount: \n");
    scanf("%f", &x);

    printf("Enter: \n C for credit \n D for debit \n B for balance\n");
    scanf("\n%c", &ch);

    switch(ch)
    {
        case 'C':
            printf("Enter credit amount: \n");
            scanf("%f", &y);
            x=x+y;
            printf("Enter new amount: %f\n", x);
            break;

        case 'D':
            printf("Enter debit amount: \n");
            scanf("%f", &y);
            if(x>=y)
            {
                x=x-y;
                printf("New amount= %f\n", x);
            }else{
                printf("Insufficient Balance\n");
            }
            break;

        case 'B':
            printf("Your balance in your account is: %f\n", x);
            break;
        default:
            printf("Chose correct option for operation.\n");
    }
    return 0;
}
