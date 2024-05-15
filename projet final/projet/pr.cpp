#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef struct{
	int jj,mm,an;
}date;
typedef struct Product {
    int id;
    char name[50];
    char description[50];
    char username[50];
    float prix;
    int quantity;
    int seuil;
    date DE;
	date DS;
    struct Product *suivant;
} Product;
Product *Ajout(Product *tete) {
Product *v,*p;
v=(Product*)malloc(sizeof(Product));
printf("Entrez l'ID  : ");
    scanf("%d", &v->id);

    printf("Entrez le Nom du Produit : ");
    scanf("%s", v->name);
    
    printf("Entrez le userAdmin : ");
    scanf("%s", v->username);

    printf("Entrez une description : ");
    scanf("%s", v->description);
    
    printf("Entrez la quantite : ");
    scanf("%d", &v->quantity);
    

    printf("Entrez le prix du produit : ");
    scanf("%f", &v->prix);

if(tete==NULL) {
    v->suivant=tete;
    tete=v;
}
else {
    p=tete;
    while(p->suivant!=NULL) {
        p=p->suivant;
    }
    p->suivant=v;
    v->suivant=NULL;
}
 return tete;
}
Product *AjoutenPosition(Product *tete,int position){
	Product *p,*v;
	int i;
	v=(Product*)malloc(sizeof(Product));
	printf("Entrez l'ID : ");
    scanf("%d", &v->id);

    printf("Entrez le Nom du Produit : ");
    scanf("%s", v->name);
    
    printf("Entrez le userAdmin : ");
    scanf("%s", v->username);

    printf("Entrez une description : ");
    scanf("%s", v->description);
    
    printf("Entrez la quantite : ");
    scanf("%d", &v->quantity);
    

    printf("Entrez le prix du produit : ");
    scanf("%f", &v->prix);
	while(p!=NULL){
		p=p->suivant;
		i++;
		if(position-1==i);break;
	}
	if(p==NULL){
	
	printf("la position n'existe pas");return tete;}
	else{
		v->suivant=p->suivant;
		p->suivant=v;
	}
	return tete;
}
void afficher(Product *tete,int n){
   	Product *P=tete;	
	while(P!=NULL){
	
		printf(" ID:%d\n",P->id);
		printf("description de produit:%s\n",P->description);
	    printf("prix unitaire:%d\n",P->prix);
		printf("la quantiter en stocke:%d\n",P->quantity);
		printf("Seuil d alerte de stock:%d\n",P->seuil);
		printf("date de derniere entree en stock:%d\\%d\\%d\n",P->DE.jj, P->DE.mm, P->DE.an);
		printf("date de derniere sortie en stock:%d\\%d\\%d\n",P->DS.jj, P->DS.mm, P->DS.an);
		P=P->suivant;
	}
}
int main (){
	Product *list1=NULL;
	int n,i,nbr,pos;
	printf("donner le nombre de element:");
	scanf("%d",&nbr);
	for(i=0;i<nbr;i++){
		printf("+Produit[%d]:\n",i+1);
		list1=Ajout(list1);
		
	}
	afficher(list1,n);
	
	return 0;
}


