#include <stdio.h>
#include <stdlib.h>

int main() {

int menu,nominal,total,pilihlagi,ya,tidak;
char pilihLagi = 'y';

while(pilihLagi == 'Y' || pilihLagi == 'y') {
puts("");
puts("mau pesan apa : ");
printf("1. nasgor Rp. %d\n", 10000);
printf("2. bakso  Rp. %d\n", 15000);
printf("3. karage Rp. %d\n", 20000);

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

} else {
    printf("Pesanan tidak ada!!!");
    exit(0);
}

printf ("total harga = %d\n", total);

printf ("mau pesan lagi ? (Y/N) : ");
scanf ("%s", &pilihlagi);
}

return 0;
}