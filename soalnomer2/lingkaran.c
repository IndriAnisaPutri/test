#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdbool.h>

float areaofCircle(float jari_jari) {
    return M_PI * jari_jari * jari_jari;
}
float circumferenceofCircle(float jari_jari) {
    return 2 * M_PI * jari_jari;
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
    float jari_jari;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jari_jari);
    printf("Luas lingkaran: %.2f\n", areaofCircle (jari_jari));
    printf("Keliling lingkaran: %.2f\n", circumferenceofCircle (jari_jari));

    return 0;
}
