#include <iostream>



//Volume of a cube
double volume(double size)
{
	return size * size * size;
}

//Volumen of a cylinder
double volume(double r, double h)
{
	const static double pi = 3.1415927;
	return pow(r,2) * h * pi;
}

//Volumen of a cuboid
double volume(double x, double y, double z)
{
	return x*y*z;
}


int main()
{
	std::cout<<"The volume of a cube is\t\t" 
		<< volume(2);

	std::cout << "\nThe volume of a cylinder is\t"
		<< volume(3, 5);

	std::cout << "\nThe volume of a cuboid is\t"
		<< volume(2,5,4);

	return 0;
}