/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module stream0
 **  Copyright: See file stream0.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_level_1();
extern LispRef level_1_bindings[];
extern LispRef boot_bindings[];
extern LispRef symbol_bindings[];
extern LispRef collect_bindings[];

/* Module bindings with size 51 */
LispRef stream0_bindings[51];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module stream0 */
void initialize_module_stream0()
{
  if (is_initialized) return;
  initialize_module_level_1();
  eul_fast_table_set(eul_modules,"stream0",(LispRef) stream0_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_524, sym_523, sym_522, sym_521, sym_520, sym_519, G00518, G00516, sym_514, sym_513, G00512, G00510, sym_508, sym_507, G00506, sym_504, sym_503, sym_502, sym_501, sym_499, sym_498, G00497, sym_495, sym_494, sym_493, sym_492, key_491, key_490, sym_489, sym_488, G00487, sym_485, sym_484, G00483, sym_481, sym_480, sym_479, sym_478, sym_477, sym_476, G00475, G00473;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 2 is_init: 0 index: 9 binding: anonymous */
  static const void *G00472[] = {I(aa,10,86,86),I(0f,0f,45,00)};

  /* Byte-vector with size: 40 is_init: 0 index: 16 binding: anonymous */
  static const void *G00474[] = {I(aa,1b,12,1b),I(44,04,86,36),I(94,47,00,01),I(86,0f,23,00),B(stream0 ,10),I(1c,0f,1f,03),I(72,1f,04,10),I(1b,73,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(stream0 ,11),I(1c,0f,1f,09),I(72,47,00,01),I(86,0f,23,00),B(stream0 ,12),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(stream0 ,11),I(1c,0f,47,00),I(01,86,0f,23),B(stream0 ,13),I(1c,0f,1b,86),I(0f,47,00,01),I(1c,0f,23,00),B(stream0 ,11),I(1c,0f,1b,86),I(0f,1f,06,1c),I(0f,23,00,00),B(stream0 ,14),I(1c,0f,1b,86),I(0f,1f,0f,1c),I(0f,1f,16,1c),I(0f,23,00,00),B(stream0 ,15),I(1c,0f,1f,1b),I(11,1b,47,00),I(00,3c,01,1d),I(1c,0f,22,1c),I(45,02,00,00)};

  /* Byte-vector with size: 61 is_init: 0 index: 19 binding: match-let */
  static const void *G00482[] = {I(43,fd,46,03),I(1c,24,00,00),B(collect ,9),I(3c,01,83,1c),I(51,1b,44,4f),I(1f,03,72,1f),I(05,86,0f,23),B(stream0 ,10),I(1c,0f,1f,06),I(10,1b,73,1f),I(09,86,0f,23),B(stream0 ,12),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,1f,06,1c),I(0f,23,00,00),B(stream0 ,15),I(1c,0f,1b,86),I(0f,1f,0b,1c),I(0f,1b,86,0f),I(1b,1f,11,0f),I(23,00,00,00),B(stream0 ,17),I(1c,0f,22,0f),I(36,8f,1f,04),I(7c,1b,44,05),I(1f,05,36,0b),I(24,00,00,00),B(symbol ,6),I(3c,00,1b,48),I(00,01,86,1b),I(48,00,00,23),B(stream0 ,18),I(23,00,00,00),B(stream0 ,16),I(3b,01,48,00),I(00,1f,06,47),I(00,00,3c,01),I(1f,08,7c,1b),I(44,04,86,36),I(0e,1f,09,86),I(0f,47,00,01),I(1c,0f,86,0f),I(22,01,23,00),B(stream0 ,18),I(23,00,00,00),B(stream0 ,9),I(3b,01,1f,0a),I(24,00,00,00),B(collect ,2),I(3c,02,1c,1c),I(24,00,00,00),B(boot ,8),I(3c,02,23,00),B(stream0 ,14),I(1f,05,0f,1b),I(1f,0c,0f,1d),I(1c,0f,23,00),B(stream0 ,17),I(1c,0f,22,0b),I(45,05,00,00)};

  /* Byte-vector with size: 42 is_init: 0 index: 28 binding: with-output-file */
  static const void *G00486[] = {I(a7,1c,10,1d),I(11,1b,10,24),B(symbol ,6),I(3c,00,1f,03),I(1d,1d,23,00),B(stream0 ,20),I(86,0f,23,00),B(stream0 ,21),I(1c,0f,1b,86),I(0f,23,00,00),B(stream0 ,22),I(1c,0f,1f,05),I(1c,0f,23,00),B(stream0 ,23),I(1c,0f,23,00),B(stream0 ,24),I(1c,0f,23,00),B(stream0 ,25),I(1c,0f,1b,86),I(0f,1f,0b,1c),I(0f,86,86,0f),I(1f,0b,1c,0f),I(1b,86,0f,1f),I(03,1c,0f,23),B(stream0 ,14),I(1f,16,0f,1b),I(86,0f,1f,10),I(1c,0f,23,00),B(stream0 ,11),I(1c,0f,1f,14),I(86,0f,23,00),B(stream0 ,26),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(stream0 ,27),I(1c,0f,1f,17),I(86,0f,1c,1c),I(0f,1f,0b,1c),I(0f,23,00,00),B(stream0 ,17),I(1c,0f,45,23)};

  eul_allocate_static_string(str_500, "No such file or directory ~a in ~a", 34);
  /* Byte-vector with size: 69 is_init: 0 index: 36 binding: with-input-file-of-path */
  static const void *G00496[] = {I(a7,1c,10,1d),I(11,1b,10,1f),I(04,11,1b,11),I(1b,10,1f,07),I(11,1b,11,1b),I(11,1b,10,24),B(symbol ,6),I(3c,00,24,00),B(symbol ,6),I(3c,00,24,00),B(symbol ,6),I(3c,00,1f,0c),I(1f,0b,1f,09),I(1f,06,1f,06),I(1f,06,1f,06),I(1f,03,86,0f),I(1f,06,1c,0f),I(23,00,00,00),B(stream0 ,29),I(1c,0f,23,00),B(stream0 ,30),I(1c,0f,1b,86),I(0f,1f,07,1c),I(0f,1b,86,0f),I(1f,09,86,0f),I(23,00,00,00),B(stream0 ,10),I(1c,0f,1f,0c),I(86,0f,1f,0f),I(1c,0f,23,00),B(stream0 ,31),I(1c,0f,23,00),B(stream0 ,32),I(1c,0f,1b,86),I(0f,23,00,00),B(stream0 ,33),I(1c,0f,23,00),B(stream0 ,34),I(1c,0f,1f,12),I(86,0f,23,00),B(stream0 ,12),I(1c,0f,1b,86),I(0f,1f,14,1c),I(0f,1f,16,86),I(0f,23,00,00),B(stream0 ,13),I(1c,0f,1b,86),I(0f,1f,1b,1c),I(0f,1b,86,0f),I(1f,05,1c,0f),I(1f,1b,86,0f),I(1f,21,1c,0f),I(1b,1f,31,0f),I(23,00,00,00),B(stream0 ,35),I(1c,0f,1b,86),I(0f,1f,05,1c),I(0f,23,00,00),B(stream0 ,17),I(1c,0f,1b,86),I(0f,1f,12,1c),I(0f,1f,1a,1c),I(0f,23,00,00),B(stream0 ,15),I(1c,0f,1b,86),I(0f,1f,1f,1c),I(0f,23,00,00),B(stream0 ,17),I(1c,0f,45,3d)};

  /* Byte-vector with size: 30 is_init: 0 index: 39 binding: with-source */
  static const void *G00505[] = {I(a7,24,00,00),B(symbol ,6),I(3c,00,1d,10),I(1b,86,0f,23),B(stream0 ,37),I(1c,0f,1b,86),I(0f,1f,04,1c),I(0f,1b,86,0f),I(1f,08,11,1b),I(10,1f,0a,10),I(1b,86,0f,1d),I(1c,0f,23,00),B(stream0 ,38),I(1c,0f,23,00),B(stream0 ,14),I(1f,0e,0f,1f),I(0f,10,1b,86),I(0f,1f,0f,1c),I(0f,23,00,00),B(stream0 ,38),I(1c,0f,1b,86),I(0f,1f,05,1c),I(0f,23,00,00),B(stream0 ,27),I(1c,0f,1b,86),I(0f,1f,09,1c),I(0f,1f,10,1c),I(0f,23,00,00),B(stream0 ,17),I(1c,0f,45,1a)};

  /* Byte-vector with size: 30 is_init: 0 index: 40 binding: with-sink */
  static const void *G00509[] = {I(a7,24,00,00),B(symbol ,6),I(3c,00,1d,10),I(1b,86,0f,23),B(stream0 ,37),I(1c,0f,1b,86),I(0f,1f,04,1c),I(0f,1b,86,0f),I(1f,08,11,1b),I(10,1f,0a,10),I(1b,86,0f,1d),I(1c,0f,23,00),B(stream0 ,38),I(1c,0f,23,00),B(stream0 ,14),I(1f,0e,0f,1f),I(0f,10,1b,86),I(0f,1f,0f,1c),I(0f,23,00,00),B(stream0 ,38),I(1c,0f,1b,86),I(0f,1f,05,1c),I(0f,23,00,00),B(stream0 ,27),I(1c,0f,1b,86),I(0f,1f,09,1c),I(0f,1f,10,1c),I(0f,23,00,00),B(stream0 ,17),I(1c,0f,45,1a)};

  /* Byte-vector with size: 22 is_init: 0 index: 43 binding: with-lock */
  static const void *G00511[] = {I(a7,24,00,00),B(symbol ,6),I(3c,00,1d,86),I(0f,1c,1c,0f),I(1b,86,0f,1f),I(03,86,0f,23),B(stream0 ,41),I(1c,0f,1b,1f),I(07,0f,23,00),B(stream0 ,14),I(1c,0f,1f,07),I(86,0f,23,00),B(stream0 ,42),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(stream0 ,27),I(1c,0f,1b,86),I(0f,1f,0a,1c),I(0f,23,00,00),B(stream0 ,17),I(1c,0f,45,11)};

  /* Byte-vector with size: 35 is_init: 0 index: 44 binding: with-input-file */
  static const void *G00515[] = {I(a7,1c,10,1d),I(11,1b,10,24),B(symbol ,6),I(3c,00,1f,03),I(1d,1d,1c,86),I(0f,23,00,00),B(stream0 ,23),I(1c,0f,23,00),B(stream0 ,24),I(1c,0f,23,00),B(stream0 ,25),I(1c,0f,1b,86),I(0f,1f,07,1c),I(0f,86,86,0f),I(1f,07,1c,0f),I(1b,86,0f,1f),I(03,1c,0f,23),B(stream0 ,14),I(1f,12,0f,1b),I(86,0f,1f,0c),I(1c,0f,23,00),B(stream0 ,11),I(1c,0f,1f,10),I(86,0f,23,00),B(stream0 ,26),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(stream0 ,27),I(1c,0f,1f,13),I(86,0f,1c,1c),I(0f,1f,0b,1c),I(0f,23,00,00),B(stream0 ,17),I(1c,0f,45,1f)};

  /* Byte-vector with size: 50 is_init: 1 index: 0 binding: initialize-stream0 */
  static const void *G00517[] = {I(87,25,00,00),B(stream0 ,1),I(24,00,00,00),B(level_1 ,1),I(3e,0b,24,00),B(level_1 ,0),I(3c,00,21,01),I(23,00,00,00),B(stream0 ,35),I(23,00,00,00),B(stream0 ,44),I(3b,fe,25,00),B(stream0 ,8),I(23,00,00,00),B(stream0 ,45),I(23,00,00,00),B(stream0 ,43),I(3b,fe,25,00),B(stream0 ,7),I(23,00,00,00),B(stream0 ,46),I(23,00,00,00),B(stream0 ,40),I(3b,fe,25,00),B(stream0 ,6),I(23,00,00,00),B(stream0 ,47),I(23,00,00,00),B(stream0 ,39),I(3b,fe,25,00),B(stream0 ,5),I(23,00,00,00),B(stream0 ,48),I(23,00,00,00),B(stream0 ,36),I(3b,fe,25,00),B(stream0 ,4),I(23,00,00,00),B(stream0 ,49),I(23,00,00,00),B(stream0 ,28),I(3b,fe,25,00),B(stream0 ,3),I(23,00,00,00),B(stream0 ,50),I(23,00,00,00),B(stream0 ,19),I(3b,fd,25,00),B(stream0 ,2),I(86,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G00473,G00472);
  eul_intern_symbol(sym_476,"null?");
  eul_intern_symbol(sym_477,"setq");
  eul_intern_symbol(sym_478,"car");
  eul_intern_symbol(sym_479,"cdr");
  eul_intern_symbol(sym_480,"progn");
  eul_intern_symbol(sym_481,"if");
  eul_allocate_bytevector( G00475,G00474);
  eul_intern_symbol(sym_484,"let");
  eul_intern_symbol(sym_485,"anonymous");
  eul_allocate_bytevector( G00483,G00482);
  eul_intern_symbol(sym_488,"w");
  eul_intern_symbol(sym_489,"quote");
  eul_intern_keyword(key_490,"mode");
  eul_intern_keyword(key_491,"file-name");
  eul_intern_symbol(sym_492,"<file-stream>");
  eul_intern_symbol(sym_493,"make");
  eul_intern_symbol(sym_494,"disconnect");
  eul_intern_symbol(sym_495,"unwind-protect");
  eul_allocate_bytevector( G00487,G00486);
  eul_intern_symbol(sym_498,"file-lookup");
  eul_intern_symbol(sym_499,"apply");
  object_class(str_500) = eul_static_string_class;
  eul_intern_symbol(sym_501,"fmt");
  eul_intern_symbol(sym_502,"<condition>");
  eul_intern_symbol(sym_503,"error");
  eul_intern_symbol(sym_504,"with-input-file");
  eul_allocate_bytevector( G00497,G00496);
  eul_intern_symbol(sym_507,"source");
  eul_intern_symbol(sym_508,"reconnect");
  eul_allocate_bytevector( G00506,G00505);
  eul_allocate_bytevector( G00510,G00509);
  eul_intern_symbol(sym_513,"lock");
  eul_intern_symbol(sym_514,"unlock");
  eul_allocate_bytevector( G00512,G00511);
  eul_allocate_bytevector( G00516,G00515);
  eul_intern_symbol(sym_519,"with-lock");
  eul_intern_symbol(sym_520,"with-sink");
  eul_intern_symbol(sym_521,"with-source");
  eul_intern_symbol(sym_522,"with-input-file-of-path");
  eul_intern_symbol(sym_523,"with-output-file");
  eul_intern_symbol(sym_524,"match-let");
  eul_allocate_bytevector( G00518,G00517);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 9; i++)
      stream0_bindings[i] = eul_nil;
  }

  stream0_bindings[ 9] = G00473;
  stream0_bindings[ 10] = sym_476;
  stream0_bindings[ 11] = sym_477;
  stream0_bindings[ 12] = sym_478;
  stream0_bindings[ 13] = sym_479;
  stream0_bindings[ 14] = sym_480;
  stream0_bindings[ 15] = sym_481;
  stream0_bindings[ 16] = G00475;
  stream0_bindings[ 17] = sym_484;
  stream0_bindings[ 18] = sym_485;
  stream0_bindings[ 19] = G00483;
  stream0_bindings[ 20] = sym_488;
  stream0_bindings[ 21] = sym_489;
  stream0_bindings[ 22] = key_490;
  stream0_bindings[ 23] = key_491;
  stream0_bindings[ 24] = sym_492;
  stream0_bindings[ 25] = sym_493;
  stream0_bindings[ 26] = sym_494;
  stream0_bindings[ 27] = sym_495;
  stream0_bindings[ 28] = G00487;
  stream0_bindings[ 29] = sym_498;
  stream0_bindings[ 30] = sym_499;
  stream0_bindings[ 31] = str_500;
  stream0_bindings[ 32] = sym_501;
  stream0_bindings[ 33] = sym_502;
  stream0_bindings[ 34] = sym_503;
  stream0_bindings[ 35] = sym_504;
  stream0_bindings[ 36] = G00497;
  stream0_bindings[ 37] = sym_507;
  stream0_bindings[ 38] = sym_508;
  stream0_bindings[ 39] = G00506;
  stream0_bindings[ 40] = G00510;
  stream0_bindings[ 41] = sym_513;
  stream0_bindings[ 42] = sym_514;
  stream0_bindings[ 43] = G00512;
  stream0_bindings[ 44] = G00516;
  stream0_bindings[ 1] = eul_nil;
  stream0_bindings[ 45] = sym_519;
  stream0_bindings[ 46] = sym_520;
  stream0_bindings[ 47] = sym_521;
  stream0_bindings[ 48] = sym_522;
  stream0_bindings[ 49] = sym_523;
  stream0_bindings[ 50] = sym_524;
  eul_allocate_lambda( stream0_bindings[0], "initialize-stream0", 0, G00518);

  }
}


/* eof */
