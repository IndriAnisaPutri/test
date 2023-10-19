#include <stdio.h>
#define _USE_MATH_DEFINES
#define MP_I 3.14159
#include <math.h>
#include <stdbool.h>


void groupName()
{
    printf("\n");
    printf("----------------------------------------------\n");
    printf("| Group 15 programming practicum :           |\n");
    printf("|--------------------------------------------|\n");
    printf("|Bagus Jagra Wicaksana (2305551005)             |\n");
    printf("|I Putu Rama Dita (2305551017)                  |\n");
    printf("|Kadek Indri Anisa Putri (2305551062)           |\n");
    printf("|I Gusti Ayu Tiksna Apsari (2305551066)         |\n");
    printf("|Karin Vallerine Sidaluwu (2305551088)          |\n");
    printf("|Nyoman Danendra Widy Pradnya (2305551155)      |\n");
    printf("|I Putu Hendra Aditya Jayasantika (2305551158)  |\n");
    printf("-------------------------------------------------\n");
    printf("\n");
}


// Segitiga Sembarang
float areaofTriangle(float alas, float tinggi)
{
    return 0.5 * alas * tinggi;
}
float circumferenceofTriangle(float sisi1, float sisi2, float sisi3)
{
    return sisi1 + sisi2 + sisi3;
}

// Belah ketupat
float areaofRhombus(float diagonal1, float diagonal2)
{
    return 0.5 * diagonal1 * diagonal2;
}
float circumferenceofRhombus(float sisi)
{
    return 4 * sisi;
}

// Jajar Genjang
float areaofParallelogram(float alas, float tinggi)
{
    return alas * tinggi;
}
float circumferenceofParallelogram(float alas, float sisimiring)
{
    return (2 * alas) + (2 * sisimiring);
}

// Trapesium

float areaofTrapezoid(float alas1, float alas2, float tinggi)
{
    return 0.5 * (alas1 + alas2) * tinggi;
}
float circumferenceofTrapezoid(float sisi1, float sisi2, float sisi3, float sisi4)
{
    return sisi1 + sisi2 + sisi3 + sisi4;
}

// Lingkaran
float areaofCircle(float jari_jari)
{
    return M_PI * jari_jari * jari_jari;
}
float circumferenceofCircle(float jari_jari)
{
    return 2 * M_PI * jari_jari;
}

// input validasi
int inputInteger()
{
    char input[1024];
    int ret;
    char err;

    while (true)
    {
        scanf("%[^\n]", input);
        fflush(stdin);
        if (sscanf(input, "%d%c", &ret, &err) == 1)
            return ret;
    }
}

void segitigaSembarang()
{
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
}

void belahKetupat()
{
    float diagonal1, diagonal2, sisi;
    printf("Masukkan panjang diagonal 1 belah ketupat: ");
    scanf("%f", &diagonal1);
    printf("Masukkan panjang diagonal 2 belah ketupat: ");
    scanf("%f", &diagonal2);
    printf("Masukkan panjang sisi belah ketupat: ");
    scanf("%f", &sisi);
    printf("Luas belah ketupat: %.2f\n", areaofRhombus(diagonal1, diagonal2));
    printf("Keliling belah ketupat: %.2f\n", circumferenceofRhombus(sisi));
}

void jajarGenjang()
{
    float alas, tinggi, sisimiring;
    printf("Masukkan panjang alas jajar genjang: ");
    scanf("%f", &alas);
    printf("Masukkan tinggi jajar genjang: ");
    scanf("%f", &tinggi);
    printf("Masukkan panjang sisimiring jajar genjang: ");
    scanf("%f", &sisimiring);
    printf("Luas jajar genjang: %.2f\n", areaofParallelogram(alas, tinggi));
    printf("Keliling jajar genjang: %.2f\n", circumferenceofParallelogram(alas, sisimiring));
}

void trapesium()
{
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
    printf("Luas trapesium: %.2f\n", areaofTrapezoid(alas1, alas2, tinggi));
    printf("Keliling trapesium: %.2f\n", circumferenceofTrapezoid(sisi1, sisi2, sisi3, sisi4));
}

void lingkaran()
{
    float jari_jari;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jari_jari);
    printf("Luas lingkaran: %.2f\n", areaofCircle(jari_jari));
    printf("Keliling lingkaran: %.2f\n", circumferenceofCircle(jari_jari));
}

int main(){
    char choice;
    groupName();
        printf("enter your Choice : \n");
        printf("1.Segitiga Sembarang \n");
        printf("2.Belah Ketupat \n");
        printf("3.Jajar Genjang \n");
        printf("4.Trapesium \n");
        printf("5.Lingkaran \n");
        printf("Reminder for enter the only input up !\n");

     while (scanf("%d", &choice) == 0 || choice<1 || choice>5){

    printf("\n Please Choice Right Input:");
    scanf("%c" , &choice);
    printf("\n\tYang anda masukan bukan angka!");
    printf("\n\tMasukan Nilainya lagi: ");
    while ((choice = getchar()) != '\n');
}
printf("------------------------------\n");  
        
        switch (choice){
        case '1':
            segitigaSembarang();
            break;
        case '2':
            belahKetupat();
            break;
        case '3':
            jajarGenjang();
            break;
        case '4':
            trapesium();
            break;
        case '5':
            lingkaran();
            break;
        default:
             printf("Anda salah memilih kode!!!");

        }

    return 0;
}