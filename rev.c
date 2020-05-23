#include <stdio.h>
int main(void)

{
  size_t size;
  char char_arr_23 [23];
  char char_a;
  int int_1;
  FILE *file_a;
  FILE *file_r;
  long long uint_a;
  int int_b;
  char char_b;
  
  file_r = fopen("flag.txt","r");
  file_a = fopen("rev_this","w");
  if (file_r == (FILE *)0x0) {
    puts("No flag found, please make sure this is run on the server");
  }
  if (file_a == (FILE *)0x0) {
    puts("please run this on the server");
  }
  size = fread(char_arr_23,24,1,file_r);
  int_1 = (int)size;
  if ((int)size < 1) {
     printf("exit");               /* WARNING: Subroutine does not return */
    return 0;
  }
  
  int_b = 0;
  while (int_b < 8) {
    char_b = char_arr_23[int_b];
    fputc((int)char_b,file_a);
    int_b = int_b + 1;
  }
  uint_a = 8;
  while ((int)uint_a < 0x17) {
    if ((uint_a & 1) == 0) {        //even
      char_b = char_arr_23[(int)uint_a] + '\x05';
    }
    else {                                      //odd
      char_b = char_arr_23[(int)uint_a] + -2;
    }
    fputc((int)char_b,file_a);
    uint_a = uint_a + 1;
  }
  char_b = char_a;
  fputc((int)char_a,file_a);
  fclose(file_a);
  fclose(file_r);
  return 0;
}

