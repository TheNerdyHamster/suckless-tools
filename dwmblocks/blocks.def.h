//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{ "",        "kernel",	            3600,	                   2 },
	{ "",        "memory",	            2,	                       1 },
	{ "",        "diskusage",           3600,                      1 },
	{ "",        "volume",	            10,		                   4 },
	{ "",        "battery",	            60,		                   3 },
	{ "",        "clock",	            10,		                   0 },

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
