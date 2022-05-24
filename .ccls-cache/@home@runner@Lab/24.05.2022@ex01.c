#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main6(){
  char *firstname = malloc(20);
  char *secondname = malloc(20);
  float gpa;
  int id, age;
  char gender;
  strcpy(firstname,"Chanponleusophea");
  strcpy(secondname,"Ho");
  id=18233;
  age=18;
  gpa=3.7;
  gender='M';
  printf("ID:%d, Fullname: %s %s\n",id,firstname,secondname);
  printf("Age:%d, Gender:%c, GPA:%f",age,gender,gpa);
}
