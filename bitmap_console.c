#define FONTWIDTH 5
#define FONTHEIGHT 7
#define FONTOFFSET 32
#define FONTMASK 0xF8

typedef char int8;
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef short int16;

uint8 fontbytes[94 * FONTHEIGHT] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x20, 0x20, 0x20, 0x20, 0x00, 0x20, 0x00,
    0x50, 0x50, 0x50, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x50, 0xF8, 0x50, 0xF8, 0x50, 0x00,
    0x00, 0x70, 0xA0, 0x70, 0x28, 0x70, 0x00,
    0x80, 0x90, 0x20, 0x40, 0x90, 0x10, 0x00,
    0x00, 0x40, 0xA0, 0x40, 0xA0, 0x50, 0x00,
    0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00,
    0x20, 0x40, 0x40, 0x40, 0x40, 0x20, 0x00,
    0x40, 0x20, 0x20, 0x20, 0x20, 0x40, 0x00,
    0x00, 0x50, 0x20, 0x70, 0x20, 0x50, 0x00,
    0x00, 0x20, 0x20, 0xF8, 0x20, 0x20, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x30, 0x20, 0x00,
    0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0x00,
    0x00, 0x10, 0x20, 0x40, 0x80, 0x00, 0x00,
    0x20, 0x50, 0x50, 0x50, 0x50, 0x20, 0x00,
    0x20, 0x60, 0x20, 0x20, 0x20, 0x70, 0x00,
    0x60, 0x90, 0x10, 0x20, 0x40, 0xF0, 0x00,
    0xF0, 0x10, 0x60, 0x10, 0x90, 0x60, 0x00,
    0x20, 0x60, 0xA0, 0xF0, 0x20, 0x20, 0x00,
    0xF0, 0x80, 0xE0, 0x10, 0x90, 0x60, 0x00,
    0x60, 0x80, 0xE0, 0x90, 0x90, 0x60, 0x00,
    0xF0, 0x10, 0x20, 0x20, 0x40, 0x40, 0x00,
    0x60, 0x90, 0x60, 0x90, 0x90, 0x60, 0x00,
    0x60, 0x90, 0x90, 0x70, 0x10, 0x60, 0x00,
    0x00, 0x60, 0x60, 0x00, 0x60, 0x60, 0x00,
    0x00, 0x60, 0x60, 0x00, 0x60, 0x40, 0x00,
    0x00, 0x10, 0x20, 0x40, 0x20, 0x10, 0x00,
    0x00, 0x00, 0xF0, 0x00, 0xF0, 0x00, 0x00,
    0x00, 0x40, 0x20, 0x10, 0x20, 0x40, 0x00,
    0x20, 0x50, 0x10, 0x20, 0x00, 0x20, 0x00,
    0x60, 0x90, 0xB0, 0xB0, 0x80, 0x60, 0x00,
    0x60, 0x90, 0x90, 0xF0, 0x90, 0x90, 0x00,
    0xE0, 0x90, 0xE0, 0x90, 0x90, 0xE0, 0x00,
    0x60, 0x90, 0x80, 0x80, 0x90, 0x60, 0x00,
    0xE0, 0x90, 0x90, 0x90, 0x90, 0xE0, 0x00,
    0xF0, 0x80, 0xE0, 0x80, 0x80, 0xF0, 0x00,
    0xF0, 0x80, 0xE0, 0x80, 0x80, 0x80, 0x00,
    0x60, 0x90, 0x80, 0xB0, 0x90, 0x70, 0x00,
    0x90, 0x90, 0xF0, 0x90, 0x90, 0x90, 0x00,
    0x70, 0x20, 0x20, 0x20, 0x20, 0x70, 0x00,
    0x10, 0x10, 0x10, 0x10, 0x90, 0x60, 0x00,
    0x90, 0xA0, 0xC0, 0xC0, 0xA0, 0x90, 0x00,
    0x80, 0x80, 0x80, 0x80, 0x80, 0xF0, 0x00,
    0x90, 0xF0, 0xF0, 0x90, 0x90, 0x90, 0x00,
    0x90, 0xD0, 0xD0, 0xB0, 0xB0, 0x90, 0x00,
    0x60, 0x90, 0x90, 0x90, 0x90, 0x60, 0x00,
    0xE0, 0x90, 0x90, 0xE0, 0x80, 0x80, 0x00,
    0x60, 0x90, 0x90, 0x90, 0xD0, 0x60, 0x00,
    0xE0, 0x90, 0x90, 0xE0, 0xA0, 0x90, 0x00,
    0x60, 0x90, 0x40, 0x20, 0x90, 0x60, 0x00,
    0x70, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00,
    0x90, 0x90, 0x90, 0x90, 0x90, 0x60, 0x00,
    0x90, 0x90, 0x90, 0x90, 0x60, 0x60, 0x00,
    0x90, 0x90, 0x90, 0xF0, 0xF0, 0x90, 0x00,
    0x90, 0x90, 0x60, 0x60, 0x90, 0x90, 0x00,
    0x50, 0x50, 0x50, 0x20, 0x20, 0x20, 0x00,
    0xF0, 0x10, 0x20, 0x40, 0x80, 0xF0, 0x00,
    0x70, 0x40, 0x40, 0x40, 0x40, 0x70, 0x00,
    0x00, 0x80, 0x40, 0x20, 0x10, 0x00, 0x00,
    0x70, 0x10, 0x10, 0x10, 0x10, 0x70, 0x00,
    0x20, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00,
    0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x70, 0x90, 0xB0, 0x50, 0x00,
    0x80, 0x80, 0xE0, 0x90, 0x90, 0xE0, 0x00,
    0x00, 0x00, 0x60, 0x80, 0x80, 0x60, 0x00,
    0x10, 0x10, 0x70, 0x90, 0x90, 0x70, 0x00,
    0x00, 0x00, 0x60, 0xB0, 0xC0, 0x60, 0x00,
    0x20, 0x50, 0x40, 0xE0, 0x40, 0x40, 0x00,
    0x00, 0x00, 0x70, 0x90, 0x60, 0x80, 0x00,
    0x80, 0x80, 0xE0, 0x90, 0x90, 0x90, 0x00,
    0x20, 0x00, 0x60, 0x20, 0x20, 0x70, 0x00,
    0x10, 0x00, 0x10, 0x10, 0x10, 0x50, 0x00,
    0x80, 0x80, 0xA0, 0xC0, 0xA0, 0x90, 0x00,
    0x60, 0x20, 0x20, 0x20, 0x20, 0x70, 0x00,
    0x00, 0x00, 0xA0, 0xF0, 0x90, 0x90, 0x00,
    0x00, 0x00, 0xE0, 0x90, 0x90, 0x90, 0x00,
    0x00, 0x00, 0x60, 0x90, 0x90, 0x60, 0x00,
    0x00, 0x00, 0xE0, 0x90, 0x90, 0xE0, 0x00,
    0x00, 0x00, 0x70, 0x90, 0x90, 0x70, 0x00,
    0x00, 0x00, 0xE0, 0x90, 0x80, 0x80, 0x00,
    0x00, 0x00, 0x70, 0xC0, 0x30, 0xE0, 0x00,
    0x40, 0x40, 0xE0, 0x40, 0x40, 0x30, 0x00,
    0x00, 0x00, 0x90, 0x90, 0x90, 0x70, 0x00,
    0x00, 0x00, 0x50, 0x50, 0x50, 0x20, 0x00,
    0x00, 0x00, 0x90, 0x90, 0xF0, 0xF0, 0x00,
    0x00, 0x00, 0x90, 0x60, 0x60, 0x90, 0x00,
    0x00, 0x00, 0x90, 0x90, 0x50, 0x20, 0x00,
    0x00, 0x00, 0xF0, 0x20, 0x40, 0xF0, 0x00,
    0x10, 0x20, 0x60, 0x20, 0x20, 0x10, 0x00,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00,
    0x40, 0x20, 0x30, 0x20, 0x20, 0x40, 0x00,
};

