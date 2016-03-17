#include "funciones.c"

int main() {

	alien* Aliens1 = malloc (sizeof(alien));
	datosAlien(Aliens1);
	
	Aliens1 -> planetas = malloc (sizeof(planeta));
	datosPlaneta(Aliens1 -> planetas);
	
	Aliens1 -> idiomas  = malloc(sizeof(idioma));
	datosIdioma(Aliens1 -> idiomas);

	Aliens1 -> idiomas->planetas = Aliens1 -> planetas;

	printf ("----------------------------------------");

	impresion (Aliens1);

	return 0;
}
