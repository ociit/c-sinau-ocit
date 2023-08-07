#include <stdio.h>

int main() {

puts("mau pesan apa : ");
printf("1. nasgor Rp. %d\n", 10000);
printf("2. bakso  Rp. %d\n", 15000);
printf("3. karage Rp. %d\n", 20000);

int menu,nominal,total,pilihlagi,ya,tidak;

puts("pilih nomor menu : ");
scanf("%d", &menu);

puts("jumlah pesanan : ");
scanf("%d", &nominal);

if(menu == 1) {
    total = 10000 * nominal;

} else if(menu == 2 ) {
    total = 15000 * nominal;

} else if(menu==3) {
    total = 20000 * nominal;

}

printf ("total harga = %d\n", total);

printf ("mau pesan lagi ? (ya/tidak) : ");
scanf ("%s", &pilihlagi);

if (pilihlagi == ya) {
            //INI DIISI APA YA ? biar programnya bisa balek lagi ke awal
} else if (pilihlagi == tidak) {
    printf ("terimakasih");
}

return 0;
}