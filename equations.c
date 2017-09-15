/*Programmer: David Henshaw
*Class: CptS 121, Fall 2017, Leb Section 03
*Programming Assignment: PA2
*Date: September 11, 2017
*Description: equations.c file contains the function descriptions for use in doing the calculations for eight equations.
*Each function description begins with local variable declaration, the calculation for each equation, and then returns the value back to main.c
*/

#include "equations.h"

// 1 ) Newton's Second Law
double calculate_newtons_2nd_law(double mass, double acceleration)
{
	double force = 0.0;					//local variable declaration
	force = mass * acceleration;		//calculation using inputs from the user from main.c
	return force;						//returns the variable of interest back to main.c
}										//The rest of the functions in this file follow a similar format

// 2 ) Cylindric Volume
double calculate_volume_cylinder(double radius, double height)
{
	double volume_cylinder = 0.0;
	volume_cylinder = PI  * pow(radius, 2) * height;
	return volume_cylinder;
}

// 3) Character Encoding
char perform_character_encoding(char plaintext_character)
{
	char encoded_character = '/0';	//null character
	encoded_character = 10 + (plaintext_character - 'a') + 'A';
	return encoded_character;
}

// 4 ) Gravitational Force 
double calculate_gravity_force(double mass1, double mass2, double distance)
{
	double force = 0.0;
	force = G * mass1 * mass2 / (pow(distance, 2));
	return force;
}

// 5 ) Tangent Eqation
double calculate_tangent(double theta)
{
	double tangent = 0.0;
	tangent = sin(theta) / cos(theta);
	return tangent;
}

// 6 ) Parallel Resistance
double calculate_parallel_resistance(int r1, int r2, int r3)
{
	double parallel_resistance = 0.0;
	parallel_resistance = 1 / (((double)1 / r1) + ((double)1 / r2) + ((double)1 / r3)); //typecast double required for integer division
	return parallel_resistance;
}

// 7 ) Distance Between Two Points
double calculate_distance_between_2pts(double x1, double y1, double x2, double y2)
{
	double distance = 0.0;
	distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	return distance;
}

// 8 ) General Equation
double calculate_general_equation(int a, double x, double z)
{
	double general_equation = 0.0;
	general_equation = (double)(7 / 5) * x / a + z - a / (a % 2) + PI; //typecast double required for precision
	return general_equation;
}


