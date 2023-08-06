#include <stdio.h>

//contoh soal praktikum :
// buatlah input yang mendeteksi apakah ia terletak di range 1-100 

int main() {
    int angka; 
    printf ("Masukkan angka: ");
    scanf ("%d", &angka);
    // printf ("angkamu: %d\n", angka); //bisa juga pake ini klo ga disingkat di printf nya
    if (angka > 0 && angka <=100 ) {
        printf ("%d terdapat dalam range 1-100", angka);
    } else {
        printf ("%d tidak terdapat pada range 1-100", angka);
    }
}