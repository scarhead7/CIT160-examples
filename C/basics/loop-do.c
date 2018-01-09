/* Snell, Dallin
** 09 JAN 2018
** A C code example: do-while loop.
*/


#include <stdio.h>

#define TABLE_ROW 5                         // number of table rows constant

/************************************************
** The purpose of this function is to create a table with a given number of
** rows. The rows are specified in the TABLE_ROW constant. While this isn't
** a very aestheticly pleasing table, it does show a simple use of a do loop.
************************************************/
int main(void)
{
  int counter = 0;                          // initialize counter variable

  (void)printf("---------\n");              // print head of table
  do {
    (void)printf("|   |   |\n");            // loop through correct number of rows
    (void)printf("---------\n");
    ++counter;                              // increment counter
  } while(counter < TABLE_ROW);

  return 0;
}
