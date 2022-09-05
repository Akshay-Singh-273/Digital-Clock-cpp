//digital clock
#include<iostream>
#include<func.h>
#include<ctime>
#include<conio.h>
using namespace std;

int hour_Horizontal_Padding = 20;
int minut_Horizontal_Padding = 40;
int second_Horizontal_Padding = 60;
int Vertical_Padding = 6;
int animation_speed = 10;

int c_time[3][2][7][5][2] = {
								{/*first dimention  for hours*/
								{/*second dimention p1*/
								{/*third dimention p1*/	{hour_Horizontal_Padding + 21, Vertical_Padding + 1},
														{hour_Horizontal_Padding + 22, Vertical_Padding + 1},
														{hour_Horizontal_Padding + 23, Vertical_Padding + 1},
														{hour_Horizontal_Padding + 24, Vertical_Padding + 1},
														{hour_Horizontal_Padding + 25, Vertical_Padding + 1}},
								{/*third dimention p2*/	{hour_Horizontal_Padding + 25, Vertical_Padding + 1},
														{hour_Horizontal_Padding + 25, Vertical_Padding + 2},
														{hour_Horizontal_Padding + 25, Vertical_Padding + 3},
														{hour_Horizontal_Padding + 25, Vertical_Padding + 4},
														{hour_Horizontal_Padding + 25, Vertical_Padding + 5}},
								{/*third dimention p3*/	{hour_Horizontal_Padding + 21, Vertical_Padding + 5},
														{hour_Horizontal_Padding + 22, Vertical_Padding + 5},
														{hour_Horizontal_Padding + 23, Vertical_Padding + 5},
														{hour_Horizontal_Padding + 24, Vertical_Padding + 5},
														{hour_Horizontal_Padding + 25, Vertical_Padding + 5}},
								{/*third dimention p4*/	{hour_Horizontal_Padding + 25, Vertical_Padding + 5},
														{hour_Horizontal_Padding + 25, Vertical_Padding + 6},
														{hour_Horizontal_Padding + 25, Vertical_Padding + 7},
														{hour_Horizontal_Padding + 25, Vertical_Padding + 8},
														{hour_Horizontal_Padding + 25, Vertical_Padding + 9}},
								{/*third dimention p5*/	{hour_Horizontal_Padding + 21, Vertical_Padding + 9},
														{hour_Horizontal_Padding + 22, Vertical_Padding + 9},
														{hour_Horizontal_Padding + 23, Vertical_Padding + 9},
														{hour_Horizontal_Padding + 24, Vertical_Padding + 9},
														{hour_Horizontal_Padding + 25, Vertical_Padding + 9}},
								{/*third dimention p6*/	{hour_Horizontal_Padding + 21, Vertical_Padding + 5},
														{hour_Horizontal_Padding + 21, Vertical_Padding + 6},
														{hour_Horizontal_Padding + 21, Vertical_Padding + 7},
														{hour_Horizontal_Padding + 21, Vertical_Padding + 8},
														{hour_Horizontal_Padding + 21, Vertical_Padding + 9}},
								{/*third dimention p7*/	{hour_Horizontal_Padding + 21, Vertical_Padding + 1},
														{hour_Horizontal_Padding + 21, Vertical_Padding + 2},
														{hour_Horizontal_Padding + 21, Vertical_Padding + 3},
														{hour_Horizontal_Padding + 21, Vertical_Padding + 4},
														{hour_Horizontal_Padding + 21, Vertical_Padding + 5}}},
							{/*second dimention p2*/
								{/*third dimention p1*/	{hour_Horizontal_Padding + 13, Vertical_Padding + 1},
														{hour_Horizontal_Padding + 14, Vertical_Padding + 1},
														{hour_Horizontal_Padding + 15, Vertical_Padding + 1},
														{hour_Horizontal_Padding + 16, Vertical_Padding + 1},
														{hour_Horizontal_Padding + 17, Vertical_Padding + 1}},
								{/*third dimention p2*/	{hour_Horizontal_Padding + 17, Vertical_Padding + 1},
														{hour_Horizontal_Padding + 17, Vertical_Padding + 2},
														{hour_Horizontal_Padding + 17, Vertical_Padding + 3},
														{hour_Horizontal_Padding + 17, Vertical_Padding + 4},
														{hour_Horizontal_Padding + 17, Vertical_Padding + 5}},
								{/*third dimention p3*/	{hour_Horizontal_Padding + 13, Vertical_Padding + 5},
														{hour_Horizontal_Padding + 14, Vertical_Padding + 5},
														{hour_Horizontal_Padding + 15, Vertical_Padding + 5},
														{hour_Horizontal_Padding + 16, Vertical_Padding + 5},
														{hour_Horizontal_Padding + 17, Vertical_Padding + 5}},
								{/*third dimention p4*/	{hour_Horizontal_Padding + 17, Vertical_Padding + 5},
														{hour_Horizontal_Padding + 17, Vertical_Padding + 6},
														{hour_Horizontal_Padding + 17, Vertical_Padding + 7},
														{hour_Horizontal_Padding + 17, Vertical_Padding + 8},
														{hour_Horizontal_Padding + 17, Vertical_Padding + 9}},
								{/*third dimention p5*/	{hour_Horizontal_Padding + 13, Vertical_Padding + 9},
														{hour_Horizontal_Padding + 14, Vertical_Padding + 9},
														{hour_Horizontal_Padding + 15, Vertical_Padding + 9},
														{hour_Horizontal_Padding + 16, Vertical_Padding + 9},
														{hour_Horizontal_Padding + 17, Vertical_Padding + 9}},
								{/*third dimention p6*/	{hour_Horizontal_Padding + 13, Vertical_Padding + 5},
														{hour_Horizontal_Padding + 13, Vertical_Padding + 6},
														{hour_Horizontal_Padding + 13, Vertical_Padding + 7},
														{hour_Horizontal_Padding + 13, Vertical_Padding + 8},
														{hour_Horizontal_Padding + 13, Vertical_Padding + 9}},
								{/*third dimention p7*/	{hour_Horizontal_Padding + 13, Vertical_Padding + 1},
														{hour_Horizontal_Padding + 13, Vertical_Padding + 2},
														{hour_Horizontal_Padding + 13, Vertical_Padding + 3},
														{hour_Horizontal_Padding + 13, Vertical_Padding + 4},
														{hour_Horizontal_Padding + 13, Vertical_Padding + 5}}}},
							{/*first dimention  for minuts*/
							{/*second dimention p1*/
								{/*third dimention p1*/	{minut_Horizontal_Padding + 21, Vertical_Padding + 1},
														{minut_Horizontal_Padding + 22, Vertical_Padding + 1},
														{minut_Horizontal_Padding + 23, Vertical_Padding + 1},
														{minut_Horizontal_Padding + 24, Vertical_Padding + 1},
														{minut_Horizontal_Padding + 25, Vertical_Padding + 1}},
								{/*third dimention p2*/	{minut_Horizontal_Padding + 25, Vertical_Padding + 1},
														{minut_Horizontal_Padding + 25, Vertical_Padding + 2},
														{minut_Horizontal_Padding + 25, Vertical_Padding + 3},
														{minut_Horizontal_Padding + 25, Vertical_Padding + 4},
														{minut_Horizontal_Padding + 25, Vertical_Padding + 5}},
								{/*third dimention p3*/	{minut_Horizontal_Padding + 21, Vertical_Padding + 5},
														{minut_Horizontal_Padding + 22, Vertical_Padding + 5},
														{minut_Horizontal_Padding + 23, Vertical_Padding + 5},
														{minut_Horizontal_Padding + 24, Vertical_Padding + 5},
														{minut_Horizontal_Padding + 25, Vertical_Padding + 5}},
								{/*third dimention p4*/	{minut_Horizontal_Padding + 25, Vertical_Padding + 5},
														{minut_Horizontal_Padding + 25, Vertical_Padding + 6},
														{minut_Horizontal_Padding + 25, Vertical_Padding + 7},
														{minut_Horizontal_Padding + 25, Vertical_Padding + 8},
														{minut_Horizontal_Padding + 25, Vertical_Padding + 9}},
								{/*third dimention p5*/	{minut_Horizontal_Padding + 21, Vertical_Padding + 9},
														{minut_Horizontal_Padding + 22, Vertical_Padding + 9},
														{minut_Horizontal_Padding + 23, Vertical_Padding + 9},
														{minut_Horizontal_Padding + 24, Vertical_Padding + 9},
														{minut_Horizontal_Padding + 25, Vertical_Padding + 9}},
								{/*third dimention p6*/	{minut_Horizontal_Padding + 21, Vertical_Padding + 5},
														{minut_Horizontal_Padding + 21, Vertical_Padding + 6},
														{minut_Horizontal_Padding + 21, Vertical_Padding + 7},
														{minut_Horizontal_Padding + 21, Vertical_Padding + 8},
														{minut_Horizontal_Padding + 21, Vertical_Padding + 9}},
								{/*third dimention p7*/	{minut_Horizontal_Padding + 21, Vertical_Padding + 1},
														{minut_Horizontal_Padding + 21, Vertical_Padding + 2},
														{minut_Horizontal_Padding + 21, Vertical_Padding + 3},
														{minut_Horizontal_Padding + 21, Vertical_Padding + 4},
														{minut_Horizontal_Padding + 21, Vertical_Padding + 5}}},
							{/*second dimention p2*/
								{/*third dimention p1*/	{minut_Horizontal_Padding + 13, Vertical_Padding + 1},
														{minut_Horizontal_Padding + 14, Vertical_Padding + 1},
														{minut_Horizontal_Padding + 15, Vertical_Padding + 1},
														{minut_Horizontal_Padding + 16, Vertical_Padding + 1},
														{minut_Horizontal_Padding + 17, Vertical_Padding + 1}},
								{/*third dimention p2*/	{minut_Horizontal_Padding + 17, Vertical_Padding + 1},
														{minut_Horizontal_Padding + 17, Vertical_Padding + 2},
														{minut_Horizontal_Padding + 17, Vertical_Padding + 3},
														{minut_Horizontal_Padding + 17, Vertical_Padding + 4},
														{minut_Horizontal_Padding + 17, Vertical_Padding + 5}},
								{/*third dimention p3*/	{minut_Horizontal_Padding + 13, Vertical_Padding + 5},
														{minut_Horizontal_Padding + 14, Vertical_Padding + 5},
														{minut_Horizontal_Padding + 15, Vertical_Padding + 5},
														{minut_Horizontal_Padding + 16, Vertical_Padding + 5},
														{minut_Horizontal_Padding + 17, Vertical_Padding + 5}},
								{/*third dimention p4*/	{minut_Horizontal_Padding + 17, Vertical_Padding + 5},
														{minut_Horizontal_Padding + 17, Vertical_Padding + 6},
														{minut_Horizontal_Padding + 17, Vertical_Padding + 7},
														{minut_Horizontal_Padding + 17, Vertical_Padding + 8},
														{minut_Horizontal_Padding + 17, Vertical_Padding + 9}},
								{/*third dimention p5*/	{minut_Horizontal_Padding + 13, Vertical_Padding + 9},
														{minut_Horizontal_Padding + 14, Vertical_Padding + 9},
														{minut_Horizontal_Padding + 15, Vertical_Padding + 9},
														{minut_Horizontal_Padding + 16, Vertical_Padding + 9},
														{minut_Horizontal_Padding + 17, Vertical_Padding + 9}},
								{/*third dimention p6*/	{minut_Horizontal_Padding + 13, Vertical_Padding + 5},
														{minut_Horizontal_Padding + 13, Vertical_Padding + 6},
														{minut_Horizontal_Padding + 13, Vertical_Padding + 7},
														{minut_Horizontal_Padding + 13, Vertical_Padding + 8},
														{minut_Horizontal_Padding + 13, Vertical_Padding + 9}},
								{/*third dimention p7*/	{minut_Horizontal_Padding + 13, Vertical_Padding + 1},
														{minut_Horizontal_Padding + 13, Vertical_Padding + 2},
														{minut_Horizontal_Padding + 13, Vertical_Padding + 3},
														{minut_Horizontal_Padding + 13, Vertical_Padding + 4},
														{minut_Horizontal_Padding + 13, Vertical_Padding + 5}}}},	
							{/*first dimention*/
							{/*second dimention p1*/
								{/*third dimention p1*/	{second_Horizontal_Padding + 21, Vertical_Padding + 1},
														{second_Horizontal_Padding + 22, Vertical_Padding + 1},
														{second_Horizontal_Padding + 23, Vertical_Padding + 1},
														{second_Horizontal_Padding + 24, Vertical_Padding + 1},
														{second_Horizontal_Padding + 25, Vertical_Padding + 1}},
								{/*third dimention p2*/	{second_Horizontal_Padding + 25, Vertical_Padding + 1},
														{second_Horizontal_Padding + 25, Vertical_Padding + 2},
														{second_Horizontal_Padding + 25, Vertical_Padding + 3},
														{second_Horizontal_Padding + 25, Vertical_Padding + 4},
														{second_Horizontal_Padding + 25, Vertical_Padding + 5}},
								{/*third dimention p3*/	{second_Horizontal_Padding + 21, Vertical_Padding + 5},
														{second_Horizontal_Padding + 22, Vertical_Padding + 5},
														{second_Horizontal_Padding + 23, Vertical_Padding + 5},
														{second_Horizontal_Padding + 24, Vertical_Padding + 5},
														{second_Horizontal_Padding + 25, Vertical_Padding + 5}},
								{/*third dimention p4*/	{second_Horizontal_Padding + 25, Vertical_Padding + 5},
														{second_Horizontal_Padding + 25, Vertical_Padding + 6},
														{second_Horizontal_Padding + 25, Vertical_Padding + 7},
														{second_Horizontal_Padding + 25, Vertical_Padding + 8},
														{second_Horizontal_Padding + 25, Vertical_Padding + 9}},
								{/*third dimention p5*/	{second_Horizontal_Padding + 21, Vertical_Padding + 9},
														{second_Horizontal_Padding + 22, Vertical_Padding + 9},
														{second_Horizontal_Padding + 23, Vertical_Padding + 9},
														{second_Horizontal_Padding + 24, Vertical_Padding + 9},
														{second_Horizontal_Padding + 25, Vertical_Padding + 9}},
								{/*third dimention p6*/	{second_Horizontal_Padding + 21, Vertical_Padding + 5},
														{second_Horizontal_Padding + 21, Vertical_Padding + 6},
														{second_Horizontal_Padding + 21, Vertical_Padding + 7},
														{second_Horizontal_Padding + 21, Vertical_Padding + 8},
														{second_Horizontal_Padding + 21, Vertical_Padding + 9}},
								{/*third dimention p7*/	{second_Horizontal_Padding + 21, Vertical_Padding + 1},
														{second_Horizontal_Padding + 21, Vertical_Padding + 2},
														{second_Horizontal_Padding + 21, Vertical_Padding + 3},
														{second_Horizontal_Padding + 21, Vertical_Padding + 4},
														{second_Horizontal_Padding + 21, Vertical_Padding + 5}}},
							{/*second dimention p2*/
								{/*third dimention p1*/	{second_Horizontal_Padding + 13, Vertical_Padding + 1},
														{second_Horizontal_Padding + 14, Vertical_Padding + 1},
														{second_Horizontal_Padding + 15, Vertical_Padding + 1},
														{second_Horizontal_Padding + 16, Vertical_Padding + 1},
														{second_Horizontal_Padding + 17, Vertical_Padding + 1}},
								{/*third dimention p2*/	{second_Horizontal_Padding + 17, Vertical_Padding + 1},
														{second_Horizontal_Padding + 17, Vertical_Padding + 2},
														{second_Horizontal_Padding + 17, Vertical_Padding + 3},
														{second_Horizontal_Padding + 17, Vertical_Padding + 4},
														{second_Horizontal_Padding + 17, Vertical_Padding + 5}},
								{/*third dimention p3*/	{second_Horizontal_Padding + 13, Vertical_Padding + 5},
														{second_Horizontal_Padding + 14, Vertical_Padding + 5},
														{second_Horizontal_Padding + 15, Vertical_Padding + 5},
														{second_Horizontal_Padding + 16, Vertical_Padding + 5},
														{second_Horizontal_Padding + 17, Vertical_Padding + 5}},
								{/*third dimention p4*/	{second_Horizontal_Padding + 17, Vertical_Padding + 5},
														{second_Horizontal_Padding + 17, Vertical_Padding + 6},
														{second_Horizontal_Padding + 17, Vertical_Padding + 7},
														{second_Horizontal_Padding + 17, Vertical_Padding + 8},
														{second_Horizontal_Padding + 17, Vertical_Padding + 9}},
								{/*third dimention p5*/	{second_Horizontal_Padding + 13, Vertical_Padding + 9},
														{second_Horizontal_Padding + 14, Vertical_Padding + 9},
														{second_Horizontal_Padding + 15, Vertical_Padding + 9},
														{second_Horizontal_Padding + 16, Vertical_Padding + 9},
														{second_Horizontal_Padding + 17, Vertical_Padding + 9}},
								{/*third dimention p6*/	{second_Horizontal_Padding + 13, Vertical_Padding + 5},
														{second_Horizontal_Padding + 13, Vertical_Padding + 6},
														{second_Horizontal_Padding + 13, Vertical_Padding + 7},
														{second_Horizontal_Padding + 13, Vertical_Padding + 8},
														{second_Horizontal_Padding + 13, Vertical_Padding + 9}},
								{/*third dimention p7*/	{second_Horizontal_Padding + 13, Vertical_Padding + 1},
														{second_Horizontal_Padding + 13, Vertical_Padding + 2},
														{second_Horizontal_Padding + 13, Vertical_Padding + 3},
														{second_Horizontal_Padding + 13, Vertical_Padding + 4},
														{second_Horizontal_Padding + 13, Vertical_Padding + 5}}}}
							};

