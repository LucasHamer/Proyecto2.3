#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, sum, mult, cos, res;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    sum=num1+num2;
    mult=num1*num2;
    cos=num1/num2;
    res=num1%num2;
    printf("La suma de ambos es: %d\n", sum);
    printf("El producto de ambos es: %d\n", mult);
    printf("El cociente de ambos es: %d\n", cos);
    printf("El resto de ambos es: %d\n", res);

    return 0;
}
