/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module sx-obj0
 **  Copyright: See file sx-obj0.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_level1();
extern LispRef level1_bindings[];
extern LispRef boot1_bindings[];
extern LispRef collect_bindings[];
extern LispRef string_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef mop_gf_bindings[];

/* Module bindings with size 32 */
LispRef sx_obj0_bindings[32];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module sx-obj0 */
void initialize_module_sx_obj0()
{
  if (is_initialized) return;
  initialize_module_level1();
  eul_fast_table_set(eul_modules,"sx_obj0",(LispRef) sx_obj0_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_168, sym_167, G00166, sym_164, sym_163, sym_162, key_161, sym_160, G00157, key_155, key_154, key_153, key_152, G00148, sym_146, sym_145, sym_144, sym_143, sym_142, sym_141, key_139, G00137;

  /* Code vector and literal definitions */
  eul_allocate_static_string(str_138, "module-~as?", 11);
  eul_allocate_static_string(str_140, "module-~as!", 11);
  /* Byte-vector with size: 76 is_init: 0 index: 13 binding: new-node */
  static const void *G00136[] = {I(43,fd,1c,73),I(86,23,00,00),B(sx_obj0 ,4),I(1d,24,00,00),B(mop_gf ,17),I(3c,03,24,00),B(mop_class ,5),I(23,00,00,00),B(sx_obj0 ,5),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,1f,04),I(73,86,23,00),B(sx_obj0 ,6),I(1d,24,00,00),B(mop_gf ,17),I(3c,03,24,00),B(mop_class ,5),I(23,00,00,00),B(sx_obj0 ,5),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,1f,03),I(1c,1f,08,34),I(00,00,00,6d),I(23,00,00,00),B(sx_obj0 ,7),I(86,0f,23,00),B(sx_obj0 ,8),I(1c,0f,1b,86),I(0f,23,00,00),B(sx_obj0 ,9),I(1c,0f,1b,86),I(0f,23,00,00),B(sx_obj0 ,9),I(86,0f,1f,07),I(1c,0f,1b,86),I(0f,1f,12,1c),I(0f,23,00,00),B(sx_obj0 ,10),I(1c,0f,1b,86),I(0f,23,00,00),B(sx_obj0 ,9),I(1c,0f,1f,0c),I(1c,0f,1b,86),I(0f,1f,09,1c),I(0f,23,00,00),B(sx_obj0 ,11),I(1c,0f,22,0f),I(32,00,00,00),I(00,00,00,68),I(23,00,00,00),B(sx_obj0 ,7),I(86,0f,23,00),B(sx_obj0 ,8),I(1c,0f,1b,86),I(0f,23,00,00),B(sx_obj0 ,9),I(1c,0f,1b,86),I(0f,23,00,00),B(sx_obj0 ,9),I(86,0f,1f,07),I(1c,0f,1f,11),I(86,0f,1c,1c),I(0f,23,00,00),B(sx_obj0 ,12),I(1c,0f,1b,86),I(0f,23,00,00),B(sx_obj0 ,9),I(1c,0f,1f,0c),I(1c,0f,1b,86),I(0f,1f,09,1c),I(0f,23,00,00),B(sx_obj0 ,11),I(1c,0f,22,0f),I(45,0b,00,00)};

  eul_allocate_static_string(str_149, "-", 1);
  eul_allocate_static_string(str_150, "?", 1);
  eul_allocate_static_string(str_151, "!", 1);
  /* Byte-vector with size: 60 is_init: 0 index: 21 binding: anonymous */
  static const void *G00147[] = {I(ab,1b,34,00),I(00,00,00,ea),I(1c,82,02,1b),I(06,1b,2c,1d),I(83,1d,24,00),B(string ,6),I(3c,03,23,00),B(sx_obj0 ,14),I(24,00,00,00),B(collect ,19),I(3c,02,1f,04),I(10,82,02,24),B(mop_class ,81),I(23,00,00,00),B(sx_obj0 ,5),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,1d,1d),I(23,00,00,00),B(sx_obj0 ,15),I(24,00,00,00),B(collect ,19),I(3c,03,24,00),B(mop_class ,5),I(23,00,00,00),B(sx_obj0 ,5),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,1f,04),I(1f,04,23,00),B(sx_obj0 ,16),I(24,00,00,00),B(collect ,19),I(3c,03,24,00),B(mop_class ,5),I(23,00,00,00),B(sx_obj0 ,5),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,1b,47),I(00,01,0f,1f),I(03,1c,0f,1b),I(48,00,01,1f),I(0c,10,1b,23),B(sx_obj0 ,17),I(1f,09,23,00),B(sx_obj0 ,18),I(86,23,00,00),B(sx_obj0 ,19),I(1f,0b,23,00),B(sx_obj0 ,20),I(1f,0b,24,00),B(boot1 ,25),I(3c,09,1f,0e),I(11,1f,10,1c),I(47,00,00,3c),I(02,1d,1c,0f),I(22,10,32,00),I(00,00,00,07),I(86,45,02,00)};

  eul_allocate_static_string(str_158, "-p", 2);
  eul_allocate_static_string(str_159, "p", 1);
  /* Byte-vector with size: 52 is_init: 0 index: 29 binding: def-syntax-obj */
  static const void *G00156[] = {I(43,fc,46,03),I(1f,03,82,02),I(1b,06,1b,2c),I(1d,83,1d,24),B(string ,6),I(3c,03,27,2d),I(1f,04,24,00),B(collect ,13),I(3c,02,1b,34),I(00,00,00,15),I(23,00,00,00),B(sx_obj0 ,22),I(32,00,00,00),I(00,00,00,10),I(23,00,00,00),B(sx_obj0 ,23),I(1d,1c,24,00),B(collect ,19),I(3c,02,24,00),B(mop_class ,5),I(23,00,00,00),B(sx_obj0 ,5),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,86,1b),I(48,00,01,86),I(1b,48,00,00),I(23,00,00,00),B(sx_obj0 ,24),I(23,00,00,00),B(sx_obj0 ,21),I(3b,02,48,00),I(00,1f,0d,1f),I(0c,47,00,00),I(3c,02,1f,03),I(1f,0c,0f,23),B(sx_obj0 ,25),I(1c,0f,1d,1c),I(0f,1f,10,1c),I(0f,1f,12,1c),I(0f,23,00,00),B(sx_obj0 ,26),I(1c,0f,1f,09),I(47,00,01,0f),I(1f,15,1c,0f),I(23,00,00,00),B(sx_obj0 ,27),I(1c,0f,1b,86),I(0f,1f,04,1c),I(0f,23,00,00),B(sx_obj0 ,28),I(1c,0f,45,1a)};

  /* Byte-vector with size: 20 is_init: 1 index: 0 binding: initialize-sx-obj0 */
  static const void *G00165[] = {I(87,25,00,00),B(sx_obj0 ,1),I(24,00,00,00),B(level1 ,1),I(3e,0b,24,00),B(level1 ,0),I(3c,00,21,01),I(23,00,00,00),B(sx_obj0 ,30),I(23,00,00,00),B(sx_obj0 ,29),I(3b,fc,25,00),B(sx_obj0 ,3),I(23,00,00,00),B(sx_obj0 ,31),I(23,00,00,00),B(sx_obj0 ,13),I(3b,fd,25,00),B(sx_obj0 ,2),I(86,ac,00,00)};


  /* Initializations */
  object_class(str_138) = eul_static_string_class;
  eul_intern_keyword(key_139,"name");
  object_class(str_140) = eul_static_string_class;
  eul_intern_symbol(sym_141,"*actual-module*");
  eul_intern_symbol(sym_142,"dynamic");
  eul_intern_symbol(sym_143,"m");
  eul_intern_symbol(sym_144,"cons");
  eul_intern_symbol(sym_145,"let");
  eul_intern_symbol(sym_146,"tconc");
  eul_allocate_bytevector( G00137,G00136);
  object_class(str_149) = eul_static_string_class;
  object_class(str_150) = eul_static_string_class;
  object_class(str_151) = eul_static_string_class;
  eul_intern_keyword(key_152,"keyword");
  eul_intern_keyword(key_153,"default");
  eul_intern_keyword(key_154,"reader");
  eul_intern_keyword(key_155,"writer");
  eul_allocate_bytevector( G00148,G00147);
  object_class(str_158) = eul_static_string_class;
  object_class(str_159) = eul_static_string_class;
  eul_intern_symbol(sym_160,"anonymous");
  eul_intern_keyword(key_161,"predicate");
  eul_intern_symbol(sym_162,"defclass");
  eul_intern_symbol(sym_163,"export");
  eul_intern_symbol(sym_164,"progn");
  eul_allocate_bytevector( G00157,G00156);
  eul_intern_symbol(sym_167,"def-syntax-obj");
  eul_intern_symbol(sym_168,"new-node");
  eul_allocate_bytevector( G00166,G00165);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 4; i++)
      sx_obj0_bindings[i] = eul_nil;
  }

  sx_obj0_bindings[ 4] = str_138;
  sx_obj0_bindings[ 5] = key_139;
  sx_obj0_bindings[ 6] = str_140;
  sx_obj0_bindings[ 7] = sym_141;
  sx_obj0_bindings[ 8] = sym_142;
  sx_obj0_bindings[ 9] = sym_143;
  sx_obj0_bindings[ 10] = sym_144;
  sx_obj0_bindings[ 11] = sym_145;
  sx_obj0_bindings[ 12] = sym_146;
  sx_obj0_bindings[ 13] = G00137;
  sx_obj0_bindings[ 14] = str_149;
  sx_obj0_bindings[ 15] = str_150;
  sx_obj0_bindings[ 16] = str_151;
  sx_obj0_bindings[ 17] = key_152;
  sx_obj0_bindings[ 18] = key_153;
  sx_obj0_bindings[ 19] = key_154;
  sx_obj0_bindings[ 20] = key_155;
  sx_obj0_bindings[ 21] = G00148;
  sx_obj0_bindings[ 22] = str_158;
  sx_obj0_bindings[ 23] = str_159;
  sx_obj0_bindings[ 24] = sym_160;
  sx_obj0_bindings[ 25] = key_161;
  sx_obj0_bindings[ 26] = sym_162;
  sx_obj0_bindings[ 27] = sym_163;
  sx_obj0_bindings[ 28] = sym_164;
  sx_obj0_bindings[ 29] = G00157;
  sx_obj0_bindings[ 1] = eul_nil;
  sx_obj0_bindings[ 30] = sym_167;
  sx_obj0_bindings[ 31] = sym_168;
  eul_allocate_lambda( sx_obj0_bindings[0], "initialize-sx-obj0", 0, G00166);

  }
}


/* eof */
