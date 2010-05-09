/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module eval
 **  Copyright: See file eval.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern void initialize_module_i_args();
extern void initialize_module_i_compile();
extern void initialize_module_i_modify();
extern void initialize_module_cg_interf();
extern void initialize_module_i_rep();
extern LispRef i_modify_bindings[];
extern LispRef i_all_bindings[];
extern LispRef i_args_bindings[];
extern LispRef dynamic_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef stream_bindings[];
extern LispRef stream2_bindings[];
extern LispRef i_error_bindings[];
extern LispRef boot_bindings[];
extern LispRef boot1_bindings[];
extern LispRef i_rep_bindings[];
extern LispRef i_notify_bindings[];
extern LispRef i_compile_bindings[];
extern LispRef cg_interf_bindings[];
extern LispRef i_param_bindings[];

/* Module bindings with size 16 */
LispRef eval_bindings[16];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module eval */
void initialize_module_eval()
{
  if (is_initialized) return;
  initialize_module_i_all();
  initialize_module_i_args();
  initialize_module_i_compile();
  initialize_module_i_modify();
  initialize_module_cg_interf();
  initialize_module_i_rep();
  eul_fast_table_set(eul_modules,"eval",(LispRef) eval_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_9266, sym_9265, G009264, sym_9262, G009261, G009259, G009257, sym_9255, G009252, G009249;

  /* Code vector and literal definitions */
  eul_allocate_static_string(str_9250, "Module ~a need not be recompiled.", 33);
  /* Byte-vector with size: 18 is_init: 0 index: 5 binding: anonymous */
  static const void *G009248[] = {I(aa,1b,89,00),B(i_param ,24),I(2a,1b,24,00),B(cg_interf ,7),I(3c,01,1b,34),I(00,00,00,15),I(1c,24,00,00),B(i_compile ,10),I(3c,01,32,00),I(00,00,00,18),I(23,00,00,00),B(eval ,4),I(1d,24,00,00),B(i_notify ,3),I(3c,02,2a,1c),I(24,00,00,00),B(i_compile ,3),I(3d,01,02,00)};

  eul_allocate_static_string(str_9253, "", 0);
  eul_allocate_static_string(str_9254, "Start EuLysses ...", 18);
  /* Byte-vector with size: 33 is_init: 0 index: 9 binding: start-eulysses */
  static const void *G009251[] = {I(a9,23,00,00),B(eval ,6),I(24,00,00,00),B(i_notify ,3),I(3c,01,2a,23),B(eval ,7),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,24),B(i_param ,10),I(34,00,00,00),I(00,00,00,24),I(24,00,00,00),B(i_rep ,6),I(3c,00,2a,82),I(24,00,00,00),B(boot1 ,22),I(3d,01,00,32),I(00,00,00,38),I(24,00,00,00),B(cg_interf ,4),I(3c,00,2a,23),B(eval ,8),I(23,00,00,00),B(eval ,5),I(3b,01,24,00),B(i_param ,34),I(24,00,00,00),B(boot ,4),I(3c,02,2a,24),B(i_error ,2),I(3d,00,00,45),I(00,00,00,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 10 binding: (method-G009207) */
  static const void *G009256[] = {I(ab,1c,24,00),B(stream2 ,10),I(24,00,00,00),B(stream ,8),I(3c,02,2a,85),I(24,00,00,00),B(i_error ,2),I(3d,01,02,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 11 binding: (method-G009207) */
  static const void *G009258[] = {I(ab,86,45,02)};

  /* Byte-vector with size: 100 is_init: 0 index: 13 binding: main */
  static const void *G009260[] = {I(aa,84,24,00),B(mop_class ,21),I(24,00,00,00),B(mop_class ,21),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(eval ,8),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,26),I(00,00,00,03),I(02,84,86,86),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,03),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(eval ,12),I(23,00,00,00),B(eval ,11),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,07),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(i_error ,5),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,0a),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(eval ,12),I(23,00,00,00),B(eval ,10),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,0d),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,0e),I(24,00,00,00),B(dynamic ,5),I(3c,01,2a,24),B(i_param ,61),I(3c,00,2a,1f),I(12,24,00,00),B(i_args ,4),I(3c,01,2a,24),B(i_compile ,7),I(3c,00,2a,24),B(i_param ,44),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,17),I(24,00,00,00),B(stream2 ,35),I(89,00,00,00),B(stream2 ,10),I(2a,24,00,00),B(eval ,2),I(3c,00,83,24),B(dynamic ,6),I(3c,01,2a,24),B(stream2 ,35),I(24,00,00,00),B(stream ,2),I(3c,01,2a,24),B(stream2 ,10),I(24,00,00,00),B(stream ,2),I(3d,01,14,00)};

  /* Byte-vector with size: 45 is_init: 1 index: 0 binding: initialize-eval */
  static const void *G009263[] = {I(87,25,00,00),B(eval ,1),I(24,00,00,00),B(i_rep ,1),I(3e,0b,24,00),B(i_rep ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_interf ,1),I(3e,0b,24,00),B(cg_interf ,0),I(3c,00,21,01),I(24,00,00,00),B(i_modify ,1),I(3e,0b,24,00),B(i_modify ,0),I(3c,00,21,01),I(24,00,00,00),B(i_compile ,1),I(3e,0b,24,00),B(i_compile ,0),I(3c,00,21,01),I(24,00,00,00),B(i_args ,1),I(3e,0b,24,00),B(i_args ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(23,00,00,00),B(eval ,14),I(23,00,00,00),B(eval ,13),I(3b,01,25,00),B(eval ,3),I(23,00,00,00),B(eval ,15),I(23,00,00,00),B(eval ,9),I(3b,00,25,00),B(eval ,2),I(86,ac,00,00)};


  /* Initializations */
  object_class(str_9250) = eul_static_string_class;
  eul_allocate_bytevector( G009249,G009248);
  object_class(str_9253) = eul_static_string_class;
  object_class(str_9254) = eul_static_string_class;
  eul_intern_symbol(sym_9255,"anonymous");
  eul_allocate_bytevector( G009252,G009251);
  eul_allocate_bytevector( G009257,G009256);
  eul_allocate_bytevector( G009259,G009258);
  eul_intern_symbol(sym_9262,"(method G009207)");
  eul_allocate_bytevector( G009261,G009260);
  eul_intern_symbol(sym_9265,"main");
  eul_intern_symbol(sym_9266,"start-eulysses");
  eul_allocate_bytevector( G009264,G009263);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 4; i++)
      eval_bindings[i] = eul_nil;
  }

  eval_bindings[ 4] = str_9250;
  eval_bindings[ 5] = G009249;
  eval_bindings[ 6] = str_9253;
  eval_bindings[ 7] = str_9254;
  eval_bindings[ 8] = sym_9255;
  eval_bindings[ 9] = G009252;
  eval_bindings[ 10] = G009257;
  eval_bindings[ 11] = G009259;
  eval_bindings[ 12] = sym_9262;
  eval_bindings[ 13] = G009261;
  eval_bindings[ 1] = eul_nil;
  eval_bindings[ 14] = sym_9265;
  eval_bindings[ 15] = sym_9266;
  eul_allocate_lambda( eval_bindings[0], "initialize-eval", 0, G009264);

  }
}


/* eof */
