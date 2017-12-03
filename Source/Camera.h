#pragma once

#ifndef
#include <vector>
#include <Scanner.h>
#include "Coords.h"
#include "Photo.h"
#endif

class Resolution {

private:
	int XRes_;
	int YRes_;

public:

	Resolution()
	{
		XRes_ = 2560;
		YRes_ = 2160;
	}
	Resolution(int XRes, int YRes)
	{
		XRes_ = XRes;
		YRes_ = YRes;
	}
	~Resolution(Resolution *res)
	{
		delete res;
	}


};


class Camera {


private:

	//Resolution, Focus Power and Shutterspeed
	Resolution camera_res;  //defines the resolution of the Camera
	double focus_power;
	double shutterspeed; //defines the shutter speed of the camera lens

	//Aperature, and ISO 
	vector <Coords> aperture;  //defines the area over which light can enter 
	int ISO_Level; //standard ISO levels of 100, 200, 400, 800, 1600,
	
	//Datagram of camera information 
	vector <Pixels> frame;

	//Zoom level
	int zoom_; //zoom level of camera 

	//Movement of Camera
	Coords position1_; //usually defined as start position xyz
	Coords position2_; //usually defined as end position xyz 
	double angle1; //usually defined as the current angle or start angle
	double angle2; //usually defined as the goto angle or stop angle
	double rate_sps; //rate in steps per second
	double rate_rps; //rate in radians per second

public:

	Camera();
	~Camera();
	
	Photo capture_single_image(); //capture just a single image
	vector <Photo> capture_multiple_frames(int num_of_images);  //capture a series of images (if variable frame rate



	//Camera Movement (prior to taking picture)
	void pan(Coord *stop_pos); //move the camera (slide along axis)
	void rotate(double stop_angle); //rotate the camera to specified angle using the previously defined angle as a starting point
	void zoom(double zoom); //specify zoom level

	//Camera Movement (linear movement for timelapse)
	void pan_tl(Coord *start_pos, Coord *stop_pos, double sps_rate); //pan the camera as a timelapse (provide rate) 
	void rotate_tl(double stop_angle, double angular_accel); //rotate the camera as a timelapse given stop angle and angular acceleration
	void rotate_tl(double start_angle, double stop_angle, double angular_accel); //rotate the camera as a timelapse given 2 angles and angular acceleration

};

Camera::Camera()
{
	focus_power = 0;
	frame_rate = 29.95;  

}