/* or 22 or 31 or 33: */
#define SCREEN_WIDTH_BYTES 61
#define SCREEN_HEIGHT 262
/* 61 * 262 : */
#define SCREEN_BYTE_COUNT 15982
#define SCREEN_WIDTH_PIXELS (SCREEN_WIDTH_BYTES * 8)

#define TEXTPORT_LEFT_MARGIN_PIXELS (3 * 8)
#define TEXTPORT_LEFT_MARGIN_BYTES (TEXTPORT_LEFT_MARGIN_PIXELS / 8)
#define TEXTPORT_RIGHT_MARGIN_PIXELS (2 * 8)
#define TEXTPORT_TOP_MARGIN 5
#define TEXTPORT_BOTTOM_MARGIN 5

#define TEXTPORT_COLUMNS ((SCREEN_WIDTH_PIXELS - TEXTPORT_LEFT_MARGIN_PIXELS - TEXTPORT_RIGHT_MARGIN_PIXELS) / FONTWIDTH)
#define TEXTPORT_ROWS ((SCREEN_HEIGHT - TEXTPORT_TOP_MARGIN - TEXTPORT_BOTTOM_MARGIN) / FONTHEIGHT)

unsigned char *screen = (unsigned char *)0x4000; /* [SCREEN_BYTE_COUNT]; */
int8 cursor_x;
int8 cursor_y;
unsigned char *cursor_ptr;
int8 cursor_bit;

