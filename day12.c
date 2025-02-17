#include <stdio.h>
/* Advent of code day 12 Python Scripts */
/* Find the length of the row of char inputs.
Line 1 of inputs is how many characters long?
*/

int main(int argc, char const *argv[]){
  /* The getchar() function can do this. */
  int garden_width = 0;
  int plant_plot = 0;

  plant_plot = getchar();
  while (plant_plot != 10){
    putchar(plant_plot);
    plant_plot = getchar();
    garden_width = garden_width + 1;
  }

  printf("The garden width is: %i\n", garden_width);

  return 0;
}
