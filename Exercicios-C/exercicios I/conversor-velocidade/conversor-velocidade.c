#include <stdio.h>

int main(){
    
    float kmh, ms, cms;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh);

    ms = kmh * 1000 / 3600;  
    cms = ms * 100;           

    printf("\nVelocidade em metros por segundo: %f m/s", ms);
    printf("\nVelocidade em centimetros por segundo: %f cm/s", cms);

    return 0;
}