unsigned char *textport_start_ptr;
int8 textport_start_bit;

uint8 quit;

void textport_set_cursor(int8 x, int8 y)
{
    uint8 bit;
    uint16 bytes;

    if(y < 0) {
        x = 0; y = 0;
    } else if(y >= TEXTPORT_ROWS) {
        x = TEXTPORT_COLUMNS - 1;
        y = TEXTPORT_ROWS - 1;
    } else if(x < 0) {
        x = 0;
    } else if(x >= TEXTPORT_COLUMNS) {
        x = TEXTPORT_COLUMNS - 1;
    }
    cursor_x = x;
    cursor_y = y;
    bit = x * FONTWIDTH;
    bytes = bit / 8;
    cursor_ptr = textport_start_ptr + bytes + y * SCREEN_WIDTH_BYTES * FONTHEIGHT;
    cursor_bit = bit - bytes * 8;
}

int8 saved_cursor_x;
int8 saved_cursor_y;

void save_cursor() 
{
    saved_cursor_x = cursor_x;
    saved_cursor_y = cursor_y;
}

void restore_cursor() 
{
    textport_set_cursor(saved_cursor_x, saved_cursor_y);
}

void screen_init()
{
    textport_start_ptr = screen + TEXTPORT_TOP_MARGIN * SCREEN_WIDTH_BYTES + TEXTPORT_LEFT_MARGIN_BYTES;
    textport_set_cursor(0, 0);
}

void screen_clear()
{
    uint16 i;
    unsigned char *p = screen;
    for(i = SCREEN_BYTE_COUNT; i != 0; i--, p++) {
        *p = 0;
    }
}

uint8 text_flag_none = 0x00;
uint8 text_flag_inverse = 0x01;

int get_byte_masks(int8 screen_bit, uint8* mask1, uint8* mask2)
{
    int8 bit;

    *mask1 = FONTMASK;
    for(bit = screen_bit; bit > 0; bit--) {
        // convert to Z80 assembly:
        *mask1 >>= (uint8)1U;
    }

    *mask2 = FONTMASK;
    for(bit = 8 - screen_bit; bit > 0; bit--) {
        // convert to Z80 assembly:
        *mask2 <<= (uint8)1U;
    }

    return (screen_bit > (8 - FONTWIDTH)) ? 1 : 0;
}

