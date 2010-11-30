/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module op-peep0
 **  Copyright: See file op-peep0.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_level_1();
extern LispRef level_1_bindings[];
extern LispRef boot_bindings[];
extern LispRef collect_bindings[];

/* Module bindings with size 18 */
LispRef op_peep0_bindings[18];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module op-peep0 */
void initialize_module_op_peep0()
{
  if (is_initialized) return;
  initialize_module_level_1();
  eul_fast_table_set(eul_modules,"op_peep0",(LispRef) op_peep0_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_1364, G001363, sym_1361, G001360, sym_1358, sym_1357, G001356, sym_1354, G001353, sym_1351, sym_1350, G001349, sym_1347, sym_1346, G001345;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 8 is_init: 0 index: 6 binding: anonymous */
  static const void *G001344[] = {I(aa,1b,10,1b),I(86,0f,23,00),B(op_peep0 ,4),I(1c,0f,1f,03),I(11,1c,1c,0f),I(23,00,00,00),B(op_peep0 ,5),I(1c,0f,45,06)};

  /* Byte-vector with size: 14 is_init: 0 index: 9 binding: anonymous */
  static const void *G001348[] = {I(aa,1b,7c,12),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,10),I(1c,23,00,00),B(op_peep0 ,7),I(50,1b,34,00),I(00,00,00,16),I(23,00,00,00),B(op_peep0 ,8),I(32,00,00,00),I(00,00,00,09),I(1d,45,03,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 11 binding: anonymous */
  static const void *G001352[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,3c),I(1c,10,1b,11),I(23,00,00,00),B(op_peep0 ,10),I(23,00,00,00),B(op_peep0 ,9),I(3b,01,1c,24),B(collect ,2),I(3c,02,1f,04),I(11,1b,47,00),I(00,3c,01,1d),I(1c,24,00,00),B(boot ,23),I(3d,02,07,22),I(05,45,02,00)};

  /* Byte-vector with size: 46 is_init: 0 index: 14 binding: guarded-rule */
  static const void *G001355[] = {I(43,03,46,01),I(86,1b,48,00),I(00,23,00,00),B(op_peep0 ,10),I(23,00,00,00),B(op_peep0 ,11),I(3b,01,48,00),I(00,1f,03,86),I(0f,23,00,00),B(op_peep0 ,4),I(1c,0f,1f,04),I(34,00,00,00),I(00,00,00,28),I(1f,05,47,00),I(00,3c,01,1f),I(05,86,0f,1c),I(1c,0f,23,00),B(op_peep0 ,12),I(1c,0f,22,03),I(32,00,00,00),I(00,00,00,09),I(86,1f,06,47),I(00,00,3c,01),I(23,00,00,00),B(op_peep0 ,10),I(23,00,00,00),B(op_peep0 ,6),I(3b,01,1f,06),I(24,00,00,00),B(collect ,2),I(3c,02,23,00),B(op_peep0 ,5),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(op_peep0 ,12),I(1c,0f,1f,0c),I(24,00,00,00),B(collect ,9),I(3c,01,1b,86),I(0f,1d,1c,0f),I(1f,09,1c,0f),I(1f,0b,1c,0f),I(23,00,00,00),B(op_peep0 ,13),I(1c,0f,45,12)};

  /* Byte-vector with size: 5 is_init: 0 index: 16 binding: simple-rule */
  static const void *G001359[] = {I(ab,86,0f,86),I(1c,0f,1d,1c),I(0f,23,00,00),B(op_peep0 ,15),I(1c,0f,45,04)};

  /* Byte-vector with size: 20 is_init: 1 index: 0 binding: initialize-op-peep0 */
  static const void *G001362[] = {I(87,25,00,00),B(op_peep0 ,1),I(24,00,00,00),B(level_1 ,1),I(3e,0b,24,00),B(level_1 ,0),I(3c,00,21,01),I(23,00,00,00),B(op_peep0 ,17),I(23,00,00,00),B(op_peep0 ,16),I(3b,02,25,00),B(op_peep0 ,3),I(23,00,00,00),B(op_peep0 ,15),I(23,00,00,00),B(op_peep0 ,14),I(3b,03,25,00),B(op_peep0 ,2),I(86,ac,00,00)};


  /* Initializations */
  eul_intern_symbol(sym_1346,"quote");
  eul_intern_symbol(sym_1347,"list");
  eul_allocate_bytevector( G001345,G001344);
  eul_intern_symbol(sym_1350,"*");
  eul_intern_symbol(sym_1351,"*no-variable*");
  eul_allocate_bytevector( G001349,G001348);
  eul_intern_symbol(sym_1354,"anonymous");
  eul_allocate_bytevector( G001353,G001352);
  eul_intern_symbol(sym_1357,"lambda");
  eul_intern_symbol(sym_1358,"add-rule");
  eul_allocate_bytevector( G001356,G001355);
  eul_intern_symbol(sym_1361,"guarded-rule");
  eul_allocate_bytevector( G001360,G001359);
  eul_intern_symbol(sym_1364,"simple-rule");
  eul_allocate_bytevector( G001363,G001362);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 4; i++)
      op_peep0_bindings[i] = eul_nil;
  }

  op_peep0_bindings[ 4] = sym_1346;
  op_peep0_bindings[ 5] = sym_1347;
  op_peep0_bindings[ 6] = G001345;
  op_peep0_bindings[ 7] = sym_1350;
  op_peep0_bindings[ 8] = sym_1351;
  op_peep0_bindings[ 9] = G001349;
  op_peep0_bindings[ 10] = sym_1354;
  op_peep0_bindings[ 11] = G001353;
  op_peep0_bindings[ 12] = sym_1357;
  op_peep0_bindings[ 13] = sym_1358;
  op_peep0_bindings[ 14] = G001356;
  op_peep0_bindings[ 15] = sym_1361;
  op_peep0_bindings[ 16] = G001360;
  op_peep0_bindings[ 1] = eul_nil;
  op_peep0_bindings[ 17] = sym_1364;
  eul_allocate_lambda( op_peep0_bindings[0], "initialize-op-peep0", 0, G001363);

  }
}


/* eof */
