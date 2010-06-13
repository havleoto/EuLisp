/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module boot1
 **  Copyright: See file boot1.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */

/* Module bindings with size 164 */
LispRef boot1_bindings[164];

/* Foreign functions */
static LispRef ff_stub_eul_substr246 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00414, G00415, G00416, res;

  POPVAL1(G00416);
  POPVAL1(G00415);
  POPVAL1(G00414);
  FF_RES_CONVERT3(res,eul_substr(FF_ARG_CONVERT3(G00414), FF_ARG_CONVERT0(G00415), FF_ARG_CONVERT0(G00416)));
  return res;
}

static LispRef ff_stub_eul_tailstr247 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00417, G00418, res;

  POPVAL1(G00418);
  POPVAL1(G00417);
  FF_RES_CONVERT3(res,eul_tailstr(FF_ARG_CONVERT3(G00417), FF_ARG_CONVERT0(G00418)));
  return res;
}

static LispRef ff_stub_eul_str_member1248 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00419, G00420, res;

  POPVAL1(G00420);
  POPVAL1(G00419);
  FF_RES_CONVERT6(res,eul_str_member1(FF_ARG_CONVERT1(G00419), FF_ARG_CONVERT3(G00420)));
  return res;
}

static LispRef ff_stub_eul_make_symbol249 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00421, res;

  POPVAL1(G00421);
  FF_RES_CONVERT6(res,eul_make_symbol(FF_ARG_CONVERT3(G00421)));
  return res;
}

static LispRef ff_stub_eul_make_keyword250 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00422, res;

  POPVAL1(G00422);
  FF_RES_CONVERT6(res,eul_make_keyword(FF_ARG_CONVERT3(G00422)));
  return res;
}

static LispRef ff_stub_eul_make_vector251 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00423, G00424, res;

  POPVAL1(G00424);
  POPVAL1(G00423);
  FF_RES_CONVERT6(res,eul_make_vector(FF_ARG_CONVERT0(G00423), FF_ARG_CONVERT8(G00424)));
  return res;
}

static LispRef ff_stub_getenv252 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00425, res;

  POPVAL1(G00425);
  FF_RES_CONVERT3(res,getenv(FF_ARG_CONVERT3(G00425)));
  return res;
}

static LispRef ff_stub_system253 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00426, res;

  POPVAL1(G00426);
  FF_RES_CONVERT0(res,system(FF_ARG_CONVERT3(G00426)));
  return res;
}

static LispRef ff_stub_eul_time_start254 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef res;

  FF_RES_CONVERT6(res,eul_time_start());
  return res;
}

static LispRef ff_stub_eul_time_stop255 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00427, res;

  POPVAL1(G00427);
  FF_RES_CONVERT6(res,eul_time_stop(FF_ARG_CONVERT8(G00427)));
  return res;
}

