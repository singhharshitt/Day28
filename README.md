# Day28

<br>
<br>
<b>Ques 1. You are tasked with creating a simple vehicle system in C++ using object-oriented programming principles. Implement a base class Vehicle and two derived classes Car and Bike. Each vehicle can perform certain common actions, but they also have specific attributes and methods.</b>
<br>
<br>

Requirements:<br>

Base Class: Vehicle<br>
Attributes:<br>
string make: The manufacturer of the vehicle.<br>
int year: The year the vehicle was manufactured.<br>
float fuel: The amount of fuel left in the vehicle.<br>
Methods:<br>
void refuel(float amount): Increases the fuel by amount.<br>
void display(): A virtual method that displays the vehicle's details.<br>
Derived Class: Car (inherits from Vehicle)<br>
Attributes:<br>
int doors: Number of doors in the car.<br>
Methods:<br>
void display(): Override the display() method to show car-specific details, including the number of doors.<br>
void openDoors(): A method that prints "Doors are opened."<br>
Derived Class: Bike (inherits from Vehicle)<br>
Attributes:<br>
bool hasCarrier: Indicates whether the bike has a carrier.<br>
Methods:<br>
void display(): Override the display() method to show bike-specific details, including whether it has a carrier.<br>
void kickStart(): A method that prints "Bike kick-started."<br>
Main Functionality:<br>
Create objects of Car and Bike with relevant attributes.<br>
Refuel both vehicles and display their details.<br>
Call their specific methods (openDoors() for Car and kickStart() for Bike).<br>
