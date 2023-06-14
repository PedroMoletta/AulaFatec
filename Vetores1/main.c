
#include <stdio.h>

int main(void){
    float calculaAreaRetang(float x, float y);
    float area = calculaAreaRetang(10.0, 20.0);
    printf("A area eh: %.1f", area);

    return 0;
}

float calculaAreaRetang(float base, float altura){

    float area = base * altura;

    return area;
}