#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "mascotas.h"
#include "tipo.h"
#include "color.h"
#include "cliente.h"

void mostrarClientes(eCliente clientes[], int tam){
    if(clientes != NULL && tam > 0){

            printf("  ***  LISTADO DE CLIENTES  ***  \n\n");
            printf("<-------------------------------------->\n");
            printf("     ID         NOMBRE       SEXO\n");
            printf("<-------------------------------------->\n");
        for(int i = 0; i < tam; i++){
                mostrarCliente(clientes[i]);
        }
        printf("\n\n");
    }
}

void mostrarCliente(eCliente cliente){
    printf("   %4d%15s        %c\n",cliente.id, cliente.nombre, cliente.sexo);
}

int validarCliente(eCliente clientes[], int tam, int id){
    int estaOk = 0;
    for(int i =  0; i < tam; i++){
        if(clientes[i].id == id){
            estaOk  = 1;
            break;
        }
    }
    return estaOk ;
}

int cargarNombreCliente(eCliente clientes[], int tam, int id, char nombre[]){
    int estaOk = 1;
    if(clientes != NULL && tam > 0 && id > 0 && nombre != NULL){
        for(int i = 0; i < tam; i++){
            if(clientes[i].id == id){
                strcpy(nombre, clientes[i].nombre);
                estaOk  = 0;
            break;
            }
        }
    }
    return estaOk ;
}
