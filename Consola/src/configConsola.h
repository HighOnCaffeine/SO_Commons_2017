/*
 * configConsola.h
 *
 *  Created on: 6/4/2017
 *      Author: utnso
 */

#ifndef CONFIGCONSOLA_H_
#define CONFIGCONSOLA_H_

#include <commons/config.h>

typedef struct {
	char* IP_KERNEL;
	int PUERTO_KERNEL;
} t_configConsola;

//Lee el archivo de configuracion que se pasa por parametro de la consola y crea el struct correspondiente
t_configConsola* leerConfigConsola();

#endif /* CONFIGCONSOLA_H_ */
