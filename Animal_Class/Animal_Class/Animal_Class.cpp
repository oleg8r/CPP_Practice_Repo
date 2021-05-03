// Animal_Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Pet {
public:
    //Pet(std::string n, int a) {
    Pet() {
        name = "pet"; age = 0;
    }
    virtual void fVoice() {
        std::cout << name << age << std::endl;
    }
protected:
    std::string name;
    int age;
};


class Cat : public Pet {
public:
    //Cat(std::string n, int a, std::string c) : Pet(n, a)
    Cat() : Pet()
    {
        //voice = c;
        name = "Murzik";
        age = 2;
        voice = "The cat says: Meow! Meow! Meow!";
    }
    void fVoice() override {
        std::cout << voice << "\t\t" << "name:" << name << "\t" << "age: " << age << std::endl;

    }
protected:
    std::string voice;
};


class Dog : public Pet {
public:
    //Dog(std::string n, int a, std::string c) : Pet(n, a)
    Dog() : Pet()
    {
        //voice = c;
        name = "Sharik";
        age = 4;
        voice = "The dog says: Woof! Woof! Woof!";

    }
    void fVoice() override {
        std::cout << voice << "\t\t" << "name:" << name << "\t" << "age: " << age << std::endl;
    }
protected:
    std::string voice;
};

int main()
{
    Cat objCat;
    objCat.fVoice();

    Dog objDog;
    objDog.fVoice();
}
