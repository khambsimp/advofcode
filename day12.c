#include <stdio.h>
/* Advent of code day 12 C code */

int main(int argc, char const *argv[]){

  /* Set Constants */
  int garden_width = 0;
  int garden_height = 0;
  int plant_plot = 0;
  int first_plot_kind = 0;
  int kind_width = 1;
  int perimeter = 0;

  // First Plot
  plant_plot = getchar();
  first_plot_kind = plant_plot;

  // First Row
  while (plant_plot != 10)
  {
    plant_plot = getchar();
    if (first_plot_kind == plant_plot)
    {
      kind_width = kind_width + 1;
    }
    garden_width = garden_width + 1;
  }
  perimeter = (kind_width * 2) + 2;

  // Second Row
  plant_plot = 0;
  kind_width = 1;

  while (plant_plot != 10)
  {
    plant_plot = getchar(); // B
    if (first_plot_kind == plant_plot)
    {
      kind_width = kind_width + 1;
    }
  }
  perimeter = (kind_width * 2) + 2;

  garden_height = garden_width;


  while (plant_plot != EOF){
    plant_plot = getchar();
  }


  printf("The garden width is: %i\n", garden_width);
  printf("The garden height is: %i\n", garden_height);

  return 0;
}
