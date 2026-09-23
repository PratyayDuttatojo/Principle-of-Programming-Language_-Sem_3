#include <iostream>
using namespace std;
class student{
	public:
		string name;
		int roll;
};
int main(){
	std: cout << "I am Pratyay Dutta" << std::endl;
	student s1;
	s1.name="Pratyay Dutta";
	s1.roll=187;
	std:: cout<<"New Student is:"<<s1.name<<"\twith roll number"<<s1.roll << endl;
	return 0;
}
