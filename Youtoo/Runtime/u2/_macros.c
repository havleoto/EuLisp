/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module _macros
 **  Copyright: See file _macros.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_level_1();
extern void initialize_module__telos0();
extern void initialize_module__stream0();
extern LispRef _stream0_bindings[];
extern LispRef _telos0_bindings[];
extern LispRef level_1_bindings[];
extern LispRef collect_bindings[];
extern LispRef format_bindings[];
extern LispRef boot_bindings[];
extern LispRef symbol_bindings[];
extern LispRef boot1_bindings[];

/* Module bindings with size 108 */
LispRef _macros_bindings[108];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module _macros */
void initialize_module__macros()
{
  if (is_initialized) return;
  initialize_module_level_1();
  initialize_module__telos0();
  initialize_module__stream0();
  eul_fast_table_set(eul_modules,"_macros",(LispRef) _macros_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_1022, sym_1021, sym_1020, sym_1019, sym_1018, sym_1017, sym_1016, sym_1015, sym_1014, sym_1013, sym_1012, sym_1011, sym_1010, sym_1009, G001008, sym_1006, G001005, G001003, G001001, sym_999, sym_998, G00997, sym_995, sym_994, G00993, G00991, sym_989, G00988, sym_986, sym_985, sym_981, sym_980, sym_979, sym_978, sym_977, sym_976, sym_975, sym_974, sym_973, sym_972, sym_971, sym_970, G00967, sym_965, G00964, G00962, sym_960, sym_959, sym_958, G00957, G00955, sym_953, sym_952, sym_951, sym_950, sym_949, G00948, sym_946, G00945, sym_943, G00942, sym_940, sym_939, sym_938, G00937, sym_935, sym_934, sym_933, G00932, sym_930, sym_929, sym_928, G00927, sym_925, sym_924, sym_923, G00921, sym_919, sym_918, sym_917, sym_916, sym_915, G00914;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 73 is_init: 0 index: 25 binding: anonymous */
  static const void *G00913[] = {I(aa,1b,10,1c),I(11,1d,47,00),I(01,50,1b,34),I(00,00,00,15),I(1d,23,00,00),B(_macros ,20),I(50,32,00,00),I(00,00,00,08),I(86,1b,34,00),I(00,00,00,16),I(23,00,00,00),B(_macros ,20),I(1f,03,0f,32),I(00,00,00,ec),I(1f,03,7b,24),B(_macros ,9),I(3c,01,1b,34),I(00,00,00,31),I(1f,04,86,0f),I(23,00,00,00),B(_macros ,21),I(1c,0f,1b,86),I(0f,47,00,00),I(1c,0f,23,00),B(_macros ,22),I(1c,0f,1b,1f),I(09,0f,22,05),I(32,00,00,00),I(00,00,00,b1),I(1f,04,12,1b),I(34,00,00,00),I(00,00,00,24),I(47,00,00,86),I(0f,23,00,00),B(_macros ,23),I(1c,0f,1b,1f),I(07,0f,22,02),I(32,00,00,00),I(00,00,00,87),I(1f,05,11,1b),I(34,00,00,00),I(00,00,00,3c),I(1f,06,86,0f),I(23,00,00,00),B(_macros ,21),I(1c,0f,23,00),B(_macros ,22),I(86,0f,1c,1c),I(0f,47,00,00),I(1c,0f,23,00),B(_macros ,24),I(1c,0f,1b,1f),I(0c,0f,22,06),I(32,00,00,00),I(00,00,00,45),I(24,00,00,00),B(boot1 ,14),I(34,00,00,00),I(00,00,00,34),I(1f,06,10,1b),I(86,0f,23,00),B(_macros ,21),I(1c,0f,1b,86),I(0f,47,00,00),I(1c,0f,23,00),B(_macros ,22),I(1c,0f,1b,1f),I(0c,0f,22,06),I(32,00,00,00),I(00,00,00,09),I(86,22,01,22),I(01,22,01,45),I(05,00,00,00)};

  eul_allocate_static_string(str_922, "*** WARNING: missing else branch in (case ... ~a)", 49);
  /* Byte-vector with size: 39 is_init: 0 index: 30 binding: case */
  static const void *G00920[] = {I(43,fe,46,02),I(24,00,00,00),B(symbol ,6),I(3c,00,1c,24),B(boot ,19),I(3c,01,1b,2c),I(1f,03,1c,24),B(boot ,26),I(3c,02,1f,03),I(1c,1c,48,00),I(00,1b,48,00),I(01,47,00,01),I(10,1b,23,00),B(_macros ,20),I(50,12,1b,34),I(00,00,00,1d),I(23,00,00,00),B(_macros ,26),I(47,00,01,24),B(format ,5),I(3c,02,32,00),I(00,00,00,07),I(86,2a,1f,09),I(86,0f,47,00),I(00,1c,0f,1b),I(86,0f,23,00),B(_macros ,27),I(23,00,00,00),B(_macros ,25),I(3b,01,1f,0c),I(24,00,00,00),B(collect ,2),I(3c,02,23,00),B(_macros ,28),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(_macros ,29),I(1c,0f,45,11)};

  /* Byte-vector with size: 23 is_init: 0 index: 34 binding: with-handler */
  static const void *G00926[] = {I(43,fe,24,00),B(symbol ,6),I(3c,00,1d,86),I(0f,23,00,00),B(_macros ,31),I(1c,0f,23,00),B(_macros ,32),I(1f,04,0f,1b),I(86,0f,1f,04),I(1c,0f,1b,86),I(0f,83,86,0f),I(23,00,00,00),B(_macros ,33),I(1c,0f,1f,08),I(86,0f,1c,1c),I(0f,1f,04,1c),I(0f,23,00,00),B(_macros ,29),I(1c,0f,1b,86),I(0f,1f,0b,1c),I(0f,23,00,00),B(_macros ,32),I(1c,0f,45,11)};

  /* Byte-vector with size: 18 is_init: 0 index: 38 binding: let/cc */
  static const void *G00931[] = {I(43,fe,24,00),B(symbol ,6),I(3c,00,1d,86),I(0f,1b,1f,03),I(0f,23,00,00),B(_macros ,35),I(1c,0f,23,00),B(_macros ,36),I(1c,0f,1b,86),I(0f,23,00,00),B(_macros ,37),I(1c,0f,1b,86),I(0f,1f,07,1c),I(0f,1b,86,0f),I(1f,09,86,0f),I(1c,1c,0f,23),B(_macros ,29),I(1c,0f,45,0e)};

  /* Byte-vector with size: 27 is_init: 0 index: 42 binding: last */
  static const void *G00936[] = {I(43,fe,1b,12),I(1b,34,00,00),I(00,00,00,3b),I(1d,86,0f,23),B(_macros ,39),I(1c,0f,83,86),I(0f,1c,1c,0f),I(23,00,00,00),B(_macros ,40),I(1c,0f,1b,86),I(0f,1f,08,1c),I(0f,23,00,00),B(_macros ,41),I(1c,0f,22,07),I(32,00,00,00),I(00,00,00,30),I(1d,86,0f,23),B(_macros ,39),I(1c,0f,1b,1f),I(04,0f,23,00),B(_macros ,40),I(1c,0f,1b,86),I(0f,1f,07,1c),I(0f,23,00,00),B(_macros ,41),I(1c,0f,22,06),I(45,03,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 44 binding: block */
  static const void *G00941[] = {I(a8,23,00,00),B(_macros ,43),I(1c,0f,45,01)};

  /* Byte-vector with size: 8 is_init: 0 index: 46 binding: defglobal */
  static const void *G00944[] = {I(ab,1c,86,0f),I(23,00,00,00),B(_macros ,21),I(1c,0f,1d,86),I(0f,1c,1c,0f),I(23,00,00,00),B(_macros ,45),I(1c,0f,45,06)};

  /* Byte-vector with size: 47 is_init: 0 index: 52 binding: unwind-protect */
  static const void *G00947[] = {I(43,fe,24,00),B(symbol ,6),I(3c,00,23,00),B(_macros ,47),I(86,0f,23,00),B(_macros ,21),I(1c,0f,83,86),I(0f,23,00,00),B(_macros ,48),I(1c,0f,1b,86),I(0f,1f,06,1c),I(24,00,00,00),B(boot ,8),I(3c,02,86,1c),I(0f,23,00,00),B(_macros ,49),I(1c,0f,23,00),B(_macros ,47),I(86,0f,23,00),B(_macros ,50),I(1c,0f,1b,86),I(0f,1f,03,1c),I(0f,23,00,00),B(_macros ,51),I(1c,0f,1b,86),I(0f,1f,0c,1c),I(0f,23,00,00),B(_macros ,45),I(1c,0f,1f,12),I(86,0f,1f,11),I(1c,0f,1b,86),I(0f,83,86,0f),I(23,00,00,00),B(_macros ,48),I(1c,0f,1f,15),I(86,0f,1c,1c),I(0f,1f,18,1c),I(24,00,00,00),B(boot ,8),I(3c,02,1f,05),I(1c,0f,23,00),B(_macros ,29),I(1c,0f,1b,86),I(0f,1f,0b,1c),I(0f,23,00,00),B(_macros ,32),I(1c,0f,45,1f)};

  /* Byte-vector with size: 3 is_init: 0 index: 53 binding: not */
  static const void *G00954[] = {I(aa,86,0f,23),B(_macros ,23),I(1c,0f,45,01)};

  /* Byte-vector with size: 23 is_init: 0 index: 57 binding: while */
  static const void *G00956[] = {I(43,fe,24,00),B(symbol ,6),I(3c,00,1b,86),I(0f,1b,86,0f),I(1f,03,1c,24),B(boot ,8),I(3c,02,1f,05),I(1c,0f,23,00),B(_macros ,54),I(1c,0f,1b,86),I(0f,86,1c,0f),I(1f,07,1c,0f),I(1b,86,0f,1f),I(09,86,0f,1b),I(86,0f,1d,1c),I(0f,23,00,00),B(_macros ,55),I(1c,0f,1b,86),I(0f,23,00,00),B(_macros ,56),I(1c,0f,23,00),B(_macros ,43),I(1c,0f,45,12)};

  /* Byte-vector with size: 9 is_init: 0 index: 58 binding: anonymous */
  static const void *G00961[] = {I(aa,1b,10,1b),I(86,0f,23,00),B(_macros ,21),I(1c,0f,1f,03),I(11,1b,10,1b),I(86,0f,1f,03),I(1c,0f,23,00),B(_macros ,45),I(1c,0f,45,08)};

  /* Byte-vector with size: 27 is_init: 0 index: 60 binding: dynamic-let */
  static const void *G00963[] = {I(43,fe,24,00),B(symbol ,6),I(3c,00,2a,23),B(_macros ,27),I(23,00,00,00),B(_macros ,58),I(3b,01,1d,24),B(collect ,2),I(3c,02,23,00),B(_macros ,32),I(1d,0f,1f,03),I(24,00,00,00),B(collect ,9),I(3c,01,1b,86),I(0f,23,00,00),B(_macros ,48),I(1c,0f,1b,86),I(0f,1f,04,1c),I(0f,23,00,00),B(_macros ,59),I(1c,0f,1b,86),I(0f,1f,08,1c),I(24,00,00,00),B(boot ,8),I(3c,02,23,00),B(_macros ,32),I(1c,0f,45,0c)};

  eul_allocate_static_string(str_968, "time", 4);
  eul_allocate_static_string(str_969, "time", 4);
  eul_allocate_static_string(str_982, "\nsystem: ", 9);
  eul_allocate_static_string(str_983, "\nuser: ", 7);
  eul_allocate_static_string(str_984, "real: ", 6);
  /* Byte-vector with size: 84 is_init: 0 index: 80 binding: time-execution */
  static const void *G00966[] = {I(ab,23,00,00),B(_macros ,61),I(24,00,00,00),B(symbol ,6),I(3c,01,23,00),B(_macros ,62),I(24,00,00,00),B(symbol ,6),I(3c,01,23,00),B(_macros ,63),I(86,0f,1b,86),I(0f,1f,03,1c),I(0f,1f,06,86),I(0f,1f,04,1c),I(0f,1b,86,0f),I(1f,03,1c,0f),I(23,00,00,00),B(_macros ,64),I(86,0f,23,00),B(_macros ,65),I(1c,0f,23,00),B(_macros ,64),I(86,0f,23,00),B(_macros ,65),I(1c,0f,23,00),B(_macros ,66),I(1c,0f,23,00),B(_macros ,67),I(86,0f,23,00),B(_macros ,68),I(1c,0f,23,00),B(_macros ,69),I(1c,0f,1b,86),I(0f,1f,04,1c),I(0f,23,00,00),B(_macros ,70),I(1c,0f,1b,86),I(0f,1f,0a,1c),I(0f,23,00,00),B(_macros ,49),I(1c,0f,23,00),B(_macros ,63),I(86,0f,1f,17),I(86,0f,1c,1c),I(0f,1f,03,1c),I(0f,23,00,00),B(_macros ,71),I(1c,0f,1b,86),I(0f,1f,1c,1c),I(0f,23,00,00),B(_macros ,72),I(1c,0f,82,86),I(0f,1f,1f,1c),I(0f,23,00,00),B(_macros ,73),I(1c,0f,83,86),I(0f,1f,22,1c),I(0f,23,00,00),B(_macros ,73),I(1c,0f,84,86),I(0f,1f,25,1c),I(0f,23,00,00),B(_macros ,73),I(1c,0f,23,00),B(_macros ,74),I(86,0f,1c,1c),I(0f,23,00,00),B(_macros ,75),I(1c,0f,1f,06),I(1c,0f,23,00),B(_macros ,76),I(1c,0f,1f,0b),I(1c,0f,23,00),B(_macros ,77),I(1c,0f,1f,2f),I(1c,0f,23,00),B(_macros ,78),I(1c,0f,1f,2f),I(86,0f,1c,1c),I(0f,1f,14,1c),I(0f,1f,2b,1c),I(0f,23,00,00),B(_macros ,79),I(1c,0f,45,37)};

  /* Byte-vector with size: 25 is_init: 0 index: 82 binding: butlast */
  static const void *G00987[] = {I(43,fe,1b,12),I(1b,34,00,00),I(00,00,00,37),I(1d,86,0f,23),B(_macros ,81),I(1c,0f,83,86),I(0f,1c,1c,0f),I(23,00,00,00),B(_macros ,41),I(1c,0f,1b,86),I(0f,23,00,00),B(_macros ,81),I(1c,0f,22,06),I(32,00,00,00),I(00,00,00,2c),I(1d,86,0f,23),B(_macros ,81),I(1c,0f,1b,1f),I(04,0f,23,00),B(_macros ,41),I(1c,0f,1b,86),I(0f,23,00,00),B(_macros ,81),I(1c,0f,22,05),I(45,03,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 83 binding: return-from */
  static const void *G00990[] = {I(43,fe,23,00),B(_macros ,32),I(1c,0f,1d,1c),I(24,00,00,00),B(boot1 ,26),I(3d,02,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 86 binding: dynamic-setq */
  static const void *G00992[] = {I(ab,23,00,00),B(_macros ,84),I(86,0f,23,00),B(_macros ,85),I(1c,0f,1f,03),I(86,0f,23,00),B(_macros ,21),I(1c,0f,1f,04),I(86,0f,1c,1c),I(0f,1f,04,1c),I(0f,45,08,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 89 binding: defcondition */
  static const void *G00996[] = {I(43,fc,1d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0f),I(23,00,00,00),B(_macros ,87),I(1f,03,1f,03),I(0f,1c,1c,0f),I(1f,07,1c,0f),I(23,00,00,00),B(_macros ,88),I(1c,0f,45,09)};

  /* Byte-vector with size: 8 is_init: 0 index: 90 binding: throw */
  static const void *G001000[] = {I(43,fe,1c,86),I(0f,23,00,00),B(_macros ,50),I(1c,0f,23,00),B(_macros ,32),I(1f,03,0f,1b),I(86,0f,1d,1c),I(0f,45,06,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 91 binding: dynamic */
  static const void *G001002[] = {I(aa,86,0f,23),B(_macros ,21),I(1c,0f,1b,86),I(0f,23,00,00),B(_macros ,84),I(1c,0f,45,03)};

  /* Byte-vector with size: 13 is_init: 0 index: 93 binding: catch */
  static const void *G001004[] = {I(43,fe,24,00),B(symbol ,6),I(3c,00,1b,86),I(0f,1f,03,1c),I(0f,1b,86,0f),I(1b,1f,05,0f),I(23,00,00,00),B(_macros ,92),I(1c,0f,1b,86),I(0f,1f,06,1c),I(0f,23,00,00),B(_macros ,43),I(1c,0f,45,0a)};

  /* Byte-vector with size: 126 is_init: 1 index: 0 binding: initialize-_macros */
  static const void *G001007[] = {I(87,25,00,00),B(_macros ,1),I(24,00,00,00),B(_stream0 ,1),I(3e,0b,24,00),B(_stream0 ,0),I(3c,00,21,01),I(24,00,00,00),B(_telos0 ,1),I(3e,0b,24,00),B(_telos0 ,0),I(3c,00,21,01),I(24,00,00,00),B(level_1 ,1),I(3e,0b,24,00),B(level_1 ,0),I(3c,00,21,01),I(23,00,00,00),B(_macros ,94),I(23,00,00,00),B(_macros ,93),I(3b,fe,25,00),B(_macros ,19),I(23,00,00,00),B(_macros ,50),I(23,00,00,00),B(_macros ,91),I(3b,01,25,00),B(_macros ,18),I(23,00,00,00),B(_macros ,95),I(23,00,00,00),B(_macros ,90),I(3b,fe,25,00),B(_macros ,17),I(23,00,00,00),B(_macros ,96),I(23,00,00,00),B(_macros ,89),I(3b,fc,25,00),B(_macros ,16),I(23,00,00,00),B(_macros ,97),I(23,00,00,00),B(_macros ,86),I(3b,02,25,00),B(_macros ,15),I(23,00,00,00),B(_macros ,98),I(23,00,00,00),B(_macros ,83),I(3b,fe,25,00),B(_macros ,14),I(23,00,00,00),B(_macros ,99),I(23,00,00,00),B(_macros ,82),I(3b,fe,25,00),B(_macros ,13),I(23,00,00,00),B(_macros ,100),I(23,00,00,00),B(_macros ,80),I(3b,02,25,00),B(_macros ,12),I(23,00,00,00),B(_macros ,92),I(23,00,00,00),B(_macros ,60),I(3b,fe,25,00),B(_macros ,11),I(23,00,00,00),B(_macros ,101),I(23,00,00,00),B(_macros ,57),I(3b,fe,25,00),B(_macros ,10),I(23,00,00,00),B(_macros ,102),I(23,00,00,00),B(_macros ,53),I(3b,01,25,00),B(_macros ,9),I(23,00,00,00),B(_macros ,59),I(23,00,00,00),B(_macros ,52),I(3b,fe,25,00),B(_macros ,8),I(23,00,00,00),B(_macros ,103),I(23,00,00,00),B(_macros ,46),I(3b,02,25,00),B(_macros ,7),I(23,00,00,00),B(_macros ,104),I(23,00,00,00),B(_macros ,44),I(3b,ff,25,00),B(_macros ,6),I(23,00,00,00),B(_macros ,105),I(23,00,00,00),B(_macros ,42),I(3b,fe,25,00),B(_macros ,5),I(23,00,00,00),B(_macros ,43),I(23,00,00,00),B(_macros ,38),I(3b,fe,25,00),B(_macros ,4),I(23,00,00,00),B(_macros ,106),I(23,00,00,00),B(_macros ,34),I(3b,fe,25,00),B(_macros ,3),I(23,00,00,00),B(_macros ,107),I(23,00,00,00),B(_macros ,30),I(3b,fe,25,00),B(_macros ,2),I(86,ac,00,00)};


  /* Initializations */
  eul_intern_symbol(sym_915,"else");
  eul_intern_symbol(sym_916,"quote");
  eul_intern_symbol(sym_917,"eql");
  eul_intern_symbol(sym_918,"null?");
  eul_intern_symbol(sym_919,"member");
  eul_allocate_bytevector( G00914,G00913);
  object_class(str_922) = eul_static_string_class;
  eul_intern_symbol(sym_923,"anonymous");
  eul_intern_symbol(sym_924,"cond");
  eul_intern_symbol(sym_925,"let");
  eul_allocate_bytevector( G00921,G00920);
  eul_intern_symbol(sym_928,"push-error-handler");
  eul_intern_symbol(sym_929,"progn");
  eul_intern_symbol(sym_930,"pop-error-handlers");
  eul_allocate_bytevector( G00927,G00926);
  eul_intern_symbol(sym_933,"call/ep-lambda");
  eul_intern_symbol(sym_934,"named-lambda");
  eul_intern_symbol(sym_935,"call/ep");
  eul_allocate_bytevector( G00932,G00931);
  eul_intern_symbol(sym_938,"list-size");
  eul_intern_symbol(sym_939,"-");
  eul_intern_symbol(sym_940,"list-drop");
  eul_allocate_bytevector( G00937,G00936);
  eul_intern_symbol(sym_943,"let/cc");
  eul_allocate_bytevector( G00942,G00941);
  eul_intern_symbol(sym_946,"push-dynamic-variable");
  eul_allocate_bytevector( G00945,G00944);
  eul_intern_symbol(sym_949,"*clean-ups*");
  eul_intern_symbol(sym_950,"pop-dynamic-variables");
  eul_intern_symbol(sym_951,"lambda");
  eul_intern_symbol(sym_952,"dynamic");
  eul_intern_symbol(sym_953,"cons");
  eul_allocate_bytevector( G00948,G00947);
  eul_allocate_bytevector( G00955,G00954);
  eul_intern_symbol(sym_958,"when");
  eul_intern_symbol(sym_959,"labels");
  eul_intern_symbol(sym_960,"break");
  eul_allocate_bytevector( G00957,G00956);
  eul_allocate_bytevector( G00962,G00961);
  eul_intern_symbol(sym_965,"unwind-protect");
  eul_allocate_bytevector( G00964,G00963);
  object_class(str_968) = eul_static_string_class;
  object_class(str_969) = eul_static_string_class;
  eul_intern_symbol(sym_970,"cpu-time");
  eul_intern_symbol(sym_971,"y");
  eul_intern_symbol(sym_972,"x");
  eul_intern_symbol(sym_973,"binary-");
  eul_intern_symbol(sym_974,"<double-float>");
  eul_intern_symbol(sym_975,"ticks-per-second");
  eul_intern_symbol(sym_976,"convert");
  eul_intern_symbol(sym_977,"/");
  eul_intern_symbol(sym_978,"map");
  eul_intern_symbol(sym_979,"setq");
  eul_intern_symbol(sym_980,"vector-ref");
  eul_intern_symbol(sym_981,"nl");
  object_class(str_982) = eul_static_string_class;
  object_class(str_983) = eul_static_string_class;
  object_class(str_984) = eul_static_string_class;
  eul_intern_symbol(sym_985,"sprint");
  eul_intern_symbol(sym_986,"let*");
  eul_allocate_bytevector( G00967,G00966);
  eul_intern_symbol(sym_989,"reverse-list");
  eul_allocate_bytevector( G00988,G00987);
  eul_allocate_bytevector( G00991,G00990);
  eul_intern_symbol(sym_994,"dynamic-variable-ref");
  eul_intern_symbol(sym_995,"setter");
  eul_allocate_bytevector( G00993,G00992);
  eul_intern_symbol(sym_998,"<condition>");
  eul_intern_symbol(sym_999,"defclass");
  eul_allocate_bytevector( G00997,G00996);
  eul_allocate_bytevector( G001001,G001000);
  eul_allocate_bytevector( G001003,G001002);
  eul_intern_symbol(sym_1006,"dynamic-let");
  eul_allocate_bytevector( G001005,G001004);
  eul_intern_symbol(sym_1009,"catch");
  eul_intern_symbol(sym_1010,"throw");
  eul_intern_symbol(sym_1011,"defcondition");
  eul_intern_symbol(sym_1012,"dynamic-setq");
  eul_intern_symbol(sym_1013,"return-from");
  eul_intern_symbol(sym_1014,"butlast");
  eul_intern_symbol(sym_1015,"time-execution");
  eul_intern_symbol(sym_1016,"while");
  eul_intern_symbol(sym_1017,"not");
  eul_intern_symbol(sym_1018,"defglobal");
  eul_intern_symbol(sym_1019,"block");
  eul_intern_symbol(sym_1020,"last");
  eul_intern_symbol(sym_1021,"with-handler");
  eul_intern_symbol(sym_1022,"case");
  eul_allocate_bytevector( G001008,G001007);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 20; i++)
      _macros_bindings[i] = eul_nil;
  }

  _macros_bindings[ 20] = sym_915;
  _macros_bindings[ 21] = sym_916;
  _macros_bindings[ 22] = sym_917;
  _macros_bindings[ 23] = sym_918;
  _macros_bindings[ 24] = sym_919;
  _macros_bindings[ 25] = G00914;
  _macros_bindings[ 26] = str_922;
  _macros_bindings[ 27] = sym_923;
  _macros_bindings[ 28] = sym_924;
  _macros_bindings[ 29] = sym_925;
  _macros_bindings[ 30] = G00921;
  _macros_bindings[ 31] = sym_928;
  _macros_bindings[ 32] = sym_929;
  _macros_bindings[ 33] = sym_930;
  _macros_bindings[ 34] = G00927;
  _macros_bindings[ 35] = sym_933;
  _macros_bindings[ 36] = sym_934;
  _macros_bindings[ 37] = sym_935;
  _macros_bindings[ 38] = G00932;
  _macros_bindings[ 39] = sym_938;
  _macros_bindings[ 40] = sym_939;
  _macros_bindings[ 41] = sym_940;
  _macros_bindings[ 42] = G00937;
  _macros_bindings[ 43] = sym_943;
  _macros_bindings[ 44] = G00942;
  _macros_bindings[ 45] = sym_946;
  _macros_bindings[ 46] = G00945;
  _macros_bindings[ 47] = sym_949;
  _macros_bindings[ 48] = sym_950;
  _macros_bindings[ 49] = sym_951;
  _macros_bindings[ 50] = sym_952;
  _macros_bindings[ 51] = sym_953;
  _macros_bindings[ 52] = G00948;
  _macros_bindings[ 53] = G00955;
  _macros_bindings[ 54] = sym_958;
  _macros_bindings[ 55] = sym_959;
  _macros_bindings[ 56] = sym_960;
  _macros_bindings[ 57] = G00957;
  _macros_bindings[ 58] = G00962;
  _macros_bindings[ 59] = sym_965;
  _macros_bindings[ 60] = G00964;
  _macros_bindings[ 61] = str_968;
  _macros_bindings[ 62] = str_969;
  _macros_bindings[ 63] = sym_970;
  _macros_bindings[ 64] = sym_971;
  _macros_bindings[ 65] = sym_972;
  _macros_bindings[ 66] = sym_973;
  _macros_bindings[ 67] = sym_974;
  _macros_bindings[ 68] = sym_975;
  _macros_bindings[ 69] = sym_976;
  _macros_bindings[ 70] = sym_977;
  _macros_bindings[ 71] = sym_978;
  _macros_bindings[ 72] = sym_979;
  _macros_bindings[ 73] = sym_980;
  _macros_bindings[ 74] = sym_981;
  _macros_bindings[ 75] = str_982;
  _macros_bindings[ 76] = str_983;
  _macros_bindings[ 77] = str_984;
  _macros_bindings[ 78] = sym_985;
  _macros_bindings[ 79] = sym_986;
  _macros_bindings[ 80] = G00967;
  _macros_bindings[ 81] = sym_989;
  _macros_bindings[ 82] = G00988;
  _macros_bindings[ 83] = G00991;
  _macros_bindings[ 84] = sym_994;
  _macros_bindings[ 85] = sym_995;
  _macros_bindings[ 86] = G00993;
  _macros_bindings[ 87] = sym_998;
  _macros_bindings[ 88] = sym_999;
  _macros_bindings[ 89] = G00997;
  _macros_bindings[ 90] = G001001;
  _macros_bindings[ 91] = G001003;
  _macros_bindings[ 92] = sym_1006;
  _macros_bindings[ 93] = G001005;
  _macros_bindings[ 1] = eul_nil;
  _macros_bindings[ 94] = sym_1009;
  _macros_bindings[ 95] = sym_1010;
  _macros_bindings[ 96] = sym_1011;
  _macros_bindings[ 97] = sym_1012;
  _macros_bindings[ 98] = sym_1013;
  _macros_bindings[ 99] = sym_1014;
  _macros_bindings[ 100] = sym_1015;
  _macros_bindings[ 101] = sym_1016;
  _macros_bindings[ 102] = sym_1017;
  _macros_bindings[ 103] = sym_1018;
  _macros_bindings[ 104] = sym_1019;
  _macros_bindings[ 105] = sym_1020;
  _macros_bindings[ 106] = sym_1021;
  _macros_bindings[ 107] = sym_1022;
  eul_allocate_lambda( _macros_bindings[0], "initialize-_macros", 0, G001008);

  }
}


/* eof */
