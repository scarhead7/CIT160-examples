/* Snell, Dallin
** 09 JAN 2018
** A C code example: while loop.
*/


#include <stdio.h>

#define TABLE_ROW 5                         // number of table rows constant

/************************************************
** This is the same contrived example as the do-while loop, only using a while
** loop instead.
************************************************/
int main(void)
{
  int counter = 0;                          // initialize counter variable

  (void)printf("---------\n");              // print head of table
  while(counter < TABLE_ROW) {
    (void)printf("|   |   |\n");            // loop through correct number of rows
    (void)printf("---------\n");
    ++counter;                              // increment counter
  }

  return 0;
}
