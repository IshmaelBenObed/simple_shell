#include "_xnishell.h"

void user_push(const char *original_user)
{
/*The new process begins by creating a new process*/
   pid_t the_junior = fork();
   if (the_junior == -1)
{
   perror("The new process failed");
   exit(EXIT_FAILURE);
}
  else if (the_junior == 0)
{
  execlp (original_user, original_user, (char *)NULL);
  perror("./shell");
  exit(EXIT_FAILURE);
}

/*The new process has ended*/
  else
{
/*The previous process was held suspended*/
  wait(NULL);
}
}
