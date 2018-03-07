#include<iostream>
#include<cmath>
using namespace std;

#define CLS	(cout<< "\033[2J")
#define LOCATE(z,s) (cout<<"\033["<<(z)<<';'<<(s)<<'H')
#define PI 3.1415926536 
#define START 0.0
#define END (2.0 * PI)
#define PNT 64
#define STEP ((END-START)/PNT)
#define xA 14
#define yA 10

int main(){
	
	int row,column,row2;

	CLS;
	LOCATE(2,25);
	cout<<"---------The Sin and Cos Funtion---------";

	//draw the co-ordinates systems
	LOCATE(xA,1);
	for (column = 1;column <78 ;++column){
		cout<<((column - yA) % 8 ? '-':'-');


	  }
	  cout<<'\020';
	  LOCATE(xA-1, yA+64);cout<<"2PI x";

	  for (row = 5;row <24;++row){
	  	LOCATE(row, yA);cout<<'|';
	  }
	  LOCATE(4, yA);cout<<"| sin(x)";
	  LOCATE(xA-8, yA+1);cout<<"1";
	  LOCATE(xA+8,yA+1);cout<<"-1";

	  //displaying the sine fuction
	  int begpt=yA,
	  	  endpt=begpt + PNT;
	 

	  for (column = begpt;column<=endpt;++column){
	  	double x = (column-yA) * STEP;
	  	row = (int)(xA-8*sin(x)+0.5);
	  	row2 = (int)(xA-8*cos(x)+0.5);
	  	LOCATE(row,column);cout<<sin(x);
	  	LOCATE(row2,column);cout<<cos(x);

	  }
	  LOCATE(25,1);

	  cout<<"Other Tests"<<endl;
	  cout<<'\020';
	  return 0;
	}