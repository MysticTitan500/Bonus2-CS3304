#include <cmath>
class Heptagon
{
//initializing variables	
	private: 
	float length;

	public:	
//create default heptagon
Heptagon(){
	
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
		area = (((7/4)*(pow(length,2)))*2.077);
		return area;
		}
};