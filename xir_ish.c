#include “_xnishell.h”

Void xir_ish(const char* userwords)
{
          write(STDOUT_FILENO, &userwords, strlen(userwords))

} 
