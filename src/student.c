#include <stdio.h>
#include "student.h"
#include <string.h>

void addStudent(void)
{
  Student student;

  inputStudentDetails(&student);

  displayStudent(&student);
}

void inputStudentDetails(Student *student)
{
  printf("\n==========================================\n");
  printf("        STUDENT REGISTRATION\n");
  printf("==========================================\n");

  printf("First Name: ");
  scanf("%99s", student->firstName);

  printf("Last Name: ");
  scanf("%99s", student->lastName);

  printf("Gender: ");
  scanf("%99s", student->gender);

  printf("Admission Year: ");
  scanf("%d", &student->admissionYear);

  selectFaculty(student);

  do
  {
    printf("Level (100/200/300/400/500): ");
    scanf("%d", &student->level);

    if (!isValidLevel(student->level))
    {
      printf("Invalid level. Please input accepted level.\n");
    }

  } while (!isValidLevel(student->level));
}

void displayStudent(const Student *student)
{

  printf("\n==================================================\n");
  printf("      STUDENT INFORMATION PREVIEW\n");
  printf("==================================================\n");

  printf("First Name     : %s\n", student->firstName);
  printf("Last Name      : %s\n", student->lastName);
  printf("Gender         : %s\n", student->gender);
  printf("Admission Year : %d\n", student->admissionYear);
  printf("Level          : %d\n", student->level);
  printf("Faculty        : %s\n", student->faculty);

  printf("\nStudent registered successfull!\n");
}

int isValidLevel(int level)
{
  return level == 100 ||
         level == 200 ||
         level == 300 ||
         level == 400 ||
         level == 500;
}

void selectFaculty(Student *student)
{
  int choice;

  do
  {
    printf("\n==================================================\n");
    printf("                SELECT FACULTY\n");
    printf("===================================================\n");

    printf("1.  Faculty Of Architecture\n");
    printf("2.  Faculty Of Arts\n");
    printf("3.  Faculty Of Basic Clinical Sciences\n");
    printf("4.  Faculty Of Basic Medical Sciences\n");
    printf("5.  Faculty Of Clinical Sciences\n");
    printf("6.  Faculty Of Communication and Media Studies\n");
    printf("7.  Faculty Of Computing and Informatics\n");
    printf("8.  Faculty Of Creative Arts\n");
    printf("9.  Faculty Of Dental Sciences\n");
    printf("10. Faculty Of Education\n");
    printf("11. Faculty Of Engineering\n");
    printf("12. Faculty Of Environmental Sciences\n");
    printf("13. Faculty Of Health Professions\n");
    printf("14. Faculty Of Law\n");
    printf("15. Faculty Of Life Sciences\n");
    printf("16. Faculty Of Management Sciences\n");
    printf("17. Faculty Of Pharmacy\n");
    printf("18. Faculty Of Physical and Earth Sciences\n");
    printf("19. Faculty Of Social Sciences\n");

    printf("Choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      strcpy(student->faculty, "Faculty Of Architecture");
      break;
    case 2:
      strcpy(student->faculty, "Faculty Of Arts");
      break;
    case 3:
      strcpy(student->faculty, "Faculty Of Basic Clinical Sciences");
      break;
    case 4:
      strcpy(student->faculty, "Faculty Of Basic Medical Sciences");
      break;
    case 5:
      strcpy(student->faculty, "Faculty Of Clinical Sciences");
      break;
    case 6:
      strcpy(student->faculty, "Faculty Of Communication and Media Studies");
      break;
    case 7:
      strcpy(student->faculty, "Faculty Of Computing and Informatics");
      break;
    case 8:
      strcpy(student->faculty, "Faculty Of Creative Arts");
      break;
    case 9:
      strcpy(student->faculty, "Faculty Of Dental Sciences");
      break;
    case 10:
      strcpy(student->faculty, "Faculty Of Education");
      break;
    case 11:
      strcpy(student->faculty, "Faculty Of Engineering");
      break;
    case 12:
      strcpy(student->faculty, "Faculty Of Environmental Sciences");
      break;
    case 13:
      strcpy(student->faculty, "Faculty Of Health Professions");
      break;
    case 14:
      strcpy(student->faculty, "Faculty Of Law");
      break;
    case 15:
      strcpy(student->faculty, "Faculty Of Life Sciences");
      break;
    case 16:
      strcpy(student->faculty, "Faculty Of Management Sciences");
      break;
    case 17:
      strcpy(student->faculty, "Faculty Of Pharmacy");
      break;
    case 18:
      strcpy(student->faculty, "Faculty Of Physical and Earth Sciences");
      break;
    case 19:
      strcpy(student->faculty, "Faculty Of Social Sciences");
      break;

    default:
      printf("\nInvalid Choice. Please Input valid choices from list above!\n ");
      break;
    }

  } while (choice < 1 || choice > 19);
}