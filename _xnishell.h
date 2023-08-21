#ifndef  _XNISHELL_H
#define  _XNISHELL_H

/*
 *Our  header files are available below
 */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 *Our functions are available below
 */

void xir_ish(const char* userwords);
void ready_to_view(void); 
void user_push(const char* original_user);
void first_investigate(char* original_user, size_t size); 



#endif
