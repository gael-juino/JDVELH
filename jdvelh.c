#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct chemin{

	char name[15];
	int id;
};

typedef struct chemin chemin;

int main(){

	int choix;

		printf(" vous etes un aventurier en quete de sensation vous vous rendez dans une foret hante mais deux choix sauffre a vous le chemin 1 ou 2?\n");
		scanf("%d",&choix);
		
		if(choix==1){
			printf("vous avez choissi le chemin 1\n");
		}
		if(choix==2){
			printf("vous avez choissi le chemin 2\n");
		}

	return 0;	
}