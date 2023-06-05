#include <stdio.h>
#include <stdlib.h>
#include "cliente.h"



stCliente cargaUnCliente() {
    static int staticId = -1;
    staticId++;
    stCliente cliente;
    cliente.id = staticId;

    /*
    printf("/nIngrese el nro de cliente: ");
    fflush(stdin);
    scanf("%d", &cliente.nroCliente);
    */

    cliente.nroCliente = cliente.id;

    printf("\nIngrese el nombre: ");
    fflush(stdin);
    gets(cliente.nombre);

    printf("\nIngrese el apellido: ");
    fflush(stdin);
    gets(cliente.apellido);

    printf("\nIngrese el DNI (sin puntos): ");
    fflush(stdin);
    gets(cliente.dni);

    printf("\nIngrese el domicilio: ");
    fflush(stdin);
    gets(cliente.domicilio);

    do {
        printf("\nIngrese el email: ");
        fflush(stdin);
        gets(cliente.email);
        if(strstr(cliente.email, "@") == NULL) {
            printf("\nEl email ingresado no es valido, vuelva a ingresarlo...");
        }
    }while(strstr(cliente.email, "@") == NULL);


    printf("\nIngrese el telefono (sin guiones): ");
    fflush(stdin);
    gets(cliente.telefono);

    cliente.eliminado = 0;

    return cliente;
}

void muestraUnCliente(stCliente a) {
    printf("--------------------------------CLIENTE--------------------------------------\n");
    printf("_____________________________________________________________________________\n");
    printf("Nro de cliente................................: %d\n",a.nroCliente);
    printf("Nombre........................................: %s\n", a.nombre);
    printf("Apellido......................................: %s\n", a.apellido);
    printf("DNI...........................................: %s\n", a.dni);
    printf("Telefono......................................: %s\n",a.telefono);
    printf("Email.........................................: %s\n", a.email);
    printf("_____________________________________________________________________________\n");
}
/*stCliente cargaUnClienteAleatoriamente (stCliente a){
stCliente aux;
static int staticId =




}
*/
void eliminaCliente(stCliente cliente) {
    cliente.eliminado = 1;
}


