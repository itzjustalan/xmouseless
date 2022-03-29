
/* the rate at which the mouse moves in Hz
 * does not change its speed */
static const unsigned int move_rate = 60;

/* the default speed of the mouse pointer
 * in pixels per second */
static const unsigned int default_speed = 400;

/* changes the speed of the mouse pointer */
static SpeedBinding speed_bindings[] = {
    /* key             speed */  
    { XK_f,            3000 },
    { XK_Alt_L,        10 },
    { XK_Control_L,    50   },
};

/* moves the mouse pointer
 * you can also add any other direction (e.g. diagonals) */
static MoveBinding move_bindings[] = {
    /* key         x      y */
    { XK_h,        -1,     0 },
    { XK_j,         0,     1 },
    { XK_k,         0,    -1 },
    { XK_l,         1,     0 },
    { XK_a,        -1,     0 },
    { XK_s,         0,     1 },
    { XK_w,         0,    -1 },
    { XK_d,         1,     0 },
    { XK_Left,     -1,     0 },
    { XK_Down,      0,     1 },
    { XK_Up,        0,    -1 },
    { XK_Right,     1,     0 },
};

/* 1: left
 * 2: middle
 * 3: right */
static ClickBinding click_bindings[] = {
    /* key         button */  
    { XK_e,        1 },
    { XK_r,        3 },
    { XK_c,        2 },
    { XK_u,        1 },
    { XK_o,        2 },
    { XK_i,        3 },
};

/* scrolls up, down, left and right
 * a higher value scrolls faster */
static ScrollBinding scroll_bindings[] = {
    /* key        x      y */
    { XK_b,      -30 ,   0  },
    { XK_n,       0 ,    30 },
    { XK_m,       0 ,   -30 },
    { XK_comma,   30 ,   0  },
};

/* executes shell commands */
static ShellBinding shell_bindings[] = {
    /* key         command */  
    // { XK_b,        "wmctrl -a firefox" },
    // { XK_0,        "xdotool mousemove 0 0" },
};

/* exits on key release which allows click and exit with one key */
static KeySym exit_keys[] = {
    XK_Escape, XK_q
};
