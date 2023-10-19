#include <stdio.h>
#include <math.h> 
#include <stdbool.h>

float areaofTriangle(float alas, float tinggi) {
    return 0.5 * alas * tinggi;
}
float circumferenceofTriangle(float sisi1, float sisi2, float sisi3) {
    return sisi1 + sisi2 + sisi3;
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
    float sisi1, sisi2, sisi3, alas, tinggi;

    printf("Masukkan panjang sisi 1 segitiga: ");
    scanf("%f", &sisi1);
    printf("Masukkan panjang sisi 2 segitiga: ");
    scanf("%f", &sisi2);
    printf("Masukkan panjang sisi 3 segitiga: ");
    scanf("%f", &sisi3);
    printf("Masukkan panjang alas segitiga: ");
    scanf("%f", &alas);
    printf("Masukkan tinggi segitiga: ");
    scanf("%f", &tinggi);
    printf("Luas segitiga: %.2f\n", areaofTriangle (alas, tinggi));
    printf("Keliling segitiga: %.2f\n", circumferenceofTriangle (sisi1, sisi2, sisi3));

    return 0;
}

