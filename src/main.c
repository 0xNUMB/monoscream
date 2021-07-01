/* * * * * * * * * * * * * * /
*   main.c
*   Entry Point of program
* * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/cmds.h"


int main(int argc, char const *argv[]) {
  char *cmd;
  printf("Monoscream - ROP searcher.\n");
  printf("Enter \"-h\" for help list.\n\n");

  printf("Command: ");
  scanf("%s", &cmd);
  parseConsole(cmd);

  return 0;
}
