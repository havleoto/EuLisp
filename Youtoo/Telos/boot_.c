/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C hook file of EuLisp module boot
 **  Copyright: See file boot.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Initialize module boot ... */
extern void initialize_module_boot();
extern LispRef boot_bindings[];

/* Run application boot ... */
void run_application()
{
  initialize_module_boot();
  execute_lambda(boot_bindings[0]);
}


/* eof */
