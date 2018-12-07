#include<iostream>
#include<conio.h>
using namespace std;

       class Sensor //Sensor class
       {
              public:
              int a,b;
       };
// Sub class inheriting from Base Class(Sensor)
       class Temperaturesensor : virtual public Sensor
       {
              public:
              int a;
       };


// Sub class inheriting from Base Class(Sensor)
       class Humiditysensor : virtual public Sensor
       {
              public:
              int b;
       };

//main function
       int main()
       {

		  Temperaturesensor temp;
		  Humiditysensor hum;

		  temp.a = 20;
		  hum.b = 40;

		  cout<< "\n Temperature sensor : "<< temp.a;
		  cout<< "\n Humidity sensor : "<< hum.b;
        return 0;
	   }

