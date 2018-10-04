//Include standard files and other header files (aka h files to your other files).
#include <stdlib.h>
#include <stdio.h>



//Define the printer
struct Printer{
char Name[32];
int* NameAddress[6];
int* UserDB[3];
int TPP;
};
int trayStatus(){
  return 0;
}

int reloadTray(){
  return 0;
}

int printerStatus(){
  return 0;
}

int print(){
  return 1;
}

int main(){
  //make users
  User u1 = {"delano",0};
  User u2 = {"chuck",0};
  User u3 = {"Dillon", 0};
  //make copyJobs
  CopyJob cj1 = {"bring",1, "Here the value of members of student1 will have for name, 14 for roll_no and 89 for marks. Similarly, the value of members of student2 will be for name, 10 for roll_no and 82 for marks."};
  CopyJob cj2 = {"your",2, "As we know student_3.name is an array so we can't just assign a string to it, that's why in line 37 a strcpy() function is used to assign a string to student_3.name."};
  CopyJob cj3 = {"battery",4,"We can use student1.name, student1.roll_no and student1.marks just as any other ordinary variables. They can be read, displayed, assigned values, used inside an expression, passed as arguments to functions etc."};
  CopyJob cj4 = {"physics",1, "Here the value of members of student1 will have for name, 14 for roll_no and 89 for marks. Similarly, the value of members of student2 will be for name, 10 for roll_no and 82 for marks."};
  CopyJob cj5 = {"english"2, "As we know student_3.name is an array so we can't just assign a string to it, that's why in line 37 a strcpy() function is used to assign a string to student_3.name."};
  CopyJob cj6 = {"history",4,"We can use student1.name, student1.roll_no and student1.marks just as any other ordinary variables. They can be read, displayed, assigned values, used inside an expression, passed as arguments to functions etc."};
  //make trays
  PaperTray

  //make printer


  //begin printing


  //print user page counts and total print page count.


  //print printer status


  //reload a tray


  //ask again for a printerStatus

}
