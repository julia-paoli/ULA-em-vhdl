/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "Function to_bit ended without a return statement";
extern char *STD_STANDARD;
static const char *ng2 = "Function to_stdulogic ended without a return statement";
static const char *ng3 = "Function to_x01 ended without a return statement";
static const char *ng4 = "Function to_x01z ended without a return statement";
static const char *ng5 = "Function to_ux01 ended without a return statement";



unsigned char ieee_p_2592010699_sub_7991387870887201249_503743352(char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[24];
    char t9[8];
    unsigned char t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned char t17;
    int t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned char t34;
    int t35;
    int t36;
    int t37;
    int t38;
    unsigned int t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;

LAB0:    t6 = (t4 + 4U);
    t7 = (t1 + 3216);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    *((unsigned char *)t9) = (unsigned char)4;
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 1U;
    t12 = (t5 + 4U);
    t13 = (t2 != 0);
    if (t13 == 1)
        goto LAB3;

LAB2:    t14 = (t5 + 12U);
    *((char **)t14) = t3;
    t15 = (t3 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (t16 == 1);
    if (t17 != 0)
        goto LAB4;

LAB6:    t7 = (t3 + 8U);
    t18 = *((int *)t7);
    t8 = (t3 + 4U);
    t20 = *((int *)t8);
    t10 = (t3 + 0U);
    t22 = *((int *)t10);
    t24 = t22;
    t26 = t20;

LAB15:    t28 = (t26 * t18);
    t29 = (t24 * t18);
    if (t29 <= t28)
        goto LAB16;

LAB18:
LAB5:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t0 = t13;

LAB1:    return t0;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB4:    t19 = (t3 + 0U);
    t20 = *((int *)t19);
    t21 = (t3 + 4U);
    t22 = *((int *)t21);
    t23 = (t3 + 8U);
    t24 = *((int *)t23);
    if (t20 > t22)
        goto LAB7;

LAB8:    if (t24 == -1)
        goto LAB12;

LAB13:    t18 = t20;

LAB9:    t25 = (t3 + 0U);
    t26 = *((int *)t25);
    t27 = (t3 + 8U);
    t28 = *((int *)t27);
    t29 = (t18 - t26);
    t30 = (t29 * t28);
    t31 = (1U * t30);
    t32 = (0 + t31);
    t33 = (t2 + t32);
    t34 = *((unsigned char *)t33);
    t0 = t34;
    goto LAB1;

LAB7:    if (t24 == 1)
        goto LAB10;

LAB11:    t18 = t22;
    goto LAB9;

LAB10:    t18 = t20;
    goto LAB9;

LAB12:    t18 = t22;
    goto LAB9;

LAB14:    goto LAB5;

LAB16:    t11 = (t1 + 1168U);
    t15 = *((char **)t11);
    t11 = (t6 + 56U);
    t19 = *((char **)t11);
    t13 = *((unsigned char *)t19);
    t35 = (t13 - 0);
    t16 = (t35 * 1);
    t30 = (t16 * 9U);
    t11 = (t3 + 0U);
    t36 = *((int *)t11);
    t21 = (t3 + 8U);
    t37 = *((int *)t21);
    t38 = (t24 - t36);
    t31 = (t38 * t37);
    t32 = (1U * t31);
    t39 = (0 + t32);
    t23 = (t2 + t39);
    t17 = *((unsigned char *)t23);
    t40 = (t17 - 0);
    t41 = (t40 * 1);
    t42 = (t30 + t41);
    t43 = (1U * t42);
    t44 = (0 + t43);
    t25 = (t15 + t44);
    t34 = *((unsigned char *)t25);
    t27 = (t6 + 56U);
    t33 = *((char **)t27);
    t27 = (t33 + 0);
    *((unsigned char *)t27) = t34;

LAB17:    if (t24 == t26)
        goto LAB18;

LAB19:    t20 = (t24 + t18);
    t24 = t20;
    goto LAB15;

LAB20:;
}

unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *t1, unsigned char t2, unsigned char t3)
{
    char t5[8];
    unsigned char t0;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;

LAB0:    t6 = (t5 + 4U);
    *((unsigned char *)t6) = t2;
    t7 = (t5 + 5U);
    *((unsigned char *)t7) = t3;
    t8 = (t1 + 1288U);
    t9 = *((char **)t8);
    t10 = (t2 - 0);
    t11 = (t10 * 1);
    t12 = (t11 * 9U);
    t13 = (t3 - 0);
    t14 = (t13 * 1);
    t15 = (t12 + t14);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t8 = (t9 + t17);
    t18 = *((unsigned char *)t8);
    t0 = t18;

LAB1:    return t0;
LAB2:;
}

