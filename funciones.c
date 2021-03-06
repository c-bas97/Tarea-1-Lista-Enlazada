#include "estructuras.h"

// while(getchar()!='\n'); se usa para limpiar buffer, fflush no da resultados

void datosAlien(alien* nuevo)
{
	if(nuevo!=NULL)
	{
		printf("\nDigite el nombre del alien: ");
		fgets(nuevo->nombre, 30, stdin);
		
		printf("\nDigite el ID del alien: ");
		scanf("%d",&nuevo->id);

		char aux[20];
		printf("\nDigite la especie del alien: ");
		//scanf("%s",&aux[0]);
		fgets(aux, 20, stdin);
		while(getchar()!='\n');
		
		nuevo->especie=malloc(sizeof(strlen(aux)));
		strcpy(nuevo->especie,aux);
		
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
		//scanf("%s",&nuevo->nombre[0]);
		while(getchar()!='\n');
		
		printf("\nDigite starwars code del planeta: ");
		scanf("%d",&nuevo->starwars_code);
		while(getchar()!='\n');
			
		printf("\nTiene oxigeno s/n: ");
		nuevo->oxigeno=getchar();
		//scanf("%c",&nuevo->oxigeno);
		while(getchar()!='\n');
		
		printf("\nTiene agua s/n: ");
		nuevo->agua=getchar();
		while(getchar()!='\n');
			
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
		//scanf("%s",&nuevo->nombre[0]);
		while(getchar()!='\n');
		
		printf("\nTipo de idioma s/n: ");
		nuevo->tipo=getchar();
		//scanf("%c",&nuevo->tipo);
		while(getchar()!='\n');
		
		printf("\nTipo de idioma s/n: ");
		nuevo->tipo=getchar();
		while(getchar()!='\n');
		
		printf("\nDigite la cantidad de simbolos: ");
		scanf("%d",&nuevo->simbolos);
		while(getchar()!='\n');
		
		nuevo->siguiente=NULL;
		nuevo->planetas=NULL;		
	}
	else
		printf("\nno se pudo crear idioma");
}

void impresion ( alien * alienigena ) {
	
	printf ("\nNombre del alien: ");
	printf ("%s\n",alienigena->nombre);
	printf ("Identificación del alien: ");
	printf ("%d\n",alienigena->id);
	printf ("Especie del alien: ");
	//printf ("%s\n",alienigena->especie);
	printf ("Planeta del alien: ");
	printf ("%s\n",alienigena->planetas->nombre);
	printf ("Código del pĺaneta: ");
	printf ("%d\n",alienigena->planetas->starwars_code);
	printf ("El planeta tiene agua: ");
	printf ("%c\n",alienigena->planetas->agua);
	printf ("Hay oxígeno en el planeta: ");
	printf ("%c\n",alienigena->planetas->oxigeno);
	if (alienigena->planetas->siguiente != NULL){
		printf ("Siguiente planeta: ");
		printf ("%s\n",alienigena->planetas->siguiente->nombre);
	} else
		printf ("\nNo hay otro planeta de procedencia de este alien.");
	printf ("\nIdioma del alien: ");
	printf ("%s\n",alienigena->idiomas->nombre);
	printf ("Tipo del idioma:");
	printf ("%c\n",alienigena->idiomas->tipo);
	printf ("Cantidad de símbolos del idioma: ");
	printf ("%d\n",alienigena->idiomas->simbolos);
	if (alienigena->idiomas->siguiente != NULL){
		printf ("Siguiente idioma: ");
		printf ("%s\n",alienigena->idiomas->siguiente->nombre);
	} else
		printf ("Este alien no sabe más idiomas.\n");
	if (alienigena->idiomas->planetas != NULL){
		printf ("Planeta en el que se habla el idioma: ");
		printf ("%s\n",alienigena->idiomas->planetas->nombre);
	} else
		printf ("ESte idioma no se habla en ningún planeta conocido.\n");
}
