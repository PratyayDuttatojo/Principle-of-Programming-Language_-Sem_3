#include<iostream>
using namespace std;
class complexNum{
	private:
		double real,imag;
		public:
			complexNum(){
				real=0.0;
				imag=0.0;
				cout<<"initialising a zero valued complex number\n";
			}
			complexNum(double re,double im){
				real=re;
				imag=im;
				cout<<"initialising with the two given inputs.\n";
			}
			void display(){
				cout<<real<<"+i"<<imag<<endl;
			}
			double getReal(){return real;
			}
			void setReal(double re){real=re;
			}
			double getimaginary(){return imag;
			}
			void setimaginary(double im){imag=im;
			}
			void add(complexNum num1,complexNum num2){
				real=num1.real+num2.real;
				imag=num1.imag +num2.imag;
			}
			complexNum add(complexNum c){
				complexNum ne;
				ne.setReal(real+c.getReal());
				ne.setimaginary(imag+c.getimaginary());
				return ne;
			}
			friend class B;
};
class B{
	public:
		void display(complexNum a){
			cout<<"The real part is" <<a.real<<"and the imginary part is"<<a.imag<<endl;
		}
};
int main(){
	complexNum num1(-1,-2);
	complexNum num2(10,2); 
	
	num1.display();
	num2.display();
	
	complexNum num3;
	//num3.setReal( num1.getReal() +num2.getReal());
	//num3.setimaginary(num1.getimaginary()+ num2.getimaginary());
	num3.add(num1,num2);
	num3.display();
	// complexNum num3 =num1.add(num2);
	return 0;		
}
