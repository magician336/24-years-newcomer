#ifndef COORDIN_H_
#define COORDIN_H_
//存放结构原型和函数原型
struct polar
{
	double distance;
	double angle;
};

struct rect
{
	double x;
	double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif