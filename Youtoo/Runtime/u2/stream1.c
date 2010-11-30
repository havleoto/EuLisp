/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module stream1
 **  Copyright: See file stream1.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern LispRef telos_bindings[];
extern LispRef boot1_bindings[];

/* Module bindings with size 41 */
LispRef stream1_bindings[41];

/* Foreign functions */
static LispRef ff_stub_eul_posix_codes2321 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef res;

  FF_RES_CONVERT6(res,eul_posix_codes());
  return res;
}

static LispRef ff_stub_open2322 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002353, G002354, G002355, res;

  POPVAL1(G002355);
  POPVAL1(G002354);
  POPVAL1(G002353);
  FF_RES_CONVERT0(res,open(FF_ARG_CONVERT3(G002353), FF_ARG_CONVERT0(G002354), FF_ARG_CONVERT0(G002355)));
  return res;
}

static LispRef ff_stub_close2323 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002356, res;

  POPVAL1(G002356);
  FF_RES_CONVERT0(res,close(FF_ARG_CONVERT0(G002356)));
  return res;
}

static LispRef ff_stub_read2324 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002357, G002358, G002359, res;

  POPVAL1(G002359);
  POPVAL1(G002358);
  POPVAL1(G002357);
  FF_RES_CONVERT0(res,read(FF_ARG_CONVERT0(G002357), FF_ARG_CONVERT3(G002358), FF_ARG_CONVERT0(G002359)));
  return res;
}

static LispRef ff_stub_write2325 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002360, G002361, G002362, res;

  POPVAL1(G002362);
  POPVAL1(G002361);
  POPVAL1(G002360);
  FF_RES_CONVERT0(res,write(FF_ARG_CONVERT0(G002360), FF_ARG_CONVERT3(G002361), FF_ARG_CONVERT0(G002362)));
  return res;
}

static LispRef ff_stub_eul_sprintf2326 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002363, G002364, G002365, G002366, res;

  POPVAL1(G002366);
  POPVAL1(G002365);
  POPVAL1(G002364);
  POPVAL1(G002363);
  FF_RES_CONVERT0(res,eul_sprintf(FF_ARG_CONVERT3(G002363), FF_ARG_CONVERT0(G002364), FF_ARG_CONVERT3(G002365), FF_ARG_CONVERT8(G002366)));
  return res;
}

static LispRef ff_stub_eul_sprintf_string2327 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002367, G002368, G002369, G002370, G002371, G002372, res;

  POPVAL1(G002372);
  POPVAL1(G002371);
  POPVAL1(G002370);
  POPVAL1(G002369);
  POPVAL1(G002368);
  POPVAL1(G002367);
  FF_RES_CONVERT0(res,eul_sprintf_string(FF_ARG_CONVERT3(G002367), FF_ARG_CONVERT0(G002368), FF_ARG_CONVERT0(G002369), FF_ARG_CONVERT0(G002370), FF_ARG_CONVERT3(G002371), FF_ARG_CONVERT3(G002372)));
  return res;
}

static LispRef ff_stub_eul_make_socket2328 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002373, G002374, G002375, res;

  POPVAL1(G002375);
  POPVAL1(G002374);
  POPVAL1(G002373);
  FF_RES_CONVERT0(res,eul_make_socket(FF_ARG_CONVERT3(G002373), FF_ARG_CONVERT3(G002374), FF_ARG_CONVERT0(G002375)));
  return res;
}

static LispRef ff_stub_eul_socket_accept2329 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002376, res;

  POPVAL1(G002376);
  FF_RES_CONVERT0(res,eul_socket_accept(FF_ARG_CONVERT0(G002376)));
  return res;
}

static LispRef ff_stub_eul_make_connection2330 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002377, G002378, G002379, res;

  POPVAL1(G002379);
  POPVAL1(G002378);
  POPVAL1(G002377);
  FF_RES_CONVERT0(res,eul_make_connection(FF_ARG_CONVERT3(G002377), FF_ARG_CONVERT3(G002378), FF_ARG_CONVERT3(G002379)));
  return res;
}

