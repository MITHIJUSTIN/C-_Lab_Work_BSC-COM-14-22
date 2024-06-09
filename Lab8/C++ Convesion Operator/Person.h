#pragma once
#include <string>
using namespace std;

class Person {
public:
    Person();
    Person(string firstName, float newWeight);
    ~Person();

    float operator+(const Person& otherPerson);

    bool operator==(const Person& otherPerson) const;
    bool operator!=(const Person& otherPerson) const;

    bool operator<(const Person& otherPerson) const;
    bool operator>(const Person& otherPerson) const;

    void setAge(int age);

    // Conversion operators
    operator int();
    operator string();
    operator float();

private:
    float mWeight;
    string mFirstName;
    int mAge;
};
