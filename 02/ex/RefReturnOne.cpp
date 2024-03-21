#include <iostream>
#include <stdio.h>
using namespace std;

int & RefRetFuncOne(int &ref)
{
	ref++;
	return ref;
}

int main(void)
{
	int num1=1;
	double num2=RefRetFuncOne(num1);

	num1++;
	num2++;
	cout<<"num1: "<<num1<<endl;
	printf("num2: %f\n", num2);
	return 0;
}