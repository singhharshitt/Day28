#include <iostream>
#include <string>
using namespace std;

// Base Class: Vehicle
class Vehicle {
protected:
    string make;
    int year;
    float fuel;

public:
    // Constructor to initialize the vehicle's details
    Vehicle(string mk, int yr, float fl) : make(mk), year(yr), fuel(fl) {}

    // Method to refuel the vehicle
    void refuel(float amount) {
        fuel += amount;
        cout << "Vehicle refueled. Current fuel: " << fuel << " liters." << endl;
    }

    // Virtual method to display the vehicle's details
    virtual void display() {
        cout << "Make: " << make << endl;
        cout << "Year: " << year << endl;
        cout << "Fuel: " << fuel << " liters" << endl;
    }
};

// Derived Class: Car
class Car : public Vehicle {
private:
    int doors;

public:
    // Constructor to initialize car details along with vehicle details
    Car(string mk, int yr, float fl, int dr) : Vehicle(mk, yr, fl), doors(dr) {}

    // Override display method to show car-specific details
    void display() override {
        Vehicle::display();
        cout << "Doors: " << doors << endl;
    }

    // Method to open the car doors
    void openDoors() {
        cout << "Doors are opened." << endl;
    }
};

// Derived Class: Bike
class Bike : public Vehicle {
private:
    bool hasCarrier;

public:
    // Constructor to initialize bike details along with vehicle details
    Bike(string mk, int yr, float fl, bool carrier) : Vehicle(mk, yr, fl), hasCarrier(carrier) {}

    // Override display method to show bike-specific details
    void display() override {
        Vehicle::display();
        cout << "Has Carrier: " << (hasCarrier ? "Yes" : "No") << endl;
    }

    // Method to kick-start the bike
    void kickStart() {
        cout << "Bike kick-started." << endl;
    }
};

// Main function to demonstrate the vehicle system
int main() {
    // Creating a Car object
    Car car("Toyota", 2020, 50.0, 4);
    car.refuel(10.0);  // Refuel the car
    car.display();      // Display car details
    car.openDoors();    // Specific method for car

    cout << endl;

    // Creating a Bike object
    Bike bike("Yamaha", 2019, 15.0, true);
    bike.refuel(5.0);   // Refuel the bike
    bike.display();     // Display bike details
    bike.kickStart();   // Specific method for bike

    return 0;
}
