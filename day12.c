#include <stdio.h>
/* Advent of code day 12 C code */

int main(int argc, char const *argv[]){

  /* The get_width get_height potion */
  int garden_width = 0;
  int garden_height = 0;
  int plant_plot = 0;

  plant_plot = getchar();

  while (plant_plot != 10){
    plant_plot = getchar();
    garden_width = garden_width + 1;
  }

  garden_height = garden_width;

  printf("The garden width is: %i\n", garden_width);
  printf("The garden height is: %i\n", garden_height);

  int plant_plot = 0;

  plant_plot = getchar();

  while (plant_plot != EOF){
    putchar(plant_plot);
    plant_plot = getchar();
  }

  return 0;
}
