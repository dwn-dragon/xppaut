#pragma once

#ifndef XPPAUT_MAIN_INCLUDE
#define XPPAUT_MAIN_INCLUDE

#include <X11/X.h>
#include <X11/Xlib.h>

/// 
/// @param argc 
/// @param argv 

/**
 * @brief Parses the arguments with priority (QUITE and LOGFILE).
 * 
 * @param argc 
 * @param argv 
 */
void parse_args_priority(int argc, char* argv[]);
/**
 * @brief Initializes the environment necessary for the GUI and visual part.
 * 
 */
void init_env_gui();

void init_X(void);
void set_big_font(void);
void set_small_font(void);
void xpp_events(XEvent report, int min_wid, int min_hgt);
void do_events(unsigned int min_wid, unsigned int min_hgt);
void bye_bye(void);
void clr_scrn(void);
void redraw_all(void);
void commander(char ch);
Window init_win(unsigned int bw, char* icon_name, char* win_name, int x, int y, unsigned int min_wid, unsigned int min_hgt, int argc, char* argv[]);
void top_button_draw(Window w);
void top_button_cross(Window w, int b);
void top_button_press(Window w);
void top_button_events(XEvent report);
void make_top_buttons(void);
void getGC(GC *gc);
void load_fonts(void);
void make_pops(void);
void FixWindowSize(Window w, int width, int height, int flag);
int getxcolors(XWindowAttributes *win_info, XColor **colors);
void test_color_info(void);

#endif	//	include guard
