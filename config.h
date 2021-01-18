//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	//{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	/* {"",	"sb-crypto",	0,	13}, */
	/* {"",	"sb-torrent",	20,	7}, */
	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	{"",	"sb-music",	0,	11},
	{"",	"sb-news",		0,	6},
	{"",	"sb-mailbox",	180,	12},
	{"",	"sb-pacpackages",	0,	8},
	/* {"",	"sda6",	10,	14}, */
	/* {"",	"price bat \"Basic Attention Token\" 🦁",	0,	20}, */
	/* {"",	"price btc Bitcoin 💰",				0,	21}, */
	/* {"",	"price lbc \"LBRY Token\" 📚",			0,	22}, */
	/* {"",	"torrent",	20,	7}, */
	/* {"",	"memory",	10,	14}, */
	 /* {"",	"disk ~",	10,	14}, */
	/* {"",	"cpubars",		10,	18}, */
	/* {"",	"moonphase",	18000,	17}, */
/*	 {"",	"nettraf",	1,	16}, */
	/* {"",	"forecast",	18000,	5}, */
	{"",	"sb-forecast",	0,	5},
	 /* {"", 	"nfp", 		18000, 	21}, */
	 /* {"", 	"nfp", 		0, 	21}, */
	/*{"",	"battery | tr \'\n\' \' \'",	5,	3}, */
	{"",	"sb-audioout",	0,	13},
	/* {"",	"kbselect",	0,	30}, */
	{"",	"sb-volume",	0,	10},
	{"",	"sb-clock",	60,	1},
	{"",	"sb-internet",	5,	4},
	/* {"",	"help-icon",	0,	15}, */
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
