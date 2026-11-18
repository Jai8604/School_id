#include<stdio.h>

struct Student{
char Name[20],Department[10],RegistrationNo[15];
int RollNo,Semester;
};
 
struct Student s ;

int main(){

printf("============Admission=========\n");
printf("Enter your name : ");
scanf("%s",&s.Name);
printf("Enter RollNo : ");
scanf("%d",&s.RollNo);
printf("Enter Semester : ");
scanf("%d",&s.Semester);
printf("Enter registrationNo : ");
scanf("%s",&s.RegistrationNo);
printf("Enter Department : ");
scanf("%s",&s.Department);

printf("============DETAILS=============\n");
printf("Name :- %s",s.Name);
printf("\nRollNo :- %d",s.RollNo);
printf("\nRegistration No :- %s",s.RegistrationNo);
printf("\nSemester :- %d",s.Semester);
printf("\nDepartment :- %s\n",s.Department);
    return 0;
}