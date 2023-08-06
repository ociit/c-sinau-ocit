#include <stdio.h>

// studi case

int main () {
    /*
    pengecekan mata kuliah
    */
    int nilai;
    printf ("Masukkan nilai kamu : ");
    scanf ("%d", &nilai);                   //scanf digunakan untk meminta value kepada user; scanf ("jenis var", &nama var);

    if (nilai <= 40) {
        printf ("nilaimu jelek bgt sumpah, banyak belajar ya");     //double if dengan menambahkan if lagi setelah esle 
    } else if (nilai > 40 && nilai <= 60) {
        printf ("yok bisa yok tingkatkan lagi");
    } else if (nilai > 60 && nilai <= 75) {
        printf ("wah dikit lagi, harus bisa lebih !");
    } else if (nilai > 75 && nilai <= 100) {
        printf ("wah bagus !, gambatta na, otsukare");
    }
}