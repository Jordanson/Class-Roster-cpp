
// E.  Create a Roster class (roster.cpp) by doing the following:

// 1.  Create an array of pointers, classRosterArray, to hold the data provided in the “studentData Table.”

// 2.  Create a student object for each student in the data table and populate classRosterArray.

// a.  Parse each set of data identified in the “studentData Table.”

// b.  Add each student object to classRosterArray.
#include <string>
#include "student.h"
#include "roster.h"

using namespace std;


    //Student* classRosterArray = new Student[5];
    int numberOfStudentsAdded = 0;
    int lastIndexOfRosterArray = 4;
  

    void Roster::add(string studentID, string firstName, string lastName, string emailAddress, 
    int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
        int daysInCourses[3]; 

        daysInCourses[0] = daysInCourse1;
        daysInCourses[1] = daysInCourse2;
        daysInCourses[2] = daysInCourse3;


        Student* student = new Student(studentID, firstName, lastName, emailAddress, age, degreeprogram, daysInCourses);

        classRosterArray[numberOfStudentsAdded] = student;

        numberOfStudentsAdded++;
    }

    void Roster::remove(string studentID) {   
        for (int i = 0; i <= lastIndexOfRosterArray; i++) {
            if  (classRosterArray[i]->getId() == studentID) {
                    cout << "removed: " << studentID << endl;
                    delete classRosterArray[i];

                    classRosterArray[i]=classRosterArray[lastIndexOfRosterArray];
                    lastIndexOfRosterArray--;
                    return;
                }
        }
        cout << "The student with the ID: " << studentID << " was not found\n";
    }

    void Roster::printAll() {
        //prints a complete tab-separated list of student data, each data point indented (tab)
        for (int i = 0; i <= lastIndexOfRosterArray; i++) {
            classRosterArray[i]->print();
        }
    }

    void Roster::printAverageDaysInCourse(string studentID) {
        int total = 0;

        for (int i = 0; i <= lastIndexOfRosterArray; i++) {  
            if  (classRosterArray[i]->getId() == studentID) {
                int* daysInCourses = classRosterArray[i]->getDaysInCourses();
                for (int j = 0; j < 3; j++) {
                    total += daysInCourses[j];
                }
            
            cout << "Student ID: " << studentID << " average days in course is: " << total/3 << "\n\n";
            //total = 0;
            return;
            }
        }
    }

    void Roster::printInvalidEmails() {
        //verifies student email addresses and displays all invalid email addresses to the user.
        //A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
        
        for (int i = 0; i <= lastIndexOfRosterArray; i++) {
            string email = classRosterArray[i]->getEmailAddress();

            if ((email.find(' ') != std::string::npos) || (email.find(".") == std::string::npos) || (email.find("@") == std::string::npos)) {
                cout << email << " - is invalid.\n";
            }
        }
        cout << "\n";
    }

    void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {

    }
