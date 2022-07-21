//Library

#include <iostream>
#include <string.h>

using namespace std; //untuk_menggantikan_iostream.h

int main()

{

//type_data_char
    char title[] = "Belajar Bahasa CPP Sai Pratama";
    char title_copy[20];

    //copy string title ke title_copy
    strcpy(title_copy, title);

    //maka sekarang title_copy akan berisi:
    cout<<("Menampilkan ") << endl << title_copy;

}

