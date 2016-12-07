#include <stdio.h>
#include <stdlib.h>


typedef struct noeud{
	int cle;
	struct noeud * gauche;
	struct noeud * droite;
	char * info;
} noeud_t;

noeud_t * recherche(int nb, noeud_t * racine);
void inserer(int nb, noeud_t * racine);

int main(){
	noeud_t racine;
	racine.cle = 10;

	return 0;
}

void inserer(int nb, noeud_t * racine){
	noeud_t *n;
	noeud_t *parent = recherche(nb,racine);
	n = malloc(sizeof(noeud_t));
	n->nb;
}

noeud_t * recherche(int nb, noeud_t * racine){
	
}
