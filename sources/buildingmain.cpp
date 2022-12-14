#include <iostream>
#include<fstream>
#include "campus.h"
#include "buildingmain.h"
using namespace std;


BuildingMain::BuildingMain()
{

}


void BuildingMain::showLocations()
{
    cout<< "The main campus's location is at: "<< endl;
      cout<< "199 Chambers St, New York, NY 10007"<<endl;
      ifstream infil;

        string ins;
        try {
            infil.open("C://Users//BeastPV//Documents//FinalProject//mainbuilding.txt");
            if(!infil.is_open()){
            throw "not fidning ";

            }
            while(!infil.eof()){
            getline(infil,ins);

            cout<<ins<<"\n";

           }

        } catch (...) {
            cout<< "not found"<<endl;
        }





      infil.close();
}
