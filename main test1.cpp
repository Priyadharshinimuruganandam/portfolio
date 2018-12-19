#include<iostream>
using namespace std;

       class Sensor
       {
              public:
              int a,b;
       };
// Sub class inheriting from Base Class(Sensor)
       class Temperaturesensor : public Sensor
       {
              public:
             int a=20;

       };


// Sub class inheriting from Base Class(Sensor)
       class Humiditysensor : public Sensor
       {
              public:
              int b=40;


       };

       class IoT_Queue
       {
        public:
        int a,b;
        public:
           void printtempvalue()
            {
            Temperaturesensor temp;
            for(a=0;a<31;a++)
            {
            cout<<"\ntemperature_sensor readings: "<< a<<"\n";
            }
            cout<<"\n";
            }
           void printhumvalue()
            {
            Humiditysensor hum;
            for(b=0;b<51;b++)
            {
            cout << "\nHumidity_sensor readings: " << b<<"\n";
            }
            cout<<"\n";
            }
       };
//main function
       int main()
    {
          Temperaturesensor temp;
		  Humiditysensor hum;
          IoT_Queue obj;
          temp.a;
		  hum.b;
          obj.printtempvalue();
          obj.printhumvalue();
		  cout<< "\n Temperature sensor : "<< temp.a;
		  cout<< "\n Humidity sensor : "<< hum.b;
        return 0;
    }
