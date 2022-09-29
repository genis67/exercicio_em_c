#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main( )
{
    /* code */
    setlocale(LC_ALL, "");

    int num1, num2, num3, apoio;

    printf("\nInforme o primeiro numero: ");
    scanf("d%", &num1);

    printf("\nInforme o segundo numero: ");
    scanf("d%", &num2);

    printf("\nInforme o terceiro numero: ");
    scanf("d%", &num3);

    if (num1>num2)
    {
        apoio=num1;
        num1=num2;
        num2=apoio;
    }

    if (num1>num3)
    {
        apoio=num1;
        num1=num3;
        num3=apoio;
    }
    printf("\n", num1);
    printf("\n", num2);
    printf("\n", num3);
    

    return 0;
}
