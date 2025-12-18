#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int satirSayisi = 3;
    int sutunSayisi = 4;
    int matris[3][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120}
    };

    int i, j, yeniDeger;

    printf("--- Matris Gorunumu ---\n");
    for (int r = 0; r < satirSayisi; r++) {
        for (int c = 0; c < sutunSayisi; c++) printf("%d\t", matris[r][c]);
        printf("\n");
    }

    printf("\nErisilmek istenen satir (0-%d): ", satirSayisi - 1);
    scanf("%d", &i);
    printf("Erisilmek istenen sutun (0-%d): ", sutunSayisi - 1);
    scanf("%d", &j);

    if (i < 0 || i >= satirSayisi || j < 0 || j >= sutunSayisi) {
        printf("\nHata: Gecersiz indis! Matris sinirlari disina cikamazsiniz.\n");
        return 1;
    }

    unsigned char* baseAddress = (unsigned char*)matris;
    int elemanBoyutu = sizeof(int);

    // Row-Major Adres Hesaplama
    unsigned char* hesaplananAdres = baseAddress + ((i * sutunSayisi) + j) * elemanBoyutu;

    printf("\n--- Analiz Sonuclari ---\n");
    printf("Hesaplanan Adres: %p\n", (void*)hesaplananAdres);
    printf("Mevcut Deger: %d\n", *(int*)hesaplananAdres);

    printf("\nGuncellemek icin yeni bir deger girin: ");
    scanf("%d", &yeniDeger);
    *(int*)hesaplananAdres = yeniDeger;

    printf("\nGuncelleme basarili! Matrisin yeni hali:\n");
    for (int r = 0; r < satirSayisi; r++) {
        for (int c = 0; c < sutunSayisi; c++) printf("%d\t", matris[r][c]);
        printf("\n");
    }

    return 0;
}