/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module cg-stack
 **  Copyright: See file cg-stack.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern void initialize_module_sx_obj();
extern void initialize_module_cg_state();
extern LispRef sx_obj_bindings[];
extern LispRef i_all_bindings[];
extern LispRef boot1_bindings[];
extern LispRef list_bindings[];
extern LispRef sx_obj2_bindings[];
extern LispRef i_notify_bindings[];
extern LispRef cg_state_bindings[];
extern LispRef boot_bindings[];
extern LispRef condition_bindings[];

/* Module bindings with size 30 */
LispRef cg_stack_bindings[30];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module cg-stack */
void initialize_module_cg_stack()
{
  if (is_initialized) return;
  initialize_module_i_all();
  initialize_module_sx_obj();
  initialize_module_cg_state();
  eul_fast_table_set(eul_modules,"cg_stack",(LispRef) cg_stack_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_2837, sym_2836, sym_2835, sym_2834, sym_2833, sym_2832, sym_2831, G002830, G002828, G002826, G002823, G002820, G002818, G002816, G002814, G002812, sym_2810, G002809, G002806;

  /* Code vector and literal definitions */
  eul_allocate_static_string(str_2807, "parameter not on stack", 22);
  /* Byte-vector with size: 20 is_init: 0 index: 10 binding: anonymous */
  static const void *G002805[] = {I(aa,1b,34,00),I(00,00,00,2e),I(1b,73,1b,47),I(00,00,50,1b),I(34,00,00,00),I(00,00,00,10),I(1d,10,32,00),I(00,00,00,0e),I(1d,75,47,00),I(01,3d,01,03),I(22,02,32,00),I(00,00,00,21),I(23,00,00,00),B(cg_stack ,9),I(24,00,00,00),B(condition ,9),I(24,00,00,00),B(boot ,12),I(3d,02,01,45),I(01,00,00,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 12 binding: stack-var-index */
  static const void *G002808[] = {I(ab,46,02,1c),I(48,00,00,86),I(1b,48,00,01),I(23,00,00,00),B(cg_stack ,11),I(23,00,00,00),B(cg_stack ,10),I(3b,01,48,00),I(01,1c,26,00),I(00,00,00,03),I(24,00,00,00),B(cg_state ,12),I(08,1d,84,24),B(cg_state ,12),I(08,1b,47,00),I(01,3c,01,1b),I(83,14,1f,03),I(1c,15,45,07)};

  /* Byte-vector with size: 16 is_init: 0 index: 13 binding: push-stack-var */
  static const void *G002811[] = {I(ab,1b,26,00),I(00,00,00,03),I(24,00,00,00),B(cg_state ,12),I(08,1c,84,24),B(cg_state ,12),I(08,83,1f,03),I(24,00,00,00),B(cg_stack ,6),I(3c,02,2a,1f),I(03,1c,0f,1d),I(1c,0f,1f,04),I(1c,1c,84,1d),I(24,00,00,00),B(cg_state ,12),I(09,45,08,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 14 binding: anonymous */
  static const void *G002813[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,10),I(1c,10,1b,47),I(00,00,1a,22),I(01,1b,34,00),I(00,00,00,0e),I(1d,32,00,00),I(00,00,00,0f),I(1d,75,47,00),I(01,3d,01,03),I(45,03,00,00)};

  /* Byte-vector with size: 16 is_init: 0 index: 15 binding: update-stack-vars */
  static const void *G002815[] = {I(ab,46,02,1c),I(48,00,00,86),I(1b,48,00,01),I(23,00,00,00),B(cg_stack ,11),I(23,00,00,00),B(cg_stack ,14),I(3b,01,48,00),I(01,1c,84,24),B(cg_state ,12),I(08,1b,47,00),I(01,3c,01,1f),I(03,1c,1c,84),I(1d,24,00,00),B(cg_state ,12),I(09,45,07,00)};

  /* Byte-vector with size: 17 is_init: 0 index: 16 binding: pop-display */
  static const void *G002817[] = {I(ab,1c,82,19),I(1b,34,00,00),I(00,00,00,0f),I(1c,32,00,00),I(00,00,00,34),I(1c,83,24,00),B(cg_state ,12),I(08,1b,11,1f),I(03,1c,1c,83),I(1d,24,00,00),B(cg_state ,12),I(09,22,02,2a),I(1f,04,83,15),I(1b,1f,05,24),B(cg_stack ,5),I(3d,02,06,22),I(03,45,03,00)};

  eul_allocate_static_string(str_2821, "stack underflow", 15);
  /* Byte-vector with size: 34 is_init: 0 index: 18 binding: move-stack */
  static const void *G002819[] = {I(ab,1c,82,19),I(1b,34,00,00),I(00,00,00,0f),I(86,32,00,00),I(00,00,00,78),I(1c,26,00,00),I(00,00,00,03),I(24,00,00,00),B(cg_state ,12),I(08,1b,1f,04),I(14,1b,82,1a),I(1b,34,00,00),I(00,00,00,1f),I(86,23,00,00),B(cg_stack ,17),I(24,00,00,00),B(i_notify ,6),I(3d,02,06,32),I(00,00,00,3c),I(1f,04,1d,1c),I(26,00,00,00),I(00,00,00,03),I(1d,24,00,00),B(cg_state ,12),I(09,22,02,2a),I(1f,05,82,1a),I(1b,34,00,00),I(00,00,00,17),I(1d,1f,06,24),B(cg_stack ,4),I(3d,02,07,32),I(00,00,00,06),I(86,22,01,22),I(03,45,03,00)};

  eul_allocate_static_string(str_2824, "no display-index for ~a", 23);
  /* Byte-vector with size: 28 is_init: 0 index: 20 binding: anonymous */
  static const void *G002822[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,34),I(47,00,00,26),I(00,00,00,03),I(24,00,00,00),B(sx_obj2 ,11),I(08,86,23,00),B(cg_stack ,19),I(1d,24,00,00),B(i_notify ,6),I(3d,03,04,22),I(01,32,00,00),I(00,00,00,3a),I(1d,10,47,00),I(00,1c,24,00),B(list ,4),I(3c,02,1b,34),I(00,00,00,15),I(1f,03,1c,24),B(boot1 ,25),I(3d,02,05,32),I(00,00,00,12),I(1f,04,11,83),I(1f,05,14,47),I(00,01,3d,02),I(05,22,02,45),I(03,00,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 21 binding: display-var-index */
  static const void *G002825[] = {I(ab,46,02,1c),I(48,00,00,86),I(1b,48,00,01),I(23,00,00,00),B(cg_stack ,11),I(23,00,00,00),B(cg_stack ,20),I(3b,02,48,00),I(01,1c,83,24),B(cg_state ,12),I(08,82,47,00),I(01,3d,02,03),I(45,03,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 22 binding: push-display */
  static const void *G002827[] = {I(ab,1b,83,24),B(cg_state ,12),I(08,1d,1c,0f),I(1d,1c,1c,83),I(1d,24,00,00),B(cg_state ,12),I(09,45,06,00)};

  /* Byte-vector with size: 60 is_init: 1 index: 0 binding: initialize-cg-stack */
  static const void *G002829[] = {I(87,25,00,00),B(cg_stack ,1),I(24,00,00,00),B(cg_state ,1),I(3e,0b,24,00),B(cg_state ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_obj ,1),I(3e,0b,24,00),B(sx_obj ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(23,00,00,00),B(cg_stack ,23),I(23,00,00,00),B(cg_stack ,22),I(3b,02,25,00),B(cg_stack ,8),I(23,00,00,00),B(cg_stack ,24),I(23,00,00,00),B(cg_stack ,21),I(3b,02,25,00),B(cg_stack ,7),I(23,00,00,00),B(cg_stack ,25),I(23,00,00,00),B(cg_stack ,18),I(3b,02,25,00),B(cg_stack ,6),I(23,00,00,00),B(cg_stack ,26),I(23,00,00,00),B(cg_stack ,16),I(3b,02,25,00),B(cg_stack ,5),I(23,00,00,00),B(cg_stack ,27),I(23,00,00,00),B(cg_stack ,15),I(3b,02,25,00),B(cg_stack ,4),I(23,00,00,00),B(cg_stack ,28),I(23,00,00,00),B(cg_stack ,13),I(3b,02,25,00),B(cg_stack ,3),I(23,00,00,00),B(cg_stack ,29),I(23,00,00,00),B(cg_stack ,12),I(3b,02,25,00),B(cg_stack ,2),I(86,ac,00,00)};


  /* Initializations */
  object_class(str_2807) = eul_static_string_class;
  eul_allocate_bytevector( G002806,G002805);
  eul_intern_symbol(sym_2810,"anonymous");
  eul_allocate_bytevector( G002809,G002808);
  eul_allocate_bytevector( G002812,G002811);
  eul_allocate_bytevector( G002814,G002813);
  eul_allocate_bytevector( G002816,G002815);
  eul_allocate_bytevector( G002818,G002817);
  object_class(str_2821) = eul_static_string_class;
  eul_allocate_bytevector( G002820,G002819);
  object_class(str_2824) = eul_static_string_class;
  eul_allocate_bytevector( G002823,G002822);
  eul_allocate_bytevector( G002826,G002825);
  eul_allocate_bytevector( G002828,G002827);
  eul_intern_symbol(sym_2831,"push-display");
  eul_intern_symbol(sym_2832,"display-var-index");
  eul_intern_symbol(sym_2833,"move-stack");
  eul_intern_symbol(sym_2834,"pop-display");
  eul_intern_symbol(sym_2835,"update-stack-vars");
  eul_intern_symbol(sym_2836,"push-stack-var");
  eul_intern_symbol(sym_2837,"stack-var-index");
  eul_allocate_bytevector( G002830,G002829);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 9; i++)
      cg_stack_bindings[i] = eul_nil;
  }

  cg_stack_bindings[ 9] = str_2807;
  cg_stack_bindings[ 10] = G002806;
  cg_stack_bindings[ 11] = sym_2810;
  cg_stack_bindings[ 12] = G002809;
  cg_stack_bindings[ 13] = G002812;
  cg_stack_bindings[ 14] = G002814;
  cg_stack_bindings[ 15] = G002816;
  cg_stack_bindings[ 16] = G002818;
  cg_stack_bindings[ 17] = str_2821;
  cg_stack_bindings[ 18] = G002820;
  cg_stack_bindings[ 19] = str_2824;
  cg_stack_bindings[ 20] = G002823;
  cg_stack_bindings[ 21] = G002826;
  cg_stack_bindings[ 22] = G002828;
  cg_stack_bindings[ 1] = eul_nil;
  cg_stack_bindings[ 23] = sym_2831;
  cg_stack_bindings[ 24] = sym_2832;
  cg_stack_bindings[ 25] = sym_2833;
  cg_stack_bindings[ 26] = sym_2834;
  cg_stack_bindings[ 27] = sym_2835;
  cg_stack_bindings[ 28] = sym_2836;
  cg_stack_bindings[ 29] = sym_2837;
  eul_allocate_lambda( cg_stack_bindings[0], "initialize-cg-stack", 0, G002830);

  }
}


/* eof */
