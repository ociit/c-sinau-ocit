#include <stdio.h>
#include <stdlib.h>
//studi case : kalkulator sederhana

int main () {
    int PilihanUser, angka1, angka2, hasil;
    printf ("Masukkan pilihan pertama : ");
    scanf ("%d", &angka1);
    printf ("Masukan pilihan kedua : ");
    scanf ("%d", &angka2);

    printf("\nPilih Menu\n");
    printf("1. Perkalian\n");
    printf("2. pembagian\n");
    printf("3. pertambahan\n");
    printf("4. pengurangan\n");

    printf("Pilihan mu : ");
    scanf("%d", &PilihanUser);

    if (PilihanUser == 1) {
        hasil = angka1 * angka2 ;  //perkalian 

    } else if (PilihanUser == 2) {
        hasil = angka1 / angka2 ;  //pembagian

    } else if (PilihanUser == 3) {
        hasil = angka1 + angka2 ;  // pertambahan

    } else if (PilihanUser == 4) {
        hasil = angka1 - angka2 ;  //pengurangan

    } else {
        printf ("pilihnya 1/2/3/4 aja bang :v");
        exit (0);               //untk mematikan system saat selesai
    }

    printf ("total = %d", hasil);
}