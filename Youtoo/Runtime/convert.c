/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module convert
 **  Copyright: See file convert.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_condition();
extern LispRef condition_bindings[];
extern LispRef telos_bindings[];
extern LispRef mop_class_bindings[];

/* Module bindings with size 5 */
LispRef convert_bindings[5];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module convert */
void initialize_module_convert()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_condition();
  eul_fast_table_set(eul_modules,"convert",(LispRef) convert_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_1636, G001635, G001633;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 4 is_init: 0 index: 3 binding: convert */
  static const void *G001632[] = {I(ab,24,00,00),B(mop_class ,13),I(3c,01,1c,1c),I(3d,01,02,00)};

  /* Byte-vector with size: 19 is_init: 1 index: 0 binding: initialize-convert */
  static const void *G001634[] = {I(87,25,00,00),B(convert ,1),I(24,00,00,00),B(condition ,1),I(3e,0b,24,00),B(condition ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(convert ,4),I(23,00,00,00),B(convert ,3),I(3b,02,25,00),B(convert ,2),I(86,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G001633,G001632);
  eul_intern_symbol(sym_1636,"convert");
  eul_allocate_bytevector( G001635,G001634);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 3; i++)
      convert_bindings[i] = eul_nil;
  }

  convert_bindings[ 3] = G001633;
  convert_bindings[ 1] = eul_nil;
  convert_bindings[ 4] = sym_1636;
  eul_allocate_lambda( convert_bindings[0], "initialize-convert", 0, G001635);

  }
}


/* eof */
