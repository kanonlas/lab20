#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){

	double diff_x = min(R1.x+R1.w,R2.x+R2.w) - max(R1.x,R2.x);
	double diff_y = min(R1.y,R2.y)-max(R1.y-R1.h,R2.y-R2.h)  ;
	if (diff_x*diff_y < 0 ) return 0;
	else return diff_x*diff_y;
	
// 	double c,d,up,down,reh,rew;
// 	double e,f,left,right; 

//    e = R1.x + R1.w;
//    f = R2.x + R2.w;

//     if(R2.x < R1.x)right = R1.x;
//     if(R2.x > R1.x)right = R2.x;
// 	if(e < f)left = e;
// 	if(e > f)left = f;
//     rew = left- right;

// 	c = R1.y - R1.h;
// 	d = R2.y - R2.h;
	
// 	if(R2.y < R1.y)up = R2.y;
//     if(R2.y > R1.y)up = R1.y;
// 	if(c < d)down = d;
// 	if(c > d)down = c;
// 	reh = up - down;

//    if(reh <= 0 || rew <= 0){
// 	return 0;
//    }
// else{
// 	return reh*rew;
// }
}
int main(){
	Rect R1 = {-1,2,6.9,9.6};
Rect R2 = {0,0,1.2,2.5};	
cout << overlap(R1,R2);	
}





/*
}
	double max, min, xmax,xmin,ymax,ymin,wre,hre;

	if(R1.x > R2.x) {
		xmax = R1.x;
		xmin = R2.x;
		max = R1.x - R2.x;
		wre = R1.w - max; 
		}

	if(R1.x < R2.x) {
		xmax = R2.x;
		xmin = R1.x;
		max = R2.x - R1.x;
		wre = R2.w - max;
	}

	if(R1.y > R2.y){ 
		ymax = R1.y;
		ymin = R2.y;
		min = R1.y - R2.y;
		hre = R1.h - min;
		}
	if(R1.y < R2.y){
		ymax = R2.y;
		ymin = R1.y;
        min = R2.y - R1.y;
	    hre = R2.h - min;
	}
     
	return wre*hre ;


}*/

