/* * * * * * * * * * * * * * /
*   cmdline.c
*   Similar to an engine for working with the console (eh?)
* * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "include/cmds.h"
#include "include/err.h"


char* parseConsole(char cmd) {
  char *userCmd;

  while ((userCmd != ' ') || (userCmd != '\n')) {
    userCmd++; //char + 1

    if((*userCmd == '-')) {
      switch(cmd) {
        case 'h':
          helpList();
        case 'p':
          scanFile();
        default:
          printf("Usage: -<h/p/...> [/path/to/file/]");
          return MNSCRM_ERROR_CMD;
      }
    }
  }

  return cmd;
}


char scanFile(char *s) {
  FILE *fp;

  if(fp == NULL)
    return MNSCRM_ERROR_POINTER_IS_NULL;


}

void helpList() {
  printf("\tHelp List.\n\n");
  printf("-h - displays this list.\n");
  printf("-prs <path/to/file> - parse your PE binary for ROP Gadgets. And yeah, no cyrillic in path to file!\n");
}
