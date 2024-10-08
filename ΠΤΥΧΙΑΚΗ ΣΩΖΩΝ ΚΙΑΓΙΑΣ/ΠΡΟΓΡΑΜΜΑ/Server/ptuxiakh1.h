#include<graphics.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <fstream>
#include <math.h>
#include <string>
#include <dos.h>
//orizw global metavlhtes
int i=0;
int i2=6;
int j=0;
int j2=6;
int x=0;
int x2=180;
int movex[12] = {400,470,530,550,530,470,400,330,270,250,270,330};
int movey[12] = {200,215,260,335,410,460,500,460,410,335,260,215};
//dhmiourgia vraxiona
void rectangleRotate(int cx ,int cy ,int w, int h,int angle=0)
{
	double theta = (double)(angle%180)*M_PI/180.0;
	int dx = w/2;
	int dy = h/2;
	int point[8] = {
	(int)(-dx*cos(theta) - dy*sin(theta)+cx) ,
	(int)(-dx*sin(theta) + dy*cos(theta)+cy),
	(int)(dx*cos(theta) - dy*sin(theta)+cx),
	(int)(dx*sin(theta) + dy*cos(theta)+cy),
	(int)(dx*cos(theta) + dy*sin(theta)+cx),
	(int)(dx*sin(theta) - dy*cos(theta)+cy),
	(int)(-dx*cos(theta) + dy*sin(theta)+cx),
	(int)(-dx*sin(theta) - dy*cos(theta)+cy)
	
	};
	
	for (int i=0; i<8; i+=2)
	   line(point[i],point[i+1],point[(i+2)%8],point[(i+3)%8]);
}

//reset
	void reset(){
		cleardevice();
		i=0;
		i2=6;
		j=0;
		j2=6;
		x=0;
		x2=180;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
	}
//move right gia 1o vraxiona
	void moveRight1(){
		cleardevice();
		if (i==11 && j==11 && x==330){
        i=0;
        j=0;
		x=0;}
        else{
		x=x+30;
		i=i+1;
		j=j+1;}
	   rectangleRotate(movex[i],movey[j],30,300,x);
	   rectangleRotate(movex[i2],movey[j2],30,300,x2);
	}
	
//move right gia 2o vraxiona
	void moveRight2(){
		cleardevice();
		if (x2==0 && i2==0 && j2==0){
			x2=330;
			i2=11;
			j2=11;
		}
		else{
		x2=x2-30;
		i2=i2-1;
		j2=j2-1;}
	     rectangleRotate(movex[i],movey[j],30,300,x);
	     rectangleRotate(movex[i2],movey[j2],30,300,x2);
}

//move left gia 1o vraxiona
	 void moveLeft1(){
		cleardevice();
		if (x==0 && i==0 && j==0){
			x=330;
			i=11;
			j=11;
		}
		else{
		x=x-30;
		i=i-1;
		j=j-1;}
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
}

//move left gia 2o vraxiona
	void moveLeft2(){
		cleardevice();
		if (i2==11 && j2==11 && x2==330){
          i2=0;
          j2=0;
		x2=0;}
        else{
		x2=x2+30;
		i2=i2+1;
		j2=j2+1;}
	     rectangleRotate(movex[i],movey[j],30,300,x);
	     rectangleRotate(movex[i2],movey[j2],30,300,x2);
}

