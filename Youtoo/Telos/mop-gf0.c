/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module mop-gf0
 **  Copyright: See file mop-gf0.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_level_1();
extern LispRef level_1_bindings[];
extern LispRef symbol_bindings[];
extern LispRef collect_bindings[];
extern LispRef boot_bindings[];
extern LispRef mop_key_bindings[];

/* Module bindings with size 40 */
LispRef mop_gf0_bindings[40];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module mop-gf0 */
void initialize_module_mop_gf0()
{
  if (is_initialized) return;
  initialize_module_level_1();
  eul_fast_table_set(eul_modules,"mop_gf0",(LispRef) mop_gf0_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_220, sym_219, sym_218, sym_217, G00216, sym_214, G00208, G00206, G00204, sym_202, G00201, sym_199, sym_198, key_196, key_194, sym_190, sym_189, sym_188, sym_184, sym_181, sym_180, sym_179, key_178, sym_177, key_176, sym_175, key_174, G00173, sym_171, G00170;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 5 is_init: 0 index: 7 binding: anonymous */
  static const void *G00169[] = {I(aa,1b,7a,12),I(1b,44,08,23),B(mop_gf0 ,6),I(36,03,1c,73),I(45,02,00,00)};

  eul_allocate_static_cons(cons_183, NULL, NULL);
  eul_allocate_static_cons(cons_182, NULL, eul_as_static(cons_183));
  eul_allocate_static_cons(cons_186, NULL, NULL);
  eul_allocate_static_cons(cons_185, NULL, eul_as_static(cons_186));
  eul_allocate_static_string(str_187, "bad name for generic function ~a", 32);
  eul_allocate_static_cons(cons_197, NULL, NULL);
  eul_allocate_static_cons(cons_195, NULL, eul_as_static(cons_197));
  eul_allocate_static_cons(cons_193, NULL, eul_as_static(cons_195));
  eul_allocate_static_cons(cons_192, NULL, eul_as_static(cons_193));
  eul_allocate_static_cons(cons_191, NULL, eul_as_static(cons_192));
  /* Byte-vector with size: 94 is_init: 0 index: 28 binding: defgeneric */
  static const void *G00172[] = {I(43,fd,23,00),B(mop_gf0 ,8),I(1c,23,00,00),B(mop_gf0 ,9),I(24,00,00,00),B(mop_key ,2),I(3c,03,23,00),B(mop_gf0 ,10),I(1d,23,00,00),B(mop_gf0 ,11),I(24,00,00,00),B(mop_key ,2),I(3c,03,23,00),B(mop_gf0 ,12),I(1f,03,86,24),B(mop_key ,2),I(3c,03,1f,04),I(24,00,00,00),B(mop_gf0 ,4),I(3c,01,23,00),B(mop_gf0 ,13),I(23,00,00,00),B(mop_gf0 ,7),I(3b,01,1c,24),B(boot ,11),I(3c,02,1f,07),I(1f,08,7c,1b),I(44,09,23,00),B(mop_gf0 ,14),I(36,65,1f,09),I(7a,1b,44,0c),I(1f,0a,10,23),B(mop_gf0 ,15),I(50,36,02,86),I(1b,44,12,1f),I(0b,73,1b,20),I(05,23,00,00),B(mop_gf0 ,16),I(22,01,36,3d),I(1f,0b,7a,1b),I(44,0e,1f,0c),I(10,23,00,00),B(mop_gf0 ,17),I(50,36,02,86),I(1b,44,12,1f),I(0d,73,1b,20),I(07,23,00,00),B(mop_gf0 ,18),I(22,01,36,13),I(86,23,00,00),B(mop_gf0 ,19),I(1f,0f,24,00),B(boot ,13),I(3c,03,22,02),I(22,02,1f,0a),I(86,0f,23,00),B(mop_gf0 ,20),I(1c,0f,1f,05),I(24,00,00,00),B(collect ,9),I(3c,01,1b,1f),I(07,0f,23,00),B(mop_gf0 ,21),I(1c,0f,23,00),B(mop_gf0 ,22),I(1f,0b,0f,1f),I(0e,23,00,00),B(mop_gf0 ,25),I(24,00,00,00),B(mop_key ,3),I(3c,02,23,00),B(mop_gf0 ,22),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,1f,10,1c),I(0f,1f,12,1c),I(0f,1f,07,1c),I(0f,1f,0b,1c),I(0f,23,00,00),B(mop_gf0 ,26),I(1c,0f,1b,86),I(0f,1f,12,1c),I(0f,1f,11,1c),I(0f,1f,1c,1f),I(1b,24,00,00),B(mop_gf0 ,3),I(3c,02,1f,1d),I(86,0f,1c,1c),I(24,00,00,00),B(boot ,8),I(3c,02,1f,03),I(1c,0f,23,00),B(mop_gf0 ,27),I(1c,0f,45,21)};

  /* Byte-vector with size: 20 is_init: 0 index: 30 binding: do-defgeneric-methods */
  static const void *G00200[] = {I(ab,1b,12,1b),I(44,04,86,36),I(43,1c,10,23),B(mop_gf0 ,23),I(50,1b,44,26),I(1d,73,1f,04),I(1c,0f,23,00),B(mop_gf0 ,29),I(1c,0f,1f,05),I(75,1f,07,1c),I(24,00,00,00),B(mop_gf0 ,3),I(3c,02,1d,1c),I(0f,22,05,36),I(11,1d,75,1f),I(04,1c,24,00),B(mop_gf0 ,3),I(3d,02,05,22),I(01,22,01,45),I(03,00,00,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 31 binding: required-args */
  static const void *G00203[] = {I(aa,1b,7a,12),I(1b,44,04,86),I(36,12,1c,10),I(1d,11,1b,24),B(mop_gf0 ,4),I(3c,01,1d,1c),I(0f,22,03,45),I(02,00,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 32 binding: anonymous */
  static const void *G00205[] = {I(aa,1b,7a,12),I(1b,44,08,23),B(mop_gf0 ,6),I(36,03,1c,73),I(45,02,00,00)};

  eul_allocate_static_cons(cons_213, NULL, NULL);
  eul_allocate_static_cons(cons_212, NULL, eul_as_static(cons_213));
  eul_allocate_static_cons(cons_211, NULL, eul_as_static(cons_212));
  eul_allocate_static_cons(cons_210, NULL, eul_as_static(cons_211));
  eul_allocate_static_cons(cons_209, NULL, eul_as_static(cons_210));
  /* Byte-vector with size: 73 is_init: 0 index: 35 binding: generic-lambda */
  static const void *G00207[] = {I(a7,23,00,00),B(mop_gf0 ,8),I(1c,23,00,00),B(mop_gf0 ,9),I(24,00,00,00),B(mop_key ,2),I(3c,03,23,00),B(mop_gf0 ,10),I(1d,23,00,00),B(mop_gf0 ,11),I(24,00,00,00),B(mop_key ,2),I(3c,03,23,00),B(mop_gf0 ,12),I(1f,03,86,24),B(mop_key ,2),I(3c,03,23,00),B(mop_gf0 ,24),I(1f,04,23,00),B(mop_gf0 ,13),I(24,00,00,00),B(mop_key ,2),I(3c,03,1f,05),I(24,00,00,00),B(mop_gf0 ,4),I(3c,01,23,00),B(mop_gf0 ,13),I(23,00,00,00),B(mop_gf0 ,32),I(3b,01,1c,24),B(collect ,2),I(3c,02,24,00),B(symbol ,6),I(3c,00,1f,03),I(86,0f,23,00),B(mop_gf0 ,20),I(1c,0f,1f,03),I(24,00,00,00),B(collect ,9),I(3c,01,1b,1f),I(05,0f,23,00),B(mop_gf0 ,21),I(1c,0f,23,00),B(mop_gf0 ,22),I(1f,0a,0f,1f),I(0d,23,00,00),B(mop_gf0 ,33),I(24,00,00,00),B(mop_key ,3),I(3c,02,23,00),B(mop_gf0 ,22),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,1f,0f,1c),I(0f,1f,11,1c),I(0f,1f,07,1c),I(0f,1f,0b,1c),I(0f,23,00,00),B(mop_gf0 ,26),I(1c,0f,1b,86),I(0f,1f,10,1c),I(0f,1b,86,0f),I(1f,12,1f,1a),I(24,00,00,00),B(mop_gf0 ,3),I(3c,02,1f,13),I(86,0f,1c,1c),I(24,00,00,00),B(boot ,8),I(3c,02,1f,03),I(1c,0f,23,00),B(mop_gf0 ,34),I(1c,0f,45,1f)};

  /* Byte-vector with size: 32 is_init: 1 index: 0 binding: initialize-mop-gf0 */
  static const void *G00215[] = {I(87,25,00,00),B(mop_gf0 ,1),I(24,00,00,00),B(level_1 ,1),I(3e,0b,24,00),B(level_1 ,0),I(3c,00,21,01),I(23,00,00,00),B(mop_gf0 ,36),I(23,00,00,00),B(mop_gf0 ,35),I(3b,fe,25,00),B(mop_gf0 ,5),I(23,00,00,00),B(mop_gf0 ,37),I(23,00,00,00),B(mop_gf0 ,31),I(3b,01,25,00),B(mop_gf0 ,4),I(23,00,00,00),B(mop_gf0 ,38),I(23,00,00,00),B(mop_gf0 ,30),I(3b,02,25,00),B(mop_gf0 ,3),I(23,00,00,00),B(mop_gf0 ,39),I(23,00,00,00),B(mop_gf0 ,28),I(3b,fd,25,00),B(mop_gf0 ,2),I(86,ac,00,00)};


  /* Initializations */
  eul_intern_symbol(sym_171,"<object>");
  eul_allocate_bytevector( G00170,G00169);
  eul_intern_keyword(key_174,"class");
  eul_intern_symbol(sym_175,"<simple-generic-function>");
  eul_intern_keyword(key_176,"method-class");
  eul_intern_symbol(sym_177,"<simple-method>");
  eul_intern_keyword(key_178,"method-keywords");
  eul_intern_symbol(sym_179,"anonymous");
  eul_intern_symbol(sym_180,"deflocal");
  eul_intern_symbol(sym_181,"setter");
  object_class(cons_183) = eul_static_cons_class;
  eul_car(cons_183) = sym_181;
  eul_cdr(cons_183) = eul_nil;
  object_class(cons_182) = eul_static_cons_class;
  eul_car(cons_182) = sym_181;
  eul_intern_symbol(sym_184,"converter");
  object_class(cons_186) = eul_static_cons_class;
  eul_car(cons_186) = sym_184;
  eul_cdr(cons_186) = eul_nil;
  object_class(cons_185) = eul_static_cons_class;
  eul_car(cons_185) = sym_181;
  object_class(str_187) = eul_static_string_class;
  eul_intern_symbol(sym_188,"quote");
  eul_intern_symbol(sym_189,"make-vector");
  eul_intern_symbol(sym_190,"list");
  eul_intern_keyword(key_194,"method");
  eul_intern_keyword(key_196,"name");
  object_class(cons_197) = eul_static_cons_class;
  eul_car(cons_197) = key_178;
  eul_cdr(cons_197) = eul_nil;
  object_class(cons_195) = eul_static_cons_class;
  eul_car(cons_195) = key_196;
  object_class(cons_193) = eul_static_cons_class;
  eul_car(cons_193) = key_194;
  object_class(cons_192) = eul_static_cons_class;
  eul_car(cons_192) = key_176;
  object_class(cons_191) = eul_static_cons_class;
  eul_car(cons_191) = key_174;
  eul_intern_symbol(sym_198,"make-generic-function");
  eul_intern_symbol(sym_199,"progn");
  eul_allocate_bytevector( G00173,G00172);
  eul_intern_symbol(sym_202,"defmethod");
  eul_allocate_bytevector( G00201,G00200);
  eul_allocate_bytevector( G00204,G00203);
  eul_allocate_bytevector( G00206,G00205);
  object_class(cons_213) = eul_static_cons_class;
  eul_car(cons_213) = key_178;
  eul_cdr(cons_213) = eul_nil;
  object_class(cons_212) = eul_static_cons_class;
  eul_car(cons_212) = key_196;
  object_class(cons_211) = eul_static_cons_class;
  eul_car(cons_211) = key_194;
  object_class(cons_210) = eul_static_cons_class;
  eul_car(cons_210) = key_176;
  object_class(cons_209) = eul_static_cons_class;
  eul_car(cons_209) = key_174;
  eul_intern_symbol(sym_214,"let");
  eul_allocate_bytevector( G00208,G00207);
  eul_intern_symbol(sym_217,"generic-lambda");
  eul_intern_symbol(sym_218,"required-args");
  eul_intern_symbol(sym_219,"do-defgeneric-methods");
  eul_intern_symbol(sym_220,"defgeneric");
  eul_allocate_bytevector( G00216,G00215);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 6; i++)
      mop_gf0_bindings[i] = eul_nil;
  }

  mop_gf0_bindings[ 6] = sym_171;
  mop_gf0_bindings[ 7] = G00170;
  mop_gf0_bindings[ 8] = key_174;
  mop_gf0_bindings[ 9] = sym_175;
  mop_gf0_bindings[ 10] = key_176;
  mop_gf0_bindings[ 11] = sym_177;
  mop_gf0_bindings[ 12] = key_178;
  mop_gf0_bindings[ 13] = sym_179;
  mop_gf0_bindings[ 14] = sym_180;
  mop_gf0_bindings[ 15] = sym_181;
  mop_gf0_bindings[ 16] = cons_182;
  mop_gf0_bindings[ 17] = sym_184;
  mop_gf0_bindings[ 18] = cons_185;
  mop_gf0_bindings[ 19] = str_187;
  mop_gf0_bindings[ 20] = sym_188;
  mop_gf0_bindings[ 21] = sym_189;
  mop_gf0_bindings[ 22] = sym_190;
  mop_gf0_bindings[ 23] = key_194;
  mop_gf0_bindings[ 24] = key_196;
  mop_gf0_bindings[ 25] = cons_191;
  mop_gf0_bindings[ 26] = sym_198;
  mop_gf0_bindings[ 27] = sym_199;
  mop_gf0_bindings[ 28] = G00173;
  mop_gf0_bindings[ 29] = sym_202;
  mop_gf0_bindings[ 30] = G00201;
  mop_gf0_bindings[ 31] = G00204;
  mop_gf0_bindings[ 32] = G00206;
  mop_gf0_bindings[ 33] = cons_209;
  mop_gf0_bindings[ 34] = sym_214;
  mop_gf0_bindings[ 35] = G00208;
  mop_gf0_bindings[ 1] = eul_nil;
  mop_gf0_bindings[ 36] = sym_217;
  mop_gf0_bindings[ 37] = sym_218;
  mop_gf0_bindings[ 38] = sym_219;
  mop_gf0_bindings[ 39] = sym_220;
  eul_allocate_lambda( mop_gf0_bindings[0], "initialize-mop-gf0", 0, G00216);

  }
}


/* eof */
