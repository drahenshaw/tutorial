/*Programmer: David Henshaw
*Class: CptS 121, Fall 2017, Leb Section 03
*Programming Assignment: PA2
*Date: September 11, 2017
*Description: Main file to drive prompts for user input and printing output of eight equations.
*Prompts the user for which values to use in the equation, and uses custom functions to solve for the calculations.
*/

#include "equations.h"

int main(void)
{
	char plaintext_character = '/0', encoded_character = '/0';
	int R1 = 0, R2 = 0, R3 = 0, a = 0;
	double force = 0, mass = 0, acceleration = 0, radius = 0, height = 0, volume_cylinder = 0, mass1 = 0, mass2 = 0, distance = 0, tan_theta = 0, theta = 0, parallel_resistance = 0, x = 0, x1 = 0, x2 = 0, y = 0, y1 = 0, y2 = 0, z = 0;

	// 1) Newton's Second Law
	printf("Please enter the mass and acceleration (floating-point values) for use in Newton's Second Law: ");		//User prompt for variables needed
	scanf("%lf %lf", &mass, &acceleration);																			//Saving of variable values in memory
	force = calculate_newtons_2nd_law(mass, acceleration);															//Calls first custom defined function passing in variables given by the user
	printf("Newton's Second Law: Force = Mass * Acceleration = %lf * %lf = %.2lf\n", mass, acceleration, force);	//%.2lf prints the output as a floating-point rounded to the hundreths place
	printf("\n");																									//The rest of the equations follow the same format: prompt -> save in memory -> call function to calculate output -> print result

	// 2) Cylindrical Volume Equation
	printf("Please enter radius and height (floating-point values) for use in cylindrical volume equation: ");
	scanf("%lf %lf", &radius, &height);
	volume_cylinder = calculate_volume_cylinder(radius, height);
	printf("Volume of the cylinder: Volume_Cylinder = PI * Radius^2 * Height = %lf * %lf^2 * %lf = %.2lf\n", PI, radius, height, volume_cylinder);
	printf("\n");

	// 3 ) Character Encoding																											   
	printf("Please enter a plaintext character for ASCII encoding: ");
	scanf(" %c", &plaintext_character);
	encoded_character = perform_character_encoding(plaintext_character);
	printf("Encoded character = 10 + (plaintext character - 'a' ) + 'A' = 10 + ( '%c' - 'a' ) + 'A' = %c\n", plaintext_character, encoded_character);
	printf("\n");

	// 4 ) Gravity
	printf("Please enter two mass values (floating-point) and a distance value (floating-point) to calculate gravitation force: ");
	scanf("%lf %lf %lf", &mass1, &mass2, &distance);
	force = calculate_gravity_force(mass1, mass2, distance);
	printf("Gravitational Force = G * Mass 1 * Mass 2 / Distance^2 = %.13lf * %lf * %lf / %lf^2 = %.2lf\n", G, mass1, mass2, distance, force);	
	printf("\n");

	// 5 ) Tangent
	printf("Please enter an angle theta (floating-point) to solve for the tangent: ");
	scanf("%lf", &theta);
	tan_theta = calculate_tangent(theta);
	printf("Tangent (Theta) = Sin (Theta) / Cos (Theta) = Sin (%lf) / Cos (%lf) = %.2lf\n", theta, theta, tan_theta);
	printf("\n");

	// 6 ) Total Parallel Resistance
	printf("Please enter three resistance values (integers) to calculate the total parallel resistance: ");
	scanf("%d %d %d", &R1, &R2, &R3);
	parallel_resistance = calculate_parallel_resistance(R1, R2, R3);
	printf("Total Parallel Resistance: Parallel Resistance = 1 / (1 / R1 + 1 / R2 + 1 / R3) = 1 / (1 / %d + 1 / %d + 1 / %d) = %.2lf\n", R1, R2, R3, parallel_resistance);
	printf("\n");

	// 7 ) Distance Between Two Points
	printf("Please enter two (x,y) coordinate pairs (floating-point) to solve for the distance between two points: ");
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	distance = calculate_distance_between_2pts(x1, y1, x2, y2);
	printf("Distance between two points: Distance = Square Root of (X1 - X2)^2 + (Y1 - Y2)^2 = Square Root of (%lf - %lf)^2 + (%lf - %lf)^2 = %.2lf\n", x1, x2, y1, y2, distance);	//pow function require math.h library
	printf("\n");

	// 8 ) General Equation
	printf("Please enter varaibles a (integer), x and z (floating-points) to solve for y in the general equation: ");
	scanf("%d %lf %lf", &a, &x, &z);
	y = calculate_general_equation(a, x, z);
	printf("General Equation: y = (7/5) * x / a + z - a / (a %% 2) + PI = (7/5) * %lf / %d + %lf - %d / (%d %% 2) + %lf = %.2lf\n", x, a, z, a, a, PI, y);	// double %% required for the % to print; even numbers cause modulus part of equation to divide by zero
	printf("\n");
		
	return 0;
}