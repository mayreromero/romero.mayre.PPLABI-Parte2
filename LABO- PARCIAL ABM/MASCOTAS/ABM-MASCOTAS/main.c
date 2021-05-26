#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "mascotas.h"
#include "tipo.h"
#include "color.h"
#include "servicio.h"
#include "trabajo.h"
#include "cliente.h"
#include "fecha.h"
#include "informes.h"

#define TAM 50
#define TAM_T 5
#define TAM_C 5
#define TAM_S 3
#define TAM_TR 50
#define TAM_CL 10



char menuInformes();

char menu();


int main()
{
    int flag = 0;
    char seguir = 's';
    char confirma;
    int proximoId = 100;
    int proximoIdTrabajo = 1;
    int rta;

    eTipo tipos[TAM_T] = {
        {1000, "Ave"},
        {1001, "Perro"},
        {1002, "Gato"},
        {1003, "Roedor"},
        {1004, "Pez"}
    };
    eColor colores[TAM_C] = {
        {5000, "Negro"},
        {5001, "Blanco"},
        {5002, "Gris"},
        {5003, "Rojo"},
        {5004, "Azul"}
    };

    eMascota lista[TAM];

    eServcio servicios[TAM_S] = {
        {20000, "Corte", 250},
        {20001, "Desparacitado", 300},
        {20002, "Castrado", 400}
    };

    eTrabajo listaTrabajos[TAM_TR];
    eCliente listaClientes[TAM_CL] = {
        {100, "Jhoan", 'm'},
        {101, "Mariana", 'f'},
        {102, "Marllury", 'f'},
        {103, "Felipe", 'm'},
        {104, "Esteban", 'm'},
        {105, "Juan", 'm'},
        {106, "Rosa", 'f'},
        {107, "Andrea", 'f'},
        {108, "Alexander", 'm'},
        {109, "Rossmary", 'f'}
    };

   if(!inicializarMascotas(lista,TAM)){
        printf("Inicializacion OK!\n");
    }else{
        printf("Fallo al inicializar");
    }

    if(!inicializarTrabajo(listaTrabajos,TAM_TR)){
        printf("Inicializacion OK!\n");
    }else{
        printf("Fallo al inicializar");
    }

    proximoId += hardcodearMascotas(lista, TAM, 20);

    proximoIdTrabajo += hardcodearTrabajos(listaTrabajos, TAM_TR, 30);



do
    {
        switch(menu())
        {
        case 'a':
            if(!altaMascota(lista, TAM, tipos, TAM_T, colores, TAM_T, listaClientes, TAM_CL, proximoId)){
                proximoId++;
                printf("ALTA EXITOSA.\n");
                flag = 1;
            }else{
                printf("NO SE PUDO REALIZAR EL ALTA.\n\n");
            }
            break;
        case 'b':
            if(flag == 1){
                rta = modificarMascota(lista, TAM, tipos, TAM_T, colores, TAM_C, listaClientes, TAM_CL);

                if(!rta){
                    printf("SE HA MODIFICADO CON EXITO.\n\n");
                }else if(rta == 2){
                    printf("LA MODIFICACION FUE CANCELADA. \n\n");
                }else{
                    printf("ERROR AL REALIZAR LA MODIFICACION. \n\n");
                }
            }else{
                printf("PRIMERO DEBES REALIZAR UN ALTA. \n");
            }
            break;
        case 'c':
            if(flag == 1){
                rta = bajaMascota(lista, TAM, tipos, TAM_T, colores, TAM_C, listaClientes, TAM_CL);

                if(!rta){
                    printf("BAJA CON EXITO.\n\n");
                }else if(rta == 2){
                    printf("BAJA CANCELADA POR EL USUARIO. \n\n");
                }else{
                    printf("OCUURRIO UN PROBLEMA AL REALIZAR LA BAJA. \n\n");
                }
            }else{
                printf("PRIMERO DEBES REALIZAR UN ALTA. \n");
            }
            break;
        case 'd':
            if(flag == 1){
                system("cls");
                mostrarMascotasXTipo(lista, TAM, tipos, TAM_T, colores, TAM_C, listaClientes, TAM_CL);
            }else{
                printf("PRIMERO DEBES REALIZAR UN ALTA. \n");
           }
            break;
        case 'e':
            system("cls");
            mostrarTipos(tipos, TAM_T);
            break;
        case 'f':
            system("cls");
            mostrarColores(colores, TAM_C);
            break;
        case 'g':
            system("cls");
            mostrarServicios(servicios, TAM_S);
            break;
        case 'h':
            if(!altaTrabajo(listaTrabajos, TAM_TR, lista, TAM, servicios, TAM_S, proximoIdTrabajo, tipos, TAM_T,colores, TAM_C, listaClientes, TAM_CL )){
                proximoIdTrabajo++;
                printf("ALTA EXITOSA.\n");
                flag = 1;
            }else{
                printf("ERROR, NO SE PUDO REALIZAR EL ALTA.\n\n");
            }
            break;
        case 'i':
            system("cls");
            mostrarTrabajos(listaTrabajos, TAM_TR, servicios, TAM_S);
            break;
        case 'j':
            switch(menuInformes()){
            case 'a':
                system("cls");
                mostrarXColorElegido(lista, TAM, tipos, TAM_T, colores, TAM_C, listaClientes,TAM_CL);
                break;
            case 'b':
                system("cls");
                mostrarXTipoElegido(lista, TAM, tipos, TAM_T, colores, TAM_C, listaClientes,TAM_CL);
                break;
            case 'c':
                system("cls");
                mascotaMasJoven(lista, TAM, tipos, TAM_T, colores, TAM_C, listaClientes,TAM_CL);
                break;
            case 'd':
                system("cls");
                mostrarMascotasXTipo(lista, TAM, tipos, TAM_T, colores, TAM_C, listaClientes,TAM_CL);
                break;
            case 'e':
                system("cls");
                contarXTipoYColor(lista, TAM, tipos, TAM_T, colores, TAM_C, listaClientes,TAM_CL);
                break;
            case 'f':
                system("cls");
                colorMayorCantidad(lista, TAM, colores, TAM_C);
                break;
            case 'g':
                system("cls");
                trabajoXMascota(listaTrabajos, TAM_TR, lista, TAM, servicios, TAM_S, proximoIdTrabajo, tipos, TAM_T,colores, TAM_C, listaClientes, TAM_CL);
                break;
            case 'h':
                system("cls");
                importesXMascota(listaTrabajos, TAM_TR, lista, TAM, servicios, TAM_S, proximoIdTrabajo, tipos, TAM_T,colores, TAM_C, listaClientes, TAM_CL);
                break;
            case 'i':
                system("cls");
                serviciosXMascota(listaTrabajos, TAM_TR, lista, TAM, servicios, TAM_S, proximoIdTrabajo, tipos, TAM_T,colores, TAM_C, listaClientes, TAM_CL);
                break;
            case 'j':
                system("cls");
                serviciosXfecha(listaTrabajos, TAM_TR, lista, TAM, servicios, TAM_S, proximoIdTrabajo, tipos, TAM_T,colores, TAM_C, listaClientes, TAM_CL);
                break;
            default:
                printf("OPCION INVALIDA!!!\n");

            }
            break;
        case 'k':
            printf(" CONFIRMA SALIDA s / n?: ");
            fflush(stdin);
            scanf("%c", &confirma);
            confirma = tolower(confirma);
            if(confirma == 's')
            {
                seguir = 'n';
            }

            break;
        default:
            printf("LA OPCION NO ES VALIDA!!!\n");

        }

        system("pause");

    }
    while( seguir == 's');

    return 0;
}

