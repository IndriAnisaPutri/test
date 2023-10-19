#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdbool.h>

int areaAndCircumofTriangle();
int areaAndCircumferenceofRhombus();
int areaAndCircumferenceofParallelogram();
int areaAndCircumferenceofTrapezoid();
int areaAndCircumferenceofCircle();

printf("\n\t") Pilih Bangunan Datar:
printf("\n\t") 1. Segitiga Sembarang
printf("\n\t") 2. Belah Ketupat
printf("\n\t") 3. Jajar Genjang
printf("\n\t") 4. Trapesium
printf("\n\t") 5. Lingkaran
prtintf("\n\tInputkan pilihan kode bangun datar: ");

while (scanf("%d", &kode) == 0 || kode<1 || kode>5){

    printf("\n\tYang anda masukan bukan angka!");
    printf("\n\tMasukan Nilainya lagi: ");
    while ((kode = getchar()) != '\n');
}
printf("------------------------------\n");

switch (kode)
{
case 1:
    areaAndCircumofTriangle();
    break;
case 2:
    areaAndCircumferenceofRhombus();
    break;
case 3:
    areaAndCircumferenceofParallelogram();
    break;
case 4:
    areaAndCircumferenceofTrapezoid();
    break;
case 5:
    areaAndCircumferenceofCircle();
    break;
default:
    printf("Anda salah memilih kode!!!")

}

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
