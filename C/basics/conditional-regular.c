/* Snell, Dallin
** 09 JAN 2018
** A C code example: regular conditional (i.e. non-tertiary).
*/


#include <stdio.h>

int main(void)
{
  if((1+1) == 2)                        // if 1 + 1 is equal to 2
    (void)printf("Math works!\n");      // print this message
  else                                  // else if 1 + 1 is NOT equal to 2
    (void)printf("Math is broken.\n");  // print this message

  return 0;
}
