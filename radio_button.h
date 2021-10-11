#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

#ifndef PENGUIN_HPP
#define PENGUIN_HPP

class Penguin {
  private:
    std::string _name;
    std::string breed;
    double _weight;
  public:
    Penguin();
    Penguin(std::string name, double weight);
    std::string setName(std::string name);
    void getName();
    std::string setBreed(std::string breed);
    void getBreed();
    double setWeight(double weight);
    void getWeight();
    double monthlyCost(double pounds);
    ~Penguin();
    
};

#endif
