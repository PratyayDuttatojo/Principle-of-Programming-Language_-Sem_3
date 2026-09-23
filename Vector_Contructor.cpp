#include<iostream>
#include<vector>
//#include<cmath>

using namespace std;

class vec{
	private:
		int d;// dimension of the vector
		vector<double> vals; // values in each dimension
	public:
		vec(){
			d=0;//In default constructor the dimension is  kept 0 
			cout<<"Creating a vector with dimension 0\n";
		}
		vec(vector<double> elems){
			d=(int)elems.size();//the dimension is here number of elements
			vals=elems;
			cout<<"Creating a vector with elements\n";
		}
		vec(vec &X){// Copy Constructor
			d=X.d;
		vals=X.vals;
		cout<<"Creating a vector with an old object\n";
		}
		void display(){
			int i;
			for(i=0;i<d;i++)
			     cout<<vals[i]<<" ";
			cout<<endl;
		}
		vec add(const vec &X){
			vec res;
			res.d=d;
			if(d==X.d){
				int i;
				for(i=0; i<d;i++)
				     res.vals.push_back(vals[i]+X.vals[i]);
			}
			else{
				cout<<"Dimension of the two vector do not match\n";
			}
			return res;
		}
};

int main(){
	vec X;
	vector<double>vals(4,0);// Initializing a vector with 4 elemts and values 0;
	vals[0]=0.1;
	vals[1]=2.1;
	vals[2]=1.2;
	vals[3]=3.1;
	vec Y(vals);
	Y.display();
	vec Z=Y;
	Z.display();
	
	
	vec a=Y.add(Z);
	a.display();
	
	return 0;
}
