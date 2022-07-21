 //Header
 #include <stdio.h>
 #include <conio.h>
 #include <stdlib.h>
 #include <iostream>
 
 using namespace std; //untuk_mengganti_iostream.h
 
 main()

 {
 	
 char kata[20];
 float angka, a, b;
 
 //input
 cout<<"Masukan Kata berupa angka = ";
 gets(kata);
 angka = atol(kata);
 a = angka + 7;
 
 //output
 cout<<"Hasil ditambah dengan 7 = "<<a;
 getch();
 }

