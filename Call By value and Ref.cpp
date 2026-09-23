#include<iostream>

//call by value
void swap_val(int a, int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("%d %d\n",a,b);//values will swap here
}

void swap_ref(int*a, int*b){
	int temp=*a;
	*a=*b;
	*b=temp;
	printf("%d %d\n",*a,*b);
	
}
int main(){
	int a=10,b=20;
	swap_val(a,b);
	swap_ref(&a,&b);
	printf("%d %d",a,b);//values will not swap here	
}

	
