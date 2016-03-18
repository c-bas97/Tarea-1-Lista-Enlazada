#include "funciones.c"

int main() {

	alien* Aliens1 = malloc (sizeof(alien));
	datosAlien(Aliens1);
	
	planeta* Planetas1 = malloc (sizeof(planeta));
	datosPlaneta(Planetas1);
	
	idioma* Idiomas1 = malloc (sizeof(idioma));
	datosIdioma(Idiomas1);
	
	Aliens1 -> planetas = Planetas1;
	Aliens1 -> idiomas = Idiomas1;
	Idiomas1 -> planetas = Planetas1;
	
/*
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
*/

	printf ("----------------------------------------");

	impresion (Aliens1);

	return 0;
}
