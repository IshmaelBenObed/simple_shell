#include "_xnishell.h"

void first_investigate(char* original_user, size_t size)
{
if (fgets(original_user, size, stdin) == NULL)
{
/*The process begins by taking commands from user*/

if (feof(stdin))
{
/*It now checks if input has been made*/
   xir_ish("\n ");
  exit(EXIT_SUCCESS);
/*The process ends with success if input is clear*/
}
else
{
  xir_ish("Perusing can not proceed.\n ");
  exit(EXIT_FAILURE);
/*The program ends with a failure message if checking was not completed*/
}
}
  original_user[strcspn(original_user, "\n")] = '\0';

/*This will definitely remove all new lines within code*/
}
