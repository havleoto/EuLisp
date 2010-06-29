/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module i-ffi
 **  Copyright: See file i-ffi.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern LispRef i_all_bindings[];
extern LispRef i_notify_bindings[];
extern LispRef collect_bindings[];

/* Module bindings with size 40 */
LispRef i_ffi_bindings[40];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module i-ffi */
void initialize_module_i_ffi()
{
  if (is_initialized) return;
  initialize_module_i_all();
  eul_fast_table_set(eul_modules,"i_ffi",(LispRef) i_ffi_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_2867, sym_2866, sym_2865, sym_2864, sym_2863, G002862, G002860, G002857, G002855, G002852, vec_2825, sym_2848, vec_2812, sym_2824, vec_2787, vec_2762, sym_2786, sym_2784, sym_2782, sym_2780, sym_2778, sym_2776, sym_2774, sym_2772, sym_2770, sym_2768, sym_2766, sym_2764, G002761;

  /* Code vector and literal definitions */
  eul_allocate_static_cons(cons_2785, NULL, NULL);
  eul_allocate_static_cons(cons_2783, NULL, eul_as_static(cons_2785));
  eul_allocate_static_cons(cons_2781, NULL, eul_as_static(cons_2783));
  eul_allocate_static_cons(cons_2779, NULL, eul_as_static(cons_2781));
  eul_allocate_static_cons(cons_2777, NULL, eul_as_static(cons_2779));
  eul_allocate_static_cons(cons_2775, NULL, eul_as_static(cons_2777));
  eul_allocate_static_cons(cons_2773, NULL, eul_as_static(cons_2775));
  eul_allocate_static_cons(cons_2771, NULL, eul_as_static(cons_2773));
  eul_allocate_static_cons(cons_2769, NULL, eul_as_static(cons_2771));
  eul_allocate_static_cons(cons_2767, NULL, eul_as_static(cons_2769));
  eul_allocate_static_cons(cons_2765, NULL, eul_as_static(cons_2767));
  eul_allocate_static_cons(cons_2763, NULL, eul_as_static(cons_2765));
  eul_allocate_static_string(str_2789, "int", 3);
  eul_allocate_static_string(str_2791, "char", 4);
  eul_allocate_static_string(str_2793, "double", 6);
  eul_allocate_static_string(str_2795, "const char *", 12);
  eul_allocate_static_string(str_2797, "void **", 7);
  eul_allocate_static_string(str_2799, "int", 3);
  eul_allocate_static_string(str_2801, "const char *", 12);
  eul_allocate_static_string(str_2803, "int", 3);
  eul_allocate_static_string(str_2805, "void *", 6);
  eul_allocate_static_string(str_2807, "int *", 5);
  eul_allocate_static_string(str_2809, "double *", 8);
  eul_allocate_static_string(str_2811, "char **", 7);
  eul_allocate_static_cons(cons_2810, eul_as_static(str_2811), NULL);
  eul_allocate_static_cons(cons_2808, eul_as_static(str_2809), eul_as_static(cons_2810));
  eul_allocate_static_cons(cons_2806, eul_as_static(str_2807), eul_as_static(cons_2808));
  eul_allocate_static_cons(cons_2804, eul_as_static(str_2805), eul_as_static(cons_2806));
  eul_allocate_static_cons(cons_2802, eul_as_static(str_2803), eul_as_static(cons_2804));
  eul_allocate_static_cons(cons_2800, eul_as_static(str_2801), eul_as_static(cons_2802));
  eul_allocate_static_cons(cons_2798, eul_as_static(str_2799), eul_as_static(cons_2800));
  eul_allocate_static_cons(cons_2796, eul_as_static(str_2797), eul_as_static(cons_2798));
  eul_allocate_static_cons(cons_2794, eul_as_static(str_2795), eul_as_static(cons_2796));
  eul_allocate_static_cons(cons_2792, eul_as_static(str_2793), eul_as_static(cons_2794));
  eul_allocate_static_cons(cons_2790, eul_as_static(str_2791), eul_as_static(cons_2792));
  eul_allocate_static_cons(cons_2788, eul_as_static(str_2789), eul_as_static(cons_2790));
  eul_allocate_static_cons(cons_2823, NULL, NULL);
  eul_allocate_static_cons(cons_2822, NULL, eul_as_static(cons_2823));
  eul_allocate_static_cons(cons_2821, NULL, eul_as_static(cons_2822));
  eul_allocate_static_cons(cons_2820, NULL, eul_as_static(cons_2821));
  eul_allocate_static_cons(cons_2819, NULL, eul_as_static(cons_2820));
  eul_allocate_static_cons(cons_2818, NULL, eul_as_static(cons_2819));
  eul_allocate_static_cons(cons_2817, NULL, eul_as_static(cons_2818));
  eul_allocate_static_cons(cons_2816, NULL, eul_as_static(cons_2817));
  eul_allocate_static_cons(cons_2815, NULL, eul_as_static(cons_2816));
  eul_allocate_static_cons(cons_2814, NULL, eul_as_static(cons_2815));
  eul_allocate_static_cons(cons_2813, NULL, eul_as_static(cons_2814));
  eul_allocate_static_string(str_2827, "int", 3);
  eul_allocate_static_string(str_2829, "char", 4);
  eul_allocate_static_string(str_2831, "double", 6);
  eul_allocate_static_string(str_2833, "char *", 6);
  eul_allocate_static_string(str_2835, "char *", 6);
  eul_allocate_static_string(str_2837, "int", 3);
  eul_allocate_static_string(str_2839, "void *", 6);
  eul_allocate_static_string(str_2841, "int *", 5);
  eul_allocate_static_string(str_2843, "double *", 8);
  eul_allocate_static_string(str_2845, "char ** ", 8);
  eul_allocate_static_string(str_2850, "", 0);
  eul_allocate_static_cons(cons_2849, eul_as_static(str_2850), NULL);
  eul_allocate_static_cons(cons_2847, NULL, eul_as_static(cons_2849));
  eul_allocate_static_cons(cons_2846, NULL, eul_as_static(cons_2847));
  eul_allocate_static_cons(cons_2844, eul_as_static(str_2845), eul_as_static(cons_2846));
  eul_allocate_static_cons(cons_2842, eul_as_static(str_2843), eul_as_static(cons_2844));
  eul_allocate_static_cons(cons_2840, eul_as_static(str_2841), eul_as_static(cons_2842));
  eul_allocate_static_cons(cons_2838, eul_as_static(str_2839), eul_as_static(cons_2840));
  eul_allocate_static_cons(cons_2836, eul_as_static(str_2837), eul_as_static(cons_2838));
  eul_allocate_static_cons(cons_2834, eul_as_static(str_2835), eul_as_static(cons_2836));
  eul_allocate_static_cons(cons_2832, eul_as_static(str_2833), eul_as_static(cons_2834));
  eul_allocate_static_cons(cons_2830, eul_as_static(str_2831), eul_as_static(cons_2832));
  eul_allocate_static_cons(cons_2828, eul_as_static(str_2829), eul_as_static(cons_2830));
  eul_allocate_static_cons(cons_2826, eul_as_static(str_2827), eul_as_static(cons_2828));
  /* Byte-vector with size: 17 is_init: 0 index: 28 binding: top-level */
  static const void *G002760[] = {I(a9,23,00,00),B(i_ffi ,22),I(89,00,00,00),B(i_ffi ,9),I(2a,23,00,00),B(i_ffi ,23),I(89,00,00,00),B(i_ffi ,2),I(2a,23,00,00),B(i_ffi ,25),I(89,00,00,00),B(i_ffi ,5),I(2a,23,00,00),B(i_ffi ,27),I(89,00,00,00),B(i_ffi ,4),I(45,00,00,00)};

  eul_allocate_static_string(str_2853, "bad defextern result converter ~a", 33);
  /* Byte-vector with size: 14 is_init: 0 index: 30 binding: res-converter-index */
  static const void *G002851[] = {I(aa,1b,24,00),B(i_ffi ,5),I(24,00,00,00),B(collect ,16),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,1a),I(82,23,00,00),B(i_ffi ,29),I(1f,03,24,00),B(i_notify ,6),I(3d,03,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 31 binding: res-converter-as-C-type */
  static const void *G002854[] = {I(aa,24,00,00),B(i_ffi ,4),I(1c,02,45,01)};

  eul_allocate_static_string(str_2858, "bad defextern argument converter ~a", 35);
  /* Byte-vector with size: 14 is_init: 0 index: 33 binding: arg-converter-index */
  static const void *G002856[] = {I(aa,1b,24,00),B(i_ffi ,9),I(24,00,00,00),B(collect ,16),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,1a),I(82,23,00,00),B(i_ffi ,32),I(1f,03,24,00),B(i_notify ,6),I(3d,03,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 34 binding: arg-converter-as-C-type */
  static const void *G002859[] = {I(aa,24,00,00),B(i_ffi ,2),I(1c,02,45,01)};

  /* Byte-vector with size: 45 is_init: 1 index: 0 binding: initialize-i-ffi */
  static const void *G002861[] = {I(87,25,00,00),B(i_ffi ,1),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(86,25,00,00),B(i_ffi ,9),I(23,00,00,00),B(i_ffi ,35),I(23,00,00,00),B(i_ffi ,34),I(3b,01,25,00),B(i_ffi ,8),I(23,00,00,00),B(i_ffi ,36),I(23,00,00,00),B(i_ffi ,33),I(3b,01,25,00),B(i_ffi ,7),I(23,00,00,00),B(i_ffi ,37),I(23,00,00,00),B(i_ffi ,31),I(3b,01,25,00),B(i_ffi ,6),I(86,25,00,00),B(i_ffi ,5),I(86,25,00,00),B(i_ffi ,4),I(23,00,00,00),B(i_ffi ,38),I(23,00,00,00),B(i_ffi ,30),I(3b,01,25,00),B(i_ffi ,3),I(86,25,00,00),B(i_ffi ,2),I(23,00,00,00),B(i_ffi ,39),I(23,00,00,00),B(i_ffi ,28),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_intern_symbol(sym_2764,"<int>");
  eul_intern_symbol(sym_2766,"<character>");
  eul_intern_symbol(sym_2768,"<double>");
  eul_intern_symbol(sym_2770,"<string>");
  eul_intern_symbol(sym_2772,"<vector>");
  eul_intern_symbol(sym_2774,"<file-stream>");
  eul_intern_symbol(sym_2776,"<symbol>");
  eul_intern_symbol(sym_2778,"boolean");
  eul_intern_symbol(sym_2780,"ptr");
  eul_intern_symbol(sym_2782,"<int*>");
  eul_intern_symbol(sym_2784,"<double*>");
  eul_intern_symbol(sym_2786,"<string*>");
  object_class(cons_2785) = eul_static_cons_class;
  eul_car(cons_2785) = sym_2786;
  eul_cdr(cons_2785) = eul_nil;
  object_class(cons_2783) = eul_static_cons_class;
  eul_car(cons_2783) = sym_2784;
  object_class(cons_2781) = eul_static_cons_class;
  eul_car(cons_2781) = sym_2782;
  object_class(cons_2779) = eul_static_cons_class;
  eul_car(cons_2779) = sym_2780;
  object_class(cons_2777) = eul_static_cons_class;
  eul_car(cons_2777) = sym_2778;
  object_class(cons_2775) = eul_static_cons_class;
  eul_car(cons_2775) = sym_2776;
  object_class(cons_2773) = eul_static_cons_class;
  eul_car(cons_2773) = sym_2774;
  object_class(cons_2771) = eul_static_cons_class;
  eul_car(cons_2771) = sym_2772;
  object_class(cons_2769) = eul_static_cons_class;
  eul_car(cons_2769) = sym_2770;
  object_class(cons_2767) = eul_static_cons_class;
  eul_car(cons_2767) = sym_2768;
  object_class(cons_2765) = eul_static_cons_class;
  eul_car(cons_2765) = sym_2766;
  object_class(cons_2763) = eul_static_cons_class;
  eul_car(cons_2763) = sym_2764;
  eul_allocate_vector(vec_2762,12,cons_2763);
  object_class(str_2789) = eul_static_string_class;
  object_class(str_2791) = eul_static_string_class;
  object_class(str_2793) = eul_static_string_class;
  object_class(str_2795) = eul_static_string_class;
  object_class(str_2797) = eul_static_string_class;
  object_class(str_2799) = eul_static_string_class;
  object_class(str_2801) = eul_static_string_class;
  object_class(str_2803) = eul_static_string_class;
  object_class(str_2805) = eul_static_string_class;
  object_class(str_2807) = eul_static_string_class;
  object_class(str_2809) = eul_static_string_class;
  object_class(str_2811) = eul_static_string_class;
  object_class(cons_2810) = eul_static_cons_class;
  eul_cdr(cons_2810) = eul_nil;
  object_class(cons_2808) = eul_static_cons_class;
  object_class(cons_2806) = eul_static_cons_class;
  object_class(cons_2804) = eul_static_cons_class;
  object_class(cons_2802) = eul_static_cons_class;
  object_class(cons_2800) = eul_static_cons_class;
  object_class(cons_2798) = eul_static_cons_class;
  object_class(cons_2796) = eul_static_cons_class;
  object_class(cons_2794) = eul_static_cons_class;
  object_class(cons_2792) = eul_static_cons_class;
  object_class(cons_2790) = eul_static_cons_class;
  object_class(cons_2788) = eul_static_cons_class;
  eul_allocate_vector(vec_2787,12,cons_2788);
  eul_intern_symbol(sym_2824,"void");
  object_class(cons_2823) = eul_static_cons_class;
  eul_car(cons_2823) = sym_2824;
  eul_cdr(cons_2823) = eul_nil;
  object_class(cons_2822) = eul_static_cons_class;
  eul_car(cons_2822) = sym_2786;
  object_class(cons_2821) = eul_static_cons_class;
  eul_car(cons_2821) = sym_2784;
  object_class(cons_2820) = eul_static_cons_class;
  eul_car(cons_2820) = sym_2782;
  object_class(cons_2819) = eul_static_cons_class;
  eul_car(cons_2819) = sym_2780;
  object_class(cons_2818) = eul_static_cons_class;
  eul_car(cons_2818) = sym_2778;
  object_class(cons_2817) = eul_static_cons_class;
  eul_car(cons_2817) = sym_2776;
  object_class(cons_2816) = eul_static_cons_class;
  eul_car(cons_2816) = sym_2770;
  object_class(cons_2815) = eul_static_cons_class;
  eul_car(cons_2815) = sym_2768;
  object_class(cons_2814) = eul_static_cons_class;
  eul_car(cons_2814) = sym_2766;
  object_class(cons_2813) = eul_static_cons_class;
  eul_car(cons_2813) = sym_2764;
  eul_allocate_vector(vec_2812,11,cons_2813);
  object_class(str_2827) = eul_static_string_class;
  object_class(str_2829) = eul_static_string_class;
  object_class(str_2831) = eul_static_string_class;
  object_class(str_2833) = eul_static_string_class;
  object_class(str_2835) = eul_static_string_class;
  object_class(str_2837) = eul_static_string_class;
  object_class(str_2839) = eul_static_string_class;
  object_class(str_2841) = eul_static_string_class;
  object_class(str_2843) = eul_static_string_class;
  object_class(str_2845) = eul_static_string_class;
  eul_intern_symbol(sym_2848,"*");
  object_class(str_2850) = eul_static_string_class;
  object_class(cons_2849) = eul_static_cons_class;
  eul_cdr(cons_2849) = eul_nil;
  object_class(cons_2847) = eul_static_cons_class;
  eul_car(cons_2847) = sym_2848;
  object_class(cons_2846) = eul_static_cons_class;
  eul_car(cons_2846) = sym_2824;
  object_class(cons_2844) = eul_static_cons_class;
  object_class(cons_2842) = eul_static_cons_class;
  object_class(cons_2840) = eul_static_cons_class;
  object_class(cons_2838) = eul_static_cons_class;
  object_class(cons_2836) = eul_static_cons_class;
  object_class(cons_2834) = eul_static_cons_class;
  object_class(cons_2832) = eul_static_cons_class;
  object_class(cons_2830) = eul_static_cons_class;
  object_class(cons_2828) = eul_static_cons_class;
  object_class(cons_2826) = eul_static_cons_class;
  eul_allocate_vector(vec_2825,13,cons_2826);
  eul_allocate_bytevector( G002761,G002760);
  object_class(str_2853) = eul_static_string_class;
  eul_allocate_bytevector( G002852,G002851);
  eul_allocate_bytevector( G002855,G002854);
  object_class(str_2858) = eul_static_string_class;
  eul_allocate_bytevector( G002857,G002856);
  eul_allocate_bytevector( G002860,G002859);
  eul_intern_symbol(sym_2863,"arg-converter-as-C-type");
  eul_intern_symbol(sym_2864,"arg-converter-index");
  eul_intern_symbol(sym_2865,"res-converter-as-C-type");
  eul_intern_symbol(sym_2866,"res-converter-index");
  eul_intern_symbol(sym_2867,"top-level");
  eul_allocate_bytevector( G002862,G002861);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 10; i++)
      i_ffi_bindings[i] = eul_nil;
  }

  i_ffi_bindings[ 10] = sym_2764;
  i_ffi_bindings[ 11] = sym_2766;
  i_ffi_bindings[ 12] = sym_2768;
  i_ffi_bindings[ 13] = sym_2770;
  i_ffi_bindings[ 14] = sym_2772;
  i_ffi_bindings[ 15] = sym_2774;
  i_ffi_bindings[ 16] = sym_2776;
  i_ffi_bindings[ 17] = sym_2778;
  i_ffi_bindings[ 18] = sym_2780;
  i_ffi_bindings[ 19] = sym_2782;
  i_ffi_bindings[ 20] = sym_2784;
  i_ffi_bindings[ 21] = sym_2786;
  i_ffi_bindings[ 22] = vec_2762;
  i_ffi_bindings[ 23] = vec_2787;
  i_ffi_bindings[ 24] = sym_2824;
  i_ffi_bindings[ 25] = vec_2812;
  i_ffi_bindings[ 26] = sym_2848;
  i_ffi_bindings[ 27] = vec_2825;
  i_ffi_bindings[ 28] = G002761;
  i_ffi_bindings[ 29] = str_2853;
  i_ffi_bindings[ 30] = G002852;
  i_ffi_bindings[ 31] = G002855;
  i_ffi_bindings[ 32] = str_2858;
  i_ffi_bindings[ 33] = G002857;
  i_ffi_bindings[ 34] = G002860;
  i_ffi_bindings[ 1] = eul_nil;
  i_ffi_bindings[ 35] = sym_2863;
  i_ffi_bindings[ 36] = sym_2864;
  i_ffi_bindings[ 37] = sym_2865;
  i_ffi_bindings[ 38] = sym_2866;
  i_ffi_bindings[ 39] = sym_2867;
  eul_allocate_lambda( i_ffi_bindings[0], "initialize-i-ffi", 0, G002862);

  }
}


/* eof */
