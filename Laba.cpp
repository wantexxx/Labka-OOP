#include <iostream>
#include <string>
 
using namespace std;

class Car {
private:
string brand;
string model;
int year;

public:

    Car() : brand("Unknown"), model("Unknown"), year(0) {}

    Car(string b, string m, int y) : brand(b), model(m), year(y) {}
      
  Car(string b) : Car(b, "Default Model", 2020) {}
    
    ~Car() {
        cout << "Car " << brand << " " << model << " destroyed." << endl;
    }
     
     void showInfo() {
         cout << "Car: " << brand << " " << model << " (" << year << ")" << endl;
    } 
};  
 
 class Engine {
 private:
     int horsepower;
     double volume;
     string fuelType;
 public:

     Engine(int hp = 100, double v = 1.6, string f = "Petrol") : horsepower(hp), volume(v), fuelType(f) {}
 
    ~Engine() {
        cout << "Engine with " << horsepower << " HP destroyed." << endl;
    }
      void showSpecs() {
          cout << "Engine: " << horsepower << " HP, " << volume << "L, " << fuelType << endl;
     } 
 }; 
 
 class Owner {
 private:
  string name;
 int age;
public:

 Owner(string n = "Unknown", int a = 18) : name(n), age(a) {}
    
~Owner() {
     cout << "Owner " << name << " deleted." << endl;
 } 
  void showOwner() {
     cout << "Owner: " << name << " (" << age << ")" << endl;
  }
};
 
 int main() {
     Car car1("Toyota", "Corolla", 2022);
     car1.showInfo();
    
     Engine engine1(150, 2.0, "Diesel");
     engine1.showSpecs();
     
     Owner owner1("John Doe", 30);
     owner1.showOwner();
    
     return 0;
 }
