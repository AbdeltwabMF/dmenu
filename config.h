/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
  "Fantasque Sans Mono:pixelsize=16:antialias=true:autohint=true",
	"Noto Color Emoji:pixelsize=16:antialias=true:autohint=true",
	"JoyPixels:pixelsize=16:antialias=true:autohint=true",
	"DejaVu Sans:pixelsize=16:antialias=true:autohint=true",
	"Noto Sans Arabic:pixelsize=16:antialias=true:autohint=true",
  "FuraMono Nerd Font Mono:pixelsize=16:antialias=true:autohint=true",
	"Amiri Quran Colored:pixelsize=16:antialias=true:autohint=true",
	"Noto Sans Hebrew:pixelsize=18:antialias=true:autohint=true",
	"Noto Sans KR:pixelsize=18:antialias=true:autohint=true",
	"Noto Sans JP:pixelsize=18:antialias=true:autohint=true"
};

static const unsigned int bgalpha = 0xff;
static const unsigned int fgalpha = OPAQUE;
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                fg         bg       */
	[SchemeNorm] = { "#887FCF", "#2B2B2B" },
	[SchemeSel]  = { "#E6EDF9", "#2B2B2B" },
	[SchemeOut]  = { "#FFC19A", "#2B2B2B" },
};

static const unsigned int alphas[SchemeLast][2] = {
	/*		fgalpha		bgalphga	*/
	[SchemeNorm] = { fgalpha, bgalpha },
	[SchemeSel]  = { fgalpha, bgalpha },
	[SchemeOut]  = { fgalpha, bgalpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

