#include "mascotas.h"
#include "tipo.h"
#include "color.h"
#include "cliente.h"
#include "trabajo.h"

#ifndef INFORMES_H_INCLUDED
#define INFORMES_H_INCLUDED



#endif // INFORMES_H_INCLUDED

/** \brief Muestra las mascotas del tipo elegido por el usuario
 *
 * \param array de estructuras eMascota
 * \param tama�o del array de mascota
 * \param array de estrucuturas eTipo
 * \param tama�o del array de tipos
 * \param array de estrucuturas eColor
 * \param tama�o del array de colores
 * \param array de estructuras eCliente
 * \param tama�o del array de clientes
 * \return retorna 0 si no hay error y 1 si hay error
 *
 */
int mostrarXTipoElegido(eMascota mascotas[], int tamM, eTipo tipos[], int tamT, eColor colores[], int tamC, eCliente clientes[], int tamCl);

/** \brief Muestra las mascotas del color elegido por el usuario
 *
 * \param array de estructuras eMascota
 * \param tama�o del array de mascota
 * \param array de estructuras eTipo
 * \param tama�o del array de tipos
 * \param array de estructuras eColor
 * \param tama�o del array de colores
 * \param array de estructuras eCliente
 * \param tama�o del array del cliente
 * \return retorna 0 si no hay error y 1 si hay error
 *
 */
int mostrarXColorElegido(eMascota mascotas[], int tamM, eTipo tipos[], int tamT, eColor colores[], int tamC, eCliente clientes[], int tamCl);

/** \brief Muestra la o las mascotas mas jovenes
 *
 * \param array de estructuras eMascota
 * \param tama�o del array de mascota
 * \param array de estructuras eTipo
 * \param tama�o del array de tipos
 * \param array de estructuras eColor
 * \param tama�o del array de colores
 * \param array de estructuras eCliente
 * \param tama�o del array del cliente
 * \return retorna 0 si no hay error y 1 si hay error
 *
 */
int mascotaMasJoven(eMascota mascotas[], int tamM, eTipo tipos[], int tamT, eColor colores[], int tamC, eCliente clientes[], int tamCl);

/** \brief Muestra el total de mascotas de un tipo y color elegidos por el usuario
 *
 * \param array de estructuras eMascota
 * \param tama�o del array de mascota
 * \param array de estructuras eTipo
 * \param tama�o del array de tipos
 * \param array de estructuras eColor
 * \param tama�o del array de colores
 * \param array de estructuras eCliente
 * \param tama�o del array de clientes
 * \return retorna 0 si no hay error y 1 si hay error
 *
 */
int contarXTipoYColor(eMascota mascotas[], int tamM, eTipo tipos[], int tamT, eColor colores[], int tamC, eCliente clientes[], int tamCl);

/** \brief Indica cual es el color mas comun de una lista de mascotas
 *
 * \param array de estrucuturas eMascota
 * \param tama�o del array de mascota
 * \param array de estrucuturas eColor
 * \param tama�o del array de colores
 * \return
 *
 */
int colorMayorCantidad(eMascota mascotas[],int tamM, eColor colores[], int tamC);

/** \brief Muestra los trabajos realizados a una mascota elegida por el usuario
 *
 * \param array de estructuras eTrabajo
 * \param tama�o del array de trabajo
 * \param array de estructuras eMascota
 * \param tama�o del array de mascota
 * \param array de estructuras eServicio
 * \param tama�o del array de servicio
 * \param array de estructuras eTipo
 * \param tama�o del array de tipos
 * \param array de estructuras eColor
 * \param tama�o del array de colores
 * \param array de estructuras eCliente
 * \param tama�o del array de cl�ientes
 * \return retorna 0 si no hay error y 1 si hay error
 *
 */
int trabajoXMascota(eTrabajo trabajos[], int tamTr, eMascota mascotas[], int tamM, eServcio servicios[], int tamS, int id, eTipo tipos[], int tamT, eColor colores[], int tamC, eCliente clientes[], int tamCl);

/** \brief Muestra el total a pagar por los servicios a una mascota elegida por el usuario
 *
 * \param array de estructuras eTrabajo
 * \param tama�o del array de trabajo
 * \param array de estructuras eMascota
 * \param tama�o del array de mascota
 * \param array de estructuras eServicio
 * \param tama�o del array de servicio
 * \param array de estructuras eTipo
 * \param tama�o del array de tipos
 * \param array de estructuras eColor
 * \param tama�o del array de colores
 * \param array de estructuras eCliente
 * \param tama�o del array de clientes
 * \return retorna 0 si no hay error y 1 si hay error
 *
 */
int importesXMascota(eTrabajo trabajos[], int tamTr, eMascota mascotas[], int tamM, eServcio servicios[], int tamS, int id, eTipo tipos[], int tamT, eColor colores[], int tamC, eCliente clientes[], int tamCl);

/** \brief Muestra los servicios realizados a una mascota elegida por el usuario
 *
 * \param array de estrucuturas eTrabajo
 * \param tama�o del array de trabajo
 * \param array de estrucuturas eMascota
 * \param tama�o del array de mascota
 * \param array de estrucuturas eServicio
 * \param tama�o del array de servicio
 * \param array de estrucuturas eTipo
 * \param tama�o del array de tipos
 * \param array de estrucuturas eColor
 * \param tama�o del array de colores
 * \param array de estructuras eCliente
 * \param tama�o del array de clientes
 * \return retorna 0 si no hay error y 1 si hay error
 *
 */
int serviciosXMascota(eTrabajo trabajos[], int tamTr, eMascota mascotas[], int tamM, eServcio servicios[], int tamS, int id, eTipo tipos[], int tamT, eColor colores[], int tamC, eCliente clientes[], int tamCl);

/** \brief Muestra los servicios realizados en una fecha elegida por el usuario
 *
 * \param array de estructuras eTrabajo
 * \param tama�o del array de trabajo
 * \param array de estructuras eMascota
 * \param tama�o del array de mascota
 * \param array de estructuras eServicio
 * \param tama�o del array de servicio
 * \param array de estructuras eTipo
 * \param tama�o del array de tipos
 * \param array de estructuras eColor
 * \param tama�o del array de colores
 * \param array de estructuras eCliente
 * \param tama�o del array de clientes
 * \return retorna 0 si no hay error y 1 si hay error
 *
 */
int serviciosXfecha(eTrabajo trabajos[], int tamTr, eMascota mascotas[], int tamM, eServcio servicios[], int tamS, int id, eTipo tipos[], int tamT, eColor colores[], int tamC, eCliente clientes[], int tamCl);

