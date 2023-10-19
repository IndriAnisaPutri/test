#include <stdio.h>
#include <math.h>
#include <stdbool.h>

float areaofParallelogram(float alas, float tinggi) {
    return alas * tinggi;
}
float circumferenceofParallelogram(float alas, float sisimiring) {
    return (2 * alas) + (2 * sisimiring);
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
    float alas, tinggi, sisimiring;
    printf("Masukkan panjang alas jajar genjang: ");
    scanf("%f", &alas);
    printf("Masukkan tinggi jajar genjang: ");
    scanf("%f", &tinggi);
    printf("Masukkan panjang sisimiring jajar genjang: ");
    scanf("%f", &sisimiring);
    printf("Luas jajar genjang: %.2f\n", areaofParallelogram (alas, tinggi));
    printf("Keliling jajar genjang: %.2f\n", circumferenceofParallelogram (alas, sisimiring));

    return 0;
}
