#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "trabajo.h"
#include "dataStoreTrabajo.h"
#include "validaciones.h"

int altaTrabajo(eTrabajo trabajos[], int tam, eMascota mascotas[], int tamM, eServcio servicios[], int tamS, int id, eTipo tipos[], int tamT, eColor colores[], int tamC, eCliente clientes[], int tamCl){
    int estaOk = 1;
    int indice;
    int idMascota;
    int idServicio;
    eTrabajo nuevoTrabajo;

    if(trabajos != NULL && tam > 0 && mascotas != NULL && tamM > 0 && servicios != NULL && tamS > 0 && clientes != NULL && tamCl > 0){

        system("cls");
        printf("  *** ALTA DE TRABAJO ***\n\n");

        indice = buscarLibreTrabajo(trabajos, tam);
        if(indice == -1){
            printf("EL SISTEMA ESTA COMPLETO.\n");
        }else{
            nuevoTrabajo.id = id;
            nuevoTrabajo.isEmpty = 0;

            mostrarMascotas(mascotas, tamM, tipos, tamT, colores, tamC, clientes, tamCl);
            printf("INGRESE ID DE LA MASCOTA: ");
            scanf("%d", &idMascota);
            while(validarMascota(mascotas, tamM, idMascota)){
                printf("EL ID NO ES VALIDO. REINGRESE ID DE LA MASCOTA: ");
                scanf("%d", &idMascota);
            }
            nuevoTrabajo.idMascota = idMascota;

            mostrarServicios(servicios, tamS);
            printf("INGRESE ID DEL SERVICIO: ");
            scanf("%d", &idServicio);
            while(validarServicio(servicios, tamS, idServicio) == 0){
                printf("EL ID NO ES VALIDO. REINGRESE ID DEL SERVICIO ");
                scanf("%d", &idServicio);
            }
            nuevoTrabajo.idServicio = idServicio;

            printf("INGRESE LA FECHA DEL TRABAJO dd/mm/aaaa: ");
            scanf("%d/%d/%d", &nuevoTrabajo.fecha.dia, &nuevoTrabajo.fecha.mes, &nuevoTrabajo.fecha.anio);
            while(validarFecha(nuevoTrabajo.fecha) == 1){
                printf("FECHA INVALIDA. REINGRESE LA FECHA DEL TRABAJO dd/mm/aaaa: ");
                scanf("%d/%d/%d", &nuevoTrabajo.fecha.dia, &nuevoTrabajo.fecha.mes, &nuevoTrabajo.fecha.anio);
            }

            trabajos[indice] = nuevoTrabajo;

            estaOk = 0;
        }

    }
    return estaOk;
}

int buscarLibreTrabajo(eTrabajo trabajos[], int tam){
    int indice = -1;
    for(int i = 0; i < tam; i++){
        if(trabajos[i].isEmpty){
            indice = i;
            break;
        }
    }
    return indice;
}

int mostrarTrabajos(eTrabajo trabajos[],int tam, eServcio servicios[], int tamS){

    int flag = 0;
    int estaOk = 1;

    if(trabajos != NULL && tam > 0 && servicios != NULL && tamS > 0){

            printf("  *** LISTADO DE TRABAJOS ***  \n\n");
            printf("<-------------------------------------------------------->\n");
            printf("    ID     ID MASCOTA        SERVICIO          FECHA   \n");
            printf("<-------------------------------------------------------->\n");
        for(int i = 0; i < tam; i++){
            if(!trabajos[i].isEmpty){
                mostrarTrabajo(trabajos[i], servicios, tamS);
                flag = 1;
            }
        }
        if(!flag){
            printf("        NO HAY TRABAJOS EN LA LISTA \n");
        }
        estaOk = 0;
    }
    return estaOk;
}

void mostrarTrabajo(eTrabajo trabajo, eServcio servicios[], int tamS){
    char descServcio[20];
    if(!cargarDescripcionServicio(servicios, tamS, trabajo.idServicio, descServcio)){
        printf("  %4d      %5d       %15s      %02d/%02d/%04d     \n", trabajo.id, trabajo.idMascota, descServcio, trabajo.fecha.dia, trabajo.fecha.mes, trabajo.fecha.anio);
    }else{
        printf("PROBLEMAS CON LA DESCRIPCION\n");
    }
}

int inicializarTrabajo(eTrabajo trabajos[], int tam){
    int estaOk = 1;

    if(trabajos != NULL && tam > 0){
        for(int i=0; i<tam; i++){
            trabajos[i].isEmpty = 1;
    }
        estaOk = 0;
    }
    return estaOk;
}

int hardcodearTrabajos(eTrabajo trabajos[], int tam, int cant){
    int retorno = -1;
    if(trabajos != NULL && tam > 0 && cant <= tam){
        retorno = 0;
        for(int i = 0; i < cant; i++){
            trabajos[i].id = idUno[i];
            trabajos[i].idMascota = idMascotas[i];
            trabajos[i].idServicio = idServicios[i];
            trabajos[i].fecha = fechasVeinte[i];
            trabajos[i].isEmpty = 0;
            retorno ++;
        }
    }

    return retorno;
}
