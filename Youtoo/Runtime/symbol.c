/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module symbol
 **  Copyright: See file symbol.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_convert();
extern void initialize_module_compare();
extern void initialize_module_collect();
extern void initialize_module_character();
extern void initialize_module_string();
extern void initialize_module_table();
extern void initialize_module_fpi();
extern LispRef character_bindings[];
extern LispRef telos_bindings[];
extern LispRef fpi_bindings[];
extern LispRef table_bindings[];
extern LispRef compare_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef boot1_bindings[];
extern LispRef collect_bindings[];
extern LispRef convert_bindings[];
extern LispRef string_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_class_bindings[];

/* Module bindings with size 37 */
LispRef symbol_bindings[37];

/* Foreign functions */
static LispRef ff_stub_eul_init_symbol10617 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010662, res;

  POPVAL1(G0010662);
  FF_RES_CONVERT6(res,eul_init_symbol(FF_ARG_CONVERT8(G0010662)));
  return res;
}

static LispRef ff_stub_eul_init_keyword10618 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0010663, res;

  POPVAL1(G0010663);
  FF_RES_CONVERT6(res,eul_init_keyword(FF_ARG_CONVERT8(G0010663)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module symbol */
void initialize_module_symbol()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_convert();
  initialize_module_compare();
  initialize_module_collect();
  initialize_module_character();
  initialize_module_string();
  initialize_module_table();
  initialize_module_fpi();
  eul_fast_table_set(eul_modules,"symbol",(LispRef) symbol_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_10661, sym_10660, sym_10659, sym_10658, G0010657, G0010654, G0010652, G0010650, sym_10648, sym_10647, sym_10645, sym_10643, sym_10642, sym_10641, sym_10640, sym_10639, G0010638, G0010636, G0010634, G0010632, G0010630, G0010628, sym_10626, G0010625, G0010623, key_10621, G0010620;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 7 is_init: 0 index: 10 binding: (method-(converter <symbol>)) */
  static const void *G0010619[] = {I(aa,24,00,00),B(mop_class ,5),I(23,00,00,00),B(symbol ,9),I(1d,24,00,00),B(mop_gf ,2),I(3d,03,01,00)};

  /* Byte-vector with size: 23 is_init: 0 index: 11 binding: anonymous */
  static const void *G0010622[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,28),I(47,00,00,04),I(1b,23,00,00),B(symbol ,9),I(1f,04,24,00),B(mop_gf ,2),I(3d,03,04,22),I(01,32,00,00),I(00,00,00,34),I(1d,11,1f,03),I(10,1b,24,00),B(string ,13),I(24,00,00,00),B(convert ,2),I(3c,02,1f,04),I(1c,24,00,00),B(string ,11),I(3c,02,1f,03),I(1c,47,00,01),I(3d,02,07,22),I(04,45,03,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 13 binding: (method-concatenate) */
  static const void *G0010624[] = {I(43,fe,46,02),I(1c,48,00,00),I(86,1b,48,00),I(01,23,00,00),B(symbol ,12),I(23,00,00,00),B(symbol ,11),I(3b,02,48,00),I(01,47,00,00),I(24,00,00,00),B(collect ,8),I(3c,01,1d,1c),I(47,00,01,3d),I(02,04,45,04)};

  /* Byte-vector with size: 6 is_init: 0 index: 14 binding: (method-binary<) */
  static const void *G0010627[] = {I(ab,1c,82,02),I(1c,82,02,1c),I(1c,41,00,00),B(string ,17),I(22,02,82,1a),I(45,04,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 15 binding: (method-namep) */
  static const void *G0010629[] = {I(aa,87,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 16 binding: (method-namep) */
  static const void *G0010631[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 4 is_init: 0 index: 17 binding: (method-initialize) */
  static const void *G0010633[] = {I(ab,1c,1c,37),I(02,2a,1c,41),B(symbol ,8),I(45,03,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 18 binding: (method-initialize) */
  static const void *G0010635[] = {I(ab,1c,1c,37),I(02,2a,1c,41),B(symbol ,7),I(45,03,00,00)};

  eul_allocate_static_cons(cons_10646, NULL, NULL);
  eul_allocate_static_cons(cons_10644, NULL, eul_as_static(cons_10646));
  /* Byte-vector with size: 256 is_init: 0 index: 28 binding: top-level */
  static const void *G0010637[] = {I(a9,82,89,00),B(symbol ,3),I(2a,83,24,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(symbol ,19),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(symbol ,5),I(2a,24,00,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,5),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(symbol ,20),I(23,00,00,00),B(symbol ,18),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,92),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(symbol ,20),I(23,00,00,00),B(symbol ,17),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(symbol ,5),I(26,00,00,00),I(00,00,00,03),I(02,83,86,24),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(symbol ,5),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(symbol ,21),I(23,00,00,00),B(symbol ,16),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(symbol ,5),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(symbol ,5),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,39),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(symbol ,5),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(symbol ,21),I(23,00,00,00),B(symbol ,15),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(symbol ,5),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(symbol ,5),I(2a,24,00,00),B(compare ,6),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,5),I(24,00,00,00),B(mop_class ,5),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(compare ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(symbol ,22),I(23,00,00,00),B(symbol ,14),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(compare ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,17),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,39),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,17),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(symbol ,23),I(23,00,00,00),B(symbol ,13),I(3b,fe,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,17),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_class ,14),I(24,00,00,00),B(boot1 ,42),I(3c,01,83,24),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(symbol ,26),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(mop_class ,5),I(1c,1f,06,3c),I(02,2a,24,00),B(mop_class ,5),I(24,00,00,00),B(mop_class ,14),I(3c,01,2a,24),B(mop_class ,5),I(24,00,00,00),B(mop_class ,14),I(3c,01,24,00),B(mop_class ,5),I(24,00,00,00),B(mop_class ,14),I(3c,01,1b,26),I(00,00,00,03),I(02,83,24,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(mop_class ,5),I(24,00,00,00),B(mop_class ,14),I(3c,01,1b,26),I(00,00,00,04),I(02,1d,1c,24),B(boot ,8),I(3c,02,1f,05),I(1f,05,23,00),B(symbol ,27),I(23,00,00,00),B(symbol ,10),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,08),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,36,45),I(36,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 29 binding: keyword? */
  static const void *G0010649[] = {I(aa,04,24,00),B(mop_class ,92),I(50,45,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 30 binding: symbol-exists? */
  static const void *G0010651[] = {I(aa,28,11,1b),I(1d,24,00,00),B(table ,7),I(3d,02,02,45),I(02,00,00,00)};

  eul_allocate_static_string(str_10655, "G00", 3);
  /* Byte-vector with size: 20 is_init: 0 index: 32 binding: gensym */
  static const void *G0010653[] = {I(a8,1b,34,00),I(00,00,00,0e),I(1b,10,32,00),I(00,00,00,0e),I(23,00,00,00),B(symbol ,31),I(24,00,00,00),B(symbol ,3),I(41,00,00,00),B(fpi ,7),I(22,01,1c,1c),I(24,00,00,00),B(string ,11),I(3c,02,41,00),B(boot1 ,56),I(22,01,24,00),B(symbol ,3),I(2b,1b,89,00),B(symbol ,3),I(2a,1c,45,05)};

  /* Byte-vector with size: 70 is_init: 1 index: 0 binding: initialize-symbol */
  static const void *G0010656[] = {I(87,25,00,00),B(symbol ,1),I(24,00,00,00),B(fpi ,1),I(3e,0b,24,00),B(fpi ,0),I(3c,00,21,01),I(24,00,00,00),B(table ,1),I(3e,0b,24,00),B(table ,0),I(3c,00,21,01),I(24,00,00,00),B(string ,1),I(3e,0b,24,00),B(string ,0),I(3c,00,21,01),I(24,00,00,00),B(character ,1),I(3e,0b,24,00),B(character ,0),I(3c,00,21,01),I(24,00,00,00),B(collect ,1),I(3e,0b,24,00),B(collect ,0),I(3c,00,21,01),I(24,00,00,00),B(compare ,1),I(3e,0b,24,00),B(compare ,0),I(3c,00,21,01),I(24,00,00,00),B(convert ,1),I(3e,0b,24,00),B(convert ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(symbol ,33),I(23,00,00,00),B(symbol ,32),I(3b,ff,25,00),B(symbol ,6),I(86,25,00,00),B(symbol ,5),I(23,00,00,00),B(symbol ,34),I(23,00,00,00),B(symbol ,30),I(3b,01,25,00),B(symbol ,4),I(86,25,00,00),B(symbol ,3),I(23,00,00,00),B(symbol ,35),I(23,00,00,00),B(symbol ,29),I(3b,01,25,00),B(symbol ,2),I(23,00,00,00),B(symbol ,36),I(23,00,00,00),B(symbol ,28),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_intern_keyword(key_10621,"name");
  eul_allocate_bytevector( G0010620,G0010619);
  eul_allocate_bytevector( G0010623,G0010622);
  eul_intern_symbol(sym_10626,"anonymous");
  eul_allocate_bytevector( G0010625,G0010624);
  eul_allocate_bytevector( G0010628,G0010627);
  eul_allocate_bytevector( G0010630,G0010629);
  eul_allocate_bytevector( G0010632,G0010631);
  eul_allocate_bytevector( G0010634,G0010633);
  eul_allocate_bytevector( G0010636,G0010635);
  eul_intern_symbol(sym_10639,"namep");
  eul_intern_symbol(sym_10640,"(method initialize)");
  eul_intern_symbol(sym_10641,"(method namep)");
  eul_intern_symbol(sym_10642,"(method binary<)");
  eul_intern_symbol(sym_10643,"(method concatenate)");
  eul_intern_symbol(sym_10645,"converter");
  eul_intern_symbol(sym_10647,"<symbol>");
  object_class(cons_10646) = eul_static_cons_class;
  eul_car(cons_10646) = sym_10647;
  eul_cdr(cons_10646) = eul_nil;
  object_class(cons_10644) = eul_static_cons_class;
  eul_car(cons_10644) = sym_10645;
  eul_intern_symbol(sym_10648,"(method (converter <symbol>))");
  eul_allocate_bytevector( G0010638,G0010637);
  eul_allocate_bytevector( G0010650,G0010649);
  eul_allocate_bytevector( G0010652,G0010651);
  object_class(str_10655) = eul_static_string_class;
  eul_allocate_bytevector( G0010654,G0010653);
  eul_intern_symbol(sym_10658,"gensym");
  eul_intern_symbol(sym_10659,"symbol-exists?");
  eul_intern_symbol(sym_10660,"keyword?");
  eul_intern_symbol(sym_10661,"top-level");
  eul_allocate_bytevector( G0010657,G0010656);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 7; i++)
      symbol_bindings[i] = eul_nil;
  }

  symbol_bindings[ 7] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_init_symbol10617;
  symbol_bindings[ 8] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_init_keyword10618;
  symbol_bindings[ 9] = key_10621;
  symbol_bindings[ 10] = G0010620;
  symbol_bindings[ 11] = G0010623;
  symbol_bindings[ 12] = sym_10626;
  symbol_bindings[ 13] = G0010625;
  symbol_bindings[ 14] = G0010628;
  symbol_bindings[ 15] = G0010630;
  symbol_bindings[ 16] = G0010632;
  symbol_bindings[ 17] = G0010634;
  symbol_bindings[ 18] = G0010636;
  symbol_bindings[ 19] = sym_10639;
  symbol_bindings[ 20] = sym_10640;
  symbol_bindings[ 21] = sym_10641;
  symbol_bindings[ 22] = sym_10642;
  symbol_bindings[ 23] = sym_10643;
  symbol_bindings[ 24] = sym_10645;
  symbol_bindings[ 25] = sym_10647;
  symbol_bindings[ 26] = cons_10644;
  symbol_bindings[ 27] = sym_10648;
  symbol_bindings[ 28] = G0010638;
  symbol_bindings[ 29] = G0010650;
  symbol_bindings[ 30] = G0010652;
  symbol_bindings[ 31] = str_10655;
  symbol_bindings[ 32] = G0010654;
  symbol_bindings[ 1] = eul_nil;
  symbol_bindings[ 33] = sym_10658;
  symbol_bindings[ 34] = sym_10659;
  symbol_bindings[ 35] = sym_10660;
  symbol_bindings[ 36] = sym_10661;
  eul_allocate_lambda( symbol_bindings[0], "initialize-symbol", 0, G0010657);

  }
}


/* eof */
