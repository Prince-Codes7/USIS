#include <stdio.h>
#include "student.h"

int main(void)
{
  int choice;

  do
  {
    printf("\n=====================================\n");
    printf(" UNILAG STUDENT INFORMATION SYSTEM\n");
    printf("====================================\n");
    printf("1. Add Student\n");
    printf("0. Exit\n");
    printf("------------------------------------\n");
    printf("Enter Choice: ");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      addStudent();
      break;
    case 0:
      printf("\nThanks for Using Our System\n");
      break;

    default:
      printf("\nInvalid Choice.\n");
      break;
    }
  } while (choice != 0);

  return 0;
}