static LispRef ff_stub_eul_is_object256 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G00428, res;

  POPVAL1(G00428);
  FF_RES_CONVERT6(res,eul_is_object(FF_ARG_CONVERT8(G00428)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module boot1 */
void initialize_module_boot1()
{
  if (is_initialized) return;
  eul_fast_table_set(eul_modules,"boot1",(LispRef) boot1_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_413, sym_412, sym_411, sym_410, sym_409, sym_408, sym_407, sym_406, sym_405, sym_404, sym_403, sym_402, sym_401, sym_400, sym_399, sym_398, sym_397, sym_396, sym_395, sym_394, sym_393, sym_392, sym_391, sym_390, sym_389, sym_388, sym_387, sym_386, sym_385, sym_384, sym_383, sym_382, sym_381, sym_380, sym_379, sym_378, sym_377, sym_376, sym_375, sym_374, sym_373, sym_372, sym_371, sym_370, sym_369, G00368, G00366, G00364, G00362, G00360, G00358, G00356, G00354, G00352, G00350, G00348, G00346, G00344, G00342, G00340, G00338, G00336, G00334, G00332, G00330, G00328, G00326, G00324, G00322, G00320, G00318, G00316, G00314, G00312, G00310, sym_308, G00307, G00305, G00303, G00301, G00299, G00297, G00295, G00293, G00291, G00289, G00287, G00285, G00283, G00281, G00279, G00276, G00274, sym_272, sym_271, sym_270, sym_269, sym_268, G00266, G00264, G00262, G00260, G00258;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 2 is_init: 0 index: 60 binding: (setter-vector-ref) */
  static const void *G00257[] = {I(43,03,03,45),I(00,00,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 61 binding: (setter-string-ref) */
  static const void *G00259[] = {I(43,03,0c,45),I(00,00,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 62 binding: (setter-cdr) */
  static const void *G00261[] = {I(ab,90,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 63 binding: (setter-car) */
  static const void *G00263[] = {I(ab,8f,45,00)};

  eul_allocate_static_cons(cons_267, NULL, NULL);
  /* Byte-vector with size: 61 is_init: 0 index: 70 binding: top-level */
  static const void *G00265[] = {I(a9,23,00,00),B(boot1 ,65),I(89,00,00,00),B(boot1 ,44),I(2a,28,16,1b),I(89,00,00,00),B(boot1 ,26),I(2a,28,17,1b),I(89,00,00,00),B(boot1 ,24),I(2a,24,00,00),B(boot1 ,39),I(24,00,00,00),B(boot1 ,5),I(24,00,00,00),B(boot1 ,5),I(3c,02,2a,24),B(boot1 ,39),I(24,00,00,00),B(boot1 ,39),I(3c,01,24,00),B(boot1 ,27),I(23,00,00,00),B(boot1 ,66),I(23,00,00,00),B(boot1 ,63),I(3b,02,1d,3c),I(02,2a,24,00),B(boot1 ,39),I(24,00,00,00),B(boot1 ,39),I(3c,01,24,00),B(boot1 ,34),I(23,00,00,00),B(boot1 ,67),I(23,00,00,00),B(boot1 ,62),I(3b,02,1d,3c),I(02,2a,24,00),B(boot1 ,39),I(24,00,00,00),B(boot1 ,39),I(3c,01,24,00),B(boot1 ,8),I(23,00,00,00),B(boot1 ,68),I(23,00,00,00),B(boot1 ,61),I(3b,03,1d,3c),I(02,2a,24,00),B(boot1 ,39),I(24,00,00,00),B(boot1 ,39),I(3c,01,24,00),B(boot1 ,6),I(23,00,00,00),B(boot1 ,69),I(23,00,00,00),B(boot1 ,60),I(3b,03,1d,3d),I(02,06,45,06)};

  /* Byte-vector with size: 1 is_init: 0 index: 71 binding: cons */
  static const void *G00273[] = {I(ab,0f,45,00)};

  eul_allocate_static_string(str_277, "\n", 1);
  /* Byte-vector with size: 8 is_init: 0 index: 73 binding: print */
  static const void *G00275[] = {I(43,fe,1b,34),I(00,00,00,0d),I(1b,10,32,00),I(00,00,00,07),I(83,1d,1c,42),I(2a,23,00,00),B(boot1 ,72),I(1c,42,45,03)};

  /* Byte-vector with size: 1 is_init: 0 index: 74 binding: simple-function? */
  static const void *G00278[] = {I(aa,7f,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 75 binding: set-setter */
  static const void *G00280[] = {I(ab,92,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 76 binding: vector-ref */
  static const void *G00282[] = {I(ab,02,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 77 binding: vector-size */
  static const void *G00284[] = {I(aa,06,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 78 binding: string-ref */
  static const void *G00286[] = {I(ab,0b,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 79 binding: null? */
  static const void *G00288[] = {I(aa,12,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 80 binding: = */
  static const void *G00290[] = {I(ab,19,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 81 binding: / */
  static const void *G00292[] = {I(ab,17,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 82 binding: consp */
  static const void *G00294[] = {I(aa,7a,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 83 binding: listp */
  static const void *G00296[] = {I(aa,7b,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 84 binding: + */
  static const void *G00298[] = {I(ab,14,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 85 binding: - */
  static const void *G00300[] = {I(ab,15,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 86 binding: string-size */
  static const void *G00302[] = {I(aa,06,45,00)};

  /* Byte-vector with size: 48 is_init: 0 index: 87 binding: anonymous */
  static const void *G00304[] = {I(aa,47,00,03),I(47,00,02,1a),I(1b,34,00,00),I(00,00,00,b3),I(47,00,01,47),I(00,03,0b,1b),I(27,7e,51,1b),I(34,00,00,00),I(00,00,00,80),I(47,00,03,83),I(14,47,00,01),I(1c,0b,1b,20),I(04,47,00,03),I(84,14,1b,48),I(00,03,1f,04),I(27,61,50,1b),I(34,00,00,00),I(00,00,00,24),I(1f,07,10,1b),I(47,00,00,42),I(2a,1f,08,11),I(47,00,04,3d),I(01,09,22,01),I(32,00,00,00),I(00,00,00,39),I(1f,05,27,7e),I(50,1b,34,00),I(00,00,00,1a),I(27,7e,47,00),I(00,42,2a,1f),I(08,47,00,04),I(3d,01,09,32),I(00,00,00,14),I(1f,06,47,00),I(00,42,2a,1f),I(08,47,00,04),I(3d,01,09,22),I(01,22,04,32),I(00,00,00,1e),I(1c,47,00,00),I(42,2a,47,00),I(03,83,14,1b),I(48,00,03,1f),I(04,47,00,04),I(3d,01,05,22),I(01,22,02,32),I(00,00,00,06),I(1c,45,02,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 89 binding: format1 */
  static const void *G00306[] = {I(43,fd,46,05),I(1d,48,00,00),I(1c,48,00,01),I(47,00,01,06),I(82,1c,48,00),I(02,1b,48,00),I(03,86,1b,48),I(00,04,23,00),B(boot1 ,88),I(23,00,00,00),B(boot1 ,87),I(3b,01,48,00),I(04,1f,03,47),I(00,04,3d,01),I(06,45,06,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 90 binding: getenv */
  static const void *G00309[] = {I(aa,41,00,00),B(boot1 ,55),I(45,01,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 91 binding: exit */
  static const void *G00311[] = {I(a8,66,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 92 binding: inc */
  static const void *G00313[] = {I(aa,2b,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 93 binding: eq */
  static const void *G00315[] = {I(ab,50,45,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 94 binding: time-stop */
  static const void *G00317[] = {I(aa,41,00,00),B(boot1 ,58),I(45,01,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 95 binding: list */
  static const void *G00319[] = {I(a8,1b,45,01)};

  /* Byte-vector with size: 3 is_init: 0 index: 96 binding: time-start */
  static const void *G00321[] = {I(a9,41,00,00),B(boot1 ,57),I(45,00,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 97 binding: car */
  static const void *G00323[] = {I(aa,10,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 98 binding: intp */
  static const void *G00325[] = {I(aa,7e,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 99 binding: int-zerop */
  static const void *G00327[] = {I(aa,2d,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 100 binding: % */
  static const void *G00329[] = {I(ab,18,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 101 binding: character? */
  static const void *G00331[] = {I(aa,81,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 102 binding: * */
  static const void *G00333[] = {I(ab,16,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 103 binding: stringp */
  static const void *G00335[] = {I(aa,7d,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 104 binding: cdr */
  static const void *G00337[] = {I(aa,11,45,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 105 binding: atom? */
  static const void *G00339[] = {I(aa,7a,12,45),I(00,00,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 106 binding: prin */
  static const void *G00341[] = {I(43,fe,1b,34),I(00,00,00,0d),I(1b,10,32,00),I(00,00,00,07),I(83,1d,1c,42),I(45,03,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 107 binding: make-vector */
  static const void *G00343[] = {I(43,fe,41,00),B(boot1 ,54),I(45,02,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 108 binding: mod */
  static const void *G00345[] = {I(ab,18,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 109 binding: setter */
  static const void *G00347[] = {I(aa,91,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 110 binding: < */
  static const void *G00349[] = {I(ab,1a,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 111 binding: symbolp */
  static const void *G00351[] = {I(aa,7c,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 112 binding: eql */
  static const void *G00353[] = {I(ab,51,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 113 binding: dec */
  static const void *G00355[] = {I(aa,2c,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 114 binding: simple-generic-function? */
  static const void *G00357[] = {I(aa,80,45,00)};

  /* Byte-vector with size: 29 is_init: 0 index: 115 binding: anonymous */
  static const void *G00359[] = {I(ab,1c,7a,1b),I(34,00,00,00),I(00,00,00,10),I(1c,7a,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,36),I(1f,03,10,1f),I(03,10,24,00),B(boot1 ,46),I(3c,02,1b,34),I(00,00,00,19),I(1f,04,11,1f),I(04,11,47,00),I(00,3d,02,05),I(32,00,00,00),I(00,00,00,09),I(86,22,01,32),I(00,00,00,2b),I(1f,03,34,00),I(00,00,00,22),I(1d,34,00,00),I(00,00,00,13),I(1f,03,1f,03),I(51,32,00,00),I(00,00,00,08),I(86,32,00,00),I(00,00,00,09),I(1d,12,45,04)};

  /* Byte-vector with size: 10 is_init: 0 index: 116 binding: equal */
  static const void *G00361[] = {I(ab,46,01,86),I(1b,48,00,00),I(23,00,00,00),B(boot1 ,88),I(23,00,00,00),B(boot1 ,115),I(3b,02,48,00),I(00,1d,1d,47),I(00,00,3d,02),I(03,45,03,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 117 binding: objectp */
  static const void *G00363[] = {I(aa,41,00,00),B(boot1 ,59),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 118 binding: system */
  static const void *G00365[] = {I(aa,41,00,00),B(boot1 ,56),I(45,01,00,00)};

  /* Byte-vector with size: 278 is_init: 1 index: 0 binding: initialize-boot1 */
  static const void *G00367[] = {I(87,25,00,00),B(boot1 ,1),I(23,00,00,00),B(boot1 ,119),I(23,00,00,00),B(boot1 ,118),I(3b,01,25,00),B(boot1 ,48),I(23,00,00,00),B(boot1 ,120),I(23,00,00,00),B(boot1 ,117),I(3b,01,25,00),B(boot1 ,47),I(23,00,00,00),B(boot1 ,121),I(23,00,00,00),B(boot1 ,116),I(3b,02,25,00),B(boot1 ,46),I(23,00,00,00),B(boot1 ,122),I(23,00,00,00),B(boot1 ,114),I(3b,01,25,00),B(boot1 ,45),I(86,25,00,00),B(boot1 ,44),I(23,00,00,00),B(boot1 ,123),I(23,00,00,00),B(boot1 ,113),I(3b,01,25,00),B(boot1 ,43),I(23,00,00,00),B(boot1 ,124),I(23,00,00,00),B(boot1 ,112),I(3b,02,25,00),B(boot1 ,42),I(23,00,00,00),B(boot1 ,125),I(23,00,00,00),B(boot1 ,111),I(3b,01,25,00),B(boot1 ,41),I(23,00,00,00),B(boot1 ,126),I(23,00,00,00),B(boot1 ,110),I(3b,02,25,00),B(boot1 ,40),I(23,00,00,00),B(boot1 ,127),I(23,00,00,00),B(boot1 ,109),I(3b,01,25,00),B(boot1 ,39),I(23,00,00,00),B(boot1 ,128),I(23,00,00,00),B(boot1 ,108),I(3b,02,25,00),B(boot1 ,38),I(23,00,00,00),B(boot1 ,129),I(23,00,00,00),B(boot1 ,107),I(3b,fe,25,00),B(boot1 ,37),I(23,00,00,00),B(boot1 ,130),I(23,00,00,00),B(boot1 ,106),I(3b,fe,25,00),B(boot1 ,36),I(23,00,00,00),B(boot1 ,131),I(23,00,00,00),B(boot1 ,105),I(3b,01,25,00),B(boot1 ,35),I(23,00,00,00),B(boot1 ,132),I(23,00,00,00),B(boot1 ,104),I(3b,01,25,00),B(boot1 ,34),I(23,00,00,00),B(boot1 ,133),I(23,00,00,00),B(boot1 ,103),I(3b,01,25,00),B(boot1 ,33),I(23,00,00,00),B(boot1 ,134),I(23,00,00,00),B(boot1 ,102),I(3b,02,25,00),B(boot1 ,32),I(23,00,00,00),B(boot1 ,135),I(23,00,00,00),B(boot1 ,101),I(3b,01,25,00),B(boot1 ,31),I(23,00,00,00),B(boot1 ,136),I(23,00,00,00),B(boot1 ,100),I(3b,02,25,00),B(boot1 ,30),I(23,00,00,00),B(boot1 ,137),I(23,00,00,00),B(boot1 ,99),I(3b,01,25,00),B(boot1 ,29),I(23,00,00,00),B(boot1 ,138),I(23,00,00,00),B(boot1 ,98),I(3b,01,25,00),B(boot1 ,28),I(23,00,00,00),B(boot1 ,139),I(23,00,00,00),B(boot1 ,97),I(3b,01,25,00),B(boot1 ,27),I(86,25,00,00),B(boot1 ,26),I(23,00,00,00),B(boot1 ,140),I(23,00,00,00),B(boot1 ,96),I(3b,00,25,00),B(boot1 ,25),I(86,25,00,00),B(boot1 ,24),I(23,00,00,00),B(boot1 ,141),I(23,00,00,00),B(boot1 ,95),I(3b,ff,25,00),B(boot1 ,23),I(23,00,00,00),B(boot1 ,142),I(23,00,00,00),B(boot1 ,94),I(3b,01,25,00),B(boot1 ,22),I(23,00,00,00),B(boot1 ,143),I(23,00,00,00),B(boot1 ,93),I(3b,02,25,00),B(boot1 ,21),I(23,00,00,00),B(boot1 ,144),I(23,00,00,00),B(boot1 ,92),I(3b,01,25,00),B(boot1 ,20),I(23,00,00,00),B(boot1 ,145),I(23,00,00,00),B(boot1 ,91),I(3b,ff,25,00),B(boot1 ,19),I(23,00,00,00),B(boot1 ,146),I(23,00,00,00),B(boot1 ,90),I(3b,01,25,00),B(boot1 ,18),I(23,00,00,00),B(boot1 ,147),I(23,00,00,00),B(boot1 ,89),I(3b,fd,25,00),B(boot1 ,17),I(23,00,00,00),B(boot1 ,148),I(23,00,00,00),B(boot1 ,86),I(3b,01,25,00),B(boot1 ,16),I(23,00,00,00),B(boot1 ,149),I(23,00,00,00),B(boot1 ,85),I(3b,02,25,00),B(boot1 ,15),I(23,00,00,00),B(boot1 ,150),I(23,00,00,00),B(boot1 ,84),I(3b,02,25,00),B(boot1 ,14),I(23,00,00,00),B(boot1 ,151),I(23,00,00,00),B(boot1 ,83),I(3b,01,25,00),B(boot1 ,13),I(23,00,00,00),B(boot1 ,152),I(23,00,00,00),B(boot1 ,82),I(3b,01,25,00),B(boot1 ,12),I(23,00,00,00),B(boot1 ,153),I(23,00,00,00),B(boot1 ,81),I(3b,02,25,00),B(boot1 ,11),I(23,00,00,00),B(boot1 ,154),I(23,00,00,00),B(boot1 ,80),I(3b,02,25,00),B(boot1 ,10),I(23,00,00,00),B(boot1 ,155),I(23,00,00,00),B(boot1 ,79),I(3b,01,25,00),B(boot1 ,9),I(23,00,00,00),B(boot1 ,156),I(23,00,00,00),B(boot1 ,78),I(3b,02,25,00),B(boot1 ,8),I(23,00,00,00),B(boot1 ,157),I(23,00,00,00),B(boot1 ,77),I(3b,01,25,00),B(boot1 ,7),I(23,00,00,00),B(boot1 ,158),I(23,00,00,00),B(boot1 ,76),I(3b,02,25,00),B(boot1 ,6),I(23,00,00,00),B(boot1 ,159),I(23,00,00,00),B(boot1 ,75),I(3b,02,25,00),B(boot1 ,5),I(23,00,00,00),B(boot1 ,160),I(23,00,00,00),B(boot1 ,74),I(3b,01,25,00),B(boot1 ,4),I(23,00,00,00),B(boot1 ,161),I(23,00,00,00),B(boot1 ,73),I(3b,fe,25,00),B(boot1 ,3),I(23,00,00,00),B(boot1 ,162),I(23,00,00,00),B(boot1 ,71),I(3b,02,25,00),B(boot1 ,2),I(23,00,00,00),B(boot1 ,163),I(23,00,00,00),B(boot1 ,70),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G00258,G00257);
  eul_allocate_bytevector( G00260,G00259);
  eul_allocate_bytevector( G00262,G00261);
  eul_allocate_bytevector( G00264,G00263);
  eul_intern_symbol(sym_268,"*absent*");
  object_class(cons_267) = eul_static_cons_class;
  eul_car(cons_267) = sym_268;
  eul_cdr(cons_267) = eul_nil;
  eul_intern_symbol(sym_269,"(setter car)");
  eul_intern_symbol(sym_270,"(setter cdr)");
  eul_intern_symbol(sym_271,"(setter string-ref)");
  eul_intern_symbol(sym_272,"(setter vector-ref)");
  eul_allocate_bytevector( G00266,G00265);
  eul_allocate_bytevector( G00274,G00273);
  object_class(str_277) = eul_static_string_class;
  eul_allocate_bytevector( G00276,G00275);
  eul_allocate_bytevector( G00279,G00278);
  eul_allocate_bytevector( G00281,G00280);
  eul_allocate_bytevector( G00283,G00282);
  eul_allocate_bytevector( G00285,G00284);
  eul_allocate_bytevector( G00287,G00286);
  eul_allocate_bytevector( G00289,G00288);
  eul_allocate_bytevector( G00291,G00290);
  eul_allocate_bytevector( G00293,G00292);
  eul_allocate_bytevector( G00295,G00294);
  eul_allocate_bytevector( G00297,G00296);
  eul_allocate_bytevector( G00299,G00298);
  eul_allocate_bytevector( G00301,G00300);
  eul_allocate_bytevector( G00303,G00302);
  eul_allocate_bytevector( G00305,G00304);
  eul_intern_symbol(sym_308,"anonymous");
  eul_allocate_bytevector( G00307,G00306);
  eul_allocate_bytevector( G00310,G00309);
  eul_allocate_bytevector( G00312,G00311);
  eul_allocate_bytevector( G00314,G00313);
  eul_allocate_bytevector( G00316,G00315);
  eul_allocate_bytevector( G00318,G00317);
  eul_allocate_bytevector( G00320,G00319);
  eul_allocate_bytevector( G00322,G00321);
  eul_allocate_bytevector( G00324,G00323);
  eul_allocate_bytevector( G00326,G00325);
  eul_allocate_bytevector( G00328,G00327);
  eul_allocate_bytevector( G00330,G00329);
  eul_allocate_bytevector( G00332,G00331);
  eul_allocate_bytevector( G00334,G00333);
  eul_allocate_bytevector( G00336,G00335);
  eul_allocate_bytevector( G00338,G00337);
  eul_allocate_bytevector( G00340,G00339);
  eul_allocate_bytevector( G00342,G00341);
  eul_allocate_bytevector( G00344,G00343);
  eul_allocate_bytevector( G00346,G00345);
  eul_allocate_bytevector( G00348,G00347);
  eul_allocate_bytevector( G00350,G00349);
  eul_allocate_bytevector( G00352,G00351);
  eul_allocate_bytevector( G00354,G00353);
  eul_allocate_bytevector( G00356,G00355);
  eul_allocate_bytevector( G00358,G00357);
  eul_allocate_bytevector( G00360,G00359);
  eul_allocate_bytevector( G00362,G00361);
  eul_allocate_bytevector( G00364,G00363);
  eul_allocate_bytevector( G00366,G00365);
  eul_intern_symbol(sym_369,"system");
  eul_intern_symbol(sym_370,"objectp");
  eul_intern_symbol(sym_371,"equal");
  eul_intern_symbol(sym_372,"simple-generic-function?");
  eul_intern_symbol(sym_373,"dec");
  eul_intern_symbol(sym_374,"eql");
  eul_intern_symbol(sym_375,"symbolp");
  eul_intern_symbol(sym_376,"<");
  eul_intern_symbol(sym_377,"setter");
  eul_intern_symbol(sym_378,"mod");
  eul_intern_symbol(sym_379,"make-vector");
  eul_intern_symbol(sym_380,"prin");
  eul_intern_symbol(sym_381,"atom?");
  eul_intern_symbol(sym_382,"cdr");
  eul_intern_symbol(sym_383,"stringp");
  eul_intern_symbol(sym_384,"*");
  eul_intern_symbol(sym_385,"character?");
  eul_intern_symbol(sym_386,"%");
  eul_intern_symbol(sym_387,"int-zerop");
  eul_intern_symbol(sym_388,"intp");
  eul_intern_symbol(sym_389,"car");
  eul_intern_symbol(sym_390,"time-start");
  eul_intern_symbol(sym_391,"list");
  eul_intern_symbol(sym_392,"time-stop");
  eul_intern_symbol(sym_393,"eq");
  eul_intern_symbol(sym_394,"inc");
  eul_intern_symbol(sym_395,"exit");
  eul_intern_symbol(sym_396,"getenv");
  eul_intern_symbol(sym_397,"format1");
  eul_intern_symbol(sym_398,"string-size");
  eul_intern_symbol(sym_399,"-");
  eul_intern_symbol(sym_400,"+");
  eul_intern_symbol(sym_401,"listp");
  eul_intern_symbol(sym_402,"consp");
  eul_intern_symbol(sym_403,"/");
  eul_intern_symbol(sym_404,"=");
  eul_intern_symbol(sym_405,"null?");
  eul_intern_symbol(sym_406,"string-ref");
  eul_intern_symbol(sym_407,"vector-size");
  eul_intern_symbol(sym_408,"vector-ref");
  eul_intern_symbol(sym_409,"set-setter");
  eul_intern_symbol(sym_410,"simple-function?");
  eul_intern_symbol(sym_411,"print");
  eul_intern_symbol(sym_412,"cons");
  eul_intern_symbol(sym_413,"top-level");
  eul_allocate_bytevector( G00368,G00367);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 49; i++)
      boot1_bindings[i] = eul_nil;
  }

  boot1_bindings[ 49] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_substr246;
  boot1_bindings[ 50] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_tailstr247;
  boot1_bindings[ 51] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_str_member1248;
  boot1_bindings[ 52] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_make_symbol249;
  boot1_bindings[ 53] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_make_keyword250;
  boot1_bindings[ 54] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_make_vector251;
  boot1_bindings[ 55] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_getenv252;
  boot1_bindings[ 56] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_system253;
  boot1_bindings[ 57] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_time_start254;
  boot1_bindings[ 58] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_time_stop255;
  boot1_bindings[ 59] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_is_object256;
  boot1_bindings[ 60] = G00258;
  boot1_bindings[ 61] = G00260;
  boot1_bindings[ 62] = G00262;
  boot1_bindings[ 63] = G00264;
  boot1_bindings[ 64] = sym_268;
  boot1_bindings[ 65] = cons_267;
  boot1_bindings[ 66] = sym_269;
  boot1_bindings[ 67] = sym_270;
  boot1_bindings[ 68] = sym_271;
  boot1_bindings[ 69] = sym_272;
  boot1_bindings[ 70] = G00266;
  boot1_bindings[ 71] = G00274;
  boot1_bindings[ 72] = str_277;
  boot1_bindings[ 73] = G00276;
  boot1_bindings[ 74] = G00279;
  boot1_bindings[ 75] = G00281;
  boot1_bindings[ 76] = G00283;
  boot1_bindings[ 77] = G00285;
  boot1_bindings[ 78] = G00287;
  boot1_bindings[ 79] = G00289;
  boot1_bindings[ 80] = G00291;
  boot1_bindings[ 81] = G00293;
  boot1_bindings[ 82] = G00295;
  boot1_bindings[ 83] = G00297;
  boot1_bindings[ 84] = G00299;
  boot1_bindings[ 85] = G00301;
  boot1_bindings[ 86] = G00303;
  boot1_bindings[ 87] = G00305;
  boot1_bindings[ 88] = sym_308;
  boot1_bindings[ 89] = G00307;
  boot1_bindings[ 90] = G00310;
  boot1_bindings[ 91] = G00312;
  boot1_bindings[ 92] = G00314;
  boot1_bindings[ 93] = G00316;
  boot1_bindings[ 94] = G00318;
  boot1_bindings[ 95] = G00320;
  boot1_bindings[ 96] = G00322;
  boot1_bindings[ 97] = G00324;
  boot1_bindings[ 98] = G00326;
  boot1_bindings[ 99] = G00328;
  boot1_bindings[ 100] = G00330;
  boot1_bindings[ 101] = G00332;
  boot1_bindings[ 102] = G00334;
  boot1_bindings[ 103] = G00336;
  boot1_bindings[ 104] = G00338;
  boot1_bindings[ 105] = G00340;
  boot1_bindings[ 106] = G00342;
  boot1_bindings[ 107] = G00344;
  boot1_bindings[ 108] = G00346;
  boot1_bindings[ 109] = G00348;
  boot1_bindings[ 110] = G00350;
  boot1_bindings[ 111] = G00352;
  boot1_bindings[ 112] = G00354;
  boot1_bindings[ 113] = G00356;
  boot1_bindings[ 114] = G00358;
  boot1_bindings[ 115] = G00360;
  boot1_bindings[ 116] = G00362;
  boot1_bindings[ 117] = G00364;
  boot1_bindings[ 118] = G00366;
  boot1_bindings[ 1] = eul_nil;
  boot1_bindings[ 119] = sym_369;
  boot1_bindings[ 120] = sym_370;
  boot1_bindings[ 121] = sym_371;
  boot1_bindings[ 122] = sym_372;
  boot1_bindings[ 123] = sym_373;
  boot1_bindings[ 124] = sym_374;
  boot1_bindings[ 125] = sym_375;
  boot1_bindings[ 126] = sym_376;
  boot1_bindings[ 127] = sym_377;
  boot1_bindings[ 128] = sym_378;
  boot1_bindings[ 129] = sym_379;
  boot1_bindings[ 130] = sym_380;
  boot1_bindings[ 131] = sym_381;
  boot1_bindings[ 132] = sym_382;
  boot1_bindings[ 133] = sym_383;
  boot1_bindings[ 134] = sym_384;
  boot1_bindings[ 135] = sym_385;
  boot1_bindings[ 136] = sym_386;
  boot1_bindings[ 137] = sym_387;
  boot1_bindings[ 138] = sym_388;
  boot1_bindings[ 139] = sym_389;
  boot1_bindings[ 140] = sym_390;
  boot1_bindings[ 141] = sym_391;
  boot1_bindings[ 142] = sym_392;
  boot1_bindings[ 143] = sym_393;
  boot1_bindings[ 144] = sym_394;
  boot1_bindings[ 145] = sym_395;
  boot1_bindings[ 146] = sym_396;
  boot1_bindings[ 147] = sym_397;
  boot1_bindings[ 148] = sym_398;
  boot1_bindings[ 149] = sym_399;
  boot1_bindings[ 150] = sym_400;
  boot1_bindings[ 151] = sym_401;
  boot1_bindings[ 152] = sym_402;
  boot1_bindings[ 153] = sym_403;
  boot1_bindings[ 154] = sym_404;
  boot1_bindings[ 155] = sym_405;
  boot1_bindings[ 156] = sym_406;
  boot1_bindings[ 157] = sym_407;
  boot1_bindings[ 158] = sym_408;
  boot1_bindings[ 159] = sym_409;
  boot1_bindings[ 160] = sym_410;
  boot1_bindings[ 161] = sym_411;
  boot1_bindings[ 162] = sym_412;
  boot1_bindings[ 163] = sym_413;
  eul_allocate_lambda( boot1_bindings[0], "initialize-boot1", 0, G00368);

  }
}


/* eof */
