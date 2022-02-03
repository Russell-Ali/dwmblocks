//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "date +%R", 60, 0},
	{"", "blk-battery", 5, 0},
	{"", "blk-volume", 0, 1},
	{"", "blk-backlight", 0, 2},
	{"", "blk-layout", 0, 3},
	{"", "blk-cputemp", 5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
