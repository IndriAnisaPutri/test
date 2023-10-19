#include <stdio.h>
#include <math.h>
#include <stdbool.h

float areaofRhombus(float diagonal1, float diagonal2) {
    return 0.5 * diagonal1 * diagonal2;
}
float circumferenceofRhombus(float sisi) {
    return 4 * sisi;
}

int inputInteger() {
    char input[1024];
    int ret;
    char err;

    while(true) {
        scanf("%[^\n]", input);
        fflush(stdin);
        if (sscanf(input, "%d%c", &ret, &err) == 1)
            return ret;
    }
}

int main() {
    float diagonal1, diagonal2, sisi;

    printf("Masukkan panjang diagonal 1 belah ketupat: ");
    scanf("%f", &diagonal1);
    printf("Masukkan panjang diagonal 2 belah ketupat: ");
    scanf("%f", &diagonal2);
    printf("Masukkan panjang sisi belah ketupat: ");
    scanf("%f", &sisi);
    printf("Luas belah ketupat: %.2f\n", areaofRhombus (diagonal1, diagonal2));
    printf("Keliling belah ketupat: %.2f\n", circumferenceofRhombus (sisi));


    return 0;
}