void textport_draw_character(char c, uint8 flags)
{
    int8 bit;
    int8 row;
    unsigned char *screen_ptr = cursor_ptr;
    int8 screen_bit = cursor_bit;
    uint8 *font_ptr;
    uint8 mask1, mask2;
    uint8 second_byte2;

    if(c < FONTOFFSET)
        c = ' ';

    font_ptr = fontbytes + FONTHEIGHT * (c - FONTOFFSET);

    second_byte2 = get_byte_masks(screen_bit, &mask1, &mask2);
    mask1 ^= 0xff;
    mask2 ^= 0xff;

    for(row = FONTHEIGHT; row != 0; row--) {
        uint8 font_byte = *font_ptr;
        uint8 pixels;

        if(flags & text_flag_inverse)
            font_byte ^= FONTMASK;

        // made a loop to look more like assembly
        for(bit = screen_bit; bit > 0; bit--) {
            font_byte >>= (uint8)1U;
        }

        pixels = *screen_ptr;
        pixels &= mask1;
        pixels |= font_byte;
        *screen_ptr = pixels;

        screen_ptr ++;

        if(second_byte2) {
            font_byte = *font_ptr;

            if(flags & text_flag_inverse)
                font_byte ^= FONTMASK;

            // made a loop to look more like assembly
            for(bit = 8 - screen_bit; bit > 0; bit--) {
                font_byte <<= (uint8)1U;
            }

            if(flags & text_flag_inverse)
                font_byte ^= FONTMASK;

            pixels = *screen_ptr;
            pixels &= mask2;
            pixels |= font_byte;
            *screen_ptr = pixels;
        }

        font_ptr++;
        screen_ptr += SCREEN_WIDTH_BYTES - 1;
    }
}

void textport_invert_at_cursor()
{
    unsigned char *screen_ptr = cursor_ptr;
    int8 screen_bit = cursor_bit;
    uint8 row;

    uint8 mask1, mask2;
    uint8 second_byte2;
    second_byte2 = get_byte_masks(screen_bit, &mask1, &mask2);

    for(row = FONTHEIGHT; row != 0; row--) {
        uint8 pixels = *screen_ptr;
        pixels ^= mask1;
        *screen_ptr = pixels;

        screen_ptr ++;

        if(second_byte2) {
            pixels = *screen_ptr;
            pixels ^= mask2;
            *screen_ptr = pixels;
        }

        screen_ptr += SCREEN_WIDTH_BYTES - 1;
    }
}

void screen_scroll_one_row()
{
    uint8 *screen_ptr = textport_start_ptr;
    uint8 *next_row_ptr = textport_start_ptr + SCREEN_WIDTH_BYTES * FONTHEIGHT;
    int16 i;

    for(i = (TEXTPORT_ROWS - 1) * SCREEN_WIDTH_BYTES * FONTHEIGHT; i > 0; i--) {
        *screen_ptr++ = *next_row_ptr++;
    }
    for(i = SCREEN_WIDTH_BYTES * FONTHEIGHT; i > 0; i--) {
        *screen_ptr++ = 0;
    }
}

void screen_cursor_rewind()
{
    if(cursor_x == 0) {
        if(cursor_y == 0) {
            return;
        } else {
            cursor_x = TEXTPORT_COLUMNS - 1;
            cursor_y--;
            textport_set_cursor(cursor_x, cursor_y);
        }
    } else {
        cursor_x--;
        if(cursor_bit < FONTWIDTH) {
            cursor_bit += 8;
            cursor_ptr --;
        }
        cursor_bit -= FONTWIDTH;
    }
}

void screen_cursor_forward()
{
    cursor_x ++;
    cursor_bit += FONTWIDTH;
    if(cursor_bit > 7) {
        cursor_bit -= 8;
        cursor_ptr ++;
    }
    if(cursor_x >= TEXTPORT_COLUMNS) {
        cursor_x = 0;
        cursor_y++;
        if(cursor_y >= TEXTPORT_ROWS) {
            screen_scroll_one_row();
            cursor_y--;
        }
        textport_set_cursor(cursor_x, cursor_y);
    }
}

void textport_erase_screen(int i)
{
    // printf("XXX ERASE SCREEN %d\n", i);
}

/*
 * eraseline()
 *
 *   Erases part of the line.  The argument "which" can be 0 = to end
 *   of line, 1 = to beginning of line, and 2 = whole line.
 */

void textport_erase_line(int8 which)
{
    int8 x;
    int8 prev_x;
    int8 prev_y;
    int8 start, end;

    switch (which) {
        case 0:
            start = cursor_x;
            end = TEXTPORT_COLUMNS;
            break;
        case 1:
            start = 0;
            end = cursor_x + 1;
            break;
        case 2:
            start = 0;
            end = TEXTPORT_COLUMNS; // Should be region
            break;
        default:
            return;
    }

    prev_x = cursor_x;
    prev_y = cursor_y;

    for(x = start; x < end; x++) {
        textport_set_cursor(x, cursor_y);
        textport_draw_character(' ', text_flag_none);
    }

    textport_set_cursor(prev_x, prev_y);
}

