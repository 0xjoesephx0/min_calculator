#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    char op;
    int num1, num2;
    double rs;
    bool bs;
    bs = true;
    while(bs)
    {
        printf("\nChoose an operator (+ * / -):");
        scanf("%c", &op);
        rs = op != '+' || op != '*' || op != '/' || op != '-';
    }
    

    /* while (op != '/')
        {
         printf("\nChoose an operator (+ * / -):");
         scanf("%c", & op);

        } */
/* 
    if (op == '+' || op == '*' || op == '/' || op == '-')
    {
        printf("\nEnter number 1: ");
        scanf("%d", &num1);

        printf("\nEnter number 2: ");
        scanf("%d", &num2);

        switch (op)
        {
        case '+':
            rs = num1 + num2;
            printf("\nResult = %.2lf", rs);
            break;
        case '*':
            rs = num1 * num2;
            printf("\nResult = %.2lf", rs);
            break;
        case '/':
            if (num2 == 0)
            {
                while (num2 == 0)
                {
                    printf("Dividing by Zero is undefined, enter anther number:");
                }
                break;
            }
            scanf("%d", &num2);
            rs = num1 / num2;
            printf("\nResult = %.2lf", rs);

            break;
        case '-':
            rs = num1 - num2;
            printf("\nResult = %.2lf", rs);
            break;
        }
    }
    else
    {
        printf("Invalid op %c", op);
    }
 */
    return 0;
}