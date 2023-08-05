#include <stdio.h>

int main() {
    //masukkan input angka bulat, character, dan float (pecahan)
    int angka = 10;
    char huruf = 'A';
    float pecahan = 5.3;

    //panggil melalui printf 
    printf ("Angka : %d\n", angka);
    printf ("Huruf : %c\n", huruf);
    printf ("Pecahan : %.2f\n", pecahan);
    //%d untk var. bil. bulat //var. --> variable
    //%c untk var. character 
    //%f untk var. bil. pecahan, angka didepan penanda maks bil dibelakang koma
    // \n untk bari space //

    //input ma printfnya bisa disingkat code nya biar hemat kyk gini ngab
    printf("Angka lain : %d", 30);
    printf("\nPecahan lain : %.2f", 3.14);
    //printf format ( baru asumsi) printf("nama uotput  : jenis output", nilai); <-- baru asumsi jgn dianggep bener bgt :v

    //cara lain pake printf 
    printf("\n\nperingkat medali emas= %d, \nperingkat medali perunggu= %d, \nperingkat yang kesiangan= %d", 1,2,3);
    //telen aja dlu klo gphm nnt belajar lgi >_<
}