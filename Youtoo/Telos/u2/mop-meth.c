/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module mop-meth
 **  Copyright: See file mop-meth.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_boot();
extern void initialize_module_mop_prim();
extern void initialize_module_mop_key();
extern void initialize_module_mop_class();
extern void initialize_module_mop_inspect();
extern void initialize_module_mop_gf();
extern LispRef mop_prim_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_inspect_bindings[];
extern LispRef mop_key_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef boot_bindings[];

/* Module bindings with size 63 */
LispRef mop_meth_bindings[63];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module mop-meth */
void initialize_module_mop_meth()
{
  if (is_initialized) return;
  initialize_module_boot();
  initialize_module_mop_prim();
  initialize_module_mop_key();
  initialize_module_mop_class();
  initialize_module_mop_inspect();
  initialize_module_mop_gf();
  eul_fast_table_set(eul_modules,"mop_meth",(LispRef) mop_meth_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_1721, sym_1720, sym_1719, sym_1718, sym_1717, sym_1716, sym_1715, G001714, G001712, G001710, G001708, G001706, G001703, G001701, key_1699, key_1698, G001697, G001695, sym_1693, sym_1692, sym_1691, sym_1690, sym_1689, sym_1688, sym_1687, sym_1686, sym_1685, sym_1684, sym_1683, sym_1682, sym_1681, G001680, G001677, G001675, G001673, G001671, sym_1669, key_1668, G001667, G001665, key_1663, G001662, sym_1660, G001659, G001657, sym_1655, G001654, G001652;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 29 is_init: 0 index: 14 binding: discriminating-function */
  static const void *G001651[] = {I(a8,47,00,00),I(26,00,00,00),I(00,00,00,08),I(02,1b,82,02),I(1c,83,02,47),I(00,01,1f,04),I(24,00,00,00),B(boot ,5),I(3c,02,24,00),B(mop_class ,87),I(1c,24,00,00),B(boot ,11),I(3c,02,1b,12),I(1b,34,00,00),I(00,00,00,1b),I(47,00,00,1f),I(07,24,00,00),B(mop_gf ,15),I(3d,02,07,32),I(00,00,00,26),I(1f,04,1d,0f),I(1f,06,1f,05),I(1d,03,2a,1d),I(11,29,18,1d),I(10,1b,1f,09),I(24,00,00,00),B(boot ,5),I(3d,02,09,22),I(02,45,07,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 16 binding: (method-compute-discriminating-function) */
  static const void *G001653[] = {I(43,04,46,02),I(1f,03,48,00),I(00,1c,48,00),I(01,23,00,00),B(mop_meth ,15),I(23,00,00,00),B(mop_meth ,14),I(3b,ff,45,04)};

  /* Byte-vector with size: 5 is_init: 0 index: 17 binding: method-lookup-function */
  static const void *G001656[] = {I(a8,47,00,00),I(1c,47,00,01),I(24,00,00,00),B(mop_gf ,7),I(3d,03,01,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 19 binding: (method-compute-method-lookup-function) */
  static const void *G001658[] = {I(43,03,46,02),I(1d,48,00,00),I(47,00,00,83),I(02,1b,48,00),I(01,23,00,00),B(mop_meth ,18),I(23,00,00,00),B(mop_meth ,17),I(3b,ff,45,04)};

  /* Byte-vector with size: 13 is_init: 0 index: 21 binding: (method-initialize) */
  static const void *G001661[] = {I(ab,1c,1c,37),I(02,2a,23,00),B(mop_meth ,20),I(1c,86,24,00),B(mop_key ,2),I(3c,03,1b,34),I(00,00,00,15),I(1b,1f,03,24),B(mop_meth ,8),I(3c,02,32,00),I(00,00,00,07),I(86,2a,1d,45),I(03,00,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 22 binding: anonymous */
  static const void *G001664[] = {I(aa,47,00,00),I(1c,24,00,00),B(mop_meth ,8),I(3d,02,01,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 25 binding: (method-initialize) */
  static const void *G001666[] = {I(ab,46,01,1c),I(48,00,00,47),I(00,00,1c,37),I(02,2a,23,00),B(mop_meth ,23),I(1c,86,24,00),B(mop_key ,2),I(3c,03,23,00),B(mop_meth ,24),I(23,00,00,00),B(mop_meth ,22),I(3b,01,1c,24),B(boot ,17),I(3c,02,2a,47),I(00,00,24,00),B(mop_meth ,13),I(3c,01,2a,47),I(00,00,45,03)};

  /* Byte-vector with size: 22 is_init: 0 index: 26 binding: (method-finalize-generic) */
  static const void *G001670[] = {I(aa,1b,83,02),I(1c,26,00,00),I(00,00,00,05),I(02,1d,1d,1d),I(24,00,00,00),B(mop_meth ,7),I(3c,03,1f,03),I(1f,03,1d,1f),I(04,24,00,00),B(mop_meth ,12),I(3c,04,1f,04),I(1d,1c,26,00),I(00,00,00,06),I(1d,03,22,02),I(2a,1f,04,1c),I(1c,26,00,00),I(00,00,00,07),I(1d,03,22,02),I(2a,1f,04,24),B(mop_gf ,3),I(3c,01,2a,1f),I(04,45,05,00)};

  /* Byte-vector with size: 21 is_init: 0 index: 27 binding: (method-remove-method) */
  static const void *G001672[] = {I(ab,1c,26,00),I(00,00,00,05),I(02,1c,1c,86),I(6c,1b,34,00),I(00,00,00,3e),I(1d,1d,24,00),B(boot ,18),I(3c,02,1f,04),I(1c,1c,26,00),I(00,00,00,05),I(1d,03,22,02),I(2a,1f,03,86),I(1c,82,1d,03),I(22,02,2a,1f),I(04,24,00,00),B(mop_meth ,13),I(3c,01,22,01),I(32,00,00,00),I(00,00,00,09),I(86,2a,1f,03),I(45,04,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 28 binding: (method-find-method) */
  static const void *G001674[] = {I(ab,24,00,00),B(mop_meth ,9),I(3d,02,00,00)};

  eul_allocate_static_string(str_1678, "mismatch between class of generic function ~a and method class ~a", 65);
  /* Byte-vector with size: 41 is_init: 0 index: 30 binding: (method-add-method) */
  static const void *G001676[] = {I(ab,1b,1d,24),B(mop_meth ,4),I(3c,02,2a,1b),I(04,1d,26,00),I(00,00,00,03),I(02,24,00,00),B(mop_inspect ,2),I(3c,02,1b,34),I(00,00,00,0d),I(86,32,00,00),I(00,00,00,1f),I(1d,82,02,1d),I(04,23,00,00),B(mop_meth ,29),I(1d,1d,24,00),B(boot ,13),I(3c,03,22,02),I(2a,1c,83,02),I(1f,03,1c,24),B(mop_meth ,10),I(3c,02,1b,34),I(00,00,00,15),I(1f,04,1c,24),B(mop_meth ,6),I(3c,02,32,00),I(00,00,00,07),I(86,2a,1f,04),I(26,00,00,00),I(00,00,00,05),I(02,1f,04,1c),I(0f,1f,06,1c),I(1c,26,00,00),I(00,00,00,05),I(1d,03,22,02),I(2a,1f,05,1f),I(07,1c,82,1d),I(03,22,02,2a),I(1f,06,24,00),B(mop_meth ,13),I(3c,01,2a,1f),I(06,45,07,00)};

  /* Byte-vector with size: 380 is_init: 0 index: 44 binding: top-level */
  static const void *G001679[] = {I(a9,84,24,00),B(mop_class ,51),I(24,00,00,00),B(mop_class ,25),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_meth ,31),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_meth ,8),I(2a,84,24,00),B(mop_class ,51),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_meth ,32),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_meth ,10),I(2a,84,24,00),B(mop_class ,51),I(24,00,00,00),B(mop_class ,25),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_meth ,33),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_meth ,6),I(2a,83,24,00),B(mop_class ,51),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_meth ,34),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_meth ,13),I(2a,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,51),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_meth ,35),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_meth ,7),I(2a,26,00,00),I(00,00,00,04),I(24,00,00,00),B(mop_class ,51),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,05,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_meth ,36),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_meth ,12),I(2a,24,00,00),B(mop_meth ,8),I(2a,24,00,00),B(mop_meth ,8),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,51),I(24,00,00,00),B(mop_class ,25),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_meth ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_meth ,37),I(23,00,00,00),B(mop_meth ,30),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_meth ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_meth ,10),I(2a,24,00,00),B(mop_meth ,10),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,51),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_meth ,10),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_meth ,38),I(23,00,00,00),B(mop_meth ,28),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_meth ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_meth ,6),I(2a,24,00,00),B(mop_meth ,6),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,51),I(24,00,00,00),B(mop_class ,25),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_meth ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_meth ,39),I(23,00,00,00),B(mop_meth ,27),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_meth ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_meth ,13),I(2a,24,00,00),B(mop_meth ,13),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,51),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_meth ,13),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_meth ,40),I(23,00,00,00),B(mop_meth ,26),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_meth ,13),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,51),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_meth ,41),I(23,00,00,00),B(mop_meth ,25),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,25),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_meth ,41),I(23,00,00,00),B(mop_meth ,21),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_meth ,7),I(2a,24,00,00),B(mop_meth ,7),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,51),I(86,86,24,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_meth ,7),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_meth ,42),I(23,00,00,00),B(mop_meth ,19),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_meth ,7),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_meth ,12),I(2a,24,00,00),B(mop_meth ,12),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,04),I(24,00,00,00),B(mop_class ,51),I(86,86,86,24),B(boot1 ,40),I(3c,05,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_meth ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_meth ,43),I(23,00,00,00),B(mop_meth ,16),I(3b,04,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_meth ,12),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,48,45),I(48,00,00,00)};

  /* Byte-vector with size: 27 is_init: 0 index: 45 binding: primitive-add-method */
  static const void *G001694[] = {I(ab,1b,1d,24),B(mop_meth ,4),I(3c,02,2a,1b),I(83,02,1d,1c),I(24,00,00,00),B(mop_meth ,9),I(3c,02,1b,34),I(00,00,00,15),I(1f,03,1c,24),B(mop_meth ,11),I(3c,02,32,00),I(00,00,00,07),I(86,2a,1f,03),I(26,00,00,00),I(00,00,00,05),I(02,1f,03,1c),I(0f,1f,05,1c),I(1c,26,00,00),I(00,00,00,05),I(1d,03,22,02),I(2a,1f,04,1f),I(06,1c,82,1d),I(03,22,02,2a),I(1f,05,24,00),B(mop_gf ,3),I(3c,01,2a,1f),I(05,45,06,00)};

  /* Byte-vector with size: 38 is_init: 0 index: 48 binding: make-method */
  static const void *G001696[] = {I(43,04,1f,03),I(24,00,00,00),B(mop_class ,63),I(50,1b,34,00),I(00,00,00,26),I(1d,24,00,00),B(mop_inspect ,8),I(3c,01,1b,34),I(00,00,00,0d),I(1d,12,32,00),I(00,00,00,07),I(86,22,01,32),I(00,00,00,06),I(86,1b,34,00),I(00,00,00,36),I(24,00,00,00),B(mop_class ,63),I(26,00,00,00),I(00,00,00,03),I(01,1b,1f,06),I(1c,83,1d,03),I(22,02,2a,1b),I(1f,05,1c,84),I(1d,03,22,02),I(2a,1b,22,01),I(32,00,00,00),I(00,00,00,2f),I(24,00,00,00),B(mop_gf ,2),I(1f,06,23,00),B(mop_meth ,46),I(1f,07,23,00),B(mop_meth ,47),I(1f,08,1f,08),I(24,00,00,00),B(boot ,5),I(3d,07,06,45),I(06,00,00,00)};

  /* Byte-vector with size: 34 is_init: 0 index: 49 binding: anonymous */
  static const void *G001700[] = {I(aa,1b,47,00),I(02,1a,1b,34),I(00,00,00,7d),I(47,00,01,1d),I(02,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,0f),I(24,00,00,00),B(mop_class ,22),I(47,00,03,1f),I(04,02,1b,34),I(00,00,00,2d),I(1c,1c,24,00),B(mop_inspect ,11),I(3c,02,1b,34),I(00,00,00,15),I(1f,05,83,14),I(47,00,00,3d),I(01,06,32,00),I(00,00,00,07),I(86,22,01,32),I(00,00,00,24),I(1c,24,00,00),B(mop_class ,22),I(50,1b,34,00),I(00,00,00,12),I(47,00,01,1f),I(06,86,03,32),I(00,00,00,06),I(86,22,01,22),I(03,32,00,00),I(00,00,00,08),I(87,45,02,00)};

  eul_allocate_static_string(str_1704, "method extends domain of generic function ~a\n    method domain: ~a\n    generic function domain: ~a", 98);
  /* Byte-vector with size: 31 is_init: 0 index: 51 binding: check-method-domain */
  static const void *G001702[] = {I(ab,46,05,1c),I(83,02,1b,48),I(00,01,47,00),I(01,06,1b,48),I(00,02,1d,83),I(02,1b,48,00),I(03,47,00,03),I(06,86,1b,48),I(00,00,23,00),B(mop_meth ,24),I(23,00,00,00),B(mop_meth ,49),I(3b,01,48,00),I(00,47,00,02),I(1d,19,1b,34),I(00,00,00,11),I(82,47,00,00),I(3c,01,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,0e),I(87,32,00,00),I(00,00,00,24),I(1f,07,82,02),I(23,00,00,00),B(mop_meth ,50),I(1c,47,00,01),I(47,00,03,24),B(boot ,13),I(3d,04,0a,22),I(01,45,09,00)};

  /* Byte-vector with size: 20 is_init: 0 index: 52 binding: stable-add-method */
  static const void *G001705[] = {I(ab,1c,04,24),B(mop_class ,16),I(50,1b,34,00),I(00,00,00,16),I(1c,04,24,00),B(mop_class ,63),I(50,32,00,00),I(00,00,00,08),I(86,1b,34,00),I(00,00,00,1a),I(1f,03,1f,03),I(24,00,00,00),B(mop_meth ,2),I(3d,02,04,32),I(00,00,00,14),I(1f,03,1f,03),I(24,00,00,00),B(mop_meth ,8),I(3d,02,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 17 is_init: 0 index: 53 binding: anonymous */
  static const void *G001707[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,32),I(1c,10,1b,83),I(02,1b,47,00),I(00,24,00,00),B(mop_gf ,10),I(3c,02,1b,34),I(00,00,00,0d),I(1d,32,00,00),I(00,00,00,10),I(1f,04,11,47),I(00,01,3d,01),I(05,22,03,45),I(02,00,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 54 binding: primitive-find-method */
  static const void *G001709[] = {I(ab,46,02,1b),I(48,00,00,86),I(1b,48,00,01),I(23,00,00,00),B(mop_meth ,24),I(23,00,00,00),B(mop_meth ,53),I(3b,01,48,00),I(01,1d,26,00),I(00,00,00,05),I(02,47,00,01),I(3d,01,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 21 is_init: 0 index: 55 binding: primitive-remove-method */
  static const void *G001711[] = {I(ab,1c,26,00),I(00,00,00,05),I(02,1c,1c,86),I(6c,1b,34,00),I(00,00,00,3e),I(1d,1d,24,00),B(boot ,18),I(3c,02,1f,04),I(1c,1c,26,00),I(00,00,00,05),I(1d,03,22,02),I(2a,1f,03,86),I(1c,82,1d,03),I(22,02,2a,1f),I(04,24,00,00),B(mop_gf ,3),I(3c,01,22,01),I(32,00,00,00),I(00,00,00,09),I(86,2a,1f,03),I(45,04,00,00)};

  /* Byte-vector with size: 86 is_init: 1 index: 0 binding: initialize-mop-meth */
  static const void *G001713[] = {I(87,25,00,00),B(mop_meth ,1),I(24,00,00,00),B(mop_gf ,1),I(3e,0b,24,00),B(mop_gf ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_inspect ,1),I(3e,0b,24,00),B(mop_inspect ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_class ,1),I(3e,0b,24,00),B(mop_class ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_key ,1),I(3e,0b,24,00),B(mop_key ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_prim ,1),I(3e,0b,24,00),B(mop_prim ,0),I(3c,00,21,01),I(24,00,00,00),B(boot ,1),I(3e,0b,24,00),B(boot ,0),I(3c,00,21,01),I(86,25,00,00),B(mop_meth ,13),I(86,25,00,00),B(mop_meth ,12),I(23,00,00,00),B(mop_meth ,56),I(23,00,00,00),B(mop_meth ,55),I(3b,02,25,00),B(mop_meth ,11),I(86,25,00,00),B(mop_meth ,10),I(23,00,00,00),B(mop_meth ,57),I(23,00,00,00),B(mop_meth ,54),I(3b,02,25,00),B(mop_meth ,9),I(86,25,00,00),B(mop_meth ,8),I(86,25,00,00),B(mop_meth ,7),I(86,25,00,00),B(mop_meth ,6),I(23,00,00,00),B(mop_meth ,58),I(23,00,00,00),B(mop_meth ,52),I(3b,02,25,00),B(mop_meth ,5),I(23,00,00,00),B(mop_meth ,59),I(23,00,00,00),B(mop_meth ,51),I(3b,02,25,00),B(mop_meth ,4),I(23,00,00,00),B(mop_meth ,60),I(23,00,00,00),B(mop_meth ,48),I(3b,04,25,00),B(mop_meth ,3),I(23,00,00,00),B(mop_meth ,61),I(23,00,00,00),B(mop_meth ,45),I(3b,02,25,00),B(mop_meth ,2),I(23,00,00,00),B(mop_meth ,62),I(23,00,00,00),B(mop_meth ,44),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G001652,G001651);
  eul_intern_symbol(sym_1655,"discriminating-function");
  eul_allocate_bytevector( G001654,G001653);
  eul_allocate_bytevector( G001657,G001656);
  eul_intern_symbol(sym_1660,"method-lookup-function");
  eul_allocate_bytevector( G001659,G001658);
  eul_intern_keyword(key_1663,"generic-function");
  eul_allocate_bytevector( G001662,G001661);
  eul_allocate_bytevector( G001665,G001664);
  eul_intern_keyword(key_1668,"methods");
  eul_intern_symbol(sym_1669,"anonymous");
  eul_allocate_bytevector( G001667,G001666);
  eul_allocate_bytevector( G001671,G001670);
  eul_allocate_bytevector( G001673,G001672);
  eul_allocate_bytevector( G001675,G001674);
  object_class(str_1678) = eul_static_string_class;
  eul_allocate_bytevector( G001677,G001676);
  eul_intern_symbol(sym_1681,"add-method");
  eul_intern_symbol(sym_1682,"find-method");
  eul_intern_symbol(sym_1683,"remove-method");
  eul_intern_symbol(sym_1684,"finalize-generic");
  eul_intern_symbol(sym_1685,"compute-method-lookup-function");
  eul_intern_symbol(sym_1686,"compute-discriminating-function");
  eul_intern_symbol(sym_1687,"(method add-method)");
  eul_intern_symbol(sym_1688,"(method find-method)");
  eul_intern_symbol(sym_1689,"(method remove-method)");
  eul_intern_symbol(sym_1690,"(method finalize-generic)");
  eul_intern_symbol(sym_1691,"(method initialize)");
  eul_intern_symbol(sym_1692,"(method compute-method-lookup-function)");
  eul_intern_symbol(sym_1693,"(method compute-discriminating-function)");
  eul_allocate_bytevector( G001680,G001679);
  eul_allocate_bytevector( G001695,G001694);
  eul_intern_keyword(key_1698,"domain");
  eul_intern_keyword(key_1699,"function");
  eul_allocate_bytevector( G001697,G001696);
  eul_allocate_bytevector( G001701,G001700);
  object_class(str_1704) = eul_static_string_class;
  eul_allocate_bytevector( G001703,G001702);
  eul_allocate_bytevector( G001706,G001705);
  eul_allocate_bytevector( G001708,G001707);
  eul_allocate_bytevector( G001710,G001709);
  eul_allocate_bytevector( G001712,G001711);
  eul_intern_symbol(sym_1715,"primitive-remove-method");
  eul_intern_symbol(sym_1716,"primitive-find-method");
  eul_intern_symbol(sym_1717,"stable-add-method");
  eul_intern_symbol(sym_1718,"check-method-domain");
  eul_intern_symbol(sym_1719,"make-method");
  eul_intern_symbol(sym_1720,"primitive-add-method");
  eul_intern_symbol(sym_1721,"top-level");
  eul_allocate_bytevector( G001714,G001713);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 14; i++)
      mop_meth_bindings[i] = eul_nil;
  }

  mop_meth_bindings[ 14] = G001652;
  mop_meth_bindings[ 15] = sym_1655;
  mop_meth_bindings[ 16] = G001654;
  mop_meth_bindings[ 17] = G001657;
  mop_meth_bindings[ 18] = sym_1660;
  mop_meth_bindings[ 19] = G001659;
  mop_meth_bindings[ 20] = key_1663;
  mop_meth_bindings[ 21] = G001662;
  mop_meth_bindings[ 22] = G001665;
  mop_meth_bindings[ 23] = key_1668;
  mop_meth_bindings[ 24] = sym_1669;
  mop_meth_bindings[ 25] = G001667;
  mop_meth_bindings[ 26] = G001671;
  mop_meth_bindings[ 27] = G001673;
  mop_meth_bindings[ 28] = G001675;
  mop_meth_bindings[ 29] = str_1678;
  mop_meth_bindings[ 30] = G001677;
  mop_meth_bindings[ 31] = sym_1681;
  mop_meth_bindings[ 32] = sym_1682;
  mop_meth_bindings[ 33] = sym_1683;
  mop_meth_bindings[ 34] = sym_1684;
  mop_meth_bindings[ 35] = sym_1685;
  mop_meth_bindings[ 36] = sym_1686;
  mop_meth_bindings[ 37] = sym_1687;
  mop_meth_bindings[ 38] = sym_1688;
  mop_meth_bindings[ 39] = sym_1689;
  mop_meth_bindings[ 40] = sym_1690;
  mop_meth_bindings[ 41] = sym_1691;
  mop_meth_bindings[ 42] = sym_1692;
  mop_meth_bindings[ 43] = sym_1693;
  mop_meth_bindings[ 44] = G001680;
  mop_meth_bindings[ 45] = G001695;
  mop_meth_bindings[ 46] = key_1698;
  mop_meth_bindings[ 47] = key_1699;
  mop_meth_bindings[ 48] = G001697;
  mop_meth_bindings[ 49] = G001701;
  mop_meth_bindings[ 50] = str_1704;
  mop_meth_bindings[ 51] = G001703;
  mop_meth_bindings[ 52] = G001706;
  mop_meth_bindings[ 53] = G001708;
  mop_meth_bindings[ 54] = G001710;
  mop_meth_bindings[ 55] = G001712;
  mop_meth_bindings[ 1] = eul_nil;
  mop_meth_bindings[ 56] = sym_1715;
  mop_meth_bindings[ 57] = sym_1716;
  mop_meth_bindings[ 58] = sym_1717;
  mop_meth_bindings[ 59] = sym_1718;
  mop_meth_bindings[ 60] = sym_1719;
  mop_meth_bindings[ 61] = sym_1720;
  mop_meth_bindings[ 62] = sym_1721;
  eul_allocate_lambda( mop_meth_bindings[0], "initialize-mop-meth", 0, G001714);

  }
}


/* eof */
