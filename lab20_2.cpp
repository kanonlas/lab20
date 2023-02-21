#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1, Rect *R2){

	double diff_x = min(R1->x+R1->w,R2->x+R2->w) - max(R1->x,R2->x);
	double diff_y = min(R1->y,R2->y)-max(R1->y-R1->h,R2->y-R2->h)  ;
	if (diff_x*diff_y < 0 ) return 0;
	else return diff_x*diff_y;


}
