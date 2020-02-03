#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


struct chapitre{

	char name[15];
	char des[50];
	int gold;
	int pv;
	int id[6];
};	


typedef struct chapitre chapitre;

//guiwi
	int guiwipv=10;
	int guiwigold=0;

void deplacement(chapitre*vardeplacement){
	
	*varchapitre[id]=deplacement;

};
int main(){

//chapitre
	chapitre chapitre1 = {"chapitre1","le debut de laventure",10,20,{2,3}};
	chapitre chapitre2 = {"chapitre2","la foret verdoyante",15,10,{4}};
	chapitre chapitre3 = {"chapitre3","la grotte mysterieuse",15,10,{5}};
	chapitre chapitre4 = {"chapitre4","le volcan",35,50,{6}};
	chapitre chapitre5 = {"chapitre5","les trefonds des profondeur",35,50,{6}};
	chapitre chapitre6 = {"chapitre6","le bateau deau douce",15,10};




	
		printf("PV= %d\n",guiwipv);
		printf("gold= %d\n",guiwigold);
		printf("vous etes guiwi le pirate et vous avez encore echoue sur ile apres avoir percuter un baril explosif, vous voyez 2 chemin devant lequel prenais vous le chemin 1 ou 2?\n");
		scanf("%d",deplacement);
		
	return 0;	
}
