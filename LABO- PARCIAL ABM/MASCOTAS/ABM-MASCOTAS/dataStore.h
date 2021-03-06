#include "fecha.h"

#ifndef DATASTORE_H_INCLUDED
#define DATASTORE_H_INCLUDED
char nombres[10][20]={
    "Juan",
    "Mallarlen",
    "Pedro",
    "Mahilen",
    "Manuel",
    "Esteban",
    "Valeria",
    "Mauro",
    "Jesus",
    "Mayre"
};

char sexos[10] = {'m','f','m','f','m','m','f','m','m','f'};
//int legajos [10] = {20000,20001,20002,20003,20004,20005,20006,20007,20008,20009};
//float alturas [10] = {1.78, 1.67, 1.59, 1.81, 1.79, 1.75, 1.68, 1.68, 1.72, 1.70};
int dias [10] = {4,5,29,26,18,1,2,14,25,30};
int meses [10] = {12,5,8,11,1,10,9,7,4,3};
int anios [10] = {2000, 1997, 1998, 1997, 1997, 1995, 2001, 2004, 2001, 2000};

eFecha fechas[] = {
    {21,3,2021},
    {10,5,1998},
    {6,7,1995},
    {2,8,2003},
    {9,3,1999},
    {10,5,1998},
    {6,7,1995},
    {11,10,1998},
    {19,11,2002},
    {21,4,2021}
};

//int idDeportes[10] = {1005,1001,1000,1001,1003,1002,1001,1004,1005,1003};

int idCien[30] = {100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129};

char nombresMascotas[30][20] = {
    "Lucas",
    "Pepe",
    "Tormenta",
    "Rupi",
    "Sosi",
    "Kimi",
    "Spay",
    "Oreo",
    "Linda",
    "Colita",
    "Manchita",
    "Thanos",
    "Lupita",
    "Oso",
    "Ni?a",
    "Lucy",
    "Anubis",
    "Guri",
    "Grasi",
    "Hilo",
    "Harbin",
    "Harry",
    "Hielo",
    "Iglu",
    "Juanchi",
    "Karola",
    "Coral",
    "Damdi",
    "Lila",
    "Coki"
};

int idTipo[30] = {1001,1000,1003,1002,1001,1004,1003,1003,1002,1000,1004,1002,1004,1000,1001,1003,1002,1000,1004,1003,1003,1002,1003,1002,1000,1001,1001,1004,1003,1002};

int idColor[30] = {5000,5004,5002,5003,5004,5001,5000,5001,5002,5004,5003,5002,5001,5000,5002,5002,5003,5004,5000,5001,5001,5002,5001,5003,5004,5003,5000,5001,5004,5002};

int edadesMascotas[30] = {7,8,1,0,3,2,1,3,10,5,7,11,15,2,1,3,6,7,8,9,2,15,4,9,1,5,3,4,2,13};

int idCliente[30] = {105,100,102,104,109,101,107,108,107,106,102,100,101,103,104,105,106,108,107,103,104,100,105,104,108,109,104,105,101,102};


#endif // DATASTORE_H_INCLUDED



