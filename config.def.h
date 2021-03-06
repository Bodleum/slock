/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
    [INIT] =   "#282828",     /* after initialization */
    [INPUT] =  "#282828",   /* during input */
    [FAILED] = "#9d0006",   /* wrong password */
    [CAPS] = "#d79921",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Screen is locked";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "6x13";
