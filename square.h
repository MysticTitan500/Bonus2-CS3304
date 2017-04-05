class Square
{
//initializing variables	
	private: 
	float length;

	public:	
//create default square
Square(){
	
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
		area = pow(length,2);
		return area;
		}
};