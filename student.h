#ifndef Student_H
#define Student_H

#include <string>
#include <iostream>
#include "degree.h"

class Student {
        
        private:
            std::string id;   
            int age;
            std::string firstName;
            std::string lastName;
            std::string emailAddress;
            DegreeProgram degreeProgram;
            int daysInCourses[3];
            int numberOfStudentsAdded;

        public:
            Student();

            Student(std::string id, std::string firstName, std::string lastName, std::string emailAddress, 
                int age, DegreeProgram degreeProgram, int daysInCourses[]);

            std::string getId();
            int getAge();
            std::string getFirstName();
            std::string getLastName();
            std::string getEmailAddress();
            DegreeProgram getDegreeProgram();
            int* getDaysInCourses();

            void setId(std::string id);
            void setAge(int age);
            void setFirstName(std::string firstName);
            void setLastName(std::string lastName);
            void setEmailAddress(std::string emailAddress);
            void setDegreeProgram(DegreeProgram degreeProgram);
            void setDaysInCourses(int daysInCourses[]);

            void print();

            
        };

#endif 