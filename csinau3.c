#include <stdio.h>

        /*OPERATOR KALKULASI*/
//x + - : --> operator kalkulasi 
//x --> * --> operator perkalian 
//: --> / --> operator pembagian 
//+ --> operator pertambahan 
//- --> operator pengurangan

int main() {
    int a = 5;
    int b = 10;
    int c = a + b;
    int d = c * 2;
    int e = d / 10;

// coba panggil melalui printf untuk mencetak/ merepresentasikannya
    printf("nilai a = %d,\nnilai b = %d,\nnilai c = %d,\nnilai d = %d, \nnilai e = %d,", a, b, c, d, e);


            /*OPERATOR RELASI*/ //udh masuk if else
    //> --> lebih dari 
    //< --> kurang dari 
    //>= --> lebih dari sama dengan 
    //<= --> kurang dari sama dengan
    //!= --> tidak sama dengann 
    if  (b>a) {  
        printf("\nb lebih besar dari a");       //printf pertama harus diisi komen yang benar sesuai yang didalam if nya
    } else {
        printf("\nb lebih kecil dari a");     // yang ini berupa hasil false nya
    }
    
        
//conth lain pake if else 
    if (a>b) {          /*contoh false*/
        printf("\nvariable a lebih besar dari b");    
    } else {
        printf("\nvariable a kurang dari b"); 
    }

//contoh lagi 
    int perbandingan = b > a;
    if (perbandingan) {
        printf("\nb lebih gede dri a");  //printf ver benar (true)
    } else {
        printf("\nb nggk lebih gde dri a");  //printf ver salah (false)
    }
 
 //lain lagi
    if (a==5) {   /* jika tidak ada else*/
        printf("\nbenar");    // maka jika kondisi atau var. nya false tidak akan ada hasil atau ooutput yang keluar
                                // tapi kalau true maka printf yang pertama yang akan keluar,
                                //kalau mau coba silahkan gonta-ganti angka a yang diminta di if nya menjadi selain 5
    }                          
}                               