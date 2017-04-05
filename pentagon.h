class Pentagon
{
//initializing variables	
	private: 
	float length;

	public:	
//create default pentagon
Pentagon(){
	
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
		float area= 0;
		//area formula
		area = ((1/4)*sqrt(5*(5+(2*sqrt(5))))* pow(length,2));
		return area;
		}
};