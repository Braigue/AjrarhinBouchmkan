#include <stdio.h>
#include <stdlib.h>
#define t_max 100000
#define T_MAX 300

typedef struct Voitur{
 int idVoiture;
 char marque[15];
 char nomVoiture[15];
 char couleur[7];
 int nbplaces;
 int prixJour;
 char EnLocation[4];
} voitur;

typedef struct contratLocation{
 float numContrat;
 int idVoiture;
 int idClient;

 int cout;
} contrat;

typedef struct Clien{
 int idClient;
 char* nom;
 char* prenom;
 int cin;
 char* adresse;
 int telephone;
}clien;

void menu(int );
void location(int );
void gesvoi(int );
void clients(int );
void retour(int );
int main(){
    int n;

    menu(n);

    return 0;
}
void menu(int n){
    system("cls");
    printf(" \t \t \t \t \t Menu Principal \n\n\n");
    printf("\t\t\t Location..................................................1 \n");
    printf("\t\t\t Gestion voiture...........................................2 \n");
    printf("\t\t\t Gestion clients...........................................3 \n");
    printf("\t\t\t Quitter...................................................4 \n");
    printf("\t\t\t\t Votre choix : \n\n");
    scanf("%d",&n);
    switch(n){
        case 1 : location(n); break;
        case 2 : gesvoi(n); break;
        case 3 : clients(n); break;
        case 4 : printf("au revoire");break;
        default: printf("erreur veuillez entrer le nombre qui correspond au choix");
    }
}
void location(int n){
    system("cls");
    printf(" \t \t \t \t \t location d une voiture \n\n\n");
    printf("\t\t\t vusialer contrat..........................................1 \n");
    printf("\t\t\t louer voiture.............................................2 \n");
    printf("\t\t\t retourner voiture.........................................3 \n");
    printf("\t\t\t modifier contrat..........................................4 \n");
    printf("\t\t\t supprimer contrat.........................................5 \n");
    printf("\t\t\t retour....................................................6 \n");
    printf("\t\t\t\t Votre choix :\n\n");
    scanf("%d",&n);
    if(n==6)
        menu(n);
 }
