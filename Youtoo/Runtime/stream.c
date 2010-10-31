/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module stream
 **  Copyright: See file stream.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_stream1();
extern void initialize_module_stream2();
extern void initialize_module_socket();
extern void initialize_module_dynamic();
extern void initialize_module_condition();
extern void initialize_module_lock();
extern void initialize_module_convert();
extern void initialize_module_collect();
extern void initialize_module_list();
extern void initialize_module_string();
extern void initialize_module_fpi();
extern LispRef fpi_bindings[];
extern LispRef list_bindings[];
extern LispRef condition_bindings[];
extern LispRef telos_bindings[];
extern LispRef convert_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef socket_bindings[];
extern LispRef dynamic_bindings[];
extern LispRef lock_bindings[];
extern LispRef collect_bindings[];
extern LispRef stream1_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef boot1_bindings[];
extern LispRef string_bindings[];
extern LispRef boot_bindings[];
extern LispRef stream2_bindings[];

/* Module bindings with size 111 */
LispRef stream_bindings[111];

/* Foreign functions */
static LispRef ff_stub_eul_file_lookup6459 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G006591, G006592, res;

  POPVAL1(G006592);
  POPVAL1(G006591);
  FF_RES_CONVERT6(res,eul_file_lookup(FF_ARG_CONVERT3(G006591), FF_ARG_CONVERT8(G006592)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module stream */
void initialize_module_stream()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_stream1();
  initialize_module_stream2();
  initialize_module_socket();
  initialize_module_dynamic();
  initialize_module_condition();
  initialize_module_lock();
  initialize_module_convert();
  initialize_module_collect();
  initialize_module_list();
  initialize_module_string();
  initialize_module_fpi();
  eul_fast_table_set(eul_modules,"stream",(LispRef) stream_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_6590, sym_6589, sym_6588, sym_6587, sym_6586, sym_6585, sym_6584, sym_6583, sym_6582, sym_6581, sym_6580, sym_6579, sym_6578, sym_6577, sym_6576, sym_6575, sym_6574, sym_6573, sym_6572, sym_6571, sym_6570, G006569, G006567, G006565, G006563, G006561, G006559, G006557, G006555, G006553, G006551, G006549, G006547, G006545, G006543, G006539, G006537, G006535, G006533, G006530, G006528, G006526, G006523, G006521, G006518, G006516, G006514, sym_6512, sym_6511, sym_6510, sym_6509, sym_6508, sym_6507, sym_6506, G006505, sym_6503, sym_6502, sym_6501, G006500, G006498, G006496, G006494, G006492, sym_6490, sym_6489, G006488, G006486, G006484, G006482, G006480, G006478, G006476, key_6474, G006473, key_6471, G006469, G006467, G006465, G006463, G006461;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 33 is_init: 0 index: 26 binding: (method-generic-read) */
  static const void *G006460[] = {I(43,03,1d,8a),I(04,24,00,00),B(stream2 ,20),I(08,1b,82,24),B(stream2 ,22),I(08,1c,8a,03),I(24,00,00,00),B(stream2 ,22),I(08,1b,06,1d),I(1c,19,1b,44),I(0d,1f,07,24),B(stream2 ,2),I(3c,01,2d,36),I(02,86,1b,44),I(15,1f,07,44),I(0d,1f,08,24),B(stream2 ,18),I(3d,01,09,36),I(03,1f,06,36),I(33,1f,05,82),I(24,00,00,00),B(stream2 ,22),I(08,1f,06,8a),I(03,24,00,00),B(stream2 ,22),I(08,1b,1d,0b),I(1d,2b,1f,09),I(1c,1c,82,1d),I(24,00,00,00),B(stream2 ,22),I(09,22,02,2a),I(1c,22,04,45),I(09,00,00,00)};

  /* Byte-vector with size: 35 is_init: 0 index: 27 binding: (method-generic-read) */
  static const void *G006462[] = {I(43,03,1d,8a),I(04,24,00,00),B(stream2 ,20),I(08,1b,82,24),B(stream2 ,22),I(08,2d,1b,44),I(0d,1f,04,24),B(stream2 ,2),I(3c,01,2d,36),I(02,86,1b,44),I(15,1f,04,44),I(0d,1f,05,24),B(stream2 ,18),I(3d,01,06,36),I(03,1f,03,36),I(4b,1d,82,24),B(stream2 ,22),I(08,1f,03,83),I(24,00,00,00),B(stream2 ,22),I(08,2b,1c,2c),I(1f,05,1c,1c),I(82,1d,24,00),B(stream2 ,22),I(09,22,02,2a),I(1f,05,1d,1c),I(83,1d,24,00),B(stream2 ,22),I(09,22,02,2a),I(1f,05,8a,03),I(24,00,00,00),B(stream2 ,22),I(08,1b,1f,03),I(0b,22,04,45),I(06,00,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 28 binding: (method-generic-read) */
  static const void *G006464[] = {I(43,03,1d,8a),I(03,24,00,00),B(stream2 ,20),I(08,1f,03,1f),I(03,1f,03,1f),I(03,3d,03,04),I(45,04,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 29 binding: (method-end-of-stream) */
  static const void *G006466[] = {I(aa,1b,24,00),B(stream2 ,39),I(3c,01,2a,38),I(01,00,45,01)};

  eul_allocate_static_string(str_6470, "end of stream", 13);
  /* Byte-vector with size: 9 is_init: 0 index: 32 binding: (method-end-of-stream) */
  static const void *G006468[] = {I(aa,24,00,00),B(stream2 ,6),I(23,00,00,00),B(stream ,30),I(23,00,00,00),B(stream ,31),I(1f,03,24,00),B(boot ,13),I(3d,04,01,00)};

  /* Byte-vector with size: 42 is_init: 0 index: 34 binding: (method-flush-buffer) */
  static const void *G006472[] = {I(aa,1b,8a,05),I(24,00,00,00),B(stream2 ,20),I(08,1b,83,24),B(stream2 ,22),I(08,1c,8a,03),I(24,00,00,00),B(stream2 ,22),I(08,1b,82,1f),I(03,24,00,00),B(string ,6),I(3c,03,1f,04),I(82,24,00,00),B(stream2 ,45),I(08,1c,24,00),B(boot1 ,26),I(3c,01,1c,1c),I(24,00,00,00),B(boot ,8),I(3c,02,1f,07),I(1c,1c,82,1d),I(24,00,00,00),B(stream2 ,45),I(09,22,02,2a),I(1f,06,82,1c),I(83,1d,24,00),B(stream2 ,22),I(09,22,02,2a),I(1f,06,84,24),B(stream2 ,22),I(08,24,00,00),B(string ,13),I(23,00,00,00),B(stream ,33),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,1f,08),I(1c,1c,8a,03),I(1d,24,00,00),B(stream2 ,22),I(09,22,02,2a),I(1f,09,45,0a)};

  /* Byte-vector with size: 19 is_init: 0 index: 35 binding: (method-flush-buffer) */
  static const void *G006475[] = {I(aa,1b,8a,05),I(24,00,00,00),B(stream2 ,20),I(08,1b,82,24),B(stream2 ,3),I(08,1c,8a,03),I(24,00,00,00),B(stream2 ,22),I(08,1d,83,24),B(stream2 ,22),I(08,41,00,00),B(stream1 ,18),I(22,03,85,19),I(1b,44,04,86),I(36,10,1c,82),I(1c,83,1d,24),B(stream2 ,22),I(09,22,02,2a),I(1d,45,03,00)};

  /* Byte-vector with size: 27 is_init: 0 index: 36 binding: (method-flush-buffer) */
  static const void *G006477[] = {I(aa,1b,8a,04),I(24,00,00,00),B(stream2 ,20),I(08,1c,8a,05),I(24,00,00,00),B(stream2 ,20),I(08,1c,8a,03),I(24,00,00,00),B(stream2 ,22),I(08,1c,8a,03),I(24,00,00,00),B(stream2 ,22),I(08,24,00,00),B(collect ,25),I(3c,01,1c,1c),I(24,00,00,00),B(boot ,8),I(3c,02,1f,04),I(1c,1c,8a,03),I(1d,24,00,00),B(stream2 ,22),I(09,22,02,2a),I(1f,03,86,1c),I(8a,03,1d,24),B(stream2 ,22),I(09,22,02,2a),I(87,45,06,00)};

  /* Byte-vector with size: 23 is_init: 0 index: 37 binding: (method-fill-buffer) */
  static const void *G006479[] = {I(aa,1b,82,24),B(stream2 ,45),I(08,1b,12,1b),I(44,04,82,36),I(47,1d,8a,04),I(24,00,00,00),B(stream2 ,20),I(08,1d,11,1f),I(04,1c,1c,82),I(1d,24,00,00),B(stream2 ,45),I(09,22,02,2a),I(1f,03,10,1d),I(1c,1c,8a,03),I(1d,24,00,00),B(stream2 ,22),I(09,22,02,2a),I(1d,82,1c,82),I(1d,24,00,00),B(stream2 ,22),I(09,22,02,2a),I(83,22,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 24 is_init: 0 index: 38 binding: (method-fill-buffer) */
  static const void *G006481[] = {I(aa,8a,04,24),B(stream2 ,20),I(08,1b,84,24),B(stream2 ,22),I(08,1c,82,24),B(stream2 ,3),I(08,1d,8a,03),I(24,00,00,00),B(stream2 ,22),I(08,1c,1c,1f),I(04,41,00,00),B(stream1 ,27),I(22,03,1f,04),I(1c,1c,82,1d),I(24,00,00,00),B(stream2 ,22),I(09,22,02,2a),I(1f,03,84,17),I(1b,2c,1f,06),I(1c,1c,83,1d),I(24,00,00,00),B(stream2 ,22),I(09,22,02,2a),I(1d,45,07,00)};

  /* Byte-vector with size: 24 is_init: 0 index: 39 binding: (method-fill-buffer) */
  static const void *G006483[] = {I(aa,1b,8a,04),I(24,00,00,00),B(stream2 ,20),I(08,1c,8a,05),I(24,00,00,00),B(stream2 ,20),I(08,1b,8a,03),I(24,00,00,00),B(stream2 ,22),I(08,1b,12,1b),I(44,04,82,36),I(2f,1c,24,00),B(boot ,28),I(3c,01,1f,04),I(1c,1c,8a,03),I(1d,24,00,00),B(stream2 ,22),I(09,22,02,2a),I(1f,03,86,1c),I(8a,03,1d,24),B(stream2 ,22),I(09,22,02,2a),I(83,22,01,45),I(05,00,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 40 binding: anonymous */
  static const void *G006485[] = {I(a9,47,00,00),I(24,00,00,00),B(lock ,4),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3d,01,00,00)};

  /* Byte-vector with size: 49 is_init: 0 index: 43 binding: (method-disconnect) */
  static const void *G006487[] = {I(aa,46,01,1b),I(83,24,00,00),B(socket ,8),I(08,1b,41,00),B(stream1 ,16),I(22,01,2d,1b),I(44,83,24,00),B(stream2 ,11),I(1b,48,00,00),I(23,00,00,00),B(stream ,41),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(stream ,42),I(23,00,00,00),B(stream ,40),I(3b,00,1c,0f),I(23,00,00,00),B(stream ,41),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,47),I(00,00,24,00),B(lock ,3),I(3c,01,2a,1f),I(05,24,00,00),B(stream2 ,36),I(24,00,00,00),B(boot ,18),I(3c,02,1b,89),B(stream2 ,36),I(47,00,00,24),B(lock ,4),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3c,01,2a,1b),I(22,05,36,26),I(24,00,00,00),B(stream1 ,6),I(3c,00,24,00),B(stream2 ,38),I(1c,23,00,00),B(stream ,31),I(1f,06,24,00),B(boot ,13),I(3d,04,04,22),I(01,45,03,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 44 binding: anonymous */
  static const void *G006491[] = {I(a9,47,00,00),I(24,00,00,00),B(lock ,4),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3d,01,00,00)};

  /* Byte-vector with size: 79 is_init: 0 index: 45 binding: (method-disconnect) */
  static const void *G006493[] = {I(aa,46,02,1b),I(8a,05,24,00),B(stream2 ,20),I(08,24,00,00),B(stream2 ,21),I(1c,24,00,00),B(stream2 ,24),I(3c,01,1b,44),I(4c,1f,03,24),B(stream2 ,23),I(3c,01,2a,1d),I(82,24,00,00),B(stream2 ,3),I(08,1b,41,00),B(stream1 ,16),I(22,01,2d,1b),I(44,04,86,36),I(24,24,00,00),B(stream1 ,6),I(3c,00,24,00),B(stream2 ,38),I(1c,23,00,00),B(stream ,31),I(1f,09,24,00),B(boot ,13),I(3c,04,22,01),I(22,02,36,02),I(86,2a,1c,24),B(stream2 ,24),I(3c,01,1b,44),I(40,1d,82,24),B(stream2 ,3),I(08,1b,41,00),B(stream1 ,16),I(22,01,2d,1b),I(44,04,86,36),I(24,24,00,00),B(stream1 ,6),I(3c,00,24,00),B(stream2 ,38),I(1c,23,00,00),B(stream ,31),I(1f,0a,24,00),B(boot ,13),I(3c,04,22,01),I(22,02,36,02),I(86,2a,24,00),B(stream2 ,11),I(1b,48,00,00),I(23,00,00,00),B(stream ,41),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(stream ,42),I(23,00,00,00),B(stream ,44),I(3b,00,1c,0f),I(23,00,00,00),B(stream ,41),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,47),I(00,00,24,00),B(lock ,3),I(3c,01,2a,1f),I(07,24,00,00),B(stream2 ,36),I(24,00,00,00),B(boot ,18),I(3c,02,1b,89),B(stream2 ,36),I(47,00,00,24),B(lock ,4),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3c,01,2a,38),I(01,09,45,0a)};

  /* Byte-vector with size: 9 is_init: 0 index: 46 binding: (method-disconnect) */
  static const void *G006495[] = {I(aa,1b,86,1c),I(8a,04,1d,24),B(stream2 ,20),I(09,22,02,2a),I(1b,86,1c,8a),I(05,1d,24,00),B(stream2 ,20),I(09,22,02,2a),I(86,45,01,00)};

  /* Byte-vector with size: 22 is_init: 0 index: 47 binding: (method-reconnect) */
  static const void *G006497[] = {I(ab,1c,8a,04),I(24,00,00,00),B(stream2 ,20),I(08,1c,1c,1c),I(8a,04,1d,24),B(stream2 ,20),I(09,22,02,2a),I(1d,86,1c,8a),I(04,1d,24,00),B(stream2 ,20),I(09,22,02,2a),I(1d,8a,05,24),B(stream2 ,20),I(08,1d,1c,1c),I(8a,05,1d,24),B(stream2 ,20),I(09,22,02,2a),I(1f,03,86,1c),I(8a,05,1d,24),B(stream2 ,20),I(09,22,02,2a),I(86,45,04,00)};

  /* Byte-vector with size: 39 is_init: 0 index: 51 binding: (method-generic-connect) */
  static const void *G006499[] = {I(43,03,1d,82),I(24,00,00,00),B(stream2 ,20),I(08,1b,23,00),B(stream ,48),I(50,1b,44,16),I(1f,04,1f,04),I(1c,8a,04,1d),I(24,00,00,00),B(stream2 ,20),I(09,22,02,36),I(6b,1c,23,00),B(stream ,49),I(50,1b,44,16),I(1f,05,1f,05),I(1c,8a,05,1d),I(24,00,00,00),B(stream2 ,20),I(09,22,02,36),I(49,1d,23,00),B(stream ,50),I(50,1b,44,16),I(1f,06,1f,06),I(1c,8a,05,1d),I(24,00,00,00),B(stream2 ,20),I(09,22,02,36),I(27,1f,06,1f),I(06,1c,8a,04),I(1d,24,00,00),B(stream2 ,20),I(09,22,02,2a),I(1f,06,1f,06),I(1c,8a,05,1d),I(24,00,00,00),B(stream2 ,20),I(09,22,02,22),I(01,22,01,2a),I(86,45,05,00)};

  /* Byte-vector with size: 428 is_init: 0 index: 59 binding: top-level */
  static const void *G006504[] = {I(a9,27,0a,89),B(stream ,15),I(2a,8a,15,89),B(stream ,22),I(2a,8a,19,89),B(stream ,3),I(2a,24,00,00),B(stream2 ,44),I(8a,03,02,8a),I(03,24,00,00),B(stream2 ,20),I(24,00,00,00),B(stream2 ,20),I(86,24,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,44),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(stream ,52),I(23,00,00,00),B(stream ,51),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,44),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,17),I(8a,03,02,84),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,17),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(stream ,53),I(23,00,00,00),B(stream ,47),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,17),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,39),I(8a,03,02,83),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,39),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(stream ,54),I(23,00,00,00),B(stream ,46),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,39),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,39),I(8a,03,02,83),I(24,00,00,00),B(stream2 ,4),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,39),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(stream ,54),I(23,00,00,00),B(stream ,45),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,39),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,39),I(8a,03,02,83),I(24,00,00,00),B(socket ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,39),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(stream ,54),I(23,00,00,00),B(stream ,43),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,39),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,2),I(8a,03,02,83),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,2),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(stream ,55),I(23,00,00,00),B(stream ,39),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,2),I(8a,03,02,83),I(24,00,00,00),B(stream2 ,4),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,2),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(stream ,55),I(23,00,00,00),B(stream ,38),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,2),I(8a,03,02,83),I(24,00,00,00),B(stream2 ,45),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,2),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(stream ,55),I(23,00,00,00),B(stream ,37),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,23),I(8a,03,02,83),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,23),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(stream ,56),I(23,00,00,00),B(stream ,36),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,23),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,23),I(8a,03,02,83),I(24,00,00,00),B(stream2 ,4),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,23),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(stream ,56),I(23,00,00,00),B(stream ,35),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,23),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,23),I(8a,03,02,83),I(24,00,00,00),B(stream2 ,45),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,23),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(stream ,56),I(23,00,00,00),B(stream ,34),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,23),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,18),I(8a,03,02,83),I(24,00,00,00),B(stream2 ,20),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,18),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(stream ,57),I(23,00,00,00),B(stream ,32),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,18),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,18),I(8a,03,02,83),I(24,00,00,00),B(stream2 ,4),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,18),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(stream ,57),I(23,00,00,00),B(stream ,29),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,18),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,43),I(8a,03,02,8a),I(03,24,00,00),B(stream2 ,20),I(86,86,24,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,43),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(stream ,58),I(23,00,00,00),B(stream ,28),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,43),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,43),I(8a,03,02,8a),I(03,24,00,00),B(stream2 ,4),I(86,86,24,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,43),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(stream ,58),I(23,00,00,00),B(stream ,27),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,43),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(stream2 ,43),I(8a,03,02,8a),I(03,24,00,00),B(stream2 ,45),I(86,86,24,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(stream2 ,43),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(stream ,58),I(23,00,00,00),B(stream ,26),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(stream2 ,43),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,60,45),I(60,00,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 60 binding: flush */
  static const void *G006513[] = {I(a9,24,00,00),B(stream2 ,34),I(24,00,00,00),B(stream2 ,23),I(3d,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 61 binding: swrite */
  static const void *G006515[] = {I(a7,24,00,00),B(stream ,9),I(3d,02,00,00)};

  eul_allocate_static_string(str_6519, "0x%08X", 6);
  /* Byte-vector with size: 5 is_init: 0 index: 63 binding: print-address */
  static const void *G006517[] = {I(ab,1b,23,00),B(stream ,62),I(1f,03,24,00),B(stream ,21),I(3d,03,02,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 64 binding: sprintf */
  static const void *G006520[] = {I(ab,24,00,00),B(string ,13),I(23,00,00,00),B(stream ,33),I(8a,19,24,00),B(mop_gf ,2),I(3c,03,1b,82),I(1f,04,1f,04),I(41,00,00,00),B(stream1 ,19),I(22,04,1c,82),I(1d,24,00,00),B(string ,6),I(3d,03,04,45),I(04,00,00,00)};

  eul_allocate_static_string(str_6524, "#<C: ", 5);
  /* Byte-vector with size: 21 is_init: 0 index: 66 binding: anonymous */
  static const void *G006522[] = {I(aa,1b,24,00),B(boot1 ,39),I(3c,01,1b,44),I(11,1c,47,00),I(00,24,00,00),B(stream2 ,30),I(3d,02,02,36),I(33,23,00,00),B(stream ,65),I(8a,05,47,00),I(00,24,00,00),B(stream ,11),I(3c,03,2a,1c),I(47,00,00,24),B(stream ,5),I(3c,02,2a,47),I(00,00,27,3e),I(24,00,00,00),B(stream ,23),I(3d,02,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 67 binding: sprint-all */
  static const void *G006525[] = {I(ab,46,01,1c),I(48,00,00,1b),I(44,1b,23,00),B(stream ,42),I(23,00,00,00),B(stream ,66),I(3b,01,1c,24),B(boot ,17),I(3c,02,36,02),I(86,2a,47,00),I(00,45,02,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 68 binding: sprint */
  static const void *G006527[] = {I(a7,24,00,00),B(stream ,7),I(3d,02,00,00)};

  eul_allocate_static_string(str_6531, "#<C: ", 5);
  /* Byte-vector with size: 21 is_init: 0 index: 70 binding: anonymous */
  static const void *G006529[] = {I(aa,1b,24,00),B(boot1 ,39),I(3c,01,1b,44),I(11,1c,47,00),I(00,24,00,00),B(stream2 ,27),I(3d,02,02,36),I(33,23,00,00),B(stream ,69),I(8a,05,47,00),I(00,24,00,00),B(stream ,11),I(3c,03,2a,1c),I(47,00,00,24),B(stream ,5),I(3c,02,2a,47),I(00,00,27,3e),I(24,00,00,00),B(stream ,23),I(3d,02,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 71 binding: swrite-all */
  static const void *G006532[] = {I(ab,46,01,1c),I(48,00,00,1b),I(44,1b,23,00),B(stream ,42),I(23,00,00,00),B(stream ,70),I(3b,01,1c,24),B(boot ,17),I(3c,02,36,02),I(86,2a,47,00),I(00,45,02,00)};

  /* Byte-vector with size: 30 is_init: 0 index: 72 binding: anonymous */
  static const void *G006534[] = {I(aa,1b,47,00),I(02,1a,1b,44),I(6b,47,00,04),I(83,24,00,00),B(stream2 ,22),I(08,1b,2b,47),I(00,04,8a,03),I(24,00,00,00),B(stream2 ,22),I(08,1b,1f,03),I(47,00,01,0c),I(2a,47,00,04),I(1d,1c,83,1d),I(24,00,00,00),B(stream2 ,22),I(09,22,02,2a),I(47,00,01,27),I(0a,51,1b,44),I(04,1b,36,07),I(1d,47,00,05),I(1a,12,1b,44),I(10,47,00,00),I(24,00,00,00),B(stream2 ,23),I(3c,01,36,02),I(86,2a,1f,06),I(2b,47,00,03),I(3d,01,07,22),I(05,36,02,86),I(45,02,00,00)};

  /* Byte-vector with size: 21 is_init: 0 index: 73 binding: sprint-char* */
  static const void *G006536[] = {I(43,03,46,07),I(1d,48,00,00),I(1c,48,00,01),I(1b,48,00,02),I(47,00,00,8a),I(05,24,00,00),B(stream2 ,20),I(08,1b,48,00),I(04,47,00,04),I(84,24,00,00),B(stream2 ,22),I(08,1b,48,00),I(05,86,1b,48),I(00,03,23,00),B(stream ,42),I(23,00,00,00),B(stream ,72),I(3b,01,48,00),I(03,82,47,00),I(03,3d,01,06),I(45,06,00,00)};

  eul_allocate_static_string(str_6540, "%s", 2);
  eul_allocate_static_string(str_6541, "%s", 2);
  /* Byte-vector with size: 42 is_init: 0 index: 76 binding: anonymous */
  static const void *G006538[] = {I(aa,47,00,01),I(1c,15,82,1c),I(1a,1b,44,97),I(47,00,02,1d),I(24,00,00,00),B(stream ,24),I(3c,02,47,00),I(04,83,24,00),B(stream2 ,22),I(08,47,00,04),I(8a,03,24,00),B(stream2 ,22),I(08,1d,44,2e),I(1b,1d,1f,06),I(1f,08,23,00),B(stream ,74),I(47,00,00,41),B(stream1 ,20),I(22,06,2a,1c),I(1f,05,14,47),I(00,04,1c,1c),I(83,1d,24,00),B(stream2 ,22),I(09,22,03,36),I(3e,1b,1d,47),I(00,05,1f,08),I(23,00,00,00),B(stream ,75),I(47,00,00,41),B(stream1 ,20),I(22,06,2a,1c),I(47,00,05,14),I(47,00,04,1c),I(1c,83,1d,24),B(stream2 ,22),I(09,22,02,2a),I(1f,06,47,00),I(05,14,47,00),I(03,3d,01,07),I(22,01,22,03),I(36,02,86,45),I(03,00,00,00)};

  /* Byte-vector with size: 29 is_init: 0 index: 77 binding: print-string */
  static const void *G006542[] = {I(43,03,46,07),I(1d,48,00,00),I(1c,48,00,01),I(1b,48,00,02),I(47,00,02,8a),I(05,24,00,00),B(stream2 ,20),I(08,1b,48,00),I(04,47,00,04),I(84,24,00,00),B(stream2 ,22),I(08,2c,1b,48),I(00,05,86,1b),I(48,00,03,23),B(stream ,42),I(23,00,00,00),B(stream ,76),I(3b,01,48,00),I(03,82,47,00),I(03,3c,01,2a),I(47,00,01,2c),I(47,00,00,1c),I(0b,27,0a,51),I(1b,44,0e,47),I(00,02,24,00),B(stream2 ,23),I(3c,01,36,02),I(86,2a,47,00),I(00,45,08,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 78 binding: sprint-char */
  static const void *G006544[] = {I(43,fd,1b,44),I(17,1b,10,1f),I(03,1f,03,1d),I(24,00,00,00),B(stream ,10),I(3d,03,04,22),I(01,36,0d,1d),I(1d,24,00,00),B(stream ,23),I(3d,02,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 79 binding: print */
  static const void *G006546[] = {I(a8,24,00,00),B(stream2 ,34),I(1c,24,00,00),B(stream ,7),I(3d,02,01,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 80 binding: print-char */
  static const void *G006548[] = {I(a7,1b,44,18),I(1b,10,24,00),B(stream2 ,34),I(1f,03,1d,24),B(stream ,10),I(3d,03,03,22),I(01,36,11,24),B(stream2 ,34),I(1d,24,00,00),B(stream ,23),I(3d,02,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 81 binding: sflush */
  static const void *G006550[] = {I(aa,24,00,00),B(stream2 ,23),I(3d,01,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 82 binding: write */
  static const void *G006552[] = {I(a8,24,00,00),B(stream2 ,34),I(1c,24,00,00),B(stream ,9),I(3d,02,01,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 83 binding: anonymous */
  static const void *G006554[] = {I(aa,1b,10,1b),I(47,00,01,47),I(00,00,3c,02),I(2a,1c,11,7a),I(1b,44,1b,47),I(00,01,27,20),I(24,00,00,00),B(stream ,23),I(3c,02,2a,1d),I(11,47,00,02),I(3d,01,03,36),I(03,1d,11,45),I(03,00,00,00)};

  /* Byte-vector with size: 12 is_init: 0 index: 84 binding: output-list-contents */
  static const void *G006556[] = {I(43,03,46,03),I(1c,48,00,00),I(1b,48,00,01),I(86,1b,48,00),I(02,23,00,00),B(stream ,42),I(23,00,00,00),B(stream ,83),I(3b,01,48,00),I(02,1f,03,47),I(00,02,3d,01),I(04,45,04,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 85 binding: file-lookup */
  static const void *G006558[] = {I(a7,1c,24,00),B(string ,13),I(24,00,00,00),B(convert ,2),I(3c,02,1b,1d),I(41,00,00,00),B(stream ,25),I(45,05,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 86 binding: connect */
  static const void *G006560[] = {I(43,fd,24,00),B(stream2 ,44),I(3d,03,00,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 87 binding: fprintf */
  static const void *G006562[] = {I(43,03,24,00),B(string ,13),I(23,00,00,00),B(stream ,33),I(8a,19,24,00),B(mop_gf ,2),I(3c,03,1b,82),I(1f,04,1f,04),I(41,00,00,00),B(stream1 ,19),I(22,04,1c,82),I(1d,24,00,00),B(string ,6),I(3c,03,1b,1d),I(1f,07,24,00),B(stream ,11),I(3d,03,06,45),I(06,00,00,00)};

  /* Byte-vector with size: 26 is_init: 0 index: 88 binding: sprint-one-char */
  static const void *G006564[] = {I(ab,1c,8a,05),I(24,00,00,00),B(stream2 ,20),I(08,1b,83,24),B(stream2 ,22),I(08,1b,2b,1d),I(84,24,00,00),B(stream2 ,22),I(08,1f,03,8a),I(03,24,00,00),B(stream2 ,22),I(08,1b,1f,04),I(1f,07,0c,2a),I(1f,04,1f,03),I(1c,83,1d,24),B(stream2 ,22),I(09,22,02,2a),I(1f,05,27,0a),I(51,1b,44,04),I(1b,36,07,1f),I(03,1f,03,1a),I(12,1b,44,0e),I(1f,08,24,00),B(stream2 ,23),I(3d,01,09,36),I(02,86,45,09)};

  /* Byte-vector with size: 16 is_init: 0 index: 89 binding: make-space */
  static const void *G006566[] = {I(ab,1c,8a,05),I(24,00,00,00),B(stream2 ,20),I(08,1b,84,24),B(stream2 ,22),I(08,1c,83,24),B(stream2 ,22),I(08,1c,1c,15),I(1f,04,1c,1a),I(1b,44,04,87),I(36,13,1f,06),I(24,00,00,00),B(stream2 ,23),I(3c,01,2a,1f),I(05,1f,04,1a),I(45,07,00,00)};

  /* Byte-vector with size: 188 is_init: 1 index: 0 binding: initialize-stream */
  static const void *G006568[] = {I(87,25,00,00),B(stream ,1),I(24,00,00,00),B(fpi ,1),I(3e,0b,24,00),B(fpi ,0),I(3c,00,21,01),I(24,00,00,00),B(string ,1),I(3e,0b,24,00),B(string ,0),I(3c,00,21,01),I(24,00,00,00),B(list ,1),I(3e,0b,24,00),B(list ,0),I(3c,00,21,01),I(24,00,00,00),B(collect ,1),I(3e,0b,24,00),B(collect ,0),I(3c,00,21,01),I(24,00,00,00),B(convert ,1),I(3e,0b,24,00),B(convert ,0),I(3c,00,21,01),I(24,00,00,00),B(lock ,1),I(3e,0b,24,00),B(lock ,0),I(3c,00,21,01),I(24,00,00,00),B(condition ,1),I(3e,0b,24,00),B(condition ,0),I(3c,00,21,01),I(24,00,00,00),B(dynamic ,1),I(3e,0b,24,00),B(dynamic ,0),I(3c,00,21,01),I(24,00,00,00),B(socket ,1),I(3e,0b,24,00),B(socket ,0),I(3c,00,21,01),I(24,00,00,00),B(stream2 ,1),I(3e,0b,24,00),B(stream2 ,0),I(3c,00,21,01),I(24,00,00,00),B(stream1 ,1),I(3e,0b,24,00),B(stream1 ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(stream ,90),I(23,00,00,00),B(stream ,89),I(3b,02,25,00),B(stream ,24),I(23,00,00,00),B(stream ,91),I(23,00,00,00),B(stream ,88),I(3b,02,25,00),B(stream ,23),I(23,00,00,00),B(stream ,92),I(23,00,00,00),B(stream ,87),I(3b,03,25,00),B(stream ,21),I(23,00,00,00),B(stream ,93),I(23,00,00,00),B(stream ,86),I(3b,fd,25,00),B(stream ,20),I(23,00,00,00),B(stream ,94),I(23,00,00,00),B(stream ,85),I(3b,fe,25,00),B(stream ,19),I(23,00,00,00),B(stream ,95),I(23,00,00,00),B(stream ,84),I(3b,03,25,00),B(stream ,18),I(23,00,00,00),B(stream ,96),I(23,00,00,00),B(stream ,82),I(3b,ff,25,00),B(stream ,17),I(23,00,00,00),B(stream ,97),I(23,00,00,00),B(stream ,81),I(3b,01,25,00),B(stream ,16),I(23,00,00,00),B(stream ,98),I(23,00,00,00),B(stream ,80),I(3b,fe,25,00),B(stream ,14),I(23,00,00,00),B(stream ,99),I(23,00,00,00),B(stream ,79),I(3b,ff,25,00),B(stream ,13),I(23,00,00,00),B(stream ,100),I(23,00,00,00),B(stream ,78),I(3b,fd,25,00),B(stream ,12),I(23,00,00,00),B(stream ,101),I(23,00,00,00),B(stream ,77),I(3b,03,25,00),B(stream ,11),I(23,00,00,00),B(stream ,102),I(23,00,00,00),B(stream ,73),I(3b,03,25,00),B(stream ,10),I(23,00,00,00),B(stream ,103),I(23,00,00,00),B(stream ,71),I(3b,02,25,00),B(stream ,9),I(23,00,00,00),B(stream ,104),I(23,00,00,00),B(stream ,68),I(3b,fe,25,00),B(stream ,8),I(23,00,00,00),B(stream ,105),I(23,00,00,00),B(stream ,67),I(3b,02,25,00),B(stream ,7),I(23,00,00,00),B(stream ,106),I(23,00,00,00),B(stream ,64),I(3b,02,25,00),B(stream ,6),I(23,00,00,00),B(stream ,107),I(23,00,00,00),B(stream ,63),I(3b,02,25,00),B(stream ,5),I(23,00,00,00),B(stream ,108),I(23,00,00,00),B(stream ,61),I(3b,fe,25,00),B(stream ,4),I(23,00,00,00),B(stream ,109),I(23,00,00,00),B(stream ,60),I(3b,00,25,00),B(stream ,2),I(23,00,00,00),B(stream ,110),I(23,00,00,00),B(stream ,59),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G006461,G006460);
  eul_allocate_bytevector( G006463,G006462);
  eul_allocate_bytevector( G006465,G006464);
  eul_allocate_bytevector( G006467,G006466);
  object_class(str_6470) = eul_static_string_class;
  eul_intern_keyword(key_6471,"value");
  eul_allocate_bytevector( G006469,G006468);
  eul_intern_keyword(key_6474,"size");
  eul_allocate_bytevector( G006473,G006472);
  eul_allocate_bytevector( G006476,G006475);
  eul_allocate_bytevector( G006478,G006477);
  eul_allocate_bytevector( G006480,G006479);
  eul_allocate_bytevector( G006482,G006481);
  eul_allocate_bytevector( G006484,G006483);
  eul_allocate_bytevector( G006486,G006485);
  eul_intern_symbol(sym_6489,"*clean-ups*");
  eul_intern_symbol(sym_6490,"anonymous");
  eul_allocate_bytevector( G006488,G006487);
  eul_allocate_bytevector( G006492,G006491);
  eul_allocate_bytevector( G006494,G006493);
  eul_allocate_bytevector( G006496,G006495);
  eul_allocate_bytevector( G006498,G006497);
  eul_intern_symbol(sym_6501,"r");
  eul_intern_symbol(sym_6502,"w");
  eul_intern_symbol(sym_6503,"a");
  eul_allocate_bytevector( G006500,G006499);
  eul_intern_symbol(sym_6506,"(method generic-connect)");
  eul_intern_symbol(sym_6507,"(method reconnect)");
  eul_intern_symbol(sym_6508,"(method disconnect)");
  eul_intern_symbol(sym_6509,"(method fill-buffer)");
  eul_intern_symbol(sym_6510,"(method flush-buffer)");
  eul_intern_symbol(sym_6511,"(method end-of-stream)");
  eul_intern_symbol(sym_6512,"(method generic-read)");
  eul_allocate_bytevector( G006505,G006504);
  eul_allocate_bytevector( G006514,G006513);
  eul_allocate_bytevector( G006516,G006515);
  object_class(str_6519) = eul_static_string_class;
  eul_allocate_bytevector( G006518,G006517);
  eul_allocate_bytevector( G006521,G006520);
  object_class(str_6524) = eul_static_string_class;
  eul_allocate_bytevector( G006523,G006522);
  eul_allocate_bytevector( G006526,G006525);
  eul_allocate_bytevector( G006528,G006527);
  object_class(str_6531) = eul_static_string_class;
  eul_allocate_bytevector( G006530,G006529);
  eul_allocate_bytevector( G006533,G006532);
  eul_allocate_bytevector( G006535,G006534);
  eul_allocate_bytevector( G006537,G006536);
  object_class(str_6540) = eul_static_string_class;
  object_class(str_6541) = eul_static_string_class;
  eul_allocate_bytevector( G006539,G006538);
  eul_allocate_bytevector( G006543,G006542);
  eul_allocate_bytevector( G006545,G006544);
  eul_allocate_bytevector( G006547,G006546);
  eul_allocate_bytevector( G006549,G006548);
  eul_allocate_bytevector( G006551,G006550);
  eul_allocate_bytevector( G006553,G006552);
  eul_allocate_bytevector( G006555,G006554);
  eul_allocate_bytevector( G006557,G006556);
  eul_allocate_bytevector( G006559,G006558);
  eul_allocate_bytevector( G006561,G006560);
  eul_allocate_bytevector( G006563,G006562);
  eul_allocate_bytevector( G006565,G006564);
  eul_allocate_bytevector( G006567,G006566);
  eul_intern_symbol(sym_6570,"make-space");
  eul_intern_symbol(sym_6571,"sprint-one-char");
  eul_intern_symbol(sym_6572,"fprintf");
  eul_intern_symbol(sym_6573,"connect");
  eul_intern_symbol(sym_6574,"file-lookup");
  eul_intern_symbol(sym_6575,"output-list-contents");
  eul_intern_symbol(sym_6576,"write");
  eul_intern_symbol(sym_6577,"sflush");
  eul_intern_symbol(sym_6578,"print-char");
  eul_intern_symbol(sym_6579,"print");
  eul_intern_symbol(sym_6580,"sprint-char");
  eul_intern_symbol(sym_6581,"print-string");
  eul_intern_symbol(sym_6582,"sprint-char*");
  eul_intern_symbol(sym_6583,"swrite-all");
  eul_intern_symbol(sym_6584,"sprint");
  eul_intern_symbol(sym_6585,"sprint-all");
  eul_intern_symbol(sym_6586,"sprintf");
  eul_intern_symbol(sym_6587,"print-address");
  eul_intern_symbol(sym_6588,"swrite");
  eul_intern_symbol(sym_6589,"flush");
  eul_intern_symbol(sym_6590,"top-level");
  eul_allocate_bytevector( G006569,G006568);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 25; i++)
      stream_bindings[i] = eul_nil;
  }

  stream_bindings[ 25] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_file_lookup6459;
  stream_bindings[ 26] = G006461;
  stream_bindings[ 27] = G006463;
  stream_bindings[ 28] = G006465;
  stream_bindings[ 29] = G006467;
  stream_bindings[ 30] = str_6470;
  stream_bindings[ 31] = key_6471;
  stream_bindings[ 32] = G006469;
  stream_bindings[ 33] = key_6474;
  stream_bindings[ 34] = G006473;
  stream_bindings[ 35] = G006476;
  stream_bindings[ 36] = G006478;
  stream_bindings[ 37] = G006480;
  stream_bindings[ 38] = G006482;
  stream_bindings[ 39] = G006484;
  stream_bindings[ 40] = G006486;
  stream_bindings[ 41] = sym_6489;
  stream_bindings[ 42] = sym_6490;
  stream_bindings[ 43] = G006488;
  stream_bindings[ 44] = G006492;
  stream_bindings[ 45] = G006494;
  stream_bindings[ 46] = G006496;
  stream_bindings[ 47] = G006498;
  stream_bindings[ 48] = sym_6501;
  stream_bindings[ 49] = sym_6502;
  stream_bindings[ 50] = sym_6503;
  stream_bindings[ 51] = G006500;
  stream_bindings[ 52] = sym_6506;
  stream_bindings[ 53] = sym_6507;
  stream_bindings[ 54] = sym_6508;
  stream_bindings[ 55] = sym_6509;
  stream_bindings[ 56] = sym_6510;
  stream_bindings[ 57] = sym_6511;
  stream_bindings[ 58] = sym_6512;
  stream_bindings[ 59] = G006505;
  stream_bindings[ 60] = G006514;
  stream_bindings[ 61] = G006516;
  stream_bindings[ 62] = str_6519;
  stream_bindings[ 63] = G006518;
  stream_bindings[ 64] = G006521;
  stream_bindings[ 65] = str_6524;
  stream_bindings[ 66] = G006523;
  stream_bindings[ 67] = G006526;
  stream_bindings[ 68] = G006528;
  stream_bindings[ 69] = str_6531;
  stream_bindings[ 70] = G006530;
  stream_bindings[ 71] = G006533;
  stream_bindings[ 72] = G006535;
  stream_bindings[ 73] = G006537;
  stream_bindings[ 74] = str_6540;
  stream_bindings[ 75] = str_6541;
  stream_bindings[ 76] = G006539;
  stream_bindings[ 77] = G006543;
  stream_bindings[ 78] = G006545;
  stream_bindings[ 79] = G006547;
  stream_bindings[ 80] = G006549;
  stream_bindings[ 81] = G006551;
  stream_bindings[ 82] = G006553;
  stream_bindings[ 83] = G006555;
  stream_bindings[ 84] = G006557;
  stream_bindings[ 85] = G006559;
  stream_bindings[ 86] = G006561;
  stream_bindings[ 87] = G006563;
  stream_bindings[ 88] = G006565;
  stream_bindings[ 89] = G006567;
  stream_bindings[ 1] = eul_nil;
  stream_bindings[ 90] = sym_6570;
  stream_bindings[ 91] = sym_6571;
  stream_bindings[ 92] = sym_6572;
  stream_bindings[ 93] = sym_6573;
  stream_bindings[ 94] = sym_6574;
  stream_bindings[ 95] = sym_6575;
  stream_bindings[ 96] = sym_6576;
  stream_bindings[ 97] = sym_6577;
  stream_bindings[ 98] = sym_6578;
  stream_bindings[ 99] = sym_6579;
  stream_bindings[ 100] = sym_6580;
  stream_bindings[ 101] = sym_6581;
  stream_bindings[ 102] = sym_6582;
  stream_bindings[ 103] = sym_6583;
  stream_bindings[ 104] = sym_6584;
  stream_bindings[ 105] = sym_6585;
  stream_bindings[ 106] = sym_6586;
  stream_bindings[ 107] = sym_6587;
  stream_bindings[ 108] = sym_6588;
  stream_bindings[ 109] = sym_6589;
  stream_bindings[ 110] = sym_6590;
  eul_allocate_lambda( stream_bindings[0], "initialize-stream", 0, G006569);

  }
}


/* eof */
