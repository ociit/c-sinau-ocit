#include <stdio.h>
#define phi 3.14

//variable ada yang bisa diganti nilainya di tengah" code dan ada juga yang tidak bisa diganti karena nilai nya sudah tetap, ex : phi (3.14)
int main() {
    //contoh variable "angka" yang diubah ditengah" code, yang awalnya input angka itu 10 di ganti di var. angka yang ke 2 menjadi 20 
    int angka = 10;
    printf("Angka : %d", angka);
    angka = 20;
    printf("\nAngka yg udh diubah : %d", angka);

    //contoh yang tidak bisa diganti nilai nya 
    printf("\nphi : %.2f", phi);  //--> ver benar nya 

    // phi = 3.10  
    // printf("\nnilaiphi : %.2f", phi);

    //--> saat nilai phi coba diganti maka akan terjadi eror (nyalakan 2 codenya dan matikan code printf phi yang benar dengan mengganti nya menjadi komentar)
    // cara buat komentar cuma tambahkan coment " // "pada awal code  
        
        //moga" paham :V
}