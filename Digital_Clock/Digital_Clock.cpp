// Digital_Clock.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "graphics.h"
#include <time.h>

int main()
{
	int gd = DETECT;
	int gm;

	initgraph(&gd, &gm, "C:\\TC\\BGI");

	time_t rawTime;

	struct tm * currentTime;
	char a[100];

	while (1)
	{
		rawTime = time(NULL);
		currentTime = localtime(&rawTime)
		strftime(a, 100, "%I:%M:%S", currentTime);

		setcolor(11);
		settextstyle(3, HORIZ_DIR, 10);
		outtextxy(200, 100, a);

		strftime(a, 100, "%p", currentTime);
		settextstyle(3, HORIZ_DIR, 2);
		outtextxy(600, 8, a);

		strftime(a, 100, "%a, %d %b, %Y", currentTime);
		settextstyle(3, HORIZ_DIR, 5);
		outtextxy(130, 310, a);

		delay(1000);
	}
	getch();
	closegraph();
}

/*
struct tm
{
int tm_sec; //seconds from 0 to 61
int tm_min; //minutes of hour from 0 to 59
int tm_hour;// hours of day from 0 to 24
int tm_mday; // day of month from 1 to 31
int tm_mon; //month of the year 0 to 11
int tm_year;//year since 1900
int tm_wday; //days since sunday
int tm_yday; // days since january 1st
int tm_isdst; // hours of daylight savings time
}
*/