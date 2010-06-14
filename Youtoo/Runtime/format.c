/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module format
 **  Copyright: See file format.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_collect();
extern void initialize_module_fpi();
extern void initialize_module_list();
extern void initialize_module_string();
extern void initialize_module_stream();
extern LispRef list_bindings[];
extern LispRef collect_bindings[];
extern LispRef telos_bindings[];
extern LispRef fpi_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef string_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef boot1_bindings[];
extern LispRef boot_bindings[];
extern LispRef stream1_bindings[];
extern LispRef stream2_bindings[];
extern LispRef stream_bindings[];

/* Module bindings with size 21 */
LispRef format_bindings[21];

/* Foreign functions */
static LispRef ff_stub_eul_format_info6460 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G006488, res;

  POPVAL1(G006488);
  FF_RES_CONVERT6(res,eul_format_info(FF_ARG_CONVERT3(G006488)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module format */
void initialize_module_format()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_collect();
  initialize_module_fpi();
  initialize_module_list();
  initialize_module_string();
  initialize_module_stream();
  eul_fast_table_set(eul_modules,"format",(LispRef) format_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_6487, G006486, sym_6484, G006483, G006480, G006478, G006476, G006474, sym_6472, G006471, G006462;

  /* Code vector and literal definitions */
  eul_allocate_static_string(str_6463, "%s", 2);
  eul_allocate_static_string(str_6464, "bad format string ~s", 20);
  eul_allocate_static_string(str_6465, "bad format string ~s", 20);
  eul_allocate_static_string(str_6466, "bad format string ~s", 20);
  eul_allocate_static_string(str_6467, "%x", 2);
  eul_allocate_static_string(str_6468, "bad format string ~s", 20);
  eul_allocate_static_string(str_6469, "%o", 2);
  /* Byte-vector with size: 176 is_init: 0 index: 10 binding: anonymous */
  static const void *G006461[] = {I(ab,1c,10,1d),I(11,1b,20,04),I(1f,03,10,1f),I(04,11,1b,20),I(06,1f,05,10),I(47,00,00,1f),I(03,24,00,00),B(stream ,21),I(3c,02,2a,47),I(00,03,83,24),B(stream2 ,23),I(08,47,00,03),I(26,00,00,00),I(00,00,00,03),I(24,00,00,00),B(stream2 ,23),I(08,1b,1d,1f),I(06,1f,09,23),B(format ,3),I(47,00,01,41),B(stream1 ,20),I(22,06,2a,1c),I(1f,05,14,47),I(00,03,1c,1c),I(83,1d,24,00),B(stream2 ,23),I(09,22,05,2a),I(1b,27,00,50),I(1b,34,00,00),I(00,00,00,0f),I(1f,06,32,00),I(00,00,02,44),I(1c,27,61,50),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,0b),I(1d,27,64,50),I(1b,34,00,00),I(00,00,00,77),I(1f,08,12,1b),I(34,00,00,00),I(00,00,00,20),I(23,00,00,00),B(format ,4),I(47,00,01,24),B(boot ,12),I(3d,02,0b,32),I(00,00,00,4a),I(1f,09,10,1b),I(24,00,00,00),B(boot1 ,42),I(3c,01,1b,34),I(00,00,00,19),I(1c,47,00,00),I(24,00,00,00),B(stream2 ,2),I(3c,02,32,00),I(00,00,00,14),I(1c,47,00,00),I(24,00,00,00),B(stream ,16),I(3c,02,2a,1f),I(0c,11,1f,0c),I(11,47,00,02),I(3d,02,0d,22),I(02,22,01,32),I(00,00,01,b1),I(1f,03,27,73),I(50,1b,34,00),I(00,00,00,76),I(1f,09,12,1b),I(34,00,00,00),I(00,00,00,20),I(23,00,00,00),B(format ,5),I(47,00,01,24),B(boot ,12),I(3d,02,0c,32),I(00,00,00,4a),I(1f,0a,10,1b),I(24,00,00,00),B(boot1 ,42),I(3c,01,1b,34),I(00,00,00,19),I(1c,47,00,00),I(24,00,00,00),B(stream2 ,28),I(3c,02,32,00),I(00,00,00,14),I(1c,47,00,00),I(24,00,00,00),B(stream ,12),I(3c,02,2a,1f),I(0d,11,1f,0d),I(11,47,00,02),I(3d,02,0e,22),I(02,22,01,32),I(00,00,01,33),I(1f,04,27,25),I(50,1b,34,00),I(00,00,00,2a),I(27,0a,47,00),I(00,24,00,00),B(stream ,3),I(3c,02,2a,1f),I(0b,11,1b,1f),I(0c,47,00,02),I(3d,02,0d,22),I(01,32,00,00),I(00,00,01,03),I(1f,05,27,78),I(50,1b,34,00),I(00,00,00,56),I(1f,0b,12,1b),I(34,00,00,00),I(00,00,00,20),I(23,00,00,00),B(format ,6),I(47,00,01,24),B(boot ,12),I(3d,02,0e,32),I(00,00,00,2a),I(1f,0c,10,47),I(00,00,23,00),B(format ,7),I(1d,24,00,00),B(stream ,19),I(3c,03,2a,1f),I(0e,11,1f,0e),I(11,47,00,02),I(3d,02,0f,22),I(01,22,01,32),I(00,00,00,a3),I(1f,06,27,6f),I(50,1b,34,00),I(00,00,00,56),I(1f,0c,12,1b),I(34,00,00,00),I(00,00,00,20),I(23,00,00,00),B(format ,8),I(47,00,01,24),B(boot ,12),I(3d,02,0f,32),I(00,00,00,2a),I(1f,0d,10,47),I(00,00,23,00),B(format ,9),I(1d,24,00,00),B(stream ,19),I(3c,03,2a,1f),I(0f,11,1f,0f),I(11,47,00,02),I(3d,02,10,22),I(01,22,01,32),I(00,00,00,45),I(1f,07,27,7e),I(50,1b,34,00),I(00,00,00,2a),I(27,7e,47,00),I(00,24,00,00),B(stream ,16),I(3c,02,2a,1f),I(0e,11,1b,1f),I(0f,47,00,02),I(3d,02,10,22),I(01,32,00,00),I(00,00,00,15),I(1f,0e,11,1b),I(1f,0f,47,00),I(02,3d,02,10),I(22,01,22,01),I(22,01,22,01),I(22,01,22,01),I(22,02,45,08)};

  /* Byte-vector with size: 26 is_init: 0 index: 12 binding: (method-format) */
  static const void *G006470[] = {I(43,fd,46,05),I(1d,48,00,00),I(1c,48,00,01),I(47,00,00,26),I(00,00,00,05),I(24,00,00,00),B(stream2 ,21),I(08,1b,48,00),I(03,86,1b,48),I(00,02,23,00),B(format ,11),I(23,00,00,00),B(format ,10),I(3b,02,48,00),I(02,47,00,01),I(41,00,00,00),B(format ,2),I(22,01,1b,24),B(boot ,25),I(3c,01,1b,1f),I(05,47,00,02),I(3c,02,47,00),I(00,24,00,00),B(stream ,2),I(3c,01,2a,1b),I(45,08,00,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 13 binding: (method-format) */
  static const void *G006473[] = {I(43,fd,1d,84),I(19,1b,34,00),I(00,00,00,16),I(24,00,00,00),B(stream2 ,10),I(32,00,00,00),I(00,00,00,10),I(24,00,00,00),B(stream2 ,34),I(24,00,00,00),B(mop_gf ,17),I(1c,1f,05,1f),I(05,24,00,00),B(boot ,5),I(3d,04,05,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 14 binding: (method-format) */
  static const void *G006475[] = {I(43,fd,24,00),B(mop_gf ,17),I(24,00,00,00),B(stream2 ,34),I(1f,03,1f,03),I(24,00,00,00),B(boot ,5),I(3d,04,03,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 15 binding: anonymous */
  static const void *G006477[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,23),I(1d,11,1f,03),I(10,1f,03,1c),I(24,00,00,00),B(string ,11),I(3c,02,1d,1c),I(47,00,00,3d),I(02,06,22,03),I(45,03,00,00)};

  eul_allocate_static_string(str_6481, "", 0);
  /* Byte-vector with size: 41 is_init: 0 index: 17 binding: (method-format) */
  static const void *G006479[] = {I(43,fd,46,03),I(24,00,00,00),B(stream2 ,45),I(24,00,00,00),B(mop_gf ,2),I(3c,01,1b,26),I(00,00,00,05),I(24,00,00,00),B(stream2 ,21),I(08,24,00,00),B(mop_gf ,17),I(1d,1f,05,1f),I(05,24,00,00),B(boot ,5),I(3c,04,2a,86),I(1b,48,00,00),I(23,00,00,00),B(format ,11),I(23,00,00,00),B(format ,15),I(3b,02,48,00),I(00,1d,82,24),B(stream2 ,45),I(08,1b,23,00),B(format ,16),I(47,00,00,3c),I(02,1f,03,26),I(00,00,00,03),I(24,00,00,00),B(stream2 ,23),I(08,1f,04,83),I(24,00,00,00),B(stream2 ,23),I(08,1c,82,1d),I(24,00,00,00),B(string ,6),I(3c,03,1f,03),I(1c,24,00,00),B(string ,11),I(3d,02,0b,45),I(0b,00,00,00)};

  /* Byte-vector with size: 122 is_init: 0 index: 19 binding: top-level */
  static const void *G006482[] = {I(a9,24,00,00),B(mop_gf ,17),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,25),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,43),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_gf ,17),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(format ,18),I(23,00,00,00),B(format ,17),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,17),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_gf ,17),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,5),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,43),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_gf ,17),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(format ,18),I(23,00,00,00),B(format ,14),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,17),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_gf ,17),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(fpi ,6),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,43),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_gf ,17),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(format ,18),I(23,00,00,00),B(format ,13),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,17),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_gf ,17),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(stream2 ,21),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,43),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_gf ,17),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(format ,18),I(23,00,00,00),B(format ,12),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,17),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,18,45),I(18,00,00,00)};

  /* Byte-vector with size: 38 is_init: 1 index: 0 binding: initialize-format */
  static const void *G006485[] = {I(87,25,00,00),B(format ,1),I(24,00,00,00),B(stream ,1),I(3e,0b,24,00),B(stream ,0),I(3c,00,21,01),I(24,00,00,00),B(string ,1),I(3e,0b,24,00),B(string ,0),I(3c,00,21,01),I(24,00,00,00),B(list ,1),I(3e,0b,24,00),B(list ,0),I(3c,00,21,01),I(24,00,00,00),B(fpi ,1),I(3e,0b,24,00),B(fpi ,0),I(3c,00,21,01),I(24,00,00,00),B(collect ,1),I(3e,0b,24,00),B(collect ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(format ,20),I(23,00,00,00),B(format ,19),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  object_class(str_6463) = eul_static_string_class;
  object_class(str_6464) = eul_static_string_class;
  object_class(str_6465) = eul_static_string_class;
  object_class(str_6466) = eul_static_string_class;
  object_class(str_6467) = eul_static_string_class;
  object_class(str_6468) = eul_static_string_class;
  object_class(str_6469) = eul_static_string_class;
  eul_allocate_bytevector( G006462,G006461);
  eul_intern_symbol(sym_6472,"anonymous");
  eul_allocate_bytevector( G006471,G006470);
  eul_allocate_bytevector( G006474,G006473);
  eul_allocate_bytevector( G006476,G006475);
  eul_allocate_bytevector( G006478,G006477);
  object_class(str_6481) = eul_static_string_class;
  eul_allocate_bytevector( G006480,G006479);
  eul_intern_symbol(sym_6484,"(method format)");
  eul_allocate_bytevector( G006483,G006482);
  eul_intern_symbol(sym_6487,"top-level");
  eul_allocate_bytevector( G006486,G006485);

  /* Set local bindings */
  format_bindings[ 2] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_format_info6460;
  format_bindings[ 3] = str_6463;
  format_bindings[ 4] = str_6464;
  format_bindings[ 5] = str_6465;
  format_bindings[ 6] = str_6466;
  format_bindings[ 7] = str_6467;
  format_bindings[ 8] = str_6468;
  format_bindings[ 9] = str_6469;
  format_bindings[ 10] = G006462;
  format_bindings[ 11] = sym_6472;
  format_bindings[ 12] = G006471;
  format_bindings[ 13] = G006474;
  format_bindings[ 14] = G006476;
  format_bindings[ 15] = G006478;
  format_bindings[ 16] = str_6481;
  format_bindings[ 17] = G006480;
  format_bindings[ 18] = sym_6484;
  format_bindings[ 19] = G006483;
  format_bindings[ 1] = eul_nil;
  format_bindings[ 20] = sym_6487;
  eul_allocate_lambda( format_bindings[0], "initialize-format", 0, G006486);

  }
}


/* eof */
