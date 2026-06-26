#ifndef STUDENT_H
#define STUDENT_H

struct Student
{
  // Identity.
  char matricNumber[20];

  // Personal Information.
  char firstName[100];
  char lastName[100];
  char dateOfBirth[20];
  char gender[20];

  // Academic Information.
  int level;
  float cgpa;

  // Institutional Information.
  char faculty[30];
  char department[30];

  // Contact Information.
  char email[100];
  char phoneNumber[20];

  // Residential Information.
  char address[200];
  char stateOfOrigin[50];

  // Emergency information.
  char nextOfKin[100];

  // Admission Information
  int admissionYear;
};

void addStudent(void);

#endif