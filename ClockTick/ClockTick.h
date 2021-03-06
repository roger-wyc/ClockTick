#pragma once

#include "resource.h"

#define	CLOCK_MAX		10
#define PI				3.1415926
#define TIMEZONE_NUM	25

typedef struct
{
	UINT num_clock;
	LOGFONT TextFont;
	int nTimeZone[CLOCK_MAX];
	COLORREF colorHour;
	COLORREF colorMinute;
	COLORREF colorSecond;
}MYDATA, *PMYDATA;

typedef struct
{
	UINT savenum_clock;
	int  savenTimeZone[CLOCK_MAX];
	COLORREF savecolorHour;
	COLORREF savecolorMinute;
	COLORREF savecolorSecond;
	LONG savefontheight;
	LONG savefontweight;
	TCHAR savefontname[32];
}SAVE_INFO;

typedef struct
{
	const TCHAR* areaname;
	const TCHAR* zonename;
} TIMEZONE_INFO;