void gesvoi(int n){
    system("cls");
int i,j,z;
int k=4;
int cara=0;

voitur voitur[100];

voitur[0].idVoiture=680;
voitur[0].marque[15]="DACIA";
voitur[0].nomVoiture[15]="DACIA-logan";
voitur[0].couleur[7]="NOIR";
voitur[0].nbplaces=1;
voitur[0].prixJour=500;
voitur[0].EnLocation[4]="OUI";

voitur[1].idVoiture=123;
voitur[1].marque[15]="FORD";
voitur[1].nomVoiture[15]="FORD FIESTA";
voitur[1].couleur[7]="GRIS";
voitur[1].nbplaces=2;
voitur[1].prixJour=300;
voitur[1].EnLocation[4]="OUI";

voitur[2].idVoiture=254;
voitur[2].marque[15]="RANGE";
voitur[2].nomVoiture[15]="RANGE ROUVER";
voitur[2].couleur[7]="ROUGE";
voitur[2].nbplaces=3;
voitur[2].prixJour=400;
voitur[2].EnLocation[4]="NON";

voitur[3].idVoiture=680;
voitur[3].marque[15]="MERC";
voitur[3].nomVoiture[15]="MERCIDESSE";
voitur[3].couleur[7]="BLEU";
voitur[3].nbplaces=4;
voitur[3].prixJour=500;
voitur[3].EnLocation[4]="NON";
FILE*voiture=NULL;
voiture=fopen("VOITURE.txt","r");
if (voiture!=NULL)
{
    for(i=0;i<k;i++){
            if(i!=z){
fprintf(voiture," \t les infos du voiture %d \n ",i+1);
fprintf(voiture,"l id est                   : %d\n",voitur[i].idVoiture);
fprintf(voiture,"la marque est               :%s \n",voitur[i].marque);
fprintf(voiture,"le nom est                  : %s\n",voitur[i].nomVoiture);
fprintf(voiture,"la couleur est              : %s\n",voitur[i].couleur);
fprintf(voiture,"la place dans le nombre     : %d\n",voitur[i].nbplaces);
fprintf(voiture,"le prix est                 : %d\n",voitur[i].prixJour);
fprintf(voiture,"la voiture est              : %s\n \n",voitur[i].EnLocation);
}}

}
 printf(" \t \t \t \t \t Gestion des voitures \n\n\n");
    printf("\t\t\t Liste des voitures........................................1 \n");
    printf("\t\t\t Ajouter voiture...........................................2 \n");
    printf("\t\t\t Modifier voiture..........................................3 \n");
    printf("\t\t\t supprimer voiture.........................................4 \n");
    printf("\t\t\t retour....................................................5 \n");
    printf("\t\t\t\t Votre choix :\n\n");
    scanf("%d",&n);
if(n==1){
        system("cls");
do{
cara=fgetc(voiture);
printf("%c",cara);
}while(cara!=EOF);
retour(n);
}

if(n==2){
    system("cls");
	printf("entrez le nombre des voitures qui doit ajouter : ");
	scanf("%d",&j);
for (i=k;i<k+j;i++){
printf("entrez les information suivants concernant la nouvelle voiture : \n");
printf("l\'id est               :  ");
scanf("%d",&voitur[i].idVoiture);
printf("la marque est           :");
scanf("%s",&voitur[i].marque);
printf("le nom est              :");
scanf("%s",&voitur[i].nomVoiture);
printf("la couleur est          :   ");
scanf("%s",&voitur[i].couleur);
printf("la place dans le nombre :   ");
scanf("%d",&voitur[i].nbplaces);
printf("le prix est             : ");
scanf("%d",&voitur[i].prixJour);
printf("la voiture est          :  ");
scanf("%s",&voitur[i].EnLocation);

	}
		k=k+j;
		retour(n);
}
int f ;
if(n==3){
    system("cls");
	printf("entrez le nombre du voiture que vous voulez modifier : ");
	scanf("%d",&f);

printf("entrez les nouvelles infos : \n");
printf("l\'id est               :  ");
scanf("%d",&voitur[f-1].idVoiture);
printf("la marque est           :");
scanf("%s",&voitur[f-1].marque);
printf("le nom est              :");
scanf("%s",&voitur[f-1].nomVoiture);
printf("la couleur est          :   ");
scanf("%s",&voitur[f-1].couleur);
printf("la place dans le nombre :   ");
scanf("%d",&voitur[f-1].nbplaces);
printf("le prix est             : ");
scanf("%d",&voitur[f-1].prixJour);
printf("la voiture est          :  ");
scanf("%s",&voitur[f-1].EnLocation);
retour(n);
}
if(n==4){
    system("cls");
    printf("entrer le numero de voiture que vous voullez le supprimer :");
    scanf("%d",&z);
    z--;
    retour(n);

}

        if(n==5)
            menu(n);

}
void clients(int n){
    system("cls");
    int i,j,z;
int k=4;
int cara=0;

clien clien[100];

clien[0].idClient=645;
clien[0].nom="ALAOUI";
clien[0].prenom="Mohamed";
clien[0].cin=588712;
clien[0].adresse="DAKHLA-AGADIR";
clien[0].telephone=0661626364;

clien[1].idClient=123;
clien[1].nom="EL-OMARI";
clien[1].prenom="FATIM-ZAHRA";
clien[1].cin=589014;
clien[1].adresse="HEY MOHAMMADI AGADIR";
clien[1].telephone=0662001143;

clien[2].idClient=465;
clien[2].nom="MOFTAKIR";
clien[2].prenom="SAAD LAH";
clien[2].cin=590079;
clien[2].adresse="SALAM AGADIR";
clien[2].telephone=0671607742;

clien[3].idClient=874;
clien[3].nom="GHZOUIANI";
clien[3].prenom="SOUMIA";
clien[3].cin=564300;
clien[3].adresse="TARRAST AGADIR";
clien[3].telephone=0600305470;
FILE*client=NULL;
client=fopen("CLIENT","r");
if (client!=NULL)
{
    for(i=0;i<k;i++){
fprintf(client," \t les infos du clients %d \n ",i+1);
fprintf(client,"l id client est                   : %d\n",clien[i].idClient);
fprintf(client,"le nom est               :%s \n",clien[i].nom);
fprintf(client,"le prenom est                  : %s\n",clien[i].prenom);
fprintf(client,"le cin est              : %s\n",clien[i].cin);
fprintf(client,"l'adresse est    : %d\n",clien[i].adresse);
fprintf(client,"le telephone est                 : %d\n",clien[i].telephone);
}
    printf(" \t \t \t \t \t Gestiondes clients \n\n\n");
    printf("\t\t\t Liste des clients.........................................1 \n");
    printf("\t\t\t Ajouter client............................................2 \n");
    printf("\t\t\t Modifier client...........................................3 \n");
    printf("\t\t\t supprimer client..........................................4 \n");
    printf("\t\t\t retour....................................................5 \n");
    printf("\t\t\t\t Votre choix :\n\n");
    scanf("%d",&n);
    if(n==1){
        system("cls");
do{
cara=fgetc(client);
printf("%c",cara);
}while(cara!=EOF);
 retour(n);
}

if(n==2){
    system("cls");
	printf("entrez le nombre des clients qui doit ajouter : ");
	scanf("%d",&j);
for (i=k;i<k+j;i++){
printf("entrez les information suivants concernant le nouveau client : \n");
printf("l'id client est               :  ");
scanf("%d",&clien[i].idClient);
printf("le nom est           :");
scanf("%s",&clien[i].nom);
printf("le prenom est              :");
scanf("%s",&clien[i].prenom);
printf("le cin est          :   ");
scanf("%s",&clien[i].cin);
printf("l'adresse est :   ");
scanf("%d",&clien[i].adresse);
printf("le telephone est             : ");
scanf("%d",&clien[i].telephone);
	}
		k=k+j;
		retour(n);
}
int f ;
if(n==3){
    system("cls");
	printf("entrez le numero du voiture que vous voulez modifier : ");
	scanf("%d",&f);

printf("entrez les nouvelles infos : \n");
printf("l'id client est               :  ");
scanf("%d",&clien[f-1].idClient);
printf("le nom est           :");
scanf("%s",&clien[f-1].nom);
printf("le prenom est              :");
scanf("%s",&clien[f-1].prenom);
printf("le cin est          :   ");
scanf("%s",&clien[f-1].cin);
printf("l'adresse :   ");
scanf("%d",&clien[f-1].adresse);
printf("le telephone est             : ");
scanf("%d",&clien[f-1].telephone);
retour(n);
}
if(n==4){
    system("cls");
    printf("entrer le numero de client que vous voullez le supprimer :");
    scanf("%d",&z);
    z--;
    retour(n);

}

    if(n==5)
        menu(n);
}}

void retour(int n){
    system("cls");
    printf("\n\n\n pour revenir au menu peincipale tapez 1: \n");
    scanf("%d",&n);
    if(n==1)
        menu(n);
    else
        printf("erreur\n ");
    scanf("%d",&n);
}
