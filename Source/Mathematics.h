#pragma once

#ifdef
#include "Point.h"
#include <math.h>
#endif

/*
	Class to provide easy access to complex geometrical functions.

*/


class Mathematics : public Point3D
{

private:

	//M_PI defined as 3.14159265358979323846




public:

	double dist(Point3D *xyz1, Point3D *xyz2); //given 2 points this function returns distance between 
	Point3D currpos_add(Point3D *xyz1); //Add the new point to the old point to calculate the new position
	Point3D currpos_sub(Point3D *xyz1); //Subtract the new point from the old point to calculate the new position

	//Linear movements
	double move_xyz(Point3D *xyz1, Point3D *xyz2, char xyz); //given 2 points and the component (x, y, z), calculates movement distance to the new position with respect to that component value. Returns the resultant component distance.
	Point3D move_xyz(Point3D *xyz1, double dist, char xyz); //given a point, distance and the component (x, y, z), calculates movement distance to the new position with threspect to that component value. Returns the final position Point3D.
	

	//Circular movements
	double arcLength(Point3D *xyz1, Point3D *xyz2); //returns arc length between 2 points
	

};