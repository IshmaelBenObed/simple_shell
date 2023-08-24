#include "_xnishell.h"


void xir_ish(const char *userwords)
{
          write(STDOUT_FILENO, userwords, strlen(userwords));

} 
