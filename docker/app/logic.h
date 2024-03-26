#define kDelChar				8

// give ourselves a little bit of headroom before we actually hit 32kb.
#define	kMaxTELength			32000

#define MARGIN 15

/*	kControlInvisible is used to 'turn off' controls (i.e., cause the control not
	to be redrawn as a result of some Control Manager call such as SetCtlValue)
	by being put into the contrlVis field of the record. kControlVisible is used
	the same way to 'turn on' the control. */
#define kControlInvisible		0
#define kControlVisible			0xFF

/*	kScrollbarAdjust and kScrollbarWidth are used in calculating
	values for control positioning and sizing. */
#define kScrollbarWidth			16
#define kScrollbarAdjust		(kScrollbarWidth - 1)
