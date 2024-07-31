#pragma once

#include <iostream>
#include <string>

class WrongAnimal {
protected:
    std::string type;

public:
    WrongAnimal();
    virtual ~WrongAnimal();
    std::string getType() const;
    void makeSound() const;
};
