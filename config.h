//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/*//{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9}, */
	/*/1* {"",	"sb-crypto",	0,	13}, *1/ */
	/*/1* {"",	"sb-torrent",	20,	7}, *1/ */
	/*{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9}, */
	/*{"",	"sb-music",	0,	11}, */
	/*{"",	"sb-news",		0,	6}, */
	/*{"",	"sb-mailbox",	180,	12}, */
	/*{"",	"sb-pacpackages",	0,	8}, */
	/*/1* {"",	"sda6",	10,	14}, *1/ */
	/*/1* {"",	"price bat \"Basic Attention Token\" 🦁",	0,	20}, *1/ */
	/*/1* {"",	"price btc Bitcoin 💰",				0,	21}, *1/ */
	/*/1* {"",	"price lbc \"LBRY Token\" 📚",			0,	22}, *1/ */
	/*/1* {"",	"torrent",	20,	7}, *1/ */
	/*/1* {"",	"memory",	10,	14}, *1/ */
	/* /1* {"",	"disk ~",	10,	14}, *1/ */
	/*/1* {"",	"cpubars",		10,	18}, *1/ */
	/*/1* {"",	"moonphase",	18000,	17}, *1/ */
/*/1*	 {"",	"nettraf",	1,	16}, *1/ */
	/*/1* {"",	"forecast",	18000,	5}, *1/ */
	/*{"",	"sb-forecast",	0,	5}, */
	/* /1* {"", 	"nfp", 		18000, 	21}, *1/ */
	/* /1* {"", 	"nfp", 		0, 	21}, *1/ */
	/*/1*{"",	"battery | tr \'\n\' \' \'",	5,	3}, *1/ */
	/*/1* {"",	"kbselect",	0,	30}, *1/ */
	/*{"",	"sb-volume",	0,	10}, */
	/*{"",	"sb-clock",	60,	1}, */
	/*{"",	"sb-internet",	5,	4}, */
	/*/1* {"",	"help-icon",	0,	15}, *1/ */
	/* {"⌨", "sb-kbselect", 0, 30}, */
	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	{"",	"sb-tasks",	10,	26},
	{"",	"sb-music",	0,	11},
	{"",	"sb-pacpackages",	0,	8},
	{"",	"sb-news",		0,	6},
	/* {"",	"sb-price lbc \"LBRY Token\" 📚",			9000,	22}, */
	/* {"",	"sb-price bat \"Basic Attention Token\" 🦁",	9000,	20}, */
	/* {"",	"sb-price link \"Chainlink\" 🔗",			300,	25}, */
	/* {"",	"sb-price xmr \"Monero\" 🔒",			9000,	24}, */
	/* {"",	"sb-price eth Ethereum 🍸",	9000,	23}, */
	/* {"",	"sb-price btc Bitcoin 💰",				9000,	21}, */
	{"",	"sb-torrent",	20,	7},
	/* {"",	"sb-memory",	10,	14}, */
	/* {"",	"sb-cpu",		10,	18}, */
	/* {"",	"sb-moonphase",	18000,	17}, */
	{"",	"sb-forecast",	18000,	5},
	{"",	"sb-mailbox",	180,	12},
	{"",	"sb-nettraf",	1,	16},
	{"",	"sb-audioout",	0,	13},
	{"",	"sb-volume",	0,	10},
	{"",	"sb-clock",	60,	1},
	{"",	"sb-internet",	5,	4},
	{"",	"sb-help-icon",	0,	15},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }

