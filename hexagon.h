class Hexagon
{
//initializing variables	
	private: 
	float length;

	public:	
//create default hexagon
Hexagon(){
	
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
		area =(((3* sqrt(3))/2)*(pow(length, 2)));
		return area;
		}
};