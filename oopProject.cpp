#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int id;

    
public:
    Person() {}

    Person(string n, int i) {
        name = n;
        id = i;
    }

    virtual void input() = 0;
    virtual void display() = 0;
};

class Student : public Person{
private:
    string program;
    float cgpa;

public:
    void input() {
        cout<<"\nEnter Student Name: ";
        cin>>name;

        cout<<"Enter Student ID: ";
        cin>>id;

        cout<<"Enter Program: ";
        cin>>program;

        cout<< "Enter CGPA: ";
        cin>>cgpa;
    }

    void display(){
        cout<<"\n--- Student Details ---";
        cout<<"\nName: "<<name;
        cout<<"\nID: "<<id;
        cout<<"\nProgram: "<< program;
        cout<<"\nCGPA: " <<cgpa<<endl;
    }
};

class Teacher : public Person{
private:
    string department;
    float salary;

public:
    void input() {
        cout << "\nEnter Teacher Name: ";
        cin>>name;

        cout<<"Enter Teacher ID: ";
        cin >>id;

        cout<<"Enter Department: ";
       cin>>department;

        cout<<"Enter Salary: ";
        cin>>salary;
    }

    void display() {
        cout<<"\n--- Teacher Details ---";
        cout<<"\nName: " <<name;
        cout<<"\nID: " <<id;
        cout<<"\nDepartment: "<<department;
        cout<<"\nSalary: "<<salary<<endl;
    }
};


class Course{
private:
    string courseName;
    int courseCode;

public:
    void input() {
        cout<<"\nEnter Course Name: ";
        cin>>courseName;

        cout << "Enter Course Code: ";
        cin >> courseCode;
    }

    void display() {
        cout<<"\n Course Details ";
        cout<<"\nCourse Name: "<<courseName;
        cout<<"\nCourse Code: "<<courseCode<< endl;
    }
};


class University {
private:
    Student students[5];
    Teacher teachers[5];
    Course courses[5];

    int studentCount = 0;
    int teacherCount = 0;
    int courseCount = 0;

public:
    void menu() {
        cout<<"===== University Management System =====";
        cout<<"\n1. Add Student";
        cout<<"\n2. View Students";
        cout<<"\n3. Add Teacher";
        cout<<"\n4. View Teachers";
        cout<<"\n5. Add Course";
        cout<<"\n6. View Courses";
        cout<<"\n7. Exit";
        cout<<"\nEnter your choice: ";
    }

    void addStudent(){
        if (studentCount < 5){
            students[studentCount].input();
            studentCount++;
            cout<<"\nStudent Added Successfully!";
        } else {
            cout<<"\nStudent limit reached!";
        }
    }

    void viewStudents(){
        if (studentCount == 0){
            cout<<"\nNo Students Found!";
        } else {
            for (int i = 0; i < studentCount; i++) {
                students[i].display();
            }
        }
    }

    void addTeacher(){
        if (teacherCount < 5){
            teachers[teacherCount].input();
        teacherCount++;
            cout<<"\nTeacher Added Successfully!";
        } else {
            cout<<"\nTeacher limit reached!";
        }
    }

    void viewTeachers() {
        if (teacherCount == 0) {
            cout<<"\nNo Teachers Found!";
        } else {
            for (int i = 0; i < teacherCount; i++) {
                teachers[i].display();
            }
        }
    }

    void addCourse() {
        if (courseCount < 5){
            courses[courseCount].input();
            courseCount++;
            cout<<"\nCourse Added Successfully!";
        } else{
            cout<<"\nCourse limit reached!";
        }
    }

    void viewCourses(){
        if(courseCount == 0){
            cout<<"\nNo Courses Found!";
        } else {
            for(int i = 0; i < courseCount; i++){
                courses[i].display();
            }
        }
    }
};


int main() {
    University uni;
    int choice;

    do {
        uni.menu();
        cin >> choice;

        switch (choice) {
        case 1:
            uni.addStudent();
            break;
        case 2:
            uni.viewStudents();
            break;
        case 3:
            uni.addTeacher();
            break;
        case 4:
            uni.viewTeachers();
            break;
        case 5:
            uni.addCourse();
            break;
        case 6:
            uni.viewCourses();
            break;
        case 7:
            cout<<"\nExiting Program...";
            break;
        default:
            cout<<"\nInvalid Choice!";
        }

    } while (choice != 7);

    return 0;
}
