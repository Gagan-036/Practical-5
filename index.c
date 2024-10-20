#include <stdio.h>

int main() {
  float basic, HRA, DA, total;

  printf("Enter the Basic salary : \n");
  scanf("%f", &basic);

  if (basic >= 1 && basic <= 4000) {
    HRA = basic * 0.10;
    DA = basic * 0.50;
  } else if (basic > 4000 && basic <= 8000) {
    HRA = basic * 0.20;
    DA = basic * 0.60;
  } else if (basic > 8000 && basic <= 12000) {
    HRA = basic * 0.25;
    DA = basic * 0.70;
  } else {
    HRA = basic * 0.30;
    DA = basic * 0.80;
  }

  total = basic + HRA + DA;

  printf("Total Salary: %f\n", total);

  return 0;
}
