/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module boot
 **  Copyright: See file boot.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_boot1();
extern LispRef boot1_bindings[];

/* Module bindings with size 117 */
LispRef boot_bindings[117];

/* Foreign functions */
static LispRef ff_stub_getchar415 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef res;

  FF_RES_CONVERT1(res,getchar());
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module boot */
void initialize_module_boot()
{
  if (is_initialized) return;
  initialize_module_boot1();
  eul_fast_table_set(eul_modules,"boot",(LispRef) boot_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_547, sym_546, sym_545, sym_544, sym_543, sym_542, sym_541, sym_540, sym_539, sym_538, sym_537, sym_536, sym_535, sym_534, sym_533, sym_532, sym_531, sym_530, sym_529, sym_528, sym_527, sym_526, sym_525, sym_524, sym_523, sym_522, sym_521, G00520, G00518, G00516, G00514, G00512, G00510, G00508, G00506, G00504, G00502, G00500, G00498, G00496, G00494, G00490, G00488, G00486, G00484, G00481, G00479, G00477, G00475, G00473, G00471, G00469, G00467, G00465, G00463, G00461, G00459, G00457, G00452, G00450, G00448, G00446, G00444, G00441, G00439, G00437, G00435, G00433, G00431, G00428, G00425, sym_423, G00422, sym_420, G00419, G00417;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 10 is_init: 0 index: 33 binding: anonymous */
  static const void *G00416[] = {I(ab,1b,82,19),I(1b,34,00,00),I(00,00,00,13),I(1d,47,00,00),I(8f,32,00,00),I(00,00,00,12),I(1d,11,1d,83),I(15,47,00,01),I(3d,02,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 35 binding: (setter-list-ref) */
  static const void *G00418[] = {I(43,03,46,02),I(1b,48,00,00),I(86,1b,48,00),I(01,23,00,00),B(boot ,34),I(23,00,00,00),B(boot ,33),I(3b,02,48,00),I(01,1f,03,1f),I(03,47,00,01),I(3d,02,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 24 is_init: 0 index: 37 binding: top-level */
  static const void *G00421[] = {I(a9,86,89,00),B(boot ,13),I(2a,86,89,00),B(boot ,3),I(2a,26,00,00),I(00,00,00,64),I(89,00,00,00),B(boot ,31),I(2a,26,00,00),I(00,00,00,19),I(89,00,00,00),B(boot ,9),I(2a,24,00,00),B(boot1 ,45),I(24,00,00,00),B(boot1 ,45),I(3c,01,24,00),B(boot ,23),I(23,00,00,00),B(boot ,36),I(23,00,00,00),B(boot ,35),I(3b,03,1d,3d),I(02,01,45,01)};

  eul_allocate_static_string(str_426, "       ~a: ~a\n", 14);
  /* Byte-vector with size: 24 is_init: 0 index: 39 binding: show-frames */
  static const void *G00424[] = {I(aa,1b,24,00),B(boot ,31),I(19,1b,34,00),I(00,00,00,0e),I(87,32,00,00),I(00,00,00,4a),I(1c,26,00,00),I(00,00,00,04),I(16,8c,1b,34),I(00,00,00,35),I(1b,8a,00,02),I(1f,03,82,15),I(84,23,00,00),B(boot ,38),I(1d,1f,04,24),B(boot1 ,19),I(3c,04,2a,1f),I(04,83,14,24),B(boot ,2),I(3d,01,05,22),I(02,32,00,00),I(00,00,00,08),I(86,22,01,45),I(02,00,00,00)};

  eul_allocate_static_string(str_429, "*** STACK VALUES:", 17);
  /* Byte-vector with size: 8 is_init: 0 index: 41 binding: stack-values */
  static const void *G00427[] = {I(a9,23,00,00),B(boot ,40),I(84,24,00,00),B(boot1 ,3),I(3c,02,2a,58),I(2a,82,24,00),B(boot ,19),I(3d,01,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 42 binding: apply */
  static const void *G00430[] = {I(43,fe,8e,45),I(00,00,00,00)};

  /* Byte-vector with size: 21 is_init: 0 index: 43 binding: anonymous */
  static const void *G00432[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,43),I(1d,10,47,00),I(00,3c,01,1b),I(34,00,00,00),I(00,00,00,24),I(1f,03,11,1f),I(03,1d,24,00),B(boot ,7),I(3c,02,47,00),I(01,3d,02,04),I(32,00,00,00),I(00,00,00,16),I(1f,03,11,1b),I(1f,04,47,00),I(01,3d,02,05),I(22,01,22,01),I(45,03,00,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 44 binding: mapcan */
  static const void *G00434[] = {I(ab,46,02,1c),I(48,00,00,86),I(1b,48,00,01),I(23,00,00,00),B(boot ,34),I(23,00,00,00),B(boot ,43),I(3b,02,48,00),I(01,1c,86,47),I(00,01,3d,02),I(03,45,03,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 45 binding: anonymous */
  static const void *G00436[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,1a),I(1d,11,1f,03),I(10,1b,1f,04),I(0f,1d,1c,47),I(00,00,3d,02),I(06,22,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 46 binding: append */
  static const void *G00438[] = {I(ab,46,01,86),I(1b,48,00,00),I(23,00,00,00),B(boot ,34),I(23,00,00,00),B(boot ,45),I(3b,02,48,00),I(00,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1f,03,32,00),I(00,00,00,1b),I(1f,03,24,00),B(boot ,25),I(3c,01,1b,1f),I(04,47,00,00),I(3d,02,05,22),I(01,45,04,00)};

  eul_allocate_static_string(str_442, "*** BACKTRACE:", 14);
  /* Byte-vector with size: 8 is_init: 0 index: 48 binding: backtrace */
  static const void *G00440[] = {I(a9,23,00,00),B(boot ,47),I(84,24,00,00),B(boot1 ,3),I(3c,02,2a,58),I(2a,82,24,00),B(boot ,2),I(3d,01,00,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 49 binding: anonymous */
  static const void *G00443[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,18),I(1c,24,00,00),B(boot ,25),I(3d,01,03,32),I(00,00,00,1f),I(1d,11,1f,03),I(10,1b,47,00),I(00,3c,01,1b),I(1f,05,0f,1f),I(03,1c,47,00),I(01,3d,02,07),I(22,04,45,03)};

  /* Byte-vector with size: 11 is_init: 0 index: 50 binding: map1-list */
  static const void *G00445[] = {I(ab,46,02,1c),I(48,00,00,86),I(1b,48,00,01),I(23,00,00,00),B(boot ,34),I(23,00,00,00),B(boot ,49),I(3b,02,48,00),I(01,1c,86,47),I(00,01,3d,02),I(03,45,03,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 51 binding: anonymous */
  static const void *G00447[] = {I(ab,1c,34,00),I(00,00,00,42),I(1b,34,00,00),I(00,00,00,33),I(1c,10,1c,10),I(47,00,00,3c),I(02,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,11),I(1d,11,1d,11),I(47,00,01,3d),I(02,03,22,01),I(32,00,00,00),I(00,00,00,09),I(86,32,00,00),I(00,00,00,08),I(86,45,02,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 52 binding: anyp2-list */
  static const void *G00449[] = {I(43,03,46,02),I(1d,48,00,00),I(86,1b,48,00),I(01,23,00,00),B(boot ,34),I(23,00,00,00),B(boot ,51),I(3b,02,48,00),I(01,1d,1d,47),I(00,01,3d,02),I(04,45,04,00)};

  eul_allocate_static_string(str_453, "*** ERROR [level1]: ", 20);
  eul_allocate_static_string(str_454, "\n", 1);
  eul_allocate_static_string(str_455, "***    See Backtrace? (y/n) ", 28);
  /* Byte-vector with size: 34 is_init: 0 index: 56 binding: error */
  static const void *G00451[] = {I(43,fe,24,00),B(boot ,13),I(34,00,00,00),I(00,00,00,20),I(24,00,00,00),B(boot ,13),I(1d,1d,24,00),B(boot ,5),I(3d,03,02,32),I(00,00,00,62),I(23,00,00,00),B(boot ,53),I(84,42,2a,24),B(boot1 ,19),I(84,1f,03,1f),I(03,24,00,00),B(boot ,5),I(3c,04,2a,23),B(boot ,54),I(84,42,2a,23),B(boot ,55),I(84,42,2a,41),B(boot ,32),I(27,79,50,1b),I(34,00,00,00),I(00,00,00,18),I(24,00,00,00),B(boot ,8),I(3c,00,32,00),I(00,00,00,07),I(86,2a,24,00),B(boot1 ,21),I(3d,00,03,22),I(01,45,02,00)};

  /* Byte-vector with size: 21 is_init: 0 index: 57 binding: anonymous */
  static const void *G00456[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,18),I(1c,24,00,00),B(boot ,25),I(3d,01,03,32),I(00,00,00,38),I(1d,10,1b,1f),I(03,86,6c,1b),I(34,00,00,00),I(00,00,00,1c),I(1f,04,11,1b),I(1f,05,47,00),I(03,3d,02,06),I(22,01,32,00),I(00,00,00,13),I(1f,04,11,1d),I(1f,05,0f,47),I(00,03,3d,02),I(05,22,02,45),I(03,00,00,00)};

  /* Byte-vector with size: 23 is_init: 0 index: 58 binding: anonymous */
  static const void *G00458[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,18),I(1c,24,00,00),B(boot ,25),I(3d,01,03,32),I(00,00,00,40),I(1d,10,1b,1f),I(03,47,00,01),I(24,00,00,00),B(boot ,24),I(3c,03,1b,34),I(00,00,00,19),I(1f,04,11,1b),I(1f,05,47,00),I(00,3d,02,06),I(22,01,32,00),I(00,00,00,13),I(1f,04,11,1d),I(1f,05,0f,47),I(00,00,3d,02),I(05,22,02,45),I(03,00,00,00)};

  /* Byte-vector with size: 25 is_init: 0 index: 59 binding: list-remove-duplicates */
  static const void *G00460[] = {I(43,fe,46,04),I(1b,34,00,00),I(00,00,00,37),I(1b,10,1b,48),I(00,01,86,1b),I(48,00,00,23),B(boot ,34),I(23,00,00,00),B(boot ,58),I(3b,02,48,00),I(00,1f,03,86),I(47,00,00,3d),I(02,04,22,02),I(32,00,00,00),I(00,00,00,2b),I(86,1b,48,00),I(03,23,00,00),B(boot ,34),I(23,00,00,00),B(boot ,57),I(3b,02,48,00),I(03,1d,86,47),I(00,03,3d,02),I(03,22,01,45),I(02,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 60 binding: anonymous */
  static const void *G00462[] = {I(aa,1b,47,00),I(03,47,00,01),I(3d,02,01,00)};

  /* Byte-vector with size: 36 is_init: 0 index: 61 binding: anonymous */
  static const void *G00464[] = {I(ab,1b,11,1b),I(12,1b,34,00),I(00,00,00,4e),I(1d,10,1f,04),I(1c,47,00,00),I(3c,02,12,1b),I(34,00,00,00),I(00,00,00,20),I(1f,05,24,00),B(boot1 ,26),I(3c,01,1f,05),I(1c,90,22,01),I(32,00,00,00),I(00,00,00,1b),I(1f,04,10,1f),I(05,1f,07,8f),I(2a,1b,1f,05),I(0f,1f,06,1c),I(90,22,02,22),I(02,32,00,00),I(00,00,00,40),I(1d,10,1f,04),I(1c,47,00,00),I(3c,02,12,1b),I(34,00,00,00),I(00,00,00,18),I(1f,05,1f,04),I(47,00,01,3d),I(02,06,32,00),I(00,00,00,19),I(1f,04,10,1f),I(05,1f,07,8f),I(2a,1b,1f,05),I(0f,1f,06,1c),I(90,22,02,22),I(02,45,04,00)};

  /* Byte-vector with size: 25 is_init: 0 index: 62 binding: sort-list */
  static const void *G00466[] = {I(ab,46,05,1b),I(48,00,00,1c),I(12,1b,34,00),I(00,00,00,0e),I(86,32,00,00),I(00,00,00,4f),I(1d,10,24,00),B(boot1 ,26),I(3c,01,1b,48),I(00,03,86,1b),I(48,00,01,23),B(boot ,34),I(23,00,00,00),B(boot ,61),I(3b,02,48,00),I(01,1f,04,11),I(23,00,00,00),B(boot ,34),I(23,00,00,00),B(boot ,60),I(3b,01,1c,24),B(boot ,16),I(3c,02,2a,47),I(00,03,22,03),I(45,03,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 63 binding: anonymous */
  static const void *G00468[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,17),I(1c,10,47,00),I(00,3c,01,2a),I(1c,11,47,00),I(01,3d,01,02),I(45,02,00,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 64 binding: do1-list */
  static const void *G00470[] = {I(ab,46,02,1c),I(48,00,00,86),I(1b,48,00,01),I(23,00,00,00),B(boot ,34),I(23,00,00,00),B(boot ,63),I(3b,01,48,00),I(01,1c,47,00),I(01,3d,01,03),I(45,03,00,00)};

  /* Byte-vector with size: 23 is_init: 0 index: 65 binding: anonymous */
  static const void *G00472[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,4c),I(1c,10,47,00),I(00,1c,47,00),I(02,3c,02,1b),I(34,00,00,00),I(00,00,00,10),I(1f,03,11,32),I(00,00,00,2c),I(1f,03,11,47),I(00,01,3c,01),I(1f,04,11,1c),I(1c,50,1b,34),I(00,00,00,0d),I(1f,06,32,00),I(00,00,00,0f),I(1f,06,10,1b),I(1f,04,0f,22),I(01,22,03,22),I(02,45,02,00)};

  /* Byte-vector with size: 20 is_init: 0 index: 66 binding: list-remove */
  static const void *G00474[] = {I(43,fd,46,04),I(1d,48,00,00),I(1b,12,1b,34),I(00,00,00,19),I(47,00,00,1f),I(03,24,00,00),B(boot ,27),I(3d,02,04,32),I(00,00,00,2c),I(1c,10,1b,48),I(00,02,86,1b),I(48,00,01,23),B(boot ,34),I(23,00,00,00),B(boot ,65),I(3b,01,48,00),I(01,1f,04,47),I(00,01,3d,01),I(06,22,02,45),I(04,00,00,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 67 binding: anonymous */
  static const void *G00476[] = {I(ab,1c,7a,12),I(1b,34,00,00),I(00,00,00,0f),I(1c,32,00,00),I(00,00,00,12),I(1d,11,1d,83),I(14,47,00,00),I(3d,02,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 68 binding: list-size */
  static const void *G00478[] = {I(aa,46,01,86),I(1b,48,00,00),I(23,00,00,00),B(boot ,34),I(23,00,00,00),B(boot ,67),I(3b,02,48,00),I(00,1c,82,47),I(00,00,3d,02),I(02,45,02,00)};

  eul_allocate_static_string(str_482, "       ~a: ~a\n", 14);
  /* Byte-vector with size: 16 is_init: 0 index: 70 binding: show-stack-values */
  static const void *G00480[] = {I(aa,1b,24,00),B(boot ,9),I(19,1b,34,00),I(00,00,00,0e),I(87,32,00,00),I(00,00,00,2c),I(1c,8d,1d,82),I(15,84,23,00),B(boot ,69),I(1d,1f,04,24),B(boot1 ,19),I(3c,04,2a,1f),I(03,83,14,24),B(boot ,19),I(3d,01,04,22),I(02,45,02,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 71 binding: assoc-list-ref */
  static const void *G00483[] = {I(43,fd,1b,34),I(00,00,00,0d),I(1b,10,32,00),I(00,00,00,07),I(86,1d,1f,04),I(1d,6a,45,04)};

  /* Byte-vector with size: 9 is_init: 0 index: 72 binding: anonymous */
  static const void *G00485[] = {I(ab,1b,34,00),I(00,00,00,1a),I(1b,11,1c,1c),I(47,00,01,3d),I(02,03,22,01),I(32,00,00,00),I(00,00,00,0d),I(1c,47,00,00),I(90,45,02,00)};

  /* Byte-vector with size: 23 is_init: 0 index: 73 binding: append! */
  static const void *G00487[] = {I(ab,46,03,1b),I(48,00,00,1c),I(12,1b,34,00),I(00,00,00,0e),I(47,00,00,32),I(00,00,00,44),I(47,00,00,12),I(1b,34,00,00),I(00,00,00,0f),I(1f,03,32,00),I(00,00,00,2f),I(86,1b,48,00),I(01,23,00,00),B(boot ,34),I(23,00,00,00),B(boot ,72),I(3b,02,48,00),I(01,1f,04,11),I(1f,05,1c,47),I(00,01,3c,02),I(2a,1f,05,22),I(02,22,01,45),I(03,00,00,00)};

  eul_allocate_static_string(str_491, "*** WARNING [level1]: ", 22);
  eul_allocate_static_string(str_492, "\n", 1);
  /* Byte-vector with size: 20 is_init: 0 index: 76 binding: warning */
  static const void *G00489[] = {I(43,fe,24,00),B(boot ,3),I(34,00,00,00),I(00,00,00,20),I(24,00,00,00),B(boot ,3),I(1d,1d,24,00),B(boot ,5),I(3d,03,02,32),I(00,00,00,2b),I(23,00,00,00),B(boot ,74),I(84,42,2a,24),B(boot1 ,19),I(84,1f,03,1f),I(03,24,00,00),B(boot ,5),I(3c,04,2a,23),B(boot ,75),I(84,42,45,02)};

  /* Byte-vector with size: 10 is_init: 0 index: 77 binding: list-ref */
  static const void *G00493[] = {I(ab,1b,82,19),I(1b,34,00,00),I(00,00,00,0f),I(1d,10,32,00),I(00,00,00,15),I(1d,11,1d,83),I(15,24,00,00),B(boot ,23),I(3d,02,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 16 is_init: 0 index: 78 binding: anonymous */
  static const void *G00495[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,2e),I(1c,10,47,00),I(00,1c,47,00),I(02,3c,02,1b),I(34,00,00,00),I(00,00,00,10),I(1f,03,32,00),I(00,00,00,0f),I(1f,03,11,47),I(00,01,3d,01),I(04,22,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 79 binding: member-list */
  static const void *G00497[] = {I(43,fd,46,04),I(1d,48,00,00),I(1b,12,1b,34),I(00,00,00,11),I(47,00,00,1f),I(03,86,6c,32),I(00,00,00,2c),I(1c,10,1b,48),I(00,02,86,1b),I(48,00,01,23),B(boot ,34),I(23,00,00,00),B(boot ,78),I(3b,01,48,00),I(01,1f,04,47),I(00,01,3d,01),I(06,22,02,45),I(04,00,00,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 80 binding: anonymous */
  static const void *G00499[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,1a),I(1d,11,1f,03),I(10,1b,1f,04),I(0f,1d,1c,47),I(00,00,3d,02),I(06,22,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 81 binding: reverse-list */
  static const void *G00501[] = {I(aa,46,01,86),I(1b,48,00,00),I(23,00,00,00),B(boot ,34),I(23,00,00,00),B(boot ,80),I(3b,02,48,00),I(00,1c,86,47),I(00,00,3d,02),I(02,45,02,00)};

  /* Byte-vector with size: 32 is_init: 0 index: 82 binding: anonymous */
  static const void *G00503[] = {I(ab,27,3a,1d),I(41,00,00,00),B(boot1 ,57),I(22,02,1b,12),I(1b,34,00,00),I(00,00,00,1b),I(1f,03,1f,03),I(0f,24,00,00),B(boot ,25),I(3d,01,04,32),I(00,00,00,57),I(1c,82,19,1b),I(34,00,00,00),I(00,00,00,24),I(1f,04,83,41),B(boot1 ,56),I(22,02,1b,1f),I(05,47,00,00),I(3d,02,06,22),I(01,32,00,00),I(00,00,00,2f),I(1d,83,14,1f),I(05,1c,41,00),B(boot1 ,56),I(22,02,1f,06),I(82,1f,06,41),B(boot1 ,55),I(22,03,1b,1f),I(07,0f,1d,1c),I(47,00,00,3d),I(02,09,22,04),I(22,01,45,04)};

  /* Byte-vector with size: 15 is_init: 0 index: 83 binding: listify-env-string */
  static const void *G00505[] = {I(aa,46,01,86),I(1b,48,00,00),I(23,00,00,00),B(boot ,34),I(23,00,00,00),B(boot ,82),I(3b,02,48,00),I(00,1c,7d,1b),I(34,00,00,00),I(00,00,00,18),I(1d,86,47,00),I(00,3d,02,03),I(32,00,00,00),I(00,00,00,09),I(86,45,03,00)};

  /* Byte-vector with size: 22 is_init: 0 index: 84 binding: anonymous */
  static const void *G00507[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,48),I(1c,10,47,00),I(00,1c,50,1b),I(34,00,00,00),I(00,00,00,10),I(1f,03,11,32),I(00,00,00,2c),I(1f,03,11,47),I(00,01,3c,01),I(1f,04,11,1c),I(1c,50,1b,34),I(00,00,00,0d),I(1f,06,32,00),I(00,00,00,0f),I(1f,06,10,1b),I(1f,04,0f,22),I(01,22,03,22),I(02,45,02,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 85 binding: list-remove1 */
  static const void *G00509[] = {I(ab,46,02,1c),I(48,00,00,86),I(1b,48,00,01),I(23,00,00,00),B(boot ,34),I(23,00,00,00),B(boot ,84),I(3b,01,48,00),I(01,1c,47,00),I(01,3d,01,03),I(45,03,00,00)};

  /* Byte-vector with size: 20 is_init: 0 index: 86 binding: anonymous */
  static const void *G00511[] = {I(aa,1b,7a,12),I(1b,34,00,00),I(00,00,00,27),I(1c,12,1b,34),I(00,00,00,0d),I(86,32,00,00),I(00,00,00,0e),I(1d,47,00,00),I(3d,01,03,22),I(01,32,00,00),I(00,00,00,29),I(1c,10,47,00),I(00,3c,01,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0f),I(1d,11,47,00),I(01,3d,01,03),I(22,01,45,02)};

  /* Byte-vector with size: 11 is_init: 0 index: 87 binding: anyp1-list */
  static const void *G00513[] = {I(ab,46,02,1c),I(48,00,00,86),I(1b,48,00,01),I(23,00,00,00),B(boot ,34),I(23,00,00,00),B(boot ,86),I(3b,01,48,00),I(01,1c,47,00),I(01,3d,01,03),I(45,03,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 88 binding: init-list-ref */
  static const void *G00515[] = {I(43,fd,1b,34),I(00,00,00,0d),I(1b,10,32,00),I(00,00,00,07),I(86,1d,1f,04),I(1d,6b,45,04)};

  /* Byte-vector with size: 2 is_init: 0 index: 89 binding: member1-list */
  static const void *G00517[] = {I(ab,86,6c,45),I(00,00,00,00)};

  /* Byte-vector with size: 177 is_init: 1 index: 0 binding: initialize-boot */
  static const void *G00519[] = {I(87,25,00,00),B(boot ,1),I(24,00,00,00),B(boot1 ,1),I(3e,0b,24,00),B(boot1 ,0),I(3c,00,21,01),I(86,25,00,00),B(boot ,31),I(23,00,00,00),B(boot ,90),I(23,00,00,00),B(boot ,89),I(3b,02,25,00),B(boot ,30),I(23,00,00,00),B(boot ,91),I(23,00,00,00),B(boot ,88),I(3b,fd,25,00),B(boot ,29),I(23,00,00,00),B(boot ,92),I(23,00,00,00),B(boot ,87),I(3b,02,25,00),B(boot ,28),I(23,00,00,00),B(boot ,93),I(23,00,00,00),B(boot ,85),I(3b,02,25,00),B(boot ,27),I(23,00,00,00),B(boot ,94),I(23,00,00,00),B(boot ,83),I(3b,01,25,00),B(boot ,26),I(23,00,00,00),B(boot ,95),I(23,00,00,00),B(boot ,81),I(3b,01,25,00),B(boot ,25),I(23,00,00,00),B(boot ,96),I(23,00,00,00),B(boot ,79),I(3b,fd,25,00),B(boot ,24),I(23,00,00,00),B(boot ,97),I(23,00,00,00),B(boot ,77),I(3b,02,25,00),B(boot ,23),I(23,00,00,00),B(boot ,98),I(23,00,00,00),B(boot ,76),I(3b,fe,25,00),B(boot ,22),I(23,00,00,00),B(boot ,99),I(23,00,00,00),B(boot ,73),I(3b,02,25,00),B(boot ,21),I(23,00,00,00),B(boot ,100),I(23,00,00,00),B(boot ,71),I(3b,fd,25,00),B(boot ,20),I(23,00,00,00),B(boot ,101),I(23,00,00,00),B(boot ,70),I(3b,01,25,00),B(boot ,19),I(23,00,00,00),B(boot ,102),I(23,00,00,00),B(boot ,68),I(3b,01,25,00),B(boot ,18),I(23,00,00,00),B(boot ,103),I(23,00,00,00),B(boot ,66),I(3b,fd,25,00),B(boot ,17),I(23,00,00,00),B(boot ,104),I(23,00,00,00),B(boot ,64),I(3b,02,25,00),B(boot ,16),I(23,00,00,00),B(boot ,105),I(23,00,00,00),B(boot ,62),I(3b,02,25,00),B(boot ,15),I(23,00,00,00),B(boot ,106),I(23,00,00,00),B(boot ,59),I(3b,fe,25,00),B(boot ,14),I(86,25,00,00),B(boot ,13),I(23,00,00,00),B(boot ,107),I(23,00,00,00),B(boot ,56),I(3b,fe,25,00),B(boot ,12),I(23,00,00,00),B(boot ,108),I(23,00,00,00),B(boot ,52),I(3b,03,25,00),B(boot ,11),I(23,00,00,00),B(boot ,109),I(23,00,00,00),B(boot ,50),I(3b,02,25,00),B(boot ,10),I(86,25,00,00),B(boot ,9),I(23,00,00,00),B(boot ,110),I(23,00,00,00),B(boot ,48),I(3b,00,25,00),B(boot ,8),I(23,00,00,00),B(boot ,111),I(23,00,00,00),B(boot ,46),I(3b,02,25,00),B(boot ,7),I(23,00,00,00),B(boot ,112),I(23,00,00,00),B(boot ,44),I(3b,02,25,00),B(boot ,6),I(23,00,00,00),B(boot ,113),I(23,00,00,00),B(boot ,42),I(3b,fe,25,00),B(boot ,5),I(23,00,00,00),B(boot ,114),I(23,00,00,00),B(boot ,41),I(3b,00,25,00),B(boot ,4),I(86,25,00,00),B(boot ,3),I(23,00,00,00),B(boot ,115),I(23,00,00,00),B(boot ,39),I(3b,01,25,00),B(boot ,2),I(23,00,00,00),B(boot ,116),I(23,00,00,00),B(boot ,37),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G00417,G00416);
  eul_intern_symbol(sym_420,"anonymous");
  eul_allocate_bytevector( G00419,G00418);
  eul_intern_symbol(sym_423,"(setter list-ref)");
  eul_allocate_bytevector( G00422,G00421);
  object_class(str_426) = eul_static_string_class;
  eul_allocate_bytevector( G00425,G00424);
  object_class(str_429) = eul_static_string_class;
  eul_allocate_bytevector( G00428,G00427);
  eul_allocate_bytevector( G00431,G00430);
  eul_allocate_bytevector( G00433,G00432);
  eul_allocate_bytevector( G00435,G00434);
  eul_allocate_bytevector( G00437,G00436);
  eul_allocate_bytevector( G00439,G00438);
  object_class(str_442) = eul_static_string_class;
  eul_allocate_bytevector( G00441,G00440);
  eul_allocate_bytevector( G00444,G00443);
  eul_allocate_bytevector( G00446,G00445);
  eul_allocate_bytevector( G00448,G00447);
  eul_allocate_bytevector( G00450,G00449);
  object_class(str_453) = eul_static_string_class;
  object_class(str_454) = eul_static_string_class;
  object_class(str_455) = eul_static_string_class;
  eul_allocate_bytevector( G00452,G00451);
  eul_allocate_bytevector( G00457,G00456);
  eul_allocate_bytevector( G00459,G00458);
  eul_allocate_bytevector( G00461,G00460);
  eul_allocate_bytevector( G00463,G00462);
  eul_allocate_bytevector( G00465,G00464);
  eul_allocate_bytevector( G00467,G00466);
  eul_allocate_bytevector( G00469,G00468);
  eul_allocate_bytevector( G00471,G00470);
  eul_allocate_bytevector( G00473,G00472);
  eul_allocate_bytevector( G00475,G00474);
  eul_allocate_bytevector( G00477,G00476);
  eul_allocate_bytevector( G00479,G00478);
  object_class(str_482) = eul_static_string_class;
  eul_allocate_bytevector( G00481,G00480);
  eul_allocate_bytevector( G00484,G00483);
  eul_allocate_bytevector( G00486,G00485);
  eul_allocate_bytevector( G00488,G00487);
  object_class(str_491) = eul_static_string_class;
  object_class(str_492) = eul_static_string_class;
  eul_allocate_bytevector( G00490,G00489);
  eul_allocate_bytevector( G00494,G00493);
  eul_allocate_bytevector( G00496,G00495);
  eul_allocate_bytevector( G00498,G00497);
  eul_allocate_bytevector( G00500,G00499);
  eul_allocate_bytevector( G00502,G00501);
  eul_allocate_bytevector( G00504,G00503);
  eul_allocate_bytevector( G00506,G00505);
  eul_allocate_bytevector( G00508,G00507);
  eul_allocate_bytevector( G00510,G00509);
  eul_allocate_bytevector( G00512,G00511);
  eul_allocate_bytevector( G00514,G00513);
  eul_allocate_bytevector( G00516,G00515);
  eul_allocate_bytevector( G00518,G00517);
  eul_intern_symbol(sym_521,"member1-list");
  eul_intern_symbol(sym_522,"init-list-ref");
  eul_intern_symbol(sym_523,"anyp1-list");
  eul_intern_symbol(sym_524,"list-remove1");
  eul_intern_symbol(sym_525,"listify-env-string");
  eul_intern_symbol(sym_526,"reverse-list");
  eul_intern_symbol(sym_527,"member-list");
  eul_intern_symbol(sym_528,"list-ref");
  eul_intern_symbol(sym_529,"warning");
  eul_intern_symbol(sym_530,"append!");
  eul_intern_symbol(sym_531,"assoc-list-ref");
  eul_intern_symbol(sym_532,"show-stack-values");
  eul_intern_symbol(sym_533,"list-size");
  eul_intern_symbol(sym_534,"list-remove");
  eul_intern_symbol(sym_535,"do1-list");
  eul_intern_symbol(sym_536,"sort-list");
  eul_intern_symbol(sym_537,"list-remove-duplicates");
  eul_intern_symbol(sym_538,"error");
  eul_intern_symbol(sym_539,"anyp2-list");
  eul_intern_symbol(sym_540,"map1-list");
  eul_intern_symbol(sym_541,"backtrace");
  eul_intern_symbol(sym_542,"append");
  eul_intern_symbol(sym_543,"mapcan");
  eul_intern_symbol(sym_544,"apply");
  eul_intern_symbol(sym_545,"stack-values");
  eul_intern_symbol(sym_546,"show-frames");
  eul_intern_symbol(sym_547,"top-level");
  eul_allocate_bytevector( G00520,G00519);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 32; i++)
      boot_bindings[i] = eul_nil;
  }

  boot_bindings[ 32] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_getchar415;
  boot_bindings[ 33] = G00417;
  boot_bindings[ 34] = sym_420;
  boot_bindings[ 35] = G00419;
  boot_bindings[ 36] = sym_423;
  boot_bindings[ 37] = G00422;
  boot_bindings[ 38] = str_426;
  boot_bindings[ 39] = G00425;
  boot_bindings[ 40] = str_429;
  boot_bindings[ 41] = G00428;
  boot_bindings[ 42] = G00431;
  boot_bindings[ 43] = G00433;
  boot_bindings[ 44] = G00435;
  boot_bindings[ 45] = G00437;
  boot_bindings[ 46] = G00439;
  boot_bindings[ 47] = str_442;
  boot_bindings[ 48] = G00441;
  boot_bindings[ 49] = G00444;
  boot_bindings[ 50] = G00446;
  boot_bindings[ 51] = G00448;
  boot_bindings[ 52] = G00450;
  boot_bindings[ 53] = str_453;
  boot_bindings[ 54] = str_454;
  boot_bindings[ 55] = str_455;
  boot_bindings[ 56] = G00452;
  boot_bindings[ 57] = G00457;
  boot_bindings[ 58] = G00459;
  boot_bindings[ 59] = G00461;
  boot_bindings[ 60] = G00463;
  boot_bindings[ 61] = G00465;
  boot_bindings[ 62] = G00467;
  boot_bindings[ 63] = G00469;
  boot_bindings[ 64] = G00471;
  boot_bindings[ 65] = G00473;
  boot_bindings[ 66] = G00475;
  boot_bindings[ 67] = G00477;
  boot_bindings[ 68] = G00479;
  boot_bindings[ 69] = str_482;
  boot_bindings[ 70] = G00481;
  boot_bindings[ 71] = G00484;
  boot_bindings[ 72] = G00486;
  boot_bindings[ 73] = G00488;
  boot_bindings[ 74] = str_491;
  boot_bindings[ 75] = str_492;
  boot_bindings[ 76] = G00490;
  boot_bindings[ 77] = G00494;
  boot_bindings[ 78] = G00496;
  boot_bindings[ 79] = G00498;
  boot_bindings[ 80] = G00500;
  boot_bindings[ 81] = G00502;
  boot_bindings[ 82] = G00504;
  boot_bindings[ 83] = G00506;
  boot_bindings[ 84] = G00508;
  boot_bindings[ 85] = G00510;
  boot_bindings[ 86] = G00512;
  boot_bindings[ 87] = G00514;
  boot_bindings[ 88] = G00516;
  boot_bindings[ 89] = G00518;
  boot_bindings[ 1] = eul_nil;
  boot_bindings[ 90] = sym_521;
  boot_bindings[ 91] = sym_522;
  boot_bindings[ 92] = sym_523;
  boot_bindings[ 93] = sym_524;
  boot_bindings[ 94] = sym_525;
  boot_bindings[ 95] = sym_526;
  boot_bindings[ 96] = sym_527;
  boot_bindings[ 97] = sym_528;
  boot_bindings[ 98] = sym_529;
  boot_bindings[ 99] = sym_530;
  boot_bindings[ 100] = sym_531;
  boot_bindings[ 101] = sym_532;
  boot_bindings[ 102] = sym_533;
  boot_bindings[ 103] = sym_534;
  boot_bindings[ 104] = sym_535;
  boot_bindings[ 105] = sym_536;
  boot_bindings[ 106] = sym_537;
  boot_bindings[ 107] = sym_538;
  boot_bindings[ 108] = sym_539;
  boot_bindings[ 109] = sym_540;
  boot_bindings[ 110] = sym_541;
  boot_bindings[ 111] = sym_542;
  boot_bindings[ 112] = sym_543;
  boot_bindings[ 113] = sym_544;
  boot_bindings[ 114] = sym_545;
  boot_bindings[ 115] = sym_546;
  boot_bindings[ 116] = sym_547;
  eul_allocate_lambda( boot_bindings[0], "initialize-boot", 0, G00520);

  }
}


/* eof */
