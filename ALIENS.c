#include "estructuras.h"

main() {
	alien * lista_aliens;
	lista_aliens = malloc (sizeof(alien));
	strcpy (lista_aliens->nombre , "ET");
	lista_aliens->id = 3;
	lista_aliens -> especie = malloc (sizeof ( "Rarifero"));
	strcpy (lista_aliens->especie , "Rarifero");
		planeta * planets;
		planets = malloc (sizeof(planeta));
		strcpy (planets->nombre , "ETland");
		planets->starwars_code = 23;
		planets->agua = 'T';
		planets->oxigeno = 'F';
		planets->siguiente = 0;
	lista_aliens->planetas = planets;
		idioma * idiom;
		idiom  = malloc(sizeof(idioma));
		strcpy (idiom->nombre , "Etliano");
		idiom->tipo = '4';
		idiom->simbolos = 99;
		idiom->siguiente = NULL;
		idiom->planetas = planets;
	lista_aliens->idiomas = idiom;
	lista_aliens->siguiente = 0;
	
	
	printf ("Nombre del alien: ");
	printf ("%s\n",lista_aliens->nombre);
	printf ("Identificación del alien: ");
	printf ("%d\n",lista_aliens->id);
	printf ("Especie del alien: ");
	printf ("%s\n",lista_aliens->especie);
	printf ("Planeta del alien: ");
	printf ("%s\n",lista_aliens->planetas->nombre);
	printf ("Código del pĺaneta: ");
	printf ("%d\n",lista_aliens->planetas->starwars_code);
	printf ("El planeta tiene agua: ");
	printf ("%c\n",lista_aliens->planetas->agua);
	printf ("Hay oxígeno en el planeta: ");
	printf ("%c\n",lista_aliens->planetas->oxigeno);
	if (lista_aliens->planetas->siguiente != NULL){
		printf ("Siguiente planeta: ");
		printf ("%s\n",lista_aliens->planetas->siguiente);
	} else
		printf ("No hay otro planeta de procedencia de este alien.");
	printf ("Idioma del alien: ");
	printf ("%s\n",lista_aliens->idiomas->nombre);
	printf ("Tipo del idioma:");
	printf ("%c\n",lista_aliens->idiomas->tipo);
	printf ("Cantidad de símbolos del idioma: ");
	printf ("%d\n",lista_aliens->idiomas->simbolos);
	if (lista_aliens->idiomas->siguiente != NULL){
		printf ("Siguiente idioma: ");
		printf ("%s\n",lista_aliens->idiomas->siguiente);
	} else
		printf ("Este alien no sabe más idiomas.\n");
	if (lista_aliens->idiomas->planetas != NULL){
		printf ("Planeta en el que se habla el idioma: ");
		printf ("%s\n",lista_aliens->idiomas->planetas);
	} else
		printf ("ESte idioma no se habla en ningún planeta conocido.\n");
}
