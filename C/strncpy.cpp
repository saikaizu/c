//Library
#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
  char str1[]= "Belajar Bahasa CPP Sai Pratama";
  char str2[40];
  char str3[40];

  //copy
  strncpy ( str2, str1, sizeof(str2) );

  //output_str3_hanya_5_karakter
  strncpy ( str3, str2, 5 );
  str3[5] = '\0';   //Menambahkan_character_null

  puts (str1);
  puts (str2);
  puts (str3);

  return 0;
}