//move up gia 1o vraxiona
	void moveUp1(){
		cleardevice();
		switch(i){
		case 0:{	
		i=0;
		j=0;
		x=0;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
		break;}
		case 1:{
		i=0;
		j=0;
		x=0;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);	
		break;}
		case 2:{
		i=0;
		j=0;
		x=0;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);	
			break;}
		case 3:{
			i=0;
			j=0;
			x=0;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 4:{
			i=10;
			j=10;
			x=300;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 5:{
			i=11;
			j=11;
			x=330;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 6:{
			i=0;
			j=0;
			x=0;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 7:{
			i=1;
			j=1;
			x=30;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 8:{
			i=2;
			j=2;
			x=60;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 9:{
			i=0;
			j=0;
			x=0;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 10:{
			i=0;
			j=0;
			x=0;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 11:{
			i=0;
			j=0;
			x=0;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
}
}

//move up gia 2o vraxiona
	void moveUp2(){
		cleardevice();
	switch(i2){
		case 0:{	
		i2=0;
		j2=0;
		x2=0;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
		break;}
		case 1:{
		i2=0;
		j2=0;
		x2=0;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);	
		break;}
		case 2:{
		i2=0;
		j2=0;
		x2=0;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);	
			break;}
		case 3:{
			i2=0;
			j2=0;
			x2=0;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 4:{
			i2=10;
			j2=10;
			x2=300;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 5:{
			i2=11;
			j2=11;
			x2=330;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 6:{
			i2=0;
			j2=0;
			x2=0;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 7:{
			i2=1;
			j2=1;
			x2=30;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 8:{
			i2=2;
			j2=2;
			x2=60;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 9:{
			i2=0;
			j2=0;
			x2=0;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 10:{
			i2=0;
			j2=0;
			x2=0;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 11:{
			i2=0;
			j2=0;
			x2=0;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		
}	
}

//move down gia 1o vraxiona
	void moveDown1(){
		cleardevice();
	switch(i){
		case 0:{	
		i=6;
		j=6;
		x=180;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
		break;}
		case 1:{
		i=7;
		j=7;
		x=210;
		rectangleRotate(movex[i],movey[j],30,300,x);	
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
		break;}
		case 2:{
		i=8;
		j=8;
		x=240;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);	
			break;}
		case 3:{
			i=6;
			j=6;
			x=180;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 4:{
			i=6;
			j=6;
			x=180;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 5:{
			i=6;
			j=6;
			x=180;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 6:{
			i=6;
			j=6;
			x=180;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 7:{
			i=6;
			j=6;
			x=180;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 8:{
			i=6;
			j=6;
			x=180;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 9:{
			i=6;
			j=6;
			x=180;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 10:{
			i=4;
			j=4;
			x=120;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 11:{
			i=5;
			j=5;
			x=150;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
}			
}

//move down gia 2o vraxiona
	moveDown2(){
		cleardevice();
	switch(i2){
		case 0:{	
		i2=6;
		j2=6;
		x2=180;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
		break;}
		case 1:{
		i2=7;
		j2=7;
		x2=210;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);	
		break;}
		case 2:{
		i2=8;
		j2=8;
		x2=240;
		rectangleRotate(movex[i],movey[j],30,300,x);	
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 3:{
			i2=6;
			j2=6;
			x2=180;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 4:{
			i2=6;
			j2=6;
			x2=180;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 5:{
			i2=6;
			j2=6;
			x2=180;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 6:{
			i2=6;
			j2=6;
			x2=180;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 7:{
			i2=6;
			j2=6;
			x2=180;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 8:{
			i2=6;
			j2=6;
			x2=180;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 9:{
			i2=6;
			j2=6;
			x2=180;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 10:{
			i2=4;
			j2=4;
			x2=120;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 11:{
			i2=5;
			j2=5;
			x2=150;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
}			
}

//rotate 90 right gia 1o vraxiona
	void rotate90right1(){
		cleardevice();
		switch(i){
		case 0:{	
		i=3;
		j=3;
		x=90;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
		break;}
		case 1:{
		i=4;
		j=4;
		x=120;
		rectangleRotate(movex[i],movey[j],30,300,x);	
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
		break;}
		case 2:{
		i=5;
		j=5;
		x=150;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);	
			break;}
		case 3:{
			i=6;
			j=6;
			x=180;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 4:{
			i=7;
			j=7;
			x=210;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 5:{
			i=8;
			j=8;
			x=240;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 6:{
			i=9;
			j=9;
			x=270;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 7:{
			i=10;
			j=10;
			x=300;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 8:{
			i=11;
			j=11;
			x=330;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 9:{
			i=0;
			j=0;
			x=0;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 10:{
			i=1;
			j=1;
			x=30;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 11:{
			i=2;
			j=2;
			x=60;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
}
}

//rotate 90 right gia 2o vraxiona
	void rotate90right2(){
		cleardevice();
		switch(i2){
		case 0:{	
		i2=9;
		j2=9;
		x2=270;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
		break;}
		case 1:{
		i2=10;
		j2=10;
		x2=300;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);	
		break;}
		case 2:{
		i2=11;
		j2=11;
		x2=330;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);	
			break;}
		case 3:{
			i2=0;
			j2=0;
			x2=0;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 4:{
			i2=1;
			j2=1;
			x2=30;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 5:{
			i2=2;
			j2=2;
			x2=60;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 6:{
			i2=3;
			j2=3;
			x2=90;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 7:{
			i2=4;
			j2=4;
			x2=120;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 8:{
			i2=5;
			j2=5;
			x2=150;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 9:{
			i2=6;
			j2=6;
			x2=180;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 10:{
			i2=7;
			j2=7;
			x2=210;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 11:{
			i2=8;
			j2=8;
			x2=240;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
}
}
	
//rotate 90 left gia 1o vraxiona
	void rotate90left1(){
		cleardevice();
		switch(i){
		case 0:{	
		i=9;
		j=9;
		x=270;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
		break;}
		case 1:{
		i=10;
		j=10;
		x=300;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);	
		break;}
		case 2:{
		i=11;
		j=11;
		x=330;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);	
			break;}
		case 3:{
			i=0;
			j=0;
			x=0;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 4:{
			i=1;
			j=1;
			x=30;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 5:{
			i=2;
			j=2;
			x=60;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 6:{
			i=3;
			j=3;
			x=90;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 7:{
			i=4;
			j=4;
			x=120;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 8:{
			i=5;
			j=5;
			x=150;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 9:{
			i=6;
			j=6;
			x=180;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 10:{
			i=7;
			j=7;
			x=210;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 11:{
			i=8;
			j=8;
			x=240;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
}
}

//rotate 90 left gia 2o vraxiona
	void rotate90left2(){
		cleardevice();
		switch(i2){
		case 0:{	
		i2=3;
		j2=3;
		x2=90;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
		break;}
		case 1:{
		i2=4;
		j2=4;
		x2=120;
		rectangleRotate(movex[i],movey[j],30,300,x);	
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
		break;}
		case 2:{
		i2=5;
		j2=5;
		x2=150;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);	
			break;}
		case 3:{
			i2=6;
			j2=6;
			x2=180;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 4:{
			i2=7;
			j2=7;
			x2=210;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 5:{
			i2=8;
			j2=8;
			x2=240;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 6:{
			i2=9;
			j2=9;
			x2=270;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 7:{
			i2=10;
			j2=10;
			x2=300;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 8:{
			i2=11;
			j2=11;
			x2=330;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 9:{
			i2=0;
			j2=0;
			x2=0;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 10:{
			i2=1;
			j2=1;
			x2=30;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 11:{
			i2=2;
			j2=2;
			x2=60;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
}
}

//rotate 180 gia 1o vraxiona
	void rotate180first(){
		cleardevice();
		switch(i){
		case 0:{	
		i=6;
		j=6;
		x=180;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
		break;}
		case 1:{
		i=7;
		j=7;
		x=210;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);	
		break;}
		case 2:{
		i=8;
		j=8;
		x=240;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);	
			break;}
		case 3:{
			i=9;
			j=9;
			x=270;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 4:{
			i=10;
			j=10;
			x=300;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 5:{
			i=11;
			j=11;
			x=330;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 6:{
			i=0;
			j=0;
			x=0;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 7:{
			i=1;
			j=1;
			x=30;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 8:{
			i=2;
			j=2;
			x=60;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 9:{
			i=3;
			j=3;
			x=90;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 10:{
			i=4;
			j=4;
			x=120;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 11:{
			i=5;
			j=5;
			x=150;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
}
}

//rotate 180 gia 2o vraxiona
	rotate180second(){
		cleardevice();
		switch(i2){
		case 0:{	
		i2=6;
		j2=6;
		x2=180;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
		break;}
		case 1:{
		i2=7;
		j2=7;
		x2=210;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);	
		break;}
		case 2:{
		i2=8;
		j2=8;
		x2=240;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);	
			break;}
		case 3:{
			i2=9;
			j2=9;
			x2=270;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 4:{
			i2=10;
			j2=10;
			x2=300;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 5:{
			i2=11;
			j2=11;
			x2=330;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 6:{
			i2=0;
			j2=0;
			x2=0;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 7:{
			i2=1;
			j2=1;
			x2=30;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 8:{
			i2=2;
			j2=2;
			x2=60;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 9:{
			i2=3;
			j2=3;
			x2=90;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 10:{
			i2=4;
			j2=4;
			x2=120;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
		case 11:{
			i2=5;
			j2=5;
			x2=150;
		rectangleRotate(movex[i],movey[j],30,300,x);
		rectangleRotate(movex[i2],movey[j2],30,300,x2);
			break;}
}
}

//exit
	void exit(){
		closegraph();
		exit(0);
}

	

