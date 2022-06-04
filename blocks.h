//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {" ", "brightnessctl  -m | sed 's/,/ /g' | awk '{print $4}'", 5, 0},
	{" ", "echo $(pamixer --get-volume)%",	2,		0},
	{" ", "echo $(cat /sys/class/power_supply/BAT0/capacity)%",	60,		0},
	{"", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"", "date '+%a %d %b %I:%M%p'",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
