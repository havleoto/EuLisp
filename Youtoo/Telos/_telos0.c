/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module _telos0
 **  Copyright: See file _telos0.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module__boot0();
extern void initialize_module__mop_gf0();
extern void initialize_module__mop_meth0();
extern void initialize_module__mop_defcl0();
extern LispRef _mop_defcl0_bindings[];
extern LispRef _mop_meth0_bindings[];
extern LispRef _mop_gf0_bindings[];
extern LispRef _boot0_bindings[];

/* Module bindings with size 2 */
LispRef _telos0_bindings[2];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module _telos0 */
void initialize_module__telos0()
{
  if (is_initialized) return;
  initialize_module__boot0();
  initialize_module__mop_gf0();
  initialize_module__mop_meth0();
  initialize_module__mop_defcl0();
  eul_fast_table_set(eul_modules,"_telos0",(LispRef) _telos0_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef G001392;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 23 is_init: 1 index: 0 binding: initialize-_telos0 */
  static const void *G001391[] = {I(87,25,00,00),B(_telos0 ,1),I(24,00,00,00),B(_mop_defcl0 ,1),I(3e,0b,24,00),B(_mop_defcl0 ,0),I(3c,00,21,01),I(24,00,00,00),B(_mop_meth0 ,1),I(3e,0b,24,00),B(_mop_meth0 ,0),I(3c,00,21,01),I(24,00,00,00),B(_mop_gf0 ,1),I(3e,0b,24,00),B(_mop_gf0 ,0),I(3c,00,21,01),I(24,00,00,00),B(_boot0 ,1),I(3e,0b,24,00),B(_boot0 ,0),I(3c,00,21,01),I(86,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G001392,G001391);

  /* Set local bindings */
  _telos0_bindings[ 1] = eul_nil;
  eul_allocate_lambda( _telos0_bindings[0], "initialize-_telos0", 0, G001392);

  }
}


/* eof */
