#include<iostream>
extern "C"{
int main()
{
	std::cout<<"Initialized \n";
	return 0;
}
int multiply(float x, float y)
{
    return x*y;
}
}
