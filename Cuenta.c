#include <stdio.h>
#include <stdlib.h>
#include "Cuenta.h"

stCuenta cargaUnaCuenta (int idCliente)
{
    stCuenta a;
    static int id=-1;
    a.id=id++;
    a.idCliente=idCliente;
    a.eliminado=0;
    printf("--------------------------------------------------\n");
    printf("Ingrese el numero de cuenta: \n");
    fflush(stdin);
    scanf("%d", &a.nroCuenta);
    char opcion;
    system("cls");
    do
    {
        printf("Seleccione el tipo de cuenta: \n");
        printf("| 1) Caja de ahorro en pesos.  | \n| 2) Caja de ahorro en dolares.|\n| 3) Cuenta corriente en pesos.|\n");
        opcion=getch();
        switch (opcion)
        {
        case 49:
            printf("Selecciono la caja de ahorro en pesos.\n");
            a.tipoDeCuenta=1;
            break;
        case 50:
            printf("Selecciono la caja de ahorro en dolares.\n");
            a.tipoDeCuenta=2;
            break;
        case 51:
            printf("Selecciono la cuenta corriente en pesos.\n");
            a.tipoDeCuenta=3;
            break;
        default:
            printf("Ingreso un valor erroneo por favor vuelva a intentar lo.");
            getch();
            system("cls");
            break;
        }
    }
    while (opcion!=49 && opcion!=50 && opcion!=51);
    switch (opcion)
    {
    case 49:
        a.costoMensual =0.0;
        break;
    case 50:
        a.costoMensual= 10.55;
        break;
    case 51:
        a.costoMensual=505.33;
        break;
    }
    printf("Ingrese el monto de su cuenta: ");
    fflush(stdin);
    scanf("%d", &a.monto);
    printf("\n--------------------------------------------------\n");
    return a;
}
///////////////////////////////////////////////////////////////////////////////////////////
void muestraUnaCuenta (stCuenta a)
{   printf("--------------------------------CUENTA---------------------------------------\n");
    printf("_____________________________________________________________________________\n");
    printf("Numero de cuenta..............................: %d\n", a.nroCuenta);

    switch(a.tipoDeCuenta)
    {
    case 1:
        printf("Tipo de cuenta................................: Caja de ahorro en pesos\n");
        printf("Coste mensual de mantenimiento de la cuenta...: $ %.2f\n", a.costoMensual);
        break;
    case 2:
        printf("Tipo de cuenta................................: Caja de ahorro en dolares\n");
        printf("Coste mensual de mantenimiento de la cuenta...: u$s %.2f\n", a.costoMensual);
        break;
    case 3:
        printf("Tipo de cuenta................................: Cuenta corriente en pesos\n");
        printf("Coste mensual de mantenimiento de la cuenta...: $ %.2f\n", a.costoMensual);
        break;
    }
    if (a.tipoDeCuenta==2)
    {
        printf("Saldo disponible..............................: u$s %d \n", a.monto );
    }
    else
    {
        printf("Saldo disponible..............................: $ %d \n", a.monto );
    }
    printf("_____________________________________________________________________________\n");
}
