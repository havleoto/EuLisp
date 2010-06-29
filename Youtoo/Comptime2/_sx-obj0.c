/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module _sx-obj0
 **  Copyright: See file _sx-obj0.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_level1();
extern LispRef level1_bindings[];
extern LispRef boot1_bindings[];
extern LispRef collect_bindings[];
extern LispRef string_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef format_bindings[];

/* Module bindings with size 31 */
LispRef _sx_obj0_bindings[31];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module _sx-obj0 */
void initialize_module__sx_obj0()
{
  if (is_initialized) return;
  initialize_module_level1();
  eul_fast_table_set(eul_modules,"_sx_obj0",(LispRef) _sx_obj0_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_163, sym_162, G00161, sym_159, sym_158, sym_157, key_156, sym_155, G00153, key_151, key_150, key_149, key_148, G00144, sym_142, sym_141, sym_140, sym_139, sym_138, sym_137, key_135, G00133;

  /* Code vector and literal definitions */
  eul_allocate_static_string(str_134, "module-~as?", 11);
  eul_allocate_static_string(str_136, "module-~as!", 11);
  /* Byte-vector with size: 76 is_init: 0 index: 13 binding: new-node */
  static const void *G00132[] = {I(43,fd,1c,73),I(23,00,00,00),B(_sx_obj0 ,4),I(1c,24,00,00),B(format ,2),I(3c,02,24,00),B(mop_class ,5),I(23,00,00,00),B(_sx_obj0 ,5),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,1f,04),I(73,23,00,00),B(_sx_obj0 ,6),I(1c,24,00,00),B(format ,2),I(3c,02,24,00),B(mop_class ,5),I(23,00,00,00),B(_sx_obj0 ,5),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,1f,03),I(1c,1f,08,34),I(00,00,00,6d),I(23,00,00,00),B(_sx_obj0 ,7),I(86,0f,23,00),B(_sx_obj0 ,8),I(1c,0f,1b,86),I(0f,23,00,00),B(_sx_obj0 ,9),I(1c,0f,1b,86),I(0f,23,00,00),B(_sx_obj0 ,9),I(86,0f,1f,07),I(1c,0f,1b,86),I(0f,1f,12,1c),I(0f,23,00,00),B(_sx_obj0 ,10),I(1c,0f,1b,86),I(0f,23,00,00),B(_sx_obj0 ,9),I(1c,0f,1f,0c),I(1c,0f,1b,86),I(0f,1f,09,1c),I(0f,23,00,00),B(_sx_obj0 ,11),I(1c,0f,22,0f),I(32,00,00,00),I(00,00,00,68),I(23,00,00,00),B(_sx_obj0 ,7),I(86,0f,23,00),B(_sx_obj0 ,8),I(1c,0f,1b,86),I(0f,23,00,00),B(_sx_obj0 ,9),I(1c,0f,1b,86),I(0f,23,00,00),B(_sx_obj0 ,9),I(86,0f,1f,07),I(1c,0f,1f,11),I(86,0f,1c,1c),I(0f,23,00,00),B(_sx_obj0 ,12),I(1c,0f,1b,86),I(0f,23,00,00),B(_sx_obj0 ,9),I(1c,0f,1f,0c),I(1c,0f,1b,86),I(0f,1f,09,1c),I(0f,23,00,00),B(_sx_obj0 ,11),I(1c,0f,22,0f),I(45,0b,00,00)};

  eul_allocate_static_string(str_145, "-", 1);
  eul_allocate_static_string(str_146, "?", 1);
  eul_allocate_static_string(str_147, "!", 1);
  /* Byte-vector with size: 60 is_init: 0 index: 21 binding: anonymous */
  static const void *G00143[] = {I(ab,1b,34,00),I(00,00,00,ea),I(1c,82,02,1b),I(06,1b,2c,1d),I(83,1d,24,00),B(string ,6),I(3c,03,23,00),B(_sx_obj0 ,14),I(24,00,00,00),B(collect ,19),I(3c,02,1f,04),I(10,82,02,24),B(mop_class ,81),I(23,00,00,00),B(_sx_obj0 ,5),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,1d,1d),I(23,00,00,00),B(_sx_obj0 ,15),I(24,00,00,00),B(collect ,19),I(3c,03,24,00),B(mop_class ,5),I(23,00,00,00),B(_sx_obj0 ,5),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,1f,04),I(1f,04,23,00),B(_sx_obj0 ,16),I(24,00,00,00),B(collect ,19),I(3c,03,24,00),B(mop_class ,5),I(23,00,00,00),B(_sx_obj0 ,5),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,1b,47),I(00,01,0f,1f),I(03,1c,0f,1b),I(48,00,01,1f),I(0c,10,1b,23),B(_sx_obj0 ,17),I(1f,09,23,00),B(_sx_obj0 ,18),I(86,23,00,00),B(_sx_obj0 ,19),I(1f,0b,23,00),B(_sx_obj0 ,20),I(1f,0b,24,00),B(boot1 ,25),I(3c,09,1f,0e),I(11,1f,10,1c),I(47,00,00,3c),I(02,1d,1c,0f),I(22,10,32,00),I(00,00,00,07),I(86,45,02,00)};

  eul_allocate_static_string(str_154, "?", 1);
  /* Byte-vector with size: 43 is_init: 0 index: 28 binding: def-syntax-obj */
  static const void *G00152[] = {I(43,fc,46,03),I(1f,03,82,02),I(1b,06,1b,2c),I(1d,83,1d,24),B(string ,6),I(3c,03,23,00),B(_sx_obj0 ,22),I(24,00,00,00),B(collect ,19),I(3c,02,24,00),B(mop_class ,5),I(23,00,00,00),B(_sx_obj0 ,5),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,86,1b),I(48,00,01,86),I(1b,48,00,00),I(23,00,00,00),B(_sx_obj0 ,23),I(23,00,00,00),B(_sx_obj0 ,21),I(3b,02,48,00),I(00,1f,0a,1f),I(09,47,00,00),I(3c,02,1f,03),I(1f,09,0f,23),B(_sx_obj0 ,24),I(1c,0f,1d,1c),I(0f,1f,0d,1c),I(0f,1f,0f,1c),I(0f,23,00,00),B(_sx_obj0 ,25),I(1c,0f,1f,09),I(47,00,01,0f),I(1f,12,1c,0f),I(23,00,00,00),B(_sx_obj0 ,26),I(1c,0f,1b,86),I(0f,1f,04,1c),I(0f,23,00,00),B(_sx_obj0 ,27),I(1c,0f,45,17)};

  /* Byte-vector with size: 20 is_init: 1 index: 0 binding: initialize-_sx-obj0 */
  static const void *G00160[] = {I(87,25,00,00),B(_sx_obj0 ,1),I(24,00,00,00),B(level1 ,1),I(3e,0b,24,00),B(level1 ,0),I(3c,00,21,01),I(23,00,00,00),B(_sx_obj0 ,29),I(23,00,00,00),B(_sx_obj0 ,28),I(3b,fc,25,00),B(_sx_obj0 ,3),I(23,00,00,00),B(_sx_obj0 ,30),I(23,00,00,00),B(_sx_obj0 ,13),I(3b,fd,25,00),B(_sx_obj0 ,2),I(86,ac,00,00)};


  /* Initializations */
  object_class(str_134) = eul_static_string_class;
  eul_intern_keyword(key_135,"name");
  object_class(str_136) = eul_static_string_class;
  eul_intern_symbol(sym_137,"*actual-module*");
  eul_intern_symbol(sym_138,"dynamic");
  eul_intern_symbol(sym_139,"m");
  eul_intern_symbol(sym_140,"cons");
  eul_intern_symbol(sym_141,"let");
  eul_intern_symbol(sym_142,"tconc");
  eul_allocate_bytevector( G00133,G00132);
  object_class(str_145) = eul_static_string_class;
  object_class(str_146) = eul_static_string_class;
  object_class(str_147) = eul_static_string_class;
  eul_intern_keyword(key_148,"keyword");
  eul_intern_keyword(key_149,"default");
  eul_intern_keyword(key_150,"reader");
  eul_intern_keyword(key_151,"writer");
  eul_allocate_bytevector( G00144,G00143);
  object_class(str_154) = eul_static_string_class;
  eul_intern_symbol(sym_155,"anonymous");
  eul_intern_keyword(key_156,"predicate");
  eul_intern_symbol(sym_157,"defclass");
  eul_intern_symbol(sym_158,"export");
  eul_intern_symbol(sym_159,"progn");
  eul_allocate_bytevector( G00153,G00152);
  eul_intern_symbol(sym_162,"def-syntax-obj");
  eul_intern_symbol(sym_163,"new-node");
  eul_allocate_bytevector( G00161,G00160);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 4; i++)
      _sx_obj0_bindings[i] = eul_nil;
  }

  _sx_obj0_bindings[ 4] = str_134;
  _sx_obj0_bindings[ 5] = key_135;
  _sx_obj0_bindings[ 6] = str_136;
  _sx_obj0_bindings[ 7] = sym_137;
  _sx_obj0_bindings[ 8] = sym_138;
  _sx_obj0_bindings[ 9] = sym_139;
  _sx_obj0_bindings[ 10] = sym_140;
  _sx_obj0_bindings[ 11] = sym_141;
  _sx_obj0_bindings[ 12] = sym_142;
  _sx_obj0_bindings[ 13] = G00133;
  _sx_obj0_bindings[ 14] = str_145;
  _sx_obj0_bindings[ 15] = str_146;
  _sx_obj0_bindings[ 16] = str_147;
  _sx_obj0_bindings[ 17] = key_148;
  _sx_obj0_bindings[ 18] = key_149;
  _sx_obj0_bindings[ 19] = key_150;
  _sx_obj0_bindings[ 20] = key_151;
  _sx_obj0_bindings[ 21] = G00144;
  _sx_obj0_bindings[ 22] = str_154;
  _sx_obj0_bindings[ 23] = sym_155;
  _sx_obj0_bindings[ 24] = key_156;
  _sx_obj0_bindings[ 25] = sym_157;
  _sx_obj0_bindings[ 26] = sym_158;
  _sx_obj0_bindings[ 27] = sym_159;
  _sx_obj0_bindings[ 28] = G00153;
  _sx_obj0_bindings[ 1] = eul_nil;
  _sx_obj0_bindings[ 29] = sym_162;
  _sx_obj0_bindings[ 30] = sym_163;
  eul_allocate_lambda( _sx_obj0_bindings[0], "initialize-_sx-obj0", 0, G00161);

  }
}


/* eof */
