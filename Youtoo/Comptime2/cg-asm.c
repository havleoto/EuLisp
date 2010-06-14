/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module cg-asm
 **  Copyright: See file cg-asm.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern void initialize_module_sx_obj();
extern void initialize_module_cg_bycode1();
extern void initialize_module_cg_bycode2();
extern void initialize_module_cg_state();
extern void initialize_module_op_peep();
extern void initialize_module_op_peep_r();
extern LispRef op_peep_r_bindings[];
extern LispRef cg_bycode2_bindings[];
extern LispRef cg_bycode1_bindings[];
extern LispRef sx_obj_bindings[];
extern LispRef i_all_bindings[];
extern LispRef integer_bindings[];
extern LispRef condition_bindings[];
extern LispRef string_bindings[];
extern LispRef cg_bycode_bindings[];
extern LispRef let_cc_bindings[];
extern LispRef collect_bindings[];
extern LispRef sx_obj1_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef i_error_bindings[];
extern LispRef i_param_bindings[];
extern LispRef mop_access_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef stream2_bindings[];
extern LispRef i_notify_bindings[];
extern LispRef boot_bindings[];
extern LispRef op_peep_bindings[];
extern LispRef cg_state_bindings[];
extern LispRef aux_table_bindings[];
extern LispRef dynamic_bindings[];

