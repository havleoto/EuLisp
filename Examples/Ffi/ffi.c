/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module ffi
 **  Copyright: See file ffi.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_level1();
extern LispRef level1_bindings[];
extern LispRef collect_bindings[];
extern LispRef stream_bindings[];
extern LispRef format_bindings[];

/* Module bindings with size 14 */
LispRef ffi_bindings[14];

/* Foreign functions */
static LispRef ff_stub_ext_get_struct15 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef res;

  FF_RES_CONVERT6(res,ext_get_struct());
  return res;
}

static LispRef ff_stub_ext_print_struct16 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0031, res;

  POPVAL1(G0031);
  FF_RES_CONVERT6(res,ext_print_struct(FF_ARG_CONVERT8(G0031)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module ffi */
void initialize_module_ffi()
{
  if (is_initialized) return;
  initialize_module_level1();
  eul_fast_table_set(eul_modules,"ffi",(LispRef) ffi_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_30, G0029, sym_27, G0026, G0020, G0018;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 3 is_init: 0 index: 5 binding: anonymous */
  static const void *G0017[] = {I(aa,41,00,00),B(ffi ,4),I(45,01,00,00)};

  eul_allocate_static_string(str_21, "struct #~d~%", 12);
  eul_allocate_static_string(str_22, "  ", 2);
  eul_allocate_static_string(str_23, "  ", 2);
  eul_allocate_static_string(str_24, "*** Finished creating", 21);
  /* Byte-vector with size: 40 is_init: 0 index: 10 binding: anonymous */
  static const void *G0019[] = {I(aa,1b,26,00),I(00,00,00,32),I(1a,1b,34,00),I(00,00,00,7e),I(41,00,00,00),B(ffi ,3),I(23,00,00,00),B(ffi ,6),I(1f,03,24,00),B(format ,5),I(3c,02,2a,23),B(ffi ,7),I(24,00,00,00),B(stream ,20),I(3c,01,2a,1b),I(41,00,00,00),B(ffi ,4),I(22,01,2a,23),B(ffi ,8),I(24,00,00,00),B(stream ,20),I(3c,01,2a,1b),I(24,00,00,00),B(stream ,15),I(3c,01,2a,1b),I(24,00,00,00),B(ffi ,2),I(0f,1b,89,00),B(ffi ,2),I(2a,1f,03,2b),I(47,00,00,3d),I(01,04,22,02),I(32,00,00,00),I(00,00,00,1b),I(23,00,00,00),B(ffi ,9),I(24,00,00,00),B(stream ,11),I(3d,01,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 21 is_init: 0 index: 12 binding: top-level */
  static const void *G0025[] = {I(a9,46,02,86),I(89,00,00,00),B(ffi ,2),I(2a,86,1b,48),I(00,00,23,00),B(ffi ,11),I(23,00,00,00),B(ffi ,10),I(3b,01,48,00),I(00,82,47,00),I(00,3c,01,2a),I(23,00,00,00),B(ffi ,11),I(23,00,00,00),B(ffi ,5),I(3b,01,24,00),B(ffi ,2),I(24,00,00,00),B(collect ,6),I(3d,02,01,45),I(01,00,00,00)};

  /* Byte-vector with size: 15 is_init: 1 index: 0 binding: initialize-ffi */
  static const void *G0028[] = {I(87,25,00,00),B(ffi ,1),I(24,00,00,00),B(level1 ,1),I(3e,0b,24,00),B(level1 ,0),I(3c,00,21,01),I(86,25,00,00),B(ffi ,2),I(23,00,00,00),B(ffi ,13),I(23,00,00,00),B(ffi ,12),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G0018,G0017);
  object_class(str_21) = eul_static_string_class;
  object_class(str_22) = eul_static_string_class;
  object_class(str_23) = eul_static_string_class;
  object_class(str_24) = eul_static_string_class;
  eul_allocate_bytevector( G0020,G0019);
  eul_intern_symbol(sym_27,"anonymous");
  eul_allocate_bytevector( G0026,G0025);
  eul_intern_symbol(sym_30,"top-level");
  eul_allocate_bytevector( G0029,G0028);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 3; i++)
      ffi_bindings[i] = eul_nil;
  }

  ffi_bindings[ 3] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_ext_get_struct15;
  ffi_bindings[ 4] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_ext_print_struct16;
  ffi_bindings[ 5] = G0018;
  ffi_bindings[ 6] = str_21;
  ffi_bindings[ 7] = str_22;
  ffi_bindings[ 8] = str_23;
  ffi_bindings[ 9] = str_24;
  ffi_bindings[ 10] = G0020;
  ffi_bindings[ 11] = sym_27;
  ffi_bindings[ 12] = G0026;
  ffi_bindings[ 1] = eul_nil;
  ffi_bindings[ 13] = sym_30;
  eul_allocate_lambda( ffi_bindings[0], "initialize-ffi", 0, G0029);

  }
}


/* eof */
