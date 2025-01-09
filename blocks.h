//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*//*Command*//*Update Interval*//*Update Signal*/	
	{"", "date '+%d/%m/%y | %H:%M'", 30, 1},	
	{"Bat1 %", "cat /sys/class/power_supply/BAT0/capacity", 5, 0},
	// Remove if you don't have a second battery
        {"Bat2 %", "cat /sys/class/power_supply/BAT1/capacity", 5, 0},
};
//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