/* Module bindings with size 118 */
LispRef cg_asm_bindings[118];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module cg-asm */
void initialize_module_cg_asm()
{
  if (is_initialized) return;
  initialize_module_i_all();
  initialize_module_sx_obj();
  initialize_module_cg_bycode1();
  initialize_module_cg_bycode2();
  initialize_module_cg_state();
  initialize_module_op_peep();
  initialize_module_op_peep_r();
  eul_fast_table_set(eul_modules,"cg_asm",(LispRef) cg_asm_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_6524, sym_6523, sym_6522, sym_6521, sym_6520, sym_6519, sym_6518, sym_6517, sym_6516, sym_6515, sym_6514, sym_6513, sym_6512, sym_6511, sym_6510, sym_6509, sym_6508, sym_6507, G006506, G006504, G006502, G006500, G006497, G006495, G006493, G006491, G006489, G006486, sym_6483, G006482, sym_6480, sym_6479, sym_6478, sym_6477, sym_6476, sym_6475, sym_6474, sym_6473, sym_6472, G006470, G006468, G006465, sym_6463, sym_6461, sym_6460, sym_6459, sym_6458, G006457, G006455, G006452, G006450, sym_6448, sym_6446, sym_6444, G006442, sym_6440, G006438, G006436, G006434, G006431, G006429, G006421, G006419, key_6417, key_6416, sym_6415, sym_6413, G006412, G006410, key_6408, G006405, G006403, sym_6400, sym_6399, sym_6398, G006397, G006395, G006393;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 6 is_init: 0 index: 21 binding: anonymous */
  static const void *G006392[] = {I(a9,83,24,00),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3d,01,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 22 binding: anonymous */
  static const void *G006394[] = {I(aa,1b,47,00),I(01,47,00,00),I(24,00,00,00),B(cg_asm ,12),I(3d,03,01,00)};

  eul_allocate_static_string(str_6401, "  Re-assembling function ~a because of long jump", 48);
  /* Byte-vector with size: 67 is_init: 0 index: 27 binding: assemble-function */
  static const void *G006396[] = {I(43,03,46,02),I(24,00,00,00),B(aux_table ,4),I(3c,00,1b,48),I(00,00,1d,1d),I(24,00,00,00),B(cg_state ,23),I(3c,02,1b,48),I(00,01,1f,04),I(24,00,00,00),B(op_peep ,3),I(3c,01,23,00),B(cg_asm ,23),I(23,00,00,00),B(cg_asm ,22),I(3b,01,1c,24),B(boot ,16),I(3c,02,2a,47),I(00,00,24,00),B(cg_asm ,5),I(3c,01,1b,34),I(00,00,00,39),I(47,00,01,83),I(24,00,00,00),B(cg_state ,38),I(08,1b,24,00),B(boot ,25),I(3c,01,47,00),I(01,1c,1c,83),I(1d,24,00,00),B(cg_state ,38),I(09,22,02,2a),I(47,00,01,22),I(02,32,00,00),I(00,00,00,85),I(23,00,00,00),B(cg_asm ,24),I(87,24,00,00),B(dynamic ,2),I(3c,02,2a,23),B(cg_asm ,25),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(cg_asm ,23),I(23,00,00,00),B(cg_asm ,21),I(3b,00,1c,0f),I(23,00,00,00),B(cg_asm ,25),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,23),B(cg_asm ,26),I(1f,07,24,00),B(i_notify ,4),I(3c,02,2a,1f),I(08,1f,08,1f),I(08,24,00,00),B(cg_asm ,2),I(3c,03,83,24),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3c,01,2a,1b),I(22,03,45,07)};

  /* Byte-vector with size: 1 is_init: 0 index: 28 binding: (method-G005949) */
  static const void *G006402[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_6406, "compile time error condition: ", 30);
  eul_allocate_static_string(str_6407, "assembler error", 15);
  /* Byte-vector with size: 27 is_init: 0 index: 32 binding: (method-G005949) */
  static const void *G006404[] = {I(ab,24,00,00),B(stream2 ,10),I(23,00,00,00),B(cg_asm ,29),I(24,00,00,00),B(mop_gf ,17),I(3c,02,2a,1c),I(24,00,00,00),B(stream2 ,10),I(24,00,00,00),B(mop_access ,3),I(3c,02,2a,24),B(i_param ,57),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,2a),I(23,00,00,00),B(cg_asm ,30),I(24,00,00,00),B(i_error ,5),I(23,00,00,00),B(cg_asm ,31),I(47,00,00,24),B(boot ,12),I(3d,04,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 30 is_init: 0 index: 33 binding: anonymous */
  static const void *G006409[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,68),I(1d,10,1b,26),I(00,00,00,06),I(24,00,00,00),B(cg_state ,12),I(08,1c,26,00),I(00,00,00,05),I(24,00,00,00),B(cg_state ,12),I(08,1d,26,00),I(00,00,00,04),I(24,00,00,00),B(cg_state ,12),I(08,1f,03,82),I(24,00,00,00),B(cg_state ,12),I(08,1b,1f,07),I(47,00,01,3c),I(02,1d,1f,05),I(1f,05,24,00),B(cg_asm ,2),I(3c,03,1f,09),I(11,1c,1f,03),I(0f,47,00,01),I(3d,02,0a,22),I(07,45,03,00)};

  eul_allocate_static_string(str_6414, "  Assembling module ~a ...", 26);
  /* Byte-vector with size: 110 is_init: 0 index: 39 binding: assemble */
  static const void *G006411[] = {I(ab,46,02,1c),I(48,00,00,86),I(1b,48,00,01),I(23,00,00,00),B(cg_asm ,23),I(23,00,00,00),B(cg_asm ,33),I(3b,02,48,00),I(01,84,24,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,43),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(cg_asm ,23),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,26),I(00,00,00,03),I(02,84,86,86),I(24,00,00,00),B(boot1 ,43),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,03),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(cg_asm ,34),I(23,00,00,00),B(cg_asm ,32),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,07),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(i_error ,5),I(86,24,00,00),B(boot1 ,43),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,0a),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(cg_asm ,34),I(23,00,00,00),B(cg_asm ,28),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,0d),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,0e),I(24,00,00,00),B(dynamic ,5),I(3c,01,2a,47),I(00,00,26,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,59),I(08,23,00,00),B(cg_asm ,35),I(1c,24,00,00),B(i_notify ,3),I(3c,02,2a,23),B(cg_asm ,36),I(89,00,00,00),B(i_param ,61),I(2a,1f,14,24),B(boot1 ,26),I(3c,01,86,47),I(00,01,3c,02),I(1b,10,1c,11),I(1b,24,00,00),B(boot ,25),I(3c,01,24,00),B(cg_state ,2),I(23,00,00,00),B(cg_asm ,37),I(1f,04,23,00),B(cg_asm ,38),I(1f,04,24,00),B(mop_gf ,2),I(3c,05,83,24),B(dynamic ,6),I(3c,01,2a,1b),I(45,1b,00,00)};

  /* Byte-vector with size: 23 is_init: 0 index: 40 binding: neg-fix-bytes-aux */
  static const void *G006418[] = {I(43,03,1c,82),I(19,1b,34,00),I(00,00,00,1e),I(26,00,00,00),I(00,00,00,ff),I(1f,04,15,1b),I(1f,03,0f,22),I(01,32,00,00),I(00,00,00,3c),I(1f,03,26,00),I(00,00,01,00),I(18,1f,04,26),I(00,00,01,00),I(17,1f,04,83),I(15,26,00,00),I(00,00,00,ff),I(1f,03,15,1b),I(1f,06,0f,1f),I(03,1f,03,1d),I(24,00,00,00),B(cg_asm ,4),I(3d,03,09,22),I(05,45,04,00)};

  eul_allocate_static_string(str_6422, "jump too long: ~a", 17);
  eul_allocate_static_string(str_6423, "-long-neg", 9);
  eul_allocate_static_string(str_6424, "-neg", 4);
  eul_allocate_static_string(str_6425, "jump too long: ~a", 17);
  eul_allocate_static_string(str_6426, "-long-pos", 9);
  eul_allocate_static_string(str_6427, "-pos", 4);
  /* Byte-vector with size: 94 is_init: 0 index: 47 binding: anonymous */
  static const void *G006420[] = {I(aa,1b,10,1c),I(11,47,00,00),I(1c,15,1b,26),I(ff,ff,fe,00),I(1a,1b,34,00),I(00,00,00,26),I(23,00,00,00),B(cg_asm ,41),I(1d,24,00,00),B(i_notify ,4),I(3c,02,2a,86),I(47,01,00,3d),I(01,05,32,00),I(00,00,01,42),I(1c,26,00,00),I(ff,ff,ff,01),I(1a,1b,34,00),I(00,00,00,42),I(1f,04,23,00),B(cg_asm ,42),I(24,00,00,00),B(cg_asm ,11),I(3c,02,1f,06),I(1c,8f,2a,82),I(1f,04,15,1b),I(26,00,00,00),I(00,00,01,00),I(15,1b,24,00),B(boot1 ,26),I(3c,01,1f,09),I(1c,90,22,04),I(32,00,00,00),I(00,00,00,f6),I(1d,82,1a,1b),I(34,00,00,00),I(00,00,00,3c),I(1f,05,23,00),B(cg_asm ,43),I(24,00,00,00),B(cg_asm ,11),I(3c,02,1f,07),I(1c,8f,2a,82),I(1f,05,15,1b),I(24,00,00,00),B(boot1 ,26),I(3c,01,1f,09),I(1c,90,22,03),I(32,00,00,00),I(00,00,00,b4),I(26,00,00,00),I(00,00,01,ff),I(1f,04,1a,1b),I(34,00,00,00),I(00,00,00,28),I(23,00,00,00),B(cg_asm ,44),I(1f,05,24,00),B(i_notify ,4),I(3c,02,2a,86),I(47,01,00,3d),I(01,08,32,00),I(00,00,00,7c),I(26,00,00,00),I(00,00,00,ff),I(1f,05,1a,1b),I(34,00,00,00),I(00,00,00,40),I(1f,07,23,00),B(cg_asm ,45),I(24,00,00,00),B(cg_asm ,11),I(3c,02,1f,09),I(1c,8f,2a,1f),I(06,26,00,00),I(00,00,01,00),I(15,1b,24,00),B(boot1 ,26),I(3c,01,1f,0b),I(1c,90,22,03),I(32,00,00,00),I(00,00,00,30),I(1f,07,23,00),B(cg_asm ,46),I(24,00,00,00),B(cg_asm ,11),I(3c,02,1f,09),I(1c,8f,2a,1f),I(06,24,00,00),B(boot1 ,26),I(3c,01,1f,0a),I(1c,90,22,02),I(22,01,22,01),I(22,01,22,01),I(45,05,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 48 binding: anonymous */
  static const void *G006428[] = {I(ab,46,01,1b),I(10,1c,11,1c),I(48,00,00,23),B(cg_asm ,23),I(23,00,00,00),B(cg_asm ,47),I(3b,01,1c,24),B(boot ,16),I(3d,02,04,45),I(04,00,00,00)};

  eul_allocate_static_string(str_6432, "   .Resolving ~a to ~a", 22);
  /* Byte-vector with size: 14 is_init: 0 index: 50 binding: anonymous */
  static const void *G006430[] = {I(aa,1b,11,47),I(00,00,1c,15),I(1b,24,00,00),B(cg_asm ,7),I(3c,01,23,00),B(cg_asm ,49),I(1f,04,1f,03),I(24,00,00,00),B(i_notify ,4),I(3c,03,2a,1b),I(10,1f,04,1c),I(8f,2a,1c,11),I(1f,05,1c,90),I(45,06,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 51 binding: anonymous */
  static const void *G006433[] = {I(ab,46,01,1b),I(10,1c,11,1c),I(48,00,00,23),B(cg_asm ,23),I(23,00,00,00),B(cg_asm ,50),I(3b,01,1c,24),B(collect ,6),I(3d,02,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 25 is_init: 0 index: 52 binding: call/ep-lambda */
  static const void *G006435[] = {I(aa,46,01,1b),I(48,00,00,23),B(cg_asm ,24),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,34),I(00,00,00,29),I(23,00,00,00),B(cg_asm ,23),I(23,00,00,00),B(cg_asm ,51),I(3b,02,47,01),I(00,24,00,00),B(aux_table ,7),I(3c,02,32,00),I(00,00,00,24),I(23,00,00,00),B(cg_asm ,23),I(23,00,00,00),B(cg_asm ,48),I(3b,02,47,01),I(00,24,00,00),B(aux_table ,7),I(3c,02,2a,47),I(01,00,45,02)};

  eul_allocate_static_string(str_6439, "    Resolve labels", 18);
  /* Byte-vector with size: 13 is_init: 0 index: 55 binding: resolve-label-refs */
  static const void *G006437[] = {I(aa,46,01,1b),I(48,00,00,23),B(cg_asm ,53),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,23),B(cg_asm ,54),I(23,00,00,00),B(cg_asm ,52),I(3b,01,24,00),B(let_cc ,2),I(3c,01,1b,45),I(02,00,00,00)};

  eul_allocate_static_cons(cons_6447, NULL, NULL);
  eul_allocate_static_cons(cons_6445, NULL, eul_as_static(cons_6447));
  eul_allocate_static_cons(cons_6443, NULL, eul_as_static(cons_6445));
  /* Byte-vector with size: 3 is_init: 0 index: 60 binding: branch? */
  static const void *G006441[] = {I(aa,23,00,00),B(cg_asm ,59),I(86,6c,45,00)};

  /* Byte-vector with size: 17 is_init: 0 index: 61 binding: fix-as-4-bytes */
  static const void *G006449[] = {I(aa,1b,82,1a),I(1b,34,00,00),I(00,00,00,27),I(82,1d,15,1b),I(83,15,26,00),I(00,00,00,03),I(86,24,00,00),B(cg_asm ,4),I(3d,03,03,22),I(01,32,00,00),I(00,00,00,1a),I(1c,26,00,00),I(00,00,00,03),I(86,24,00,00),B(cg_asm ,15),I(3d,03,02,45),I(02,00,00,00)};

  eul_allocate_static_string(str_6453, "      PUT BRANCH BYTES: ~a", 26);
  /* Byte-vector with size: 19 is_init: 0 index: 63 binding: put-branch-bytes */
  static const void *G006451[] = {I(ab,23,00,00),B(cg_asm ,62),I(1c,24,00,00),B(i_notify ,4),I(3c,02,2a,1c),I(82,24,00,00),B(cg_state ,38),I(08,1b,84,14),I(1f,03,1c,1c),I(82,1d,24,00),B(cg_state ,38),I(09,22,02,2a),I(1f,03,83,24),B(cg_state ,38),I(08,1f,03,1c),I(0f,1f,05,1c),I(1c,83,1d,24),B(cg_state ,38),I(09,45,08,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 64 binding: anonymous */
  static const void *G006454[] = {I(aa,47,00,00),I(1c,24,00,00),B(cg_asm ,20),I(3d,02,01,00)};

  eul_allocate_static_string(str_6462, "no register ~a", 14);
  /* Byte-vector with size: 126 is_init: 0 index: 71 binding: assemble-instruction-default */
  static const void *G006456[] = {I(43,04,46,01),I(1c,48,00,00),I(23,00,00,00),B(cg_asm ,24),I(24,00,00,00),B(dynamic ,3),I(3c,01,12,1b),I(34,00,00,00),I(00,00,00,18),I(1f,04,24,00),B(cg_asm ,6),I(3c,01,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,1e),I(1f,05,1f,05),I(47,00,00,1f),I(05,24,00,00),B(cg_asm ,17),I(3d,04,06,32),I(00,00,01,a4),I(47,00,00,1f),I(06,24,00,00),B(cg_asm ,13),I(3c,02,26,00),I(00,00,00,04),I(24,00,00,00),B(cg_bycode ,6),I(08,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,01,74),I(1c,10,1b,23),B(cg_asm ,65),I(50,1b,34,00),I(00,00,00,3e),I(47,00,00,82),I(24,00,00,00),B(cg_state ,38),I(08,83,15,1f),I(0a,1c,0f,1f),I(0a,10,1f,09),I(1c,1f,03,24),B(cg_asm ,10),I(3c,03,2a,47),I(00,00,1d,24),B(cg_asm ,20),I(3d,02,0d,22),I(03,32,00,00),I(00,00,01,2a),I(1c,23,00,00),B(cg_asm ,66),I(50,1b,34,00),I(00,00,00,2a),I(1f,09,10,1b),I(86,0f,23,00),B(cg_asm ,67),I(1c,0f,47,00),I(00,1c,24,00),B(cg_asm ,20),I(3d,02,0e,22),I(03,32,00,00),I(00,00,00,f4),I(1d,23,00,00),B(cg_asm ,68),I(50,1b,34,00),I(00,00,00,52),I(1f,0a,10,1b),I(24,00,00,00),B(cg_bycode ,7),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,1f),I(1f,0c,10,82),I(23,00,00,00),B(cg_asm ,69),I(1d,24,00,00),B(i_notify ,6),I(3c,03,22,01),I(47,00,00,1c),I(24,00,00,00),B(cg_asm ,18),I(3d,02,0f,22),I(03,32,00,00),I(00,00,00,96),I(1f,03,23,00),B(cg_asm ,70),I(50,1b,34,00),I(00,00,00,1a),I(47,00,00,1f),I(0c,24,00,00),B(cg_asm ,16),I(3d,02,0d,32),I(00,00,00,6e),I(1f,04,23,00),B(cg_asm ,65),I(50,1b,34,00),I(00,00,00,3e),I(47,00,00,82),I(24,00,00,00),B(cg_state ,38),I(08,83,15,1f),I(0e,1c,0f,1f),I(0e,10,1f,0d),I(1c,1f,03,24),B(cg_asm ,10),I(3c,03,2a,47),I(00,00,1d,24),B(cg_asm ,20),I(3d,02,11,22),I(03,32,00,00),I(00,00,00,26),I(23,00,00,00),B(cg_asm ,23),I(23,00,00,00),B(cg_asm ,64),I(3b,01,1f,0d),I(24,00,00,00),B(boot ,16),I(3d,02,0e,22),I(01,22,01,22),I(01,22,01,22),I(02,22,02,45),I(06,00,00,00)};

  eul_allocate_static_string(str_6466, "    Register label ~a ref ~a", 28);
  /* Byte-vector with size: 21 is_init: 0 index: 73 binding: register-label-ref */
  static const void *G006464[] = {I(43,03,23,00),B(cg_asm ,72),I(1d,1d,24,00),B(i_notify ,4),I(3c,03,2a,1c),I(1f,03,3c,01),I(1b,34,00,00),I(00,00,00,17),I(1b,11,1d,1c),I(0f,1d,1c,90),I(22,02,32,00),I(00,00,00,26),I(1f,03,24,00),B(boot1 ,45),I(3c,01,86,1f),I(03,24,00,00),B(boot1 ,26),I(3c,02,1f,04),I(1c,1f,03,3d),I(02,06,22,02),I(45,04,00,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 74 binding: get-branch-code */
  static const void *G006467[] = {I(ab,1c,82,02),I(1b,1d,24,00),B(string ,11),I(3c,02,1b,41),B(boot1 ,58),I(22,01,1b,24),B(cg_bycode ,18),I(3c,01,26,00),I(00,00,00,03),I(24,00,00,00),B(cg_bycode ,6),I(08,45,05,00)};

  eul_allocate_static_string(str_6471, "    Instruction: ~a", 19);
  /* Byte-vector with size: 109 is_init: 0 index: 85 binding: assemble-instruction */
  static const void *G006469[] = {I(43,03,23,00),B(cg_asm ,75),I(1f,03,24,00),B(i_notify ,4),I(3c,02,2a,1d),I(10,1f,03,11),I(1c,23,00,00),B(cg_asm ,65),I(50,1b,34,00),I(00,00,00,2a),I(1c,10,1f,05),I(82,24,00,00),B(cg_state ,38),I(08,1f,05,1d),I(1d,24,00,00),B(cg_asm ,14),I(3d,03,08,22),I(02,32,00,00),I(00,00,01,6c),I(1d,23,00,00),B(cg_asm ,76),I(50,1b,34,00),I(00,00,00,36),I(1f,05,23,00),B(cg_asm ,76),I(24,00,00,00),B(cg_asm ,13),I(3c,02,2a,23),B(cg_asm ,77),I(1f,03,0f,1f),I(06,1c,24,00),B(cg_asm ,20),I(3d,02,08,22),I(01,32,00,00),I(00,00,01,2a),I(1f,03,23,00),B(cg_asm ,78),I(50,1b,34,00),I(00,00,00,36),I(1f,06,23,00),B(cg_asm ,78),I(24,00,00,00),B(cg_asm ,13),I(3c,02,2a,23),B(cg_asm ,77),I(1f,04,0f,1f),I(07,1c,24,00),B(cg_asm ,20),I(3d,02,09,22),I(01,32,00,00),I(00,00,00,e8),I(1f,04,23,00),B(cg_asm ,79),I(50,1b,34,00),I(00,00,00,36),I(1f,07,23,00),B(cg_asm ,79),I(24,00,00,00),B(cg_asm ,13),I(3c,02,2a,23),B(cg_asm ,77),I(1f,05,0f,1f),I(08,1c,24,00),B(cg_asm ,20),I(3d,02,0a,22),I(01,32,00,00),I(00,00,00,a6),I(1f,05,23,00),B(cg_asm ,80),I(50,1b,34,00),I(00,00,00,36),I(1f,08,23,00),B(cg_asm ,81),I(24,00,00,00),B(cg_asm ,13),I(3c,02,2a,23),B(cg_asm ,82),I(1f,06,0f,1f),I(09,1c,24,00),B(cg_asm ,20),I(3d,02,0b,22),I(01,32,00,00),I(00,00,00,64),I(1f,06,23,00),B(cg_asm ,83),I(50,1b,34,00),I(00,00,00,3e),I(1f,06,10,1f),I(0a,23,00,00),B(cg_asm ,83),I(24,00,00,00),B(cg_asm ,13),I(3c,02,2a,86),I(0f,23,00,00),B(cg_asm ,84),I(1c,0f,1f,0b),I(1c,24,00,00),B(cg_asm ,20),I(3d,02,0d,22),I(02,32,00,00),I(00,00,00,1a),I(1f,07,1f,07),I(1f,0b,1f,0b),I(24,00,00,00),B(cg_asm ,9),I(3d,04,0b,22),I(01,22,01,22),I(01,22,01,22),I(01,45,06,00)};

  eul_allocate_static_string(str_6484, "no bytecode ~a", 14);
  /* Byte-vector with size: 24 is_init: 0 index: 88 binding: put-bc */
  static const void *G006481[] = {I(ab,1b,24,00),B(cg_bycode ,18),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,2b),I(23,00,00,00),B(cg_asm ,86),I(24,00,00,00),B(cg_bycode ,18),I(3c,01,1b,23),B(cg_asm ,87),I(1f,04,24,00),B(i_notify ,6),I(3c,03,22,01),I(1b,26,00,00),I(00,00,00,03),I(24,00,00,00),B(cg_bycode ,6),I(08,1f,04,1c),I(24,00,00,00),B(cg_asm ,18),I(3c,02,2a,1c),I(45,05,00,00)};

  eul_allocate_static_string(str_6487, "label multiply defined", 22);
  /* Byte-vector with size: 27 is_init: 0 index: 90 binding: register-label-loc */
  static const void *G006485[] = {I(43,03,1c,1f),I(03,3c,01,1b),I(34,00,00,00),I(00,00,00,44),I(1b,10,12,1b),I(34,00,00,00),I(00,00,00,14),I(1c,1f,03,8f),I(32,00,00,00),I(00,00,00,23),I(23,00,00,00),B(cg_asm ,89),I(24,00,00,00),B(condition ,9),I(24,00,00,00),B(boot ,12),I(3d,02,05,22),I(01,32,00,00),I(00,00,00,23),I(1f,03,24,00),B(boot1 ,45),I(3c,01,1d,24),B(boot1 ,26),I(3c,01,1f,04),I(1c,1f,03,3d),I(02,06,22,02),I(45,04,00,00)};

  /* Byte-vector with size: 16 is_init: 0 index: 91 binding: pos-fix-bytes-aux */
  static const void *G006488[] = {I(43,03,1c,82),I(19,1b,34,00),I(00,00,00,12),I(1f,03,1d,0f),I(32,00,00,00),I(00,00,00,2d),I(1f,03,26,00),I(00,00,01,00),I(18,1f,04,26),I(00,00,01,00),I(17,1f,04,83),I(15,1d,1f,05),I(0f,24,00,00),B(cg_asm ,15),I(3d,03,05,22),I(01,45,04,00)};

  /* Byte-vector with size: 21 is_init: 0 index: 92 binding: anonymous */
  static const void *G006490[] = {I(43,03,1d,12),I(1b,34,00,00),I(00,00,00,2f),I(47,00,00,1f),I(03,1c,82,1d),I(24,00,00,00),B(cg_state ,38),I(09,22,02,2a),I(47,00,00,1d),I(1c,83,1d,24),B(cg_state ,38),I(09,22,02,32),I(00,00,00,20),I(1f,03,11,1f),I(03,83,14,1f),I(05,10,1b,1f),I(05,0f,1f,03),I(1f,03,1d,47),I(00,01,3d,03),I(08,22,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 93 binding: put-bytes */
  static const void *G006492[] = {I(ab,46,02,1c),I(48,00,00,86),I(1b,48,00,01),I(23,00,00,00),B(cg_asm ,23),I(23,00,00,00),B(cg_asm ,92),I(3b,03,48,00),I(01,47,00,00),I(82,24,00,00),B(cg_state ,38),I(08,47,00,00),I(83,24,00,00),B(cg_state ,38),I(08,1f,03,1d),I(1d,47,00,01),I(3d,03,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 94 binding: assemble-branch */
  static const void *G006494[] = {I(43,04,1c,82),I(24,00,00,00),B(cg_state ,38),I(08,83,14,1f),I(04,1c,0f,1f),I(04,10,1f,03),I(1c,1f,03,24),B(cg_asm ,10),I(3c,03,2a,1f),I(04,1d,24,00),B(cg_asm ,8),I(3d,02,07,45),I(07,00,00,00)};

  eul_allocate_static_string(str_6498, "      PUT BYTE: ~a", 18);
  /* Byte-vector with size: 19 is_init: 0 index: 96 binding: put-byte */
  static const void *G006496[] = {I(ab,23,00,00),B(cg_asm ,95),I(1c,24,00,00),B(i_notify ,4),I(3c,02,2a,1c),I(83,24,00,00),B(cg_state ,38),I(08,1d,82,24),B(cg_state ,38),I(08,1b,83,14),I(1f,04,1c,1c),I(82,1d,24,00),B(cg_state ,38),I(09,22,02,2a),I(1f,03,1f,03),I(0f,1f,05,1c),I(1c,83,1d,24),B(cg_state ,38),I(09,45,08,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 97 binding: anonymous */
  static const void *G006499[] = {I(ab,1c,82,19),I(1b,34,00,00),I(00,00,00,0f),I(1c,32,00,00),I(00,00,00,14),I(1d,83,15,82),I(1f,03,0f,47),I(00,00,3d,02),I(03,45,03,00)};

  /* Byte-vector with size: 33 is_init: 0 index: 98 binding: align */
  static const void *G006501[] = {I(aa,46,01,86),I(1b,48,00,00),I(23,00,00,00),B(cg_asm ,23),I(23,00,00,00),B(cg_asm ,97),I(3b,02,48,00),I(00,1c,82,24),B(cg_state ,38),I(08,1d,83,24),B(cg_state ,38),I(08,1c,26,00),I(00,00,00,04),I(18,1b,82,19),I(1b,34,00,00),I(00,00,00,0f),I(86,32,00,00),I(00,00,00,3e),I(26,00,00,00),I(00,00,00,04),I(1d,15,1b,1f),I(04,47,00,00),I(3c,02,1f,07),I(1c,1c,83,1d),I(24,00,00,00),B(cg_state ,38),I(09,22,02,2a),I(1f,05,1d,14),I(1f,08,1c,1c),I(82,1d,24,00),B(cg_state ,38),I(09,22,05,45),I(06,00,00,00)};

  /* Byte-vector with size: 32 is_init: 0 index: 99 binding: put-fix */
  static const void *G006503[] = {I(ab,1c,24,00),B(cg_asm ,19),I(3c,01,2a,1b),I(24,00,00,00),B(integer ,4),I(3c,01,1b,34),I(00,00,00,25),I(1c,24,00,00),B(cg_asm ,7),I(3c,01,1f,03),I(1c,24,00,00),B(cg_asm ,16),I(3d,02,04,22),I(01,32,00,00),I(00,00,00,46),I(1d,83,24,00),B(cg_state ,38),I(08,1f,03,82),I(24,00,00,00),B(cg_state ,38),I(08,1b,26,00),I(00,00,00,04),I(14,1f,05,1c),I(1c,82,1d,24),B(cg_state ,38),I(09,22,02,2a),I(1f,04,1f,03),I(0f,1f,06,1c),I(1c,83,1d,24),B(cg_state ,38),I(09,22,06,45),I(03,00,00,00)};

  /* Byte-vector with size: 156 is_init: 1 index: 0 binding: initialize-cg-asm */
  static const void *G006505[] = {I(87,25,00,00),B(cg_asm ,1),I(24,00,00,00),B(op_peep_r ,1),I(3e,0b,24,00),B(op_peep_r ,0),I(3c,00,21,01),I(24,00,00,00),B(op_peep ,1),I(3e,0b,24,00),B(op_peep ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_state ,1),I(3e,0b,24,00),B(cg_state ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_bycode2 ,1),I(3e,0b,24,00),B(cg_bycode2 ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_bycode1 ,1),I(3e,0b,24,00),B(cg_bycode1 ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_obj ,1),I(3e,0b,24,00),B(sx_obj ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(23,00,00,00),B(cg_asm ,100),I(23,00,00,00),B(cg_asm ,99),I(3b,02,25,00),B(cg_asm ,20),I(23,00,00,00),B(cg_asm ,101),I(23,00,00,00),B(cg_asm ,98),I(3b,01,25,00),B(cg_asm ,19),I(23,00,00,00),B(cg_asm ,102),I(23,00,00,00),B(cg_asm ,96),I(3b,02,25,00),B(cg_asm ,18),I(23,00,00,00),B(cg_asm ,103),I(23,00,00,00),B(cg_asm ,94),I(3b,04,25,00),B(cg_asm ,17),I(23,00,00,00),B(cg_asm ,104),I(23,00,00,00),B(cg_asm ,93),I(3b,02,25,00),B(cg_asm ,16),I(23,00,00,00),B(cg_asm ,105),I(23,00,00,00),B(cg_asm ,91),I(3b,03,25,00),B(cg_asm ,15),I(23,00,00,00),B(cg_asm ,106),I(23,00,00,00),B(cg_asm ,90),I(3b,03,25,00),B(cg_asm ,14),I(23,00,00,00),B(cg_asm ,107),I(23,00,00,00),B(cg_asm ,88),I(3b,02,25,00),B(cg_asm ,13),I(23,00,00,00),B(cg_asm ,108),I(23,00,00,00),B(cg_asm ,85),I(3b,03,25,00),B(cg_asm ,12),I(23,00,00,00),B(cg_asm ,109),I(23,00,00,00),B(cg_asm ,74),I(3b,02,25,00),B(cg_asm ,11),I(23,00,00,00),B(cg_asm ,110),I(23,00,00,00),B(cg_asm ,73),I(3b,03,25,00),B(cg_asm ,10),I(23,00,00,00),B(cg_asm ,111),I(23,00,00,00),B(cg_asm ,71),I(3b,04,25,00),B(cg_asm ,9),I(23,00,00,00),B(cg_asm ,112),I(23,00,00,00),B(cg_asm ,63),I(3b,02,25,00),B(cg_asm ,8),I(23,00,00,00),B(cg_asm ,113),I(23,00,00,00),B(cg_asm ,61),I(3b,01,25,00),B(cg_asm ,7),I(23,00,00,00),B(cg_asm ,114),I(23,00,00,00),B(cg_asm ,60),I(3b,01,25,00),B(cg_asm ,6),I(23,00,00,00),B(cg_asm ,115),I(23,00,00,00),B(cg_asm ,55),I(3b,01,25,00),B(cg_asm ,5),I(23,00,00,00),B(cg_asm ,116),I(23,00,00,00),B(cg_asm ,40),I(3b,03,25,00),B(cg_asm ,4),I(23,00,00,00),B(cg_asm ,36),I(23,00,00,00),B(cg_asm ,39),I(3b,02,25,00),B(cg_asm ,3),I(23,00,00,00),B(cg_asm ,117),I(23,00,00,00),B(cg_asm ,27),I(3b,03,25,00),B(cg_asm ,2),I(23,00,00,00),B(cg_asm ,24),I(86,24,00,00),B(dynamic ,2),I(3d,02,00,ac)};


  /* Initializations */
  eul_allocate_bytevector( G006393,G006392);
  eul_allocate_bytevector( G006395,G006394);
  eul_intern_symbol(sym_6398,"anonymous");
  eul_intern_symbol(sym_6399,"*with-long-jumps*");
  eul_intern_symbol(sym_6400,"*clean-ups*");
  object_class(str_6401) = eul_static_string_class;
  eul_allocate_bytevector( G006397,G006396);
  eul_allocate_bytevector( G006403,G006402);
  object_class(str_6406) = eul_static_string_class;
  object_class(str_6407) = eul_static_string_class;
  eul_intern_keyword(key_6408,"ct-error-value");
  eul_allocate_bytevector( G006405,G006404);
  eul_allocate_bytevector( G006410,G006409);
  eul_intern_symbol(sym_6413,"(method G005949)");
  object_class(str_6414) = eul_static_string_class;
  eul_intern_symbol(sym_6415,"assemble");
  eul_intern_keyword(key_6416,"init-bytevector");
  eul_intern_keyword(key_6417,"bytevectors");
  eul_allocate_bytevector( G006412,G006411);
  eul_allocate_bytevector( G006419,G006418);
  object_class(str_6422) = eul_static_string_class;
  object_class(str_6423) = eul_static_string_class;
  object_class(str_6424) = eul_static_string_class;
  object_class(str_6425) = eul_static_string_class;
  object_class(str_6426) = eul_static_string_class;
  object_class(str_6427) = eul_static_string_class;
  eul_allocate_bytevector( G006421,G006420);
  eul_allocate_bytevector( G006429,G006428);
  object_class(str_6432) = eul_static_string_class;
  eul_allocate_bytevector( G006431,G006430);
  eul_allocate_bytevector( G006434,G006433);
  eul_allocate_bytevector( G006436,G006435);
  object_class(str_6439) = eul_static_string_class;
  eul_intern_symbol(sym_6440,"call/ep-lambda");
  eul_allocate_bytevector( G006438,G006437);
  eul_intern_symbol(sym_6444,"branch-true");
  eul_intern_symbol(sym_6446,"branch-nil");
  eul_intern_symbol(sym_6448,"branch");
  object_class(cons_6447) = eul_static_cons_class;
  eul_car(cons_6447) = sym_6448;
  eul_cdr(cons_6447) = eul_nil;
  object_class(cons_6445) = eul_static_cons_class;
  eul_car(cons_6445) = sym_6446;
  object_class(cons_6443) = eul_static_cons_class;
  eul_car(cons_6443) = sym_6444;
  eul_allocate_bytevector( G006442,G006441);
  eul_allocate_bytevector( G006450,G006449);
  object_class(str_6453) = eul_static_string_class;
  eul_allocate_bytevector( G006452,G006451);
  eul_allocate_bytevector( G006455,G006454);
  eul_intern_symbol(sym_6458,"label");
  eul_intern_symbol(sym_6459,"static");
  eul_intern_symbol(sym_6460,"STATIC");
  eul_intern_symbol(sym_6461,"reg");
  object_class(str_6462) = eul_static_string_class;
  eul_intern_symbol(sym_6463,"byte");
  eul_allocate_bytevector( G006457,G006456);
  object_class(str_6466) = eul_static_string_class;
  eul_allocate_bytevector( G006465,G006464);
  eul_allocate_bytevector( G006468,G006467);
  object_class(str_6471) = eul_static_string_class;
  eul_intern_symbol(sym_6472,"binding-ref");
  eul_intern_symbol(sym_6473,"BINDING");
  eul_intern_symbol(sym_6474,"set-binding-ref");
  eul_intern_symbol(sym_6475,"set-and-get-binding-ref");
  eul_intern_symbol(sym_6476,"code-vector-ref");
  eul_intern_symbol(sym_6477,"static-ref");
  eul_intern_symbol(sym_6478,"CODE-VECTOR");
  eul_intern_symbol(sym_6479,"call-foreign-function");
  eul_intern_symbol(sym_6480,"FF");
  eul_allocate_bytevector( G006470,G006469);
  eul_intern_symbol(sym_6483,"noop");
  object_class(str_6484) = eul_static_string_class;
  eul_allocate_bytevector( G006482,G006481);
  object_class(str_6487) = eul_static_string_class;
  eul_allocate_bytevector( G006486,G006485);
  eul_allocate_bytevector( G006489,G006488);
  eul_allocate_bytevector( G006491,G006490);
  eul_allocate_bytevector( G006493,G006492);
  eul_allocate_bytevector( G006495,G006494);
  object_class(str_6498) = eul_static_string_class;
  eul_allocate_bytevector( G006497,G006496);
  eul_allocate_bytevector( G006500,G006499);
  eul_allocate_bytevector( G006502,G006501);
  eul_allocate_bytevector( G006504,G006503);
  eul_intern_symbol(sym_6507,"put-fix");
  eul_intern_symbol(sym_6508,"align");
  eul_intern_symbol(sym_6509,"put-byte");
  eul_intern_symbol(sym_6510,"assemble-branch");
  eul_intern_symbol(sym_6511,"put-bytes");
  eul_intern_symbol(sym_6512,"pos-fix-bytes-aux");
  eul_intern_symbol(sym_6513,"register-label-loc");
  eul_intern_symbol(sym_6514,"put-bc");
  eul_intern_symbol(sym_6515,"assemble-instruction");
  eul_intern_symbol(sym_6516,"get-branch-code");
  eul_intern_symbol(sym_6517,"register-label-ref");
  eul_intern_symbol(sym_6518,"assemble-instruction-default");
  eul_intern_symbol(sym_6519,"put-branch-bytes");
  eul_intern_symbol(sym_6520,"fix-as-4-bytes");
  eul_intern_symbol(sym_6521,"branch?");
  eul_intern_symbol(sym_6522,"resolve-label-refs");
  eul_intern_symbol(sym_6523,"neg-fix-bytes-aux");
  eul_intern_symbol(sym_6524,"assemble-function");
  eul_allocate_bytevector( G006506,G006505);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 21; i++)
      cg_asm_bindings[i] = eul_nil;
  }

  cg_asm_bindings[ 21] = G006393;
  cg_asm_bindings[ 22] = G006395;
  cg_asm_bindings[ 23] = sym_6398;
  cg_asm_bindings[ 24] = sym_6399;
  cg_asm_bindings[ 25] = sym_6400;
  cg_asm_bindings[ 26] = str_6401;
  cg_asm_bindings[ 27] = G006397;
  cg_asm_bindings[ 28] = G006403;
  cg_asm_bindings[ 29] = str_6406;
  cg_asm_bindings[ 30] = str_6407;
  cg_asm_bindings[ 31] = key_6408;
  cg_asm_bindings[ 32] = G006405;
  cg_asm_bindings[ 33] = G006410;
  cg_asm_bindings[ 34] = sym_6413;
  cg_asm_bindings[ 35] = str_6414;
  cg_asm_bindings[ 36] = sym_6415;
  cg_asm_bindings[ 37] = key_6416;
  cg_asm_bindings[ 38] = key_6417;
  cg_asm_bindings[ 39] = G006412;
  cg_asm_bindings[ 40] = G006419;
  cg_asm_bindings[ 41] = str_6422;
  cg_asm_bindings[ 42] = str_6423;
  cg_asm_bindings[ 43] = str_6424;
  cg_asm_bindings[ 44] = str_6425;
  cg_asm_bindings[ 45] = str_6426;
  cg_asm_bindings[ 46] = str_6427;
  cg_asm_bindings[ 47] = G006421;
  cg_asm_bindings[ 48] = G006429;
  cg_asm_bindings[ 49] = str_6432;
  cg_asm_bindings[ 50] = G006431;
  cg_asm_bindings[ 51] = G006434;
  cg_asm_bindings[ 52] = G006436;
  cg_asm_bindings[ 53] = str_6439;
  cg_asm_bindings[ 54] = sym_6440;
  cg_asm_bindings[ 55] = G006438;
  cg_asm_bindings[ 56] = sym_6444;
  cg_asm_bindings[ 57] = sym_6446;
  cg_asm_bindings[ 58] = sym_6448;
  cg_asm_bindings[ 59] = cons_6443;
  cg_asm_bindings[ 60] = G006442;
  cg_asm_bindings[ 61] = G006450;
  cg_asm_bindings[ 62] = str_6453;
  cg_asm_bindings[ 63] = G006452;
  cg_asm_bindings[ 64] = G006455;
  cg_asm_bindings[ 65] = sym_6458;
  cg_asm_bindings[ 66] = sym_6459;
  cg_asm_bindings[ 67] = sym_6460;
  cg_asm_bindings[ 68] = sym_6461;
  cg_asm_bindings[ 69] = str_6462;
  cg_asm_bindings[ 70] = sym_6463;
  cg_asm_bindings[ 71] = G006457;
  cg_asm_bindings[ 72] = str_6466;
  cg_asm_bindings[ 73] = G006465;
  cg_asm_bindings[ 74] = G006468;
  cg_asm_bindings[ 75] = str_6471;
  cg_asm_bindings[ 76] = sym_6472;
  cg_asm_bindings[ 77] = sym_6473;
  cg_asm_bindings[ 78] = sym_6474;
  cg_asm_bindings[ 79] = sym_6475;
  cg_asm_bindings[ 80] = sym_6476;
  cg_asm_bindings[ 81] = sym_6477;
  cg_asm_bindings[ 82] = sym_6478;
  cg_asm_bindings[ 83] = sym_6479;
  cg_asm_bindings[ 84] = sym_6480;
  cg_asm_bindings[ 85] = G006470;
  cg_asm_bindings[ 86] = sym_6483;
  cg_asm_bindings[ 87] = str_6484;
  cg_asm_bindings[ 88] = G006482;
  cg_asm_bindings[ 89] = str_6487;
  cg_asm_bindings[ 90] = G006486;
  cg_asm_bindings[ 91] = G006489;
  cg_asm_bindings[ 92] = G006491;
  cg_asm_bindings[ 93] = G006493;
  cg_asm_bindings[ 94] = G006495;
  cg_asm_bindings[ 95] = str_6498;
  cg_asm_bindings[ 96] = G006497;
  cg_asm_bindings[ 97] = G006500;
  cg_asm_bindings[ 98] = G006502;
  cg_asm_bindings[ 99] = G006504;
  cg_asm_bindings[ 1] = eul_nil;
  cg_asm_bindings[ 100] = sym_6507;
  cg_asm_bindings[ 101] = sym_6508;
  cg_asm_bindings[ 102] = sym_6509;
  cg_asm_bindings[ 103] = sym_6510;
  cg_asm_bindings[ 104] = sym_6511;
  cg_asm_bindings[ 105] = sym_6512;
  cg_asm_bindings[ 106] = sym_6513;
  cg_asm_bindings[ 107] = sym_6514;
  cg_asm_bindings[ 108] = sym_6515;
  cg_asm_bindings[ 109] = sym_6516;
  cg_asm_bindings[ 110] = sym_6517;
  cg_asm_bindings[ 111] = sym_6518;
  cg_asm_bindings[ 112] = sym_6519;
  cg_asm_bindings[ 113] = sym_6520;
  cg_asm_bindings[ 114] = sym_6521;
  cg_asm_bindings[ 115] = sym_6522;
  cg_asm_bindings[ 116] = sym_6523;
  cg_asm_bindings[ 117] = sym_6524;
  eul_allocate_lambda( cg_asm_bindings[0], "initialize-cg-asm", 0, G006506);

  }
}


/* eof */
