#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef TRUE
	#define TRUE 1
#endif
#ifndef FALSE
	#define FALSE 0
#endif

#define MAX 10

int main()
{
	int index = 0;

	double midpoint_x = 0;
	double midpoint_y = 0;
	double radius = 10;

	double x_y_points[2][MAX];

	for (index = 0; index < MAX; index++)
	{
		x_y_points[0][index] = index;
		x_y_points[1][index] = index;
	}



	return 1;
}

int distance_eq(double x1, double x2, double y1, double y2)
{
	double result = 0;

	result = sqrt( pow((x1-x2), 2) + pow((y1-y2), 2) );
	return result;
}

int distance_from_edge(double distance, double radius)
{	int result = 0;
	result = distance - radius;
	return result;
}

int is_in_bounds(double distance, double radius)
{
	if (distance < radius)
	{
		return 1;
	}else
	{
		return 0;
	}
	return 0;
}

void print_results()
{

}
