/* appearance */
static const unsigned int borderpx  = 1;        /* border pixel of windows */
static const unsigned int snap      = 32;       /* snap pixel */
static const unsigned int gappih    = 5;       /* horiz inner gap between windows */
static const unsigned int gappiv    = 5;       /* vert inner gap between windows */
static const unsigned int gappoh    = 5;       /* horiz outer gap between windows and screen edge */
static const unsigned int gappov    = 5;       /* vert outer gap between windows and screen edge */
static const int smartgaps          = 0;        /* 1 means no outer gap when there is only one window */
static const int showbar            = 1;        /* 0 means no bar */
static const int topbar             = 1;        /* 0 means bottom bar */
static const char *fonts[]          = { "monofur:size=10" };
static const char dmenufont[]       = "monofur:size=10";
static const char col_gray1[]       = "#FCF6F5"; //Top bar
static const char col_gray2[]       = "#ffffff"; //Border
static const char col_gray3[]       = "#101820"; // Non selected font
static const char col_gray4[]       = "#000000"; // Selected font
static const char col_cyan[]        = "#89ABE3"; // Title window

static const unsigned int baralpha = 0xc5; //00 more transparant ff is opaque
static const unsigned int borderalpha = OPAQUE;
