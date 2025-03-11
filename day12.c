#include <stdio.h>
/* Advent of code day 12 C code */

int main(int argc, char const *argv[]){

  /* The get_width get_height potion */
  int garden_width = 0;
  int garden_height = 0;
  int plant_plot = 0;
  int new_plot_kind = 0;
  int last_plot_kind = 0;
  int pot_row = 0;

  while (plant_plot != 10){
    plant_plot = getchar();
    new_plot_kind = plant_plot;
    garden_width = garden_width + 1;

    /* Print the char of the first plant plot row */
    printf("%c", new_plot_kind);
  }

  while (plant_plot != EOF){
    plant_plot = getchar();
  }
  garden_height = garden_width;

  printf("The garden width is: %i\n", garden_width);
  printf("The garden height is: %i\n", garden_height);

  return 0;
}