unsigned char ieee_p_2592010699_sub_3496108598716332692_503743352(char *t1, unsigned char t2, unsigned char t3)
{
    char t5[8];
    unsigned char t0;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned char t25;

LAB0:    t6 = (t5 + 4U);
    *((unsigned char *)t6) = t2;
    t7 = (t5 + 5U);
    *((unsigned char *)t7) = t3;
    t8 = (t1 + 1648U);
    t9 = *((char **)t8);
    t8 = (t1 + 1288U);
    t10 = *((char **)t8);
    t11 = (t2 - 0);
    t12 = (t11 * 1);
    t13 = (t12 * 9U);
    t14 = (t3 - 0);
    t15 = (t14 * 1);
    t16 = (t13 + t15);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t8 = (t10 + t18);
    t19 = *((unsigned char *)t8);
    t20 = (t19 - 0);
    t21 = (t20 * 1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t24 = (t9 + t23);
    t25 = *((unsigned char *)t24);
    t0 = t25;

LAB1:    return t0;
LAB2:;
}

unsigned char ieee_p_2592010699_sub_3488546069778340532_503743352(char *t1, unsigned char t2, unsigned char t3)
{
    char t5[8];
    unsigned char t0;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;

LAB0:    t6 = (t5 + 4U);
    *((unsigned char *)t6) = t2;
    t7 = (t5 + 5U);
    *((unsigned char *)t7) = t3;
    t8 = (t1 + 1408U);
    t9 = *((char **)t8);
    t10 = (t2 - 0);
    t11 = (t10 * 1);
    t12 = (t11 * 9U);
    t13 = (t3 - 0);
    t14 = (t13 * 1);
    t15 = (t12 + t14);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t8 = (t9 + t17);
    t18 = *((unsigned char *)t8);
    t0 = t18;

LAB1:    return t0;
LAB2:;
}

unsigned char ieee_p_2592010699_sub_3488768497115059394_503743352(char *t1, unsigned char t2, unsigned char t3)
{
    char t5[8];
    unsigned char t0;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned char t25;

LAB0:    t6 = (t5 + 4U);
    *((unsigned char *)t6) = t2;
    t7 = (t5 + 5U);
    *((unsigned char *)t7) = t3;
    t8 = (t1 + 1648U);
    t9 = *((char **)t8);
    t8 = (t1 + 1408U);
    t10 = *((char **)t8);
    t11 = (t2 - 0);
    t12 = (t11 * 1);
    t13 = (t12 * 9U);
    t14 = (t3 - 0);
    t15 = (t14 * 1);
    t16 = (t13 + t15);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t8 = (t10 + t18);
    t19 = *((unsigned char *)t8);
    t20 = (t19 - 0);
    t21 = (t20 * 1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t24 = (t9 + t23);
    t25 = *((unsigned char *)t24);
    t0 = t25;

LAB1:    return t0;
LAB2:;
}

unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *t1, unsigned char t2, unsigned char t3)
{
    char t5[8];
    unsigned char t0;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;

LAB0:    t6 = (t5 + 4U);
    *((unsigned char *)t6) = t2;
    t7 = (t5 + 5U);
    *((unsigned char *)t7) = t3;
    t8 = (t1 + 1528U);
    t9 = *((char **)t8);
    t10 = (t2 - 0);
    t11 = (t10 * 1);
    t12 = (t11 * 9U);
    t13 = (t3 - 0);
    t14 = (t13 * 1);
    t15 = (t12 + t14);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t8 = (t9 + t17);
    t18 = *((unsigned char *)t8);
    t0 = t18;

LAB1:    return t0;
LAB2:;
}

unsigned char ieee_p_2592010699_sub_3496108612141461530_503743352(char *t1, unsigned char t2, unsigned char t3)
{
    char t5[8];
    unsigned char t0;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned char t25;

LAB0:    t6 = (t5 + 4U);
    *((unsigned char *)t6) = t2;
    t7 = (t5 + 5U);
    *((unsigned char *)t7) = t3;
    t8 = (t1 + 1648U);
    t9 = *((char **)t8);
    t8 = (t1 + 1528U);
    t10 = *((char **)t8);
    t11 = (t2 - 0);
    t12 = (t11 * 1);
    t13 = (t12 * 9U);
    t14 = (t3 - 0);
    t15 = (t14 * 1);
    t16 = (t13 + t15);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t8 = (t10 + t18);
    t19 = *((unsigned char *)t8);
    t20 = (t19 - 0);
    t21 = (t20 * 1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t24 = (t9 + t23);
    t25 = *((unsigned char *)t24);
    t0 = t25;

LAB1:    return t0;
LAB2:;
}

unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *t1, unsigned char t2)
{
    char t4[8];
    unsigned char t0;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned char t12;

LAB0:    t5 = (t4 + 4U);
    *((unsigned char *)t5) = t2;
    t6 = (t1 + 1648U);
    t7 = *((char **)t6);
    t8 = (t2 - 0);
    t9 = (t8 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t6 = (t7 + t11);
    t12 = *((unsigned char *)t6);
    t0 = t12;

LAB1:    return t0;
LAB2:;
}

char *ieee_p_2592010699_sub_16439989832805790689_503743352(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t9[16];
    char t16[16];
    char t23[16];
    char *t0;
    char *t10;
    unsigned int t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    int t21;
    unsigned int t22;
    char *t24;
    unsigned int t25;
    char *t26;
    char *t27;
    int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned char t37;
    char *t38;
    char *t39;
    unsigned char t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned char t45;
    char *t46;
    char *t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    unsigned int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    int t67;
    char *t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;

LAB0:    t10 = (t4 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = (t9 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 1;
    t13 = (t12 + 4U);
    *((unsigned int *)t13) = t11;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (t11 - 1);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = (t6 + 12U);
    t15 = *((unsigned int *)t13);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 1;
    t18 = (t17 + 4U);
    *((unsigned int *)t18) = t15;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t19 = (t15 - 1);
    t20 = (t19 * 1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t4 + 12U);
    t20 = *((unsigned int *)t18);
    t21 = (t20 - 1);
    t22 = (t21 * 1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t24 = (t4 + 12U);
    t25 = *((unsigned int *)t24);
    t26 = (t23 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 1;
    t27 = (t26 + 4U);
    *((unsigned int *)t27) = t25;
    t27 = (t26 + 8U);
    *((int *)t27) = 1;
    t28 = (t25 - 1);
    t29 = (t28 * 1);
    t29 = (t29 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t29;
    t27 = (t7 + 4U);
    t30 = (t1 + 4000);
    t31 = (t27 + 88U);
    *((char **)t31) = t30;
    t32 = (char *)alloca(t22);
    t33 = (t27 + 56U);
    *((char **)t33) = t32;
    xsi_type_set_default_value(t30, t32, t23);
    t34 = (t27 + 64U);
    *((char **)t34) = t23;
    t35 = (t27 + 80U);
    *((unsigned int *)t35) = t22;
    t36 = (t8 + 4U);
    t37 = (t3 != 0);
    if (t37 == 1)
        goto LAB3;

LAB2:    t38 = (t8 + 12U);
    *((char **)t38) = t4;
    t39 = (t8 + 20U);
    t40 = (t5 != 0);
    if (t40 == 1)
        goto LAB5;

LAB4:    t41 = (t8 + 28U);
    *((char **)t41) = t6;
    t42 = (t4 + 12U);
    t29 = *((unsigned int *)t42);
    t43 = (t6 + 12U);
    t44 = *((unsigned int *)t43);
    t45 = (t29 != t44);
    if (t45 != 0)
        goto LAB6;

LAB8:    t10 = (t23 + 8U);
    t14 = *((int *)t10);
    t12 = (t23 + 4U);
    t19 = *((int *)t12);
    t13 = (t23 + 0U);
    t21 = *((int *)t13);
    t28 = t21;
    t48 = t19;

LAB11:    t49 = (t48 * t14);
    t50 = (t28 * t14);
    if (t50 <= t49)
        goto LAB12;

LAB14:
LAB7:    t10 = (t27 + 56U);
    t12 = *((char **)t10);
    t10 = (t23 + 12U);
    t11 = *((unsigned int *)t10);
    t11 = (t11 * 1U);
    t0 = xsi_get_transient_memory(t11);
    memcpy(t0, t12, t11);
    t13 = (t23 + 0U);
    t14 = *((int *)t13);
    t17 = (t23 + 4U);
    t19 = *((int *)t17);
    t18 = (t23 + 8U);
    t21 = *((int *)t18);
    t24 = (t2 + 0U);
    t26 = (t24 + 0U);
    *((int *)t26) = t14;
    t26 = (t24 + 4U);
    *((int *)t26) = t19;
    t26 = (t24 + 8U);
    *((int *)t26) = t21;
    t28 = (t19 - t14);
    t15 = (t28 * t21);
    t15 = (t15 + 1);
    t26 = (t24 + 12U);
    *((unsigned int *)t26) = t15;

LAB1:    return t0;
LAB3:    *((char **)t36) = t3;
    goto LAB2;

LAB5:    *((char **)t39) = t5;
    goto LAB4;

LAB6:    if ((unsigned char)0 == 0)
        goto LAB9;

LAB10:    goto LAB7;

LAB9:    t46 = (t1 + 7736);
    xsi_report(t46, 65U, (unsigned char)3);
    goto LAB10;

LAB12:    t17 = (t1 + 1288U);
    t18 = *((char **)t17);
    t17 = (t3 + 0);
    t24 = (t9 + 0U);
    t51 = *((int *)t24);
    t26 = (t9 + 8U);
    t52 = *((int *)t26);
    t53 = (t28 - t51);
    t11 = (t53 * t52);
    t30 = (t9 + 4U);
    t54 = *((int *)t30);
    xsi_vhdl_check_range_of_index(t51, t54, t52, t28);
    t15 = (1U * t11);
    t20 = (0 + t15);
    t31 = (t17 + t20);
    t37 = *((unsigned char *)t31);
    t55 = (t37 - 0);
    t22 = (t55 * 1);
    xsi_vhdl_check_range_of_index(0, 8, 1, t37);
    t25 = (t22 * 9U);
    t33 = (t5 + 0);
    t34 = (t16 + 0U);
    t56 = *((int *)t34);
    t35 = (t16 + 8U);
    t57 = *((int *)t35);
    t58 = (t28 - t56);
    t29 = (t58 * t57);
    t42 = (t16 + 4U);
    t59 = *((int *)t42);
    xsi_vhdl_check_range_of_index(t56, t59, t57, t28);
    t44 = (1U * t29);
    t60 = (0 + t44);
    t43 = (t33 + t60);
    t40 = *((unsigned char *)t43);
    t61 = (t40 - 0);
    t62 = (t61 * 1);
    xsi_vhdl_check_range_of_index(0, 8, 1, t40);
    t63 = (t25 + t62);
    t64 = (1U * t63);
    t65 = (0 + t64);
    t46 = (t18 + t65);
    t45 = *((unsigned char *)t46);
    t47 = (t27 + 56U);
    t66 = *((char **)t47);
    t47 = (t23 + 0U);
    t67 = *((int *)t47);
    t68 = (t23 + 8U);
    t69 = *((int *)t68);
    t70 = (t28 - t67);
    t71 = (t70 * t69);
    t72 = (1U * t71);
    t73 = (0 + t72);
    t74 = (t66 + t73);
    *((unsigned char *)t74) = t45;

LAB13:    if (t28 == t48)
        goto LAB14;

LAB15:    t19 = (t28 + t14);
    t28 = t19;
    goto LAB11;

LAB16:;
}

char *ieee_p_2592010699_sub_13958870020767780268_503743352(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t9[16];
    char t16[16];
    char t23[16];
    char *t0;
    char *t10;
    unsigned int t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    int t21;
    unsigned int t22;
    char *t24;
    unsigned int t25;
    char *t26;
    char *t27;
    int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned char t37;
    char *t38;
    char *t39;
    unsigned char t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned char t45;
    char *t46;
    char *t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    unsigned int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    int t67;
    char *t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;

LAB0:    t10 = (t4 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = (t9 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 1;
    t13 = (t12 + 4U);
    *((unsigned int *)t13) = t11;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (t11 - 1);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = (t6 + 12U);
    t15 = *((unsigned int *)t13);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 1;
    t18 = (t17 + 4U);
    *((unsigned int *)t18) = t15;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t19 = (t15 - 1);
    t20 = (t19 * 1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t4 + 12U);
    t20 = *((unsigned int *)t18);
    t21 = (t20 - 1);
    t22 = (t21 * 1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t24 = (t4 + 12U);
    t25 = *((unsigned int *)t24);
    t26 = (t23 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 1;
    t27 = (t26 + 4U);
    *((unsigned int *)t27) = t25;
    t27 = (t26 + 8U);
    *((int *)t27) = 1;
    t28 = (t25 - 1);
    t29 = (t28 * 1);
    t29 = (t29 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t29;
    t27 = (t7 + 4U);
    t30 = (t1 + 3896);
    t31 = (t27 + 88U);
    *((char **)t31) = t30;
    t32 = (char *)alloca(t22);
    t33 = (t27 + 56U);
    *((char **)t33) = t32;
    xsi_type_set_default_value(t30, t32, t23);
    t34 = (t27 + 64U);
    *((char **)t34) = t23;
    t35 = (t27 + 80U);
    *((unsigned int *)t35) = t22;
    t36 = (t8 + 4U);
    t37 = (t3 != 0);
    if (t37 == 1)
        goto LAB3;

LAB2:    t38 = (t8 + 12U);
    *((char **)t38) = t4;
    t39 = (t8 + 20U);
    t40 = (t5 != 0);
    if (t40 == 1)
        goto LAB5;

LAB4:    t41 = (t8 + 28U);
    *((char **)t41) = t6;
    t42 = (t4 + 12U);
    t29 = *((unsigned int *)t42);
    t43 = (t6 + 12U);
    t44 = *((unsigned int *)t43);
    t45 = (t29 != t44);
    if (t45 != 0)
        goto LAB6;

LAB8:    t10 = (t23 + 8U);
    t14 = *((int *)t10);
    t12 = (t23 + 4U);
    t19 = *((int *)t12);
    t13 = (t23 + 0U);
    t21 = *((int *)t13);
    t28 = t21;
    t48 = t19;

LAB11:    t49 = (t48 * t14);
    t50 = (t28 * t14);
    if (t50 <= t49)
        goto LAB12;

LAB14:
LAB7:    t10 = (t27 + 56U);
    t12 = *((char **)t10);
    t10 = (t23 + 12U);
    t11 = *((unsigned int *)t10);
    t11 = (t11 * 1U);
    t0 = xsi_get_transient_memory(t11);
    memcpy(t0, t12, t11);
    t13 = (t23 + 0U);
    t14 = *((int *)t13);
    t17 = (t23 + 4U);
    t19 = *((int *)t17);
    t18 = (t23 + 8U);
    t21 = *((int *)t18);
    t24 = (t2 + 0U);
    t26 = (t24 + 0U);
    *((int *)t26) = t14;
    t26 = (t24 + 4U);
    *((int *)t26) = t19;
    t26 = (t24 + 8U);
    *((int *)t26) = t21;
    t28 = (t19 - t14);
    t15 = (t28 * t21);
    t15 = (t15 + 1);
    t26 = (t24 + 12U);
    *((unsigned int *)t26) = t15;

LAB1:    return t0;
LAB3:    *((char **)t36) = t3;
    goto LAB2;

LAB5:    *((char **)t39) = t5;
    goto LAB4;

LAB6:    if ((unsigned char)0 == 0)
        goto LAB9;

LAB10:    goto LAB7;

LAB9:    t46 = (t1 + 7801);
    xsi_report(t46, 65U, (unsigned char)3);
    goto LAB10;

LAB12:    t17 = (t1 + 1288U);
    t18 = *((char **)t17);
    t17 = (t3 + 0);
    t24 = (t9 + 0U);
    t51 = *((int *)t24);
    t26 = (t9 + 8U);
    t52 = *((int *)t26);
    t53 = (t28 - t51);
    t11 = (t53 * t52);
    t30 = (t9 + 4U);
    t54 = *((int *)t30);
    xsi_vhdl_check_range_of_index(t51, t54, t52, t28);
    t15 = (1U * t11);
    t20 = (0 + t15);
    t31 = (t17 + t20);
    t37 = *((unsigned char *)t31);
    t55 = (t37 - 0);
    t22 = (t55 * 1);
    t25 = (t22 * 9U);
    t33 = (t5 + 0);
    t34 = (t16 + 0U);
    t56 = *((int *)t34);
    t35 = (t16 + 8U);
    t57 = *((int *)t35);
    t58 = (t28 - t56);
    t29 = (t58 * t57);
    t42 = (t16 + 4U);
    t59 = *((int *)t42);
    xsi_vhdl_check_range_of_index(t56, t59, t57, t28);
    t44 = (1U * t29);
    t60 = (0 + t44);
    t43 = (t33 + t60);
    t40 = *((unsigned char *)t43);
    t61 = (t40 - 0);
    t62 = (t61 * 1);
    t63 = (t25 + t62);
    t64 = (1U * t63);
    t65 = (0 + t64);
    t46 = (t18 + t65);
    t45 = *((unsigned char *)t46);
    t47 = (t27 + 56U);
    t66 = *((char **)t47);
    t47 = (t23 + 0U);
    t67 = *((int *)t47);
    t68 = (t23 + 8U);
    t69 = *((int *)t68);
    t70 = (t28 - t67);
    t71 = (t70 * t69);
    t72 = (1U * t71);
    t73 = (0 + t72);
    t74 = (t66 + t73);
    *((unsigned char *)t74) = t45;

LAB13:    if (t28 == t48)
        goto LAB14;

LAB15:    t19 = (t28 + t14);
    t28 = t19;
    goto LAB11;

LAB16:;
}

char *ieee_p_2592010699_sub_16447329934917513135_503743352(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t9[16];
    char t16[16];
    char t23[16];
    char *t0;
    char *t10;
    unsigned int t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    int t21;
    unsigned int t22;
    char *t24;
    unsigned int t25;
    char *t26;
    char *t27;
    int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned char t37;
    char *t38;
    char *t39;
    unsigned char t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned char t45;
    char *t46;
    char *t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    unsigned int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned char t71;
    char *t72;
    char *t73;
    int t74;
    char *t75;
    int t76;
    int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;

LAB0:    t10 = (t4 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = (t9 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 1;
    t13 = (t12 + 4U);
    *((unsigned int *)t13) = t11;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (t11 - 1);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = (t6 + 12U);
    t15 = *((unsigned int *)t13);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 1;
    t18 = (t17 + 4U);
    *((unsigned int *)t18) = t15;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t19 = (t15 - 1);
    t20 = (t19 * 1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t4 + 12U);
    t20 = *((unsigned int *)t18);
    t21 = (t20 - 1);
    t22 = (t21 * 1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t24 = (t4 + 12U);
    t25 = *((unsigned int *)t24);
    t26 = (t23 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 1;
    t27 = (t26 + 4U);
    *((unsigned int *)t27) = t25;
    t27 = (t26 + 8U);
    *((int *)t27) = 1;
    t28 = (t25 - 1);
    t29 = (t28 * 1);
    t29 = (t29 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t29;
    t27 = (t7 + 4U);
    t30 = (t1 + 4000);
    t31 = (t27 + 88U);
    *((char **)t31) = t30;
    t32 = (char *)alloca(t22);
    t33 = (t27 + 56U);
    *((char **)t33) = t32;
    xsi_type_set_default_value(t30, t32, t23);
    t34 = (t27 + 64U);
    *((char **)t34) = t23;
    t35 = (t27 + 80U);
    *((unsigned int *)t35) = t22;
    t36 = (t8 + 4U);
    t37 = (t3 != 0);
    if (t37 == 1)
        goto LAB3;

LAB2:    t38 = (t8 + 12U);
    *((char **)t38) = t4;
    t39 = (t8 + 20U);
    t40 = (t5 != 0);
    if (t40 == 1)
        goto LAB5;

LAB4:    t41 = (t8 + 28U);
    *((char **)t41) = t6;
    t42 = (t4 + 12U);
    t29 = *((unsigned int *)t42);
    t43 = (t6 + 12U);
    t44 = *((unsigned int *)t43);
    t45 = (t29 != t44);
    if (t45 != 0)
        goto LAB6;

LAB8:    t10 = (t23 + 8U);
    t14 = *((int *)t10);
    t12 = (t23 + 4U);
    t19 = *((int *)t12);
    t13 = (t23 + 0U);
    t21 = *((int *)t13);
    t28 = t21;
    t48 = t19;

LAB11:    t49 = (t48 * t14);
    t50 = (t28 * t14);
    if (t50 <= t49)
        goto LAB12;

LAB14:
LAB7:    t10 = (t27 + 56U);
    t12 = *((char **)t10);
    t10 = (t23 + 12U);
    t11 = *((unsigned int *)t10);
    t11 = (t11 * 1U);
    t0 = xsi_get_transient_memory(t11);
    memcpy(t0, t12, t11);
    t13 = (t23 + 0U);
    t14 = *((int *)t13);
    t17 = (t23 + 4U);
    t19 = *((int *)t17);
    t18 = (t23 + 8U);
    t21 = *((int *)t18);
    t24 = (t2 + 0U);
    t26 = (t24 + 0U);
    *((int *)t26) = t14;
    t26 = (t24 + 4U);
    *((int *)t26) = t19;
    t26 = (t24 + 8U);
    *((int *)t26) = t21;
    t28 = (t19 - t14);
    t15 = (t28 * t21);
    t15 = (t15 + 1);
    t26 = (t24 + 12U);
    *((unsigned int *)t26) = t15;

LAB1:    return t0;
LAB3:    *((char **)t36) = t3;
    goto LAB2;

LAB5:    *((char **)t39) = t5;
    goto LAB4;

LAB6:    if ((unsigned char)0 == 0)
        goto LAB9;

LAB10:    goto LAB7;

LAB9:    t46 = (t1 + 7866);
    xsi_report(t46, 66U, (unsigned char)3);
    goto LAB10;

LAB12:    t17 = (t1 + 1648U);
    t18 = *((char **)t17);
    t17 = (t1 + 1288U);
    t24 = *((char **)t17);
    t17 = (t3 + 0);
    t26 = (t9 + 0U);
    t51 = *((int *)t26);
    t30 = (t9 + 8U);
    t52 = *((int *)t30);
    t53 = (t28 - t51);
    t11 = (t53 * t52);
    t31 = (t9 + 4U);
    t54 = *((int *)t31);
    xsi_vhdl_check_range_of_index(t51, t54, t52, t28);
    t15 = (1U * t11);
    t20 = (0 + t15);
    t33 = (t17 + t20);
    t37 = *((unsigned char *)t33);
    t55 = (t37 - 0);
    t22 = (t55 * 1);
    xsi_vhdl_check_range_of_index(0, 8, 1, t37);
    t25 = (t22 * 9U);
    t34 = (t5 + 0);
    t35 = (t16 + 0U);
    t56 = *((int *)t35);
    t42 = (t16 + 8U);
    t57 = *((int *)t42);
    t58 = (t28 - t56);
    t29 = (t58 * t57);
    t43 = (t16 + 4U);
    t59 = *((int *)t43);
    xsi_vhdl_check_range_of_index(t56, t59, t57, t28);
    t44 = (1U * t29);
    t60 = (0 + t44);
    t46 = (t34 + t60);
    t40 = *((unsigned char *)t46);
    t61 = (t40 - 0);
    t62 = (t61 * 1);
    xsi_vhdl_check_range_of_index(0, 8, 1, t40);
    t63 = (t25 + t62);
    t64 = (1U * t63);
    t65 = (0 + t64);
    t47 = (t24 + t65);
    t45 = *((unsigned char *)t47);
    t66 = (t45 - 0);
    t67 = (t66 * 1);
    t68 = (1U * t67);
    t69 = (0 + t68);
    t70 = (t18 + t69);
    t71 = *((unsigned char *)t70);
    t72 = (t27 + 56U);
    t73 = *((char **)t72);
    t72 = (t23 + 0U);
    t74 = *((int *)t72);
    t75 = (t23 + 8U);
    t76 = *((int *)t75);
    t77 = (t28 - t74);
    t78 = (t77 * t76);
    t79 = (1U * t78);
    t80 = (0 + t79);
    t81 = (t73 + t80);
    *((unsigned char *)t81) = t71;

LAB13:    if (t28 == t48)
        goto LAB14;

LAB15:    t19 = (t28 + t14);
    t28 = t19;
    goto LAB11;

LAB16:;
}

char *ieee_p_2592010699_sub_13966210122879502714_503743352(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[128];
    char t8[40];
    char t9[16];
    char t16[16];
    char t23[16];
    char *t0;
    char *t10;
    unsigned int t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    int t21;
    unsigned int t22;
    char *t24;
    unsigned int t25;
    char *t26;
    char *t27;
    int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned char t37;
    char *t38;
    char *t39;
    unsigned char t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned char t45;
    char *t46;
    char *t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    unsigned int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned char t71;
    char *t72;
    char *t73;
    int t74;
    char *t75;
    int t76;
    int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;

LAB0:    t10 = (t4 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = (t9 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 1;
    t13 = (t12 + 4U);
    *((unsigned int *)t13) = t11;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (t11 - 1);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = (t6 + 12U);
    t15 = *((unsigned int *)t13);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 1;
    t18 = (t17 + 4U);
    *((unsigned int *)t18) = t15;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t19 = (t15 - 1);
    t20 = (t19 * 1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t4 + 12U);
    t20 = *((unsigned int *)t18);
    t21 = (t20 - 1);
    t22 = (t21 * 1);
    t22 = (t22 + 1);
    t22 = (t22 * 1U);
    t24 = (t4 + 12U);
    t25 = *((unsigned int *)t24);
    t26 = (t23 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 1;
    t27 = (t26 + 4U);
    *((unsigned int *)t27) = t25;
    t27 = (t26 + 8U);
    *((int *)t27) = 1;
    t28 = (t25 - 1);
    t29 = (t28 * 1);
    t29 = (t29 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t29;
    t27 = (t7 + 4U);
    t30 = (t1 + 3896);
    t31 = (t27 + 88U);
    *((char **)t31) = t30;
    t32 = (char *)alloca(t22);
    t33 = (t27 + 56U);
    *((char **)t33) = t32;
    xsi_type_set_default_value(t30, t32, t23);
    t34 = (t27 + 64U);
    *((char **)t34) = t23;
    t35 = (t27 + 80U);
    *((unsigned int *)t35) = t22;
    t36 = (t8 + 4U);
    t37 = (t3 != 0);
    if (t37 == 1)
        goto LAB3;

LAB2:    t38 = (t8 + 12U);
    *((char **)t38) = t4;
    t39 = (t8 + 20U);
    t40 = (t5 != 0);
    if (t40 == 1)
        goto LAB5;

LAB4:    t41 = (t8 + 28U);
    *((char **)t41) = t6;
    t42 = (t4 + 12U);
    t29 = *((unsigned int *)t42);
    t43 = (t6 + 12U);
    t44 = *((unsigned int *)t43);
    t45 = (t29 != t44);
    if (t45 != 0)
        goto LAB6;

LAB8:    t10 = (t23 + 8U);
    t14 = *((int *)t10);
    t12 = (t23 + 4U);
    t19 = *((int *)t12);
    t13 = (t23 + 0U);
    t21 = *((int *)t13);
    t28 = t21;
    t48 = t19;

LAB11:    t49 = (t48 * t14);
    t50 = (t28 * t14);
    if (t50 <= t49)
        goto LAB12;

LAB14:
LAB7:    t10 = (t27 + 56U);
    t12 Rar! �� ���� \m��4� � F��}� Trabalho1/ModuleTest.prj
 D�T�����d$`b/uM�
��ApE�(>ߡZ�*H!yw��
D�������O|]
x�yR+���Kmd0U��G�F��Ʉ�:�a�֜�L�v�}��x%A�K,vJ����^}g06�� ���߀ Trabalho1/MY_SUBTRATOR.vhd
 �;�����b0TD24�PU���8j@� MKY��t�!�@ȡ<D�xjfcO���j���ɰժE��m��]eU��.���3+.�T��9�����V5�m���d�Ɂ:Г��˭	܌�_�!b��{;vG���_׉_�̢o�$kI�����)�?XkF���y2�k]>�7!P����aW����:ې�<dr��J7���L��yvAA㦇����O4��H�.A���F~J38��{�<��pR@�Lt}��G�!��l88�����c3w�����{M�KL\ňj->�3$=�{R�}^HN�r(�_C)m�j0--Ëa�g���2��7�C6a���2�#1M�>�<E1B3v�e$|��iE�}t�@n�i�� ��+�Ố�,@���G"�����չ��ec��`/��d��V�5�i�w`�5
㽡���fW�MEi��x�R�\�@.(��V�>4q��RG�n�o�\����j���]���2B~�ի�@R;=1(�ͯK�i%���t�'�6�"��<�q�_Y}�c{?�a@�3ά2ʼN?΅2E�}��J��AJ���{#>�ހ�sk�T�SʽV:��UY���K�yʗ���`�s�@0�":�� �@�m� Trabalho1/MY_MULTIPLICADOR.vhd
 |����΋0tC24�pe��?�*V�I ����,�$��U��)`�>A��-��;5�!Kor\��E��񛙯d���q���?k�ֵbO~���Q��3�ѥ��,{-����M�c��G5��U��[�*������G�e|�.�U-���9Յ���w�]�s���������Ԅ��}��P'�w����Ow���ґ�E5/�dU��F����fzN�A���0��d�y��M:�7��1�G"߷�",E�k���S��{�9�� U��K4c��4����;��7����n���e�A>��h���Ο$?�ۀ��ǰ�Zq& I����Jf��	�`o�7�36ǁ`ɀ���^����ɽ8�[�"Y�(:�'DZ	�ҳ��1�3i���r�A��ГL�n��s��v���O��:K�)��9Ũz{q�(�E�k���5��=��m�%�@�!�2MS���M�wK�ުLq�R�[�1$|/�f���8��A����Ӕh=��-����0��
��P���w��g[|RV���Xi�Iw@�$�sS��9dvԕd�[��k�V=T�[P��Q����)�'?�4A�8��,�Ȓ�'D	7�"&=��q���7j��E���d�EB$Fn�ɢV�َ,J�m��X�qsIpևt����qT�0��R%�T�1���ju��\%Ym���*�*��IP_�Ѿ�iRf.�ʸʻ���:&���=~$��+���S��0�mǣy�''=�T�a�˛%�d�2UYS�6��������NyQZ֤��;_�y����8�4�� Bn�� Trabalho1/MY_SOMADOR.vhd
 :bC�����q0d42D�`T�~�$I �V��@�BG��ņx�d,�	qO��w�"�rB����,�E%�n�Ꜹrv��n�t�i��t�����Z3I��ot�eh��<s�F��@v�9��a�m{����>�}�V�fz|'�6f�H�*wF����]�t��}0�|Иvz���;�v���
g�0ґG�M��/S�g C�r�o��çH�D�E���Hg��A� �4:w*}�ې�RIHJ�E?=��� ��lx�W��	�ʶ�Xv���������Z�L�b��a�BP�q��u��!��@>ty�7����(8��fB;�z0J��С�H��x2`#�h��>#<$H9��Š�d���BT16*�P)J�)|P+����_�1�"������cӏ-�R�i[��d/R,�I/\�����m�s=@�f� w�8Q�7����^��95a�����[�8Jq�_��/��MLq��T9H*�秱�V)�∇���?o����l�z�Ss=S��kV���޵s�,��XJ�c�/KY�E�%�-�-/2`�}�?y�v+&�����ϩ�ɷ�xط�gb�͟)��@�dlIu�P�W���v$���1,�%ِfbW0-Z��+�*���Q86� ȩ 3&�p� Trabalho1/Trabalho1.xise
 A�h����n�@T24T_f_�<*{_���80u��������8���P��v��kl�s�lks) @ۥ2s�J��,��8��e-��ki(J�J'kX'�~���3f�e��u����K�f\a�m9��������]�k�:G	�u��~�L�;����q����th�\�-6;�@C�G�ݥ���e��t�2���s�u��1��ܾ0l�ڨ��B���`����A���~�q��^��q~��#�rk�"l���j�+O�g���U�g,g��w@#�
k/{�T�e���F�w�����X���"x�>�\�
��If������5S�;��wO��>X@GN鈰��%�f�;��Bz��)�cҦ���C����&8�O���C��>cv́'��oTm�#�	��=e��q�FG�Q�χ�Eq�"��6�Wۮ�\��t����s9}�b ���X��'`����/Y�S�žHX��J�Fr��ٵc�n�t]�w����4�!�,�R(��L��5�6�̔(�ve[w#���rw��4f��Z��I�U���.��k5���Jz�Y�1O�#5-a�� ��{4Z����4��{:��_L��/+w.����M��hO~��Y��k��W�h�.��scE;iճ�mOJ
~¬p��~�V|�Ps{f�X,޵f���>����ؽ��Qmk\���������Ѻj�i��ְ^�ۄ��<?~n�g#=˄rf&��n�ӹ`�s�33_�IEF^^��y��c.�B�����l.on��^&�c��Raq��}�uQ�c���1��R�v�^<#0<�^�U�c��u��U���zS�pgR �3��r�;g/c�����S�x2�$�%���� ��at ��N��d<$9��,��({ �m�U�Rٯ.��X���PQܶ9V\)�l��l�T��+&�.3s�HRv���@_S.2�M�w�0�_�n�J���YO'���:�q�}|��@��R��Wۺ��6�!�O �|7v;���)���S�ܡ|���ʴX_ʻ-�4`�w��;���NK��U=���?A�qd��^#)������6�"������v׸[΁��@]����u�BY1ʶ�t���x+���e8�lMp�&��%�읶$y د�6�� �X��������w���q!@�>3�啎1��88H�o��̐80�]�b<����Q"��C�$�m3�w;���)F�ܒ�v�D�W�KЇ�s���$2�]Rۥ��i��]0�	��\�`_|��̋҅��<'�e��+��O�>xg���k6M�F�+FTe���z{�DE�q9y|b��s`�Ԩ=�ѩ���x=!B"m��x]�������=Z���q�]

�'F���٣pH��Z�����r�����Z	�9�"ו���e�?�5���'/>=\p�s��r{UE�֯�(84��'���D�׋��iR]�㌨���\Ë�Y��q� .j��i��q(&�&���h�屪UX��p,��4�-v�_Y$����ڪ_"-��NV�V�t����\sB��OId")(P%���'9;�8��	�v;�[��ɯ$t��s����T�_��˄�9����ƏY�����S�*Е�k��L��(sfѤ!�#a��Hc���$JP�����ц��d���R������.���_g!�W�w�!����Ә�F+#<�S	fN�X�K��)R�YY�TN��/�z�b�J�B�V�=���F\�I Ǒ p}C���*a��{RPhN��]S?�[���]�le�GP*�2�R�E�1̂���H���v.^�%F'y�ˡw�!��ˑ�
����c��~p�����v�`d�4�^�{3:\3v-�<���E�B�l�o9LI�vT7I��K�F�٨'��8���#)��3F=lԩ<�'rO�����Ö�;�i>�׬�'�q�f�h�D��?�+j���V�ǩ�i�>��U`�s��y@5�Z�i)kf���@�>@����(w��I�������
)�d�SG�[u�E���vo�a6(�քhK-j�1����P��2�m܊�����О}�F=P�`X�M32�9�L1�΄��i�����-(���d� h\�afn+�� �@Ā㶺���*Kl���#T9��y�l�'����:�.I=d-�G�o"ץ�yj�VE��Q,a�ޣ�q8��	p�ee����r��L�<�їj�l�&���ѿ�������
8��5ro����2S���kw�O��ӧ��R�I��}J�l>_�.�+4L_����`�� ��~;��n�0��UH\%��΋�lfoé��[�B�>[C���6�x��|�(C�k�������Z�x�m'G::H�u�I�P-�z��h�p��~�(�;9� QJ)������椒b*%})�m��?�5 �̚�㒙�
k��D
\NK$^9P��φ\C���;��#Wh:'yNDʚ�!�"�>z͊�EQ-����ڻ�:|;�Hbx����*����>
Q8��z�a�{������x�H<�먹j�>@�#��{3��pW��*u �
�d����v��.��umm,>̳�u��9y3�%MU:+�jg��=1�+sT|i`1,����p�n��.���aA ���>��� �~�{�c�e���	H�f;11� �lNI���:�2ѳ���-�K��j*"Q�S[]�H�i^����鮊����m1��[]�m_�P�k�-��E<MҸy�*�����]2/	N�\����pG.y@ɷ6��B~�=���Ȫ�2KZߖv�ZW�����mg�?Arb �N�n��K� r蚪�|ý/6�ʦ&LiR��<D���ǌI���X��(�%`��
�!+��F��2���!�Q7�����v������Ҫ����8� ��3����R���/��<�.L>��Wq����I��tG�z�éz�Q��3x�sp-�������MĊ�ٗm,2�qM�%�#\�ie���a*'mG�]  ɵ�^'	�.!9gO(�v���̌�Y��pX� =�q2��Aq, � �y֠�y���x�2�
�'z\
�d�G�cU��/&<P�6>.'�*��H��/�ԁ��ء���,����T�����؏�l
��Nkx�ȶ[#�3+�I��!�(���C�� �z�@���@�x��-vb�k�iS��S�q�f�WӌLQ�[F��Ju=��*��3ɓ���:+��ݹ�`=�z��Ԃ��7��%��ցi\�hO-1A�m'x��Ycl��7\`B�N;ɈZ�#1
�SlNśB�uS�Ih	rr����o�t�zb��h4T�!9=R4��b-%W���me�!.t.6K*��}=l�sϓ�|1.؞�����HKhpgX{c	�;���"�����ΣO0�
�D4��������W� ۨ����!����h>�)���#�@�ArM�OI�2>�_\l[<�<.���X6#b9>�,�y�`%EKp'4�6��4:�/�/�U�U���S�m�D��/~1��	B/��YZ%
'���Z�@��L�>��z�"	j..�_^h݉�ɺ�'֫����j��f���;��Ht���9�:�o=��E�	�S���蕸
�ణ��F�aM#t���a�t��⩏���3�j\U��`	�Tz�}�F�C	���X�e)�P��QT�t�F}���AS��\�bg)>P��z�N�Ɓ��q�4���82���"?�R[*���I���:�@��ۥZ���D`�]a��O:����a>ҫ(�<���z!_1J=��tM��H��o]�( =�]V[7��U��7��	#����ά�0I����ji#�$�r��y����+p!(��DȾ"�w���J���J����V�{�Kh���l:��w�(Ƕ��h����u�'3?}���
��gut�����m�B�l�*��xw�n���U�sҔ�8�3���}��ŀ��I���Y�}:1v D�Qښj�K�JՐ�W��h�(�a9�1O��M;sT�{�� O�]p���ӟ.�[�t��v��{�d�-t����>�e�p��Z\suyD�����l`�DZ أ,V;|(zSN��'�(b�q�Ru$Tl�*�S�-��5P;�Q����e$�F�;�Lɏ/i�v%<�Y�5s�ŰI�t�l�LX[��웊��=��6�(�F���&#�3/(gZ���2�9��K>�����d��s��4��n�/
3�d��"=��14RA.Tm�n�����̝���EZ��q�]���ڍ��P�z���Gr�
�>iAoýҁi�]�"������U���Vc"mPxru���L�m⻮�?�U�>�eW]z��U߿��I��� S�����7T-cQQ�,�}�QB��,� �����Pl��������[����rB��|_#Wk T��ψj���/./��NEI���:�}>k�c��P���#zA��M|����'m����J�4��,�㺢L��Z�Jm{V�h�����w?w�;-�g};��3��g$�Q��wey(�I�j�������l��ti��m|��^��['�m�*|lAH���(���P��Z�� �
T7��C�e�+���g&�C��g�{ɶ]O����;^�v�n��1��Mk6�کZ���}���(0� �2�)��{r�M(��z��[��}3�zzǁ��ޏA�$Θ[�n�E����Q�P^�%ĵ5y�0�[�r� `�xe�`Ōf�Hq�b��P��C�僗���K�O䑹�=x�1,��ã������W���|ktU���?˗�N���E$����]�<޻�g��Vk򯺑�/L�q�X����ZS�1��Q}�?��ȼ�4ԓ�g���6
��7�EO?t�\w�uٷYkї��Qk9��B���[�Y�a( [/'|J�me���3�p99}�������I�?���F���;)��*�}G���r����p��gb�5�C­xe/���1}HD�Ď��:< ���T�@{�A�'t��+����|� �����1�ʶ�#C�� ϡ ��� %Trabalho1/iseconfig/ModuleALU.xreport
 )��Tz���~@v333U�WU�߅,�7�$��mֵ^Ku�7�{qǑ��ާ�$�k"i,E8�������J�nM]�U��� �Jo��G0p N�]g������]�8E�g������RY�Uvs��=yo��^����9\Y��w��u��3�G#ǡ U.]&��/�|�&������~|��Ow������������|ymK15Ⱦ�[zV���ʱ�m�k�V�)��*��#�ѹ��?}�a��j��02V���.�|�hh����S�:�b�z���{B{0�k+��&�2�1���\��na���}�O-$e& �!0�Z��S�伸�(@!WZ��*"Ɂ��qs_�B�����S��@ �<�|\���@0.(J�`�0��4� B�fw��L��|�f��]"�L�5	�AާF�����s-kdl_B="�ym�!�@/�0�.o"��'�@��*�?��1�Yv��G9�-�c�r3�*�Jp��Z����<x�gYӤ-R zǐ}�	F���>f�/�.;Zs�2���"D�L�fs�u���<t��x�@Ջ�~ʥOHC#��]�FbAǃ�S�G��7N,?�o�uU��uE�\�N@�6� :V�� ka�d��c�a�VH���)қeD���qU�1���͛-�l<�h8���#��J�qm��%�%*�`V^8��������a?+�K&�g��ty�7���������w����F��摖J��ia[�f�{D>�&厛MǛt�e���6F^/#�> -���i�?9p=/�y�����ߣjžԲ�X�uf�����7��غ�9����,aF�����U���	nb��zn���-㸕a�Q
 ?=�)�~ {����)��� L`��At�e�F�T'���������y��\Ù�6EN�~���1��I_���)�m�����#gW��w�N�rڊ���}��K��b�M�R�&�/��%��
��pS�<����D��l�jq j!�a\2��-u�5id��ju���osf�l��`|4�%�B ��<�Aj�A[���/���������S�M���1�� �<�]�׋8{R�H��A��`�`f4
�&O�J�o��K?f�iK&�3�/�J�Mad�B�x��DKAۈvI����w|j���c�ܷ��~p��,��$�I����fxĶ��=�Y- ���=�JY)��$��L�4���֠�M�{4k��L��s�٨)@�YE%&�a�ػɢT�v&��lB�0&؝,x*���U�#U�7^6^��p� K>o�θ>f=2�h�
fl#_��Y�qُ��6U�� kZ�X��!����}H�_�쇧U+䯲��f��l��B�L	�8�O3& �E>u��+�6M<s��;#�����#��$�Ly7a)|ڶ'�⎛w6�yұ�{�����R��E�ү?�Q�&T$M���#��yZv�c5��b����u!fB�M�L<����>j���t�W�I�腻#5):������ߢ�ZFi:4<�U�p��Z����if��3��D)�%���{���ޞ�� ��Y$���a<�,dk9�ƀ���t[m9%C�2jw?��ـ�Ss~:��{��V�Tb'�S��{gJmWfp��s����XS_��Og2�}q��TsBvGS	R2n
�6�����+p�ּ�,�$%(ͭ�0L��Qj^�'��<�=�ҦN�N������rm�]�>����GILKr=��62���4�J.���St
�+��	�������N&�?��^��i�E�4!gʂ���5L���_,����&Qӓ��
w����}L{��=��,��������� /r9�W+�J��J��*��g8p�Z~=Jz�t��_��hXM�a!!"��FZEr��vY+���Hyُ����׃�tJ�ä�1�������)��t�ܮ- �0Q2-\��e�����w!$�k���y�#��r[����Τ�O���{�P�k�eKΜ����3�:���N&�^K�N_�m99�=�(�Aԗ�����_MC}l�Ō�Κ��\p^|���((䒋~/_���I%�������#���_��vE�pVr=��Qzz������{6G��ꢗ:�S��zD���&�.|�>��~�i	d{$�5�}�q:���a�O:�>W�;�/��	�0�٤m}��N��Z�z�\k&]z�l�q�B%�t�Y"]�o5�aÎ�RR}K_?��kr��D6r)V�lg<;�6���`��-$�vW�ho�Qv���Ո_>���þޔ$�yhP�pp8+%9�P�#J�/�dв�Q�	9��&�SI V8���|1�%���A��t�Y=��=M��R�e*��]��"�u��C�ds������;�`('"�|AD���F��a���B���4�H�cV��Q̕za�Ɍ����fu�y�}��QPw�q���V�����h�ؓ���dR��A�/��U��@zɮfvf����ޅo\܄�1�Ul�*�%׺�����C;ɯ����\���9�1��~��E�z�)=x3]���si�_�]�U�>���,@�/6�
X��q(�i������N�k~-�f<��ο�.�坉+���m�0.��1������QP�phv%�,��H�V�Q���7������e�䇉�{:�[�t�!oN�6�ݠ����a�yI|�?�ԫN!�����!�{慄G�?r��)����ńݼy;(����m��Nv�FɺN���4���>&6I�Ѱ TNG�I����gu9ƚ��%N`���MuK��d������������=9H��H����qv��Kg�uw��F�市~9]��j2)�_:�o(*�ǖO�cxX����J�wfrG�=1Y��g�"y���}��!��Z�gn���N���{�K���˶5��Pd��So���H�sn�3	9�y��g��� f�7o����X��2>�����������~�tH�쒱���^MJv�$�XS����
l�с0t�X`��6�p�V�,[XK��au?�Tp~M���e���\����7V��1-���\+��� a���ފD�HX$�����w�q���ק�?�m!�C�'qK�C@�H�L}E�,��(P����<��]�ai���"�~OE�A��:&��Q���	��5h�nF�� ��  ��O�� (Trabalho1/iseconfig/Trabalho1.projectmgr
 |Lq�����0S24_5_|����s�`˖�[� b�p��^g<���$儂���8B�$�HR�0�π��sq�[�7����o�[�ozK}om6��i����	�_;��ĭ6�,t����B��*,ž�7\�+������J���6C~��*X�K�3�73�ZZۭ$��1.^L!�:�ʫ+����!a�L��y�}��@і�⥃"��uwm�
�ٻy��T|S�gGG�T�r�	�і��B��!	Ap�� G4V�&
>���-7�"3���b%A&�PE ��Ip���MA��a�[���<�1%�6 7b�j��v��Kd.�L�F�t�.2������ȥ���f��͓ny���huM�tiX�^����+֡J�o|�5$�Q*�|�g%�B�[�v� � �]�b����C%z���u�� ��UL��D�F��Ц[P&Mх��� I�B�j�>��tLƖ�wW*�sTr��>�SF"���B�;5Q�:��U"��j���O#��=���9 �5����f2��	K\Q5
9��E�8Ό��l�;���� �e�¯G��IM�W\5��ة�k���<B��a)9,����8Sv�4��U=�T�	�=.�V�K�	��װM7�y�4���lÚ��lv�g��>\���gy�xK�;1�@���=T��Uewn1�,����uN4�@t��6uu����O(s�N�s�+�g]!�W?�z蹴K��&2Ԯ{3H���".���ٴ�i��	��M8JhKz��9{&cmv��ǽ��A"�mWR��Et��;b�_�X�iq^�͒�S�g3Z�Y�/�B;�z$����`�vGduMc�F>j�e�������^Y�$��.���&F���r6�X�~�f��T�"�w]*��;O먅3�G����F{�%"	5l����Me�W3M*\�6Q�#羒r<��J'��d����6�I,Û;O��i�˃ݚ��x�ݙ+�tJ�Z�����;���PJvȀtO�`�{�[��Z������|��n�ü���- ������E!lsC�p�F|"�1���1�!Y=I��oJ��7�����
�#U
��j���o��|7���Ҙ�����=g!֚�Bw��u�!a3��쇽�hm8���&Ɗ���k��4v�򼹲���y����to=�2K�G�T�m�Լ�f$�J�2�1���!��<�ZD�� ̡ t(�)� &Trabalho1/iseconfig/ModuleTest.xreport
 Q������@v333U�WU�߅,�7V��/�^Ku�7�{qǑ��ާ�$�k"i,E8�������J�nM]�M�Z > �$��`	�$3���=K�w��~XK�g�L��<|^�JK2�J�����-�������+�6ӎ�����F}��x�$
�ˡd�������[����t�ϓ�����{�x�9x����~χ-�f&��SbOJ�8>YV#��M��rjӥ76e\y�tZ6rs�o��������[�f0��󵡠R� ����2�-�W�'�
����bl;K�eFy�H	�x>�ʦ��2� U�#E�s}O����ࣣ㲪�	�T4/�+����'�������q��|��e���S��@b�u�<.f��� Ջ��Q�����^ƕ�X	��Z�I�vY����/���D��^t��N�	/���Z��.ؾ�zE��� C&�_a�\�Ea�O��v6T�K�c0�����<Z�Ǣ �gυ U֔�	�	�5���Z9�gP��H��A���%�j1��_\v���eE�$��D�L�fs�u���<Ax�J�]��U("zB|���l�"3<ʞr?�ٺqa�}��5� c�(�����y qҴd�[fk$%#�&�d�~�Y"�)�TKJ`�_sl<ٲ����@6�PS�a>": �ĩ�&�݌R[�R�6Ee�	M1�9��v򼄰2h�7G���{�>o�~��W~���Yǭ �4��T��K
��0������ ��:m7}�ɔpb�S��x,�����_�b���ˁ�|c̭e,�~�CV-�����s�60�t��9���������L�c
6���71TR��$q��������Է��U�O��D3�~{�S�~�@��[5�Scg�g@,�2�u��\�B���N;41w�������b��4��6EN�~����1��I_���)�m�����#gW����N�rڊ��t�}��K��b�M�R�&�/��%��
��pS�<����D��l�jqN5�0�G�����Xy5:�zp7��x6B��h|4�%�B ��<�Aj�A[���_O�c��Gy��v
�Ee�h;D;�4y̻����J"�s+��;&��hJ�L>!*�B�+TT���M,0��L�	xE�W�k%Z?���?"Xz.�C�bO�L��0#���U巃��'��i�ί2J���߫�g�,Kk�3�L5��
@Zl�ߴ����*2O���9�ܭ޵h�٣X`4���0x�Yίf��Vq���"JM�E�w�D���MD)�؅^`M�:X�T	Q#���F�jn�*,l��
ᖟH>o��>f=2�h�
fl#_��Y�r���6U�� kZ�X��!�����(��_�쇧U+䯲��f��l��B�L	�8�Q3& �D|�xLW�l�x&�'��p��~A'�cɸ�	K�ձ=_t۹��Ε�g��@�m�.�/��/UV�s�e'����1=P�68�����9���v�k2��l����B�.���H�y{Mc�Y�j�~����:!n��'@����8�4���RKH�'F���[���Cp�-#>kN#F��B�Z�����m����Zq��N�����at1�~n�m�$�{�MN���0Jnc�o�@���yzj�J���2}�F��*�l�M������y8�!/E�1u��1)����E�\G:$<�С���T����M�{��s
�;�����=I	J3ku����Z��I�=O<�-iS'֧vU����L偉96ڮ��FWUtI$$�%��p�SC��r%X��q��ⶖ�b@��������N&�M���!Z�>�� hB�*
;sꓻ�dq|����GNO�,xp_�T)ܟ��Ǣ��G{�YE�w>�{�2` ��d�i\��+Q�+<?T�������i���V����,а���BBE������u�&W=���f?��7^7��(L{S�D�g#Ws���Sw��q�\Z<A`�dZ�]����ۃ��B>2Ip�)���nG3�nG��^:�)?k���Bծ��/:r�ќ��~���7�z���S=+c����%c�B��^��[K�o�:1c0���/��6���
9$�b����~�iNR[ �pN��]/�=��e��*d\wg#ݢ��S�=���Yof���!TR�V�v�H��^�ܞ����]���!-?�J�X��w'1ԿK�yֹ�@��Ad�Na�6�#k�}t�~��רUƲau�'��ȷ�"Zs�R���y�w:���Z��OK[��5!�1K���xwme���00&ZI����ߠ�)��s��}-ӱ�}�(I��P��b��pVJ ��Be>�L_ɡe��dr��M��� �qE���c@K���z��=��=M��R�2�S���U��M!�A�}������;�`('"�|AD���F��a��؝CBRQ$h��}���%^��f�c9�@j3:�<�>��O(�����ih���&��A�)��!�ze����Pb���*�d�@zɮfvf����ޅo\܄�1�Ul�*�%׺�����C;ɯ����\���9�1��~��E�z�)=x3]���si�_�]�U�>���,@�/6�
X��s���q2�l�����nZߋzY�'�s��˻9gbJ�v�rF��f8\ݠݝ��*ı���J�U�B�#�r�&�������vQ"�H��w���{�D-����(8:���)/����ڕi�>֕��>�-{��Q�ܲ:l��n�~�b�n���}�T�6�S' v�Fɼ�Ul�z�E�$��h�*'#�$���o�j4:��MZ	w���0S��ֺ���d������������=9H��$NHQ^8�S���:��p#ar�A?���5ү:�o(*�ǚO�cxX����J�wfrG�=1Y��g�"s�	7��}�Cyȵ����$���N��|c��R
%������i�2u�)��C�H�sn�3s��Ğ֯���pݾ{�`B"=b�s`����3�/$
 F��Tk%�]�#�J��y5)�䒵aN�z�)��F��ua�F0���q[x�ma/˵��u��P9���6�̈́i���}r4�� l�	Z��Ķ�6%p�B��ϴ,2 �k�����I�������U녯O~%��C��xN◦���������
Y߀P�.�3k[�x1�+�~��+��BI��~OE�A��:&��Q���	Q�˜<�� ����  Trabalho1/_xmsgs/pn_parser.xmsgs
 �0E�����M7tC3/VO{´�@�!`!"�Ҩ�	_��	�H�)��!o~��R�X�*ӵ9�����^�y�7[����8n�{���K\�/S����J�d�\��������f��������8�c�(�S������/�@ڪRVP�~dH��%�	�� n �d�t��[�����ȜͶ~!��L�bh\�J�؉�.<��������hŐ � ӭ��V����Y��!�\�@}�:�����6^�cG���	"�ǎ��e���0a[8=c���M�܀��(7�~�e{ک��<����燳������EM%�qǪC���� EB�6���r{��O��6�� ��b� Trabalho1/_xmsgs/xst.xmsgs
 �tY���� �6e3C4O4^��K:����5\�Ñ�˘���2�`�UM�ZV�q߽�q�j�wR�K�/W���*D��"���I�(�G�@A�һK�x�=�:����?�N�]�jm�`i���S����?O-.?�Etܽw�{=K�)~�"Rza������q8�j����{�lV? ��m�J��dn:v/x�Ш����[�4��ԟ�L����PC��H�ly��G��y|�!HHR?�� ��3�0ޖP�
��ǀ��#CjM:R	�8`�w@�Q S�uG�<��&�U-9C��`W�(�?R��<Q�0�dآ#͑�Jh`����yz�[�d�5�������\�:я�k����q��&'�3�{ ;���*����ikP2ME��Ih��[qe���-r�%�m૗��5�/X��g�5ƥ�y\;��Px�J#Cr��)����L�"��!�9����<� Zq�[��g7e��U�T������/�1��K���$v�����[��3��6�ɽW��+s޷h��-%����}u{\u�D�D�;a<�a��7��^�K�_�:�M@��굅��c�]O��M���,M��A1�ڃ($o%�曏�
sq�'�j�+ZF�����>]�o迵��Sb�m��[=|���g�Ͻ-Ϧ^j�oX�v�~r4��n����3M&��@�S�\2FiA�υ����rt��'5$��D�q�9�!E�!�s�2���U�	E�}�{���PT�o�����Z^�H�N��o�J���K6RZ��C�Z�"G�
a�,�s��꺽^��.����Dז��[L'Z(�gZ�B>gJ6w�@"�)�oyZ�oA�Z���Q[�Tݵ�>s"�0��>o{�e����y��HdՏ�R�T��k�g�m"�����n�=�t��P��p5�����٣�v�A����X-�v���_���e���i��������T�;�� Y�'̀ Trabalho1/_xmsgs/ngdbuild.xmsgs
 R�[���ȃ6T33?VM�*��m�EX&�@�/�Z�jm�"��I9e��?�q�a%�=��HQ8�H��~������U���^����Luo��ۢ�}(�O���(�Z�~=�i��O���ة4�]!�,cmb��rQ�L�o0���&W��"�G�]��樿d�Wf��Rvn�xV6I8��'���.]�z �X�:F��F�������'�]�8�XIg��l����֎A���o QU68�����]����&ph@��Y`TP~�qa����ޭ� ��#6�� ���3� Trabalho1/_xmsgs/map.xmsgs
 �j_����X�6eC33�PE��(ս9l�E��@`I-��RE�@H�C�{孿�%,�-�6
c	�g9��|�:Ntsf}���[��������^�T{��hSc�k�j��Wҟ�}Z:}�ҭ��o�ޭ}�|�W{b����Ec�mm�T��%k`N��D����V?��I�_�$��5E�e�3I3[����¸�"��,��o]���&E&�%1I���I�%XF��~j���Z �a��_'���E]�NFP%��B,�l�fn�
�Q�ͯ����h�?=L���LSx̊���(�$��f���ѐ�j��mf�N�g���BZ��do���Wp��ӽ�pn6a�Af?�$p�!�" ����6U�������7�m02 �Լ>r���n��8�۝��x� x);UW6��Ґ:S��O�"Y�E���\�a�_��HV�����-�'b<i�x�M׌�������`�oL���#�6�� �ә� Trabalho1/_xmsgs/par.xmsgs
 �`e�����T7vCB3�PU�<)Ӣ�R��Ψ��R�)�
"�+��������=�R�^��+�11��ߑg��g��?�ݶ��c!�7��?;�c�|�;V���:��b�����^>Y~���ɟ�Y��'Ÿ�ufk�i��Uz�Z��
��)�=�[��rW-Eɍ���T_��5��%Ln*��S������G��t#z!܈Lc67�G��	��AO��86� `:"�� ��V��5�L�*5�����Rc]�Ô)�G>�Ę@*=O�{̌ `�j�DlV���DbW��a�'4�����N������L^,��~,����E6����ś�$�'1/��n����a�v#�Iwɮ�z�B�^�����`���!Enۣ����\Ņ�f�`�j�bv⮶��8RZ%��b�b�Y��'u��3JP��l���E�����+�x�f�o������(�����:2���Ė�!WIr�Gsl��R��-�N���X��h#9TJMs"��\y���9���~59YH���[���.nlA���'�@V@靊�I��iY���mtgG.�I�D�jlil��@z��M�s���+�_+ݿ#�8�[��ӗ��%0�7�� �h�� Trabalho1/_xmsgs/trce.xmsgs
 �g���ȴ%6eDC#�@U�<*�� �4!	�JN���<Ff[Wy�	��Ǡ�E xsXz*�\�h� ��h��uU�w?�op�O2�����o���װ��#.�G~���l�������Y��~�ξظ����+�I�t�)(��,�U7�G��q`:��Y���J�i�2~����ȧ2�>1�z�gi5H?�ґ�1�����'��@؀��4�G�lir*�Q���ז!yD�P,	1��(�H�:;�.��ț�A[�F�WH�Y^ ��@|�%��l��p����~���^���y� �k�Y�6m��͛;��MBX?G�ɮ��:�=��j2q$�wU	/��F���"M���$��_��m|�6qlX���+�!b�pVV��9��n�$�sU)B���� �Og��m��z�EhBi��$���I����Tf�E${)@��<SM���Z�韩��Td�s�X��%�ar'#��nԅa����c��q,�3$�K,��^�q-���!>�� ��\�K6+o]]w�R�p���5�2q�W*v$0�~R��:�H�_g�xw�j	^F�y����!�B�_��`޼���%}2p� ���s5��2ȷ�;�����־*��!ꒇ%��b����BQ���~n�W@�|�V�y�A�Y[�ۋ������C��8�~>W�%b)����H!i9d�!~���m{���3Ӿ�q�#S�L�����]�����ֳ7^�����L>C{6 ��Yq���Wd&	��&x,��t�*%��.=sy8+���<1��0^o�7E�o�y��� �+�"9�� Y�'̀ Trabalho1/_xmsgs/bitgen.xmsgs
 � ���ȃ6T33?VM�*��m�EX&�@�/�Z�jm�"��I9e��?�q�a%�=��HQ8�H��~������U���^����Luo��ۢ�}(�O���(�Z�~=�i��O���ة4�]!�,cmb��rQ�L�o0���&W��"�G�]��樿d�Wf��Rvn�xV6I8��'���.]�z �X�:F��F�������'�]�8�XIg��l����֎A���o QU68�����]����&ph@��Y`TP~�qa����ޭ� �P�T3�� �"`2� Trabalho1/ModuleALU.vhd
 �G܈����I0eC24�`U�
j��R�� ���A��BG⠅E:E,%	�$�.�|�/1��	U�U-W�∍��q�1�c��?�ϸ�x�k��b}/�:���}f�έj1摏r��ae�����,���~��)R�=D�S�Q�:�O���k�`ה��;��٥g�蠿Z�#:�hSj촦��v���e\����gY�4U�e�Л;,BȳEZ_[��v g�f3U^���E�;������䨂(�|zٳ.s2Ht$�r2���~��g����U�����C
vrܿ��c*(ԧB�˃�B�$g4^,��ϒ�g4D�8WH� �ë��!��1	h��M����ș��a���-��ś'h�/b�k#	-��c	�&�� ���6���O�њ�b ����n+��ۻV�hw^��T�I%��(�M��yS���S���>Dh��u�	��0�pX�����C�}��<���$����^�r�"(�F��"g{ZN�Y��S�+������yܤ����) �w#���
��؝>���}=�?0���9|i+~��oݭd;�^�r����ݰ@Ks��H���rznE�ȬU��Y?���gUfyOr_���q;}�-�-}����I��a�!Ց�i;M��j;�K�B��TO�y�%�[��Xu�i�s���u5��jSX2��\eo��0�ҏ�9az�+\!�	Lr
���z�ݵ��q\�z�%ż�9��)Lx�2X�ˌ��ar�݃�I/%BR�1�#����[L���ɼ3�p���oѹ�st�P'�N�o�i����z��E�"��=��ӥ��1I���ͧ���zKʛ�=�&�^?N(�d
�>�:6�� �� `gn�� Trabalho1/Trabalho1.gise
 |Lq���΅
@D24D�fU�؍�so�v#X����d��cd �u�&-	��x��RGł�$��炖��*�O¦��j�_�O�+��(����B��J�^��g��,�:�.7�}�gғ��[��};��s(:>�xhX&܇����Ff�>��s�aw�%���������T���Lc���q|Lc[���'l�0��?ԩt�nj^��+,�㴟qƩey�AakE:U��P�e��́�~���l��l��Y�!˺��-m���e�)��H�Ce���U���6�b)�/,O�"Y<E����Y�������cs�$q�x��3� �i��s&�YÈ/_��H�UG��>��NS�iXmr!5gJ;(Gt��p����f�?��m3z9��y̮��|�Q?'ԍ��V;+��r���kc'^�_Y�N���Ϭ�K�t�"-D�ǯ���t�ǐu�����M��u�o[�k���Ԋ˘2�eN��w�� =���U���@�Õ�&^z�A�~
~޺�=��Z�gw\� ����ʶx ���y�0��W�Z�R���ɚ7e���;O9�Zn��b�&��$�ZY��˶F��U\Â����e�[��� �./u6��JW��+d��ˠ�o��W�*���Pơ��\����M��ǴPWkvś�c���8?��\�R3x��L�����^�s�V�s+�=�P9��9y>u㋠��~e���v�a`K� ���	�/S��6�b2�J^�8�e4��5��Y�������c�jZ�]U�kd�O�1)��R�!�n㡑��pLکZ�
��0��`��ٸ��B�qύ;�9Ƙǌ��}�-�ذ4_>��v�D5��w#��9�X!��5iB>P�F��0�OP,f�3P4֠hЎ9P<f?s�#I���5PT9(��#�f��F"#��*U�j������}(�&۶���ݙ(��RFh�uR�5r���8��}HG�UQ��UT�BxR'�f�J3�f�}�S��� Z.��~W�hw�U紂��^���W�=��{Mi$�`/I,�(J�+-`����z�r[�i\��e��6	�0xu��k�k��0=b��ߵ~��;?���W��Ġu0�	�T��<��b�eJ�;�_cd3��Kfe��j�8ʰ�a�\����3{؃�����r"^X/��HN.ŷ�wB�/�"�Š�3�У�E�'!޵�dT�������rf�,�빼Y��^�?�Xn�OlD4Ḟ� آ��Wb�	�?q���+�{g>&�o��!�a��˦��V�d1�#�=�]��L_F��|�d=`SdZW/�Ad�p��s�v�h���h�����$�;M缶Wܼe��/�@�t��s�D��-+�[^u��aN�K�� ID9$S?u�n�m��E��}����K�w�a�צA 莿���C�\|�v��3)2kʸ��x���[˲����l-�@A}��}���Zl,a�MP�Lw�@uJ��L ֜��֮��x��:�v�y���>s28Ƃ-���`�$m����1)�η��\6&x����"�Nd8�������=�/w��������#�?�DD��x,=UQP�?���$�0�u�<�:��"�o��� �@����|����Hh'�C��j:��i����b$l|�Q4SS�8-�7���P�mL4.+�N{��d�4�$a���H{*9S�v��)rк�&X�y�*�Y�>��I&�y4����".窜��#�j��TP�$q�+*�A��^14��Q�4ŵϣ���0�/tȄx�`�Bչ0���P�P��<*��?(_�&�����2�~?��^�t���B�>%��TI`���{$r�|����
��0GB36��=*i������32�|��d�u��P��bc��7_I|m��.�ҫ�41B�;���jrR�W��Qm�9n#W�k�����'�#��H'�T�-zfr�Y�c�ק�[�-z�����.�5idw+�<l��w�+1�mryav�m�����-r�k�}���%,F[i��M����BoA�ѥ?8���9
h���D3��c��pP�'���� 	%-��]w��y�4�L"��V´���+�[�ׇ�}�$��� àD�Q?��Uؤ�i�'V�>$�l,�o�JY%���K�+MEC�=0�_���4�!�9�1m���m)�@��R� �]�.qW�\�Y��9 Н��2z�~+dě{��X���?b��AQ��!�h�}D����?`~xa�Q!/����4�Mg�*���d���߄+3�N����/�6�\�	��7�an��ڞ�L%�3��n#����$,���ؤ)=A��)����Dw^��PTr?@:J���C-�T4���R�Pԡj�V�_���#	9f���B�s.,qb�+���U��g0��hF
��a�%�B�~+Vt.��c0\�4!�h2�UV��PIJa�� ��ݗ9�d9q\+^ۤP�K�4��&�X�����i�8+d��.""�$� ��~�6�"� DY&����'v����m��]�����:������n>�� ��  ���  Trabalho1/ModuleALU_summary.html
 ӳxUz�ϴ'0uC33O5v_��.�d�X�$n�&��m��{\q����Ѣ��1ŵ4�H��{���+��ЧC����xQ,Xs9�|o?����@�� �p��}Ju۩O��T�U-)n�O��.�B$WW��{5\�Nl>����z�nĿr)c�F��:��V��o����̳�\�Dab���/:4gեY��P �R�`���J��W�n�wj��:z'A�<K3��i%:�*x�z���B3��@5��������}�f��9�ӷ>��}N��y����_�p�7fT�:N	�&��Ӹ�ۈ���У�Fw9��H�{@*B��r �4�·�:�q\
�����t����p�Kx�:#�%Ƣ�"��G�Uq��t�8t`mclk!�.�(yZ���1�5�ćN�|�����U�E0�~���*�a�w�t�Y�ۋ
T<q����X�'É�SQ�Ζ�3���]�Zv�g���Cb�t�K�N�'Й��D� ܲ&��@n��b$����MV�gp��^i�.#}���;�@d��)x����ꓪ�C}����@�On�N'̰��f8}�Ă_�r�F�ߩ.x5jy��蟚�2���ۊ�g�w��D����q3{��E &���3M�M)���w+���c����	��zcŇfw����q�8���y�1d`������~�sR:������X�.��E
J����p�J,�s��
��Ԥ�F��P������X�ڬ�U�W�U%S�Ԁ?���°W_��C�X>w�&\N��� ��d��_t�j�ި?@�S�*���8�W1xϛ���w�4ŷǀfV�i(v[xķ}Gc�}U)B���yy}Ҿ�\���e�b��ͮU��&ʊ�?��*[�SY�C��Z�|��FX�G
���#��F�J�?ԟ�eg̲3����z�+��?�=3��r�ƫs28ٳ�k����2���FS���B���r�KA��	�8���6�.�� ����.�~�O]���>|�n:��U�1�Ud\�=ƙ�{jiM,-�C�k<�셃Wҹ�Ә�}���J�����]�-p�Pfq8�o7�I��"i�����j���$d��F�E}�HV�q�»G��`{�l2�H�F�ҵ��h�j_�0e�u�iU���ȫ�����*�V�0��_�?�N����~��q�Ζ)����%���A( ����)������J�_��3��H4CBQV������$��Lmc��F�8�m����q�P���i0bD�G�3��XaФ����{L��$�[��d�����W7�u��0�O��)k�ѱa��5M�p�|��~�H~�!�c��C2�R����L,�C.��Z{MB{��^����ìvl�c6r`�gD¢�1A�2��Z�a�ݚ��c	es �I��r��+��6�^����#ɼv�7ڷ���6��ϻa�	����3&B����]���s�{7�+�cg#�2��%����cnu�67h@-u�[�[��mK}f����
>Ķ��@O[�E�2��Y,����O����<~S�y��F�r�]��=1a�?7��(�1)�3�� �1�̀ Trabalho1/ModuleAND.vhd
 t�Z=z��}�0SC35�PT��Eg�{�g��Io��@$���E�[REC�@�rٿd��m����Qtb6��%�Z�$p��9��揩��z�B��{ V�$�ե*B>Y�15x��ٱ�f�������ױ5��H�*,pk޸K�Xѿ��緎�
w��[ �k��/�����3Jk�~�)�5�Z�CHZ���,NƘ<4��B�B�	p��oܲ�;�kbM�y�^�Q%���>8�o$��a����+�X/�-=,������y����wεn�w���*9��F'ku��5�%ZK�3cȁtq:&�G����=�#����a�Q�`��Z�}�fTHdrbǟ���6����l�&u��{��լ}��k�h�<��u��3><pb�C}>W�w�Q�����m��wR�`Ix�����[+.ы��|/��ݐR���YU�ژ����[��ߴ�ˍ�Rq7А�O���S�:�}!�z r���C��qgp�2m"- $?��2� �      � Trabalho1/ModuleOR.bmm
 �����P�a�2�� !ʫ3� Trabalho1/ModuleOR.vhd
 t�Z=z���0TC34�PD݋�^ɚ��y�y�́�ې?� �`Q"�0&K�}��*�I�5@ �0�F���RD�f��Y7wG�+�{����=Z�^^Ͱ�}�vL
ԕ!�,���Z��}��� �fů�^����3�}�R�$;8.�Dp���2��u�ܕ�'=�b��y���Hi��4�����h�B=^&'kL:���Q��M7.)����YD6�{�ԓq�F7W�ir������Rw���`��,88�ޚTO��l��qvu��b����1b�h45������"��E� �� �!.�'I��u��k� �����/C��	�[jZ=�	�Ȕ�TœF<M�m]�)J�A������W�m[�{��d$�!h_�29&hɇ6v�lQ�����T�|?�I���m�'^=���à��i��껰^�dtt� �K*��s�S��o��\��ogn7B�D��h���~/O���+c��h��[����|0 �Ǭ3�� fz�U� Trabalho1/ModuleXOR.vhd
 t�Z=z��{�7tC26�PU��xV�_�	@������	j8*���,�T���� EzjU_dD�77d���o7�f���o�g����=R�]^��+u�vK�ҕ!�,՘����C�z�l]%V�=~���&1y'J����4o��|�]�S��PmJ�s�b��i�恚P�^��B�Z�[ChiU������N�*!�)�˄�hd�}�(��V��v��g�����\�mCӁ���O�v�>��ł����x��5�L=��.�V��a�xp��l�����@΅��ҭ%� ��1�@�8�N�� b-���_e�!{�e�|��%�֤��h���LX�⿐�f���B���I�C]@��A�|�լ{��k� �$wB��#�f|x2��j��|������3���������ׇ�:9��Yv�\���~�c#��;CлYU�ښڌ\῞�r����E'}	D�����E>�G���(=�����qwri�T� �A3�� ~ETȀ Trabalho1/ModuleNOT.vhd
 t�Z=z��x�7tC25�`U�����:	��\\�oA@�	
��U^�����bq���ink�W��U�Ƣ#y����i�Z�������b����z�b���aV�D�թ*BG�1�x� �� �fͨ9ʽ����x9��y�R�;=��D{����BR5ù+d2O>�b��j�煚��814���[�~,�B;�LN֘<5�B�D�h�L�F^3<��;��ZMF���q���:p%��E����'Ɂ׼�_�[ziQ>��g��'f�6,��s����BX��O��I�j.%A�)����t�-8��m~�!Q0'tyK��,��A�Ka��~��2%:�HX�b���f�����+ai0)K�K��N+Զ�������挒G������f���)�8��yxɟ� �;�c`/<x��
��V�f.]��~�|�D.`�B�e_�nzju�������c�Kѣ�q`h�1s�z~IǼ�?�_�n�t���;uj ZY�
3� � ��|�� Trabalho1/ModuleALU.prj
 �,Pz�Ǧ;$ Q�PD��I�M��E8Jz�J�����9�m�'�P��Ά�2�������><�r�2D��A�?�� 4KM߀ #Trabalho1/xst/work/sub00/vhpl00.vho
 ީވ���A�0uDB/V}>����440E�VC�,$FF �!� P,a98�DO�(dV�Ʊ����������������ۧqS��ɽ3���{�s?��f{ss7�s?zg�3�3�hճqXKmȷ������|ly���Q��� W7���[0��eC��$]��^��m<r�c� i��i)Nz���̬<�)Y?�!Rg��R�2����y��Q��o[�&.j,G�fW~_h���!NŇ!���ـ:�#w��B�h���1tp���	�=3����񙀣�:)�����co{=���	<�x��������6��7r�G��x%��_!�	t����/qj�� �>c)[���p�O�$�$��1i�&���� �|�i���۲��l��B�u'�a$!�9EY�f���Eq�!*�<��T�_�-QHm�Ž�8���x�_�ԝ~�U�1lYF�H�H��*�G���Si�B�����΀��oY?�� ڞ�4� #Trabalho1/xst/work/sub00/vhpl03.vho
 Р�>z��4�0d4C/Um���B@�!

 ��QD���pO"�Qpw"r�:�R�IaXX~����,,,,Qd{��7gt����z�������Z�6���؛���������L�n1�o����� ծ9�A�;D�j���S1ٌ�����viB� #�$�F�y�������.p�1�h�?��G��叠�ۛw�Մ���HW�u������^�a��a͆4�����I(4Wm���9�-���Q[Z�|Z۸�Q�������c�w��b̥��L�Q�������P'c���s)j�L�(���q�Q"`�5�Z=����Jx��f�.Fv��5��Ak"*ةez�OE	V���ĖB�t�Ӫ��HA�M@��ܗ=kl�U�+רY��;S�Q:��`j�C<�U_�nCx����G�?�� H7��� #Trabalho1/xst/work/sub00/vhpl01.vho
 Р�>z��?�0dCC/VWӡ�BPB�
�	NR �:�q		
 !E�܉�@�Oȥ@VXVXXXXXXXY,,��Ϲ��'���������_��7�V7����ך�|P�ǿ �D��;v�*�۠׸�)#O�m�h9���{H�oI�>�T�ߓ+j�X���E4�>u����¶���Ăfu:�!��4�DH\E�'�>�nN����c�9M��#נL�d���[0aΌ$���)DNK����\bG:��	�Ñ(�,�}A-r� tbMB��F�$O���ppb�&Rׄ��B����؁�2u/X'0_��ŊL��w�Q
a�9؁�h05�Z#廒:|��K�����6:A{�KX�e��OI	v�����B�u9T���T�1-�T,��f���!�[�w�4űeN�T�����3(�J����|�0��?�� q��k� #Trabalho1/xst/work/sub00/vhpl02.vho
 Р�>z�ʼ- UTC/Vol� �0F��CB"-
��!�*E�;T1wu���d�֊-������b��Ҷ��n,�n��Y?��|}�����\�N���U�~a��g �5�opbz���*���V��M��	�xGeь�y%�!du��jᗜD+��oyG�^���Ǣ�1EL�_�<rI�]7�Z:N�c]��i�����
)�*��N«w�/Sf��7��'��3�s��3��A��a�E^�x�U�lZq��Ԁۖ�xDM�e/Z���ж�������s3Ô���E�:+�^P�����B��7�6ޞ���}Q@秡�?�� ���/� #Trabalho1/xst/work/sub00/vhpl05.vho
 Р�>z���0TD3/ULq��!(!F�@�!DQ�M�B	���H"`�Q��rA��$p ��pCa�� 4%�'�ۆ��q+�u��V��U�^ee�Uw�+�
��я�!����yz��Q*����Hǥ�A�D~������$Ě���J4�,͛?X�$���#��.��:� ��H1�j�\ŧ���z�̏�1��H�S�_�	��Ϡ�e���޳����	/*�_�3ϔ��|ٳ��
#[u�,�pJ4����p��o��=��M�f�yK�(���á�'*��E�q��M��>���.���3Ҫ��"�v�3m
��u��It,4�2l9&jm/,�C�!1���`v2բ��D�n�}J&҆�{�PФ����_��~A�@���6?�� �@0� #Trabalho1/xst/work/sub00/vhpl04.vho
 Р�>z�ɹ+6dCC/s]� ��"!J�GP5�����P@�S�DÚ;��a:H"�H@Xx��!�d�U/��\rG���I,��kz����~K���ֽO����I� �F�q'Oo�Pn�=�F^�so�hO3���������ӊ��7S�1��6�ؐQ��{���Am�L�Mj���{W�*>�[}����j#�kف��ev���j4��A��!LvEv_������Vy��8~�����uO�J,���.ʃ��^���X')۬�7+���I��J�?2�bL�L�ų1 e��~�t�?c�t�czv#8�R Q??�� »π #Trabalho1/xst/work/sub00/vhpl07.vho
 Р�>z��?�0dCC/VWӡ��JBA@��)�D �D�$\�$@B�����П�J���H�,<���������E��s�o��I�:����=�{���1�Z����؞��Ż�<=� .P6�Ӻ��%7�Ů��H��[�����.C�_Т�4�I��N$H�!G�I&O��5�m�����L�'��X����"B�){����#fu�F͹h��&�;^!1�/��b�r�@��I�=�&qK���;��s��	�ã�F��@,���1&�F������U��1bsp�BGr
!>cT۷�� :��{����`ŉ��͆;�(��Kp���h/�4�F�W$~x��K�����E�UAk,**٫iz�PE	vѨ�ԖB�������D�0�TP4ˑY����á{K�aٴ�2��S��5��7S��"�f�C4ͷ#q?�� ��~�� #Trabalho1/xst/work/sub00/vhpl06.vho
 Р�>z�϶" dDB?V[]a	 D��80 O�p�hI8Nq6�c /�2n�v:������Ey>
�3����W��/������������g��QWe�_�AU���  7�?{�̼_�`m�Ș��X�3.�E�-�n�CvA@ym�>�tz h�߾��x�[뺂c�y�}�Mǳ��u~'s��ݑ3!:��O_��,�;�MQ�`F�7J2��yB��2Y���aɔK8��'�%�j�V� V�z!T�%^�lF���M�Џ)�9P�&m��A�b5[���3��+�l��~�U_/@��/���A� Ѽ  X��;� #Trabalho1/xst/work/sub00/vhpl09.vho
 ީވ���v�	0�DU3#�P��;α�Ȋ�--e(X�}q��
u�v�u��:䕮���dn1���GQGB�)j�/�EMBj!E�(��/�h*(�BqQ��)h�!E�����w����ø�:�����n�o7s���ۙ��f�}�����no9��o�~�MN�����ߺ�+K���ݪh)�Xs|�K����l8����b{ ����s� �r�z��]�n�9���'Ӗ���\�&q8x��QӖNlrt ��N���R�ا;��~)+3�o���$�BqWL1�Asr�چM�Bz����$ID����-�.\�9�D�D'��'��O����ʧ9��ERG'��%�ۼ#��Ob�oƠ�s�)>��SD'�(���O�b#�ѱ=:f�Z�(���'�gU�L�Q=qSUq��3zC�1�Q�lT���"lF�:�݄�?~�-�a��{����R�V`n�j�K�Eꃌ���,K,1��O�S fD��^��Z�	�)���kP�"�P��@Y�+"�p]ڪНz���աY�,/n0��am�S����$�BUP����3A��^���Q�G��Q�����hq|��VY�+"�AJ-\��(8�лY��,1��Œ��i�J̉Y��@Zd8A��|��A�Y���*.���YfD�����-2	�VW[��+!P�cd��b(Ө2��]���d�*ߺhS��0�v��{��pǲi�D�� �2%dR�c>Qk� n�AfV��:@7���G:��~�e��3��j-2	�U�M�Z��k4�H��$���z���i4^7 U�<lQ��=�6��c�Y�2�YXx%dP�)M����Hq�л�`�n~�;o��7}�U$PB)�dD�({
Si�MR0�š|�y�� �����i2��dJȯ* &� �����աu0��4��ԣcjO
gWq(�ފo��ɊOIO��rA`P��O�l�~��}��_����+�`2̉Y3K~Z��ځ�I<Z'��m��ண,ȕ�C�[��B�h��c���xsUnVGߤ��eb1�w�7�ο 1�4��}�e��'��0�>hdZ��wkZ:�����,@;Ċ�A�ƚ���"�m�l!V��[SUóL1�4�	Bp��.y�_zF�N�>i�×�P�h|�ɟ�9��nK8o� 1�e�1Bd�Y�+"�bY��cp�&x�.�`y/I#���=�ya�aΘ�?��v�§�B���$}�|AθRl�t�>�>@6����+�D�#�x�H�!���Ez���e3�J�;(Vs!(��N�S�Fy����U6}�@i���i�|�₇�6~#�j�~�_N�}<�V0ȉ�P�b%�s o�Hq��>nd<��?K���^��p��%+"���@�O1�-� b�ܫ�=@�]2̉Y�BZx	�VW[��+!��-+���U����r�	�O5T"��Y�\}#�hnjwx�1�,ȕ�?3���ZE[[!Ds�J�,>�Tf�ƥ�Q���޾I���(4l	�^�s�pr�w�D�,Ң��?���<Wdj�b�Z6Uߚ˽���7L�ߧ,����O�!��D�{���P����;#t�
=�  �2���	���ߊ�<��H�0;�=LGe��s�@��J�t�Ϊ+M�.zN�4�� }���&�����5-}F��{"7A�Q�뾆�t����W�Zg�q�P%����h=1���S�x�E:�r�,9��i��&����%9��h*�',l�N��e@��͕�(�x�Cë�xE^�8-�Г�������<��IYL����H�r��׍P
��͜�@�q�U�t�i�+E�4~"��+(
z��m�*�Ϻ<�i;;�q�n�1�mN�J%�n�HW�ZT��TJ�f�v����J���=Y���NA��Jߕ�O���Q��s��,�rI��_F�1��J]�*�,_�mS�Ë�<۝z����B��I+["�Y��˾0G�NHzFձ�6tO��:��k4{V-Epj�k;�t�N���4;t�	�-���ﲍ�=	,1�\���M|��]���~���s��9Hn��Q̄���<Һ笜���Q�O�Fs�pnu:
L���G���%���t�T�#f��H�%1T��i��.���m 㟶^�����],@h!?�0)�>�����}̐�j�C���J�[���i�:/և�SJ���Y�C
cQ�:��B~* �j�JUM�	��ڎ �����Ȣ�����ƣ�v��~�`y��)U6�'�Gj�-���z}���Uo�TALj����#��4A�Ղ�m(O*]��E�-@4��@Sp��7���-X%*�҄��v��~vY��T9S )�/���afKV	J���>�� E��ښEz�
N�S���%	�������64{��˚<�:��|#x��p(��U��ؕ�����y���i�_$��M���?Cg&�q��>�8�O�����7��A��Z��j00co�#_�.��[�]��?�����{{h0i�cMq�)�ʴ?�� 
�6΀ #Trabalho1/xst/work/sub00/vhpl08.vho
 Р�>z�ȼ/'uDC/sl�"AP`���De�
��ÐT��'U^��g&��"6� �55�ScCS�Ų[*��W6I�ݛ:Id�w�7sw=��f��}�=��3���{���  3���N��A�ܶ�e��ݾΚf�Y��+��+�1��9BV��b�-]�4(I�}3�{��o�+�Kf���wO�>o�}�X�fk|X}��ev�~"�֍-	�H7l�p�»'�[���>�����F��b8�a�=J��I=�qUa��Np����WRR��;U]5Nm�ʹ9H�bW![��fO�I]钐��fMM�5E��9�Eu�6��p� �֗p?�� �� #Trabalho1/xst/work/sub00/vhpl10.vho
 ީވ����~ UDC/U[ɑ�DDGC�"�Ba!	��c�J�!��I��b�GZ�߃]��;�u#�����w�^]ܼ����f�ޝ��.׉ڢ��s������J2q� b��o��;�`��� ��!S}�Su�"?�(��Y�O5jU��Sr�ٴ'�N���\L�B�kYm�{QO(La���m�q	�����Q�?�F�}�&O���<��aТXe���o3��ij
K�E��3ӤJH�QG9J��8qR�n��V=��t=���$�z�l��G�O&��4CΉ��������f$�}�4��_"����L�-�rʍ�JL�vn�ڜҶ�z��Y���bTGO�z�E�@|�ȸ[.Cܚ�s-u�V�<V��	�a=)$z��^���Հf~R?��
 ��܀ #Trabalho1/xst/work/sub00/vhpl11.vho
 ީވ����I0uDC2�p6�9�	
P(m"s��$J"�H�!:���;�|��'@�
P(�"�H������AYd�Y,���黹�9d�v�Ϸ����nng|�ٹ�{73ݽ��s��/o�$_1$�5�|�n�?�{�,;���0oەw6TK	���m�+�Q ���Ϥ���|r�P�hÉ�X�b��[�@?��W�$<�ʁz├d�r� P܈��|��~?�kgp&��vN�G�m1��]u�����ʺ�hm�gQjr$a��dMX�=bW�^�Q��&bE��a�@d���A�m;�#�E��G~���w����3t���w�C��w"U>b��w�=^V�<o�cN}��{�&ӹ]����]�7'����rmTzl�G���X�Lk!L�� �̘�KAMg"�\��9���`�t&��G^�W��/
��O�A�IR��E��4��g�G�r�϶}_&�B�s�{Z#ps�(lݷ]%��?�s��f������!�pUy�����eسa��Y�ܹ=�t빪�D0i���oX��n��{lFJ�/xUE��J�o�F��FO��U��z�t�îWt��@�-.JsR���Ԛk'#�k:r0���5?�� ���.� #Trabalho1/xst/work/sub00/vhpl17.vho
 Xn=���ε" vDc2�pF�e��aK��J*R�l%k��ʍ��YA�*C�d,�m��IRp�TD�����Px4DxQ�A��PKx �(�����77���Qx_��l�w?�377�����sss3s<��盛���qT�B`f�]C~mh�X������ᩪ���h��#9|�lu�l��V�hdߌҜS]f~l��c������g�֗\����l�f��L��l�q�76�#:=�p ir&&�bU�~�?a�0��b���C$Ŭ�/-����ڢ9,�>KW�v&sÊ�8����gT��/;GZ����0�
�.�W&��}D���J���K哸��E0�P� ��D�v��oX�J�|�W�O�qlm��xž�����MD�!?g�wy��Ӻ(R�����2Z3W{��R/���a-�aD��&3�I[����RUs}��m��%w�ǅ5T��^��ǓR�P����j�x�ҥ0�L`�vZ��*8	|iޓ˵��"��g	,�X�{�c�� ���<�@^�ȉs���ب�̋�}	s�8M�?2�#�t������m��~#w�=�\	jJ�^�̴�MZZ�4�]bXS��/�`��G���O;4Sw��/sxE�μqFx�q��� ��:;���'�Jf5���&Nb��)���4��y��ʊ����ӛ.S�	�#�7�p��_,̏����pa\�Ǌ�d9ݩ�+�f�����U�ͣ��o�fM�*fD�)�d�2�x��ݮ�-|ث�ER�&�J�A�&\��2b<x�����~Jo?�� !Vπ #Trabalho1/xst/work/sub00/vhpl14.vho
 g�D����{� dDC/Um�c� �""<QPt��1���#��M5�	4d��$�����^�G�=����z#����̛���vA����w���y�����w.��>��.���f�8㭇|S������Y9>��t6g6Г��a�z�Df���5�H�Qi��\��t{�����P
�dbA���h��}w83���l���-��Gb�2�&��M�KC��E�>^�~v�,��W����Y����v�\�����&FiB̾�1�AM�rDI���h�o5u�X>j`V`�G����q�w5zA.g,th�1Z��50(m_���LT{�&��R��x�ksO������ q�� ����b���$���c�Ç�ҢIk���)�V���V�*��%��%�rĴS��	J̐��z�zK�F����J���=.D�����
r�$�?�9�Z�������*���E)��=3i��i�J�y����#���V���?�� )D�� #Trabalho1/xst/work/sub00/vhpl12.vho
 ��H�����0e43/VL�@4	Z�4J��b�H4	[`�j��-�SLR�+b-�,���Y��6�8!�8l��fX����1,��<�}���?<x�yy�|�	�-�(�N<Ba��.R����V�-�9�A���6d�t�]���ӆ�j��M*�(�N\��N��Y���lzuӫR��jtT�5��w@�8֚ٵ��+�g�>?�f���c_�7���2r�3��7cn�~�4|������B�ᘝ!3�ݮ2 <�j�~��� ��p2ON���?é����um&�g�o���.��u[ �'��ђQ��������,�1k��A�PE{-̰�&����B��,)p�����`����99q��M��(��ʮ�̽�?��� G�O�UN�����O_� �?/?�� ~i��� #Trabalho1/xst/work/sub00/vhpl15.vho
 g�D�����Z DD2�`F̛#��$DH���ɑ�E!7vH2M$b��d���]�]�lM��Q��x1���Aజ�"A��pB<�"����xe���f�ď���.������g窫�WU쯏������]�䕞q>��P׊sI�7Ԣ|����P\V��o݀�t�F1���b1.9�L�dQS�F�A�n�חV�%�i���g�[��R1w��u��9��:y���3��
��������T�����c�iϺ�����q�N�'� C�V����z��6b2�O8�f�1����j��0�?�4:�:W���y��m�F۱;�;Me;��R����H���"��WE�Y������✂��t���<��/,��A]���DIj@����;'����g��p͵�:?�=4}�ju�s��B���:]*�6H�$Ubm 
�vX�:�l��a�PB,�4�ň~	ºQEq�LR��w�C�TC�E��g�.t9�F�T�+|R�d�ʍn�`�B��="������?\��HѰ��Œ�<��p�f�<΅Ė|���F�7�`XMy�Yf��e{���������D��lF�4
e�(�7[��G��ˠ���Q���>��o��7�$�`n�B�F?DR��N�&v��Ie"PT��# ���p7(�$ph��K�A�z�`�@�]�@5#�Uw��yg�|V��-Ř�#Q��j��BPF�[�M�po�������#�
#�&U)���[U��
�>5�!-g�I>p�q��g�WV��b���d]i�	�Ɖ��q�4&|޶T4v*��L#O\�Tv�Z�6m�&,(1��E������e��'��%��?�� �}�m� #Trabalho1/xst/work/sub00/vhpl13.vho
 ��H�����g TD2�`F��,�`��H""1��SAx@�5Gt�lxi�6f�0w\w��D���8(<D�Y� �zNP��@�'8NS�鞼˿e���'9����꺺�g�A���U�*��Ve{ެ�z�_����!	�=��o��KV_'C�@����]���Z�-SZ��B���ߣ�p����HwS��=���׿��sX;�"�;p��f�tVoӴ�a�s���	�zE���%s�����r�mĸ��j���BP�_{�9c����Ka�˼Tt��{�w�<�-��/dK4cF���r��<����S1�ý9��ж՗�uaj�\p ȴ�ۄ@�� �n7�����h&
�
��`��o�x�\"�6[����Q���°I�&	��;��xBM�P&��c�"�o�1	��o�7�~&��n{���̤�������W2K���:��������x��N���!�|��f����=��y���"|�PUG��y�/Ys�Yw���?��z�QN�2l5FzuNCY���V�r�Hakl��Mi�P0�D��w���Ś��q��aw�J�i�~�v!Q�6��,�T�;9�����*�0��<�O�\t���*�U��k%�� �n�L��(h�?�� ��� #Trabalho1/xst/work/sub00/vhpl16.vho
 Xn=����u� uCC/V}�� �(�DT-)Ax#kV��km�Q4�v���u��Ԡ����^k���z=x��Dy=�$߄���� M�̞���zC�dɒLɞ�ߌ�'�����o�a���(��>b��[#O۠�yW��K��b��v#�[���8�N�|�Q����( ^C�%�����_oO>l�L�t�������ё�DIr�Ի�"�W�srZܞ�����|��:��� ����;-#e�h�.밙3�gi
�_6(ŭ���
�#F˱:�$��s3|�-90(%Gay�=Y3����(2Z-pH�y&揓NL��`9#X� \��h��%��F8�0g8}�k ��$��ަ>�)K؉��(�+�#
��;�(�M���6.;;8e�#���mD�R6�&�N��C]KF�V-D.IHӬ�A
� ��.�V�DF�<�oR���V�}�h(�|�vO�A%/����D��6�B�(YD�o.#1U:iQ/�W�\̪�|?��, �0ۀ #Trabalho1/xst/work/sub00/vhpl19.vho
 �T����~�0TT2/6 o{�	*E��i_�A[�ݶ��Q�4�����,ԶRҚ[A�+
B�#
B��,VYae�e��,�l�c[c,h��#�a��4a�ﷹ��o��iE���wٝ�s�������=�����o3��g}����s3;�Vq�QE4'�2�"�a�g���?�[���~��wI]^����~���$��_SlI���)Sf��H��$ϯL�	�<4cp��o܋�s���ב}�F�9�Cb� �N�dao
 ���v���_���0�����o�m���Mb�֮��n&1��B������J��n��:'�9ߨ��� V̄���)[�C!7L�HںVd�է �}��р�C
��b��Q��خ~�(�5������f �[���D�Z#�h�#�9�>��9zsMt�Q����;Tjk��kø��>Q��m�}=�n�||9a_�Ɩc�E�?�X^	�0>\R�ް/���%�y�)�L3�z����}-���\&�|���'P��������kX���/<cg�é����sP~�K8�Y�B�8����̯�h��I��(y/��u1��+��<��c���L��C�x>�i��P����\R��LА?`�wv��gtS���OgS@"�����Ч"�0��M��M:�I��Ns��u4�)y1�MC/��3驁L�Ġ{�T-��1�Md�b;u��!LY ƅ�+���ױ�չ��@����K�|,nC��6�����a��tjOTa�Vt�=��Y&*Q벨}�h�<����x�6����~*K��h�0����U^��E�����Z�]#�Ue 4@IY���Q��i{Pbg(2ؤeA�`C	��9�����i��������Jai���	�;��6��,iA�y fV�hm�z�$s��"�&B#��G	#`ӴqLG��p4��map���Xݾ6��zw�a]�s�g7N�<h�s���i�m��]1��2yw�RS��ԺG1���R�n�E
��r;o�N����]��f�	���$�W�p����Ѩ
�ث*�~XJ/"(>}�L��r�q�(Z� �'~Q/��_��JB~�ث*�zД$_C�e.�o��ט�lÒ�� '�5yEoے�ť:w �NÓ*�~`J0.���!g��4���F�o~�b�;�*�ƒm���g`M�}O��Y%4�:M�?G���.Ԑ���:V���mmęt�+FJ�����F=c�`�W�!�yb�����,���[�:� ���E��]4@Ims��$���ױ���)lR2��h�)/�_��*t0�Y��j[oz�Ua4@M�w3\�F�Z����@�!ɕA�@�$b;�)�h
��2�=�����-i��>!wYnQ[»^�҃w�̭���7J��Y,�V�9]�$���͈�s% 'y~�P��6�(1}l�܋�7�	BFFH�. tJ6�� ?�������ڵ�y���"�n�-�,�[�$�X�����t����L	�;�h���o9>�Q@y�Z�=�q�O9�G��F��G���q^���h��j��Ѕ��:�Z�;02{S���'����M�C[$ۀ4�P��4����!��x���
�dd�ݼ�+�q�M�Bl���x� h��nw%���X��7_ec]7g[7Me��/����ogkM^�;����������SeiFޟl�iN���5\
����ᯥt����I�ȗ���R�e������������B��!���V�XYnȼ�t�~1ćx�Z�?�� �*fo� #Trabalho1/xst/work/sub00/vhpl18.vho
 �T����.�0dCC/Ug<%!�P(D(�Jr�
$�.��$H��ˉ�I��:�R�+,+�e��PXY}��wB��������o[�coqn�ׯ�[�w1k���.�� �[O����?`*!W���o����rw.���`=+k5�/8(G8ْ$�]P�Q�5sMF�ˤt�&Г4��̞3;�;��!��6�P���z�оn���桓���$yd�Z/�&gfN�%���1gDr!�%D.Xt/��p�,%�8H"�,�����`tRKd��"z-3�+���9X�����!>�m����%k����)br�_qBx�508�$�%���c"9c4���k�̬�z�[@��Ӻ��.[2U����j&P�)�*D3?�e
�dn�Z�;S�k�:�Ԯ#e$i��v�Ъ�Ĳ���=���@�HۥF�]<Yc�N�����|�x���9�� 7�餀 Trabalho1/xst/work/hdllib.ref
 �W���� �63#OV^��C�izM�u���-�U��)��U��2�R����I��8D��Ly��>�q�H���Y���<�����g~n/M'�?�9���&�#���F��<p�R|���7��ob�G�Ͻy��˺u{r�UR�L���yq�>���c�>bgP�$�}����~����?XsL���ByCSb~�42�	5̺8����h�"m�.��.�[m<�Qm1�Bk ���6ޒLX�欀�5 cwx5��Dv��e��ݶ�_u�#�W�T�#:�����
����=�C.4q6S*��9����A��sA�����4u�v��	�ߴ+��aV�q 'Ū���ұB�+R��.�����'`B*w�m�x�R'� F1٢�[j�XM'4's�7����4��!����\���*o�(�:��" ���� Trabalho1/xst/work/hdpdeps.ref
 �W�����^0u32S�pe��<�K,)~a۲FT(�i��d�n�b��\�r��)�M��N�%��$%,�������7���(���O�O��l��^��!����ݏw��C�t.���zA���hl�<���<Oh��X��Y[�)�a�gL�O�d_3���4 ż�7����!�oHc�p�4~��m8ݬ���;�*�cC w��|3�/��FAճ4S�l6�[���]|�۟�����~�;e��夀�0:�{	�G�0��2�^�AP�W�TW�O�ੌ*�s��i�.'C�I�䆸d�Z1�(h��fe��93��Ó-�n��(Y��O	M���]|�M�Π�1v(�Ev�{�i���C���j>�N�1��Q֊��~z�o��A!E�Pl������z�j��Sʗ���M�{5~P}��܀Y_��r��b��=�ڼĳY�U��/D�]+^.�l�Q֊�
�]�XWap�A��P�g����WD���͎�]QDW�DE�Rsh�I֧�+GA��ʎ�Rx^!-IzĻ,v��]A���~�Xp�Zd����TQD$��˄��Qej���iI	���W�Uf���nGc��D�:?��𸈨���׀|�64�� �ɨ� Trabalho1/ModuleTest.xst
 D�T�����J63C3�`E��)��ܮ�xQ@�
/d�%�y ���j5�*�k���
Z�@�&�z��'bE�	ň�Q�}�9�-�٣s�S͖�G��o����˒�H]u�ˑ�fLʱ��6�-=�t
_	�p��W�������P�?]ck�}_(}3�C3i�e������]�u�=��&�rh[�=�Y��U�Ѯ�	�֤��^�|��I��������x��B�7�YG��n���IZ����v
�zĢ��Ѥ������E'�q�����n� ���XU:���/t�H�R��7HT��o�E@���"��3��B�!l�
�G|�6��ʬo�⇴��oW��@L��UU�m���Y1��/-�,��r�p��#N`9������#�P\q00��3ێR�_���]��2S����[�TC[�n)p����W�E-hp��4k�����&�]-4�&@��<s�n��R!���'�uǜ�.uJ�&�@>؆h�D���{GP͂e�O����4�4��R<,�Po�I�p� W�յ4���yK���4LZ/�� I��/8����0�����4����d���>�Pߞ@�^ы3�� B�OH� Trabalho1/ModuleALU.xst
 �,Pz���I63C3�`E��)��ܮ�xQ@�
/d�,�9 ���j5�(�k���
Z㍁<M��-�Nċ����_3�g�A16H����c��s���k� ��RM|$��|��"�a�ͮKOO_0�x�+��ʽ5���?b����\k��C�*�>K-�?�8-w�{��M��д��-iY��U�Ѯ��J��>�; M�`W-AG����	_M��X��o�zZ��9�E��o�W`���%��� %��޾oTRy������f�J��
�Zp�B�AX@��x(؀�y���$'CYdX ��@���/ې��p��W��;硳e�U�}�T=`�m���[�6��YTf��
ɐ��q~�[1�M�hi>G��s����8M2�㩁�|	��Y+�~�B��$���a��6rUCK�o$�	VGn^*GF-hp��4'�������.��c��<6O�-�>r�,D62����P����D��v���`'�tY|.�t�&`���N�Nd�/:��E��JL��yaʵ��ސ}�ib4f����y�	;>%��B|��#�I��4����d���>�P���4�E7�� ���1� Trabalho1/ModuleALU.cmd_log
 hQz�Ȣ1&eC3?U]�7��#v�t����m��I�V�bI�߾W���B��B��΅��8���.$f,_�/���9�K{�}H"��J��Yieh,',�w��a}%/���k�(��4ƨsQ��'�d�����:�{pj�e��'��U>�^qG��� �G��]�[NO?-���v�'�>�vm�eĚ(��H�&$@9����~~��՚�/�r#�C5��9tC��*1ʃ��P;�R��V�9�B�����D��\�oiѠ����e�&���b����;��#^��,w���z�S�B�h�Ǒk��� �D[g4�� �DM�� Trabalho1/webtalk_pn.xml
 �j_���ͫ8VD23_6]�MS� G�0#��b��p�I����,F��fb{䃕hM��q'<5���˪ʼ���o��w�W�.�V��^��m��>�y*X��F�y�t�T�s[�#��{=�!������V�����Y�/S�cC����/�0��qh�0x�$%�e
�,�f3�>��5��HD
�쐾��7WG��b4���ۿ @`;F=�jZFB	i���X���H�~ď��x��d��2A��d����!)�S9ț`��� 6���8a���&+�p��$�7&_%H�������/��1��eb��s��.2�͛U|;<{*Q�,�1B8�_@U"<����4D5���h�$e�z��7=�M���n_��pc�vϺ��0^��^�UJ���|'�)�*@�#�&��J���԰z���mj6�o�pl��8b�;ƶ������I�*\��M��5�f�[7\�g��<v.������óFh;}�N�Q^wJt����s0q`������m�M
#^`,4m��9�?'���o�4�72��،@����^���>O��_��N6l��m#�ui	���9����/��VS�x���/f(�s&:2W��R�3��d����������F���Ih��â0���W�7��)�@�F
��\B4|�S�t0�񨅸��ℼ~�I-t?��\�QL��tRӼ$qw;�o��J(2�z��܈x?�pI~��m��1&f&�YL{~��c��u4�yIpg�_^��@f�}���+�2D���:*3�GlZ��x���H�7ŵ�5u`y���R}4\��G
�%գ<�C�i��W${ם~��Գ���?���hOh��O���rCr�4�m%11h빪�Њ)!P�("WS�?�0�,։H�B�#Hna��g8*�1�q(V�͑Y�����y��C9Y%��\��Xz��}�{������,�]��R���}��J�� ���˓�H9�)W�,���g{E���F�6�ۤ��)�����۞���A:4�ё\)Z=��#
?#�����ŏn��f����6w�G�pf|�󾳕�}�I�o�,-��d5� ��  م�e� Trabalho1/ModuleALU.syr
 �@3Pz���l@C24E�fe�q�R��ml���$*d�!�9�	�&����8���~�!����I�0���eW?<�%Y0"V���V�Z�N���yk�L��ݍ;��6���>��ѷ�>�
<tK����*|)Vg6v�Ǒ�S�����N9�"Oi��<ƪ��A+c�Psk�\3ҝ;��w(ҙUpU�ou~˦���'Gqfi��<���2B��q@e�b��n�����x�P*Yb�OO�@����w|�]	�^��$�ɇ6������ͅV��D��to|��$���j��YK�������&���-+�b�1���r�/9[Rx~����%V]Cڕgº"�`��3�� Y��el�795<�.�AU9 �^��@��N�(����F0+�Z����$�-3�?�U}S0�Té���V!�u?��@�y,ft����.-��H�����]h�/@�ʯ�v�[���r������D�#<��'��-���z<ym.�3:�k��eW,�of���#�2�8rʷ��AV62�W�Ļ��1T�V�%~�c���#l �f���$�]d�E�����8ۧB��NNv,x��M-F�$	�:��F�%J��2A��{ݦ����T���E�<j��*�9�.���ԯ)�%�
a<Êh�5ݔo9�yqd�E}+�fC&т���nq�ݹ���]��WT1�Z���i=�,L�:t����bp@�͹.M�� � ��.0�x\��u���b4�4)1��v&A�4�0�ȣS	�Su[���`.l��,�������L�Y�/͊��~H�gR��d��:���*p�7e�pw! cA��k��0�OE����T!��h�:u��8N����������]$��/��-8%r�
r�Z�S��B�.Pu[*������ƣ���`��*�Mw��b�aO�,W9D�"�����l@�QI�F��6J���lX��:j ��Q�+>C�WTb�ۉYE�P��5^�d]���*�b���r�_���'���6���b�X��D� ����3TC=��F3Ћ�|\ 9feL"�+.��3��T����N���+���-���/ȞB�y\�V� Q1ėPr��OB��d�!,[F`[�%i�%�L{�Kkt��	��[�'�����3Rz&��9=ِv�͆�4"0(Pqɾf/���g���?<�R��|�a\؊\�gAZ�͏�����9��W����Ȧ{Kq_iA��EG�MmמW�`�����|��e������E��D��*���נf)�B(c`'ʃ
�a���b�c�E�~�ܻ��h��/�`
۹~������2�O�2�ٲ��[���Z�'cd���n��r�wӠ�ӥ<i 8�l� :�}&I��j
����3� ������/�Azk���4#?��H HTePź#��jkË����I-_�KX���u=[���r�ُ"px�D5�C|jmN0#?Q���ܞZ���	A��S��?�B1w���@��ag-E�2���G�i�͈\O-�J�e�q���MY���[��s��|���7����Xs�.�*��/� �|&�	1�Ɉ�(��G6h��#YɊ�7T��ʠ�aX���S2��H�"���mf#o�+94�i!z����{�)���~T�\})Jc:�pA�Bn�Ij�c>�Q�WS,�7(3��W*a������w>`s��;�
fz4a�"�r�}s	A�4��!����~�.�Z$�w'�æ�S�mʗ?�g9��=L�@Y��+����E�W!�Y!��<�Ĩ�&�ps��[q�у�a!��#r�@��v�����T"t.��ߌ��6Hs��k�';Ēa�#�b��?��a��̴��������׊�>j^;ьi�����>
3��P��Q[/�+@�`e��rP�ϫ�����t�U�~`����<V��Ŵr���l>���B�w��}��2k����TI�H��HD��1up��R��lB�:���z���Y)T�^H��p�BK1J��G嘑/
%>o���8%�+�58�K�U�yIU
���T�<(��y���ݗ�]/��+�X���
?�YW��2ߴ��L�n�P�ͱ��)����m�C"lMKy)��M2#��Ρ��	�˞�}�G9���r���-g�,��Hfm���tC�A!l�C� B���f���(m4 ��\�������O3��l]�+�� =�K ��@����,W̱h9?�������p��K�L�t��&�ֈ��{Q)_:]� ��.̶�R+i��W��]:�+�@����e��I?��sW|ʳ��T��8����I�Ms*?���M)�b3�����N���/�T͘����h(��z�Y|/��2؋� �=��)D�B=J~5&�j-=�Xɸ?1��7x��OHif7M�����L�V4?r$z:e�v��H[�{����T�������j��[4�����Lj�������H����ټĊ�|?�q�K�=-�����.�@q���,R�6^���D�|��==ci-�v��v�en���T�=:Z�vv\om�8�� �mLaV�W^��=��"h]��M>�6�����o��G���ه�9���"I���ǁ����)��P���h���O�[lF��7�.���\�=�	��]II٠�n>��,,F�G���ə�k`��E�Qxk۩4��:�D����cM���%�)�e4����������~,����\��Fa|��jӀ��u;��s4�OQ�Z���h���&�=l)���m1�zh龧���K���z�>�}��V.�5PFk��{��-��g"���"Z��=(t��kV�Uq����v�_mX�G�j�B���#�V�7]�vb��o�H��0��;΍It�c�&:U���l���X~q"�����A|^<l��W���S	|�P]�]&�S�<E�=��h~'���������^N����!�5�~T[z�.I$z	�s��7[J�CNL�n՘/Yزh������!@�"$`�8߆?��~��J��,s�S�SM��sG�A�I���GN�n���+�#×��g���.�� �u3��[���/���?�n3+7��
�����95��Xp���4!;d�w��r͛�/��D�,��-�I������G���I�X��,D�b9��zz���+��N}m	a�#pk�򩣖o�n>�B5n�K�;A{��=�y��?���7j��ߦ�eC;M,[���+�/pa!=8��IkN��~�¨�^�9���C�qh���h��p�^wV��R���S� .?�B.��d����E����r?��y�A�����7���4���r��_^>�>�m���Dk<���A�ZT�^�ዓX��qڒ��@��8�_4��X��K�7�J�.Xy�CI/١�0���N
|���Fc��=?�3ޠH5܇_;���p����pYx�@�Q�P|�������G�G[����3+N�3'�hE�B�w%������r��W/��
�o��c#p����փ���9�<�c�^���7���M�A쬵�Ο�hKi�C�>~S|V�p�7�Ӷ��#����50�q���$��F�m�����-�3���yn�(3� �  ��<߀ Trabalho1/ModuleALU.lso
 #|.Pz�work
�oڬ3� �      � Trabalho1/ModuleALU.stx
 �����HL�IB�� ��   J
π $Trabalho1/ModuleALU_envsettings.html
 ӳxUz���0e334O5_��R�.~������h���,�In[�aGq�6���-����x�vUgC�m�� ���Q\\%��z�����\D�A�*�+��⪺�[��+/��ۍ��Kx��ΎƊ!)�IhϞ��ʪ;��\�jv����8�_��O�"r�S�Zͤ!��en{jK�!��/uo�,��p(��vL� =���ӓ4�0��7��ҋ� �İ�u���������!m`����_��r��j/h�׭Z�J���n=̒D��1��?�.U���I�夞��q�k@�c���NFJ�I$��,x��tW|���!2Z�����'p� n�>
��⼇#��X-���"*�|1g��cm������q�R��ժ0N[KZ�`3W*�H�w⣒(�ҡ�G���T���h��Q��
_�,�iF��8�'Ox�KB�:�W5�%���\P�g���螖Y;���j=��"d���..M�"�d���<q:\%h�YS�4�	4�Mf� Fdצ�[5�R��6��Nơt���&�Af[�G��- o�QB��ڇf�pͯt�W��b���Qx��!+-=[f���Eǭ4w��hglE=����M{0�{�3��ZV.�\98
�l��0"U�
?����o&}Y��W3x�B��֍I*x�;���9��Wg8�Q�;�3d���ӛ�40ǡ*� �k-adl�R�����'QE;E�ڗo���'L|�E��ݪ����F��f�sq3�7�w?j��֎w��G�KP���=q?�n��h��zK�{�����ޕ_<9ئ�o�ו��^�� ���y3��OE#4��.�w����+�t���/�)�^#��7�a2|��Bۭ�u;��9\Rj��V����'��69�^����e���yf��l���	�[���(B��O����U�8���C(�0���^�BrU���
<h��Z!{�h�V��]*���)�mY a��P����1-\�Kb�3��(�{M�i��Mr����LA�9Lk%����T��S�f�E��[ұ�s�Qb��Q�����Hцw@�Fa&W�@�XR���.I
��#ed0��-�x�b��gH�E��t=v088f��.�ĩ%��9��P�B̙�o8�Ҙfڑ�m*D�	jI�}r>:V;5T9J�Ƨ�h ���%0K�!3��� �n�,�d��y���0�qY=W4�1	o���}�#�5.�`Vs�jK�ŉ�L�����r��w�h@{%L���u�[����ְ,�Ƶhʅ�v��g�5ӜF.����k��d�(έ�Ú�{�F��j�=����i���|�9��O���7�$gc�~a���h|��CB�b�o�p��'�����5,�@���=�?;�<*���0+ )��g����ߝ!ɋ8M�
U��M���ߨ��WGle��ӡ��M
��I�M�DV��[����_2Eƛ�}�|���䬿k���4���@?������a��j�f(�5�����%�^{���wx.
LN��#a�a��L�(���x(p|�	^������ɟ�PIfv�������mS¦	�2�B*<oҫsm�r�m��m���4�8kf�k��7h�p��92VG���� �T�)lC�ˑ���*� u���1�� Cת� Trabalho1/PINAGEM.ucf
 u/Pz��� SC%�D��/m�T��t!~Эj{˔."��D�rg�fL��G�	�}���������i��>��V��.vU�S�Elm�<Ґ��qLOI��
�:�)
�
7{>�:�wK��}�a
�^fD�������������Q2InTq��5�� ��  <��O� Trabalho1/ModuleALU.ngr
 �@3Pz�́WC43D_v_�|)����ݝ@���m6�i6�kKM$I�GE+�Ov��J��{��x~,��f$L��x� �$j��1 J�#��9��-�Nϳ7̧�W���z�}y����f�����M��=��ҏ��M=������l��pS���t����ϥ����`���6�<�G���������Qm�~��I����?D}�֦w񥿛u;��~;]v��T��=��ӭ���y�N�2�2����_S��P�[N=�}��R�!R*���h^�@�C��ͮw�]o��3�4�-����F�XM�����o7&�X�4��n����泌��aIY������]swQ�`���j����U�U�@;c��u��A�5%�壀�,7ù�cښk�Ϭ�B@�?����.�;m²�1�E�f��������%6Gy��2G����\�˞��;���%>���h �Gn%ޗm�~Y��ﯦ׌8�q��5�/�'A8�hK�����04f�����!��[ֻ0�=����k�)��� �/�3�:΍��ڔ,����o{�>߀}��������4V��٩������p36pn4�0�=�R,��N}�q2B^��g��F��ٺ�I�9�GɀU쨜Q�}�9�����1sֳ�����;��uC���#>�X�ރ?��'ٰB�r�v��������_o�CS3��� =�:�f�{����|��6}����v�7��N/~�#��wGSKos<k��>�f�����f~��vv���j���k{ݶߪL]5���i��V��8�qo�:.B:�,���玈�Usmnoc����_5Z��%v�`��,��Au��[5������i���:�o�L!}O�n~cOm>��D�|�X���C�{A�~�`��ԅ� ���׋��^�:���o����q#�o��8�� cf��y:�Qﵔr���J��JN���n�N��Eid��t���Uq�8�x��-YpwojϿ�O�����;nZ06��J'�?�[Kp& g�}�xu���66kx�r���#H->����+f��w!]Xw1Sɵ���ʪk8����5�nI�3J(J�����[����j�J'k�J�T��`���dL�!���8|�v��va��Y�)�7������e�����e���IL���n�ϯ���s��+�a���=5�C�>�{ǝ�V;ʣ�ۮ�m����#���t� 5s���%��%�?)d�n��:�K0*���p�3�������S�j����뺉H7o����ϕk�ʕ���|~����	�����il�g{6�oc�����m{ts>mm�_Pt�_Ϧ��wA\.m�����~�O���:�}=�?w��������1��?����Z����������������3uk�������{m�@I榶��鱟�����s��;,��\���Of����b�ͬ�����w����y�v��ݮo_��auMv�0K�`�4��5��в��7�Yq�D��J���X4_W/3.4������\8�����?e�������߁�ͦ����x@�Czn@G��� �]8ε OP���k�0#���$e��(P��2�l�/O�Eʫ Ƿ0hWԞ� o��"�t��sY�����]='v�"ԝ	nx��x�z�>����(m9{��݅�o���qm��}0������F�n��1��4�����\����p�h9x�v�q��t�b����˖d���#��"��N�,[\՗j
�������&���Z֛��9K#`����ן��v�9��^�ˍ���ؗ��)<
3�M��e�#�GIdK�����.����J@�Z/.5;kg ^Kau���i����ÿ�;
�*����A%��Q��qy L��'P�6�q��ܖ2�`ڸ|��Kz��Գ�:S���[��v�u���Nۆ������9v7q�,Z���+�����ز��g�#�_�	xd�9��}���^�K�fY��s��� J:ppSS=wq���+e�\Qщ�+y�'�j��ŭ��NQ���uG�y�������^,�_,���v�����̫Ӧ�@x2�T���T��J	^)ְ�:7�<�)���gmq��:�~��f[�C>>΍�wˢx��x)}�L���Ř�Ƀ]�YS�������ǡ��
o|�|M'ct|���醓U�'�������[��M�o1�g���A�9ѽ '@�֚Q����e Y�+��ڥ�"0P�؝��������q�	��t��:�]�G#c�@�z,]��_�կU�`v���v4ǉ zE���X��`�t�9F�\NVb�b��B�\��V�c�3Ŋ�P�3	H+�0Y��1�A����)b�s`����~h���������Va����jX�����je�S��`�9�RG�vuh.����g���V��̀����M���	C�S<��a��@z�13�b��(�Bg�ă�WR��⻍i@E�=%�qZ���l3	[e���uء��|?��g�w<��Z�U���(ig�Ynjl�pߠK�~ ���g5 9�H� ��\�P�g�I\�g� O�f33
'`�F��2�}�LXo]_�F �f+BN���B��޾	$I���b�e�Z��+K�r��(~��3'Gx5��'1��=?a��x�o4�k7��X��''� Kb��4g@#��xR�ڷ4��2��~���܇���ƃ���ǆ0
,��R>���%�uq�l��ɦ��A�7�qo�wo�� ���n���T��%���W�M]�O[� =����V��B��>�ї/a��/��?L�n����A+��q��̀í�M)ss�Ш�F�����<@o٦��T�/qR��V�6�Tnq,�;�C�J8;^v>�]������(6���J��`�����S�y���B�o��F�� ���e:�jF����C\Z§��N��W�K�I����5�K�@ö�ߋ�^�|��S̃�9H=p��N8��R��vp� 5(Xa�R�gĀ��Qr�>W[Q�O9$R����\:V�c
�X��o㺸H�@y�/J�f�ǽ��ثA����
ǰ˧��pH���!^����q�"�cu�EI��]Xi�3�a%t~o	��4�\#I�U;�B���iaI�w�8�q�*?�R���*�69�y=�g)1�-��iD��-��V��X��Oe�!\B�Kj���dp�%Ct��;�GN�ܪ�J��k�l�n��#l�r�j�Fr�D�)9Kl�o0�!nP����0Q%�գn9E��[t�e"�m�87�9(Xx"�r�5���σ ����SG	����'��=�)ˮ˩	y�~���"�%ai�X@�W�}�P��ӄa���)RTi�0d�*������(�*V��a��p��Q�+rR-��G��c$V,�"�y�|<Q^3z�V���L����%�\�GH���.�������'�2E���Z`�/����)��I����<
��X��'�f�f�����E1v����U7ج�7vzg*pz�u���Fv� (]W�V!�ڕa�ӂ��Qw'����bH#u�0��E)�Wj<S��L"Ֆ���@̸�jE��1G^��#v�+�Ʈ�	�b�Q�N��W �"4�\��Px����.�n���X���,2�mcH�jx�����9��7��-����*�*�Ze��9����:!��n�O(�	�QS�B�c{�PZ.7�)l(dY��_�S��"�J�s���Ȇ��H�V�F!B
Q�:F�L	�C�D��Z�.{��H�FI"�$��a!I��Mh/P��T�(ZR�)r��\��'aу
N9*F�.��1��h�0yh��,5S�;2Np���?�Br�s������TyVg����,��֘ȹ*~��A���;��'.B�y=!�;I���;�h\Wx������Z��+c�"���aӳ���n
o0iC�'>J�+���b,��������s�3;�d��!�W��\�II	���p��8,���-(���==PՖ@4 �^W߁�myrc���Y`���&6H�rc���E���)=2��Ktn�@<o0��Iվ Ks59�kCq �����"�CB��IH�T܅��<Q�*�T��&J>NkLX�ɛ˧�:Qrh(H�Ĕ(�
;�����J���:ۿ����?�u�f��	���a�/�����@�`f�bJ�+�|@wK �1�1���X3H�j��9�,�\I��ң?�ȹ4R�f,�*�xH����WFY�(xn��%&� ��m�姓ʸ�}�;ܕ�,gk���q�vf� Tm�(%'�*ڥUL?d����^����0% ��l����S.(�0��Nu��Gl�i	���_�%�DƝ�}���A~�	�T%6r�r�%F�?��\BPUu�l��;�|(SG 辕W#k��`Y�U���
 �x��ʀ�Y�S� �'�Ml��#^{����V��H{X�`�,x�n�XbJ��
�.+l�d����+P����"e��Y���-9ZŔ�{踷A���`d��P����7� ���2�S��K�呭�aG�W	��W &\A+>H�UI�]�D�*�V<��)0t�$�G*�e`;���j� �Maf� �7-��,/���P~ohO��'b�~��BTt*�8?	)^Bю��D���;�����IR3�a?�.YBob*6to�������Z̭@�0�
9a5p�=W��'���]lu� �/�9��|��帽7Pj��#�d�������v� ���8���(W
T1;� ���9E3!>����F:��(s$C� ��MI dZ
�{�1��XT�Op��o��������8�������h
���wo������ȩI�S~I��¹Bb�y(8���bO\M�a�,��H6r�mk���fӷ*ab"��/�ڋ,$ㄻ$�(�f��i�1�~{E! �mBF)�k�R"mОr4���'@T�7���&��R�i	���#H=�Xr��)�����E��lޡ�,���d�Id7�F�!�����|��T�Ư�_������S���9~mx�gC�Oâ�r���@I�[��1�@5l �Le$��r����$���B�g0���p_0��X���P5��!R��bpW�Ґ�B��]!8�f����s�T1�/�9��M�rtږ�OL �|��>,3�%
�	��r ���-�aV/0�!"sdC���2<�.R%�6�׾�@���z�בX���Y%\�c�\�L�,[����я�[�J疡.^���z��Ӆ���j�v���>_��p��3䷪���N��{����+������9f���j��ݿ6Y�����g�W/e�#a�"��`�"cA��cT�.x�Ĕ(���V701C�}[�n5�Kr��䨙�1�Wæ�U=2ϕw�4uEص��˳�d���}ی?�!A����d��N+y��l�$Ї	q�d��a�1ec|<�ƒض	�H�c��q�=��5I5ʃ��')$��|X�X�i��C���EG�H�?��)�#	p�~b���a��m�B�wZ|��M�g)s8x�6ZH%��m��LM?�Uq�Q>��q��D����i���Cr�P^�j��K�t�ɩV6�����#QF��F�sc�&� ���¹Jl��-��D�0��d#J�㐫���,0M8Ї(ST��ŉ. 8��|T<
e��ԝSb�*�L�ft���Y^ű���z���&a���C#+x$�:VI�D���Uc����8!�+�ג�$\���-�J*[Rt���'k-v��Y�\N	LN�G�T�V� ��S�d��FQI���:R�^��|P��C��rk��Ӑ�F�FcHU҉1P���Ɍ�>�eNO}��������D,�A��q�UK�E�I��(=�U�a{����	��L�r��؝ë�@*̊�'��j�V�K�H4?P'L5A�K �h���y+��$�[��x,Ḁ@s��;F��]C29MB3³�YW�帘��&u����^��
%�aM�X��d�_GN��R��������)A`@P�L�~X���������Q6?���M(?EP�!�E!R����͓Rg�l-'�� �6_��}���JHI�DG�j�$4e&��Q6���~��ؐQ�5��[a�:}�,}��I�;�eܫ �"`!O�k��d�0�Ǻ��F��He�8~�fd�bgM�Í�8Hy-�RPo�D��m@m\��ޕ"5���FC�"�+�T�B����2�5���z��P�?��o��?A��Y2��WK���(��K���⩁@q|s�H�K����E��t�Ii<b�	4T���?������P�Y��5&�� �� M�+��Rg����*a�j ��Q�Y�-0J���Y�W��/��|�@
�&�p�JO��d�%+R�j-IH�ب�����m�T�"��R���*f�⒘K**rBᒑ�4T���e*,98��\X�3���Y	3�����,�Bc�WEa�tE!0�G�EM:+,����U|��#�"�|8G��W�R�.μ�_���/��MR�޿g���L��m�/���3��" �2�� Trabalho1/ModuleALU.ngc
 �@3Pz���	FeB44E�Ve��E^]�o7����	@ M���O����%����=
�F]�����3�֦eH>��̀���u��E�*Gpi������3�|��Osw��6�v����n�|7������2�h�yx��TU�a�{���6�kG��������"ȪE�����(E ���
 ~m�F��M�9��7�,k߈�1�ufr��~޹	�M�Z473�%����Vs�נ<ʃk F��y�i���GYR�3K�P��rjh��H���)�����P���q�����5����sI�Ơ�u����f�	{BCh��%:�ҢP�A9	����_\�����"ӡ��Y���F�n�1il�xZ<����T���_G?�P�Jأ�OSr�
���+��'��$���-����됣��\o�j��r}s�3t��i�l����;�$��;RB?Ȍ�~�PS��ڣ��������Ŧv�����(f�{:y����N�p��շ�9�%5�ލ�S������k�m�����qހ/�p���sR����ӏss3���O�CAF	�to�|�\����2�N=j�;�X�S��gN���w-��˵�u�`��N�_�K6B'{˨����L'"�v7�4���<���千Ç��-��Ҿ��_ �g��p@�q�:��)���� l�0 ��U����<1`{{n��q��o��߿8I�N��k��qgr�wd�Hep�]�<U�۶���0Qt�����Ա����!�c��y5\u�^��#������Pַߓ�ȅ����,���X������5+�6�M@7����u`Z^��5��y���ʬ<-����� TI#7��K�A�܃�.�7�- yuq�1j	*�h���2T�a�bD�����]�����P�#Z{��Dy���'����D4����Q��R���</�b7o���T����@Ja��B4%ZLp�*̗�e��WN� -ߴ���>A<e�?o�=�H�c�z�lD#��U�L��0P��d�	�i~@��SV2���n���D"�E|��X�G�df�,iPM���-,�6�Cl�l7jI�I","r�H18��+�[�Z��N�	ZE�R��;Ce�kO�����b�yN+J�N�:�Ef��M	#� ��Q�1�
���^ۨ[�2�:>J���_�x�0R492� �$4��O�R��!�C�j����Y������5A�/�8�Q,j���!Ά��N����OԖXsG����@���m�]�᝝8k5@#��ຍZp�&�N+�K7�N�����z�r�rO&�j���,s�θ>��Ή]���*��I�D���i�C�2�q#xXE�����w�9?�@��:�����鈋]7r!0��>������5R�h=@�U�Yu����I�H���F\Kd'Z�Ō��j����ei�f0���o�m���|]o��7��S07��-��l�ap���}�8�	T,�?����I2/��WDs���t�UE�H2&�n��l���aof��M��/�.B�f$�[k#�0�Ҽ��������0p��&3�Y���c KXZ�/���]������o>C�ܺ�xgefG4�H��_n��l�	����[�a-�[πn.1|��q�T�h��t�'C�1	�Ͻs�ڸ��ĥ��WY[;i�Ԉ���c��͔*:�5E�x�#'^��%FA\������$2����W{���c���a��O��������N��p���"�u�!����Wf"X'��C��w���Rw���c���	�G@^W�9]tOF�D�S���)�9�?r�8���H9��n�r>������a���%������o5�X�~:��V��̚���}@%��D�!$�K�%���A��d{��Hh*T�y�_rZn��)�oF�A|�	0�:��3����'Հ"$(����9&&����6��;��d�:�N�+�4�_�vg J��C~`z]I��+:��Ĵ��r�M`/oy�@�6��aY�ԘC!�aX̶Nhk:)��D���l�(�A��?T�}�Pf�ÁY�Q�{ ������Q�6�wہ�/�2�}~�>[`/�F�>ϖi�6�oHh!������`�K��<c�pJF��J2�H{�a�|����Y����Ł�+l�W2ج��)����>�v1�]�>|D�7�u�,����X
��]}V�pbx;�x�	�ݵ�F�/m�W���]�����P�w��쫶����<-㔓��w}�;��۠�v��W#�ܓ��V�'���v4�s�]�
�L鋎�\`��O��z�r(�c�هF(����=s��v(+z$�ʩa�ҽ,��TK��-�jK�[�ݖĵ��.nKm���������2Lw�r�]�C����:�33@x͂�4��
 �+Y� Trabalho1/ModuleTest.vhd
 �G܈��ψ7t334�`T���!<��c��Ey9#�	�H��|`u�$Zi�ӗg}�nۍ����"Nb�,��E�QG�Č�w~V��6$���_2�9�Ds�O'Hw�sc/��{��毳�f{~�����Q�yQ�#g{��~̘&�������AF0�{�P������;�3[�n:��T>ꆔ�\B|:��T"������Ì�@<}	\M$S/J���q�Z$/�	UK��n�rJPKĪʾ{V�G����l�O`�4��k��ٗG�&-�5��a��Dŧ���R�V�]ژaO�"�n���G��[qL�1`�a���#�&�)����L�w-;���ǔ��;���H�$|tX�*��
��
�d_�F���;��D�=��>�P�X�|��f�Rb�,xZ����I-����d
�F���Q�5���W{^bףH������3?l�^3�2�Ѳ1Ş�"��ᔡ�SH{9�i��Ho+�G���~���7��뗽Vj�Y�n~w���3���Ţ�������}M��e�����6Lܦ�Wp�͚��3�� h��� Trabalho1/ModuleALU.bld
 ԄGPz���G7uC24�`U���Z���ٶ�u�A�SD[�uO� �$q9%	�o�қzqD���σoȳ���g3��.t��m���r��E4qAR$����r���]�"o{��R#�Iv��޽�m�K�����,�B�	$+P.8?���8��R���Y@��#�Mn�f/͓N/W���@*�#U6�?<�|nmfƀ7���iy���đ�U*Q(M��gj�?rf������R��W.z��í�^i��O�.�-te�;t���6?�k]�� g2Ռ�O�@���~�{c������.����N5��vL-�3 p���R�
A@�MJ�$N1���`�f��T�0M2DE?�%h'1 菑%V��s�X�d����*B�:ļ!���ðp�4��Y��;`��,�����F�K8i�pB�+��o�`DE�F��	�Q�ɨy
v"�I�K�����VL�ֹU ��5O�]�&PBN�R��/�-s�Gp2�vi��)!�@��E_�8��v�x��ډt����3�VƷ�z<�gQZW���d/�s{B��*�k>EA��7}]Q���t1m��YpI��P�֟�:�� ��  �#� Trabalho1/ModuleALU_xst.xrpt
 �@3Pz�͙
PeD24E�FU�
\5�s���۪�U]�0C�8$:n�V�b�,�{ݠ�̈IH$)�_�=6�J��n&b&aJ~5���u8�871���[h�6}�\�ԳZ�C�s+��s��S�j�E��.�e�/f�~����ܰ��95�A;�з��X�,�*!Rh��ݕ��㾟�Ut0pG3����ge�bNau���{� ��a�u�1��'L
; ����.����$?
 O�ä��lB���	�����T���t�͈���v=x��Ģd(��^��i��A���O&F�<A4��x3Af�;���S��Z�]��� ��}��~H����U S!����w�?H6�|��g�c����v::E���w�q�'�A�=�$C9cZ{×*!���-���*�J�DQa���|��TA�bk<���֩�I\S���HR*�wL�AErC�q�/-�5rLζbq+��n#�x���o{��qk��e���F4E|K\����L�˂y�.e�� 7��&�!s�bM��`��Ďo�9�X!�T��6�:bsޡ7 ���h�C �#�S��Z��ێ����:^�p�/��"H�0q����5�g+���
���T�����r���n��͛����X�2�u�����H�e�B����_���Mn���ڻ�v�wl���?/|}:������y�U��_������k�u:���0�~� }�rw$��q����pR��;H�����&��d�9SM�����m�ۘfM�򆂃�*��+S�GQ��	�pΌ#mK�u֙�(�ۼ��J6Y��K�:s:��f���za���e�é�"�]R{r%~�ؽ�"��ú�,X�+��@�_3�n�ӡ���Ç�z�g���[������&p�;#�����Y<*����~�����B���T$�3@a��Y��M�$n���|z��c����0Ͼ}.n	� ��em�Y�]N\v$'�°w[��+'M0*i��P\�/�&]ʶ�����b��UO"�)�	��2�X�!Oz��}0�(��aK;� ��:�DRC���J|NdC�t�.�f��+he��6>ӄ>�!��(T�w�f;��X�;-��$�H�q�d��U$G:Q�=8�d�>a��9����ϼ��,?NzI[I;b�1�ӹ
���	]�fZj޳/� |�/&��5�[+���΢�ki�*L;���ቲ\�Ļ�A�G��DH'�~��T<��DM�x�#�J�r��*�}��+���gٞɷ�5-�C��Q6-y��A�a�U<Z�^��5����B���s����jt�Ȫ����)��%��{�z��O|����F�-�?���ja�����r��yNa(�6�ƨ���<�X�/Zd5gd��3Fʍ�m��⒰�wˠ'ٜ��CO�?�yn��|8Cq0S3:i.�}��3�*���{�TC-�pI�� ��Rl���Y����(-�����) F2��C�R����i���┱DUc<�W���:�a��J/Fj ���WǼkv.	���"X�=|x�!�21�NPaĊc<I�ܺ7�<Ǖ-ҩx��#|s�Ѻ�Q|�m4�?
�s�H����jl�.D���ƕ��(2)��a��nD�q\�,
݅�C�z��(ZO+c���k�ֆe��s,C����O �x�?[�^�-AG�ț��˹!�8A�q�3~��X�a_�l��0E��@=8՛��?)��-m-��a1���E�\{��������埏�·d1\ǄP�������ȸڝ�E��{Oav�$%ؚ-��lf��,�>���9�����?�ab'!�ނ��e#؎�v&Ü�5-`h`?�d`�N�G�.c�#d���_�y� �ȵGR���A.|���3$T�-$:���%���=�)5�����beĬ'�o3+�UɌ���H$�+�R7w6�i��o\Ia��ވp�,)�W{j\�}E}��lz5Pj|�ߪt�ɃB	�;��!s�	*�#�L������ .`Lf�=�$��@�x�$����2~�q�(Nxԕz� �y@�[�)�Z3�:���,����!�}��W0d�H��5P�o�G�~M�勵P��k2����(79��}d�|�.@�_>�r&�cf~{1/�9��m�R/l�n&��S`v�YBB������d�us�h$��d��'�8S{��]�f��'꾷G��W�D��*�U"�ܠ�Cn����=[w�PX>���qh%=WP��{��Tsg�_S�/ur� ���,���]g��Ϯ!�5�Zf��� -�eIj�sj�����>ugWny�J����RG�{0B�A�^w9����[`Ѩ"wvP�.tpZl�vu�4m-���^8-{CLBf�DU(pn6���|6]����΃[#����T/�ڞ�Ȉj��`�ۂ�/�I�`g�P�'���{����[����M
(��B��3�Ms��t{�k���`�3{"�7S��H���E��w��z�����z5� ��  �?��� Trabalho1/ModuleALU.ngd
 ԄGPz��n�WuB44U_V_��*�V5Z�UZ,$$$�6�]����9�GО��/"nuOz���ÞM┒��Y� ���1c1���-��gR�������_v��ǯ�/Zd������/�?���]NF������g'��.����y��CG_OU[ξX�lc�ە��ņ3���#�?c[X�}
&=Pe�b������}7��er	��E9�J4�U�Nj\La#&|��%��;gx&�á����gm>	 y�Y\ޣ7V�K?Z=L��y�'<a��q"$0�
��4*G��wF ͐g�e�:p�xͩ�{�ӷ�B�G~��S���Y�Y��&L�)�S���0ǟ�;r�������4�yY��;9�f�d�-%"}�st�u�У��?o2)��Qţ��<j�(����ϝF�-zT���h mҫ3L/��d�Tt������� R��Wh�偩 �����@��Fv�Z��'O<�9N*��ǟ��#�r)��������6s�?/:n��Qqe�������ͮ���t/�ֵ@o4�׈3�W �Z�Y�33�tb&nf�ΜןЛ�7)E�-�B���7_���h�� $g�AU�3CG.(��s�(M��\jsG_u����e߯O�j�M��/>��wnX��z�6�
v��l 4]��gQ���68i!�f�\&����w��s�\�����Ҡ���:���k�����7���m���Y�:�y�Ǵ�����o�h��Ѩ]�F��r�V���{��fe�p+��Fn�,7���d8I�?;O)g��N��;�N�����-��L�zz�ވp6�|ـ���E$܊0��z=g@:_���˭=�Z;�I{y����۲�'�3�N���o������������o����)�����[�����Ϥ���:j/��-�Ϊ�&�����<�+̱�گs�[���n>�X$V�u8��֭��NŅ)���)X�s�����Zq����C�=\<[#���C�Y�l ^'���Yu����wC���ܙ����C�Eh��*d7���G���S�m�vw�H	�Jý�M��!t)�O���1�i�=|񬆌�9N-]�^�Σ+xf���
��Ϗ,R4#U�n�w$#���`�|�x��.��� c�%v�{��#-b/���s�톍o���c���g�\��xcK�Ը��R�%KL���Nz��{�|p���7�����o�͎m\]��x��V���_������ٓ9����O�~㓄����p���T��?�gjD�� �K� ��H�XR�&�Г������xIU�\k�~@����Q�*�k[�x��R���W����a�m,����g�]�TD�Un PO����e�:��%.(6ϟ�=t��^qy����L+�+���/�*��g�a@��'� _�Lb,�a.2ۦ�)3�H����<���^�NDE +<��:ֽ�Y̗�  ���  ;��2�	wZ�V�T�x]�Д�����T=����r倚��8Z�l&�z�aؾ�6�#���kav�� �{a�'�3���T}Lgu�� ��F�Yq1�L��g��?� 5#p���=$r�g$�*;�����/T����fB4�^��Y�.��~�S�����b����w��9�@����,g5���<�2�� =#����3Hy��5h`����Aq����i�"��$J��_�������������`�S�S���Ն�G���~�JD{+6L�!���g�|���Ā�7F��e#{P�S�K	�%���M`���-@���C�0� ��7ȶ���L���1;��&S@����2g�VV`y`$~��D^+�k���\���(���|5)AtʎJ�8A|�0l����Ui�-�α9U�F�x��=mDɞUFa��c�NClk-~,y�����D���� l�҈ϖT X,"��#���~�E =Hy�x�\��9X�d3�蠨=M_�xO��	f!�k�$�Ϥ/�ܜh�@��@�3d�4�Z/��U�ۿ@t���f^ �y��FG��Nʴ2B��1ڣ|3�K�����0��wN���[��G)ȟ����Rs zD����+T�7pϱ����O5ȑ_o�/����,�`[��:���������^yk�zi�����]U�}�F$"v~��| Ś�k|����T~�w�2 ��X/��2�P{ ݶ(D,>޿���A���� r��Q��w-�Oq@�[����r���wep�$.ˣn�	��^��P�rd/�����H'����#v���1.�kl�����3|��>j�����%sA�B��kJ�Yvø��{�	�m�ꍺJ�g�-t� �q�5��j��������P��p���g�i6;��iZ�E 1"�-���C��� �u�M�/�c�N��#�%gD�'�^�4*�rV���퓑�X�Dz�+� �!�3�Ո$$w}p��m��8���9�E`91���K�;i&�$DT���0H�퐞���m�m��<,��аo���z��oYPH��t���WҖ��!?��>l�4f��T��1�f�ga&NEX����ı<���xrKM�
�c���+SC�v<V	ȯ1�xAn[	�YZ��ߜB6��e�*�ó�Q3
ªn1����="��(��]�T��7���N >���ylcP)<�Z����(�5�=���J��: O�!"*����!]�oש�����0���������,�?p��y7A�+n��SB�������V��ew�(ۥb8}bբ��.?'�!Iu/3P� a}��K����l/y�~���܃�C;\��7��s_-�>�y���@/�A���8��6�h�i���P��`���$wY�%��o!�L�a�*��ld?9aưOI�S����8'��C����	 p"�O��A�$~��xQ�Sh��'��&��V/�����5�^�ԠE"�ٖ���A���A�7��U�y�=+oP$!���U�2��"����|�����;���L^T��>��&�=l#���Տ�!��
���HX�hy�т��+Ǚq��a�v�7���'6�T��-�UZ7�V�e/�8��V����'-r�ӄ�Cc P�2U�eC{�WB��r�0uXq�ܾz71�����g��Thjs��pjHw��i��(+'��M��|��-�x� �|��v�h=N�PY��#����r��?WClE'.Ks���
�/t�����#���2V�}�S{ ���-�a%��D��"�r��bnx��ӛ���E��	 0���g�yab��M�o1]�W���X��+f��������"��Ж�n��1��� �j���[m�|Gs���ЀχL�d�j��A�y�Y�$w�%A�� ���	�0���k?��>"�N���#�VG� _;��ՇXwb�(�|����-����k`)|�������	V\,��bIM���.yU 7T ���Ͳ�IpqxO<&�/Z�U���*G�
Mp��gl��s}ܴ	�wɶ�w�[Ӑq�5^0��G@��$�[{�l�?��6��-�.\��0�b����OR$�tݐ��#�>�H�"X:��y�B;�p8�1�B�4hA&��XR��;	,�ǯt>�?��|Z��`Q+�J�#��oL%	���	���E'{�c�4��V�_�"]=A�Cu�q�WP%[��^:_F���|<� �&�r��e�"��Jb� .H��1��.7�tx�K�D<h�y֩ 3\�gl ݃�ѱ
�rUF'e�RE+ӳ����.a�䋓��(����,A=��+o��� ;�;��~Z<�8�(�O��/с�G�l�~��K����1�����#y\����,oG�����M���D���4}[��k�珅�R�\M���%�)W>���A��.���n��j5G�Ѳ��l%`����6(^��ZF��)�]�Xi��CN:�����m�ơdj�dhdh�Y�"�όj�&R�������f_m8�Ng:�4��{V��m��a��+��p�Ӭ��j���ml��h����3_���aj�d��cI?OE\/�������3u��E�[��F.V2��N6E�,�\��D�j�-uW�D$N:!���N�t'��&|��R�� +�������C���kN���!t��M��I<@&0+ ��[�Ʃa�����^_u��d쳁�����@:�Um�6� ����wTw��tU���a��M�x̛�ށ�o����
#�nl����������<@?8��2 ��� Trabalho1/ModuleTest_map.mrp
 �j_����t�0uC33O5v_�� �[vƫ��ƍH� q�#N��Кe��]!tI^��IW��ƛ�肁�Dq��3��zW�g���8N ��|�.%����W���`F�խb�|G�����[�l�>�{of@�@�1��J0�G�.&&�<�w[�$����-�'SĢ�1���Tٲ��/ȋ�\�V��j�`9�E��ݫZ�T,T˛5�K5,��:�a�\��%hVW�A�C��P'�*��d��~�K�R���=w����lj���_fG���I����S�k'H*�ȉ�$q@c ��Q��;��e����|cn3@?�v�l�/�G��ux���Ez��j��d��h���6P���n��Z���xL9�+��R1F'�r����(pH�ؘ��kH��Y�pڵ�3V���8Í�JAG�jH'�j4��z�0�.Ai��� �ġ�5 �U&<\ΈR��`a� ۤ��({x��pɊ�ȑL�߶�v1Ӆ db<#̼����`<L}�U9r���?ם��0�$9�H����v�B��礘H��slZ��� ��Ү���B��T����1�V_��a�%�֗C�� W�Xh�δ�oO5�����f�� �n��N�J&D��F����Sac����#�Ƈ��V�$�,i)�=�}�Xc��O@���n0s����q���m-Q�<��g/sό2�z�T��y��]<L�Xw�͈�_���U���&��f�@�O�%b:�f�����#�����
��e�@h�z�<��ůJZ����{����ێ+( L.�!
�<��5� L���ܼ��5�����������/���9���w�Bs�䡢	c�aD�9��Ox�;�h¿�P+�~�'@+�ȭx��zTI?���;��"*�����z�&r�(I8�I���Wn�������V����t���d*����?��ж�J�-�63g ��F�2z0��|��[f��8K�72˂H���&�'lc�g{���"ڰɟI��䊹"�ϳ?�K�82�͙NԺF1�N~���(�K/+�3��F @'P"M���`렃�S�#a埆��,�1pK��M��f��j��%��¢?��@����HY�+�(�k��E��c�*6���1�G�P;]��K!)8�Sɀ��Zٕ�6�[����cD�����lK�/w�
:(���R�� Ԁ�IEP�U����b�{%A<�9�D�3��I�~6�-YD�Ι�b�$�Z����f.(�	A�.�dUt0y�pd��8���CX��e�vq���Y�P,�O�NI�:rA\�����.e#����t�����!���$��_Ƨ�m����z�.�|x���'Ί�p�	f�g��ry���W�R4谊m�ǵ9�����Q�߄�y�]�u]�kذ��r��w�R�x�|�<���j�q�'��'��5�k��^oޯ��Bʕ���Ɵ;�N���6,yԩ!�6|i��_6���5������Ӎ�z��z�q���bcI�o�Ia��g�]�X�c�D�5�jS[&�5��[ �;+l�N�S[oуl,���F�G[���~_I���e����.���{OJ�c�/H4�֎{�@�����(/m�����Q���m���1����[s�"���1@l{P��.���~��W[x�q#���[��[I>�|2+�~����o��Q���N��ﳶ�J�~�Ec�nX���)v�n2i>��vΩ�$�v���@\/ �l9� ��  �|1� Trabalho1/ModuleALU_map.mrp
 �ILPz���0vC33O5u^�|(�-ݱ��np��@s�̓\q�۲��4�q
�KW�Q=�g�Im�rK���@8�'3��8#
����a3���3����f���j�b�Vk�_�y��,{��t�>�ͅ��)CR��
��i���>�4J0�\òcf��|�2�#�>j����1�p ��d�H�P~$�N�t��ٺ��ժ*cɒ����+yN�@�I��<d����rBP���	�Ba�ܡ�?9&�-�s`�@w�u�%٠�ϕy����ő��߅qG�X1B4��|���!@	\�U��!��N�col�����&�(�/���a�o��6j�Y���kW���!�]��k�6 P�� n��uV�G`V|K��w��dQ��&��2�ɻ���	p�	�0�Z��[���쳵���>��f�v9"w���6ܰ�O���m��;�}������� %���5#@�U;^�<HxD00�H6i�7��~�2r���:�/� [�󁐱؝4����>����:�*1�CrF�ׅ��`��#Y ���A��r��RL&v�������-�%�f��J���l�6�9�����ֱ6�k��m��d��S�����IH��/!��̌�E�|1�#�19����j��w(�X.��82��RE.cCq�2_�>"Q�ϳ&nYe��FZS��cu��hwbAR"�d�Ό"U0���[��C�����Sh��}��n�Mv�q%�>����H�|�`���fƚ��HY_6�ɡA��,�u�]��X����!���AexT��$0��9��Py(�i����`F:��������ݎ��Z�`p!Q!T��4ǀ0��rR/����6�Պ�a��(%�Ԑ� Nf"��`�T&�(Z��*�S-'�����HW�;D�T������'�<��J�'�T��GzX��EP������j�,�@!�$	ck�M $0��[���n��V~��Śg���������$D��i�Y+�����4���is�M���@Xi+j�rC��Sq���G����N�0���C_*D#�#F|i�
��J�jhį1Cc�&�ɱ1Ќ�cT��^���ѓ��QqK�@N��E��U/sP�ޘ���iN����E�אRl)�����U��Kdl�>D;%�2��Ibik��I"��A6��`x#�Mb!Cjϋ���y@�M��,��۝O&*R�n�]yn�Y%�ٰ�?�P�pc�l��m��T$#��p�B�5���K�(;f�^�I��]$�ZF^��~r��&Я�
��ՏL�����a�6�M�aph$hd#>�°Ih�6�S�MwFݾz��T��}�;%b��ҌE��i�)Z��-�q��A�?=n�YD?XFt���~��O&uۜ�,ֱ`���0JA�D'aH�^E��mnsS��4�7c-�
��B�L�m�� ���x��:�OS�� 2���C�IN�7%n`TZ��D2:�����|�8	��5O+��������=��0�cT4�boD��83�6��3��\9��r]�?����]��l����ν��S�u��<��l(��q;�"@ž��Z��<j�*�^�WK��FC��>�c`ֹ�؟[|IN�~��_�w���J�ݭ���,�3H5o�N���
�kÉ�N���IP����#�J�L+�����s����~�
$?>�m"S��1������O��cx?mX��綞�{�駸��{k��������F�?��Tm��|�pf9yW�ޙ��s��_�m��׿��=S�3c�~+͋��?�����v�C6��#\,e��%�R�=/���~�O��Ơ��\������E�%��.]Q��p� pVc�-����a�]�<d�;m>�|�S��p�/�MF�@lz�#�.��L�W���9��=_�G��ٰƄ�lTqK{	����@^����;N��7�=��WS�lR�s����T�.Lwd&�#�A�ڧ� JQu��=(����7�	� ���� Trabalho1/ModuleALU_map.map
 �ILPz��z�0uD24O6u^��V��SwP40s$�Y$�J�!�7�S�F������{���U�@���j������+�uoǫ�N~��*\��\��/N�8�|�����n��/8_��G�N��}b/OF�,����D�#�z�p�dv&x�|�� ��ܭ5T�Q H�6��鮵�* `(j�$&=�����C��l�~���.�p���C��_�L�L��	#L�<� ��<-�o�B���7��6T��v�@v��P^���q��׃��OJ��m��ʔ���;	P7K��)N	�(E�^'��>x�T�o��
���c���G�� �J.9~�E�D[v���5��zk���R�3EF���e���+����Ns�Po�my`Ɍ*�7���6upѨP��Ny�%;x���.1���Zi/�P ���\Ev�B�L�6F��RD�*|�m#=4#XB�H��qt���We��9�� � @\ⓩ2�'o�p���P�Ј|���ݛ�0��50�A��V�$�o�����'NW�!M����8T͏�ċ v4��vZG��_k��&���e�=�3W7L	�n=f�P�O�0l��|� ���k�A�)HF(��!�FC�Z���U�|l�z&�U�E��2�$Q�t�����5T?�U�����q���r3po�+�0�����Qsg��Lk�ʔ���* �X�yGyHO��1G8f�0��a�/.[d��G�#�P-�o8i�C]��\J��6�{��!*��Q��?�*Ƕ��fuf��ś��T��uݑ�%�,/*�a����*� k��2s����I�skFi� �����d�����\U<:b��+�Ɠ�"�3���b__�o�JE�GW/�$O&�4,�@�bQΒ�J���3�8����F>􌷌�%����a�V���rWa��L�]k�舩L��۩yJ&Xv$��g;Ĵae޸mi&��6E�Å�9w#���c4�;�`�OM1���0��A��f'�@���5�����lV������A���&fB��<��\.JE�����*�a�
 �˧G����lbV�c]	�=`�h0nb��+�c�Q�H�;�h¾�h�J�V���HT�(��F�D�{I��O~,��E����S�gh��	 ���)���� ����4Uu2�x����k*x� �l{�Q�uvȼ�5Ţ�]�#�~g<x�d\�&n��p��n3�1Dl���6$�e���)	}H�o��I4����3d;.h�go�9�� ��  �n�Z� Trabalho1/ModuleALU_map.ngm
 [KPz�̜WuC33E_w_��.�K�wrNI�	 ���O�T�H���ے8�F߻*)��nr�������@�*�DP�U��hc������ ���%���W-ZT�><ٞ�>F�m�n��e��ҥ�������|������v6�N�ǂn��_�����l���&?�[k�����=������ص�prs�����}fu׽r�]o��==~w5Y�#燍rv	ir��sp;��O�
a�c���m9�x�t#2����E.G_��k�W;j����Άf�s�gp�+K�L���.���P�j83���E'p.Ԃ!��w��������š�1�&�<�m��祧��3�Xa���ff�XS4���GkO]N������KX$<�s[+[WS|_fD-�������0п���������䧷K/3L5L�!��(�ή�����oH1�m!�mv�v3A�� �;;C����)�i�l�X%������Ϯ<��,�Y���� &�w(�f������|�����6�wu��1�0������˯>=M]�c㡥�Y���Գ�sx�m�Z\A��S���w���T�9�������F��ӉgZ�f�a���4�v���~!����=����y��B��F�3c���B���{OM�i���g��4�s���35X6ffwK+{B7ͪ�aq�Z��ٹ|:�XE�yGsDc���+WG?0�,�}�]G�Y�LC��'3 ����T�8Q�#_���mZz9���l��d>>��#9gC�b�gu��R�����DWϙ�2�WIx@�^�7>~}d�{�_���Ҷ޶V�&Ʈ�g_49<�.�a�OGD&n�K`
5t7��k��ŝ��� �	��&҅���uB�����ʽZ���l�M����֬�Ji:��I��~y�a|���։�ǹ��Bw��ڬ#����b^��������M?�j=��w�I�~������L��w�һ޳�o�?og�:/w������i� ����E���i�/r���,�{�KϢ���273�:�<?>�Θj�ra3s����)g�U�w^���? nٺgN֮�V�~g8\��94�4��~��;�:A֏����]B3'�C�ڙ��Ά��]=�,��6ӳ���x8�r�ɫ\��*t��������O�C�<p�ݷ�\����57^�[�����X��5-*���
��/������2�7���v�|ؠnm��흮nVX���̥���"��Fs��/�2�-�]��ۑ�q��^�p���kLp�9y��65�t�}�h�phg�rу�Y�����o/�{��.nj~��3v4uu���8��C�;;�y�Y���P�.���~l��n�<��u��6�5�����RI,w���v���R������l����rU��>^�*�_}[��~�.um�K�Zg7�Jtޗ^�E�m�cg��[�v�v ؽ�'�����5sV����b�����@x �Ww�����X�ɡvZ�l�LB�0��?"�0�n=+����M��f�̽���f���spA:�9�m�3��N��p��7��u����p�KO�U�����T��u�c{j���LGI6�ڜo��ܚ�;yw�{:�`�Sm��7���!TMB�և�~���n$lX�ߏ���8��?�|Ո��m�t�[���]�>��b��s������W��@�@����#u}w�Ƶ������QZ¦��p[K�gjT���D6�ޗ��[ju=W<:�׵cv�}�\�^i|`3�Ͻ߿}[�����Yc�^9&��^8�ʽ���ݝ�9���R��_����k}YY}Fm�tt�`��axc�a�`��Ai�̟�A��d\uW��ۚ�^��Uֆ$�G,'~�T�xCU��[;5?�N3ml�au�!�HCp)��x���Ș�}�����e�"�J���cۃbT:1`���k2��[r�*�9 �C*a��5[���;
A�1�j/��B�tW��2�35־J��LgG��"�7� v�"���ˮ�n�t��z��Jo���r���n�� ��d�:���7_�Yy�~��իa(.$�$�wH��v���S5]ߊ�O���́(߮0��z:�Kच���r�΢n@����x, a���Lط3�ߵ�^�VJ��\�5Q)_�����XM��|~���O1}�� �y�����q���ݏ��-�~�v�*����^�8�l��l��|�*p��Q&M�hRL�I�'�9����C�QJX���Һ��J�c��~8���[M;�����0���M`�����L_�j��e��C695P77o���:���(i~�dj��RB��焢"���~��6��zۆ_�p`�6�ޠbtf�i_��7��Q,!�#ȏa��5���oy� �T��$�E`�����dImZq�
���F�����Q~�X��P��9�W��������*�;�v�Ěx*A�#����Si�C��#}�2�~Ӻ��Cwj� D�N0ͭ���!�($�J�=:i���e�v ��v2_�r�J�Wz�Ň 9u�F���+�2ƾ���ذs~+ؕxjXC�FP�ǽ���woa@A����5L"����[V��N��*T�z����ݜ�����$�J����+ĥ�^��Ka	B�ºv�{�0W��+�yp �6�s\*9+l3��x����<����+��k\
F�;Ǡ ��M���)�J��{T��r$�������x3�%�E�#T��2�?u'%�q�w'-�g"T͹��uF� ���0�63ڐ±�5 (2���[�DYc~�C��\�p�
kz)q���l�!�5x`@Q�[���a���b����C�4'ծ�T~0����]!����� 
������Dˁ@��4�ݖ!�\�I[Q-�d�.-�����a��#�,�I��"NG��<��^�C��/�T+�K�aP6x9��� 9��N�O�vB�:ͼ��=h��E`S[�˥�헐:��h���_��y+����d�ȿlf�7�|bW�Y��ߨ(�ϝ�����{�	s���j�+a���N/�X^��@�!��`�״^h���S�����M�f�A��W�;ǽ��Ftߺ<�!|9ߞq�ޒ�P>�C@��D�Y^ݏ�_�⇟���hJ}Ct��s˖Ye
��-�\��N�4���d�n��q+���]$�,i�q���W�Q���2q&7e�ժ���Ʈ�@���I銬/ �+� ��7b�6!����.�0X����$MY�V�>��6��l�3���q��M�����BF�(�س=��˵��E��LUY`"��|n��(B�4�W����^r��/b�FC����+�b ���lŢ�T�a􎮕���Z��u�H
���K?�8.�^�^���^/}R�+��P�BA�a+�����R�|��ϟ�Ҩj���Ň�c�1]�~֦ �+�����P�D�ㅓ�UxU��[���_(�p��|��tڝd���!���63j�k���F�;l���fJ"L�aM�\��YKL�`�۝�jV�˔H���-=m�����$�L��te��&��f%_D����P�����n�(�����������D9.��t�D*��.{�Z.������ڼX��ư����#�M�J�Kh�E3Ź�[E��I)�	ǸaZ` 9mʈ��F�*�֟�Ҷ�(ҏ�b�p-����=�BPY��B1�_�q�m�U�aFWh���cˌG@���3U~�g�sQm���)#�Jҕx])�I�ǂ�#�R) �c��� k�]��Go[���*D%�vlBٺ��]c���Q�����.��v:\F�:bV#�k��7��FC`��,Z����Y�`D�5"���N��l����$�������`��g��	�ɞ�Pc���3�)�- ޕ�-���WS)��O�VǠo ��kw�n7�~ͮ8GE	8��<*Mv�|�HYvPU����#�x�=@u;��J��QZ;1�C!=|{p��<�S^�p\,A��	�wA��=S@�R���rOtm$jn�W������S��M]�H�UH���u��6����ZT����	 �������۸��O5�����Z�8�ר����}��[|�!u�4ݡ� �u�@����v��U|i[��%����ba9��¸����^U�B���jAC���V�WW����{\ �Y��@%����٫CFq2�$/EU�I�v�ށm[���*�t=��g�h	ê����j3���"Ҷ�B"`���"[ӣ��1l@�!��1GoXuy��N���_�<� ��ֱz�I�f��Z��+V�3�-� P���Ǥ4��m�(οG���w�_"��`���p8�|>zë�w�[�r�}�k��}W]��d1�3�yIZ��;�	��Z���qFx���o9�X���E4ՙW$޲��vQҗ:7 mmB~�_k���Vj�������]��������R��E�a3a��j�b�U�*08+�X����r�[.xd!;�3�M��-���/�!>W��H��@EL�7r�Ì^�vgAW\��x#Lc
�+� ��	���B�����A��6��P|_�c��� �����IF�eHJ��a�����FOeA*�V=����~x�r���?@̏ZH�c�t��fx��Hs
��	��k�u�~�/�5Rٜ��):+����m���v�G&vb��g�+z���T/EBU\/Eb�?BBW�]^%j�z�ѬЃE�Qm((x���[e�����/I(�](��t�.ߞ�tw��bG\����xHj�H'�	��T���l#4�(�`�{�@��9��0�Q��Ӊ��*�Q@��C��:t�ޟv;���G��$6���SR-�ʣ�>��g'Q����c�}&�mr�єc2��i�k��_��^0����U���K��,�`�T�]L�����1F3=)�b��Ag9;|�I�0gs���;=%�D=���%M�,yҦ-֨!��}��-% �8�0]�_?q��8��T�bgE�4A�:�ݦ����+�����˿IE�0	�q�7��_O~�Cq���mL�Q �]e0�r1�xu��bJ��.���b��rM9��c�_�+f+�ς���4����F�TǬ��$��D�U_��+��V<ǰ=s!j�����ƋUڔlHZOQ�И�j:�sQ?�cO�����o+ϋ�4Z�Eʪe�2,���R��7o�a��CU�r�φS�hܜ�n1�&�+4n�w<dc�"�Φ���.�XR��gXQ`��K�Pd%��tR�h#6���
X�)HN�CQ��dp;��c"CXɿ#�oGE��M&��
�FW�Lg����\Jp2k��UQ2�!V]0 �z�>�es�H��T��^���� &��uk&��FQ���Q��F_,@^K��?��|̒�/��h����Lg�{?�K�|�ۨ���e�e��Q�ۧ-<�`q�Y_��E������ ��d�?����K�� ������
z����J1e�t�K۞,UºLX�X�!E̇����R��Q�z�N�'�4�4|fih[)��+s�p	�8�c�?5���Y���bA/~n	�6X�9�@H-�;1?��I[(�g0��,�U�G,f�GV�uqtQ{�\K�m�[@� _ &F��!D����KDp̘л�)'�LI���a���2VJ0�ɸ������o.�'��4	\�!���\�Ǭ�Q~;Ao!T�v�����Uۃ!�~
��	PnB����v?����9����4X�{��H.�;�
^���!���>	(��vG��b��(񑶽b�I'�Í�@sN>rNrw�5W1Gj*/�H�>��,��'c��,���b�T��_z��mM��� �.,oQ��,d�d����a�W�~fPik=�6Y@&j?��G���I,�����珤��F�}X5�:�#��A~�����{$��P��POVK�i�x��^���+S�Q�K�S��Q���h�8(�d2������'�P���Fc�GO5����?C��	�.[Cy��,Dx��$�(`��Gt��Q7�F'@�2�>�ލ5a�-:=aiY�'�_V
Er�Y�)�z2ö��y��YF���֡���<Tb����QSp��!K�$x_�l
�'~�`[\jtb,��JPT|�����,�5`v���
v[����ԇ��S��HS);�UL��	��f��<���a���ބ�d��j���Y�Aߠ�BTr�n��,�&����Y�y~�c9��́t���S�*Bc�&���6�)����0c�� sĒXDR)��c8Ld�s�h���k%/_'zLQ���+�X�&Y~v�~�:�����/���S�z
mg��U�ua�a-��� �2��o�&�iE
�0�h2�/�>R/+$UK�R��A����`ײ�h���$�����[Ņ�����j�^��[�!����5�����dabS�o�_C&^��,NK����8���Q^��
�/-�t�5A8�-���9:��#����q[�:XY��\��y\�L��+�Y�-���tJY��y��#�����p���8�T[V,��I����؟')c��8N�a��,l�����,IEǽ �v����ʄ�Yd�%����?S`d��=n
t˙M���MPp����#���Q/Q7��j("�U3�1�^�A�����Z+����@�W��Q8��ѯT�މ@�+�H��\�5/��Օ����W��d��&5`k�T��(@�-�ChO�@�Q�q��ޡ�ZQ�].N�p�9��I�.')SBPd��	!d	'!`�~x���
+�<%FI���觯���M�-���^���f����Q�C�S�Ї��ua
���%@)ah[#��DH5U�ĺz�Yxi|×�=G��<�`�<�}p�� Ko��t��`���;}`��M>�T��ڟ�bf�6�Tˢ�C�g���i� �s����:�f����ŀg.� ;O�����|�V-���j}�j��>�����I�j�#U�l����>��+Ϸ_�y���|+ǟpׂHpD ��^V���K��L]_"�uT���b,�V2�.����]�lz}ʥ���fn�~��`˰�3�� 'Atހ Trabalho1/ModuleALU.pcf
 �ILPz��#�&d43�P4�xR��D�(q� �f�`�lo[�+p%��L��'T��� B��3�30~������>�ӛ��p��0��;{�&��R��S����U���>F���ޅBl���g&̷H�X���d�Pu܎��y47�92��Z�ce�8�'f=e�"M+Y+�kIN�����,�N�-��7����9�o7��% �ѥ>� Trabalho1/ModuleALU_map.ncd
 �ILPz��
�GU5#PuT FT���G=���,�2���e6�C/�?�����v��Ť��g{{�u%������b�³y��P�����N����:����j�����e�����
/�p�ϲ;U���0R���,�r�u�۪�斢_�"%�;��cr�f��_1�3Ԙy/AaF1=����"P��{��,��kY�|ǃNI+̏�^e�~����'yl�g��	i�B��og�0�A0��/�5�xJ�/%dUx������I�3�������Ey�/ۮ�1}�-���&7��9����35��6��WJ"U�Q]�� �싢��Y���g�d(�$�=�`��`�0����1OG�f�eL��6�[xu��9�>�%�ڪ��8�����5��e���!���<��c�Ak"�Ey(�DP�#���-u��0&��%z�����{��69�����]\�GGx]�3���(�%f��Au��
C=<	Q��-�&Z��sz"�[u��[��t�u�>�;�Z�6G��b�r��ɸ2 Xk��,<v�̱$�����	���}yHm�S([������!x���bħ�n�u�1���C,װ�!���5�d+�Y�R�%�Ljo�O�449?n�5!o���(wr��4큰hu��I��jp�6��4���33E �zc��bu^�5G��9��x��6�?�o�S���v��GԡrD�P���1���2V��>꓎*ZA������+
%H�θ���њ!㸸��Nf�E|0����vKjc�n�w��b���UgKsÛ�Qנ~�Y���I�0���0��&�h�{�o�k��g�d�<�݉�䢥�L�L'��/��э��ϋT̹���N1@��U%��g���}��/�m��6V�c٨���Z]n�w� e����u���;`��;���d
�J>0��M���)0}_/�1&p��-e��/�/�ے�ǟ�K�>�0'��L{'l&��Rޟ�t$v4RȢc*{�h�7	�"��u�����E���>;%���B�� �/�]F ���к��*i�u����G�ͮ����^�e����@ͣn��>�}
�]��@��l�~�D1�m���0�i�A�{#ʎ,Xk@�p��z����S�j����2������靻l<���h�,˰��8b*%���f*��ԚF�d��`�bY����m/'|t�ݙ��k~93�8�v�v�'�~�	S�gSv�Ma�q��'�އXG$UT��F���	���I��(A�^��~al�M`kJ��&k���{-��F�03��R��v��0�!��XS9���!�{��@@5�^r��
�Wd��|�ҝ^�P�v�0��o�[�G�׾m�F�$�A$��jQ
�8l���X�@��,P�Ƙ|=��"l�0����Kn<4���;WF��$�I�����G�3������0o
bh�ұ�w]�e�@���<~�F��5��f�$��8Wsٯ������߮��-�9��|v�_����g���F�s�&���f�����+8g�6|�#�[V�m��QR�f��}J��К���M�b��b�;����Y�A��ڂuG�J���;fx��*d
e[6��a2zS,��>e�a$����{��"!��qF��ȑT��ۨ��R����ӞĽ��\	���\7�������H�=϶;��W���/�Kh���X�M�<4�0��A-�f����r �� �@2��F��u1Pm�/�G���D޽�^�Ɲ
J��d%m (�+Ow�t:��ӆI6}�Hy=����P�0��՞�S���C7��&G�
35���fa'|� D�h4a��<����(==��� >����Q��]����Mq��_<�ႄ�B(k�A��Y/g�~խY	� 5&��1"���m65'��x�J^IAR�q���H'�ڵA`B�{���5�A�ľ��F���y��DNOʫz��D�OgQ=��ؓv(���i��8)
N�����+	Wk2����u1w<603�5�46Og����<n���� �Z�P]Q������}��/�[H��|p�A[�%�^Keq$�C��@L�Y�g��S����gՠH���ߌ�Ƨ ��0i����d�C��U\{r�.� }����m�h���h��+.Y^��7 �4�!������7�� �6Y�%�F[���E��������,���ګ0l��AI��%�_n��P^��Y�d���w^��)/�_d����}v��)h�w�\�6|�K�f�U�?�
d�D��W@*�$�$���/'��9��b���-��t'����	�����Sψ��ta�ɂJ��eT���>h����8|���<�3T7�Ӌ�w�~X�7�}�lhh�g�Dw;���;��us.O��N�7�GӑO��S��yr<|[\Qh�z\Tʬ��cKR����J�ʓ#���)�5��w�r�$�m��и���vPrj�`�݃��e����?�Fkeh]�[�p:�~��_�!M��v��h��������j�_��DhT=s��7ˋ�f�:bpFj0V�Z�����?�N"�P؟P �q�ϥ�Y� �D�\9��8v��pE��2���~�!1�����j��8��:]�e2u�#�t`r��YgJ���
r���eZ�P�Ly7�!0v�#:���<�O���������(T�e@mNh���(`���9�"N��`p0���q�R�M8�`k��^G׵��4�OK����/�>i��e;��@�x�=G�����z(�fHj��-!�u|�+��������~g��9�|*�Ԩ�P��G��܂����}G8� d��Z��H�fQ�h�(_:^�U�<ă&Ά�S�S�u3ӏ��7���<o;
�(�K$��͓/	J�|d�c2�rP�"8t;(6�>_�ZO���2 ��m��.�x��{�%��K�����i�2�����o����� ЭV�?���xެ(G ���E�ӒE��^������v<x��Ղ80��0F����T+�Z��%��.��.
�{�� D�w�;����ǉz~��{����~OÈ�V�š�)�0"T�cAPy�0��*g��{C��&�W�PXX!�s0J������p̼��ߵE���dw��Ԉ��%5���>��'�'�>�L>����p��O��]�ṿ6��pp�z�4n�9��=xJ��=r%��פ�zl|k�����
$X<˟F�po�S�lV;}��;68]d�����P]�?�R�vu��H��{ ��K��p+���~���I��cCABVU't�4�$f�@��kw��n޳2�=u���-Ll��~I_��9��ơH�#�K\�3s���I|W�m���Qė"�X��ɧ��e�$nv����H�+�i㾄�Sj�����Ht��_l?6S2?�<ul��lW}+� <���c̗�|�ן�ED>�8I���O�˺y�o8�/�aM-CM)�IIȮ��L;,5�GA�x4�s�?f�F�o�p��s8_[C��s-#���7
ب��]Y����\x~}��l m�N��?;Š7(y7p^�qd��N}}��9��]��6����L��Ѽ�����82,���ܩ:(�F8��&mŴ%O�(�"Z���/E*�Jn6��}�s1+�@�h��A��>�ڢ�T�෧�
��+®�>�ɸ5�4��' q�/�� Trabalho1/ModuleTest.par
 �`e���μ.0334O5f_�� :�gE���e��l�Kww��Fܑ�}:�-�=���;:l�3+�����RE��p����Ip����g��*�v�	�6�QU�/�Uu��Y+�C�'2��Y��uX��f�\ ���)��n�i��>�1z��i$ �P��d����8�\���x9����Y���K.�_���'�8M��NW�f��� ���\y���
a��;$w%70���Ԡ'�dG�����6�0�����=\d<�@���d�8�'���(���E㴢�(s}�m� ^>��
n�!��yA�So��.�C�]!�a�$B�?`7����ո�C�t��֌�f�K����|��˕�l��m��`DW�p*N�@�6�|��I��L7(k���3U�M\C �\2���[h�� Ƈ�U1 ��Xo�辜:�f�,�=��`<W������;� ��XK�-��!�
 �	M����?�`�>��)PN72� 7�%�Pe@�uz����8(A�ZÑ�ͤ����#^���FRϏ#	ۨ�(�G�͑t�p��1@H�"a��C�D����v}#C���%�FvhG9	/_�ș AF:��k����YS���m�"ԾC&6��0�R���E��:��>�(0>|�^k,�໋=΀�nd665��6]�Bh�G��o�+�2�8n�)�G��k��X�:DΔͨ5Q3Nэ4��VR�0fI*5>�<�գ�Eژ0������e����^��WP�Me�Ū6Ep[�(X�TE�]��a�#��O���dC����o�$IM�K�{�q��<���H���~��F�5���
����/�<5���l�>wZ�Z�q�"�N7q
�7�ť��,['}i��]����pI�@�Sbu�W�i�>9٪<p��7ܼr��SE�
���U��<G
��eRE87H⛴��xTrz��z����7vM�����P5ưԳ"-K��Ǚ���Zn�iy@,�(ǟ^x��>��^P*�-wpy�k	`̍�I�/jYN���k�5[��+�+�;VT�?շ�m�������kC���)3�rNH:�]5�}�?����?(�ˈ�_,&��ot���=�􏹁<���k������2 P\e5�e̊�_�fx�+�ξm'od�RM>5�7��_��ǚ�i��\�~u�Ԛ���r ��j�|��\G.�ۧ�ٻ��oB�h,�����D�*�>�G�$��%?��IŘ��*���r��"��a�a^gc�`bb����h"�Gh5�:�Ὡ��3�2�8F�$4nrk.U��H7�KE������lLY�v�{Sb��uL�y�����u�'Ȍ2Ғ,�y�B�24�$��_���3l%��P��z��$4�ϰ� �%A�ΠR�:8d�FۜE�8�\B������s����Tq1&����wcG,
${z��u'�r��
s�	�9?��x!ë�1�����Yv$���;�5������Z(�i�yB_(T�o����4<#r�߰�ѹ��z.Am;�R��DR	���$\��4��" R�M� Trabalho1/ModuleTest.ncd
 �`e���̡:5V43dOdL�	��J��J��&�4��j�_�j������Ze�ڇ��(V�6 �χ���&�lA�Pz7���F����X��ɧ���������?��$�E��-���^�=�P�����L�ek�h]BؕhP���_�$�[�%�7�V�.E�����9�xJ�1�׬�n�k�(˚]�%�7F�������a�s��ٛ��MF�j-}���b9=%�G�� �f.�Ws%j�l�/�(|T���;%�,���n�����PPD�	���Kt�QU ��j>���"�$X�r�hIv�DF�����P���<ڧ�׃(#<�Y���0a�w�����u���.����37S�[@5'�¶�A#���D�{���U�tqqv@B1Z�2lz)e�+fiv:^�!��f�ҭ�<&�ܙ���;MF�OcV%ݨ�#'�0ʗ�̴����:��g=,9���0e�o�Lw�C�w�n�Ӟ�v�"sE6��:�ʫRh�d�����,��\�P�e���
��,�;�5��_���hB�M4��E{(�į�s㦏�I
r�� Fݍ�3ʕ�i�)����;zV*	J���DHo�(��� �L�؇���m������'�}�HF�2�~�������'�a���z���(0�0pt��zTO����ҟ�q�y\s�C������(�n���P�Jx`O7a|&>L w�Vdnu�3�q�����
a(�Gn��h?B��o�D,�TNھ�:K=�Ҏ������`H��g��=�J3(-�a{ ��g����n�O�u�$�,�.ܽ�γ���f�&ޅ!]�쨢`�{@�f�t�{
�m; *�-f�ݱ���p�%�/Y��l�:�x�r'Mr¶U�]�^�|���f�u� j��KQ�a�h��C(v�O�+��E���>���ypR�+���[�p�0�~�J���`�w'ڧ�:��U�5
l%J'��^�`9.6���4�`����!m��~�C�1��D�� $kqB�q[�2���^6ŶG	��p&���ȏsוv�6>"����|� �@&�VQ��;-��	�إf����H(���48
�9�0�R<d��G�����n8�6���/�]��H����O��c9&Ʈ������\�v���8g�߿,�z;��EJ�H�]�������2�좯4�,S��ƯClJ��6��x��	������y����cvٗ��l�x{?~Aj�|�$�~�,B�r��.'ߵ�ieoa��Z��>�Ͻ�V��������&;|��e�%�{�,}o� zii�G��f����|C�]ghT��c���Ĕhm��k�^��{IF�}U�p|�J�9��}�E���F~�}n�O���ͼ���wӣ���mI2���A��
�"
.��#��Ig01��Y@�t�L�\5?�*�z���ƍ
X֭Y�:���a�,;{�М�%�/�1��V�GX�^��R�nX�<X�@�,�Ů��3���\%����v�͊��=J�E�i��d�X: :c)m��	aN�f��rm�����8k\3�R���Un�?��˶A��=l���fB�70���
�j�4�K����bY��4�(��T+��}�����Z�����蠳=L���A
a�E�=3
.�5϶{�O���$ʱs*��D��F^�!�:��y����'����|��:?_����h���_'�s�-j�����d��mq0f�z�tirs�0s̗�>W�H���k៲��
M�Kk�����ZP7�~M�Y}wk���$d|�;�t�y���na��J��̵
��b��*A�f�z��M]o���ɛ�ة}=�e�̣KI�M�%y`K�)I�?x�g��n��D�>t����os�<|�6�g�n�o�N!6�'b�<���ᑚ�gc�+�uߒ�1b(J�1����d�3Efh��R�U:")�N#e��~���úÁ�]�����g_���L��ʝ�c��_^�T�w�q�_�k`%U/����G�!�tFL>���(\�x��Ӊ^\Ύ+��Ij`�-	`1KI��ơ�]��Ʃ�c��둽5�M)mK�f���UV�M�:+��n	?&O,�vF�./�4VO�w�Y␕S��������˧��F��_ b��=?p�ɤ	8J�����\�}�L�gLE|��S��G0��� (eUhU�&�#"=�u��;C���a&J��O0�/��R�ާ�a�,޷�RP_����Z��G�6��hN�5��H�Z%�j� <���m�����y�~�]ӊ�y��єU��H3g-���Sa>v]\;�1�8#�	o�}d�t�����i?ǈ���G�W�hF#��={�c=]y��F���O���X�<�sY	sig�����t[6H�L�o�Ng	?r�"Q�@B{�
p�__v���_i<�7���x�p���]���W�=p�*m���0�(���) ���VrA;�?�7w\�π>/����ܯ��
W���n�N�[�*��A���؏�W���*H�_ё�2/�Z�fvɿ��Ն�xA��s;��v��	'�	������-�H�8��Z�<<{i�U�&����5K�y�	�=�����3��޷���zi<��h閇v��r�a%ASJ�]f^�
6͎>!��c\^%�7C�Ҵ�^��R�]4h�����(uќ.��9����5���x!B^p��_l����=~���1���Jd��'s�-�n�����\3����#�_�L>[_�E�˅�\�ԅXa�H��[�O%�Rn#SN>ćK�Np��ي��7,De�a̋O|<1l�2�
���6�]�j#�};�������k�������R�Р_㹀`�W���v����,�{;��S�����󼇩��K�N�t�ژ��foU;@q8a�XC��2/JN����5�\�f���١Y�gW�n�<�V#�v_�)!�0�%�ܢ��U��	[�Xt,I����/�'��k�4l?��N�c���	0��vml���/���d�H��/�w�����N���N/y��A�r���+7h+��a���
IF��*��k��̹��Ԧg��>�Yr'�L����BҔ��^�U8���s�k�|V�1R<s͆ڑ2�P[ʕ9?�$ݴ������\��D�Y�j�#H��}�������h�W�����v�s��6��]��-��Q����������oH��g϶2ͪ�����.3�zn�a=���*ѳ�����;í�l�C�|�wW������������g%��Q�kS�Agl�\O{�6�R�H��T��#�@G����`{09�&�e��b���78�-��kqN%�z�6oVk�z1";$����4� �  (�?Ȁ Trabalho1/ModuleTest.xpi
 �`e���PROGRAM=PAR
STATE=ROUTED
TIMESPECS_MET=OFF
��v3��8 U�Y�� Trabalho1/ModuleALU.par
 WPz��E�0C34E�fU�^x�ђfH�I�#��N<�6 �7'37��M�"i,_��=�T|�%&�������&4�7wUv~w�7���H�f��H|.�8x�2��hO�*���\���y��Y�R���8�7\!'�����t�=8���J��^x�E�zp4b�q�TQ�;ؠ�ES����X	׎�a�s����{�k1T) �ǐpʓ(/�/����#�+.n��XY���Ъ��R�*M�-`0i��e�|�l ��i�E�ص�f��u�� C�C�r:�w�֋����Uc�Yc�q|��!��@�����d�L�(���{�0o#� �h�N�ݶ��F�r(�UV8����!�S	��>"a��vE8�q��񲧟��S�������'d�b�!�o���M��~���+�f�hU�RTe��� ��`� D��B�D�q!�6#�[ǆ1�I�Iz"�4@�>�$<2;�Z���(*͂W�CG���
�Cϊǅ<!�o̧X2��b�&�g���+'��1V��G�x�G�c���,�,( �d�Hh���*��ր�ye��m����q����`�%]+�Q�� S,�:��F��Q�g�l�v9f�f&��+W+���C���d� � ����e�5�?���X1p&���/�6L^
���?J� �q�mh]��M�E+唊� ���bԐ�|��*s2d�D��~c*����B�8b���$�Mda��$D^��
HO(�3:28g@v�J4�H�X$(vDI	���
�̮����|C �WFH�?!R��0�҅�	�,ݢ�@�2s �}�ْ�����x"ɮ�����i�p���E>�>/������y�`��M�8��hu�l}<Lg�&���T�X��a��k�R}EӤP����ג�˽�_]�}ݣ�A��ߍu��T-�\�P�]D"�+Ô*A*"�.�I��0�#6����dB�^fR�� �Œ�$��g��U=�~�����Z�����-���sZ�.c�8w��Ŝ�۫����]o�ٝ�Yodt:۱m.�meQ�ݞ���/�a�h$�6�3�u�g��ǉh�������]=�V"�<첚�?Jwtt�5�8T��}�.�#Nx������m$�������pG���Q���*^"дCu;�:)Y�7F�F��f�h�4$�3��{T�$��8���L6sڝ�
��%�����B#�G�t�LY��\�4�g���U4��2�[A�tE7�6���o�l[�I�gPM�̀��a�8;|pX�)��ܐ�����#���>wڱ���q�#��eV4C{E��7����QY��i��k_��Y�&Uej�_`ʿ���f2��io)[��,×ߊ[�F�3�0�F4��ƝLy��^�S*���~�L^�e��Z���V�{§�Oz�H
�j��f��]o�绤o�#H�?�{��{��K{�1v7g��G��uv �s��C2�v��[D�6(���	�6Y�Bb;���򧴢w0R�8 ���W�E����8��l�f��i������f� � ]�rA�;A���.r�:튳kZfZj��j��Y'�%�#�b����Rq�:��,r�_Cc�o��j��`Ӑ�,�������j��e��V�šRt"v�X�'��v�6�,��'��� ����⒪P���PPM��Y/|��i,Q���:{�J}6dO�Ζ���O�OY�+�A�؋�V�dbXcN"��_���z���oT"^�p?�a�&g��4�/���,x�k|�?Z����ޥyӝL�=	W���(/0��;���3Q�&�շp`O)$WŖG�k�L�qˍ�q��?e���@�ҝ����Jj�j�J:q_��&o�n�#9X�$*r{{���Nl���)�ͪM�ɋ9�"$
�Ҍ����E:,�����.��~��@��Ǆ0#D�� �K�u�4��6ɤv��Q�=Y�Oq�����=��e�Ze�^rIa/�#~�<�|	�D�h�8t������4Oh=)��"�����8F1qeޟ�˃�!P{%F�)R�$�Fb �~�HϏC���E�T�������A�@��B�Ro���/��!M
�sȗP�Ϟ��e �2��8��QZ ��(�?��A�מל�����N�۟Y�gS-��NM��i�3�fWe��MW��)����Z7�p�F�s$����%ϙam��Vts2v�)6��Sńm��$ߓ�𢩞�'�V4F2�N��$�m-E�fӲ]Mۙ�@&Ƅ�@M�M13�,�9 E.�ڀ Trabalho1/ModuleALU.ncd
 WPz�ʄ6UT3VD ED�)�{�L��H�JF�5m��G=û�?w�$�)�3q��m#A�,7��Z���[�������?�q׿�s��z����_�>?������S	 ���o/�?�_�i���q�P�V�E�'�
��a��^�^g���oN��-m��?�9�n���4l�-j��m�aDU�-̣���&������p��A5L/yM���g�L�~��V���e<QN��@ja�+�ƞ�������K��;�of�U>�s��o�F`E6q�<�:������ZXW��Dh�ɤo�SM��� `�d�atR��:�>2�0L����� �P��k�ޱj���vhJ;gF5�2��i�"Tu��^-oO2����KVn{�.U�e&�j�H�y"t��m��������f�b��_�~y��=��Y{>�;�o���qȖ%�~���1.��h�1�r�𴐮��0��<PF�I���;�5�*c�]�p��}��i�|!�+�o5�����O�������[x�412��m%F��b�=aس�s�^��)!�������6���f�.m� � ���O�3��(q颮��"J�����F��:K�݁�яH`^���@I�����w#��}2_XKd4��	[e;��ҏ5��n:l��^� �9�L���ϓ� �K�6�Yu5?G�� ���rg��K�v3_�e`aԭ��5;�d�v�_&&-P��F0��q��#��������<?��o��x�M%����{v��/�!�)Y3c�3[
��������pbBL�Œ����.S�=��|�1��B�l�ha'xs͑ZV��6҉=�n�����Q��L)iedxq/�=�7�c��GC�={',�{�Wx�<��s�����S����l����0%��]�x���l��������V��zu�9��ݟQ�a��*G3��4$4:r�OZ�![�GE�.ɠ,8���~�h�z6j#"�I�\����=V��
�\
� u��RC۷��"�?����fA��3�wA;l����Je�%hq��9�Nh���׶�ʳʄv?^�rM��(Yd��Bj?�%�`����1dB������A��P��:�c��R������J��B�kǘ*v���k	c����ZP˱uY ���]�%��-��@�&78o�e�GP#�i���ڴ��	���s�!�x�5�+i�8�y@@�!y*�r�y�LU���R��l��<�W���q��,���^^k��h�7n�e��Il#�!X�!�=����a�����)�L��8}��� u��1l-M�Nv��vt���/���&��'�R^ �{y=��]�P��/���_�y���$`F�W_�����zб�����u/�<$�b
I�o(AC��ɃX.�!`hLzl2wY�TW#�bM��O��yh��>*b����_����=�:���gz^ˢ�L+۸��V��<��d� `d=Lݧ-K�se��g��S�R�>kc.ö6��R�+���T]'���T�l�N 7�����.۬7]��A�ZG�$��i? ����=O�h��~
��oސ��Z"7�a����Z�ZA@�{l���Eo�;���DݼwP�	�+���Z����!�^�;�����=Y��R+�E$�ֱ�9=3��pz��R��Z-GEC����F#?|�A�8�I���������<�Iˠ�^�y�E	U�H�;���)A;�1
#��f� ���bq�YK%�&	���Mu�_˧Ӹ�96���@���@��AE����"�,�ZdǺ��a�|c�dU\^����3$P��4^�!D�����x�1�����w���GU�{覷L�y#�/�^F(#��!�l��T#ֳ�6�T�X�à��z��s�E����c�(J�􋐭�!�_��V}?�~�ݙ����Y��ќ���+jP����3�C��n@9&d_��j�'��;�K|z͊}���	�v�vr ~S��fkS����5�=�'���C�?6���a�%�4y�.��_�1)�/)?q�A�Zk��C������3���dM�K�ɣM����ۧ����E��x���������_���c#o�<sbс�@M<��*�6^ӹ���$o��G-F�Ղ���H�t0�i�HN���]� ���_�P���]LR+�I6}K	�R�������G����3��۶��/��á�eJ�����O�������/���ta��z�1�f��g��Z%���(g[؃TJ���y�m� ��슊�	C
ڊFA��j8l3K����hK�e����#��v[�gS�.h��S ��i�5����ƨx��
��� �p;�#i�ל�j	��Q�b���e^Ťl�Q6N�	N�	bl;&w�m�;C���U�7伩j� ����2Y2?aU�	��9P�GP����M8	l�wO���^�2�O� L�3o()����d�[vـ��p?�1�㩍�H���A���1L ������0�v�X�Y(c2�(at�˘]�W�_?YD���t�Ljl7O]��gr��"_dG�ހh�l�L�_b�9�9w���I���Ky�bͦ[�a&O�)v�*��wv�霪���q�	+���E�kͤ�`�}������n��UY8��~���F@5��B�2�HG_�ܬ(bh��$��S�8�"�1M?ԯ��g!M��=�V�����.-\BH��-��w�(���N��[��"�	z��ߢwt�L&3���t1��k���o��c��)���ΐ�f�%T���J���]����;��{¤ ?���.��V��ľ�S,�����o�:}��������'�H
��|�mXR��K�,E�G5�H,Ӽ���7�hᇋH����UC�ܰw�#�瀛%��k�b��Eh~�!���u�@E��h9)�
�	@�
���ubm��U�@_�U?D���L��I��W��t�Lr"�Rc֍�u�.�Or`x�U#�b,ί�s������%�g����3�ǩIY�T�N�@Mɸ�r0�C�}!:-v
k@3{�	ڳз�7ɽ'������4�{C��5���5�ه�/��R���m��Nm�^0p"�����MV��hj9����s��?B�[��DA�E��ŗ�A*���Aɣ%m�&l��?^���e��8�L�,�z��0�m�VXy4#�]>��ͷ���PB��`�$D|�ӣ�Cy� 1x<�rXX�&\�vd�>�g4=^��SY�ӯۺ��� ����J"3~	>J�<4'����Y�����i��D��Ng�����@-'Q�i���]��ac���4���_Ox�9i������{c�<�	L>��ؠ����]�[�I��k@��F�,b��	�&��8��Cӵ��MT������P�B����Ԡ^� �[��'kٽ�)�TU.�q�`S�����|;��GB�R���6?�2�T�w� nk�A�~#�W����A��9��긽M��<�@	�7 =[�36�]D�3����=t/����0u�'c�IXZs�j:��1,��e*}��CP�]w0�] 8�k	��>�02ؓ�S�!�mw�y?��yS&Y�&/�T/��	ۯ��8d����K�M��~e
�ĔRNO8��}[j	B�ݰy77���8�wxH+����O*t��{��������>��_2~�uȽv�T���%X(���c7�pt�ַy�7~cp��_?�Aq�a�a� ���P�%�mj�9(�z�@���xl��N]	�,q&�3�����þ��F��R|��&A�r��_�`v��k��;o��_��������ޗ�0��/C��	��G� G���edXx�y���%-?	�fl�0��zB;����7��n�||{\t}C�t�Wa������K'���J���P!��<IIj��r_{xbG��͕��	i��C�O�2j�/{��W�q8�l�_�<(�C ]y�ݬc��#��.i�/	�FG�Rf.�i����po���'Y�rs�C�d=� �ef�z�8�h���M�\�'�T�aJ��������[rI�sz�F���b$��Ί�m��cK�S��zѻ@v��Ԩ���*���<F�l��RyU>;U�6'�:�*�`LhQ�>���g�m g���(��\P��ҷ���� -1`з�}���NH���s��}��3�p!���̇2��Fd-���4��T$-u����͡
Y�AO��ɶ��D��"���/�i��r��A��^e �`�Q����*?"z�aV��]2g.E����i3Rď��ʝ����q�p(#{��t�ż˚h]���[�=ZÑu ��t:�~]i�3��2�z�$��)�-�)������4N.�W�r(���xX��g���wo�c��h��~~��8���Hߙ�!/���$A��-�u�楲��L|�Vc/㿎f���wn5��݄�@��9iD��r�]k����s緩�p��B���J\�}�w�'�C����B��NlG���]�L�FGUbx��k܂�������ys2�LL���#9a�� �G�Iq 1� �]����WF�[v�Da��sO}9�e��%� p��������bj�>���\���c_�����E�o����@�I_����}Y�Nن�cA�(���� ��d��<.Y�v y�+
��|� ��nfc]�������w
�0F�T)�J�t�	|�C��ο�D?|)}Mg��jU���A~/�� ��tA��x��ZLTB¿��� vQ�D�A�PT��ng��ڨ�����`�.�$�����!f��I;�l F��C���=ܪ�{0����`'�����8U�c�{��YY�7|qF@^��j���΁V����4C��lX��Ĩ�4�4D	M��k8�S���Pe��#5�P~��H��i��M���Gw3ކ�Jh+��(XJ'�oj���͆�`���)<,6dz�]���5IEQ̂��ZL��WCy��Ur�F,S5��J�D����n=�W�+�&,`k������u6��Hc�2�p���f�z=� 
i_�I�>99�iVp���}���I����>��2.{���ʭx���Efn�S(/L�"_�}��`~�_������\���Xo����K���҃�\ ��F_!��l�ёźה�$'Ʃ.�� -��{�9��Tr0���yĿ�I2o�~�iA i����j�p}�<6T4�# ���"Y��N
Y{R	,jnK�Cs�#���b�h�����/�g�<p�Av��ej=�>w�=V6�e�p#��1KP��m��y�Vp���n��O'4��,d��w��b������lx��/���ֿ!�#�D	�1�g� ��Q�Fe����ۜ� 
�}�׏'��G畓�~���qYXÛQ;�E'����_�-�sc��
���M�Y>)-,F�(�`_�����0�2}=8KN��Y$v�7"�1T������Po�EE)�s�������Z9�,�9 E.�ڀ Trabalho1/ModuleALU_guide.ncd
 �����ʄ6UT3VD ED�)�{�L��H�JF�5m��G=û�?w�$�)�3q��m#A�,7��Z���[�������?�q׿�s��z����_�>?������S	 ���o/�?�_�i���q�P�V�E�'�
��a��^�^g���oN��-m��?�9�n���4l�-j��m�aDU�-̣���&������p��A5L/yM���g�L�~��V���e<QN��@ja�+�ƞ�������K��;�of�U>�s��o�F`E6q�<�:������ZXW��Dh�ɤo�SM��� `�d�atR��:�>2�0L����� �P��k�ޱj���vhJ;gF5�2��i�"Tu��^-oO2����KVn{�.U�e&�j�H�y"t��m��������f�b��_�~y��=��Y{>�;�o���qȖ%�~���1.��h�1�r�𴐮��0��<PF�I���;�5�*c�]�p��}��i�|!�+�o5�����O�������[x�412��m%F��b�=aس�s�^��)!�������6���f�.m� � ���O�3��(q颮��"J�����F��:K�݁�яH`^���@I�����w#��}2_XKd4��	[e;��ҏ5��n:l��^� �9�L���ϓ� �K�6�Yu5?G�� ���rg��K�v3_�e`aԭ��5;�d�v�_&&-P��F0��q��#��������<?��o��x�M%����{v��/�!�)Y3c�3[
��������pbBL�Œ����.S�=��|�1��B�l�ha'xs͑ZV��6҉=�n�����Q��L)iedxq/�=�7�c��GC�={',�{�Wx�<��s�����S����l����0%��]�x���l��������V��zu�9��ݟQ�a��*G3��4$4:r�OZ�![�GE�.ɠ,8���~�h�z6j#"�I�\����=V��
�\
� u��RC۷��"�?����fA��3�wA;l����Je�%hq��9�Nh���׶�ʳʄv?^�rM��(Yd��Bj?�%�`����1dB������A��P��:�c��R������J��B�kǘ*v���k	c����ZP˱uY ���]�%��-��@�&78o�e�GP#�i���ڴ��	���s�!�x�5�+i�8�y@@�!y*�r�y�LU���R��l��<�W���q��,���^^k��h�7n�e��Il#�!X�!�=����a�����)�L��8}��� u��1l-M�Nv��vt���/���&��'�R^ �{y=��]�P��/���_�y���$`F�W_�����zб�����u/�<$�b
I�o(AC��ɃX.�!`hLzl2wY�TW#�bM��O��yh��>*b����_����=�:���gz^ˢ�L+۸��V��<��d� `d=Lݧ-K�se��g��S�R�>kc.ö6��R�+���T]'���T�l�N 7�����.۬7]��A�ZG�$��i? ����=O�h��~
��oސ��Z"7�a����Z�ZA@�{l���Eo�;���DݼwP�	�+���Z����!�^�;�����=Y��R+�E$�ֱ�9=3��pz��R��Z-GEC����F#?|�A�8�I���������<�Iˠ�^�y�E	U�H�;���)A;�1
#��f� ���bq�YK%�&	���Mu�_˧Ӹ�96���@���@��AE����"�,�ZdǺ��a�|c�dU\^����3$P��4^�!D�����x�1�����w���GU�{覷L�y#�/�^F(#��!�l��T#ֳ�6�T�X�à��z��s�E����c�(J�􋐭�!�_��V}?�~�ݙ����Y��ќ���+jP����3�C��n@9&d_��j�'��;�K|z͊}���	�v�vr ~S��fkS����5�=�'���C�?6���a�%�4y�.��_�1)�/)?q�A�Zk��C������3���dM�K�ɣM����ۧ����E��x���������_���c#o�<sbс�@M<��*�6^ӹ���$o��G-F�Ղ���H�t0�i�HN���]� ���_�P���]LR+�I6}K	�R�������G����3��۶��/��á�eJ�����O�������/���ta��z�1�f��g��Z%���(g[؃TJ���y�m� ��슊�	C
ڊFA��j8l3K����hK�e����#��v[�gS�.h��S ��i�5����ƨx��
��� �p;�#i�ל�j	��Q�b���e^Ťl�Q6N�	N�	bl;&w�m�;C���U�7伩j� ����2Y2?aU�	��9P�GP����M8	l�wO���^�2�O� L�3o()����d�[vـ��p?�1�㩍�H���A���1L ������0�v�X�Y(c2�(at�˘]�W�_?YD���t�Ljl7O]��gr��"_dG�ހh�l�L�_b�9�9w���I���Ky�bͦ[�a&O�)v�*��wv�霪���q�	+���E�kͤ�`�}������n��UY8��~���F@5��B�2�HG_�ܬ(bh��$��S�8�"�1M?ԯ��g!M��=�V�����.-\BH��-��w�(���N��[��"�	z��ߢwt�L&3���t1��k���o��c��)���ΐ�f�%T���J���]����;��{¤ ?���.��V��ľ�S,�����o�:}��������'�H
��|�mXR��K�,E�G5�H,Ӽ���7�hᇋH����UC�ܰw�#�瀛%��k�b��Eh~�!���u�@E��h9)�
�	@�
���ubm��U�@_�U?D���L��I��W��t�Lr"�Rc֍�u�.�Or`x�U#�b,ί�s������%�g����3�ǩIY�T�N�@Mɸ�r0�C�}!:-v
k@3{�	ڳз�7ɽ'������4�{C��5���5�ه�/��R���m��Nm�^0p"�����MV��hj9����s��?B�[��DA�E��ŗ�A*���Aɣ%m�&l��?^���e��8�L�,�z��0�m�VXy4#�]>��ͷ���PB��`�$D|�ӣ�Cy� 1x<�rXX�&\�vd�>�g4=^��SY�ӯۺ��� ����J"3~	>J�<4'����Y�����i��D��Ng�����@-'Q�i���]��ac���4���_Ox�9i������{c�<�	L>��ؠ����]�[�I��k@��F�,b��	�&��8��Cӵ��MT������P�B����Ԡ^� �[��'kٽ�)�TU.�q�`S�����|;��GB�R���6?�2�T�w� nk�A�~#�W����A��9��긽M��<�@	�7 =[�36�]D�3����=t/����0u�'c�IXZs�j:��1,��e*}��CP�]w0�] 8�k	��>�02ؓ�S�!�mw�y?��yS&Y�&/�T/��	ۯ��8d����K�M��~e
�ĔRNO8��}[j	B�ݰy77���8�wxH+����O*t��{��������>��_2~�uȽv�T���%X(���c7�pt�ַy�7~cp��_?�Aq�a�a� ���P�%�mj�9(�z�@���xl��N]	�,q&�3�����þ��F��R|��&A�r��_�`v��k��;o��_��������ޗ�0��/C��	��G� G���edXx�y���%-?	�fl�0��zB;����7��n�||{\t}C�t�Wa������K'���J���P!��<IIj��r_{xbG��͕��	i��C�O�2j�/{��W�q8�l�_�<(�C ]y�ݬc��#��.i�/	�FG�Rf.�i����po���'Y�rs�C�d=� �ef�z�8�h���M�\�'�T�aJ��������[rI�sz�F���b$��Ί�m��cK�S��zѻ@v��Ԩ���*���<F�l��RyU>;U�6'�:�*�`LhQ�>���g�m g���(��\P��ҷ���� -1`з�}���NH���s��}��3�p!���̇2��Fd-���4��T$-u����͡
Y�AO��ɶ��D��"���/�i��r��A��^e �`�Q����*?"z�aV��]2g.E����i3Rď��ʝ����q�p(#{��t�ż˚h]���[�=ZÑu ��t:�~]i�3��2�z�$��)�-�)������4N.�W�r(���xX��g���wo�c��h��~~��8���Hߙ�!/���$A��-�u�楲��L|�Vc/㿎f���wn5��݄�@��9iD��r�]k����s緩�p��B���J\�}�w�'�C����B��NlG���]�L�FGUbx��k܂�������ys2�LL���#9a�� �G�Iq 1� �]����WF�[v�Da��sO}9�e��%� p��������bj�>���\���c_�����E�o����@�I_����}Y�Nن�cA�(���� ��d��<.Y�v y�+
��|� ��nfc]�������w
�0F�T)�J�t�	|�C��ο�D?|)}Mg��jU���A~/�� ��tA��x��ZLTB¿��� vQ�D�A�PT��ng��ڨ�����`�.�$�����!f��I;�l F��C���=ܪ�{0����`'�����8U�c�{��YY�7|qF@^��j���΁V����4C��lX��Ĩ�4�4D	M��k8�S���Pe��#5�P~��H��i��M���Gw3ކ�Jh+��(XJ'�oj���͆�`���)<,6dz�]���5IEQ̂��ZL��WCy��Ur�F,S5��J�D����n=�W�+�&,`k������u6��Hc�2�p���f�z=� 
i_�I�>99�iVp���}���I����>��2.{���ʭx���Efn�S(/L�"_�}��`~�_������\���Xo����K���҃�\ ��F_!��l�ёźה�$'Ʃ.�� -��{�9��Tr0���yĿ�I2o�~�iA i����j�p}�<6T4�# ���"Y��N
Y{R	,jnK�Cs�#���b�h�����/�g�<p�Av��ej=�>w�=V6�e�p#��1KP��m��y�Vp���n��O'4��,d��w��b������lx��/���ֿ!�#�D	�1�g� ��Q�Fe����ۜ� 
�}�׏'��G畓�~���qYXÛQ;�E'����_�-�sc��
���M�Y>)-,F�(�`_�����0�2}=8KN��Y$v�7"�1T������Po�EE)�s�����7���6�� �� �o� Trabalho1/ModuleTest.twx
 �����ˮ-@C34C�Gu�����ӏ�7��5*x�Y�c�In̒�mQM�i��|6��u&��p �I�쪞鴀���2_�_��_� �8|��>��#���$C����ݬ��(!���a�sk�Z͍o���鵃�zے�u?�(�s�K|����`��\(��w����v8\���W�����a�}�����}ߛ(�"�AA�\�)l�Y >R7�\�~L9��Ud���\�+��pwvxkX�͓"L}���@��h�yGgl���0=�@0@��ԯZ��]��z�K�kp�� �lWYV�+���2��l܀�W��ζ-�aHp�.�r��o�}�_(�ĥQ���d������i��]�m򹛻�p^�(�6n�6{'b���,�_���C![)ezR����w�)+�2�\��#槃8
)np��|�����p��;��9ɋ�j8	�Xm���Nk��ޱ��65$�7��HL��_�e�Bha���k��)C�7J܍��<|���H�� �s�]�o;/l�Věkh'����Fb�ύxuTk�&����4b~G��9�M�^�Ȱ�j� mxA����@מ��`��4���)1I��H���dƵq�ހs�)��N���,��d�Oi	f
b#��;&]e�j�Y%_�%l��d,�zx ,�����d�6z�?�X�K����D�+����pÕ�L*�2��QY�r��(>���}�n��1~OrC�̙5���y�����p���l�� ����,*]�%�J��w\�yؒ������-:H 	��-]�P�B,�p�ң����.k2g7l4�j�]�@��:*B�a�pG�;9�S�?�N+��7c�^���%�W4�t?)5�d����b��]x�LB~�yf�z-�}o��3��'Ҙ[����K����@�����������O@/ٖ�$���V�����mi~� �\�-��{`��Q
G�n�_�E�7.�ކa-�9r'hoX��]�8~�8`����B�#��0��w����|�y��^|�\Q�MQ�B``��l_���2��Ê�Jz�8�b��K!Hya8C\���tk?iwǕ���:L�H.��q�7M5X!�ǏңF�����5֘�W�O9ů�w�M�(^V�T��@��h�k U!6�_{��U��O��/����&������/~��S|��/X��}4�7aM-�- J�I�H���\�GɵL�����/(4�y ��a� 4W��l���7�j���*ܓB���reH��t��1j5P4"M�T�e��-�����eHĸ������8HRC�!�ͤb#�V>yF��{��HaR���c5���aͥ��~TpE>:C�.l��o�VGukčm��2�+�,XZ\!2�A�^���h�9�=��!=�6h�879ʿ	�� �n�������Ԥ�I��_c&v��Ʋ�M��U� �S GX���,��jh{���ǙVǠϳX�����x �,���I�AJ� =�sM+(�Ꮦ�=H�3C���|��I��q{����1Yo +C�Z�U�$axw c��mG�<�M?ug��^����,"7�^y�@�=�ύ;)�h��g�(�`�W6�=}s6�|h�i�� m�B���8���G��GA�H0�O���@�<K��)C���1�z�0����7�F��Sd�-��jF�'��;m7�X��#eH��ɝNk�Vd˵T�%�@��9��MI��z��Q�Cf����������ux^�Qʧ�E>�
6a�`tiH{J�����Ĝ,�G!-C��T�fә^�R�:��J&$h��+ K3��^s?T�%���rR�j�Q�������\�5��	R8U�t�ho����m��A�c��;� �.�Æ���1�-v�%����^����c� �<�3P����G�8��K�3��ء�aw�)y|��͖����+X���1��8��m�X��猅?šퟟד6h��5�j�ML�� ��Ɗ������pl(,B�u��Qv���wZ�Пo;Jꓶ���;��ga�F����F�	��ѧN�H�~q�}�E|��H+���'?�^u:�ӻS��OHh����Ɣa�xY3�+Գ�D�b�o/2�vnh��v@SoK'���31���R��:������o�5[���υؼ<��H$_t��\��߽>x�����
#��#L"�I�O��]❰+w�/�2�/A¦⢣�:��ɓ��yXp3�p����@�K��0�ǁ�ץ�ܚ~��m��9z*�L���k��p����Y54ъY�X�������j�JHe.�e0����]7!�#Ҧ��Y7u��t����*���F��8���a��x@�µ����a��>����vY>��.��=72���#ve�ObfTЌ��)�K��V�]F����<�<����H�K�%>�����ԗ޵pubx��f��M�Z��M%���j�������J����N�)[cJa��w��
^@,2��c�sFu��jD5)�I�,MR2G�]\qO��1�Wñ�!����G�:g��.�.Ɖ�߃��/Aw��_S����2eL��욜���$�%�$
Tm
J ih��Z��)�EQ�"�P=�a���͐�}ih��]
WƜlH�D����j;%��9'w�;��}OT8�4��(.�ؒ[d���`�`_ɕQo/�8�pϲ��fəF��[�!�Zr��L�s��UcJl���ܭZVV���ȏ�K�%��`�b�ܕ��w!-3�D��f��J���H~ˆE_�L����RoԲ^������-So�3d{�h�B�<�4i��liNy��vY��P_�>F �K���J���:9��];�.�I���/xv�ة�1
�ߐWW�%$�H�Y�<�OP�	��:�I�\�ґl=*J��=�d�^/.)�<(�Jg��M��8��6:cь�Z����݄�2@�3�R�,]��:�O���8�;5��Q��8���sw9���B_ګh��,[/aH��6B�,0�}���l�6i�]����%�|����%����+�`�&���fr/W�yCa�����	խQ6j�/:#���H�bقna��t���k��E��I���8�������.�ӇvBw��yS.�GDP�.���thN8"(�(�6�i��U7���]���
����}��K��?�6j��7SL7{��ȧ0���%@P�Q��ֻ&0��n��,���ag�%k�m�μ������}ʍ;gރuRFw7HAS��E�nIB7%�[�P���a��i��#��������J�\˛��0�A����y�Cp��.�TQ��mΈ�W�Ycc�L�+g�'$�M6<���ZW!�+5-!�KP�Dy���D|�a{�+����oV ���,.�85_�p��7^
@��|\5��|'���O\}��f������8��*����LK r(�>��m�Js�%�+���%�9��1[�o���o���X�3#�4>��0"�Cϑ/�gl:�v����Vp��`�K�|�-���<X��4�`��X�@E��g��y���z�G'��>����3����Z��r#@�ȇ&��%Ảaf��)
�'b@�?
���ZL��+��;X=�𯏳����Y+�<^���wt		��>������"���ˆ��=om��2%�������N͑����3H��+/�R���b���o���� ��JB��KY+\�!Rr�{ʠ{����{����vV��\ّ�'�E�_�d��h��R�[��]���EÄW߿������e0S�&�d��aq�6@X��`\���W3$�?|88w���+�~{�W�d4�C��Z����/,��h�7X~\@{^�[»����^��H=%iA�AxW�� p\�&zM�t+���n�,
N?��&���(x@$}`2�� [��b�%�ã�,f%9�S��χ ~{�;xy�v��j)�>Q�{���O���vAb'�\�n��ە�g�i��!�8�E��,ۙb��@Ħ��3pq�Hv�S��-($=�)�7YJFL�x��H��-�MM�Ta��dFccԉ�|�. 檓9���Y��n�qiG ���!g�D%<�lƂi�;�Aԥ���
�D ]L2����+�K�-�����ԥȽFk�ڸT�
A���Bq�cykDR^����\ߎ����g���@���y��}�c�q�(��@��ɲM8�
�ș��B�F�-3�㗍2���<9��]�����%��<����(qg�q|�W�:�/����Ug�ߞ*�kO���7����L�{��qS�*��uN���X���%���װ>	� ?�X�tD��d�������8\����OX��ϯ{o��<��t�pg��Ν�n~��Y�v�x�JhF�����'��?N��o����I���g���]����r����^a#�8*���8�O�@��/��t�r8�w�6D���w���:�w�#e	��O���ѝ��-_Ŵ@���m�
c���n�qӎs2'E��ƶ������r�IW��> �-��%*+'�aFX�cV>�=`=��9�� �� �1 (� Trabalho1/ModuleALU_pad.csv
 �����̉0uC34E�Ge�߅ 3�a܈�Zpt`T�6�A�;��Gr����4fX��E�)6㔍'w�3��ˑ4�h�&�h�$W�W�����s�(�~�s�����/�'�Ow����	}
C�~�z;a_���,�w�����x���~�2I �N��C@�u���������ޠ/��3�SO�~���1f5~�L&G�?w��G����!�~�Kˎ���?����E*S�#M7k!�羍��w�i�o�j��3=�(�]:|>��`x�����@�|�>��f�����N���6xR�K{�F�i�U�9�6����Gx5*�>׃R栅 6�7@�:gQ<���Ώ�oS�lf���m8� ����E�7X�����ڴ����M�_	�y�}�fɍ�o��������PU����f����m3�A.�AFt�txy�&���1���xmr�"}�C~cηi�,5�m�|�=
���[y3���u.6�Z�L+w���O��/K���ϧ�o=��)�V���ܪ�b���?\ݙ�O��᛫_�Z4������Z�+ؼG3i韎��ͨ;Zty�{���
;�?���#I�=�B��K����y����u��PYo������0���?m�6��)O���[U����j�˘��m;�}P���l���Ǒ�\���{��A��L�B�P���D��(�R!R)C��4�D�߇����=$L�,�>u�!e�8[v9p۸u����EM>z�L5~��
u�%�+-(��ެ�%m�Ƌ{������p����S��!�,�`�V��͑	?7_E<?��LC|Y��>�qp��`3i�U��+h��B�I�P�j�>j[�D�r&���%��h^Th�L�%�n6U��H�����s��5��[�f��G�
�����o�fH��g�r݇X�`������
(���8)����07��X�K@Z!���'e�Ba`)�֚aPmTިr��o�d`��w����v��Z��)�_���f�!��Q)���QtG�}��D��zU/�S[����v^qr�F@,�~�#�H	M���N�Kx
�}]��B ���~c�Kƨ�5����� ���geT-�E7qQ��3���EB�z��� U��ڏ+�q�d�����Rh����O���5���hOP��R�R��$�|�@l����n!M���s��ɇ�7]咒)Gj&)X%�&����,�کAɚNԓd4jZ ���h˩����uƈ�D�
v"2��M���c�+��2\��"yK���/�Lt)��j�-��ڈ������-4��6��Xi �!u��ZBh,�J*E@^��/}��LnQ�0-I܇e���k���q���I'Q�9]���h6��_'�j�VΙ]���ݮ�vzn#54L@�_�������jr��s����Fm�_a>�tZ-$�C�0N� ԝ�����[��B~f��n߿Ə�������Q
�憶C�s���Q��-�h����I�
9\e��m2�X~"f�0y^B�Ԣ���,�^�����-���4��@~j ��`|g�;ukV�k����n͙��j%Fai��'A��S����H5p��~�T��N�^-��U���.��;�x�=rJ�&�4�U��K3Jn��Wv��+�XZL��wXt\d����x����nm���I�`W[*3�eԚ��$0kA�F�)65�\Nc��!"A��x��Ω�(� �!t���-�9qn�ޢn)7ȍ�E�
ށH}��~�zC��4A��g�Pp{�5�QT�v'U��K��x����!�����l��{8��Ca��QR+ԭ�P@B1!�!!j���f4]��kXB|�A+2��Y��<��_���{�;E?��U����_��$r߮#c�l4��#�,����I�J:jk!�!��"��	�F$/l�- ��|4�"�FZ*����C�Wl�K��t\�O~Si��Ԋx΄���j�����~��q��#�;:hwAHb�z��\)�@��䜩���G@�ɸ��m�z���6V�)N�l�gV��O��+��iڿz�i�o����R��RN՗�T�� �{x��Dg$u*�����:�PHsr^C��7�%�PRPb�y�AV�+�
�d�2b �!+6Z5��n���#���m=��wƋg��>�\�(ЀT�n�M�P��]�rl�*�[�2U�8�}EE *�"�;GE�`������=�G7R=�6
��_��gP�����}����0S,��n���$�%7�HT�W9&3��Ϊi:!X�����8q��@M���X�J�^֕X;$����+� ��~�.tU���eJ�L��mF��6J�
e�*9.���=�x� ��Zy�8,��Aف�4ю�9�6���� ���0R/k�D���#����쩺t4�+P����}�ti�9�!?S�q�-��QF��+����(�3�GY�*o(>P�P|����,�V5���)e���B�0f��݀��# #�D&�jyt���M!��'	� .�6x� )�[���b��A�+��9"�5������ɝ�T1����`�.�5D�)��>P4���05�t����>n����7Ͱ�nʳd��S���C�9w���b��Dy�b����ovO
��0A\࣒%�R�/R�4�
�92�k����6������?�iM����pY�1��Ưz�n"�I�5�x"w�;RH�U�t�x������o�����jҔ������Oޝ�8=��{x������vԎ:��kN�Q�7:��Q"����p�5�
�0c{��v
/�j�c�t�d��J���E+�e�b=�:���9c�����o��:��q�2���?B��aS�v}]A���_i@��	b@q(v��d��u�:E�٧9c`�W���F*�rE��0�(����8�2�0��nJ��~A+��`O��E�Sůs�M���A�a�@Q��U3���6�r���7�d�_ө�9�b���ZUT�쓼>�S;���$4�s�o|S)LQ��e�I.�
�a�ʰE����.�)<�1�C��C����̿�S�+�
.Rm5����k���NR�P�r�]��[74�2��+���7:��K����잉E�6"�n��f
�%��0�=��!�M$E����*�Z��2��7�Q�OϟtH9��Y�,�(�M��g*�{���;&�|S^f������s���'�~�Vxbeԙ.`ǘ$�d{^��*"�%i�I��.���俕 �%*땅Ru�K,�����o�E�2��^! 0\�_���d�󔽛;��<�ؒ�~9g+��y�Z�� ��%�p�{��=�('O�%/;��j'b��5Tr�KU��x?L^������c /�R�Ϟ������ΰ�0���x�b�lT�l� ��7˘�$E6�~}9̃���F�x�P�=#$l��a���o�ֳ�syu��盯�?y?�l�N�|����Ξ��Xw�3�Twy�ӧGH������Ǩxx'KQ��]��4���a�9��vN�f�������#f�מ�wv�OW��g���?Ƭ:�2;4����u����	ӟQ�P����5�T��S*���W4�� ��ˀ Trabalho1/ModuleTest.twr
 �������z0eD24O6^��W�a��p�Jl��ġ ջ�8�ݰhcm;l��=�r��47vb�������9Uuv�����qRV���^!g�[����7i�e�׎cV��]n�%�4:4��\9^�r�+�ѿ�Iǝ�a��A��(��d���w�,�����O6�9oLN̉��p�ڈ���3�Q��<�ud4 ��	#BI;;,�f��k�Q<�Ϥ1��w���(3���^|X�]��'#����^����ǇWv�E�}�(@� �=�qېqlzv���7��2[o�r���{j��t�"�T7��Hquݎ�47�݋"&���ó7^\>�Ŧ�1N���6�Y&�}��r'C	��%t�r>���3���ݚs���� ���sh&�-�kb<���?	�����q?<w�!,8�|/�\1����!N�<�a���	�F��?"r<�Q�=V��k�-��f��H1�!�N�@��}���qH�
�+t��B�[7uѭ��!�.S�9&@�B��U�aPT
jP�*����S��,'��Ui��MG�q�$��Z_(I�>��&����O$r�+�h�V��L^�9�=���Y��t&@,��n�5'��A
@t�7��f$ D�� ��9� ���W�G��� R4a�+�EI�+>�A���	�2"��/-i�4�����]:D���tLU;�P$P�/��=*��߼倫�� 5��#�#�/M$��.�Lb����[&�%T���L�P�u���g�ب��t����˃���Ô]���\�)-���>BBC�1���+��_FH�%�iͭ�]7�"磰9�1UeK.����cҕ���"�2�&U���ޢ���EQ��8�#���$�G��>B2�Tm��1!��,J��;�)o�
�儽mPbB�Ǫaߨ�P4[�Ud�����r-;�E!.�B�j���.����\cw�$�]�����l�/_�דoA�(VmQ��zR$jY?d-��/��wu��r�����w=�c��Ŧ[�K3J��.�*�}4�?� +s��Sqq�)mɸ^�4�}��r���B�\L�k�8�9��-���"=�2�n١7x�F/�_^��������r�(��D_��.W��[���^db/��.�?�r<A/cQ9�� �� H�1@� Trabalho1/ModuleALU_pad.txt
 ������?�@f334D�PU��z�/w#D��j��j�r9QS��ft�y#�n�p�r^e�Oy�r;q�w�fރ�ꤍD��E �|P8O�~�i}i�������ɏ6H�X?H;q�A>��SG��N^�"����v�;��|�����3��,�2h?�Z$�����_6�W��<�1�d2�w�'>���g�W�2������!�¶�j���}�a�=��������z�E>�痜b���#'�M�>F��n{�R+2�ύ܍��|����r�����O^��I���PQɳi�L���V�~c���ca��}Y?�)��|��;��_�e��=�(��٠>��h����3c��V����'�|�eL���,ܸ|�����9��Ϻ��m�򃛳���Ny1��_.��_�(�9�|�Z9����7m<�1FB�=�/�B����Pm/`�s����Iy�����	���>���g?��׳�OUR�����=�ofc*�������9;a��wA��PZ���O.s��!�Q԰W���5?eo�H�3�]�A8b'ǏwG?�Ȇ�nM>,0[�ws��ϥ�����qr�W�o���k�亲})7����:�p�O�$��s35Xa�׵�����ݿ^֍��%�
��6���花�r}<4~Rn����_��ϼ����}���^:]��bc�?�����b�9��S��ק����9�A&���ܮ>�zu����^Z���>�z��f\����|ї�	�:���Ӌ���8��<]�=����Ylf���r�}$��:2����{cؙg��W����/L�i�n�jf�:�]M}RIe�mF�_Q��ea���v�a����u�M�I�Z��`?ئŀ�w�!���8G��UDP4��WX62 ��DCҰ`�W#�`�P��MT!U6Tݳw��,Y`v��h����	��0ڧ��z:��A�Z(R�sXmk(	)3b�U뼲��a���Oh�:�,�zexJ�*w��b�~V4Z�q���|�������Փ��P�-G;o�g�T`t7�^�p������3�s����>�%��,�zi=��0j�?4V!�6���#��X2��=�sg�-#pjݢ��KGZ�����o�J��kK��+�fyiJc���[��N~�pʀ1�O���_��НH�T޵d;�rƎ_|g/X!Bğ�[?�f j3�Q-�2)�
��L,�JX�+=<���N6�P�P�R��p��C�
����_hrSz�8.��*Y�s�� d�,(��R�~�XY�ҩ5!��Ø�+���Oq�J?�f�y���?˓T�s	'lÄiS�<k�z03�0�-"��]{I�w$.���'B%װ2�i��Xm���j�C}��X�
E����𙜼Z��� ����ּ�<��z03�W���%z������RA��Oa�pbP�,�F�A��0ϩV��R	hԭ�&E'��UJ�`w~.���I����e`�˛�;!��¹��H����2�����5@+}(o���		��\�J������
j�LܠQ�A��|KHP۲Z��g�P�RX#�8��4�v�������Ύ��1�5E���n҉�=X�3��7,b�N���[��"�mw������*�Mw��|&dx��7M�6�zk�<�AD(YDB-$v��v�q�1�$φ�ὂf��ӌD�(w�$����(��YŘ���;A#�@vБ��Ӌ���tuZd���2�/�?=�l/�4��rk�A���!CY�P�J��l|�^@�bP��e�(�A`���}��bdCRH��SG 3�װ<�t��c��{���P�h�>*�M���o`4%i�7�1'V��#bI���2i��H���B����K�9�-$�8ު��h���Q\cR�FG�qTl�B�� sc��R
G&�&���3�u�ƞ�\0k4��e�-�����ed����8��O� ��49�|.jIܘ)$���t6�$�6�ȕ��#��3T{L0ڹ�A���zb�Z�'Xm���&�cޗ�/-���j}�V�G�������ܮG��T�}��N�*gm�}C)5�\\�X�4L�7��Bd�ȃ}��.�ĝr>���3��Z5$�7\��=�Ӧ34�����닃ޛ��$d�y�BU��4e�hs�s�0�I�3�	%6�h�cce ���s�����@f0�7��8X,�?C�gv��ݝld�����Jo�C7���ˋ����ލ�xII���`pI��h�s�kX[jj���x�"�vw���C�_�������=����k#Y�DN>�����Ra���ж5)�Q+l�{%k1�� ��C�\V	J'���g[�8gb��xp�7����wĕRT�����|���2_}���ac�#��;���(���Ϯr�R�DN7�/[�a/�������0Хρ�4a��90<d��7Č{��[��l�-e~;�!�n,�G�����Óû"FȻ��}���r
��L�8����7x
xne��	��n-$2�`��i������πF����<�(2"��&R������s��?'���=�����k�[J��Ɂ����ǃgxڍ�J���k�.rh� �b҇Ã���:��{G�O��"p�fl�~�'�G$B���0"]6:�B�-��ԡ��Fa#��@>���,�������3�(g�ۮL
'aO�D��%b6�$�"�Su�p{��w���+����S��$���ËŤ����DN?2�����D9r`yXZ0m��cR��?��I���T��%�E�$A�@��-�F�DJ+b���͍ԈA��Ǡ���ԍu���F���S��lw���;�Z��{���@�o?��-% ?^0�q�}-%ay�D�B�1"�e}��/4�h[4I��DN/98=�B{B�39�<�t�Z����g'��J�3��B����2-�;$Ȇ�ţ�D�uE��:U�'���`k#Y����ꏇ�IG���"Fo3���fJ�>8g+VG��8=����.q�XQq!/l��jIm/X�v��DI[��$�%s���k����lJ'�F����Z�kS���%�9E�0�*��ZB�~�N#�ZN�DN����v��gs`yO�G��;F��M*�ؒ�K�3��$�Hl`3�c��"w�}��/����Pg~Xu�o�֋8�'�\Xg��d��� ��w��%)��,����xکb���{��Y]d�e����xl@��zg�M��0���]���j���?U�;rn`��o��>����F��@g	�+�/�D���&�!�֘@g�A��*���al�z�Y�[���A�C�����[}���J����T/��O��� �q`y �jB7��Oi��p�CM���(C��	|����V�xI���I(�K`��>)��$�^\BD��''�i�G�� Jx�l"�(2�\.ت��b� \�q��;��ܨj��
����JoU�T����j��"��R'�vԟ1�@
�K�!Th���'�G�D�#����]�{8�,�}��.�_�6L!x�ⅆ�����u"�#�������8��ہ����P~'bk��ω��eR@��WR�g�N.pD�]_I�sڪ�@�����!����k��-�I��ٔ�ɠ�',gKW�$��!3(�Z,�l儁k�\ObbdBd35����&0Z��L�a��bk��.��3Zr^�P"��H���8�qN6�&5���R
�ז��O���Oh����wv��;���!��q�A�R���k�A��o?+,��?!������$R�0<bNf��"q���WP�1IQ�&�L-2~įv���vՕ"�	".o1�Ak���`�`F��U�#H��"�	V��A��;�㔋tLغ�p����s`x���#�3���PdF��Z�#�#fR��	
4e����
4d,CS8�:U1&��V�o�h����Y��\*?��H���9�J!ˆ3�ZU=��TdD���D�{���^���)ɧ�p�ZԚ�*y���¯6��
�p�n.��9�6��Z�������O�M��{�Λ�?��s�߶�?���_��������<���y�V�S������vࠍN�`��͔����?�S�u���z�� �����9���^nμ���Κ�&����י�+�)�Q�6��S��5%���`�2���'�(��r��O���8�� ��^q� Trabalho1/ModuleALU.unroutes
 ������ �%T33�D�8R� X��Q�p���[��c������ig|��I8�B@����b>bZ�{��ڴ�em��U��c�m��eKX�/���Qg*UP=�^�]Y��l..Q��kKQ�aa��_cQGD��}:��+���qв�rZ�O�	1�*�S�O��-��3�� ��̀ Trabalho1/ModuleTest.ut
 �����Μ	 dC3?VO{¯�JY|�RZR�V9!����7b�U_}V�iF�?,�b՘�&���7sL3>�+�Z,��>�Is\�?"m\��*;0"���Rl�pI4�A�Z�fM�{��N�'n��.� �>�_>�X��E� �1���lG<a��1��S/�g��v|�e��Vp�u�.?��a���N�/�~앦3�{��~�����˂�Ն"P-7�>�٬w~D�倣6�����ʳ\Y�۟����z9�� �Kd7�����5�� �� �:��� Trabalho1/ModuleALU.twx
 �����ʮ-@C34Cw_�?
?T�����|����4�ƶ>
4���*VQeڦ�+I)��'wc��
O6J������~1�|����|�WD�7/�Lmy;8�{�J���&�y��b{��J��[<4�y5��������-E���W����!,����z>� ���x9v#�p<��Fs�ݛ�;[{���#^`Qz����n��/�u�ߋ��Xǈ��ߖ�0��^�uU���s�������K�[6L�1�}s�ӥ���.��S&�{�0�`���\�i ���v�E�������Nb�
0W;�d&��l̀�W�GgY���8c��[y�.�u�8��Q���bjK�f�s�����\�y����4�
0�������Iط�:qd����N3Е�"��S�)A�O�2�� )��s�jw�@��6�	7A��L�?���Ӽ+���yF�;{���j�M� oH�i25$�7��BL��_�e�Zh_���k��R�"f����o���gA#�x2 k3?5���=q��!��$ثA=�4�^�/F|kèz�\�/ݘ卑���� x��6Yz�"�a�P���v#^z��{�ӈ�2h��&�LBi"f$�i���z����a�?&Y�%��Oi	f
b }�]�.�e5��qM���Y=�p�Y"��x ,����*Ǜ-�����X�K���%Q1���#0[�dv#
��S2�+>NVz)��w|v{�x�L_�����&M`��c奍Q���a�$�I�@+! z����i]����Y�;W��)׿��� �\�(f`��J�K��<��ɜݐ�E�.k�0�1XtT�)�x�����kn;�ڐW3o<9�댱(bQ.Q�3L[��Y�?�.��*����b���P�g���7��G�j4����Ow���&�	��� 8�r�m��yao����������t��2A�l�[ �]��2�1kGhe�)>��7Oe����V��Z
�Z��ic�4�i�բz��'�~� �R�5Z\zɆBÁ����$?^�}V�]�&M.(�v���V�00N�6/�F�fʥk/`�k���C��lk%��<��T ܤ��tk;ioӝ�h�:L�H.��q�7M5P9�Æ:�sq���c�1B�-)R~r�L��Ϧ�/+* �J i�ĳ��1�*���������MO��/���D&���0p�y��[��Aof��(:,�M+L�SKuH�ByB4s����mS#���9E��o$���bGp~lo��,;#z�TB2#Ba��[�hS[�L��.�f-.��I�򃔬����K M~�����T�K|pL-�8~ Ä�$=��L�F1��5c�junx7�*W`>�WLg7_��_ʑg�/S�:@�e����Q`�wQ��H&lQ�!\�R����$��J���!�X+"��&�#�s�Z1j�TM��d��6��'�RO�A}̙أ�J6��d�rML����`$C�k3�/?��c̊31�3��=��d<���:7A���X�Y���\�,�y�uP�34<L��g��E#��ކF�!��[��d;����%�I
�õ�o��(�8�=?t�g��^��f���{��j�(�t��]>����eL��V����>C�ELo���-1��xB>Z4s���
����.Da�^ =o��nbÈ �`;�C��P�'��Y"Ѝ�O��v�o&X��#aHݣ9��q5�輣�錺%�@��9��MI��{��Q�Cf����������ux^�Qʟ�E&�	va��xtiB{J��'QHS	�N\������|'QL�s)�.s�.��BbA����d	fr7�KΗ^��d��NJY�U�<�{v䥙�\�5��	B8U�t�ho����m���1�W��ǌi�Ta�Rby^�-v�����v�B�u�	��k��7q��6q��gY��Cd���)x�ǃ�͖����+���1��8�e�X���
2�;Y??�|�`��(a�Z�<Ad8�U�y�>������Yd5md<�u��	���;jj3�X�v��l?
Aя?dm���l]s��$�����4f�"A\��19��u)�^�ڕ���v	��<iA2��s8B��:�O*�9y��sDkϲ�y�<@߉y�*����7�Uk~A��F��.�����ܴ��!��]M�yTz<KK�[?~��W#L"pLŧ�O��N����r��]��8T�|TTz�_lx�և�g ����͈?@�zw�P�onE��tX��u�^���&�?�Y��3���1J�"���]�C��O]�I�֬�]����f�3��I�}@\�dKE�QL����i,���[�v��f���H�]��g~�M
&�2�C̙b�0���P��LʙQ���1�u8j���[�R�ƹO?�/��:��O�0�70�%�,ZX�����{�k�5>C�d���4�Uv1�A�w�މ�����4��|ƘR�@�%�?T�fD�h��a��p�R!�L�L�bj����q�>����U��b*C%��ʏXt6�O�\�]�U���C���mMz����+�dʙ�+H�hbM�X.@�5Ф��}^բ킑U�!�u�,4� �� ��,����%}i�D���J8����m��Iڷ�@>Ǫ|��z����\;��$������`�`��ʨ��̜E8g�z	j�ḍYbL��e���Łwns#2�di=�S^0���K�g� ��D|b]��.���<��N��x�h��\b%&s4�:WLv�*C�\0**�4ʮ��ʕ&�K!@Y�N@eet�9��M��f��dψ��<ҋ3锡di>y��uٹ�P_�?cu%�z|%}�qE����{��~���^Le6���9�SVbm� ��I��%d&�����i��T�}�eÒ|�%��YJ���G�L�����%����L�艑��f��Lz1���������$ I���>At�r���x���7\TÍ#�@k�?=��?�77s��8�%�갶�}�ő��
E�-��Aa�;�,5S`�i�ODjߤ|=��?��tD���2ex�,$�@Ӵ��E��(l5�ۘ{�:��&�V��,|ܾH�1d�30�c�~PQ��M�E��+�&���A�I6��.�ӇvBw��ȩ���(d�I���4'�D��R�NY��U�㡨Wt=q��d(�_h�R�v$�F�P���i��~����>�j&UkMkoW����e��wEY I\�`M�U9�I�J�M��Ti�>�3��B
��o�2IP�,�2̚T,��m�b2-�Ϧ\m�>���6�y2�7�=bjAn���{�Cp���TQ��l�E��x��o2������M4����Ei\�8�i�C��0�3���{܃D}��s�+���R�H����]�pj�������p),6������P��O�ߒO��`s�Ž�Wr�f��!8��*��\5j���PN��$���J�Wɷ�m��l���wl�y��	�fGo3�p7�(" �#ϑ�gl:�v|�d���{Xh�Z,��Al��G����
k������A���}r��[g0~��o����V����3����~�$�� <�#�k"S��>䖾""B©��@�9_~Wʔ9C�M�Y�A��|=���;��P2����hx77 ��		�Q��ɳ�B� ��#W;{9�ؽo����[�Z
٩������͑�Ͼ��}V��ӂ2���z����H )�{ ���3��%k�d*NR��4z���IO��A�b�)�e/��6�0Y:�j'��$��D�$Z�K��]�ψb!���\-l�)X���������.�c�-s佴2�Y'֩�G�mڕc[ѠW��'P���i���X��9�ɾ�k����|i�+wf������B�ĝ"2�
�����L�H�By��F����C�l@�1�jQ��!#� ��� 
�,	/��g��N��xV�,�N�p���4G��qBx������� 2wm��ƻ<24,�4 M�d0�0H�œk#�����4��^>8Nڊt����g�5�>�K!Hɔ�������p��٥Fx<�l ��lx�!������j(c0~<��#aiG ��ȡg�>%<�6SA4Ν�P�J���a��.�V��Vߥ��z������K�{#�k�شT�
b��`!8��l��") �U�U�o�9���s��' �;���~��Ǭ;��ðM8�
�B���aU�J��i����J����Y4���q�2���H��R�&zk���p�C���yO�J���E^Rtr{%M��u^��
��	��r�,�������������>d�*�h��s���Gb�ǡ8�~�~���ڤ�%p����GIM��'��#@E�h��}��چ�^C<�W@l�����Ί���*�p�������j��W�v3*�nu8�FoM�̭��e�mTޭ?7�������ߌ��.g��������h�Μ5��7z��Oxx74�R�|�t]���Z3kn�Fg���������gnV��T+�b�>槨�0�n(K5'E�ɪ_�2�IN�!�on�;d�)�+1�G{����7�E��G�KD_hjZ܎�̩��l�7����܎j�~�Jj�j�����zM��CQ^���H�o�[�ƟE�A��%?�)�#u=c�;�t2��v��=�=�C�¾X����O��ƥ@���Y�6P����N��"]ZJ.W��#uA���_*���u�����	:.�Mmk����S�ğ��A�M�j��.l���@r(���m=���MC�3�
�  �Q�5� Trabalho1/ModuleALU.twr
 �������j0dD25O5_����\>�������N-�
ջ��N6�j1�>�CT��6J��6h���mHgC�����m���_n]�7w�|�1fR���%����U�훾&�tƨ��Zb�\����sH2[��f�u�Us/�c`���m��2�:��뉤�����69c+��e��a,K�1�@�ؒ":�3 4��L�E}&������@��CRf5�3�N�\�5^��'����p1C�ފc���W�~��W��+�]�A����M����Xsj-�[� ��Yl��#�!���\ߓYE���y(�mx�PVɗ+�\;��{�z1�����2����3�UA��Q(�C&�]~�pdE��1!�8����wI+�5�x���W�du����Pǲ�]����vBgwH�͈����u'w�t<�=�{���n�i��Nt<��ܐ$2��c9	�;��_
O(U� �S�]�V����Ǡ:Z]�"�8�0����������n�^F�����դ$��3c+�d>-�V�*
�M,t���]��C���cf�>�����4H(!�cߣK��2x�e��8?x6qʑ���F��3?��l?M�W����H�GA+��v B��dX��h�T7nl�$ D���#����,Ӈ���_�@��\�t'�F��j`9	�e@���Z�a�t�; 6+�"�ݥN���d�p��!�1;��Rj$�y[H"1Ps���)"9t" �N��F����ȐcKO�'�a�K�7����_��x��w��!B[?I��MH�ߒq��dv��D68��^�<�盠0n"��|Ǎ�)�Ø������b%AVXn�ڊ��QD\��vp��� �G��?��h}�m���߆E�D�<�F��:B�i�z�0�hs���s�OP4Sڊɻ��E��� �z�R6� �.��@~�� ��c����>π��o���Ӕ�O+��1�mz�R�M}xy���F�E��fv�3*3+�i�� ���~�Ipe�D> O�s/}T�n'��I��;��uӸ�?�^x`������(����Vf���֘-m��[��*�-�jhW����˓|��^~zp>4�X�8Q�|�$�=\���b��ky��٘YZh�p�)mMbڪ���"#��fhx(~���f����K�o�,-9ʋ������ߨ��GQ�x�GB��;'�o��K��.���{F�ӕ���i�eI�^n��@b<#�D9�%?��A�|���B�M��(~�������x�FZ����N��W�rX��v=�N~��xW(���o�����״De�2��Q���>\,�������A?��M�p��PF%�ּ������> ���^����/K�aVf2�� ��̀ Trabalho1/ModuleALU.ut
 �����Μ	 dC3?VO{¯�JY|�RZR�V9!����7b�U_}V�iF�?,�b՘�&���7sL3>�+�Z,��>�Is\�?"m\��*;0"���Rl�pI4�A�Z�fM�{��N�'n��.� �>�_>�X��E� �1���lG<a��1��S/�g��v|�e��Vp�u�.?��a���N�/�~앦3�{��~�����˂�Ն"P-7�>�٬w~D�倣6�����ʳ\Y�۟����z9�� �Kd7����R$4�	�. ���L� Trabalho1/ModuleTest.bgn
 ������&�@U334O4_u�F���2ިܼ��19%:�n:m�^g���-EQ�QQGU��t���̫ɍ�Y��Dz:	`�864��
H�	������b�b^�o�KD�Cfx��߻{��~��c�u��Yw��w�A9���_�JU'��T�~d��6�N͛	B�#��`��j������7���V��B� �2T8�fg��:�N����.�~�n���y|�/dP�-t~�k��E�[x��GhЯˁ����>�@H!#�_>Qq�|`�	��M.�����՚Y��
ϙC�M����+���kX��R2/@H�����2-�ΰ�[�?A!v�:�a��`��o�-��]A%�c5Ȟ��3ZJ5dM�3�,����&3j���)%������
��q=EE󯋶U�7���2%��=K����o9PlW�c��`	�0pl��C*؇K>~�9'�wa��w�ƫF��BY��c�w׺�)&�I��<K��_��3��������tU[��Wk�$x/���}�q��=��ư�@�CEqk�e$��y�ca�O<�|��^jH`��λ�WYI҃�P3I��HͼkRC�̱�>�-e�D�4����S��d8���{��$�~j�)]���/�! �d!1=?�B� ��I�I�>W�9�s[�k��\��V�����@�4���D����r���sf���6�;:�&!�4��x\9�S�_�'B@י�:n�qj?$�4䆿!��!u�/@��{}�6*�_Kn�r/���ӢN�dm^��mF�Cn�fZ������TgSPE{�K��E\��	��;Jxk�`��3:8��wX�Gc(s�m{�8�r�>��̫r�@�7p�>Ň��!�"iސ�_���ޔkD�gWo�J����G{�1�O4��,�Κ'i_XnI�����좞���`��%��׃Y�B�������g�g��1�!��7=�q37��(�q�����Eک�;���ѧu55>�ʦ?�q�"9�r�v#-��Gc�_�3��ΎȐ���.:a
��-��Yb؏��H��){U���3�L%U���D�S�D��JblbF���չ=vDt�dXBD&ծ�ɺ�'�^.���;�M~燠��D�D��q�إ����g��\VO����M�	��_:g��e:�Ѕuę��k�LP[[A}+CL��٣��96<�ct��.�Q;|�);; _�SZc�3�
�0 �=v� Trabalho1/ModuleALU.bgn
 �������M@U334O4_u�F��ё�����&�S���䩗䨴�QTZp������$�J�ۗ�����Z��D: %85�F��JH�	����|^s:b�b\�g�K��Cf|��ݷs������Ҳ�C��7�t3�����Q�?�e��L��d��뤜�!��`��j���j�7���V�B�Hd�r �ϩ�Tܞ�`$=y�"�[�[/���@�@ʃ!x�����-P�����M��x���'7�� �|<��XbJ���4a�<JP��\�|3B��F��P��۽�����Z��G��Ԍ���r��]��Z��agP\��9��v�������ǽ���{g���d����!X�I�!�)V��U��~l���6�S��1^���)�`~{�_9cJRg8�t0��zOWCa��6��C1�o0��9���:����>�$rM���E%<ߌ1�TL)u�9Y��1`�����Ѐ� #����vW�.6��w�/*���m_��^���y=��\D��f3�m�$���A���Ol^��E(���b-l7����椻�_j��z�[I���f��@�ͼը�"�̯��h�Z7���j�P<aN��`[�������~)J&R�M���s�&B�����B5�7���,	�̹��5�յ|�+ZF��h��>�����Q��Ք����W�������Y��ZuI���s��̕5p��F�1�m�N"}�I)9!�I��=��ix4 Ǿ��*������2�yh���U�i<E��8�3�{�63&[x�H��8����.�Oy����L��ZQ&��>i��,�`��Z��<�ae{�^��Kyhۃg3*�zP3�8W~ŋ��!�Dӹ!�d'{7��ڑ!Y��蒁���l�w��Ic�K�09� ���GW^I���C��ࢎF���`��%���弊�BKۻ����#w�_!��nƇ�۟�L��|!���Zh�DE�z������mu6�`�h�D����/�Q͉r�v5�-_6� �Ⱦ�P��cDKMN<a�W���������Α�<w/�]�q�螡"�y�H5H���*��5��bELI�#�C"�"!7�|�J)�}j�l������ܪ��I!<�N�Uc>�+g��ԯbθ���S 0�I�$"�XYV5��9��
�T"�*1���Ü꬐OCi̚Q�F�A�|��q��-��X\����Q鉑y=8HB�xR��K
[�4�=8��� S���Y��bé�!�љ$���6�!�M1�� )_���b.?���lMve������ HWp6O����K���ڲ~+?�N�dt+g{�F�Wc�/5x֛�`o]-��^��ZB�Z��p�d3�� ����� Trabalho1/ModuleALU.drc
 ������5� d4#�`E��Vt�WG�h�h�hZiB�MݭCMSV���żo�HI	�̞M&f}�3ȫ[f+J���$rDp�$Y��˛�Wަ�>:�{�5%�t���n��z��� P�����뼭Hy�v(��9�帰bc|1�t�6�>�7���Qâ

���#��B���`����m��V9���BcW�5׈ �� �`ѥ� Trabalho1/ModuleALU.bit
 �������S0C42�`F��j��.�U @�"[��
�n�T��!!*%R�r.ۥ�*�H�p����9Z!!? t-H�r�K�����y�e�m�m�n�@۷cBյUk�ɩώ��n7����8߳3ُ3cR)�r>26�ۉ���]���� [�w�<=���yyX�,\��W�[T�3/�s�ew2rf��8p�;s0�7	��d���e͂�`P��:%���4.�	x�Y��;�p`����b^y���>����o0�k%��o@n�Kpk`6�̝��̟I ����&�'l���p�2����`�i�!��?�!@�}_�3�ֳ� G�8g�����(��n�p!*�ӄ�@�Z��#�r��Ne46/u�B!_�g��]c$�~Y�E���@�T�v�5�i[�()?U��,E�:ŕ�B	E���ѐ���:o�t?������@�r���YQ[H�?b\�����+�p�rsr�.�V��ƨ7	M�W�,�G������.'��%�VV���Ѣ���؂g#*h1'�A��.��HJs�N�BIi W�s�|�}-�K��Q};��:4(���$�/_�T����	�1(=���Y�84��3��9�qIQv��mw:k�5�'Ov���6L��bd�����}����=5o���[ȟ�WQ++�L��&���-݇�\��P���!�_��M+��CA�Z���ai�H曫����I�5j��C��6�	0K���L����ZK�}�Ҝ�?R��*G�Qw+X:2:�
�ȭV��/�.�ۍ�����+������(XT����P��\�����&��T�:P�n���ծ�PҌ���0o*����?�ŪI�=Ԓ��j��KY$��;L����$=���D�,Le>�)B(�-Lm�R�.7�S�*1��oZ�T6Ӻ�NQm���L��,D��-�v�|�}�+�ƊX�3%��.�A.H�F
�m^m��Y&�0k{�n#�t�V�;V�?�T��,m���:QM���]⠏�r=W��,#�]�0���#�B��bP�~xU�b��bz��ХB����[W��	Ai�v�z���j/4$i_���I�s���}Pg�G��*��ʿ���@x;�� ��u� Trabalho1/ModuleALU_bitgen.xwbt
 ������\�6dD"�PDߜ(�+��@� 3�`aj&�!�"���f�{�n���ʮOR+EW�}�>���g�j��"��v�va�؁���i�#�������Fl�A��*��6��說E)���n�y�y����Y��*K����q��T��	��'z�#$h��98X��/a�J)~G>�"h=�^u!#��������#��1�� �aʀ Trabalho1/webtalk.log
 ������=�0UC2?UO����R1�B�J�UKR*�B�~���$���&��GY
��H��E��nj'����ƳyϾsK��U�!�?�K�Vl�����ɺ���^�\�Q&x�N�t�wn�a�,��Id�WQ/̇�N�e%`0h��Gڒ��b�*C\"%Ѡ�s=c��7�wZ7b.Y����"����O��k���8��QW;C��ya��l�zA$���Z����&�Ӻ�*Z�ϴ�8�
޻�6�g �u��zV$���2!-a|�����s0ZX|���A0x�ˤ#�Z�m�/j:�i��2ƹ�����V8���mDj@-R���4�C��$�нUp�c����)���4;���D�nZ�ը�ں�;�D'\9�Į1��,��A��v�t4��ܷ��彏n�H�r�aw��Z#�ҍ�j����?�� ��  ?ݸŀ !Trabalho1/ModuleTest_summary.html
 �������0uCB4O5v_�xSY�0�� ]��Hb�!�BD33V�QX�/�W� o�훜n����M��)��W7Tݞ5_�~��IR����m*��}	�کO��T��vS�b��U�c+j�`�]]u�N�A��W��n���'c�,���N%nz�V����*�Z�o��Ň��4�RF�g��8�>�2Y:���"+	^ūWz���y�P~���YqD�;)'�/H�����ã9��-��$��^��{OH�'m����>�K8X����u���[��q�ɸ�*���Cx-�H�"�h���@K����0��'�4� ��'y�
�HЇ��M�/(�{(�ƫe��Yy�F���Xh#�a���-����yA�`B����2�N++�q~`j��̽_Z�_.(���ˣ̓[��XJ�{o�(qߢ�
<n��aÿſ�v���o�p�U@�8�ި��j����u�� 7 ftݛ�������z¬a��i�'E��ڐQ�,���W-�PI������z�-+B'��ۍv��=��jJ8�Ĺ9a]Ψ䇼�-#��SZ' �㝐��>{�u�z�_���$��c+�K:��LR�I��!=�3�6 VX�L�d�ɲ+����d���!��'�h���P$�U�� otx�FuI�d����MU�x�݆̗�C�����~��a�Z
#`���1C�X�+�s�������r
�K����}�/�.BH	۷�h�j�$���x�>���p����A�S�ͨ�:�v�!»c�6�4�q��|u^Rv8���0�E����Y��N@ �F#P�ϯ���Yp&����J�G���w��`���p�t\?CY0�����d���;.
��
y��	�<fF���.q�������ʙ��n�xH��q7ȫ�p��n'�ͽQ��EϏ�"�0_�kBvo�w�F[�M�o=E/�碘.�r�ȕ)SE�V0 ��VQ�2��|�-3\l�zK("y�dS���dv�� J�?/�̛L�m���)����pJ��XM��*T�x��y��f2�G�e趩W��Rs(���ĝ�Xݮi5i\���g�G���IJz���BwGYZ�e��:'�D�J����Q/�Ԩ�m�%�w!��+`7g��m*S�S�ɟ[9���C(X�i���=���^�C/���O�l�?�?A=�\��/�짬��	�eбY$�4�-~���"��\M��bPB��h�(p?8���lg�p�n�o9XArD������R��͋>y�,w3&�*񯇶|緑����-�m���I]��>f�'HH89B��!�F���%�6N(\f�<P�C�>9�-���X�fu��/r!���6]�AT�Z�g���dwӲfl����K�y�o6�?Ή:�r�=m<l��E���'[>%j"J���yjS1��es��2ۛ�qp��q�[�Z�6Q���Ư�_x=*w���YW0�[ZN��"NYc������{�O�D2�zd��^WJ8p���m/�j�e��?e����j�<q}��zFե���0���E���?���6u�½�ٴ�J�o�ķ�g�I�QM��u�e[�)���!��!�>�������y���Jn��*H����RJ~��Ȇ�d`�1�L���o>��6�� �� ��Y}� Trabalho1/ModuleTest.syr
 ������e�@C24E�Wu���R��mT��9	�T�T@$Ӝ�:9�3���a�5�N����}i6�����+��
�$����դ�t�_��]�mU�+]V�~efUŌ�����o77l���&_��avy'�I�~�����3{|����9��"?���zi�E��W���ߊ��2gI��U�q,�5�����0��Z:;�m~��5�X��Ӫ�-��k
u�H���Х�2�4:l��`��%��nk��^ciI7��ێ���	6p���/��+� ,�?�f�o�$����X:�b�A��+O|ֽ�8(���>mdň)��M���i�u"K.§�)�'�4 ��m�=E�-�#SO��g��Έ)����g�m6�Sr
7�Uf���\�.��1���Y�!����I0s
eaL:����ֹ���΄G��l�����QQr:D:���Z��ʭկV�`�n�,����K�3��V�g��7HNc��`�\AĪ��#���'lܰ��R^��U���ӑeω5���,�e��t�xt'�f�ʬ(�`3�^g+����-�,�ht�=�����J<�q9�:r�̟33���!��iClp__X�#	��M|&@��sT�J�޷+�֥��L�揂0�Yw|1h�mJҸ^�a�f]WD���6��b\I=k�ҳGR���53�ceM��_'��5�Y�q�'��ɞz!�K�`M��_�l+��4G�+�	�T50w)d?�+�´iifbc�b�L�ji9���U�Bv�=���6�m����;��I�K&-X�w䉦u*��r0�#"���F��檠�d��`l�o��WE�WW�|Y1�R��P���Nř	�{��'�}����K8��BZoJ�2墥,TA�2�.Pu[�н����c2 �bp}�Vr�qš�e[��V�r��Eig_�!�U����r�|CV�g��X���5@pc��%�U��M�.������֠ahj��F�3�cYk�U0` ��4��+�Yi�l�k��bs�� ,۬h2R�I���0͎da�����*�6����w�0�X������9����&�q��y���<e����mn�ܢc�.���`��m2��:BX�&�.���%�s�K��܍œ�i^�'�%my<%�_8.xM�>�Q$4r{� ��c�,���1|Oǖ��3?�,�	Bn>>�6�;���'V�r�6�d(,����)�+�Y~m�.�ഥz4ԳޟU[sJ��J���g>M7�MJ�|��w��"j��0���E���1DA>/N�QW��3� ��c-7��0�}�z�׾�Ozt�8Q�O��aU���+�Y�7��v��B����� �w�e^{�����n�~��2]t�>n����׹Z�^��i{[��.��y��y�����f�؟�1�Æ�Ӕ�;��?��l���D �jq�
'S�G�8��ȟ�T�F���;�8�߁�-e>��A�N��ٵ��_�B3�}|3�f�Y_�;[�&���tX;��k=��N�g;a�;����S{�RϻFJ�a���s��|��� !��R2��J�޿�X7�(?��`�8v��FvSk�z��e�J� 9�q��У�}�q��"�*mYE����8�hs'���\�yy�hB����B��Xp+�Ļ�����3�Kv9dn9
H������.���7v����n�V���THRG���`s�09  ������k�ţF�&��PF.pS�'�QV��n�� S1"�H�r�m#uL���8^�r(tZ�
G�r?i����z������JR����[S�ا�H�O�)gځ`� �C� �0`f�A�PE����%�f/��3���zF}0���M�\������]�3�i��lû8�6�摢T7�C 5���ƿP�j͈TO�wu{붱�,FB��Y$��C���OeZ8�
|�ef�w&���Q���8�c$�@X� -tԳ*'(ہ��&i�6ʃ΃��۩��K2��am���\�:��m�'0�3���%�g���:~����BR�3��
���ΰ�>�g������v{�qܡ�=ޙ1�rO�y-A`t��<�&)�K]����E_����߁R�f�L�/ /`����{E=!tR�-������=���,���^��|=1�RE�m��'?m���x8c��`e�Dqhu�a����*|�ӣ[7ە��KT$6��n�'��_ѷ��O����z.� �紂qٿ��wu.�����\���+�� xh.�I�F�F֐җg@�+���g<Bڅw^/�[�ltp�(�>�`�If��&�(0�{pF����[�][ʹ'�e`�AĿ�gb��T�Q���q�\Ov��=+��ڭ����$b�����Ǟ]�8_O�ލ�W5/�R�Ue)(�Uwb�3~�4���&{����]Jw+T�8_��/���������8p}̾f[O��2;U�M(��]\x�LY����<N��"�_x���g�^:vQ�c9J#�	*k�x~9��ANt�o��j���̨�w#���� ���hz��B�t�M�(P�b�m��P)̄�#���]��>U�?M1'�@X7dq)�	Qa���䰉��8�W!�b��fl�|,�o5����,\t.z�y'�,��:?�E�-��/ҩ��W-���w�RGU��ϕ�U6[P70��  \q\!V�UN���=������-��r����	�l��� T!6���������~��EdZ�Mem���D(P�E���<T��|�5]Y��8���P�*��G�d�|�Y���� �K��tX����1�4�yy��V��\�
�5d�/$�O�2<���wN��g:�W����LY�W��]H�e�@��Z��A�ır�UK6�D�K���ףּ�U��D�ENjPc,���+�;���S�ITWB�Z�=WX9
u����H�0�*X�s0l�E"�DS"3,�p�ԏ㈪��.t�{
sF���:���)y�C���b�6H<�2������ԺrG��ݍ�*0G$]qQ/<آl��6��� d"�`�	��(��7V%md28+:�y���`4��9#�+j��[eZ�+�B��J���T+f嚟'+.g])�꫱���[f/Ȱd����H��̴���_�Ϳ��) G<j�;�QӕB��^�c��d�X9�8
�]�w?,X�9�??E_�2J�C�@Ս�x��^��}žC�V��h�N�ݴi���a�D�n�����Sv��B
íf)c.����Y�T*gL>�,z�������xIw������k-�)J,�hU ��.�7�:>yx�<(���9`NE�}�X0��1&����?��bwK�Z��R��1�o���?a��>���ޤdz���>o��J*�E�}�*Abb^Q;$�ɟ�}�_�]��瑱h�X��-�`:���1���ú/����=�+�~�� �M�!����y�����w�*��Pjm��C]z?c�Tb�����>J���M��s��9��p�Ú@��hE4� �  ��<߀ Trabalho1/ModuleTest.lso
 �����work
|��:�� ��  ��� Trabalho1/ModuleTest.cmd_log
 ������� e33?V^��L��KCn���59#4��75��5����J�R�qM��x�&�8�8�玵�i�$����x�Z�G�;�%A�5ا&ȩ�V�Wп*��>^ʟ��v��)4�J�.uCP��%���XH�-b�Y����
�,.ZЈ:F��)�64�5ڎN�����Q�*ϕ|��w��<����Kd��O�m1�p��x�Ԡ͟�A�l}��|�i�ձ�-���푶��0P6�=T��1�fMй��):�&Q�dn?�1i��H �\��f����l��b�� K#D�X�\����Fr �	_Q��o�/y���@�%����<ޤ�r�Ч�kO�6��-��K���M@�{���ʽK�o�<�|�ʽK�����4� �      � Trabalho1/ModuleTest.stx
 ������� j6��	 ߴ�� Trabalho1/SOMADOR_1BIT.vhd
 �����ϥ20tC24�pe�ӹ.% q�pw|
r�* r��0(6)��|��5���o«�����̍�!{��s^���߳%�1_��b�s_V��'�ᗓ
v!'<Te��GzC�vM[�n��6�b�S_~�6��xѱ&���*�qPK	��E܎^��.����a[��^��D�3��_ӿ'=�g��y	@.�[�5(�4�)I�"�?7�@�hy� ��)�X�I&:���!�h�H']�^�!j��=\d��=��1
;�����1u�c<�Yw6X�~ۿ����Vob�*-��DP�4�A�j�w�;R@���!+�#Y�iT]��m� ��u�7ygF߄�ʈ��9���&y�Ô��l{�X�����h@8�o;��x\�!l^�F*Lύ�[r�-z2��.g��FC�	4 �9�WG����0;>CW5��W���V��ͽZ�ʟ�g���d�/WR���|�-���CD���<K��0��L�b�R�폣��|�\�`�?w}�<VM������T�v�`h��x��P���q�=:y*҅�O���]��Ђ���N�4�� �S�݀ Trabalho1/ModuleTest.bld
 �������E6C25�`U���Z�$al��:�B8�p@U�u�?�VH�rJ�B�nC�*�#���~�"�����wq��,Kx���w�9]u��8��DY��w���.�7��ư�zԈ�R]p� o^�m�������,�B�	$+P089W��q�����2���#�&��f,�&�^�if�T5���m�~y�>nM���:���iz������U*Q(CK��4�yɛ<^N�ƱKt=�x\���7|]m��LU�K�	�k�TA���#,����(��6�9�דC*��~�{c����v�.��s�N���;����A��R��
A@�P��J�ge
���.c���i�#t�	�q1����Yk��3k@�2{{��
����3tC���w��cQx��t�������do$������W�T4�C�HE�G9	�Q�ɨy
v"�)��t�3c{��+���aѵH:����W}��4��C�RUE�g�9�v�s.kf���B�HB"Pd"���l;z�iz�D�]!:T�[���<�l���[���ݾO�R��/��Q�T ������3��1���$�c04�C�� ��  3�um� %Trabalho1/ModuleTest_envsettings.html
 �����ȧ2@C24_6e^�xR�r�lވ��Û$�8HT M����=��z����M�� ��ݒUof�J�mb�j�$��3����J���I_Z��%�+onq*�A�j�VW{���w��� ��F�I�	h��w(�T�ؿ���:���n���X�d��b��HC��p
�k��(*�c����޺����-a @�t_����L�ὖQ �$����d���+�Ȯ����->w\E_}��B�OQې=��7Jo��*+h�խZݕ)��;���*T�$�U��5k�7�C:֤>p��
��E�&���N<H�R:!E��Fح��%�$Rbdc�\e��w�9y���n��ds��q�as�Ʃ�9���v�M7w6�½�w���V�]Z��ߴ����6�Vz'z8aN���u��^��9Q��G�}�_�;i4�<YV�n�w;�.~�8~�8d�>��v7t�; d�r(Ew��B�w�C�\�3k�[+�_1n�K�|��"�.�EƘ|���4�L�fx�F}�5�PXt;A_sC_�/�ּ';l_.6�{��m��(��|�@�)\�Q�í�CfJ��N�[�E۩U�2Q�FN������F�cw'\�=Q �wN�,rB���'�*}�!3�|�YJ�"Ud�'M^fZ��Q�T�R���;�@���	3��~�Vσ+gj9�3蒷��5�\�f������+qJ%�kŉ�I��0���伨�z}��t`��A��y�|�!�q��]N�έL�9煉�P����NZ�X� ll��H��mk^e��~��	��-Ю౛��-8�أ��'	��UV�2}��eX��X�L�t][פ�i��^S�.ba%>XH1��s�̈́#����b�������d�^�F ��%�4''h�y������NXZ�*�a� _�M�%<u˻_= 7�+	�@�&%��ظ��~�;�A8`�l�$�SB�I� Q���D4�&��ju�S㮪���iv�A^���`ߡ[r�2�z�h7k�du�
�ĭ_)H�r�hpr5� �$l+�o�DbVZrV�GE0^t?r ;t͠�=7�/o�ĩ5�����C�; `ˣd�.� ɤ�r܊匉j:"94=Y��5s�H�&���L�;;A,�9�$&RY�#^��� e�� ���AN�{��Ԋ�G�l��[�]�l��k���'9WH^���0[�ijx�,��K�FT+�)�]{���X/�ft�
�WҭP���hx>�P�9��f�x���͆���5����������h�"�㙷ֽ�x� ?]@������������ڕ����#B�^�O�<�g�x���WX��	�M��3�y�s})���`R(��9�����x�>H����c
�@4E���s}bk��������p�G�`�9�Uq�Q��-LD^�]T�S{������7�L�}���|�ځ:��t����f �u�΀�[���M�ڝE1�>�Z�p��@)ޙ
̉�B��ȕ�0�#_ɐhnY�ۅc��Z�X{&���h�̆T��dVM��"��r����<�O�͝��vu���M��ԕh�%�^�X���H�`*�o��Oz���b�3�ph�0-�A�iu7�0����xw��s8�y��je�Z(���LOc�2VD�bj���ib��Lߌ�?9-7�`��L�xA�EM���L�~�WPcrL�3�I�m�hӢE�W���;<�PMc��'�G*v ,
��m{$�ͪ� �kg[c_`>�Z�m�./��ʕ� ����-����踎������=n�c��?�q����,[ŕ�;=1�x$�Zy�v��b��<G�''���"j�4&�{<�S+$*#� o=#�D ��4��/ $44\� Trabalho1/ModuleTest.ngr
 ������l�WtB34V�Ve���S733y�3 H\`�����r?CH�q�}��2���z޵�J�5���,]8!"���U`�t�D��2�5:6u��.�'/7���&ę?��͕��_�T���ּۢ���u-�寥�nv
�j�����ܥs�]I�(ѧFu'��fp��2W6���{=�~u(��}�V�k�朙�|�Եw�VIS��kT���:�ku]��ѫ�>��������T(M���KSn�?��|����U����ۏʵ�����t�_�y>9(�C��k�}o��ˣs΅{~W���ܭvD�>�[s���~��{;��I���Ɲ3������|$ݢ�Fu���'����z~�B\b%w����nNCuh�YE�Y=@O-څ�t�q�ciӡ��m�p�����V�3��YR� qL����Ra�bd����m%���G	)Г�� �;o�2�2�V��	��,�����U S�XJ�Q�� �;�;�Z�(g��{�O���������Μ�G_>�����ͶG�y� /. ��|�;�|�� �~��]��E��	4qb�o�60�ݥ�� ����Lz��;Ӽ�Bu�	�������+�xg}��w椡p�P����A�a�O�D���VN�w����ͮ �������*�����2:�fV���d����ܼZ�ҹ�yd�l���__����s��f�gww5�8A; c՛�7FƯ�'i����+��X����^�=��bk>+W��6	sm�����R;��d�?\�� ��f��Xc�{�������������3��8�sq����<]��}�_+X;t����ܼ<��^6s��0�u'U�0ڇ�i�$�|������$�����$,�:��[���`���� ޶��W|�D/n��O/G���?�:y����ڄ���_�[��&����ՙ��#[��_N���z������B�{�~����L����v�Gx�+�@��I=�:�r�e���mo�a�<N^�>i}��$̕����\�'�oT9��f�4�U'd�v��@<\�ǱNݻ�Ӱ�[�QЬ��t�ñ�Z��O���T�44\d�?BH�¶^�~��0�=B_׌���$ь�C.��$=�"c`�A����kρjc��Vϥ��xY�{��צj�`y�~�n�T��/V�[��͝�6�[W�V�>6�ީ7���)[ ϝjX`Y�=� ����T�O40 |!^<�:0mH��JjS�%��'�l��#4!��P/ZN�o��GмK��޼?���Uy����;�q�0����g3�	���6�uǇ�$ME�haz�9_7���BJ@ꈀ;l2`?-��>�6v��Fa�	}�2�8�i 7^���f�0f���E�1�>,�����wfZ{ס��ϫ��]����"��!i q�@���!�� 3�
g8/��/�ր2��|�m'��4H�EZ������Y`�UC�ˁ"*VU�J�Ȭ��)�xH��o�Y�@����L��E�#<�Z�^4���0P]e���`�/c��sP�_ZV�PqZJ�
�Tҭ3�"���V��ڴU7��\VTW�������Ը�V�׌���пE]J��6T��%��~��tK��qZ��ٿ0W��6�Z���
���qw��l����lz�b8
@���E�hk��H?N�:���@�4@#v]q�&��0����+��Q
j0��K?U�_�	��b�^���UV�+(�iT֕�U�W�V:� V^8�*�A��<G��G��4��U�@��'���i�<��W�r�n���JʃP��9�i�p�N���h���dW��f�-H�
�i��\
�:�Z`d��i6M8mFG��?�2,{��!�~d�>kd�^тu.�2&&��p����2rV�Tz%���Q�~�cC�g,m>1m8�� ��9��z<�K�~���Y�qC�(�Z�7l�Ǎ���	�)ƿ`L<�YaC�����L���r�9<�0�xY�X�4N����B��Ք���t��]�K�7��N�+{*b���&z�(Cd��k� �`,�tC��8~��$��{m�}9��z�@K~��?ݹ��U%��<⼎��ǄE_zѵG��W�4���l���yǇ��C��v? �	)~��eP���>SB*���<����.��s#�!(>=�C��M�iLzW
�@�VCȱ���1:c�{K�2�@M�98q�U=h�P�] �O�a|���zF�S�9�f��n.����b�F���c���#1/Q��t�@��l�c5��Ƚ��M`^KP���,^�<�+�Ѐ�P���!�ɢM�~'j��J��v����qe�{+˞0�%�����ܸK<j���kbn�����4� 2$lz�zX����h�4�����{�n��
���Z]^�O�vi,�Rr=�sG�
uI?=p��<��y�08+�~`��Aϐ�Ss�8��)~� 7j�O��}�/���;s�aS\��N��lEG�)
��S]L��^/\4��T�b��֒rx3?D�
�TR+j㰪��GN#x(k�a#k�l��-�y�� �J�*�Z��Ȅ[EU:��RW��)C�p�D-���`w��-�t�G�5�;���p*0VշXt���n9�&��ܺD	��%"�2�[Cr��dڛ�Ӆ(3���	�b��;�u��_�f�����g`�-��	�r:�}�B�s���{���[�C�!|u����;=��Í��M��
�lw��V-����X�?d�W=�j:�l��E���Y|�����������`b��>j���LOeb�fc>G����;�x��跡=�]\�f��k�aVds�7���Z��l��k�c�}E��f�E����YS���W�w�Ʀ�ғ�e����]5TqR�d��Zc�����wo���[$
]t�k�1�=�$�^�u�Tc�9i�� q��L�z�A����ߧ�2�X��L>h1���?._���X������Ob��"��� �q�ƿA����:�Eiv��*��.��VS���Ț��j�������x���(�؎�y|S������MM���_ 7�`vE`8����V�KC`���I+�[���A�aЕʲ.E�E�zk|��.��}��AWt�����³��ƨ��b��r�V�й�ie� e��k��{*�F�᪨>?��m���[\�T�#ƳYӰ�����C0�������`~�&��N784%�O�||�������=pl�脰vǾȞ0ڦ�`�a�.�%PŨ�i�s�n##���{�*��a(v� ��8=Qp���0,	�+�EU
 �q_�M�Kͮ��D��^���B,���+Bx�����4�mg�"�o����]�V�� J�1��:~?���C�@}�B�5[mp����M�@_Z���Ȓc�ƘtT�)5=�/�|��������D�;����I� ������*%�&��\�Cˡ�U�?h�/�O��V(�0f�D+�������`�qjP��P�g�����D�e���ۦ~,�>������$h���T7�}��D�n.:�*k��l����^	�P�@^��I��3��'bv�|�溞>��T���d-�a�.��ӗ	���<:��5Ѡ�Bc����Λ*�}��pe� D}�'h
����E2��@���E��譖̮F���c�~�c9��Ѽ!���f(�P�/��zT��tG7�E��6*��eͱ�͓�rH�C�4�� ��'Ҁ Trabalho1/ModuleTest.ngc
 �����̥5VeC3$O5f_�tQ��p��ci6�M4�s��$'1$$@�qH��mC3Y����UU�
T���J�Tmמ���WIו6T��U���[�~
�y?�H*D�+����ି��N^���k�ڠR����r-\�b������WJ��$CY�;O-8n�g">��8�0x)����:EHꦜ�ܒn73��vs�D�&AJ#�˵b�h�a�KѤƋ�y2�D:1�	�� �j+�D����,#����Gl��ͧVԛ��hp�I���2ݶ��,�+'�J��D��ġw�P/%ۍr��M�4�Vdʈ5��h-�?fmU���Ĳ�eh�z����*/�����C5.|�3�ܧQ�?�D�3#�����l�ל����I�DN�3�2�,[�+��T8�&r�H�5��| ��O�_:�j��G�[r�`�M�|��-֪%8Ŏ ��̬.S�3-0
�Hb�*<��V�i7.ŗˀG�/�-; ��ڡTO�MJV(ej��t�U��fNYp�������݂4H�x+L�����ߒ���#�����K#µhG��g�rfFY���� r�-:z�e3d��~�Lz4i��ݣ&C�W����\��l>�)�G�ٝh�^���4#�-�aI�u�
X�~�yc�%��%�[�3�8Nܯ����t��^�֒?�:~�X<H��_%�{� ��l0F���Ӷ*�ΐ��s�g��������'�|�%�
��0���L>���0>�ʍ7]y����·P�cl~v�ab「tk�R�oy�����F���7�G3%1�Đ.��`�z���0o��qq!1W87�m�<��]־i2Y�/ ������p���l��d��ɗ��S �yo9�x�x�缄�	�]�����6��Q�e&>%���&�\��s�X�O@���6D�Ɋ4|������Ni��3"1���@;���8�U����f�N	�����UX��#�Hg�4t���B��Rov��][k�(��d��L�Ma$<�'a#�h���B��*Nn؟w���I|��9Ի#�]Yr��Tr��F�)w�&�
�[�'���sx����VN��(_gk�]�:w
����qLarZ�R��ٽ��p��;/�f^ e)��]�KOK�@u�Fo���2�Q)k�ǋy)f:�Qsi���F �< h(�v�d���Γ�o����/�������b���y�� �N��8ƾ�ԓ�=��T�+���%B{��D��47|���?�H�?|:����𦫇;�h���E0�ClG�[кEX�b �<D)\R��_Ja=�s@�@�(�XF��Q�6��q��Y���{�c�<sn����iΆ�t%|�݅��@�ll,#����*�oa0=�Z�~�6Vp>���z+���U ���N�J����}��tנ���pk+�Al���.pA�:C����o �]3�<>����#����u<Ԭ��vq��xFt��ҷ�?l1����p(�z+�w�{2�/��>��@�{\��׎V4+��z�vЛd]7ج�n�U�kd!r�0�t0Dڬv�O��k�Y�}=P��uX#J���;�cFؗV�:xծ.��K�k��B���>�	�' �`� "Trabalho1/ModuleTest_ngdbuild.xrpt
 �������@T434O4^��G'|���p�^�I�ĉP�Y�9:RG�gB��h��+IJ�i���NJ�	R+B ��@@P�C�8S H?����dn(܁��L:�M��8�/��_�0�E�iw@F�,���}��P3+�vB�P5t���D�̟�TB��wT>E��Z��(b���eaq�ğb1Ǘ��#��M�AA~1�C!�0����a�a���D�e�Y"�C#�o:� �� {��1����iJل�yJ������b%h02<�����h���>!+��S�:	|G�R��ғ*��,�9^Be���D�xFύD�5�(6j�-p!T�q=���Ү�$Z��뻼����ʬuj�4ί��w���Y�k
@���[�O�%M���]��¬�E��7� 0�(2�~K�b'-�G ���հ���굕/n�g@�l�n��M7.Bi��TM"j������+�+����z��U}4�Ճg�o(@�,�:f���z<���ЊY�Q#�������8��i�#�&��d�c���02��8��:���mv��y[]�'g��My�b��s�nxI��0en(Y,"@�|:�=O���2���;"l��a��\wF��C3��-1�7�!u̯;�m`ewh^�c}�{o�5t|$��sM뇤���</l�_I"��=u^s���������r�{p)�R/�K��͒�.-�ޠ��(�MMԧ'Uw��ѸWi�N+�Ђ��	D��W� �i��12�SK�/��"�_�ў�]�8�td��.hzp��������+���V��r�U�pa{_�C�[������75��:�w��}����)�x:�ڍO�v|�"(�N򨦒�`�tQ{�g�Tǝd�eGษ!�"�ͻ0X���'x&(<�:9�L�����A,���iȶ�, ��fu�i78�����r+Kاಳ���V���}�.�G���k�?nf���y;�ҵ�,(���'��s�M*~N���Y���#�-�f?��$�m�����B���R��QLq��kW/O��Ul\Q�N��P���e{��C�O�(����d����5���>i�&[A$/�����J*z^h)H��hz���r/���E����94�� J^�6� Trabalho1/ModuleTest.ngd
 �����ͭ0
GvB34V�@e��W9��2p���=���r9����s&�6w�nO&W�Ͽ�����]��.�,���a�At*)R�+�ϧc�bT��5K�٭�����&|���j��W.�����u���7��'o��_����E���y^��2E��x]C��U����I��;�V�����h"Z�Î�ri��{�M�j�u�c�u5A偂�y#���)X3�v�:5y�3m�	��|�hʫL���V���l�9�?p7��;cU��� J���:2���np�ɘSAҥ�R��Nv(U���2�Yݣ��wέ2I��U'�Z�+wdH�F�������n|�bUiF�[��ٲ�I?h�r��A_��I����[����%�s�G�<��ia)�"� @\�F��ПR����lR�(<U��	 ��*U��4��״}j�S)Pܜ�&Tڲ֡���n
ϷF�9��%L���:x��"���$5�ЈE:��P��2O Lx�s��-��󍷯J�=�[Z��N��dƔ;�jM֝Bb~��m�p����wNt@@>��"�MP�P��l1]a&�[sZm!�?�DDA5'x����4��..t��`bP�����^v�A5x,H�C�7��|���Ͽ�g�
_y8���k�]Yp^�Y�nhW���ɈwP�췎��n��BN���v:SLQ��v��o|�YZ1�wr�Z�;�1�kĽ���6%ϯ�;)Y��Zd����$h��9�,˩�;�Tsnó��P&��#m�ST�n9����v,�ԭ5MN�x譭��#��Q�F��~D������n�����s�6��a{k~�׌��⻷����c�1ycj�^*�x���Z��H�oy_����V�����˵o7O%���d�ᣏ&<��v���Nm��� �@ֻЅ����Bҷ��v���}н͡�I�߮^
Q�$�
�߭$UE��g�ߨ�"ŋ'N \�]9��x�겼��yAǏ5��'E�Y�G�66 +>�|{~=w-��32�ZzC���+dP\C�+כ)B29��ۍ����/���yZ�/�1�)��,�]��尮F�����WN�J�Bz����������t�}�d9��O; ��4!^�D�4er위H�d/��p�EgH&{�aw���ϋ��K Z~��C���@ù4��B���(��8�ކ����������}��	l�V���c�G�	�EĀ��x} l[������c��c-�Ð%��8&'�!`2 
�_��;��!u������HM@'{��^�o;���o����4�����i6� #�0��� Z�i!��q�ƾ3�Y%�[p�^]�/��9hD���#	���b>c��j��,ުMq���8�	��5�a�;���{K�PB.��P��CirrY�D��Ϊ�����uP�dKLj�l��6,���;�h��u-i��E~D�P5�y����m
��W�<޲D�{��$ PV�<�i��pp����R�FD���]s�!��9o�G/��q��@CRE�@�#X���
��� �4���B5�oH�@r����.q��;�m��)�No�CV��G`�}��G�7��bKd���-�㷉�!LP/��iؘ$
_����]#<h���(�7��zX��Q�����#.�#N�c�}ԇ�;��m0I�zu��Si��-�
1�mf�?�I�뜁9��L/���As;��"`��ti�UHNY/�n��kT�4��Kj3�[��P�)��b��;��s��b�V��$��5h���0����h��w�������h����w��ri[��P�R��u��1���?���JG�K����g�-��tl�t[F�P�4=�w�$B���1*M��p�g�����ʝ���?W�*^���������-�Q����-1�뀬��!�vhafa��V4�`ͼ��YH��q�c��1h����#;�_������l��Q�����0�f��5�KK�	{D������N7��t	��6���	�w���z���h%~k��w����S�=&���P�Y�[��O���
8�k�'��S�0}<��6� �Ga9���T7n�����p��l�&�����D�ynDn�̬q�
jn�!C�2�Fm�;Rn2�J�-0e�۫a��B-�b$� ���]Ww@����=(�m?�%��-�˕�3��>�o�{<��:�����P�Ӱ�m�Ͳ�R'��I .?������;���!�t�/w�> %پ[І{E�М\e����są�-E�n��Q��7��<��/��a>�hr4]Q���������Xz�7�d�����'/=���߃/���#^<��!KxC���|8���&�`����>a��L�vcj�*��S���tk��t
�whuم/��fB�~:�~�G����3��;N-:s>џz9���C>�3^H�O��M�78��r�K�+��03�3[���Z��N��8� �,e(�}�~nA?��w�����قy3���D/h�j:��NZ��ˈg}>�sF�W�}�H��8�� 1;#J� Trabalho1/ModuleTest_map.map
 �����ʥ10dD33O5e^��X�M�	�I���q���6��wz�NȄ�p���|E���L-5 � Cd�__^/��}V*�
��]	�/�({������>��_��$�X�.���6��i#��#Z�ܽ����:;R���.��H%�m������ej����9عA�B��2�Rd_( {�v2wo�pafLE����ӊ� V	P���$��.(�w����h���*꠆�!�o� ��#�4�D��e�ش�w���4T�rm/�d���pJ��:���aJ�M�Z &{o�᠇��C��t#�Zx]�~��~�4����2�Ǖ�h��υƥF�Bٺ%@����c��4R�4�s�
Bb{���@/`����)
~�w\Њ�FǩO� v���i}�U��{+�F�&���;V�0]1�Ǭר-�8�6d��;F ����BA�MZw�!��2z�L��Ǿ6	���'�e<�E�3F$�~	����t^�U���k(�P�g5ƙ7�7$7/ B���?`>�r�*X8x�Tǟ֔�}�}4���#��B|��9�k4x�T��v�6[��aȓ�(G�U�u�lZ�!����ȨH��A�rp�	 :���V`�X������Қ9O;ӌ+gK��ze��ka >G�?�nW	h�u���ž���y�4�;%)����X�ٟ_�J�8s�(�D�]���1F� �ձ%U�3G�F��� +�:�}	wk����8�id��`&t�}k�舩M�lv���L��K�Cf��^�x�kq4&�Мم����X�[�!ڶ��zi�Yp�a�he`�d@�Pf�r#_�ԭ�Կl\�n��rH� 0��16`����I��rR/]]_/I�[,-�/:���a|A61+{�Bk�Z'Z70�K�<0��9��N�h�F�w��m��I@*�z�#uڢJ=��'�&`�"�X@J��<���G�K�"N�0��͛�&���`q|��	�ʞ#HG^�lk����9�y`��Emv�j���|��عdL�o}�p��n7�g��&đ,l �b`�"/��7�Y��<x���a��m�@�8�$�9 ��U�� Trabalho1/ModuleTest_map.ngm
 �����͏
FUCC3F_f_��ݴ�]|�J8²�)��,��X{*)hR)�o���G:A��� &w�$L�U����T'�jgsR�1�}Y�gӫ�/WЗ�?F���	;r������^����]����Դ��ήo������_ⲉ���>�½ޜ|�q`�֤��]S�e���6l��ߩۮ0�*�\J�f`N�-���߯]-��Zmt��:�~���\eޞ�K��EU<��&��-���e���/j�i��3Wr[�ˬ����z�O�}y�?ZO��-������ݩD��0�V��|�#j��j�﩯��(}ԟX?x5��nn��ۃ"x���ࢲ-���m��ʒe˙�0|U�"e7��^��ґ �Bd��~�f�ʋ�+�Vt���m˯�2�f�]zן�#ZE�[��cK\�w�6$ɸ�>v�3'kZ�V�ʛ��Į I�g��m@�	�5̀�G�zwh�ˑ�˓@bx��W�Ź��Ie��⒝���(�؂���R��O��T��	��������>����5u��v��Cp3�H����[�)�!���᭳5�h���	�֩�Oj��Nכ(!���&�<%ҙ6��L���u������_�Y��[�'���4�R�CbE��ü���X-����]�ts%&����4���_,6kkm��Р�
˩ǷSVD�:u�(DW��ԩ˧�痮z ���5�;[��O�V�M��57�;W�`�f�{��̟-��WN~z��{p��-���r*��v�����x&�	Ɯ��zXw�����i�ڣ+AK�?���}n1��6��j[<3��-��7f�E;1}��os\H�ڍ6{�+y=ꑾ6w)���קBpNq�J6`>!�p�ԅ��u�+ɝ��;�/orM]^�4���՝��g���T蘔�9n�6��BQ�օ�mm� "���f��ݟ�ũJ�)G��������uu]�c#�q��ӱk���r�E�s�k;6�ݐ'�>�iZ�B����Z�{y&)���%�Vc>�Ny��=��K|��.�5a���{�+��u�_��)�Yo����W������Xv�?K̦ߢ�T	+9KoZJ�M����C�$��������?��9����<���p���[�T�?[�.FƮ�μ����=�2h�J��uJ������P؝����}m������yu�mL���+fm/���3X�b�ڧ�V��j�����.��}�^'��������t�[�>��}Jn���q*�F7�ǃ[Z�)��2N���=�|t�pzS��؛F�j�����[v��<4mZ-混N�o4��/��݊��^�:�]�8�����]����r�\VsU��n���&%hk��>��fc{^9�Yχ;N%�������n�߮�ۤſs%zyq���r�� _�f����*�é=�)���p>���Z� &��5x�Mے���mI��5Ƹ��4����nF��n��k7s(�wvno���܁�K�\YL��������o��ܷ������n�4��ZsVWbwߦ����2��ڏ��_q��N�;�$���c�.Þ���~՜q����̩u��d��I(`]F�[�0�ൻ�+���.�麩}�U�qdum��X���Ù�0�����RP��I�yd���.E��-�+��]�ҸUp���i.ڪ<�k<$�	�i��4�]/4�ef�ɼ��gamE/�0��
�1��c��� -s��Y2�lv14��͆ߴ́�8��}�@/8%��t/׼�*���`V�Vb��^���f`��TU�h#u5�O�������v�[Z�A�������mcG�����s�����6�~�t؜ch�l�m�����;�߅PA����Lg����1�=�z�~���FW�mO��1�gW+�����im.1�MS�iN�@/>:S����b�?ؔ�4î��@x��ӌ��S��4�Q��%�07k@�g 4��peT����ޡ��c����/,
S3�ץ"��R���סC|#���Y�bv�@��b�,t	�߹��q́!ڶ7����	���IH}c�,�6��i�����C�$�&@_:�do��C�~3;=c*I������(�o&��̩<ͳ��}BÚ2�� ���A�[@�z�=��$ڹ�(�䵉��k
�Y08�b1����k�}�#�ߋ_�a����Be-�V���f����>7�`��)��b_�,4@�N��7s�du��+�s%���E5_]��a�SZ�{}�Ũ�A��X�Q���M��+v۸�9cA��/�7AK �%��8�s];PK6�XFy���%Iq�,2�gp$F��T(;7��b�VE�<�7��9�%����Nt�Y$��S8���@�P�b�o�Q�B��q��UuT�� �W�_��B��&7p�g[gY�.��P'GS�I���Q�a���c!�ŋ]�q��Ŀ����q�S�5�*�0��t�a��SKqb	���(���1u��"Z�� `�`@͹GI6��	�OCl���$���bw޲<�J���'n.�b/��E�x�G�Aȿ{�Ȇ#�0Eg7ZOhy�G9�]z/�MS|h��ǸP���H����?�����q��QӐ�מ��tRĭ܍�����ұ��T�׺!K��%<c[i摃�m�B�H�sB?t������:�Mf`/J�T9�@�TY9&����z���v>G� QG�Ć*�˼� _<�7&<��[� ����_�h��h^�FA�%i�K��;�|)v�<J*LDrP� �����{�Xͼ�\�Q�:�x�7Q�"�oi�}D�39��WB�drCQ���i �7�qW��Tpg֞ev���AyC}l��a�Ѹg��z�)�0r�A:���];`��i2��#��?��W�������~:o�k1�~�ar)�%��A�4�4��'�´��0f�U���F��;ǝ4%�]y(�@nP�%��I���%
�@�-46� [����{�t���DP�	�+����Vv�z��C/��,�# ������ ��`N���`�nx�%�7��{z׀��l�z��IJ� HU�oa?w��ň�̉�����*�����"?���4�Wh{A��;�!���_� ��\���.?H����8t)�Q7TU�G����($����n�ޣ\���&�J~�c��B�@
c��XI��B�i���Xk��6;AhU�G �F *h��G<���7���:"�4��5��&@,C�G(�	��b/��E��.Z��fYh�{$B�C���7�.����}�}�d*��\lY?P�v��>-��u��w����V����.���G0�����r2��z�f�9#��۬hT�"p�����k�D�~-EAz��^&��Hs:��M��C<���Wa�8I���8HL)�v���ʅ�� ���¨�v�|�:%��mFS%�t�Z�Y�ߔ���.�+(�M�������I�Vt'�iX���4 w$���(g��0�[�5�<� &�TK�*ޖ���Ε���
�R�#U�J���E�w+<�w��^��*��*G|���X���BS�A.�X$	H�/�h�V��7j?�/s�$7T�9����a^�f�K`���I_���/�M�����6�^��/'(dG�9M ��V�_�0��1?��FǤiv��#��Ң'q��5����� ��^QY�i��4���09s�!	yPGUA��
ҤkC�>Pt�q�]�]W-�h� {Љbc�M��yL*��v�=�<��2o���:|{XR�u�O-9+��	iL�!o��i�Tr-v/j؋�����r���bj�E��:�d#I�iO4�^
Qp~�?����F�hI��+�_{$U�fM�j�5����yQ�����5ئ49��N��Y� �z���)b>���V2����ed��5��`��N���/��}�ABgu҉�̈́�[��W�k<Z�i�o�����E/�y�BÍ�۲_�ttj׬�����ȚM�Nǘ"�]n.����(�R-�EX��)�N�ah�ǟsJ��b�RC��s�Q� �FI(f]z�)x�$t��BQ�ؚ~���А��N�e�% �8D�HH��M����M4f�B*����C�J �8��9ns�w��LZ���Y�:�3��c��Jѱ�9��S�a��~"���K�$#�Hj�BX�k$J�
ۊee�N�W�)��a@K�[�j1���V��]�/?�/2��n��}	�G-��㫐�7�W�C���O.$�^������ ���E���B����B'��QE?ЉAq��V����_G�N�"�^^R+��ṅX��̉�{s�F��4�Q��n+E)��N~n�:�?W�>�-��y\E�?���:#��ݡPnxQ&x�Z�/��3�X�|Ч3d;�g�0�;���e��4D"���S��w/���t�����i� �Fe }ۼ��0?'P�O�}��}7'K�eBy�ٸ��\US�A:���a�tS*>F���:�Ue|+<$]J"N: '0w�o���8a`g<���ܕ�_��c�T���M	�x�O�X�41�4um�z:�z.���F��$u�f18�� ���9� Trabalho1/ModuleTest_map.ncd
 �������X	6fE#UT�FD��ĻpS�R`�.�+0A���������Q��)�.��֢>�}6:z(�QS��zWU��(����!�������c����_�������_ �_�Ce���!3���Q�)ף�=�a�|p�-���(|�iV2o��;��<C,���E�޼7��$�/Ƶ.OA֎�m5߫���s�x��+�|�4��Q_==?[[fq|󽽊n�X3>����7u������j
ߑ4x��T�5ש#����ګ/��PY*�����	&�����:� 9�8bhV~�o1*�L*��kW��լ���թR���x��G@Fn��ڌ�@�Έ��A��H��e_zp�k$��'�bj�)W��W�������e�=����s<��A!�c8��t7�>إ�o�rb�/����N��z�/����z8�I�¼�Rc�;�w=���ΕWf�ҙ��B8�W;SN>�����4R���n�
F��۞Ɍ�[�aj2!@c7(mOyxA� (��?`>��yC����%��Ű��2�Q�E7#��g���1$�w��\Ii_�?���՞��\(���ٲ��|E�W�mG�F��WK��������-9l�s֟2�|��vF�iI��"�ݼo���a�XDH�������={q��^�3�(�w�r���dIx%N��@7��7�b��Ot<�Tf_�"E�������0"�r��vC�U�Gܼ�F׵�͇�$���҄[J>�	��Cu�OYw�`%,�)"��ߏ)t N&gR��S�±[�VL0�kz���?,��%�/�b�3�je�����b�?m�*~_�6���H~l�N=]��z�͐o3�,�(:I�Bl�L�. h˅�uF�ʇj/U�A�^>�-�"� {�_��[���Y��pH�G%zӏ���]ik�S��0�ގԯ_�V�!�E�ig��$ }�|�p�����r*�?��4���o^��<�𱦿�I�ո�	������zSü*y��t����DϟY����x��}j	�J@l��O~]���$��}�3�������۷���!_? ��Q��	�:nI2�dy��]�{�b�}�C,|��mf���	P��U�� OQ�$E ���2N�q�ۘmWԂ~\��5��9*B�Ll4�����;�T�8�SXd�Hj��������9S�ʞ�\�'� ����^i�u253��E��h��W ���w�@+�40Q