void textport_insert_line(int8 i)
{
    // printf("XXX INSERT LINE %d\n", i);
}

void textport_delete_line(int8 i)
{
    // printf("XXX DELETE LINE %d\n", i);
}

void textport_insert_character(int8 i)
{
    // printf("XXX INSERT CHARACTER %d\n", i);
}

void textport_delete_character(int8 i)
{
    // printf("XXX DELETE CHARACTER %d\n", i);
}

void textport_line_up()
{
    // printf("XXX LINE UP\n");
}

void textport_line_down()
{
    cursor_y++;
    cursor_ptr += SCREEN_WIDTH_BYTES * FONTHEIGHT;
    if(cursor_y >= TEXTPORT_ROWS) {
        screen_scroll_one_row();
        cursor_y--;
        cursor_ptr -= SCREEN_WIDTH_BYTES * FONTHEIGHT;
    }
}

void textport_carriage_return()
{
    cursor_x = 0;
    textport_set_cursor(cursor_x, cursor_y);
}

//
// borrowed some structure and some code from dt/vt.c
// Thanks, Lawrence and Vallteri!
//
/* The VT100 states for v->state: */
enum VT100_state {
    ESnormal  = 0,		/* Nothing yet */
    ESesc     = 1,		/* Got ESC */
    ESsquare  = 2,		/* Got ESC [ */
    ESgetpars = 3,		/* About to get or getting the parameters */
    ESgotpars = 4,		/* Finished getting the parameters */
    ESfunckey = 5,		/* Function key */
    EShash    = 6,		/* DEC-specific stuff (screen align, etc.) */
    ESsetG0   = 7,		/* Specify the G0 character set */
    ESsetG1   = 8,		/* Specify the G1 character set */
    ESignore  = 9,		/* Ignore this sequence */
};

#define VT_MAXPARS 16

struct terminal_state {
    enum VT100_state state;
    unsigned short tab_stop[10];
    int16 pars[VT_MAXPARS];
    int8 npars;
    uint8 ques;
} terminal;

void init_terminal(struct terminal_state *state)
{
    int8 i;
    state->state = ESnormal;

    state->tab_stop[0] = 0x0100;	/* First column not set	 */
    for(i = 1; i < 9; i++)
        state->tab_stop[i] = 0x0101;

    state->npars = 0;
    state->ques = 0;
}

/*
 * send_string()
 *
 *   Sends the string as if it had been typed at the keyboard.
 */

static void send_string(const char * s)
{
    while (*s) {
        // send_character(vtnum, *s++);
    }
}
/*
 * send_number()
 *
 *   Sends the number as if it had been typed at the keyboard.
 */

static void 
send_number(int16 num)
{
    char    buf[10];
    int16     i = sizeof(buf);

    buf[--i] = '\0';
    do {
        buf[--i] = num % 10 + '0';
        num /= 10;
    } while (num != 0);

    send_string(buf + i);
}

#define VT102ID		"\e[?6c"

/*
 * respond_ID()
 *
 *   Sends the ID of the terminal.
 */

static void 
respond_ID()
{
    send_string(VT102ID);
}

/*
 * status_report()
 *
 *   Sends a string to say that we're OK and alive
 */

static void 
status_report()
{
    send_string("\033[0n");
}
/*
 * cursor_report()
 *
 *   Sends the location of the cursor
 */

static void 
cursor_report()
{
    send_string("\e[");
    send_number(cursor_y + 1);
    send_string(";");
    send_number(cursor_x + 1);
    send_string("R");
}

