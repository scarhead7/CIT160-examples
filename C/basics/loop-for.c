/* Snell, Dallin
** 09 JAN 2018
** A C code example:
*/


#include <stdio.h>

#define TABLE_ROW 5                         // number of table rows constant

/************************************************
** This is the same contrived example as the do-while loop and the while loop.
** The for loop is--in my opinion--much more powerful than the previous two
** loops. The for loop controls its own counter variable (which can be used
** in very powerful ways).
************************************************/
int main(void)
{
  int counter = 0;                          // initialize counter variable

  (void)printf("---------\n");              // print head of table
  for(int counter = 0; counter < TABLE_ROW; ++counter) {
    (void)printf("|   |   |\n");            // loop through correct number of rows
    (void)printf("---------\n");
  }

  return 0;
}
