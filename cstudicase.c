#include <stdio.h>

/*penggunaan for*/
        //  for loop = repeats / mengulang a section of code a limmited amount of times

int main() {

    for (int i=1; i<=20; i++) {             //menghitung 1-20 secara 1 per satu
        printf ("%d\n", i);
    }


    // for (int i=1; i<=15; i+=3) {                //1-15 dgn beda aritmatika = 3
    //     printf("%d\n",i);
    // }


    // for (int i=10; i >=1; i--) {                //menghitung terbalik satu per satu
    //     printf ("%d\n", i);
    // }
    

    // for (int i = 1; i <= 10; i++) {             //mengulang "test" sebanyak 10 
    //     printf("test\n");
    // }



/*studi case : menampilkan bil genap bukan kelipatan 5 dalam range 1-100*/

        // for (int i=1; i <= 100; i++) {              
        //     if (i % 5 != 0 && i % 2 == 0){
        //         printf ("%d\n", i);
        //     }
        // }

    return 0;
}