#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

class Penguin {
  private:
    std::string _name;
    std::string breed;
    double _weight;
  public:
    Penguin() {
      this->_name = "Tuxedo Sam";
      this->_breed = "Emperor";
      this->_weight = 67.25;
    }

    Penguin(std::string name, double weight) {
      this->_name = name;
      this->_breed = "Emperor";
      this->_weight = weight;
    }

    std::string setName(std::string name) {
      this->_name = name;
    }

    void getName() {
      return this->_name;
    }

    std::string setBreed(std::string breed) {
      this->_breed = name;
    }

    void getBreed() {
      return this->_breed;
    }

    double setWeight(double weight) {
      this->_weight = weight;
    }

    void getWeight() {
      return this->_weight;
    }

    double monthlyCost(double pounds) {
      return (1.67 * pounds) * 30;
    }

    ~Penguin();
    
};
