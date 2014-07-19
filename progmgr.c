#include <stdio.h>
#include <gui.h>
#include <draw.h>

// MS-UNO Program Manager

int main(int argc, char* argv[]);
{
  printf("Loading Program Manager...\n");
  printf("Loading component 1 of 3: stdio.h (Standard Input/Output Header)...\n");
  printf("Loading component 2 of 3: gui.h (Graphical User Interface Header)...\n");
  printf("Loading component 3 of 3: draw.h (Screen Drawing Header)...\n");
  printf("Loading GUI from C:\MSUNO\RESOURCE\PROGMGR.GUI...\n");
  printf("Loading icon list from C:\MSUNO\RESOURCE\ICONS.ICL...\n");
  printf("Drawing C:\MSUNO\RESOURCE\PROGMGR.GUI...\n");
  printf("[WARN] 1920x1680x256 monitor found. Using 80x25x2 as resolution...")
  /*
  As of right now, the drawer program only supports 80x25x2 (80px width, 25px height, 2 colors) or lower. Monitors exceeding this requirement will be treated as a 80x25x2 monitor.
  */
  printf("--------------------------------------------------------------------------------\n")
  printf("|                                                                 |-|  |O| |X| |\n")
  printf("--------------------------------------------------------------------------------\n")
  printf("|                                                                              |\n")
  
