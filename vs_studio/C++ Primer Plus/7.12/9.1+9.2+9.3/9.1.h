#ifndef COORDIN_H_
//������ǰû��ʹ��Ԥ����������ָ��#define��������
//COORDINHʱ���Ŵ���#ifndef��#endif֮������
//���ڳ���#pragma once
#define COORDIN_H_

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

//����ԭ��
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif
