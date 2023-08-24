#include "_xnishell.h"

/**
*ready_to_view would make the display of prompt 
*void first_investigate reads users commands 
*void user_push does the execution
*/

int main(void) 
{
    char original_user[333];
    while (1)
{
     
         ready_to_view();
         first_investigate(original_user, sizeof(original_user));
         user_push(original_user);
        
}


     return 0;
}

