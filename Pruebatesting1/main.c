#include <stdio.h>
#include <stdlib.h>

float ConvertirTemperatura(float C);

int main()
{
    float celsius=0;

    printf("Ingrese la temperatura en grados celsius:");
    scanf("%f",&celsius);

    float fahrenhet = ConvertirTemperatura(celsius);


    if(fahrenhet==-999)
    {
        printf("Error: temperatura fuera del rango");
    }else
    {
        printf("La temperatura en Fahrenheit es: %f F\n",fahrenhet);
    }

    return 0;
}


float ConvertirTemperatura(float C){

if (C<-50.0||C>100.0){
        return -999;
    }
    return (C*9.0/5.0)+32.0;
}
