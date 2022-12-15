#ifndef Roster_H
#define Roster_H

#include "student.h"
#include <string>


class Roster {
        
        private:
            Student* classRosterArray[5];
            int numberOfStudentsAdded;
            


        public:
            ~Roster();

            void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, 
            int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
            
            void remove(std::string studentID);
            void printAll();
            void printAverageDaysInCourse(std::string studentID);
            void printInvalidEmails();
            void printByDegreeProgram(DegreeProgram DegreeProgram);

        };

#endif 