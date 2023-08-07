#include <stdio.h>

int main() {

    int x;          //declaration
    x = 123;        //initialization
    int y = 321;    //declaration + initialization

    //masukkan input angka bulat, character, dan float (pecahan)
    int angka = 10;             //integer 
    char huruf = 'A';           //single char
    float pecahan = 5.3;      //floating / decimal
    char more [] = "yo";    //array of char

    //panggil melalui printf
    
    printf ("hasil declar dan inis x : %d\n", x);
    printf ("hasil declar dan inis y : %d\n", y);

    printf ("Angka : %d\n", angka);         //%d untuk tipe data bil. bulat
    printf ("Huruf : %c\n", huruf);         //%c untuk tipe data 1 char saja 
    printf ("Pecahan : %.2f\n", pecahan);   //%f untuk tipe data desimal; titik dan angka diantaranya adalah penanda jumlah angka dibelakang koma
    printf ("kata : %s\n", more);           //%s untuk tipe data yang punya char lebih dari 1 huruf 
    // \n untk bari space //

    //input ma printfnya bisa disingkat code nya biar hemat kyk gini ngab
    printf("Angka lain : %d", 30);
    printf("\nPecahan lain : %.2f", 3.14);
    //printf format ( baru asumsi) printf("nama uotput  : jenis output", nilai); <-- baru asumsi jgn dianggep bener bgt :v

    //cara lain pake printf 
    printf("\n\nperingkat medali emas= %d, \nperingkat medali perunggu= %d, \nperingkat yang kesiangan= %d", 1,2,3);
    //telen aja dlu klo gphm nnt belajar lgi >_<

    return 0;
}