int Get_System_Time(int flag)
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	int hours = ltm->tm_hour-12;
	int minuts = ltm->tm_min;
	int seconds = ltm->tm_sec;
	if(flag == 0)
	{
		return hours;
	}
	else if(flag == 1)
	{
		return minuts;
	}
	else
	{
		return seconds;
	}
}

class Normal_Clock
{	
	int pattern[7] = {0,1,2,3,4,5,6};
	int counter = 7;
	
	public:	
	void animate(int step, int cycle, int d1, int d2, int d3)
	{
		if(cycle == 1)
		{
			if(step == 1)
			{
				for(int i = 0; i < 5; i++)
				{
					gotoxy(c_time[d1][d2][d3][i][0],c_time[d1][d2][d3][i][1]);
					cout<<"Û";
					delay(animation_speed);
				}
			}
		}
		else
		{
			if(step == 1)
			{
				for(int i = 0; i < 5; i++)
				{
					gotoxy(c_time[d1][d2][d3][i][0],c_time[d1][d2][d3][i][1]);
					cout<<" ";
					delay(animation_speed);
				}
			}
		}
	}
	
	int decode_pattern(int num)
	{
		if(num == 0)
		{
			pattern[0] = 0;
			pattern[1] = 1;
			pattern[2] = 3;
			pattern[3] = 4;
			pattern[4] = 5;
			pattern[5] = 6;
			counter = 6;
		}
		else if(num == 1)
		{
			pattern[0] = 1;
			pattern[1] = 3;
			counter = 2;
		}
		else if(num == 2)
		{
			pattern[0] = 0;
			pattern[1] = 1;
			pattern[2] = 2;
			pattern[3] = 5;
			pattern[4] = 4;
			counter = 5;
		}
		else if(num == 3)
		{
			pattern[0] = 0;
			pattern[1] = 1;
			pattern[2] = 2;
			pattern[3] = 3;
			pattern[4] = 4;
			counter = 5;
		}
		else if(num == 4)
		{
			pattern[0] = 6;
			pattern[1] = 1;
			pattern[2] = 2;
			pattern[3] = 3;
			counter = 4;
		}
		else if(num == 5)
		{
			pattern[0] = 0;
			pattern[1] = 6;
			pattern[2] = 2;
			pattern[3] = 3;
			pattern[4] = 4;
			counter = 5; 
		}
		else if(num == 6)
		{
			pattern[0] = 0;
			pattern[1] = 6;
			pattern[2] = 2;
			pattern[3] = 3;
			pattern[4] = 4;
			pattern[5] = 5;
			counter = 6;
		}
		else if(num == 7)
		{
			pattern[0] = 0;
			pattern[1] = 1;
			pattern[2] = 3;
			counter = 3;
		}
		else if(num == 8)
		{
			pattern[0] = 0;
			pattern[1] = 1;
			pattern[2] = 2;
			pattern[3] = 3;
			pattern[4] = 4;
			pattern[5] = 5;
			pattern[6] = 6;
			counter = 7;
		}
		else if(num == 9)
		{
			pattern[0] = 2;
			pattern[1] = 6;
			pattern[2] = 0;
			pattern[3] = 1;
			pattern[4] = 3;
			counter = 5;
		}
	}

