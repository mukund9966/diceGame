#include<iostream>
using namespace std;

class Department {
    int id;
    string name;

public:
    Department(int id, string name) {
        this->id = id;
        this->name = name;
    }

   

    void deleteDept() {

    }

    void addDoctor() {

    }

    void deleteDoctor() {

    }
     void addDepartment() {

    }
};

class Doctor {
    int doctorId;
    string name;
    Department *department;
    string specialization;
    int phoneNo;
    string address;

public:
    Doctor(int doctorId, string name, Department depart, string specialization, int phoneNo, string address) {
        this->doctorId = doctorId;
        this->name = name;
        this->department = &depart;
        this->specialization = specialization;
        this->phoneNo = phoneNo;
        this->address = address;
    }

    void medicines() {

    }

    void checkReport() {

    }

    void PrescribeTest() {

    }

    void drawSalary() {

    }
};

class Person {
    int id;
    string name;
    string type;

public:
    Person(int id, string name, string type) {
        this->id = id;
        this->name = name;
        this->type = type;
    }

    virtual void drawSalary() = 0;
    virtual void addPerson() = 0;
    virtual void deletePerson() = 0;
    virtual void editPerson() = 0;
};

class Staff : public Person {
public:
    Staff(int id, string name, string type) : Person(id, name, type) {

    }

    void drawSalary() override {
        cout<<" draw Salary method of Staff"<<endl;
    }

    void addPerson() override {
        cout<<" add Person method of Staff"<<endl;
    }

    void deletePerson() override {
        cout<<" delete Person method of Staff"<<endl;
    }

    void editPerson() override {
        cout<<" delete Person method of Staff"<<endl;
    }
};

class Nurse : public Person {
public:
    Nurse(int id, string name, string type) : Person(id, name, type) {

    }

    void drawSalary() override {
        cout<<" draw Salary method of Nurse"<<endl;
    }

    void addPerson() override {
        cout<<" add Person method of Nurse"<<endl;
    }

    void deletePerson() override {
        cout<<" delete Person method of Nurse"<<endl;
    }

    void editPerson() override {
        cout<<" delete Person method of Nurse"<<endl;
    }
};

int main() {
    cout<<"Name: Mukund Khandelwal\nEnrollment no: A2305219419\n";
    Person *person = new Staff(19, "Danish", "Heart Problem");
    cout<<endl;
    person->drawSalary();
    person->addPerson();
    person->deletePerson();
    person->editPerson();

    cout<<endl;


    person = new Nurse(21, "Radha", "Joint problem");
    person->drawSalary();
    person->addPerson();
    person->deletePerson();
    person->editPerson();
    return 0;
}
