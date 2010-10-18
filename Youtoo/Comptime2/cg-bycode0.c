/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module cg-bycode0
 **  Copyright: See file cg-bycode0.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_level1();
extern LispRef level1_bindings[];

/* Module bindings with size 18 */
LispRef cg_bycode0_bindings[18];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module cg-bycode0 */
void initialize_module_cg_bycode0()
{
  if (is_initialized) return;
  initialize_module_level1();
  eul_fast_table_set(eul_modules,"cg_bycode0",(LispRef) cg_bycode0_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_1238, sym_1237, G001236, sym_1234, sym_1233, key_1232, key_1231, key_1230, key_1229, sym_1228, G001227, sym_1225, sym_1224, sym_1223, G001222;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 11 is_init: 0 index: 7 binding: def-register */
  static const void *G001221[] = {I(ab,23,00,00),B(cg_bycode0 ,4),I(86,0f,23,00),B(cg_bycode0 ,5),I(1c,0f,1f,03),I(86,0f,23,00),B(cg_bycode0 ,6),I(1c,0f,1f,04),I(86,0f,1c,1c),I(0f,1f,04,1c),I(0f,45,08,00)};

  /* Byte-vector with size: 36 is_init: 0 index: 15 binding: def-bytecode */
  static const void *G001226[] = {I(43,fc,23,00),B(cg_bycode0 ,8),I(86,0f,23,00),B(cg_bycode0 ,5),I(1c,0f,1f,05),I(86,0f,23,00),B(cg_bycode0 ,6),I(1c,0f,1f,07),I(86,0f,23,00),B(cg_bycode0 ,6),I(1c,0f,1f,08),I(86,0f,23,00),B(cg_bycode0 ,6),I(1c,0f,1f,08),I(86,0f,23,00),B(cg_bycode0 ,6),I(1c,0f,1b,86),I(0f,23,00,00),B(cg_bycode0 ,9),I(1c,0f,1f,0d),I(1c,0f,23,00),B(cg_bycode0 ,10),I(1c,0f,1f,06),I(1c,0f,23,00),B(cg_bycode0 ,11),I(1c,0f,1f,0a),I(1c,0f,23,00),B(cg_bycode0 ,12),I(1c,0f,23,00),B(cg_bycode0 ,13),I(1c,0f,23,00),B(cg_bycode0 ,14),I(1c,0f,1b,86),I(0f,1f,11,1c),I(0f,1f,14,1c),I(0f,45,1a,00)};

  /* Byte-vector with size: 20 is_init: 1 index: 0 binding: initialize-cg-bycode0 */
  static const void *G001235[] = {I(87,25,00,00),B(cg_bycode0 ,1),I(24,00,00,00),B(level1 ,1),I(3e,0b,24,00),B(level1 ,0),I(3c,00,21,01),I(23,00,00,00),B(cg_bycode0 ,16),I(23,00,00,00),B(cg_bycode0 ,15),I(3b,fc,25,00),B(cg_bycode0 ,3),I(23,00,00,00),B(cg_bycode0 ,17),I(23,00,00,00),B(cg_bycode0 ,7),I(3b,02,25,00),B(cg_bycode0 ,2),I(86,ac,00,00)};


  /* Initializations */
  eul_intern_symbol(sym_1223,"get-register");
  eul_intern_symbol(sym_1224,"setter");
  eul_intern_symbol(sym_1225,"quote");
  eul_allocate_bytevector( G001222,G001221);
  eul_intern_symbol(sym_1228,"get-bytecode");
  eul_intern_keyword(key_1229,"properties");
  eul_intern_keyword(key_1230,"code");
  eul_intern_keyword(key_1231,"args");
  eul_intern_keyword(key_1232,"name");
  eul_intern_symbol(sym_1233,"<bytecode>");
  eul_intern_symbol(sym_1234,"make");
  eul_allocate_bytevector( G001227,G001226);
  eul_intern_symbol(sym_1237,"def-bytecode");
  eul_intern_symbol(sym_1238,"def-register");
  eul_allocate_bytevector( G001236,G001235);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 4; i++)
      cg_bycode0_bindings[i] = eul_nil;
  }

  cg_bycode0_bindings[ 4] = sym_1223;
  cg_bycode0_bindings[ 5] = sym_1224;
  cg_bycode0_bindings[ 6] = sym_1225;
  cg_bycode0_bindings[ 7] = G001222;
  cg_bycode0_bindings[ 8] = sym_1228;
  cg_bycode0_bindings[ 9] = key_1229;
  cg_bycode0_bindings[ 10] = key_1230;
  cg_bycode0_bindings[ 11] = key_1231;
  cg_bycode0_bindings[ 12] = key_1232;
  cg_bycode0_bindings[ 13] = sym_1233;
  cg_bycode0_bindings[ 14] = sym_1234;
  cg_bycode0_bindings[ 15] = G001227;
  cg_bycode0_bindings[ 1] = eul_nil;
  cg_bycode0_bindings[ 16] = sym_1237;
  cg_bycode0_bindings[ 17] = sym_1238;
  eul_allocate_lambda( cg_bycode0_bindings[0], "initialize-cg-bycode0", 0, G001236);

  }
}


/* eof */
