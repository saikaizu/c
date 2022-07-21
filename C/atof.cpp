 //Header
 #include <stdio.h>
 #include <conio.h>
 #include <math.h>
 #include <iostream>
 
 using namespace std; //untuk_menggantikan_iostream.h
 
 main()
 {
 char kata[20];
 float angka, a, b;
 
 //input_bilangan
 cout<<"Masukan Angka = ";
 gets(kata);
 angka = atof(kata);
 a = angka + 5;
 
 //output
 cout<<"Angka akan ditambah 5 = "<<a;
 getch();
 }
