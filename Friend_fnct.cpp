//Given a square class with private data attribute "armlength", calculate "area" and "Circumference".
//Dsiplay these area and circumference with the help of 
//1. Friend function
//2. Friend class 

#include<iostream>

class square{
	float arm_length;
	public:
		square(){arm_length=0;}
		square(float l){arm_length=1;}
		//1.Friend Function
		friend void calculate(square s);
		//2.using friend class
		friend class calculate_c;
};
void calculate(square s){
	float area= s.arm_length * s.arm_length;
	float perimeter= 4* s.arm_length;
	std::cout<<"Area ="<<area<<std::endl;
	std::cout<<"Perimeter ="<<perimeter<<std::endl;
}

int main(){
	square s(10.0);
	calculate(s);
}


