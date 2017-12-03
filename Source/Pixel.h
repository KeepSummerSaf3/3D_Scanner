#pragma once


#ifdef
#include <vector>

#endif

/*	Pixel bits

*/


class Pixel : public Color
{

private:

	//RGB Colors
	int red_;
	int green_;
	int blue_;
	int alpha_;

	//YUV Colors
	int luma_yellow_;
	int chroma_u_;
	int chroma_v_;

	//YCbCr Colors
	int luminance_y_;
	int chroma_blue_;
	int chroma_red_;

public:

	Pixel() {
		red_ = 0;
		green_ = 0;
		blue_ = 0;
		alpha_ = 0;
	};
	Pixel(int r, int g, int b, int a);
	Pixel(int y, int u, int v);
	Pixel(int y
		~Pixel(Pixel *pxl) { delete pxl; }


	typedef Color
		Pixel YUVtoRGB(Pixel *yuv); //converts a pixels colors to 
	Pixel RGBtoYUV(Pixel *RGB);

};

Pixel(int r, int g, int b, int a)
{
	red_ = r;
	green_ = g;
	blue_ = b;
	alpha_ = a;
};


Pixel YUVtoRGB(Pixel *yuv)
{
	yuv->red_ =
		yuv->green_ =
		blue->blue_ =

};

Pixel RGBtoYUV(Pixel *RGB)
{
	RGB->y = toYUV->red
};



/*
Color class for Camera


*/



class Color
{

private:





}

Color::Color() {} //default Constructor
{

}

Color::~Color(Color *color) {} // Destructor
{
	delete color;
}

