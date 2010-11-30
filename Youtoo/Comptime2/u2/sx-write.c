/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module sx-write
 **  Copyright: See file sx-write.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern void initialize_module_sx_obj();
extern LispRef i_all_bindings[];
extern LispRef stream_bindings[];
extern LispRef aux_table_bindings[];
extern LispRef mop_inspect_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef stream2_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef mop_defcl_bindings[];
extern LispRef mop_access_bindings[];
extern LispRef sx_obj1_bindings[];
extern LispRef number_bindings[];
extern LispRef dynamic_bindings[];
extern LispRef boot_bindings[];
extern LispRef sx_obj2_bindings[];
extern LispRef format_bindings[];
extern LispRef sx_obj_bindings[];

/* Module bindings with size 70 */
LispRef sx_write_bindings[70];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module sx-write */
void initialize_module_sx_write()
{
  if (is_initialized) return;
  initialize_module_i_all();
  initialize_module_sx_obj();
  eul_fast_table_set(eul_modules,"sx_write",(LispRef) sx_write_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_6278, sym_6277, sym_6276, G006275, sym_6269, G006268, G006266, G006263, G006260, G006257, G006253, sym_6251, sym_6250, sym_6249, G006248, G006245, G006241, G006239, G006236, sym_6232, G006231, G006228, G006225, G006222, G006219, G006216, G006213, sym_6207, G006206, G006203, sym_6200, G006198, G006195, G006192, G006189;

  /* Code vector and literal definitions */
  eul_allocate_static_string(str_6190, "(if ~a ~a ~a)", 13);
  /* Byte-vector with size: 14 is_init: 0 index: 6 binding: (method-new-generic-print) */
  static const void *G006188[] = {I(ab,1c,84,24),B(sx_obj ,12),I(08,1d,83,24),B(sx_obj ,12),I(08,1f,03,82),I(24,00,00,00),B(sx_obj ,12),I(08,1f,03,23),B(sx_write ,5),I(1f,04,1f,04),I(1f,04,24,00),B(format ,4),I(3d,05,05,45),I(05,00,00,00)};

  eul_allocate_static_string(str_6193, "~a", 2);
  /* Byte-vector with size: 11 is_init: 0 index: 8 binding: (method-new-generic-print) */
  static const void *G006191[] = {I(ab,1c,83,24),B(sx_obj ,39),I(08,1d,82,24),B(sx_obj ,39),I(08,1c,1c,0f),I(1f,03,23,00),B(sx_write ,7),I(1d,24,00,00),B(format ,4),I(3d,03,05,45),I(05,00,00,00)};

  eul_allocate_static_string(str_6196, "(~a ~a)", 7);
  /* Byte-vector with size: 15 is_init: 0 index: 10 binding: anonymous */
  static const void *G006194[] = {I(aa,1b,24,00),B(sx_obj2 ,33),I(3c,01,1b,34),I(00,00,00,15),I(1c,83,24,00),B(sx_obj2 ,11),I(08,32,00,00),I(00,00,00,08),I(86,47,00,00),I(23,00,00,00),B(sx_write ,9),I(1f,04,1f,03),I(24,00,00,00),B(format ,4),I(3d,04,03,00)};

  eul_allocate_static_string(str_6199, "(let* (", 7);
  eul_allocate_static_string(str_6201, ") ~a)", 5);
  /* Byte-vector with size: 27 is_init: 0 index: 14 binding: (method-new-generic-print) */
  static const void *G006197[] = {I(ab,46,01,1b),I(48,00,00,47),I(00,00,23,00),B(sx_write ,11),I(24,00,00,00),B(format ,4),I(3c,02,2a,1c),I(26,00,00,00),I(00,00,00,05),I(24,00,00,00),B(sx_obj ,17),I(08,23,00,00),B(sx_write ,12),I(23,00,00,00),B(sx_write ,10),I(3b,01,1c,24),B(boot ,17),I(3c,02,2a,1d),I(84,24,00,00),B(sx_obj ,17),I(08,47,00,00),I(23,00,00,00),B(sx_write ,13),I(1d,24,00,00),B(format ,4),I(3d,03,04,45),I(04,00,00,00)};

  eul_allocate_static_string(str_6204, "(opencoded-lambda ~a ~a)", 24);
  /* Byte-vector with size: 13 is_init: 0 index: 16 binding: (method-new-generic-print) */
  static const void *G006202[] = {I(ab,1c,26,00),I(00,00,00,05),I(24,00,00,00),B(sx_obj ,17),I(08,1d,84,24),B(sx_obj ,17),I(08,1d,23,00),B(sx_write ,15),I(1f,03,1f,03),I(24,00,00,00),B(format ,4),I(3d,04,04,45),I(04,00,00,00)};

  eul_allocate_static_string(str_6208, "~a", 2);
  eul_allocate_static_string(str_6209, "inlined-lambda", 14);
  eul_allocate_static_string(str_6210, "lambda", 6);
  eul_allocate_static_string(str_6211, "(~a ~a ~a)", 10);
  /* Byte-vector with size: 52 is_init: 0 index: 22 binding: (method-new-generic-print) */
  static const void *G006205[] = {I(ab,23,00,00),B(sx_write ,17),I(24,00,00,00),B(dynamic ,3),I(3c,01,24,00),B(number ,24),I(3c,01,1b,34),I(00,00,00,21),I(23,00,00,00),B(sx_write ,17),I(24,00,00,00),B(dynamic ,3),I(3c,01,84,1a),I(32,00,00,00),I(00,00,00,09),I(86,1b,34,00),I(00,00,00,32),I(1f,03,26,00),I(00,00,00,07),I(24,00,00,00),B(sx_obj ,17),I(08,1f,03,23),B(sx_write ,18),I(1d,24,00,00),B(format ,4),I(3d,03,05,22),I(01,32,00,00),I(00,00,00,64),I(1f,03,84,24),B(sx_obj ,13),I(08,1b,34,00),I(00,00,00,16),I(23,00,00,00),B(sx_write ,19),I(32,00,00,00),I(00,00,00,10),I(23,00,00,00),B(sx_write ,20),I(1f,05,26,00),I(00,00,00,05),I(24,00,00,00),B(sx_obj ,17),I(08,1f,06,84),I(24,00,00,00),B(sx_obj ,17),I(08,1f,06,23),B(sx_write ,21),I(1f,04,1f,04),I(1f,04,24,00),B(format ,4),I(3d,05,08,22),I(04,45,04,00)};

  eul_allocate_static_string(str_6214, "~a", 2);
  /* Byte-vector with size: 8 is_init: 0 index: 24 binding: (method-new-generic-print) */
  static const void *G006212[] = {I(ab,1c,82,24),B(sx_obj2 ,29),I(08,1c,23,00),B(sx_write ,23),I(1d,24,00,00),B(format ,4),I(3d,03,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_6217, "~a", 2);
  /* Byte-vector with size: 8 is_init: 0 index: 26 binding: (method-new-generic-print) */
  static const void *G006215[] = {I(ab,1c,83,24),B(sx_obj2 ,22),I(08,1c,23,00),B(sx_write ,25),I(1d,24,00,00),B(format ,4),I(3d,03,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_6220, "(setq ~a ~a)", 12);
  /* Byte-vector with size: 11 is_init: 0 index: 28 binding: (method-new-generic-print) */
  static const void *G006218[] = {I(ab,1c,83,24),B(sx_obj2 ,25),I(08,1d,82,24),B(sx_obj2 ,25),I(08,1d,23,00),B(sx_write ,27),I(1f,03,1f,03),I(24,00,00,00),B(format ,4),I(3d,04,04,45),I(04,00,00,00)};

  eul_allocate_static_string(str_6223, "~a", 2);
  /* Byte-vector with size: 10 is_init: 0 index: 30 binding: (method-new-generic-print) */
  static const void *G006221[] = {I(ab,1c,26,00),I(00,00,00,03),I(24,00,00,00),B(sx_obj2 ,11),I(08,1c,23,00),B(sx_write ,29),I(1d,24,00,00),B(format ,4),I(3d,03,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_6226, "~a", 2);
  /* Byte-vector with size: 10 is_init: 0 index: 32 binding: (method-new-generic-print) */
  static const void *G006224[] = {I(ab,1c,26,00),I(00,00,00,06),I(24,00,00,00),B(sx_obj1 ,42),I(08,1c,23,00),B(sx_write ,31),I(1d,24,00,00),B(format ,4),I(3d,03,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_6229, "~a", 2);
  /* Byte-vector with size: 10 is_init: 0 index: 34 binding: (method-new-generic-print) */
  static const void *G006227[] = {I(ab,1c,26,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,59),I(08,1c,23,00),B(sx_write ,33),I(1d,24,00,00),B(format ,4),I(3d,03,03,45),I(03,00,00,00)};

  eul_allocate_static_string(str_6233, "~a", 2);
  eul_allocate_static_string(str_6234, "<unprintable syntax object>", 27);
  /* Byte-vector with size: 25 is_init: 0 index: 38 binding: (method-new-generic-print) */
  static const void *G006230[] = {I(ab,1c,24,00),B(mop_access ,5),I(3c,01,23,00),B(sx_write ,35),I(1c,86,6c,1b),I(34,00,00,00),I(00,00,00,38),I(1f,03,23,00),B(sx_write ,35),I(24,00,00,00),B(mop_defcl ,8),I(3c,02,1f,03),I(23,00,00,00),B(sx_write ,36),I(1d,24,00,00),B(format ,4),I(3d,03,05,22),I(01,32,00,00),I(00,00,00,1a),I(1d,23,00,00),B(sx_write ,37),I(24,00,00,00),B(format ,4),I(3d,02,04,45),I(04,00,00,00)};

  eul_allocate_static_string(str_6237, "#<macro-function>", 17);
  /* Byte-vector with size: 5 is_init: 0 index: 40 binding: (method-new-generic-print) */
  static const void *G006235[] = {I(ab,23,00,00),B(sx_write ,39),I(24,00,00,00),B(format ,4),I(3d,02,01,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 41 binding: (method-generic-print) */
  static const void *G006238[] = {I(ab,23,00,00),B(sx_write ,17),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,34),I(00,00,00,15),I(1d,1d,24,00),B(sx_write ,3),I(3d,02,03,32),I(00,00,00,08),I(38,02,01,45),I(03,00,00,00)};

  eul_allocate_static_string(str_6242, "#<binding: ~a:~a:~a>", 20);
  eul_allocate_static_string(str_6243, "#<binding: ~a:~a>", 17);
  /* Byte-vector with size: 38 is_init: 0 index: 44 binding: (method-generic-print) */
  static const void *G006240[] = {I(ab,1c,26,00),I(00,00,00,05),I(24,00,00,00),B(sx_obj1 ,42),I(08,1d,26,00),I(00,00,00,06),I(24,00,00,00),B(sx_obj1 ,42),I(08,1f,03,83),I(24,00,00,00),B(sx_obj1 ,42),I(08,1d,24,00),B(sx_obj1 ,45),I(3c,01,1b,34),I(00,00,00,1d),I(1f,03,26,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,59),I(08,32,00,00),I(00,00,00,09),I(1f,03,1d,7e),I(1b,34,00,00),I(00,00,00,23),I(1f,06,23,00),B(sx_write ,42),I(1f,03,1f,07),I(1f,07,24,00),B(format ,4),I(3d,05,08,32),I(00,00,00,1c),I(1f,06,23,00),B(sx_write ,43),I(1f,03,1f,07),I(24,00,00,00),B(format ,4),I(3d,04,08,45),I(08,00,00,00)};

  eul_allocate_static_string(str_6246, "#<module: ~a>", 13);
  /* Byte-vector with size: 10 is_init: 0 index: 46 binding: (method-generic-print) */
  static const void *G006244[] = {I(ab,1c,26,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,59),I(08,1c,23,00),B(sx_write ,45),I(1d,24,00,00),B(format ,4),I(3d,03,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 447 is_init: 0 index: 50 binding: top-level */
  static const void *G006247[] = {I(a9,84,24,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(sx_write ,47),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(sx_write ,3),I(2a,24,00,00),B(stream2 ,31),I(8a,03,02,84),I(24,00,00,00),B(sx_obj1 ,59),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,31),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,48),I(23,00,00,00),B(sx_write ,46),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,31),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,31),I(8a,03,02,84),I(24,00,00,00),B(sx_obj1 ,42),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,31),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,48),I(23,00,00,00),B(sx_write ,44),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,31),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,31),I(8a,03,02,84),I(24,00,00,00),B(sx_obj1 ,27),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,31),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,48),I(23,00,00,00),B(sx_write ,41),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,31),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(2a,24,00,00),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(mop_class ,32),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,40),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(sx_obj1 ,27),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,38),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(sx_obj1 ,59),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,34),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(sx_obj1 ,42),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,32),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(sx_obj2 ,11),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,30),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(sx_obj2 ,25),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,28),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(sx_obj2 ,22),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,26),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(sx_obj2 ,32),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,24),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(sx_obj ,13),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,22),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(sx_obj ,8),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,16),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(sx_obj ,2),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,14),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(sx_obj ,39),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,8),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(sx_write ,3),I(8a,03,02,84),I(24,00,00,00),B(sx_obj ,12),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(sx_write ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(sx_write ,49),I(23,00,00,00),B(sx_write ,6),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(sx_write ,3),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,64,45),I(64,00,00,00)};

  eul_allocate_static_string(str_6254, "#<macro-function>", 17);
  eul_allocate_static_string(str_6255, "~a", 2);
  /* Byte-vector with size: 16 is_init: 0 index: 53 binding: binding-print-string */
  static const void *G006252[] = {I(aa,84,24,00),B(sx_obj1 ,42),I(08,1b,24,00),B(mop_inspect ,8),I(3c,01,1b,34),I(00,00,00,15),I(23,00,00,00),B(sx_write ,51),I(32,00,00,00),I(00,00,00,1b),I(23,00,00,00),B(sx_write ,52),I(1d,24,00,00),B(format ,2),I(3d,02,02,45),I(02,00,00,00)};

  eul_allocate_static_string(str_6258, "\n   (~a . ~a)", 13);
  /* Byte-vector with size: 14 is_init: 0 index: 55 binding: anonymous */
  static const void *G006256[] = {I(ab,1b,26,00),I(00,00,00,06),I(24,00,00,00),B(sx_obj1 ,42),I(08,1c,24,00),B(sx_write ,2),I(3c,01,47,00),I(00,23,00,00),B(sx_write ,54),I(1f,03,1f,03),I(24,00,00,00),B(format ,4),I(3d,04,04,45),I(04,00,00,00)};

  eul_allocate_static_string(str_6261, "\n   (~a . ~a)", 13);
  /* Byte-vector with size: 14 is_init: 0 index: 57 binding: anonymous */
  static const void *G006259[] = {I(ab,1b,26,00),I(00,00,00,06),I(24,00,00,00),B(sx_obj1 ,42),I(08,1c,24,00),B(sx_write ,2),I(3c,01,47,00),I(00,23,00,00),B(sx_write ,56),I(1f,03,1f,03),I(24,00,00,00),B(format ,4),I(3d,04,04,45),I(04,00,00,00)};

  eul_allocate_static_string(str_6264, "\n   (~a . ~a)", 13);
  /* Byte-vector with size: 14 is_init: 0 index: 59 binding: anonymous */
  static const void *G006262[] = {I(ab,1b,26,00),I(00,00,00,06),I(24,00,00,00),B(sx_obj1 ,42),I(08,1c,24,00),B(sx_write ,2),I(3c,01,47,00),I(00,23,00,00),B(sx_write ,58),I(1f,03,1f,03),I(24,00,00,00),B(format ,4),I(3d,04,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 60 binding: anonymous */
  static const void *G006265[] = {I(a9,83,24,00),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3d,01,00,00)};

  eul_allocate_static_string(str_6270, "\nPretty printed environment of module ~a:", 41);
  eul_allocate_static_string(str_6271, "\n  lexical-env:", 15);
  eul_allocate_static_string(str_6272, "\n  external-env:", 16);
  eul_allocate_static_string(str_6273, "\n  syntax-env:", 14);
  /* Byte-vector with size: 100 is_init: 0 index: 66 binding: pprint-module */
  static const void *G006267[] = {I(43,fe,46,01),I(1b,34,00,00),I(00,00,00,0f),I(1b,10,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,08),I(87,1b,48,00),I(00,23,00,00),B(sx_write ,17),I(87,24,00,00),B(dynamic ,2),I(3c,02,2a,23),B(sx_write ,61),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(sx_write ,12),I(23,00,00,00),B(sx_write ,60),I(3b,00,1c,0f),I(23,00,00,00),B(sx_write ,61),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,47),I(00,00,1f,06),I(24,00,00,00),B(mop_access ,8),I(3c,02,2a,1f),I(05,26,00,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,59),I(08,47,00,00),I(23,00,00,00),B(sx_write ,62),I(1d,24,00,00),B(format ,4),I(3c,03,2a,47),I(00,00,23,00),B(sx_write ,63),I(24,00,00,00),B(format ,4),I(3c,02,2a,1f),I(06,26,00,00),I(00,00,00,10),I(24,00,00,00),B(sx_obj1 ,59),I(08,23,00,00),B(sx_write ,12),I(23,00,00,00),B(sx_write ,59),I(3b,02,1c,24),B(aux_table ,7),I(3c,02,2a,47),I(00,00,23,00),B(sx_write ,64),I(24,00,00,00),B(format ,4),I(3c,02,2a,1f),I(07,26,00,00),I(00,00,00,0f),I(24,00,00,00),B(sx_obj1 ,59),I(08,23,00,00),B(sx_write ,12),I(23,00,00,00),B(sx_write ,57),I(3b,02,1c,24),B(aux_table ,7),I(3c,02,2a,47),I(00,00,23,00),B(sx_write ,65),I(24,00,00,00),B(format ,4),I(3c,02,2a,1f),I(08,26,00,00),I(00,00,00,0e),I(24,00,00,00),B(sx_obj1 ,59),I(08,23,00,00),B(sx_write ,12),I(23,00,00,00),B(sx_write ,55),I(3b,02,1c,24),B(aux_table ,7),I(3c,02,2a,47),I(00,00,27,0a),I(24,00,00,00),B(stream ,8),I(3c,02,83,24),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3c,01,2a,1f),I(0a,45,0b,00)};

  /* Byte-vector with size: 32 is_init: 1 index: 0 binding: initialize-sx-write */
  static const void *G006274[] = {I(87,25,00,00),B(sx_write ,1),I(24,00,00,00),B(sx_obj ,1),I(3e,0b,24,00),B(sx_obj ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(23,00,00,00),B(sx_write ,67),I(23,00,00,00),B(sx_write ,66),I(3b,fe,25,00),B(sx_write ,4),I(86,25,00,00),B(sx_write ,3),I(23,00,00,00),B(sx_write ,68),I(23,00,00,00),B(sx_write ,53),I(3b,01,25,00),B(sx_write ,2),I(23,00,00,00),B(sx_write ,69),I(23,00,00,00),B(sx_write ,50),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  object_class(str_6190) = eul_static_string_class;
  eul_allocate_bytevector( G006189,G006188);
  object_class(str_6193) = eul_static_string_class;
  eul_allocate_bytevector( G006192,G006191);
  object_class(str_6196) = eul_static_string_class;
  eul_allocate_bytevector( G006195,G006194);
  object_class(str_6199) = eul_static_string_class;
  eul_intern_symbol(sym_6200,"anonymous");
  object_class(str_6201) = eul_static_string_class;
  eul_allocate_bytevector( G006198,G006197);
  object_class(str_6204) = eul_static_string_class;
  eul_allocate_bytevector( G006203,G006202);
  eul_intern_symbol(sym_6207,"*pprint*");
  object_class(str_6208) = eul_static_string_class;
  object_class(str_6209) = eul_static_string_class;
  object_class(str_6210) = eul_static_string_class;
  object_class(str_6211) = eul_static_string_class;
  eul_allocate_bytevector( G006206,G006205);
  object_class(str_6214) = eul_static_string_class;
  eul_allocate_bytevector( G006213,G006212);
  object_class(str_6217) = eul_static_string_class;
  eul_allocate_bytevector( G006216,G006215);
  object_class(str_6220) = eul_static_string_class;
  eul_allocate_bytevector( G006219,G006218);
  object_class(str_6223) = eul_static_string_class;
  eul_allocate_bytevector( G006222,G006221);
  object_class(str_6226) = eul_static_string_class;
  eul_allocate_bytevector( G006225,G006224);
  object_class(str_6229) = eul_static_string_class;
  eul_allocate_bytevector( G006228,G006227);
  eul_intern_symbol(sym_6232,"binding");
  object_class(str_6233) = eul_static_string_class;
  object_class(str_6234) = eul_static_string_class;
  eul_allocate_bytevector( G006231,G006230);
  object_class(str_6237) = eul_static_string_class;
  eul_allocate_bytevector( G006236,G006235);
  eul_allocate_bytevector( G006239,G006238);
  object_class(str_6242) = eul_static_string_class;
  object_class(str_6243) = eul_static_string_class;
  eul_allocate_bytevector( G006241,G006240);
  object_class(str_6246) = eul_static_string_class;
  eul_allocate_bytevector( G006245,G006244);
  eul_intern_symbol(sym_6249,"new-generic-print");
  eul_intern_symbol(sym_6250,"(method generic-print)");
  eul_intern_symbol(sym_6251,"(method new-generic-print)");
  eul_allocate_bytevector( G006248,G006247);
  object_class(str_6254) = eul_static_string_class;
  object_class(str_6255) = eul_static_string_class;
  eul_allocate_bytevector( G006253,G006252);
  object_class(str_6258) = eul_static_string_class;
  eul_allocate_bytevector( G006257,G006256);
  object_class(str_6261) = eul_static_string_class;
  eul_allocate_bytevector( G006260,G006259);
  object_class(str_6264) = eul_static_string_class;
  eul_allocate_bytevector( G006263,G006262);
  eul_allocate_bytevector( G006266,G006265);
  eul_intern_symbol(sym_6269,"*clean-ups*");
  object_class(str_6270) = eul_static_string_class;
  object_class(str_6271) = eul_static_string_class;
  object_class(str_6272) = eul_static_string_class;
  object_class(str_6273) = eul_static_string_class;
  eul_allocate_bytevector( G006268,G006267);
  eul_intern_symbol(sym_6276,"pprint-module");
  eul_intern_symbol(sym_6277,"binding-print-string");
  eul_intern_symbol(sym_6278,"top-level");
  eul_allocate_bytevector( G006275,G006274);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 5; i++)
      sx_write_bindings[i] = eul_nil;
  }

  sx_write_bindings[ 5] = str_6190;
  sx_write_bindings[ 6] = G006189;
  sx_write_bindings[ 7] = str_6193;
  sx_write_bindings[ 8] = G006192;
  sx_write_bindings[ 9] = str_6196;
  sx_write_bindings[ 10] = G006195;
  sx_write_bindings[ 11] = str_6199;
  sx_write_bindings[ 12] = sym_6200;
  sx_write_bindings[ 13] = str_6201;
  sx_write_bindings[ 14] = G006198;
  sx_write_bindings[ 15] = str_6204;
  sx_write_bindings[ 16] = G006203;
  sx_write_bindings[ 17] = sym_6207;
  sx_write_bindings[ 18] = str_6208;
  sx_write_bindings[ 19] = str_6209;
  sx_write_bindings[ 20] = str_6210;
  sx_write_bindings[ 21] = str_6211;
  sx_write_bindings[ 22] = G006206;
  sx_write_bindings[ 23] = str_6214;
  sx_write_bindings[ 24] = G006213;
  sx_write_bindings[ 25] = str_6217;
  sx_write_bindings[ 26] = G006216;
  sx_write_bindings[ 27] = str_6220;
  sx_write_bindings[ 28] = G006219;
  sx_write_bindings[ 29] = str_6223;
  sx_write_bindings[ 30] = G006222;
  sx_write_bindings[ 31] = str_6226;
  sx_write_bindings[ 32] = G006225;
  sx_write_bindings[ 33] = str_6229;
  sx_write_bindings[ 34] = G006228;
  sx_write_bindings[ 35] = sym_6232;
  sx_write_bindings[ 36] = str_6233;
  sx_write_bindings[ 37] = str_6234;
  sx_write_bindings[ 38] = G006231;
  sx_write_bindings[ 39] = str_6237;
  sx_write_bindings[ 40] = G006236;
  sx_write_bindings[ 41] = G006239;
  sx_write_bindings[ 42] = str_6242;
  sx_write_bindings[ 43] = str_6243;
  sx_write_bindings[ 44] = G006241;
  sx_write_bindings[ 45] = str_6246;
  sx_write_bindings[ 46] = G006245;
  sx_write_bindings[ 47] = sym_6249;
  sx_write_bindings[ 48] = sym_6250;
  sx_write_bindings[ 49] = sym_6251;
  sx_write_bindings[ 50] = G006248;
  sx_write_bindings[ 51] = str_6254;
  sx_write_bindings[ 52] = str_6255;
  sx_write_bindings[ 53] = G006253;
  sx_write_bindings[ 54] = str_6258;
  sx_write_bindings[ 55] = G006257;
  sx_write_bindings[ 56] = str_6261;
  sx_write_bindings[ 57] = G006260;
  sx_write_bindings[ 58] = str_6264;
  sx_write_bindings[ 59] = G006263;
  sx_write_bindings[ 60] = G006266;
  sx_write_bindings[ 61] = sym_6269;
  sx_write_bindings[ 62] = str_6270;
  sx_write_bindings[ 63] = str_6271;
  sx_write_bindings[ 64] = str_6272;
  sx_write_bindings[ 65] = str_6273;
  sx_write_bindings[ 66] = G006268;
  sx_write_bindings[ 1] = eul_nil;
  sx_write_bindings[ 67] = sym_6276;
  sx_write_bindings[ 68] = sym_6277;
  sx_write_bindings[ 69] = sym_6278;
  eul_allocate_lambda( sx_write_bindings[0], "initialize-sx-write", 0, G006275);

  }
}


/* eof */
