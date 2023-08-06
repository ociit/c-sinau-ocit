#include <stdio.h>

/*FUNGTION*/

// int perkalian (int,int);
int dollar (int);

int main() {
    // int angka1 = 10;
    // int angka2 = 20;
    // printf ("10x30 = %d\n", 10*30);
    // printf ("5x20 = %d\n", 5*20);
    // printf ("Hasil = %d", perkalian(10,20));
    int rupiah;                                         //<-- contoh case converter dollar-ruppiah 
    printf ("Masukkan Jumlah Rupiah: ");                // materi inti yang di jdikan komen nyalakan komen dan matikan code (kecuali return 0) untk melihat :v
    scanf ("%d", &rupiah);
    printf ("Dollar: %d", dollar(rupiah) );
    return 0;
}

int dollar (int rupiah) {
    return 15000 * rupiah;
}

// int perkalian (int number1, int number2) {
//     return number1 * number2 ;
//}