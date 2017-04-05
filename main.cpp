#include <stdio.h>
#include <iostream>
#include <cstring>
#include <math.h>
#include "triangle.h"
#include "square.h"
#include "pentagon.h"
#include "hexagon.h"
#include "heptagon.h"
#include "octogon.h"

using namespace std;

int main()
{
	//variable to choose shape and length
	string shapeChar;
	float usrLength;
	//ask which shape to calculate
	cout<< "Which shape do you want to calculate?" << endl;
	cout<<"T-Eql. Triangle ; S- Square ; P- Pentagon ; Hx- Hexagon ; Hp- Heptagon ; O - Octogon"<<endl;
	cin >> shapeChar;
	
	//Ask length of sides
	cout<< "What is the length of your shape?"<<endl;
	cin >> usrLength;
	
	//create shape based on length
	if(shapeChar == "T" || shapeChar=="t"){
			Triangle tria1;
			tria1.setLength(usrLength);
			
			//print out final area
			cout<< "Triangle Area:"<<endl;			
			cout<< tria1.calculateArea() <<endl;			
		}
	else if (shapeChar == "S" || shapeChar=="s"){
			Square sqa1;
			sqa1.setLength(usrLength);

			//print out final area
			cout<< "Square Area:"<<endl;			
			cout<< sqa1.calculateArea() <<endl;			
		}
	else if (shapeChar == "P" || shapeChar=="p"){
			Pentagon pena1;
			pena1.setLength(usrLength);
			
			//print out final area
			cout<< "Pentagon Area:"<<endl;
			cout<< pena1.calculateArea() <<endl;			
		}
	else if (shapeChar == "Hx" || shapeChar=="hx" || shapeChar=="HX"){
			Hexagon hexa1;
			hexa1.setLength(usrLength);

			//print out final area
			cout<< "Hexagon Area:"<<endl;
			cout<< hexa1.calculateArea() <<endl;
		}
	else if (shapeChar == "Hp" || shapeChar=="hp" || shapeChar =="HP"){
			Heptagon hepa1;
			hepa1.setLength(usrLength);
			//print out final area
			cout<< "Heptagon Area:"<<endl;			
			cout<< hepa1.calculateArea() <<endl;			
		}
	else if (shapeChar == "O" || shapeChar=="o"){
			Octogon octa1;
			octa1.setLength(usrLength);
			//print out final area
			cout<< "Octagon Area:"<<endl;
			cout<< octa1.calculateArea() <<endl; 
		}	
	else
		{
			cout << "This is an invalid entry."<< endl;
		}
	
	//Calculate based on shape
	//Print Area of Shape
	return 0;
}