void textport_character(unsigned char c)
{
    int16 i;

    if((terminal.state == ESnormal) && (c >= ' ') && (c <= 255)) {
        textport_draw_character(c, text_flag_none);
        screen_cursor_forward();
        textport_draw_character(' ', text_flag_none);
        textport_invert_at_cursor();
        return;
    }
    
    switch(c) {
	case 0:
            return;		/* Ignore nuls (^@)	 */

	case 7:
            // beep();		/* Bell (^G) */
            return;

        case 8:
            textport_invert_at_cursor();
            screen_cursor_rewind();
            textport_invert_at_cursor();
            return;

	case 9: /* Tab (^I) */
            textport_invert_at_cursor();
            textport_carriage_return();
            // terminal.hanging_cursor = 0;
            do {
                textport_draw_character(' ', text_flag_none);
                screen_cursor_forward();
            } while ((terminal.tab_stop[cursor_x / 16] &
                    (1 << (cursor_x % 16))) == 0);
            textport_invert_at_cursor();
            return;

        case 10: // line feed (^J)
        case 11: // line feed (^K)
        case 12: // form feed (^L)
            textport_invert_at_cursor();
            textport_line_down();
            textport_invert_at_cursor();
            return;

        case 13: // carriage return (^M)
            textport_invert_at_cursor();
            textport_carriage_return();
            textport_invert_at_cursor();
            return;

	case 14:
            return;		/* Alternate font (^N)	 */

	case 15:
            return;		/* Normal font (^O)	 */

	case 24:		/* (^X)			 */
	case 26:
            terminal.state = ESnormal;	/* (^Z)			 */
            return;

	case 27:
            terminal.state = ESesc;	/* (^[)			 */
            return;

	case 127:
            return;		/* Rubout (Delete)	 */

	case 128 + 27:
            terminal.state = ESsquare;	/* Equivalent to ^[[	 */
            return;
    }

    switch (terminal.state) {
        case ESesc:
            terminal.state = ESnormal;
            switch (c) {
                case '[':
                    terminal.state = ESsquare;
                    break;

                case 'E':    /* New line         */
                    textport_invert_at_cursor();
                    textport_line_down();
                    textport_carriage_return();
                    textport_invert_at_cursor();
                    break;

                case 'M':    /* Inverse line feed     */
                    textport_line_up();
                    break;

                case 'D':    /* Line feed         */
                    textport_invert_at_cursor();
                    textport_line_down();
                    textport_invert_at_cursor();
                    break;

                case 'H':    /* Set tab stop         */
                    terminal.tab_stop[cursor_x / 16] |=
                        (1 << (cursor_x % 16));
                    break;

                case 'Z':    /* Send ID         */
                    respond_ID();
                    break;

                case '7':    /* Save cursor pos     */
                    save_cursor();
                    break;

                case '8':    /* Restore cursor pos     */
                    restore_cursor();
                    break;

                case '(':    /* Set G0         */
                    terminal.state = ESsetG0;
                    break;

                case ')':    /* Set G1         */
                    terminal.state = ESsetG1;
                    break;

                case '#':    /* Hash             */
                    terminal.state = EShash;
                    break;

                case 'c':    /* Reset terminal     */
                    textport_invert_at_cursor();
                    textport_set_cursor(0, 0);
                    textport_invert_at_cursor();
                    screen_clear();
                    break;

                case '>':    /* Numeric keypad     */
                    /* XXX */
                    break;

                case '=':    /* Appl. keypad         */
                    /* XXX */
                    break;

            }
            break;

        case ESsquare:
            for (i = 0; i < VT_MAXPARS; i++) {
                terminal.pars[i] = 0;
            }
            terminal.npars = 0;
            terminal.state = ESgetpars;
            if (c == '[') {/* Function key         */
                terminal.state = ESfunckey;
                break;
            }
            terminal.ques = (c == '?');
            if (terminal.ques) {
                break;
            }
            /* FALL THROUGH */
        case ESgetpars:
            if (c == ';' && terminal.npars < VT_MAXPARS - 1) {
                terminal.npars++;
                break;
            } else
                if (c >= '0' && c <= '9') {
                    terminal.pars[terminal.npars] *= 10;
                    terminal.pars[terminal.npars] += c - '0';
                    break;
                } else {
                    terminal.npars++;
                    terminal.state = ESgotpars;
                }
            /* FALL THROUGH */
        case ESgotpars:
            terminal.state = ESnormal;
            switch (c) {
                case 'h':    /* Keyboard enable     */
                    /* XXX */
                    break;
                case 'l':    /* Keyboard disable     */
                    /* XXX */
                    break;
                case 'n':    /* Reports         */
                    if (!terminal.ques) {
                        if (terminal.pars[0] == 5) {
                            status_report();
                        } else
                            if (terminal.pars[0] == 6) {
                                cursor_report();
                            }
                    }
                    break;
            }
            if (terminal.ques) {
                terminal.ques = 0;
                break;
            }
            switch (c) {
                case 'G':    /* Go to column         */
                case '`':
                    textport_invert_at_cursor();
                    textport_set_cursor(terminal.pars[0] - 1, cursor_y);
                    textport_invert_at_cursor();
                    break;
                case 'A':    /* Up             */
                    if (terminal.pars[0] == 0) {
                        terminal.pars[0] = 1;
                    }
                    textport_invert_at_cursor();
                    textport_set_cursor(cursor_x, cursor_y - terminal.pars[0]);
                    textport_invert_at_cursor();
                    break;
                case 'B':    /* Down             */
                case 'e':    /* Down             */
                    if (terminal.pars[0] == 0) {
                        terminal.pars[0] = 1;
                    }
                    textport_invert_at_cursor();
                    textport_set_cursor(cursor_x, cursor_y + terminal.pars[0]);
                    textport_invert_at_cursor();
                    break;
                case 'C':    /* Right         */
                case 'a':    /* Right         */
                    if (terminal.pars[0] == 0) {
                        terminal.pars[0] = 1;
                    }
                    textport_invert_at_cursor();
                    textport_set_cursor(cursor_x + terminal.pars[0], cursor_y);
                    textport_invert_at_cursor();
                    break;
                case 'D':    /* Left             */
                    if (terminal.pars[0] == 0) {
                        terminal.pars[0] = 1;
                    }
                    textport_invert_at_cursor();
                    textport_set_cursor(cursor_x - terminal.pars[0], cursor_y);
                    textport_invert_at_cursor();
                    break;
                case 'E':    /* Down, first column     */
                    if (terminal.pars[0] == 0) {
                        terminal.pars[0] = 1;
                    }
                    textport_invert_at_cursor();
                    textport_set_cursor(0, cursor_y + terminal.pars[0]);
                    textport_invert_at_cursor();
                    break;
                case 'F':    /* Up, first column     */
                    if (terminal.pars[0] == 0) {
                        terminal.pars[0] = 1;
                    }
                    textport_invert_at_cursor();
                    textport_set_cursor(0, cursor_y - terminal.pars[0]);
                    textport_invert_at_cursor();
                    break;
                case 'd':    /* Go to line         */
                    textport_invert_at_cursor();
                    textport_set_cursor(0, terminal.pars[0] - 1);
                    textport_invert_at_cursor();
                    break;
                case 'h':    /* Enter insert mode     */
                    // printf("XXX INSERT MODE\n");
                    // if (terminal.pars[0] == 4)
                        // terminal.attr |= T_INSERT;
                    break;
                case 'l':    /* Exit insert mode     */
                    // printf("XXX EXIT INSERT MODE\n");
                    // if (terminal.pars[0] == 4)
                        // terminal.attr &= ~T_INSERT;
                    break;
                case 'H':    /* Go to location     */
                    textport_invert_at_cursor();
                    textport_set_cursor(terminal.pars[1] - 1, terminal.pars[0] - 1);
                    textport_invert_at_cursor();
                    /* XXX - Fix in all VT-100: */
                    // terminal.hanging_cursor = 0;
                    break;
                case 'J':    /* Clear part of screen     */
                    textport_erase_screen(terminal.pars[0]);
                    break;
                case 'K':    /* Clear part of line     */
                    textport_erase_line(terminal.pars[0]);
                    textport_invert_at_cursor();
                    break;
                case 'L':    /* Insert n lines     */
                    textport_insert_line(terminal.pars[0]);
                    break;
                case 'M':    /* Delete n lines     */
                    textport_delete_line(terminal.pars[0]);
                    break;
                case 'P':    /* Delete n characters     */
                    textport_delete_character(terminal.pars[0]);
                    break;
                case 'c':    /* Respond with ID     */
                    if (terminal.pars[0] == 0) {
                        respond_ID();
                    }
                    break;
                case 'g':    /* Clear tab stop(s)     */
                    if (terminal.pars[0]) {
                        terminal.tab_stop[0] = 0;
                        terminal.tab_stop[1] = 0;
                        terminal.tab_stop[2] = 0;
                        terminal.tab_stop[3] = 0;
                        terminal.tab_stop[4] = 0;
                        terminal.tab_stop[5] = 0;
                        terminal.tab_stop[6] = 0;
                        terminal.tab_stop[7] = 0;
                        terminal.tab_stop[8] = 0;
                        terminal.tab_stop[9] = 0;
                    } else {
                        terminal.tab_stop[cursor_x / 16] &=
                            ~(1 << (cursor_x % 16));
                    }
                    break;
                case 'm':    /* Set color         */
                    //if (terminal.npars == 0) {
                        //terminal.npars = 1;
                    //}
                    //for (i = 0; i < terminal.npars; i++) {
                        //setVT100color(v, terminal.pars[i]);
                    //}
                    break;
                case 'r':    /* Set region         */
                    // printf("XXX SET REGION\n");
                    // if (terminal.pars[0] > 0) {
                        // terminal.pars[0]--;
                    // }
                    // if (terminal.pars[1] == 0) {
                        // terminal.pars[1] = terminal.numtrows;
                    // }
                    // if (terminal.pars[0] < terminal.pars[1] &&
                        // terminal.pars[1] <= terminal.numtrows) {
                        // terminal.toptrow = terminal.pars[0];
                        // terminal.bottrow = terminal.pars[1];
                        // terminal.x = 0;
                        // terminal.y = terminal.toptrow;
                    // }
                    break;
                case 's':    /* Save cursor pos     */
                    save_cursor();
                    break;
                case 'u':    /* Restore cursor pos     */
                    restore_cursor();
                    break;
                case '@':    /* Insert n characters     */
                    textport_insert_character(terminal.pars[0]);
                    break;
                case ']':    /* OS-defined         */
                    /* XXX */
                    break;
            }
            break;
        case ESfunckey:
            terminal.state = ESnormal;
            break;
        case EShash:
            terminal.state = ESnormal;
#if 0
            if (c == '8') {
                /* DEC screen alignment test */
            }
#endif
            break;
        case ESsetG0:
#if 0
            if (c == '0') {
                /* Set graphics character set */
            } else
                if (c == 'B') {
                    /* Set normal character set */
                } else
                    if (c == 'U') {
                        /* Set null character set */
                    } else
                        if (c == 'K') {
                            /* Set user-defined character
                             * set */
                        }
#endif
            /* If currently G0, then make active set */
            terminal.state = ESnormal;
            break;
        case ESsetG1:
#if 0
            if (c == '0') {
                /* Set graphics character set */
            } else
                if (c == 'B') {
                    /* Set normal character set */
                } else
                    if (c == 'U') {
                        /* Set null character set */
                    } else
                        if (c == 'K') {
                            /* Set user-defined character
                             * set */
                        }
#endif
            /* If currently G1, then make active set */
            terminal.state = ESnormal;
            break;
        default:
            terminal.state = ESnormal;
    }
}

int main(/* int argc, char **argv */)
{
    int8 i;
    unsigned char c;
    int16 cursor;

    init_terminal(&terminal);

    screen_init();
    screen_clear();

    /* Selftest */
    cursor = 0;
    for(i = 0; i < 2; i++) {
        for(c = 0x20; c <= 0x7e; c++) {
            // int y = cursor / TEXTPORT_COLUMNS;
            // int x = cursor - y * TEXTPORT_COLUMNS;
            textport_draw_character(c, text_flag_none);
            if(c % 0x08 == 0)
                textport_invert_at_cursor();
            screen_cursor_forward();
            cursor++;
        }
        for(c = 0x20; c <= 0x7e; c++) {
            // int y = cursor / TEXTPORT_COLUMNS;
            // int x = cursor - y * TEXTPORT_COLUMNS;
            textport_draw_character(c, text_flag_inverse);
            if(c % 0x08 == 0)
                textport_invert_at_cursor();
            screen_cursor_forward();
            cursor++;
        }
    }
    return 0;
end_main:
}

