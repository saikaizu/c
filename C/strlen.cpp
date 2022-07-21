//Menggunakan_Bahasa_C
#include <stdio.h>
#include <string.h>

int main ()
{
  char szInput[256];
  printf ("Masukan kata: ");
  gets (szInput);
  printf ("Kata yang dimasukan adalah %u karakter.\n",(unsigned)strlen(szInput));
  return 0;
}
