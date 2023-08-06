#include <stdio.h>

        /*OPERATOR LOGIKA*/
    //&& --> dan (AND) 
    //|| --> atau (OR)
    //!  --> tidak (NOT)

int main() {
    int a = 10;
    int b = 20;
    if ("a == 10 && b == 20 ") {               //--> jika salah satu var nya salah maka akan masuk ke else / false 
        printf ("value nya benar");
    } else {
        printf ("value nya salah");
    }
}