#include <string>
#include <iostream>
#include <sstream>
#include <map>

#include "student.h"
#include "roster.h"


using namespace std;

int convertString(string numberToConvert);
DegreeProgram getDegree(string degree);

int main() {

    const string studentData[] = 

    {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", 
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", 
    "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", 
    "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", 
    "A5,Jordan,Robertson,jro1047@wgu.edu,29,99,69,96,SOFTWARE"};

    cout<<"Scripting and Programming - Applications - C867\nC++\n001400935\nJordan Robertson\n\n";



    Roster roster;

    int daysInCourse[3];

    string id;
    string firstName; 
    string lastName;
    string email;
    int age;
    int daysInCourse1;
    int daysInCourse2;
    int daysInCourse3;
    DegreeProgram degree;

    string x;
    int commaCounter = 0;

    for (int i=0; i < sizeof(studentData) / sizeof(studentData[i]); i++) {
        // cout << "\n\nwe are on object: " << debug << "\n";
        // debug++;
        // cout << "string in studentdata array: " << studentData[i] << "\n\n";

        for (int j=0; j < studentData[i].length(); j++) {
            
            if (studentData[i][j] == ',') {

                commaCounter++; 
                switch (commaCounter) {
                        case 1:
                            id = x;
                            //cout << "the student's id is: " << id << endl;
                            break;
                        case 2:
                            firstName = x;
                            //cout << "the student's first name is: " << firstName << endl;
                            break;
                        case 3:
                            lastName = x;
                            //cout << "the student's last name is: " << lastName << endl;
                            break;
                        case 4:
                            email = x;
                            //cout << "the student's email is: " << email << endl;
                            break;
                        case 5:
                            age = convertString(x);
                            //cout << "the student's age is: " << age << endl;
                            break;
                        case 6:
                            daysInCourse1 = convertString(x);
                            //cout << "days in course 1 is: " << daysInCourse1 << endl;
                            break;
                        case 7:
                            daysInCourse2 = convertString(x);
                            //cout << "days in course 2 is: " << daysInCourse2 << endl;
                            break;
                        case 8:
                            daysInCourse3 = convertString(x);
                            //cout << "days in course 3 is: " << daysInCourse3 << endl;
                            break;
                        }
                

                x = "";       
            }
            else if (j == studentData[i].length() - 1) { 
                x += studentData[i][j];
                degree = getDegree(x);
                //cout << "degree is: " << degree << "\n\n i: " << i << " j: " << j << endl;

                x = "";
            }
            else {
                x += studentData[i][j];
            }
        }
        commaCounter = 0;
        cout << "\n";

        roster.add(id, firstName, lastName, email, age, daysInCourse1, daysInCourse2, daysInCourse3, degree);
        //roster.printInvalidEmails();
        

    }
    cout << "Displaying all students: \n";
    roster.printAll();
    cout << "\n";

    
    cout << "Displaying invalid emails: \n\n";
    roster.printInvalidEmails();

    roster.printAverageDaysInCourse("A3");

    //Showing students in degree program: SOFTWARE

    cout << "removing A3\n";
    roster.remove("A3");
    roster.printAll();

}

int convertString(string stringToConvert) {
    stringstream str(stringToConvert);
            
    int convertedString;
    str >> convertedString;
        
    return convertedString;
}

DegreeProgram getDegree(string degree) {
    if (degree == "SECURITY") {
      return SECURITY;
    }
    else if (degree == "NETWORK") {
      return NETWORK;
    }
    else {
      return SOFTWARE;
    }
}


// & is the reference operator and can be read as “address of”.
// * is the dereference operator and can be read as “value pointed by”.

    
    
    
        
        
