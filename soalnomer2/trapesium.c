#include <stdio.h>
#include <math.h>
#include <stdbool.h>

float areaofTrapezoid(float alas1, float alas2, float tinggi) {
    return 0.5 * (alas1 + alas2) * tinggi;
}
float circumferenceofTrapezoid(float sisi1, float sisi2, float sisi3, float sisi4) {
    return sisi1 + sisi2 + sisi3 + sisi4;
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
    float alas1, alas2, tinggi, sisi1, sisi2, sisi3, sisi4;
    printf("Masukkan panjang alas 1 trapesium: ");
    scanf("%f", &alas1);
    printf("Masukkan panjang alas 2 trapesium: ");
    scanf("%f", &alas2);
    printf("Masukkan tinggi trapesium: ");
    scanf("%f", &tinggi);
    printf("Masukkan panjang sisi 1 trapesium: ");
    scanf("%f", &sisi1);
    printf("Masukkan panjang sisi 2 trapesium: ");
    scanf("%f", &sisi2);
    printf("Masukkan panjang sisi 3 trapesium: ");
    scanf("%f", &sisi3);
    printf("Masukkan panjang sisi 4 trapesium: ");
    scanf("%f", &sisi4);
    printf("Luas trapesium: %.2f\n", areaofTrapezoid (alas1,alas2, tinggi));
    printf("Keliling trapesium: %.2f\n", circumferenceofTrapezoid (sisi1, sisi2, sisi3, sisi4));


    return 0;
}
