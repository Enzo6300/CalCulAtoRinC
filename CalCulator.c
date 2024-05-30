////// Projet en C, en vue d'intégrés l'ecole 42, phases d'apprentisage ////////////


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void add(){
        double num1,num2;
        printf("Entrez deux nombres a additioner: ");
        scanf("%lf %lf", &num1,&num2);
        printf("Le resultat est: %.2lf", num1 + num2);
}

void sous(){
    double num1,num2;
    printf("Entrez deux nombres a soustraire: ");
    scanf("%lf %lf", &num1,&num2);
    printf("Le resultat est: %.2lf", num1 - num2);

}

void multiplication(){
    double num1, num2;
    printf("Entrez deux nombres a multiplier: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Le resultat est: %.2lf", num1 * num2);
}

void division(){
    double num1, num2;
    printf("Entrez deux nombres a diviser: ");
    scanf("%lf %lf", &num1, &num2);
    if(num2 != 0 && num1 != 0){
        printf("Le resultat est: %.2lf", num1 / num2);
    }else {
        printf("La division est impossible: = 0");
    }
}

void exitprog(){
   exit(EXIT_SUCCESS);
}


int main(){
    printf("\nProjet open-source Disponible sur: https://github.com/Enzo6300\n");

    while(1){

         int choix;

    printf("\n====Menu CalCulatrice====\n");
    printf("1. Addition\n");
    printf("2. Soustraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("9. Quitter\n");
    printf("Choisisez une numeros:\n");
    scanf("%d" ,&choix);

switch(choix){
    case 1:
        add();
        break;

    case 2:
        sous();
        break;

    case 3:
        multiplication();
        break;

    case 4:
        division();
        break;

    case 9:
        exitprog();
        break;

    default:
        printf("Vous avez rentrez un nombre inconnue !\n");
        break;
    }
}
}



