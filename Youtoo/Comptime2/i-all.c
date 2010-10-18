/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module i-all
 **  Copyright: See file i-all.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_level1();
extern void initialize_module_i_param();
extern void initialize_module_i_error();
extern void initialize_module_i_notify();
extern LispRef i_notify_bindings[];
extern LispRef i_error_bindings[];
extern LispRef i_param_bindings[];
extern LispRef i_level1_bindings[];

/* Module bindings with size 2 */
LispRef i_all_bindings[2];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module i-all */
void initialize_module_i_all()
{
  if (is_initialized) return;
  initialize_module_i_level1();
  initialize_module_i_param();
  initialize_module_i_error();
  initialize_module_i_notify();
  eul_fast_table_set(eul_modules,"i_all",(LispRef) i_all_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef G00414;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 23 is_init: 1 index: 0 binding: initialize-i-all */
  static const void *G00413[] = {I(87,25,00,00),B(i_all ,1),I(24,00,00,00),B(i_notify ,1),I(3e,0b,24,00),B(i_notify ,0),I(3c,00,21,01),I(24,00,00,00),B(i_error ,1),I(3e,0b,24,00),B(i_error ,0),I(3c,00,21,01),I(24,00,00,00),B(i_param ,1),I(3e,0b,24,00),B(i_param ,0),I(3c,00,21,01),I(24,00,00,00),B(i_level1 ,1),I(3e,0b,24,00),B(i_level1 ,0),I(3c,00,21,01),I(86,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G00414,G00413);

  /* Set local bindings */
  i_all_bindings[ 1] = eul_nil;
  eul_allocate_lambda( i_all_bindings[0], "initialize-i-all", 0, G00414);

  }
}


/* eof */
