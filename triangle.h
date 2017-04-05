#include <cmath>

class Triangle
{
//initializing variables	
	private: 
	float length;

public:	
//create default triangle
Triangle(){
	
	}
//accessor and mutator methods
	float getLength(){
		return length;
	}
	
	float setLength(float newLength){
		length = newLength;
		return length;
	}
	float calculateArea(){
		float area = 0;
		//area formula
		area = (((sqrt(3))/4)*pow(length,2));
		return area;
		}
};