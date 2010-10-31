/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module mop-gf
 **  Copyright: See file mop-gf.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_boot();
extern void initialize_module_mop_prim();
extern void initialize_module_mop_class();
extern void initialize_module_mop_inspect();
extern LispRef mop_prim_bindings[];
extern LispRef mop_inspect_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef boot_bindings[];
extern LispRef boot1_bindings[];

/* Module bindings with size 73 */
LispRef mop_gf_bindings[73];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module mop-gf */
void initialize_module_mop_gf()
{
  if (is_initialized) return;
  initialize_module_boot();
  initialize_module_mop_prim();
  initialize_module_mop_class();
  initialize_module_mop_inspect();
  eul_fast_table_set(eul_modules,"mop_gf",(LispRef) mop_gf_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_1933, sym_1932, sym_1931, sym_1930, sym_1929, sym_1928, sym_1927, sym_1926, sym_1925, sym_1924, sym_1923, sym_1922, sym_1921, G001920, key_1918, key_1917, key_1916, key_1915, G001914, G001911, G001909, G001907, G001905, G001903, G001901, G001899, G001897, G001895, G001893, G001891, G001889, G001887, G001885, sym_1883, G001882, G001880, sym_1878, G001877, G001875, sym_1873, G001872, G001870, G001868, sym_1866, sym_1865, sym_1864, sym_1863, sym_1862, G001861, G001856, G001852;

  /* Code vector and literal definitions */
  eul_allocate_static_string(str_1853, "*** WARNING [level-1]: ", 23);
  eul_allocate_static_string(str_1854, "\n", 1);
  /* Byte-vector with size: 15 is_init: 0 index: 19 binding: warning */
  static const void *G001851[] = {I(a7,84,23,00),B(mop_gf ,17),I(24,00,00,00),B(boot1 ,48),I(3c,02,2a,24),B(boot1 ,48),I(84,1f,03,1f),I(03,24,00,00),B(boot ,5),I(3c,04,2a,84),I(23,00,00,00),B(mop_gf ,18),I(24,00,00,00),B(boot1 ,48),I(3d,02,02,00)};

  eul_allocate_static_string(str_1857, "*** ERROR [level-1]: ", 21);
  eul_allocate_static_string(str_1858, "\n", 1);
  eul_allocate_static_string(str_1859, "***    See Backtrace? (y/n) ", 28);
  /* Byte-vector with size: 29 is_init: 0 index: 23 binding: error */
  static const void *G001855[] = {I(43,fd,84,23),B(mop_gf ,20),I(24,00,00,00),B(boot1 ,48),I(3c,02,2a,24),B(boot1 ,48),I(84,1f,03,1f),I(03,24,00,00),B(boot ,5),I(3c,04,2a,84),I(23,00,00,00),B(mop_gf ,21),I(24,00,00,00),B(boot1 ,48),I(3c,02,2a,84),I(23,00,00,00),B(mop_gf ,22),I(24,00,00,00),B(boot1 ,48),I(3c,02,2a,41),B(boot ,35),I(27,79,50,1b),I(44,0b,24,00),B(boot ,9),I(3c,00,36,02),I(86,2a,24,00),B(boot1 ,20),I(3d,00,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 86 is_init: 0 index: 29 binding: top-level */
  static const void *G001860[] = {I(a9,84,24,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_gf ,24),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_gf ,12),I(2a,83,24,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_gf ,25),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_gf ,14),I(2a,84,24,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_gf ,26),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_gf ,8),I(2a,24,00,00),B(mop_gf ,12),I(2a,8a,22,24),B(boot1 ,40),I(3c,01,24,00),B(mop_gf ,12),I(1c,1c,8a,08),I(1d,03,22,02),I(2a,24,00,00),B(mop_gf ,14),I(2a,24,00,00),B(mop_gf ,8),I(2a,23,00,00),B(mop_gf ,27),I(23,00,00,00),B(mop_gf ,23),I(3b,fd,89,00),B(boot ,14),I(2a,23,00,00),B(mop_gf ,28),I(23,00,00,00),B(mop_gf ,19),I(3b,fe,89,00),B(boot ,3),I(45,0d,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 30 binding: make */
  static const void *G001867[] = {I(a7,1c,1c,24),B(mop_gf ,8),I(3c,02,1b,1d),I(24,00,00,00),B(mop_gf ,12),I(3d,02,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 31 binding: anonymous */
  static const void *G001869[] = {I(aa,1b,47,00),I(01,1a,1b,44),I(13,47,00,03),I(1d,86,03,2a),I(1c,83,14,47),I(00,00,3d,01),I(02,36,04,47),I(00,03,45,02)};

  /* Byte-vector with size: 16 is_init: 0 index: 33 binding: gf-reset-cache */
  static const void *G001871[] = {I(aa,46,04,8a),I(08,02,1b,48),I(00,03,47,00),I(03,44,2e,47),I(00,03,06,1b),I(48,00,01,86),I(1b,48,00,00),I(23,00,00,00),B(mop_gf ,32),I(23,00,00,00),B(mop_gf ,31),I(3b,01,48,00),I(00,82,47,00),I(00,3d,01,03),I(22,02,36,02),I(86,45,01,00)};

  /* Byte-vector with size: 26 is_init: 0 index: 34 binding: primitive-discriminating-function */
  static const void *G001874[] = {I(a8,47,00,00),I(8a,08,02,1b),I(82,02,1c,83),I(02,47,00,00),I(8a,06,02,1b),I(1f,05,24,00),B(boot ,5),I(3c,02,24,00),B(mop_class ,87),I(1c,24,00,00),B(boot ,11),I(3c,02,1b,12),I(1b,44,13,47),I(00,00,1f,08),I(24,00,00,00),B(mop_gf ,15),I(3d,02,08,36),I(21,1f,05,1d),I(0f,1f,07,1f),I(06,1d,03,2a),I(1d,11,29,18),I(1d,10,1b,1f),I(0a,24,00,00),B(boot ,5),I(3d,02,0a,22),I(02,45,08,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 36 binding: compute-primitive-discriminating-function */
  static const void *G001876[] = {I(aa,46,01,1b),I(48,00,00,23),B(mop_gf ,35),I(23,00,00,00),B(mop_gf ,34),I(3b,ff,45,01)};

  /* Byte-vector with size: 5 is_init: 0 index: 37 binding: primitive-method-lookup-function */
  static const void *G001879[] = {I(a8,47,00,01),I(1c,47,00,00),I(24,00,00,00),B(mop_gf ,7),I(3d,03,01,00)};

  /* Byte-vector with size: 29 is_init: 0 index: 39 binding: primitive-make-generic-function */
  static const void *G001881[] = {I(ab,46,02,1b),I(48,00,00,24),B(mop_class ,16),I(8a,09,01,1b),I(48,00,01,47),I(00,01,1f,03),I(1c,82,1d,03),I(22,02,2a,47),I(00,01,47,00),I(00,1c,83,1d),I(03,22,02,2a),I(47,00,01,24),B(mop_class ,63),I(1c,8a,03,1d),I(03,22,02,2a),I(47,00,01,23),B(mop_gf ,38),I(23,00,00,00),B(mop_gf ,37),I(3b,ff,1c,8a),I(06,1d,03,22),I(02,2a,47,00),I(01,24,00,00),B(mop_gf ,4),I(3c,01,47,00),I(01,1c,1c,8a),I(07,1d,03,22),I(02,2a,47,00),I(01,45,04,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 40 binding: anonymous */
  static const void *G001884[] = {I(43,03,1c,12),I(1b,44,0f,1c),I(24,00,00,00),B(boot ,28),I(3d,01,04,36),I(32,1d,10,1b),I(44,1f,1f,04),I(11,1f,04,11),I(1f,06,10,1b),I(04,1b,1f,07),I(0f,1f,04,1f),I(04,1d,47,00),I(00,3d,03,0a),I(22,05,36,0d),I(1f,04,11,1f),I(04,11,47,00),I(00,3d,02,05),I(22,01,45,04)};

  /* Byte-vector with size: 10 is_init: 0 index: 41 binding: discriminating-domain */
  static const void *G001886[] = {I(ab,46,01,86),I(1b,48,00,00),I(23,00,00,00),B(mop_gf ,32),I(23,00,00,00),B(mop_gf ,40),I(3b,03,48,00),I(00,1d,1d,86),I(47,00,00,3d),I(03,03,45,03)};

  /* Byte-vector with size: 7 is_init: 0 index: 42 binding: anonymous */
  static const void *G001888[] = {I(ab,1c,83,02),I(1c,83,02,1c),I(1c,47,00,00),I(24,00,00,00),B(mop_gf ,13),I(3d,03,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 43 binding: the-method-lookup-function */
  static const void *G001890[] = {I(43,03,46,01),I(1d,8a,08,02),I(82,02,1b,48),I(00,00,1f,03),I(8a,05,02,47),I(00,00,1c,24),B(mop_gf ,9),I(3c,02,1b,23),B(mop_gf ,32),I(23,00,00,00),B(mop_gf ,42),I(3b,02,24,00),B(boot ,16),I(3d,02,06,45),I(06,00,00,00)};

  /* Byte-vector with size: 16 is_init: 0 index: 44 binding: anonymous */
  static const void *G001892[] = {I(ab,1c,12,1b),I(44,04,1c,36),I(35,1d,10,1b),I(83,02,47,00),I(00,1c,24,00),B(mop_gf ,11),I(3c,02,1b,44),I(11,1f,05,11),I(1f,03,1f,06),I(0f,47,00,01),I(3d,02,06,36),I(0f,1f,05,11),I(1b,1f,06,47),I(00,01,3d,02),I(07,22,01,22),I(03,45,03,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 45 binding: select-methods */
  static const void *G001894[] = {I(ab,46,02,1c),I(48,00,00,86),I(1b,48,00,01),I(23,00,00,00),B(mop_gf ,32),I(23,00,00,00),B(mop_gf ,44),I(3b,02,48,00),I(01,1c,86,47),I(00,01,3d,02),I(03,45,03,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 46 binding: anonymous */
  static const void *G001896[] = {I(aa,1b,47,00),I(03,1a,1b,44),I(20,47,00,00),I(1d,02,47,00),I(01,1f,03,02),I(50,1b,44,0c),I(1d,83,14,47),I(00,02,3d,01),I(03,36,02,86),I(22,01,36,02),I(87,45,02,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 47 binding: sig= */
  static const void *G001898[] = {I(ab,46,05,1c),I(48,00,00,1b),I(48,00,01,47),I(00,00,06,1b),I(48,00,03,86),I(1b,48,00,02),I(23,00,00,00),B(mop_gf ,32),I(23,00,00,00),B(mop_gf ,46),I(3b,01,48,00),I(02,82,47,00),I(02,3d,01,04),I(45,04,00,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 48 binding: anonymous */
  static const void *G001900[] = {I(aa,1b,47,00),I(03,1a,1b,44),I(3b,47,00,01),I(1d,02,1b,44),I(26,47,00,00),I(1f,03,02,1b),I(1d,24,00,00),B(mop_inspect ,11),I(3c,02,1b,44),I(0d,1f,04,83),I(14,47,00,02),I(3d,01,05,36),I(02,86,22,02),I(36,0a,1d,83),I(14,47,00,02),I(3d,01,03,22),I(01,36,02,87),I(45,02,00,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 49 binding: sig-applicable? */
  static const void *G001902[] = {I(ab,46,05,1c),I(48,00,00,1b),I(48,00,01,47),I(00,01,06,1b),I(48,00,03,86),I(1b,48,00,02),I(23,00,00,00),B(mop_gf ,32),I(23,00,00,00),B(mop_gf ,48),I(3b,01,48,00),I(02,82,47,00),I(02,3c,01,1b),I(45,05,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 50 binding: anonymous */
  static const void *G001904[] = {I(aa,1b,10,47),I(00,00,1c,50),I(1b,44,04,87),I(36,17,47,00),I(01,1d,50,1b),I(44,04,86,36),I(0a,1f,03,11),I(47,00,02,3d),I(01,04,22,01),I(45,03,00,00)};

  /* Byte-vector with size: 26 is_init: 0 index: 51 binding: anonymous */
  static const void *G001906[] = {I(aa,46,03,1b),I(47,01,04,1a),I(1b,44,59,47),I(01,00,1d,02),I(47,01,01,1f),I(03,02,1c,48),I(00,00,1b,48),I(00,01,47,00),I(00,47,00,01),I(50,1b,44,0d),I(1f,04,83,14),I(47,01,03,3d),I(01,05,36,2c),I(86,1b,48,00),I(02,23,00,00),B(mop_gf ,32),I(23,00,00,00),B(mop_gf ,50),I(3b,01,48,00),I(02,47,01,02),I(1f,06,02,1b),I(8a,06,02,47),I(00,02,3d,01),I(07,22,02,22),I(03,36,02,87),I(45,02,00,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 52 binding: sig<= */
  static const void *G001908[] = {I(43,03,46,06),I(1d,48,00,00),I(1c,48,00,01),I(1b,48,00,02),I(47,00,00,06),I(1b,48,00,04),I(86,1b,48,00),I(03,23,00,00),B(mop_gf ,32),I(23,00,00,00),B(mop_gf ,51),I(3b,01,48,00),I(03,82,47,00),I(03,3d,01,05),I(45,05,00,00)};

  eul_allocate_static_string(str_1912, "no applicable methods for ~a\n    arguments: ~a\n    classes: ~a", 62);
  /* Byte-vector with size: 12 is_init: 0 index: 54 binding: error-no-applicable-methods */
  static const void *G001910[] = {I(ab,1c,82,02),I(24,00,00,00),B(mop_inspect ,5),I(1d,24,00,00),B(boot ,11),I(3c,02,86,23),B(mop_gf ,53),I(1f,03,1f,05),I(1f,04,24,00),B(boot ,13),I(3d,05,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 32 is_init: 0 index: 59 binding: make-generic-function */
  static const void *G001913[] = {I(43,06,1f,03),I(24,00,00,00),B(mop_class ,16),I(50,1b,44,22),I(1f,03,24,00),B(mop_class ,63),I(50,1b,44,11),I(1f,03,12,1b),I(44,06,1f,03),I(12,36,02,86),I(22,01,36,02),I(86,22,01,36),I(02,86,1b,44),I(11,1f,07,1f),I(07,24,00,00),B(mop_gf ,5),I(3d,02,08,36),I(37,24,00,00),B(mop_gf ,2),I(1f,06,23,00),B(mop_gf ,55),I(1f,0a,23,00),B(mop_gf ,56),I(1f,0b,23,00),B(mop_gf ,57),I(1f,0b,23,00),B(mop_gf ,58),I(1f,0c,1f,0c),I(24,00,00,00),B(boot ,5),I(3d,0b,08,45),I(08,00,00,00)};

  /* Byte-vector with size: 106 is_init: 1 index: 0 binding: initialize-mop-gf */
  static const void *G001919[] = {I(87,25,00,00),B(mop_gf ,1),I(24,00,00,00),B(mop_inspect ,1),I(3e,0b,24,00),B(mop_inspect ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_class ,1),I(3e,0b,24,00),B(mop_class ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_prim ,1),I(3e,0b,24,00),B(mop_prim ,0),I(3c,00,21,01),I(24,00,00,00),B(boot ,1),I(3e,0b,24,00),B(boot ,0),I(3c,00,21,01),I(23,00,00,00),B(mop_gf ,60),I(23,00,00,00),B(mop_gf ,59),I(3b,06,25,00),B(mop_gf ,16),I(23,00,00,00),B(mop_gf ,61),I(23,00,00,00),B(mop_gf ,54),I(3b,02,25,00),B(mop_gf ,15),I(86,25,00,00),B(mop_gf ,14),I(23,00,00,00),B(mop_gf ,62),I(23,00,00,00),B(mop_gf ,52),I(3b,03,25,00),B(mop_gf ,13),I(86,25,00,00),B(mop_gf ,12),I(23,00,00,00),B(mop_gf ,63),I(23,00,00,00),B(mop_gf ,49),I(3b,02,25,00),B(mop_gf ,11),I(23,00,00,00),B(mop_gf ,64),I(23,00,00,00),B(mop_gf ,47),I(3b,02,25,00),B(mop_gf ,10),I(23,00,00,00),B(mop_gf ,65),I(23,00,00,00),B(mop_gf ,45),I(3b,02,25,00),B(mop_gf ,9),I(86,25,00,00),B(mop_gf ,8),I(23,00,00,00),B(mop_gf ,66),I(23,00,00,00),B(mop_gf ,43),I(3b,03,25,00),B(mop_gf ,7),I(23,00,00,00),B(mop_gf ,67),I(23,00,00,00),B(mop_gf ,41),I(3b,02,25,00),B(mop_gf ,6),I(23,00,00,00),B(mop_gf ,68),I(23,00,00,00),B(mop_gf ,39),I(3b,02,25,00),B(mop_gf ,5),I(23,00,00,00),B(mop_gf ,69),I(23,00,00,00),B(mop_gf ,36),I(3b,01,25,00),B(mop_gf ,4),I(23,00,00,00),B(mop_gf ,70),I(23,00,00,00),B(mop_gf ,33),I(3b,01,25,00),B(mop_gf ,3),I(23,00,00,00),B(mop_gf ,71),I(23,00,00,00),B(mop_gf ,30),I(3b,fe,25,00),B(mop_gf ,2),I(23,00,00,00),B(mop_gf ,72),I(23,00,00,00),B(mop_gf ,29),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  object_class(str_1853) = eul_static_string_class;
  object_class(str_1854) = eul_static_string_class;
  eul_allocate_bytevector( G001852,G001851);
  object_class(str_1857) = eul_static_string_class;
  object_class(str_1858) = eul_static_string_class;
  object_class(str_1859) = eul_static_string_class;
  eul_allocate_bytevector( G001856,G001855);
  eul_intern_symbol(sym_1862,"initialize");
  eul_intern_symbol(sym_1863,"finalize");
  eul_intern_symbol(sym_1864,"allocate");
  eul_intern_symbol(sym_1865,"error");
  eul_intern_symbol(sym_1866,"warning");
  eul_allocate_bytevector( G001861,G001860);
  eul_allocate_bytevector( G001868,G001867);
  eul_allocate_bytevector( G001870,G001869);
  eul_intern_symbol(sym_1873,"anonymous");
  eul_allocate_bytevector( G001872,G001871);
  eul_allocate_bytevector( G001875,G001874);
  eul_intern_symbol(sym_1878,"primitive-discriminating-function");
  eul_allocate_bytevector( G001877,G001876);
  eul_allocate_bytevector( G001880,G001879);
  eul_intern_symbol(sym_1883,"primitive-method-lookup-function");
  eul_allocate_bytevector( G001882,G001881);
  eul_allocate_bytevector( G001885,G001884);
  eul_allocate_bytevector( G001887,G001886);
  eul_allocate_bytevector( G001889,G001888);
  eul_allocate_bytevector( G001891,G001890);
  eul_allocate_bytevector( G001893,G001892);
  eul_allocate_bytevector( G001895,G001894);
  eul_allocate_bytevector( G001897,G001896);
  eul_allocate_bytevector( G001899,G001898);
  eul_allocate_bytevector( G001901,G001900);
  eul_allocate_bytevector( G001903,G001902);
  eul_allocate_bytevector( G001905,G001904);
  eul_allocate_bytevector( G001907,G001906);
  eul_allocate_bytevector( G001909,G001908);
  object_class(str_1912) = eul_static_string_class;
  eul_allocate_bytevector( G001911,G001910);
  eul_intern_keyword(key_1915,"name");
  eul_intern_keyword(key_1916,"domain");
  eul_intern_keyword(key_1917,"method-class");
  eul_intern_keyword(key_1918,"method-keywords");
  eul_allocate_bytevector( G001914,G001913);
  eul_intern_symbol(sym_1921,"make-generic-function");
  eul_intern_symbol(sym_1922,"error-no-applicable-methods");
  eul_intern_symbol(sym_1923,"sig<=");
  eul_intern_symbol(sym_1924,"sig-applicable?");
  eul_intern_symbol(sym_1925,"sig=");
  eul_intern_symbol(sym_1926,"select-methods");
  eul_intern_symbol(sym_1927,"the-method-lookup-function");
  eul_intern_symbol(sym_1928,"discriminating-domain");
  eul_intern_symbol(sym_1929,"primitive-make-generic-function");
  eul_intern_symbol(sym_1930,"compute-primitive-discriminating-function");
  eul_intern_symbol(sym_1931,"gf-reset-cache");
  eul_intern_symbol(sym_1932,"make");
  eul_intern_symbol(sym_1933,"top-level");
  eul_allocate_bytevector( G001920,G001919);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 17; i++)
      mop_gf_bindings[i] = eul_nil;
  }

  mop_gf_bindings[ 17] = str_1853;
  mop_gf_bindings[ 18] = str_1854;
  mop_gf_bindings[ 19] = G001852;
  mop_gf_bindings[ 20] = str_1857;
  mop_gf_bindings[ 21] = str_1858;
  mop_gf_bindings[ 22] = str_1859;
  mop_gf_bindings[ 23] = G001856;
  mop_gf_bindings[ 24] = sym_1862;
  mop_gf_bindings[ 25] = sym_1863;
  mop_gf_bindings[ 26] = sym_1864;
  mop_gf_bindings[ 27] = sym_1865;
  mop_gf_bindings[ 28] = sym_1866;
  mop_gf_bindings[ 29] = G001861;
  mop_gf_bindings[ 30] = G001868;
  mop_gf_bindings[ 31] = G001870;
  mop_gf_bindings[ 32] = sym_1873;
  mop_gf_bindings[ 33] = G001872;
  mop_gf_bindings[ 34] = G001875;
  mop_gf_bindings[ 35] = sym_1878;
  mop_gf_bindings[ 36] = G001877;
  mop_gf_bindings[ 37] = G001880;
  mop_gf_bindings[ 38] = sym_1883;
  mop_gf_bindings[ 39] = G001882;
  mop_gf_bindings[ 40] = G001885;
  mop_gf_bindings[ 41] = G001887;
  mop_gf_bindings[ 42] = G001889;
  mop_gf_bindings[ 43] = G001891;
  mop_gf_bindings[ 44] = G001893;
  mop_gf_bindings[ 45] = G001895;
  mop_gf_bindings[ 46] = G001897;
  mop_gf_bindings[ 47] = G001899;
  mop_gf_bindings[ 48] = G001901;
  mop_gf_bindings[ 49] = G001903;
  mop_gf_bindings[ 50] = G001905;
  mop_gf_bindings[ 51] = G001907;
  mop_gf_bindings[ 52] = G001909;
  mop_gf_bindings[ 53] = str_1912;
  mop_gf_bindings[ 54] = G001911;
  mop_gf_bindings[ 55] = key_1915;
  mop_gf_bindings[ 56] = key_1916;
  mop_gf_bindings[ 57] = key_1917;
  mop_gf_bindings[ 58] = key_1918;
  mop_gf_bindings[ 59] = G001914;
  mop_gf_bindings[ 1] = eul_nil;
  mop_gf_bindings[ 60] = sym_1921;
  mop_gf_bindings[ 61] = sym_1922;
  mop_gf_bindings[ 62] = sym_1923;
  mop_gf_bindings[ 63] = sym_1924;
  mop_gf_bindings[ 64] = sym_1925;
  mop_gf_bindings[ 65] = sym_1926;
  mop_gf_bindings[ 66] = sym_1927;
  mop_gf_bindings[ 67] = sym_1928;
  mop_gf_bindings[ 68] = sym_1929;
  mop_gf_bindings[ 69] = sym_1930;
  mop_gf_bindings[ 70] = sym_1931;
  mop_gf_bindings[ 71] = sym_1932;
  mop_gf_bindings[ 72] = sym_1933;
  eul_allocate_lambda( mop_gf_bindings[0], "initialize-mop-gf", 0, G001920);

  }
}


/* eof */
