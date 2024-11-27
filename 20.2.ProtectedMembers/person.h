#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person{
    friend std::ostream& operator<<(std::ostream& out, const Person& person);

    public : 
    Person();   // Constructors
    Person(std::string& first_name, std::string& last_name);
    ~Person();

    // Getters
    std::string get_first_name() const{
        return first_name;
    }

    std::string get_last_name() const{
        return last_name;
    }

    // And Setters
    void set_first_name(std::string_view fn){
        first_name = fn;
    }

    void set_last_name(std::string_view ln){
        last_name = ln;
    }

    protected :
        std::string first_name{"Mert"};
        std::string last_name{"Cullukcu"};

};

#endif // PERSON_H