	int set_time(char order, int cycle)
	{
		int i = 0;
		if(order == 'a')
		{
			while(i < counter)
			{
				if(i+2<=counter)
				{
					for(int step = 1; step < 2; step++)
					{
						animate(step,cycle,0,1,pattern[i]);
						animate(step,cycle,0,1,pattern[i+1]);
					}
					i+=2;
				}
				else
				{
					for(int step = 1; step < 2; step++)
					{
						animate(step,cycle,0,1,pattern[i]);
					}
					i++;
				}
			}
		}
		else if(order == 'b')
		{
			while(i < counter)
			{
				if(i+2<=counter)
				{
					for(int step = 1; step < 2; step++)
					{
						animate(step,cycle,0,0,pattern[i]);
						animate(step,cycle,0,0,pattern[i+1]);
					}
					i+=2;
				}
				else
				{
					for(int step = 1; step < 2; step++)
					{
						animate(step,cycle,0,0,pattern[i]);
					}
					i++;
				}
			}
		}
		else if(order == 'c')
		{
			while(i < counter)
			{
				if(i+2<=counter)
				{
					for(int step = 1; step < 2; step++)
					{
						animate(step,cycle,1,1,pattern[i]);
						animate(step,cycle,1,1,pattern[i+1]);
					}
					i+=2;
				}
				else
				{
					for(int step = 1; step < 2; step++)
					{
						animate(step,cycle,1,1,pattern[i]);
					}
					i++;
				}
			}
		}
		else if(order == 'd')
		{
			while(i < counter)
			{
				if(i+2<=counter)
				{
					for(int step = 1; step < 2; step++)
					{
						animate(step,cycle,1,0,pattern[i]);
						animate(step,cycle,1,0,pattern[i+1]);
					}
					i+=2;
				}
				else
				{
					for(int step = 1; step < 2; step++)
					{
						animate(step,cycle,1,0,pattern[i]);
					}
					i++;
				}
			}
		}
		else if(order == 'e')
		{
			while(i < counter)
			{
				if(i+2<=counter)
				{
					for(int step = 1; step < 2; step++)
					{
						animate(step,cycle,2,1,pattern[i]);
						animate(step,cycle,2,1,pattern[i+1]);
					}
					i+=2;
				}
				else
				{
					for(int step = 1; step < 2; step++)
					{
						animate(step,cycle,2,1,pattern[i]);
					}
					i++;
				}
			}
		}
		else if(order == 'f')
		{
			while(i < counter)
			{
				if(i+2<=counter)
				{
					for(int step = 1; step < 2; step++)
					{
						animate(step,cycle,2,0,pattern[i]);
						animate(step,cycle,2,0,pattern[i+1]);
					}
					i+=2;
				}
				else
				{
					for(int step = 1; step < 2; step++)
					{
						animate(step,cycle,2,0,pattern[i]);
					}
					i++;
				}
			}
		}
	}
};

