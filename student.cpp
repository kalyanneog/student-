#include <iostream>
using namespace std;
class Student
{
private:
string name;
int classLevel;
int rollNumber;
float marks;
public:
void setName(string studentName) 
{
name = studentName;
}
void setClassLevel(int level) 
{
classLevel = level;
}
void setRollNumber(int roll) 
{
rollNumber = roll;
}
void setMarks(float studentMarks) 
{
marks = studentMarks;
}
string getName() 
{
return name;
}
int getClassLevel() 
{
return classLevel;
}
int getRollNumber()  
{
return rollNumber;
}
float getMarks()
{
return marks;
}
char calculateGrade()
{
if (marks >= 90) 
{
return 'A';
} else if (marks >= 80) 
{
return 'B';
} 
else if (marks >= 70) 
{
return 'C';
} 
else if (marks >= 60) 
{
return 'D';
}
else 
{
return 'F';
}
}
void displayStudentInfo() 
{
cout << "Student Name: " << name << endl;
cout << "Class: " << classLevel << endl;
cout << "Roll Number: " << rollNumber << endl;
cout << "Marks: " << marks << endl;
cout << "Grade: " << calculateGrade() << endl;
}
};
int main() 
{
Student student1;
student1.setName("John Doe");
student1.setClassLevel(9);
student1.setRollNumber(23);
student1.setMarks(85);
student1.displayStudentInfo();
return 0;
}