static LispRef ff_stub_eul_socket_strerror2331 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002380, res;

  POPVAL1(G002380);
  FF_RES_CONVERT3(res,eul_socket_strerror(FF_ARG_CONVERT0(G002380)));
  return res;
}

static LispRef ff_stub_eul_strerror2332 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef res;

  FF_RES_CONVERT3(res,eul_strerror());
  return res;
}

static LispRef ff_stub_ntok2333 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002381, G002382, res;

  POPVAL1(G002382);
  POPVAL1(G002381);
  FF_RES_CONVERT6(res,ntok(FF_ARG_CONVERT8(G002381), FF_ARG_CONVERT8(G002382)));
  return res;
}

static LispRef ff_stub_read_into_buffer2334 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002383, G002384, G002385, res;

  POPVAL1(G002385);
  POPVAL1(G002384);
  POPVAL1(G002383);
  FF_RES_CONVERT0(res,read_into_buffer(FF_ARG_CONVERT0(G002383), FF_ARG_CONVERT3(G002384), FF_ARG_CONVERT0(G002385)));
  return res;
}

static LispRef ff_stub_eul_hostname2335 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef res;

  FF_RES_CONVERT3(res,eul_hostname());
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module stream1 */
void initialize_module_stream1()
{
  if (is_initialized) return;
  initialize_module_telos();
  eul_fast_table_set(eul_modules,"stream1",(LispRef) stream1_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_2352, sym_2351, sym_2350, G002349, G002347, G002345, sym_2343, sym_2342, sym_2341, sym_2340, sym_2339, sym_2338, G002337;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 83 is_init: 0 index: 35 binding: top-level */
  static const void *G002336[] = {I(a9,41,00,00),B(stream1 ,14),I(1b,89,00,00),B(stream1 ,9),I(2a,24,00,00),B(stream1 ,9),I(82,02,1b,89),B(stream1 ,4),I(2a,24,00,00),B(stream1 ,9),I(83,02,1b,89),B(stream1 ,11),I(2a,24,00,00),B(stream1 ,9),I(84,02,1b,89),B(stream1 ,2),I(2a,24,00,00),B(stream1 ,9),I(26,00,00,00),I(00,00,00,03),I(02,1b,89,00),B(stream1 ,7),I(2a,24,00,00),B(stream1 ,9),I(26,00,00,00),I(00,00,00,04),I(02,1b,89,00),B(stream1 ,10),I(2a,24,00,00),B(stream1 ,9),I(26,00,00,00),I(00,00,00,05),I(02,1b,89,00),B(stream1 ,8),I(2a,24,00,00),B(stream1 ,9),I(26,00,00,00),I(00,00,00,06),I(02,1b,89,00),B(stream1 ,13),I(2a,24,00,00),B(stream1 ,9),I(26,00,00,00),I(00,00,00,07),I(02,1b,89,00),B(stream1 ,12),I(2a,24,00,00),B(stream1 ,8),I(24,00,00,00),B(stream1 ,13),I(14,24,00,00),B(stream1 ,11),I(1c,14,24,00),B(stream1 ,11),I(24,00,00,00),B(stream1 ,7),I(14,24,00,00),B(stream1 ,2),I(24,00,00,00),B(stream1 ,7),I(14,23,00,00),B(stream1 ,29),I(24,00,00,00),B(stream1 ,4),I(23,00,00,00),B(stream1 ,30),I(1f,05,23,00),B(stream1 ,31),I(1f,06,23,00),B(stream1 ,32),I(24,00,00,00),B(stream1 ,2),I(23,00,00,00),B(stream1 ,33),I(24,00,00,00),B(stream1 ,2),I(23,00,00,00),B(stream1 ,34),I(1f,0b,24,00),B(boot1 ,26),I(3c,0c,1b,89),B(stream1 ,5),I(45,0e,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 36 binding: hostname */
  static const void *G002344[] = {I(a9,41,00,00),B(stream1 ,28),I(45,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 37 binding: strerror */
  static const void *G002346[] = {I(a9,41,00,00),B(stream1 ,25),I(45,00,00,00)};

  /* Byte-vector with size: 45 is_init: 1 index: 0 binding: initialize-stream1 */
  static const void *G002348[] = {I(87,25,00,00),B(stream1 ,1),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(86,25,00,00),B(stream1 ,13),I(86,25,00,00),B(stream1 ,12),I(86,25,00,00),B(stream1 ,11),I(86,25,00,00),B(stream1 ,10),I(86,25,00,00),B(stream1 ,9),I(86,25,00,00),B(stream1 ,8),I(86,25,00,00),B(stream1 ,7),I(23,00,00,00),B(stream1 ,38),I(23,00,00,00),B(stream1 ,37),I(3b,00,25,00),B(stream1 ,6),I(86,25,00,00),B(stream1 ,5),I(86,25,00,00),B(stream1 ,4),I(23,00,00,00),B(stream1 ,39),I(23,00,00,00),B(stream1 ,36),I(3b,00,25,00),B(stream1 ,3),I(86,25,00,00),B(stream1 ,2),I(23,00,00,00),B(stream1 ,40),I(23,00,00,00),B(stream1 ,35),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_intern_symbol(sym_2338,"r");
  eul_intern_symbol(sym_2339,"w");
  eul_intern_symbol(sym_2340,"a");
  eul_intern_symbol(sym_2341,"r+");
  eul_intern_symbol(sym_2342,"w+");
  eul_intern_symbol(sym_2343,"a+");
  eul_allocate_bytevector( G002337,G002336);
  eul_allocate_bytevector( G002345,G002344);
  eul_allocate_bytevector( G002347,G002346);
  eul_intern_symbol(sym_2350,"strerror");
  eul_intern_symbol(sym_2351,"hostname");
  eul_intern_symbol(sym_2352,"top-level");
  eul_allocate_bytevector( G002349,G002348);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 14; i++)
      stream1_bindings[i] = eul_nil;
  }

  stream1_bindings[ 14] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_posix_codes2321;
  stream1_bindings[ 15] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_open2322;
  stream1_bindings[ 16] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_close2323;
  stream1_bindings[ 17] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_read2324;
  stream1_bindings[ 18] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_write2325;
  stream1_bindings[ 19] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_sprintf2326;
  stream1_bindings[ 20] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_sprintf_string2327;
  stream1_bindings[ 21] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_make_socket2328;
  stream1_bindings[ 22] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_socket_accept2329;
  stream1_bindings[ 23] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_make_connection2330;
  stream1_bindings[ 24] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_socket_strerror2331;
  stream1_bindings[ 25] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_strerror2332;
  stream1_bindings[ 26] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_ntok2333;
  stream1_bindings[ 27] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_read_into_buffer2334;
  stream1_bindings[ 28] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_hostname2335;
  stream1_bindings[ 29] = sym_2338;
  stream1_bindings[ 30] = sym_2339;
  stream1_bindings[ 31] = sym_2340;
  stream1_bindings[ 32] = sym_2341;
  stream1_bindings[ 33] = sym_2342;
  stream1_bindings[ 34] = sym_2343;
  stream1_bindings[ 35] = G002337;
  stream1_bindings[ 36] = G002345;
  stream1_bindings[ 37] = G002347;
  stream1_bindings[ 1] = eul_nil;
  stream1_bindings[ 38] = sym_2350;
  stream1_bindings[ 39] = sym_2351;
  stream1_bindings[ 40] = sym_2352;
  eul_allocate_lambda( stream1_bindings[0], "initialize-stream1", 0, G002349);

  }
}


/* eof */