int main()
{
	int old_sec_0, old_sec_1, old_minut_0, old_minut_1, old_hour_0, old_hour_1;
	Normal_Clock clock_sec_0;
	Normal_Clock clock_sec_1;
	Normal_Clock clock_minut_0;
	Normal_Clock clock_minut_1;
	Normal_Clock clock_hour_0;
	Normal_Clock clock_hour_1;
	for(int k = 0; k < 3; k++)
	{
		for(int s = 0; s < 2; s++)
		{
			for(int i = 0; i < 7; i++)
			{
				for(int x = 0; x < 5; x++)
				{
					gotoxy(c_time[k][s][i][x][0],c_time[k][s][i][x][1]);
					cout<<"Û";
				}
			}
		}
	}
	gotoxy(hour_Horizontal_Padding + 29,Vertical_Padding + 4);
	cout<<"ß";
	gotoxy(hour_Horizontal_Padding + 29,Vertical_Padding + 7);
	cout<<"ß";
	gotoxy(minut_Horizontal_Padding + 29,Vertical_Padding + 4);
	cout<<"ß";
	gotoxy(minut_Horizontal_Padding + 29,Vertical_Padding + 7);
	cout<<"ß";
	gotoxy(55,20);
	
	while(true)
	{	
		if(old_sec_1 % 10 != Get_System_Time(2)%10)
		{
			clock_sec_1.set_time('f',0);
			clock_sec_1.decode_pattern(Get_System_Time(2) % 10);
			clock_sec_1.set_time('f',1);
			old_sec_1 = Get_System_Time(2)%10;
		}
		if(old_sec_0 != Get_System_Time(2) / 10 % 10)
		{
			clock_sec_0.set_time('e',0);
			clock_sec_0.decode_pattern(Get_System_Time(2) / 10 % 10);
			clock_sec_0.set_time('e',1);
			old_sec_0 = Get_System_Time(2)/10%10;
		}
		if(old_minut_1 != Get_System_Time(1) % 10)
		{
			clock_minut_1.set_time('d',0);
			clock_minut_1.decode_pattern(Get_System_Time(1) % 10);
			clock_minut_1.set_time('d',1);
			old_minut_1 = Get_System_Time(1)%10;
		}
		if(old_minut_0 != Get_System_Time(1) / 10 % 10)
		{
			clock_minut_0.set_time('c',0);
			clock_minut_0.decode_pattern(Get_System_Time(1) / 10 % 10);
			clock_minut_0.set_time('c',1);
			old_minut_0 = Get_System_Time(1)/10%10;
		}
		if(old_hour_1 != Get_System_Time(0) % 10)
		{
			clock_hour_1.set_time('b',0);
			clock_hour_1.decode_pattern(Get_System_Time(0) % 10);
			clock_hour_1.set_time('b',1);
			old_hour_1 = Get_System_Time(0)%10;
		}
		if(old_hour_0 != Get_System_Time(0) / 10 % 10)
		{
			clock_hour_0.set_time('a',0);
			clock_hour_0.decode_pattern(Get_System_Time(0) / 10 % 10);
			clock_hour_0.set_time('a',1);
			old_hour_0 = Get_System_Time(0)/10%10;
		}
	}
}
