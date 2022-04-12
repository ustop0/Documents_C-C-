#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
    double hipotenusa(double oposto, double adjacente);
    double diagonalParalelepipido(double a, double b, double c);

    double a, b, c, diagonal;
    
    printf("--Calculando a hipotenusa--\n");
    printf("Digite o valor do lado A do triamgulo: ");
    scanf("%lf", &a);
    printf("Digite o valor do lado B do triamgulo: ");
    scanf("%lf", &b);
    
    c =  hipotenusa(a, b);
    
    printf("\nO valor de c(hipotenusa) é %.2lf\n", c);
    
    diagonal = diagonalParalelepipido(a, b, c);
    
    printf("O valor da diagonal do paralelepipido é %.2lf\n", diagonal);
    
    return 0;
}

double hipotenusa(double oposto, double adjacente){
    double res = (oposto*oposto) + (adjacente*adjacente);
    return res;
}

double diagonalParalelepipido(double a, double b, double c){
    double L = sqrt((a*a) + (b*b)); //calcular o L
    double D = sqrt((L*L) + (c*c)); // calcular o D
    return D;
}
