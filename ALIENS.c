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

	printf ("----------------------------------------");

	impresion (Aliens1);

	return 0;
}
