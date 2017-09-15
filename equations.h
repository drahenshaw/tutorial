/*Programmer: David Henshaw
 *Class: CptS 121, Fall 2017, Leb Section 03
 *Programming Assignment: PA2
 *Date: September 11, 2017
 *Description: Header file for PA2 including both standard libraries and custom function declarations
 */

#include <stdio.h>
#include <math.h>

#define G 6.67E-11
#define PI 3.141592

//Custom function declarations for use in the eight different equations

double calculate_newtons_2nd_law(double mass, double acceleration);
double calculate_volume_cylinder(double radius, double height);
char perform_character_encoding(char plaintext_character);
double calculate_gravity_force(double mass1, double mass2, double distance);
double calculate_tangent(double theta);
double calculate_parallel_resistance(int r1, int r2, int r3);
double calculate_distance_between_2pts(double x1, double y1, double x2, double y2);
double calculate_general_equation(int a, double x, double z);