char menu()
{
    char opcion;
    system("cls");

    printf(" ---*** ABM MASCOTAS ***--- \n\n");
    printf("A ALTA MASCOTA\n");
    printf("B MODIFICAR MASCOTA\n");
    printf("C BAJA MASCOTA\n");
    printf("D LISTAR MASCOTAS\n");
    printf("E LISTAR TIPOS\n");
    printf("F LISTAR COLORES\n");
    printf("G LISTAR SERVICIOS\n");
    printf("H ALTA TRABAJO\n");
    printf("I LISTAR TRABAJOS\n");
    printf("J INFORMES\n");
    printf("K SALIR\n\n");
    printf("INGRESE UNA OPCION: ");
    fflush(stdin);
    opcion = tolower(getchar());
    return opcion;

}


char menuInformes()
{
    char opcion;
    system("cls");

    printf(" ---*** INFORMES ***--- \n\n");
    printf("A MASCOTAS POR COLOR ELEGIDO\n");
    printf("B MASCOTAS POR TIPO ELEGIDO\n");
    printf("C MASCOTA MAS JOVEN\n");
    printf("D MASCOTA POR TIPO\n");
    printf("E CONTADOR POR COLOR Y TIPO\n");
    printf("F COLOR DE MAYOR CANTIDAD\n");
    printf("G TRABAJOS POR MASCOTA\n");
    printf("H IMPORTES POR MASCOTA\n");
    printf("I MASCOTAS POR SERVICIO\n");
    printf("J SERVICIOS POR FECHA\n");
    printf("INGRESE UNA OPCION: ");
    fflush(stdin);
    opcion = tolower(getchar());
    return opcion;

}
