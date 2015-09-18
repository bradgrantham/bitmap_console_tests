# Monochrome bitmap terminal code

I wrote this as a C++ test of a terminal framework for a CP/M machine
with a bitmap display.  The bitmap display has 61 bytes per row and
262 rows and handles definitions for a "safe" area (margin), but these
are customizable.  The bitmap is exported as a VNC server.

Run it like this:
    ./text

The default command the test program runs is bash.  I use it to telnet
into an emulator for the machine in question.  This test isn't smart
enough to allocate a PTY, so bash doesn't work really well, and neither
does telnet.  But they work well enough for me to test CP/M programs.

One may provide libvncserver command-line options, such as "-rfbport
PORT".  One may also provide a space-delimited command to run, like
    "-c 'exe arg0 arg1 arg2'"
These are in the form of parameters to execv, so the first part of the
command is the executable name, e.g. /bin/bash, and then the other parts
are argv, e.g. "bash" and then "-i".

Handles
* fonts up to 8 pixels wide
* A subset of VT102 *almost* capable of handling WordStar 3.3's "VT100" terminal as long as the screen width and height are set correctly

_To Do_

variable width fonts up to 16 wide
* 6-pixel-wide font is the only way Alice2 can display 80 columns, and that will require MAX video mode

basic vt100 sequences

use #defines and not ints

maybe tie into CP/M emulator, make sure this supports least common denominator terminal codes

From http://www.inwap.com/pdp10/ansicode.txt:

```
Minimum requirements for VT100 emulation:

1) To act as a passive display, implement the 4 cursor commands, the 2 erase
   commands, direct cursor addressing, and at least inverse characters.
   The software should be capable of handling strings with 16 numeric parameters
   with values in the range of 0 to 255.

  [A      Move cursor up one row, stop if a top of screen
  [B      Move cursor down one row, stop if at bottom of screen
  [C      Move cursor forward one column, stop if at right edge of screen
  [D      Move cursor backward one column, stop if at left edge of screen
  [H      Home to row 1 column 1 (also [1;1H)
  [J      Clear from current position to bottom of screen
  [K      Clear from current position to end of line
  [24;80H Position to line 24 column 80 (any line 1 to 24, any column 1 to 132)
  [0m     Clear attributes to normal characters
  [7m     Add the inverse video attribute to succeeding characters
  [0;7m   Set character attributes to inverse video only

2) To enter data in VT100 mode, implement the 4 cursor keys and the 4 PF keys.
   It must be possible to enter ESC, TAB, BS, DEL, and LF from the keyboard.

  [A       Sent by the up-cursor key (alternately ESC O A)
  [B       Sent by the down-cursor key (alternately ESC O B)
  [C       Sent by the right-cursor key (alternately ESC O C)
  [D       Sent by the left-cursor key (alternately ESC O D)
  OP       PF1 key sends ESC O P
  OQ       PF2 key sends ESC O Q
  OR       PF3 key sends ESC O R
  OS       PF3 key sends ESC O S
  [c       Request for the terminal to identify itself
  [?1;0c   VT100 with memory for 24 by 80, inverse video character attribute
  [?1;2c   VT100 capable of 132 column mode, with bold+blink+underline+inverse

3) When doing full-screen editing on a VT100, implement directed erase, the
   numeric keypad in applications mode, and the limited scrolling region.
   The latter is needed to do insert/delete line functions without rewriting
   the screen.

  [0J     Erase from current position to bottom of screen inclusive
  [1J     Erase from top of screen to current position inclusive
  [2J     Erase entire screen (without moving the cursor)
  [0K     Erase from current position to end of line inclusive
  [1K     Erase from beginning of line to current position inclusive
  [2K     Erase entire line (without moving cursor)
  [12;24r   Set scrolling region to lines 12 thru 24.  If a linefeed or an
            INDex is received while on line 24, the former line 12 is deleted
            and rows 13-24 move up.  If a RI (reverse Index) is received while
            on line 12, a blank line is inserted there as rows 12-13 move down.
            All VT100 compatible terminals (except GIGI) have this feature.
  ESC =   Set numeric keypad to applications mode
  ESC >   Set numeric keypad to numbers mode
  OA      Up-cursor key    sends ESC O A after ESC = ESC [ ? 1 h
  OB      Down-cursor key  sends ESC O B    "      "         "
  OC      Right-cursor key sends ESC O B    "      "         "
  OB      Left-cursor key  sends ESC O B    "      "         "
  OM      ENTER key        sends ESC O M after ESC =
  Ol      COMMA on keypad  sends ESC O l    "      "   (that's lowercase L)
  Om      MINUS on keypad  sends ESC O m    "      "
  Op      ZERO on keypad   sends ESC O p    "      "
  Oq      ONE on keypad    sends ESC O q    "      "
  Or      TWO on keypad    sends ESC O r    "      "
  Os      THREE on keypad  sends ESC O s    "      "
  Ot      FOUR on keypad   sends ESC O t    "      "
  Ou      FIVE on keypad   sends ESC O u    "      "
  Ov      SIX on keypad    sends ESC O v    "      "
  Ow      SEVEN on keypad  sends ESC O w    "      "
  Ox      EIGHT on keypad  sends ESC O x    "      "
  Oy      NINE on keypad   sends ESC O y    "      "
```
