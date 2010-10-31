/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module mop-init
 **  Copyright: See file mop-init.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_boot();
extern void initialize_module_mop_prim();
extern void initialize_module_mop_class();
extern LispRef mop_prim_bindings[];
extern LispRef boot_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];

/* Module bindings with size 32 */
LispRef mop_init_bindings[32];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module mop-init */
void initialize_module_mop_init()
{
  if (is_initialized) return;
  initialize_module_boot();
  initialize_module_mop_prim();
  initialize_module_mop_class();
  eul_fast_table_set(eul_modules,"mop_init",(LispRef) mop_init_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_1451, sym_1450, sym_1449, G001448, G001446, G001444, sym_1442, G001441, G001439, sym_1437, sym_1436, sym_1435, sym_1434, sym_1433, sym_1432, sym_1431, sym_1430, sym_1429, sym_1428, sym_1427, sym_1426, sym_1425, sym_1424, sym_1423, sym_1422, sym_1421, sym_1420, sym_1419, G001418;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 806 is_init: 0 index: 23 binding: top-level */
  static const void *G001417[] = {I(a9,24,00,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,25),I(24,00,00,00),B(mop_class ,57),I(24,00,00,00),B(mop_class ,32),I(24,00,00,00),B(mop_class ,39),I(24,00,00,00),B(boot1 ,26),I(3c,05,24,00),B(mop_class ,22),I(23,00,00,00),B(mop_init ,4),I(82,86,1f,04),I(86,86,87,1f),I(07,1f,07,1c),I(82,1d,03,22),I(02,2a,1f,07),I(1f,06,1c,83),I(1d,03,22,02),I(2a,1f,07,1f),I(05,1c,84,1d),I(03,22,02,2a),I(1f,07,1f,04),I(1c,8a,03,1d),I(03,22,02,2a),I(1f,07,86,1c),I(8a,04,1d,03),I(22,02,2a,1f),I(07,1f,03,1c),I(8a,05,1d,03),I(22,02,2a,1f),I(07,1d,0f,1f),I(08,1c,1c,8a),I(06,1d,03,22),I(02,2a,1f,08),I(1d,1c,8a,07),I(1d,03,22,0b),I(2a,24,00,00),B(mop_class ,81),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,81),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,02,24,00),B(mop_class ,71),I(23,00,00,00),B(mop_init ,5),I(8a,0a,1f,04),I(86,24,00,00),B(mop_class ,26),I(1f,06,87,1f),I(07,1f,07,1c),I(82,1d,03,22),I(02,2a,1f,07),I(1f,06,1c,83),I(1d,03,22,02),I(2a,1f,07,1f),I(05,1c,84,1d),I(03,22,02,2a),I(1f,07,1f,04),I(1c,8a,03,1d),I(03,22,02,2a),I(1f,07,86,1c),I(8a,04,1d,03),I(22,02,2a,1f),I(07,1f,03,1c),I(8a,05,1d,03),I(22,02,2a,1f),I(07,1d,0f,1f),I(08,1c,1c,8a),I(06,1d,03,22),I(02,2a,1f,08),I(1d,1c,8a,07),I(1d,03,22,0b),I(2a,24,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,81),I(24,00,00,00),B(mop_class ,27),I(24,00,00,00),B(boot1 ,26),I(3c,02,24,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,86),I(23,00,00,00),B(mop_init ,6),I(8a,0a,1f,05),I(1f,05,24,00),B(mop_class ,26),I(1f,06,87,1f),I(07,1f,07,1c),I(82,1d,03,22),I(02,2a,1f,07),I(1f,06,1c,83),I(1d,03,22,02),I(2a,1f,07,1f),I(05,1c,84,1d),I(03,22,02,2a),I(1f,07,1f,04),I(1c,8a,03,1d),I(03,22,02,2a),I(1f,07,86,1c),I(8a,04,1d,03),I(22,02,2a,1f),I(07,1f,03,1c),I(8a,05,1d,03),I(22,02,2a,1f),I(07,1d,0f,1f),I(08,1c,1c,8a),I(06,1d,03,22),I(02,2a,1f,08),I(1d,1c,8a,07),I(1d,03,22,0b),I(2a,24,00,00),B(mop_class ,86),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,71),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,02,24,00),B(mop_class ,81),I(23,00,00,00),B(mop_init ,7),I(8a,0a,1f,05),I(1f,05,24,00),B(mop_class ,26),I(1f,06,86,1f),I(07,1f,07,1c),I(82,1d,03,22),I(02,2a,1f,07),I(1f,06,1c,83),I(1d,03,22,02),I(2a,1f,07,1f),I(05,1c,84,1d),I(03,22,02,2a),I(1f,07,1f,04),I(1c,8a,03,1d),I(03,22,02,2a),I(1f,07,86,1c),I(8a,04,1d,03),I(22,02,2a,1f),I(07,1f,03,1c),I(8a,05,1d,03),I(22,02,2a,1f),I(07,1d,0f,1f),I(08,1c,1c,8a),I(06,1d,03,22),I(02,2a,1f,08),I(1d,1c,8a,07),I(1d,03,22,0b),I(2a,24,00,00),B(mop_class ,86),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,02,24,00),B(mop_class ,27),I(23,00,00,00),B(mop_init ,8),I(8a,0a,1f,04),I(86,24,00,00),B(mop_class ,26),I(1f,06,86,1f),I(07,1f,07,1c),I(82,1d,03,22),I(02,2a,1f,07),I(1f,06,1c,83),I(1d,03,22,02),I(2a,1f,07,1f),I(05,1c,84,1d),I(03,22,02,2a),I(1f,07,1f,04),I(1c,8a,03,1d),I(03,22,02,2a),I(1f,07,86,1c),I(8a,04,1d,03),I(22,02,2a,1f),I(07,1f,03,1c),I(8a,05,1d,03),I(22,02,2a,1f),I(07,1d,0f,1f),I(08,1c,1c,8a),I(06,1d,03,22),I(02,2a,1f,08),I(1d,1c,8a,07),I(1d,03,22,0b),I(2a,24,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,2),I(24,00,00,00),B(mop_class ,51),I(24,00,00,00),B(boot1 ,26),I(3c,02,24,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,32),I(23,00,00,00),B(mop_init ,9),I(8a,03,1f,05),I(1f,05,86,1f),I(06,87,1f,07),I(1f,07,1c,82),I(1d,03,22,02),I(2a,1f,07,1f),I(06,1c,83,1d),I(03,22,02,2a),I(1f,07,1f,05),I(1c,84,1d,03),I(22,02,2a,1f),I(07,1f,04,1c),I(8a,03,1d,03),I(22,02,2a,1f),I(07,86,1c,8a),I(04,1d,03,22),I(02,2a,1f,07),I(1f,03,1c,8a),I(05,1d,03,22),I(02,2a,1f,07),I(1d,0f,1f,08),I(1c,1c,8a,06),I(1d,03,22,02),I(2a,1f,08,1d),I(1c,8a,07,1d),I(03,22,0b,2a),I(24,00,00,00),B(mop_class ,32),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,32),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,02,24,00),B(mop_class ,2),I(23,00,00,00),B(mop_init ,10),I(8a,05,1f,04),I(86,86,1f,06),I(86,1f,07,1f),I(07,1c,82,1d),I(03,22,02,2a),I(1f,07,1f,06),I(1c,83,1d,03),I(22,02,2a,1f),I(07,1f,05,1c),I(84,1d,03,22),I(02,2a,1f,07),I(1f,04,1c,8a),I(03,1d,03,22),I(02,2a,1f,07),I(86,1c,8a,04),I(1d,03,22,02),I(2a,1f,07,1f),I(03,1c,8a,05),I(1d,03,22,02),I(2a,1f,07,1d),I(0f,1f,08,1c),I(1c,8a,06,1d),I(03,22,02,2a),I(1f,08,1d,1c),I(8a,07,1d,03),I(22,0b,2a,24),B(mop_class ,32),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,16),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,32),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,02,24,00),B(mop_class ,51),I(23,00,00,00),B(mop_init ,11),I(8a,09,1f,05),I(1f,05,24,00),B(mop_class ,64),I(1f,06,87,1f),I(07,1f,07,1c),I(82,1d,03,22),I(02,2a,1f,07),I(1f,06,1c,83),I(1d,03,22,02),I(2a,1f,07,1f),I(05,1c,84,1d),I(03,22,02,2a),I(1f,07,1f,04),I(1c,8a,03,1d),I(03,22,02,2a),I(1f,07,86,1c),I(8a,04,1d,03),I(22,02,2a,1f),I(07,1f,03,1c),I(8a,05,1d,03),I(22,02,2a,1f),I(07,1d,0f,1f),I(08,1c,1c,8a),I(06,1d,03,22),I(02,2a,1f,08),I(1d,1c,8a,07),I(1d,03,22,0b),I(2a,24,00,00),B(mop_class ,51),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,51),I(24,00,00,00),B(mop_class ,32),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,03,24,00),B(mop_class ,16),I(23,00,00,00),B(mop_init ,12),I(8a,09,1f,04),I(86,24,00,00),B(mop_class ,64),I(1f,06,86,1f),I(07,1f,07,1c),I(82,1d,03,22),I(02,2a,1f,07),I(1f,06,1c,83),I(1d,03,22,02),I(2a,1f,07,1f),I(05,1c,84,1d),I(03,22,02,2a),I(1f,07,1f,04),I(1c,8a,03,1d),I(03,22,02,2a),I(1f,07,86,1c),I(8a,04,1d,03),I(22,02,2a,1f),I(07,1f,03,1c),I(8a,05,1d,03),I(22,02,2a,1f),I(07,1d,0f,1f),I(08,1c,1c,8a),I(06,1d,03,22),I(02,2a,1f,08),I(1d,1c,8a,07),I(1d,03,22,0b),I(2a,24,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,63),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,25),I(23,00,00,00),B(mop_init ,13),I(8a,03,1f,05),I(1f,05,24,00),B(mop_class ,52),I(1f,06,87,1f),I(07,1f,07,1c),I(82,1d,03,22),I(02,2a,1f,07),I(1f,06,1c,83),I(1d,03,22,02),I(2a,1f,07,1f),I(05,1c,84,1d),I(03,22,02,2a),I(1f,07,1f,04),I(1c,8a,03,1d),I(03,22,02,2a),I(1f,07,86,1c),I(8a,04,1d,03),I(22,02,2a,1f),I(07,1f,03,1c),I(8a,05,1d,03),I(22,02,2a,1f),I(07,1d,0f,1f),I(08,1c,1c,8a),I(06,1d,03,22),I(02,2a,1f,08),I(1d,1c,8a,07),I(1d,03,22,0b),I(2a,24,00,00),B(mop_class ,25),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,25),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,02,24,00),B(mop_class ,63),I(23,00,00,00),B(mop_init ,14),I(8a,03,1f,04),I(86,24,00,00),B(mop_class ,52),I(1f,06,86,1f),I(07,1f,07,1c),I(82,1d,03,22),I(02,2a,1f,07),I(1f,06,1c,83),I(1d,03,22,02),I(2a,1f,07,1f),I(05,1c,84,1d),I(03,22,02,2a),I(1f,07,1f,04),I(1c,8a,03,1d),I(03,22,02,2a),I(1f,07,86,1c),I(8a,04,1d,03),I(22,02,2a,1f),I(07,1f,03,1c),I(8a,05,1d,03),I(22,02,2a,1f),I(07,1d,0f,1f),I(08,1c,1c,8a),I(06,1d,03,22),I(02,2a,1f,08),I(1d,1c,8a,07),I(1d,03,22,0b),I(2a,24,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,59),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,57),I(23,00,00,00),B(mop_init ,15),I(84,1f,05,1f),I(05,24,00,00),B(mop_class ,19),I(1f,06,87,1f),I(07,1f,07,1c),I(82,1d,03,22),I(02,2a,1f,07),I(1f,06,1c,83),I(1d,03,22,02),I(2a,1f,07,1f),I(05,1c,84,1d),I(03,22,02,2a),I(1f,07,1f,04),I(1c,8a,03,1d),I(03,22,02,2a),I(1f,07,86,1c),I(8a,04,1d,03),I(22,02,2a,1f),I(07,1f,03,1c),I(8a,05,1d,03),I(22,02,2a,1f),I(07,1d,0f,1f),I(08,1c,1c,8a),I(06,1d,03,22),I(02,2a,1f,08),I(1d,1c,8a,07),I(1d,03,22,0b),I(2a,24,00,00),B(mop_class ,57),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,57),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,02,24,00),B(mop_class ,59),I(23,00,00,00),B(mop_init ,16),I(8a,06,1f,04),I(86,24,00,00),B(mop_class ,24),I(1f,06,86,1f),I(07,1f,07,1c),I(82,1d,03,22),I(02,2a,1f,07),I(1f,06,1c,83),I(1d,03,22,02),I(2a,1f,07,1f),I(05,1c,84,1d),I(03,22,02,2a),I(1f,07,1f,04),I(1c,8a,03,1d),I(03,22,02,2a),I(1f,07,86,1c),I(8a,04,1d,03),I(22,02,2a,1f),I(07,1f,03,1c),I(8a,05,1d,03),I(22,02,2a,1f),I(07,1d,0f,1f),I(08,1c,1c,8a),I(06,1d,03,22),I(02,2a,1f,08),I(1d,1c,8a,07),I(1d,03,22,0b),I(2a,24,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,5),I(24,00,00,00),B(mop_class ,92),I(24,00,00,00),B(boot1 ,26),I(3c,02,24,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,39),I(23,00,00,00),B(mop_init ,17),I(83,1f,05,1f),I(05,24,00,00),B(mop_class ,15),I(1f,06,87,1f),I(07,1f,07,1c),I(82,1d,03,22),I(02,2a,1f,07),I(1f,06,1c,83),I(1d,03,22,02),I(2a,1f,07,1f),I(05,1c,84,1d),I(03,22,02,2a),I(1f,07,1f,04),I(1c,8a,03,1d),I(03,22,02,2a),I(1f,07,86,1c),I(8a,04,1d,03),I(22,02,2a,1f),I(07,1f,03,1c),I(8a,05,1d,03),I(22,02,2a,1f),I(07,1d,0f,1f),I(08,1c,1c,8a),I(06,1d,03,22),I(02,2a,1f,08),I(1d,1c,8a,07),I(1d,03,22,0b),I(2a,24,00,00),B(mop_class ,39),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,39),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,02,24,00),B(mop_class ,5),I(23,00,00,00),B(mop_init ,18),I(83,1f,04,86),I(24,00,00,00),B(mop_class ,15),I(1f,06,86,1f),I(07,1f,07,1c),I(82,1d,03,22),I(02,2a,1f,07),I(1f,06,1c,83),I(1d,03,22,02),I(2a,1f,07,1f),I(05,1c,84,1d),I(03,22,02,2a),I(1f,07,1f,04),I(1c,8a,03,1d),I(03,22,02,2a),I(1f,07,86,1c),I(8a,04,1d,03),I(22,02,2a,1f),I(07,1f,03,1c),I(8a,05,1d,03),I(22,02,2a,1f),I(07,1d,0f,1f),I(08,1c,1c,8a),I(06,1d,03,22),I(02,2a,1f,08),I(1d,1c,8a,07),I(1d,03,22,0b),I(2a,24,00,00),B(mop_class ,39),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,39),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,02,24,00),B(mop_class ,92),I(23,00,00,00),B(mop_init ,19),I(83,1f,04,86),I(24,00,00,00),B(mop_class ,15),I(1f,06,86,1f),I(07,1f,07,1c),I(82,1d,03,22),I(02,2a,1f,07),I(1f,06,1c,83),I(1d,03,22,02),I(2a,1f,07,1f),I(05,1c,84,1d),I(03,22,02,2a),I(1f,07,1f,04),I(1c,8a,03,1d),I(03,22,02,2a),I(1f,07,86,1c),I(8a,04,1d,03),I(22,02,2a,1f),I(07,1f,03,1c),I(8a,05,1d,03),I(22,02,2a,1f),I(07,1d,0f,1f),I(08,1c,1c,8a),I(06,1d,03,22),I(02,2a,1f,08),I(1d,1c,8a,07),I(1d,03,22,0b),I(2a,24,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,82),I(24,00,00,00),B(mop_class ,28),I(24,00,00,00),B(boot1 ,26),I(3c,02,24,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,74),I(23,00,00,00),B(mop_init ,20),I(82,1f,05,1f),I(05,86,1f,06),I(87,1f,07,1f),I(07,1c,82,1d),I(03,22,02,2a),I(1f,07,1f,06),I(1c,83,1d,03),I(22,02,2a,1f),I(07,1f,05,1c),I(84,1d,03,22),I(02,2a,1f,07),I(1f,04,1c,8a),I(03,1d,03,22),I(02,2a,1f,07),I(86,1c,8a,04),I(1d,03,22,02),I(2a,1f,07,1f),I(03,1c,8a,05),I(1d,03,22,02),I(2a,1f,07,1d),I(0f,1f,08,1c),I(1c,8a,06,1d),I(03,22,02,2a),I(1f,08,1d,1c),I(8a,07,1d,03),I(22,0b,2a,24),B(mop_class ,74),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,74),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,02,24,00),B(mop_class ,28),I(23,00,00,00),B(mop_init ,21),I(82,1f,04,86),I(86,1f,06,86),I(1f,07,1f,07),I(1c,82,1d,03),I(22,02,2a,1f),I(07,1f,06,1c),I(83,1d,03,22),I(02,2a,1f,07),I(1f,05,1c,84),I(1d,03,22,02),I(2a,1f,07,1f),I(04,1c,8a,03),I(1d,03,22,02),I(2a,1f,07,86),I(1c,8a,04,1d),I(03,22,02,2a),I(1f,07,1f,03),I(1c,8a,05,1d),I(03,22,02,2a),I(1f,07,1d,0f),I(1f,08,1c,1c),I(8a,06,1d,03),I(22,02,2a,1f),I(08,1d,1c,8a),I(07,1d,03,22),I(0b,2a,24,00),B(mop_class ,74),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,74),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,02,24,00),B(mop_class ,82),I(23,00,00,00),B(mop_init ,22),I(84,1f,04,86),I(24,00,00,00),B(mop_class ,88),I(1f,06,86,1f),I(07,1f,07,1c),I(82,1d,03,22),I(02,2a,1f,07),I(1f,06,1c,83),I(1d,03,22,02),I(2a,1f,07,1f),I(05,1c,84,1d),I(03,22,02,2a),I(1f,07,1f,04),I(1c,8a,03,1d),I(03,22,02,2a),I(1f,07,86,1c),I(8a,04,1d,03),I(22,02,2a,1f),I(07,1f,03,1c),I(8a,05,1d,03),I(22,02,2a,1f),I(07,1d,0f,1f),I(08,1c,1c,8a),I(06,1d,03,22),I(02,2a,1f,08),I(1d,1c,8a,07),I(1d,03,22,0b),I(2a,24,00,00),B(mop_init ,2),I(3d,00,2d,45),I(2d,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 24 binding: anonymous */
  static const void *G001438[] = {I(aa,1b,47,00),I(00,47,01,00),I(3d,02,01,00)};

  /* Byte-vector with size: 20 is_init: 0 index: 26 binding: anonymous */
  static const void *G001440[] = {I(ab,46,01,1b),I(48,00,00,47),I(00,00,10,1b),I(86,0f,1f,03),I(1c,1c,8a,09),I(1d,03,22,02),I(1f,04,8a,03),I(02,23,00,00),B(mop_init ,25),I(23,00,00,00),B(mop_init ,24),I(3b,01,1c,24),B(boot ,17),I(3c,02,2a,47),I(00,00,10,1d),I(1c,90,2a,47),I(00,00,10,1b),I(83,14,47,00),I(00,1c,8f,45),I(09,00,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 27 binding: compute-class-codes */
  static const void *G001443[] = {I(a9,46,01,86),I(1b,48,00,00),I(23,00,00,00),B(mop_init ,25),I(23,00,00,00),B(mop_init ,26),I(3b,02,48,00),I(00,82,86,0f),I(24,00,00,00),B(mop_class ,22),I(1c,47,00,00),I(3d,02,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 24 is_init: 0 index: 28 binding: init-class */
  static const void *G001445[] = {I(43,08,1f,07),I(1f,07,1c,82),I(1d,03,22,02),I(2a,1f,07,1f),I(06,1c,83,1d),I(03,22,02,2a),I(1f,07,1f,05),I(1c,84,1d,03),I(22,02,2a,1f),I(07,1f,04,1c),I(8a,03,1d,03),I(22,02,2a,1f),I(07,86,1c,8a),I(04,1d,03,22),I(02,2a,1f,07),I(1f,03,1c,8a),I(05,1d,03,22),I(02,2a,1f,07),I(1d,0f,1f,08),I(1c,1c,8a,06),I(1d,03,22,02),I(2a,1f,08,1d),I(1c,8a,07,1d),I(03,45,0b,00)};

  /* Byte-vector with size: 35 is_init: 1 index: 0 binding: initialize-mop-init */
  static const void *G001447[] = {I(87,25,00,00),B(mop_init ,1),I(24,00,00,00),B(mop_class ,1),I(3e,0b,24,00),B(mop_class ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_prim ,1),I(3e,0b,24,00),B(mop_prim ,0),I(3c,00,21,01),I(24,00,00,00),B(boot ,1),I(3e,0b,24,00),B(boot ,0),I(3c,00,21,01),I(23,00,00,00),B(mop_init ,29),I(23,00,00,00),B(mop_init ,28),I(3b,08,25,00),B(mop_init ,3),I(23,00,00,00),B(mop_init ,30),I(23,00,00,00),B(mop_init ,27),I(3b,00,25,00),B(mop_init ,2),I(23,00,00,00),B(mop_init ,31),I(23,00,00,00),B(mop_init ,23),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_intern_symbol(sym_1419,"object");
  eul_intern_symbol(sym_1420,"metaclass");
  eul_intern_symbol(sym_1421,"class");
  eul_intern_symbol(sym_1422,"simple-class");
  eul_intern_symbol(sym_1423,"function-class");
  eul_intern_symbol(sym_1424,"function");
  eul_intern_symbol(sym_1425,"simple-function");
  eul_intern_symbol(sym_1426,"generic-function");
  eul_intern_symbol(sym_1427,"simple-generic-function");
  eul_intern_symbol(sym_1428,"method");
  eul_intern_symbol(sym_1429,"simple-method");
  eul_intern_symbol(sym_1430,"slot");
  eul_intern_symbol(sym_1431,"local-slot");
  eul_intern_symbol(sym_1432,"name");
  eul_intern_symbol(sym_1433,"symbol");
  eul_intern_symbol(sym_1434,"keyword");
  eul_intern_symbol(sym_1435,"list");
  eul_intern_symbol(sym_1436,"null");
  eul_intern_symbol(sym_1437,"cons");
  eul_allocate_bytevector( G001418,G001417);
  eul_allocate_bytevector( G001439,G001438);
  eul_intern_symbol(sym_1442,"anonymous");
  eul_allocate_bytevector( G001441,G001440);
  eul_allocate_bytevector( G001444,G001443);
  eul_allocate_bytevector( G001446,G001445);
  eul_intern_symbol(sym_1449,"init-class");
  eul_intern_symbol(sym_1450,"compute-class-codes");
  eul_intern_symbol(sym_1451,"top-level");
  eul_allocate_bytevector( G001448,G001447);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 4; i++)
      mop_init_bindings[i] = eul_nil;
  }

  mop_init_bindings[ 4] = sym_1419;
  mop_init_bindings[ 5] = sym_1420;
  mop_init_bindings[ 6] = sym_1421;
  mop_init_bindings[ 7] = sym_1422;
  mop_init_bindings[ 8] = sym_1423;
  mop_init_bindings[ 9] = sym_1424;
  mop_init_bindings[ 10] = sym_1425;
  mop_init_bindings[ 11] = sym_1426;
  mop_init_bindings[ 12] = sym_1427;
  mop_init_bindings[ 13] = sym_1428;
  mop_init_bindings[ 14] = sym_1429;
  mop_init_bindings[ 15] = sym_1430;
  mop_init_bindings[ 16] = sym_1431;
  mop_init_bindings[ 17] = sym_1432;
  mop_init_bindings[ 18] = sym_1433;
  mop_init_bindings[ 19] = sym_1434;
  mop_init_bindings[ 20] = sym_1435;
  mop_init_bindings[ 21] = sym_1436;
  mop_init_bindings[ 22] = sym_1437;
  mop_init_bindings[ 23] = G001418;
  mop_init_bindings[ 24] = G001439;
  mop_init_bindings[ 25] = sym_1442;
  mop_init_bindings[ 26] = G001441;
  mop_init_bindings[ 27] = G001444;
  mop_init_bindings[ 28] = G001446;
  mop_init_bindings[ 1] = eul_nil;
  mop_init_bindings[ 29] = sym_1449;
  mop_init_bindings[ 30] = sym_1450;
  mop_init_bindings[ 31] = sym_1451;
  eul_allocate_lambda( mop_init_bindings[0], "initialize-mop-init", 0, G001448);

  }
}


/* eof */
