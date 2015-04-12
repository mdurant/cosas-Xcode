//
//  main.c
//  tarea_1
//
//  Created by Mauricio Duran on 07-03-15.
//  Copyright (c) 2015 netcode.cl. All rights reserved.
//

#include <stdio.h>
#include <math.h>


int main() {
    
    double a, b, resultado = 0.0;
    int Opcion;
    
    
    double Suma (double , double );
    double Resta (double , double );
    double Multiplicacion (double , double );
    double Division (double , double );
    double Raiz_cuadrada (double );
    
    printf("\t\tCALCULADORA\n\n");
    printf("\t 1.- Suma\n");
    printf("\t 2.- Resta\n");
    printf("\t 3.- Multplicaci¢n\n");
    printf("\t 4.- Division\n");
    printf("\t 5.- Raiz cuadrada\n");
    printf("\t\t Elija su Opci¢n:");
    scanf("%d", &Opcion);
    switch (Opcion)
    {
        case 1:
            resultado = Suma (a, b);
            break;
            
        case 2:
            resultado = Resta (a, b);
            break;
            
            
        case 3:
            resultado = Multiplicacion (a, b);
            break;
            
            
        case 4:
            resultado = Division (a, b);
            break;
            
        case 5:
            resultado = Raiz_cuadrada (a);
            break;
            
            
	   }
    
    printf("\n El resultado de la opci¢n elegida es: %lf", resultado);
    getchar();
    getchar();
    return 0;
}


double Suma (double a, double b)
{
    double c;
    printf("\n introduzca el primer sumando:");
    scanf ("%lf", &a);
    printf("\n introduzca el segundo sumando:");
    scanf ("%lf", &b);
    c = a + b;
    return (c); //así asignamos a la variable Suma, el valor de c=a+b
}

double Resta (double a, double b)
{
    double c;
    printf("\n introduzca el primer restando:");
    scanf("%lf", &a);
    printf("\n introduzca el segundo restando:");
    scanf("%lf", &b);
    c = (a-b);
    return (c);
}

double Multiplicacion (double a, double b)
{
    double c;
    printf("\n introduzca el primer multiplicando:");
    scanf("%lf", &a);
    printf("\n introduzca el multiplicador:");
    scanf("%lf", &b);
    c = a * b;
    return (c);
}

double Division (double a, double b)
{
    double c;
    printf("\n introduzca el primer dividendo:");
    scanf("%lf", &a);
    printf("\n introduzca el segundo dividendo:");
    scanf("%lf", &b);
    c = a / b;
    return (c);
}

double Raiz_cuadrada (double a)
{
    double c;
    printf("\n introduzca la cifra a la que efectuar la raiz: ");
    scanf ("%lf", &a);
    c = sqrt (a);
    return (c);
}