#include "estructuras.h"
void datosAlien(alien* nuevo)
{
	if(nuevo!=NULL)
	{
		printf("\nDigite el nombre del alien: ");
		fgets(nuevo->nombre, 30, stdin);
		
		printf("\nDigite el ID del alien: ");
		scanf("%d",&nuevo->id);

		nuevo->planetas=NULL;
		nuevo->idiomas=NULL;
		nuevo->siguiente=NULL;
	}
	else
		printf("\nno se pudo crear alien");
}


void datosPlaneta(planeta* nuevo)
{
	if(nuevo!=NULL)
	{
		printf("\nDigite el nombre del planeta: ");
		fgets(nuevo->nombre, 30, stdin);
		
		printf("\nDigite starwars code del planeta: ");
		scanf("%d",&nuevo->starwars_code);
		
		printf("\nTiene agua s/n: ");
		nuevo->agua=getchar();
		
		printf("\nTiene oxigeno s/n: ");
		nuevo->oxigeno=getchar();
		
		nuevo->siguiente=NULL;
	}
	else
		printf("\nno se pudo crear planeta");
		
}

void datosIdioma(idioma* nuevo)
{
	if(nuevo!=NULL)
	{
		printf("\nDigite el nombre del idioma: ");
		fgets(nuevo->nombre, 30, stdin);
		
		printf("\nDigite la cantidad de simbolos: ");
		scanf("%d",&nuevo->simbolos);
		
		printf("\nTipo de idioma s/n: ");
		nuevo->tipo=getchar();
		
		nuevo->siguiente=NULL;
		nuevo->planetas=NULL;		
	}
	else
		printf("\nno se pudo crear idioma");
}
