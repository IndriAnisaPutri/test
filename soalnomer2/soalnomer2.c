#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>

float areaofTriangle(float base, float height) {
    return 0.5 * base * height;
}

float circumferenceofTriangle(float side1, float side2, float side3) {
    return side1 + side2 + side3;
}

float areaofRhombus(float diagonal1, float diagonal2) {
    return 0.5 * diagonal1 * diagonal2;
}

float circumferenceofRhombus(float side) {
    return 4 * side;
}

float areaofParallelogram(float base, float height) {
    return base * height;
}

float circumferenceofParallelogram(float base, float side) {
    return 2 * (base + side);
}

float areaofTrapezoid(float base1, float base2, float height) {
    return 0.5 * (base1 + base2) * height;
}

float circumferenceofTrapezoid(float side1, float side2, float side3, float side4) {
    return side1 + side2 + side3 + side4;
}

float areaofCircle(float radius) {
    return M_PI * radius * radius;
}

float circumferenceofCircle(float radius) {
    return 2 * M_PI * radius;
}

int main() {
    // Triangle
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
    printf("Luas segitiga: %.2f\n", areaofTriangle(alas, tinggi));
    printf("Keliling segitiga: %.2f\n", circumferenceofTriangle(sisi1, sisi2, sisi3));

    printf("------------------------------------\n");

    // Rhombus
    float diagonal1, diagonal2, side;
    printf("Masukkan panjang diagonal 1 belah ketupat: ");
    scanf("%f", &diagonal1);
    printf("Masukkan panjang diagonal 2 belah ketupat: ");
    scanf("%f", &diagonal2);
    printf("Masukkan panjang sisi belah ketupat: ");
    scanf("%f", &side);
    printf("Luas belah ketupat: %.2f\n", areaofRhombus(diagonal1, diagonal2));
    printf("Keliling belah ketupat: %.2f\n", circumferenceofRhombus(side));

    printf("-------------------------------------\n");

    // Parallelogram
    float base, height, sideM;
    printf("Masukkan panjang alas jajar genjang: ");
    scanf("%f", &base);
    printf("Masukkan tinggi jajar genjang: ");
    scanf("%f", &height);
    printf("Masukkan panjang sisimiring jajar genjang: ");
    scanf("%f", &sideM);
    printf("Luas jajar genjang: %.2f\n", areaofParallelogram(base, height));
    printf("Keliling jajar genjang: %.2f\n", circumferenceofParallelogram(base, sideM));

    printf("--------------------------------------\n");

    // Trapezoid
    float base1, base2, heightT, side1, side2, side3, side4;
    printf("Masukkan panjang alas 1 trapesium: ");
    scanf("%f", &base1);
    printf("Masukkan panjang alas 2 trapesium: ");
    scanf("%f", &base2);
    printf("Masukkan tinggi trapesium: ");
    scanf("%f", &heightT);
    printf("Masukkan panjang sisi 1 trapesium: ");
    scanf("%f", &side1);
    printf("Masukkan panjang sisi 2 trapesium: ");
    scanf("%f", &side2);
    printf("Masukkan panjang sisi 3 trapesium: ");
    scanf("%f", &side3);
    printf("Masukkan panjang sisi 4 trapesium: ");
    scanf("%f", &side4);
    printf("Luas trapesium: %.2f\n", areaofTrapezoid(base1, base2, heightT));
    printf("Keliling trapesium: %.2f\n", circumferenceofTrapezoid(side1, side2, side3, side4));

    printf("--------------------------------------\n");

    // Circle
    float radius;
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &radius);
    printf("Luas lingkaran: %.2f\n", areaofCircle(radius));
    printf("Keliling lingkaran: %.2f\n", circumferenceofCircle(radius));

    return 0;
}
