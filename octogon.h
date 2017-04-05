class Octogon
{
//initializing variables	
	private: 
	float length;

	public:	
//create default octogon
Octogon(){
	
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
		area = (2*(1+(sqrt(2)))*pow(length,2));
		return area;
		}
};