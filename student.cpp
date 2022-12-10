#include "student.h"
#include "roster.h"
#include <iostream>

            int count = 0;
 
            Student::Student(){}

            Student::Student(std::string id, std::string firstName, std::string lastName, std::string emailAddress, 
                int age, DegreeProgram degreeProgram, int daysInCourses[]) {

                this->id = id; 
                this->firstName = firstName;
                this->lastName = lastName;
                this->emailAddress = emailAddress;
                this->age = age;
                this->degreeProgram = degreeProgram;
                
                setDaysInCourses(daysInCourses);

            }

            std::string Student::getId() {
                return this->id;
            }

            int Student::getAge() {
                return this->age;
            }
            
            std::string Student::getFirstName() {
                return this->firstName;
            }

            std::string Student::getLastName() {
                return this->lastName;
            }

            std::string Student::getEmailAddress() {
                return this->emailAddress;
            }

            DegreeProgram Student::getDegreeProgram() {
                return this->degreeProgram;
            }

            int* Student::getDaysInCourses() {
                return this->daysInCourses;
            }

            void Student::setId(std::string id) {
                this->id = id;
            }

            void Student::setAge(int age) {
                this->age = age;
            }

            void Student::setFirstName(std::string firstName) {
                this->firstName = firstName;
            }

            void Student::setLastName(std::string lastName) {
                this->lastName = lastName;
            }

            void Student::setEmailAddress(std::string emailAddress) {
                this->emailAddress = emailAddress;
            }

            void Student::setDegreeProgram(DegreeProgram degreeProgram) {
                this->degreeProgram = degreeProgram;
            }
            
            void Student::setDaysInCourses(int daysInCourses[]) {
                for (int i = 0; i <= 3; i++) {
                    this->daysInCourses[i] = daysInCourses[i];
                }
            }

            void Student::print() {
                std::cout << id << "\t" << firstName << "\t" << lastName << "\t" << age << "\t" << emailAddress << "\t";

                switch (degreeProgram)

                        {
                        case SECURITY:
                            std::cout << "SECURITY\t";
                            break;
                        case NETWORK:
                            std::cout << "NETWORK\t";
                            break;
                        case SOFTWARE:
                            std::cout << "SOFTWARE\t";
                            break;
                        }
                
                std::cout << "{" << this->daysInCourses[0];
                for (int i = 1; i < 3; i++) {
                    std::cout << "," << this->daysInCourses[i];
                }
                std::cout << "}\n";

                count++;
            }