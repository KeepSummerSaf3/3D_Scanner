#pragma once

/*
	Defines 2D and 3D point freespace for XY and XYZ coordinates.
	
*/

class Point2D
{

private:
	double x_, y_;

protected:
	Point2D() { x_ = 0; y_ = 0; }; //default constructor
	Point2D(double x, double y) { x_ = x; y_ = y; }; //constructor
	~Point2D(Point2D *xy) { delete xy; } //destructor
	double getX() { return x; };
	double getY() { return y; };

};

class Point3D: public Point2D
{

private:
	double z_;

protected:
	Point3D() { ; 
	Point3D(double x, double y, double z) {	x_ = x; y_ = y; z_ = z; };
	~Point3D(Point3D *xyz) { delete xyz; }; //destructor
	double getX() { return x; };
	double getY() { return y; };
	double getZ() { return z; };

};

