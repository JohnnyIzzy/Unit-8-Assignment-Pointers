#include <iostream>
using namespace std;

struct Car
{
   string make;
   string model;
   int year;
   string color;
};

void updateColor(Car *car);

int main() {

   // create 3 car objects
   Car car1, car2, car3;
   // initialize some of the fields 
   car1.make = "Chevrolet";
   car1.model = "Impala";
   car1.year = 2020;

   car2.make = "Jeep";
   car2.model = "Grand Cherokee";
   car2.year = 2009;

   car3.make = "Nissan";
   car3.model = "Sentra";
   car3.year = 2018;

   // call function to update car's color
   updateColor(&car1);
   updateColor(&car2);
   updateColor(&car3);

   // output the details on the cars including color
   cout << "\nCar1:\nMake: " << car1.make << " \nModel: " << car1.model << " \nYear: " << car1.year << " \nColor: " << car1.color << '\n' << '\n';
   cout << "Car2: \nMake: " << car2.make << " \nModel: " << car2.model << " \nYear: " << car2.year << " \nColor: " << car2.color << '\n' << '\n';
   cout << "Car3: \nMake: " << car3.make << " \nModel: " << car3.model << " \nYear: " << car3.year << " \nColor: " << car3.color << '\n' << '\n';

   return 0;
}

// function to update the color of the Car
void updateColor(Car *car)
{
   // if year if after 2010 update the color to GREEN
   if(car->year > 2010)
       car->color = "GREEN";
   else // if year is 2010 or before update the color to RED
       car->color = "RED";
}