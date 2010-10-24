#pragma once
#include "TaskSetting.h"

#define MAX_COLUM 25
#define COLUMN_IMAGENAME            0
#define COLUMN_PID                  1
#define COLUMN_USERNAME             2
#define COLUMN_SESSIONID            3
#define COLUMN_CPUUSAGE             4
#define COLUMN_CPUTIME              5
#define COLUMN_MEMORYUSAGE          6
#define COLUMN_PEAKMEMORYUSAGE      7
#define COLUMN_MEMORYUSAGEDELTA     8
#define COLUMN_PAGEFAULTS           9
#define COLUMN_PAGEFAULTSDELTA      10
#define COLUMN_VIRTUALMEMORYSIZE    11
#define COLUMN_PAGEDPOOL            12
#define COLUMN_NONPAGEDPOOL         13
#define COLUMN_BASEPRIORITY         14
#define COLUMN_HANDLECOUNT          15
#define COLUMN_THREADCOUNT          16
#define COLUMN_USEROBJECTS          17
#define COLUMN_GDIOBJECTS           18
#define COLUMN_IOREADS              19
#define COLUMN_IOWRITES             20
#define COLUMN_IOOTHER              21
#define COLUMN_IOREADBYTES          22
#define COLUMN_IOWRITEBYTES         23
#define COLUMN_IOOTHERBYTES         24

class CColumnMgr
{
public:
	typedef struct
	{
		LPWSTR name;
		int width;
		BOOL isShow;
		int nId;
	}ColumnEntry;
public:
	CColumnMgr(void);
	~CColumnMgr(void);
	void AddColumns(HWND hWnd);
	const ColumnEntry *GetColumns();
private:
	ColumnEntry columns[MAX_COLUM];	
};

extern CColumnMgr::ColumnEntry defaultColums[MAX_COLUM];