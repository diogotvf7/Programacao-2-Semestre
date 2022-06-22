#include <iostream>
#include <string>
#include <sstream>
#include "Person.h"

using namespace std;

class Student : public Person {

    public:
        Student(int id, const string& name, const string& course) : Person(id, name), course_(course) {}
        const string& course() const {return course_;}
        virtual string to_string() const override {

            ostringstream oss;
            oss << id() << '/' << name() << '/' << course_;
            return oss.str();
        }

    private:
        string course_;
};

class ErasmusStudent : public Student {

    public:
        ErasmusStudent(int id, const string& name, const string& course, const string& country) : Student(id, name, course), country_(country) {}
        const string& country() const {return country_;}
        virtual string to_string() const override {

            ostringstream oss;
            oss << id() << '/' << name() << '/' << course() << '/' << country_;
            return oss.str();
        }
    private:
        string country_;
};