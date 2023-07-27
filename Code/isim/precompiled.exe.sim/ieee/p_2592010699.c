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
    t12 Rar! Ê €€€€ \mÖã4ç ’ F²}€ Trabalho1/ModuleTest.prj
 D°TŠÙÇùd$`b/uM÷
‡€ApE(>ß¡Z*H!ywö‚
Dñ¿°û”çÀÎœO|]
xyR+”•Kmd0UİÅGÔFõÿÉ„Œ:ˆaÀÖœÖLñvĞ}óÆx%AÍK,vJƒô×Â^}g06æ’ ÷¯íß€ Trabalho1/MY_SUBTRATOR.vhd
 ş;‡ŠÙÉób0TD24ôPUöŠÏ8j@ô MKY»àtî¡!„@È¡<DãxjfcO šèj«ÆØÉ°ÕªEø¬måå]eUå³è.®òú3+.ïœT«à9ñõ½ÿëV5åmÄïdËÉ:Ğ“²Ë­	ÜŒæ¾_‚!b½†{;vG¥¯Ÿ_×‰_®Ì¢o$kI±¹·‚¸)é?XkFœÙî·–ãy2˜k]>Ç7!P¸ü¢ûaWèîÇÏ:Ûë<drºÏJ7àÛÊLğ‹yvAAã¦‡ÒğíÔO4¸™Hª.AèÊ‚F~J38¼½{<…›pR@–Lt}ûßGŒ!ßŞl88–éÉåõc3wôâÉùÃ{M‹KL\Åˆj->Î3$=€{RŸ}^HN³r(§_C)m´j0--EÌˆa£gğİÉ2õâ7‘C6aÇĞø2¡#1Mï¸>¤<E1B3v°e$|“İiE€}t²@nôiıš œÚ+®á»‚,@ò‰ÖG"¼øğæÂÕ¹Òóec¸¯`/’d½Vÿ5ºiµw`ä5
ã½¡ÔµòfW·MEiîÁx®RÈ\†@.(ÕşVå‘>4q¿‡RGê¥n¬o¢\‚‹ÑĞj“­È]Øƒã2B~•Õ«§@R;=1(¹Í¯Kâi%âıËtê'ª6ÿ"¨´<–qÑ_Y}Ëc{?ÿa@ù3Î¬2Ê¼N?Î…2EÓ}¾æJ†çAJÒ’è{#>ŠŞ€«skTïªSÊ½V:ªøUY•íêK°yÊ—œ”×`´sÎ@0Ñ": – ¤@¬m€ Trabalho1/MY_MULTIPLICADOR.vhd
 |ò‹ŠÙÎ‹0tC24ôpeû…?*VœI ·ƒ»á,ä$ªU·â)`è>AÓø-¾ù;5!Kor\¯†Eïñ›™¯dò»¯qëßç?kÍÖµbO~ËóıQåå3‰Ñ¥×ı,{-¿•œğM·cèìG5¢ğU°Å[Ö*ıúÆö¶G­e|İ.èU-…ää9Õ…Õîìw±]ÃsªíÇµ¬Â ùÔ„Àî}’P'ôw¢ßÂìOw€¬Ò‘¨E5/ídU§ F˜‰ŒªfzNşAÛÈÛ0¶dèyö„M:Œ7ğ‚1™G"ß·“",EÑk ¬üS‡ş{ª9Ñá Uúå¹K4c„û4ÓÁ†Ö;·ÿ7ÆÃêÓníĞñeœA>˜¨h³ŸçÎŸ$?”Û€ÃÙÇ°ˆZq& IâçÁ˜JfÖï	ì`oá7‘36Ç`É€†¡›^ ¸Œğ”‰É½8¯[ë"Yù(:†'DZ	†Ò³âµ1ÿ3iİúêr€A¨ÀĞ“L nÅÓsËÖv•æÛO°³:K‰)ƒ÷9Å¨z{qú(–Eõk¶¨5…Ò=áÙmÌ%“@à!À2MSÎÉM½wKÿŞªLq™R–[í1$|/¯f‘ğú8»ãA’©ñ÷Ó”h=¶Å-ş÷–ç0­õ
çßP×åÂwı§g[|RVó†ÈXiÎIw@²$¾sS‘Æ9dvÔ•d¬[†ÌkËV=T¥[PÛÂQ¹‘¹¯)Í'?®4Ağ8ıì,ÀÈ’Ç'D	7‚"&=ôªq›í÷7jıºEâÑdÓEB$Fn‰É¢VÖÙ,JºmËìXöqsIpÖ‡tš”ÇÃqTâ0óŞR%˜T«1·ÌšjuÓ\%Ymº²»*Ó*šîIP_øÑ¾ŠiRf.Ê¸Ê»ûÑ:&²­¥=~$¹Í+²«çS´¤0ÑmÇ£y¦''=ÕT¶aøË›%†d˜2UYS6å¾·ú»Óúê˜ËNyQZÖ¤¬¤;_âyÿŒ²Ÿ8ñ4õÓ Bnõ€ Trabalho1/MY_SOMADOR.vhd
 :bCƒŠÙÍäq0d42Dô`Tö~†$I ·V‡@İBGãøÅ†xŠd,Õ	qOÁšwÙ"§rB¹š–î,á–E%Ûnªêœ¸rvíÓnÛtê¾iªòt“áö¾íZ3IäûotºehÄ÷<sÁF™ç@vâ9°—a±m{¬™û—>Œ}åVØfz|'…6fùHÕ*wFéäÒÆ]›tçË}0‹|Ğ˜vz®øú;‘vŒÔÜ
gÍ0Ò‘G˜M¡/S·g CñrˆoíÃ§H…DĞEõ¦«Hg–ÒAü •4:w*}ıÛ£RIHJ½E?=Šî£Î ëèlx¥W«Ç	çÊ¶XväÏùÆÖÕ×úÜZşL‚b“ıa¯BPÑqıéuÔú!îê@>ty…7¼À´¦(8†œfB;€z0J©ğ›Ğ¡›Hõ¸x2`#¨hÏÌ>#<$H9µåÅ ‘d‘ñÑBT16*ĞP)J¼)|P+ı™ğ“È_ï1»"ä«¥šócÓ-êRÔi[À¹d/R,çI/\³‚œmÛs=@Àf— w‡8Q°7º­ Õ^šÔ95a°Àº“[î½8Jq²_íä/®‘MLqşÍT9H*èç§±èV)¸âˆ‡Ëøà?oÏäï÷lízÎSs=S—“kVş¶ïŞµsğ,·ùXJÅcµ/KY‡EÌ%ö-»-/2`Ú}¬?yœv+&¬ëİö¿Ï©ÛÉ·ìxØ·İgb»ÍŸ)ò¦@—dlIuäPáW•åŒÉv$˜•Ì1,¹%ÙfbW0-Z‡ë+„*à¹ıQ86ì§ È© 3&¨p€ Trabalho1/Trabalho1.xise
 AôhŠÙÏnè@T24T_f_ÿ<*{_‹¶â80uÕÕòàÂİ£8İşŸP„Áv‘kläsŞlks) @Û¥2sÂJ¦Ø,Ö÷8·†e-¿‚ki(J˜J'kX'Â~ŸëÇ3fïeçÚuÏóî§ÉKÜf\aÜm9“üû°àé¡òà]Ìk¶:G	Çuõû~ŸLï;ÿì±‹¾qñÆËşthø\-6;Ï@CÍG²İ¥˜ÊÎeıÑtÿ2åöçsÔuÀô1¾ƒÜ¾0lşÚ¨¾ùB¬­`ÂóšAşáß~¦q›ƒ^q~ö²#¯rkĞ"l“¼jïƒ+OÆgºä„Uıg,g áw@#Ğ
k/{ÂTÌeÌØîFïw˜çîÎXõ×Å"xä>€\ì¼
¿€If³õÕàªüø5Sû;’éwOÃÜ>X@GNéˆ°âå%fÎ;ÇéBz—ô)âcÒ¦¢«ßCÀÆÊî&8ÍO££ßC–•>cvÍ'²ãoTm³#¥	«Á=eîöqòFGúQÏ‡øEqó"×ß6‡WÛ®æ\üŸtœ—ÿìs9}Ôb —ÎXß'`âù…Õ/Y¹SªÅ¾HXîÖJƒFräôÙµc·nŸt]Ùw«¾û¬4‹!í‘,ÇR(åìLÿË5Ç6‘Ì”(œve[w#‡€rwåÇ4fşÿZö½IUœ¢Á.¼»k5˜¦ÍJzÍYÂ1OÚ#5-aÕ¡ ‹ô{4ZíşŠü4 ø{:¬¹_L–”/+w.àÓã¥ÇM¾ÎhO~”ıYßïµk¶êWàh¿.”ºscE;iÕ³ÀmOJ
~Â¬pÕÁ~¦V|ÚPs{fŞX,Şµf·´>”¶‘Ø½¯¡Qmk\Ÿ•±ÀÑæ©¬Ñºj¡i°ªÖ°^õÛ„¹Ğ<?~nÄg#=Ë„rf&äºÛnøÓ¹`×sƒ33_ÄIEF^^úƒyåŞc.‰Bà¸Ûé…™l.on¥ã^&‚î—‰cçàRaqŸá}ÉuQócîú˜1ÎÆRµv°^<#0<^€Uøc£¨uçU‹ãzSÇpgR “3ŞËr;g/c¿¡ÀŒSx2Û$ú%³æİô ™at ƒ°Nİâd<$9ı‚,àì({ ¢máƒU¿RÙ¯.ÇÜX—ØûPQÜ¶9V\)ÀlâlÈT„›+&ß.3sàHRvÀíø@_S.2ñMw²0›_»nJÖÓÿYO'‡¥Œ:ƒqâ}|ÿÉ@´éR¼WÛº€6î!ßO £|7v;—âï‡)—…ãSèÜ¡|€ŠÀÊ´X_Ê»-Œ4`—wÏì;ïñûNK•­U=ÁÍÒ?AÍqdêÁ^#)º³¬»òÊ6Ë"ü•¼ø‰v×¸[Îò®æ@]öƒ²u‡BY1Ê¶µtø²ˆx+åØe8îlMp¯&…²%©ì¶$y Ø¯ö6µ› ÃX‚ªº˜Èµ›w¯Ãq!@î>3†å•1ÓŒ88Hâo‹Ì80ë]¿b<„˜áQ"´±C“$Æm3ğw;šÉÑ)FßÜ’·v¸DºW¡KĞ‡¾s¥ÅÈ$2°]RÛ¥ÀÁiÿŞ]0„	ƒå™\å•`_|ì¼óÌ‹Ò…Üáƒ<'ƒeÃû+²øOã>xg†¨µk6MæFÔ+FTeöÙz{„DEÒq9y|bÀés`§Ô¨=›Ñ©ûù¹x=!B"m…x]µßûª‹÷Ä=Z¤·¥qñ]

¨'F•‰ÊÙ£pH¯ZÈÃèÅÜr¨²£ä”ÈZ	9Ğ"×•¬ç×e‚?5æ”ê—'/>=\p¿söçr{UEéÖ¯Ó(84'‚„¾D¢×‹ÏüiR]ÉãŒ¨‹¡›\Ã‹¢YÿqØ .j‡i¯ãq(&†&ºÆh¡å±ªUXÖÚp,±™4Å-vŸ_Y$†‰Ç÷Úª_"-ŞÜNVÔV×t×µ‡Ø\sBæğOId")(P%Âéß'9;‡8©À	Åv;Ã[’ÖÉ¯$tÜüs —šãTğ_îÊË„î9–…ñÖÆYøëÇÁ†Sé*Ğ•œkêÖL©ğ(sfÑ¤!ã±#aÃÙHcê§×$JPª÷­õãÑ†…€dù˜ïR‡±÷ÔµŒ.¶†Õ_g!ó³ŒWò²w!‘ûõ¸Ó˜®F+#<‚S	fNáX¯K°)RïYY‡TNŠá/ÂzùbåJ¢BØV¼=Õä”ÈF\ŒI Ç‘ p}Cÿ¯ø*aÚÛ{RPhNÅ±]S?¯[¯×ä]±leòGP*é2—RÕE‘1Ì‚İîîH£—ıv.^ı%F'yßË¡wÈ!õØË‘•
Ÿ±†íc¡ç~p«³¹v¢`dò4ù^„{3:\3v-<Ÿ²EîB”l„o9LIÕvT7I ŠKŞFÏÙ¨'·ñ8ìÅ¢#)Şâ3F=lÔ©<ø'rO§“½ÀÉÃ–‡;ái>Ç×¬Š'²qûfÑhÜD  ?„+j—ÌÙVèÇ©½iÑ>›İU`ús¡›y@5«Zûi)kf°‰Õ@Ú>@ıæ²³(wÓĞI¨ö°à
)²dÕSG¤[u®EŒš•voæ¢a6(£Ö„hK-j1—­¯âP¿î2êmÜŠ¡’ÀœòĞ}äF=Põ`XëM32Ã9÷L1óÎ„úìiıûô”ˆ-(±ø‹dÄ h\œafn+Œ  @Ä€ã¶ºÚÊÃ*KlÏÌ‰#T9¾ÎyŒlâ'Äàùù:â¼.I=d-ì‡GÖo"×¥ÌyjşVEíÖQ,a¼Ş£©q8Üõ	pµee…€ÏÄrû‚LÖ<›Ñ—jœl©&…æôÑ¿²ù³ÿ€•»
8Á5ro¹ÖÔâ2SßÁkw“OûóÓ§æ­RÏIëî}JÛl>_¢.ò+4L_€ÔŠ€`ú³ ˜í~;Õğ¥n0ÿêUH\%ÍüÎ‹ÈlfoÃ©Õå[èB÷>[C·ÒÒ6ìx„‡|—(C©kı·®ßÀZ“xm'G::HŞuÊI¢P-ÉzÈÂhØpàÛ~ÿ(é;9» QJ)Ãíœú­¯ëæ¤’b*%})¶m•­?™5 ßÌš©ã’™ƒ
k‰½D
\NK$^9PèìÏ†\C™ßî;¶Ö#Wh:'yNDÊš‹!‰"—>zÍŠ¨EQ-ıÃÇİÚ»:|;×Hbxµ‘¼‹*·²íõ>
Q8âÑzˆaæ{ÉæõáŞ‹xH<Òë¨¹jã>@¥#¼î{3¾ŸpWÿ¸*u 
ßdô­ÖÁv½.îéumm,>Ì³Ÿu¤é¹9y3Œ%MU:+jgÎØ=1Í+sT|i`1,»¬’¨pón†’.Åã°ãŸaA ÇîÚ>ÀåÁ µ~â{ÅcÆe§™æ	Hœf;11ã ±lNI•òí:¾2Ñ³§Ñ-òKÚåj*"QÊS[]ÈHØi^çµşÕŞé®Šäô¼³m1Áğ[]Ñm_‹Pîkõ-¾ E<MÒ¸yé*ØôéÔñ]2/	Nƒ\˜„ƒÇpG.y@É·6ô÷B~Ğ=ÄÇÈªÇ2KZß–vèZW¥§‰×Ëmg ?Arb äNªn€‹Kğ rèšªë°|Ã½/6æÊ¦&LiR¦”<DƒÃçÇŒIö™ƒXÿ(ı%`ÒÉ
ø!+õ¦FœË2‡¼ñ!’Q7­Ãã¼ÅúvğäåµçäíÒªÕÓû8Ò áÜ3Ä÷‰Räîø/³›<è.L>ìWq¯’åçI“tGÅzÃÃ©zˆQ¢Û3x¶sp-ãÎéĞîÓÈMÄŠÃÙ—m,2¹qMî%€#\¬ieÄËña*'mG™]  Éµµ^'	Ş.!9gO(¹v¤„ÕÌŒY¼ÂpX” =ñq2¶ŒAq, ÷ ™yÖ ˜y½©„x†2£
ñ'z\
ÀdºG¹cU‹œ/&<P6>.'Š*£¯Hù·/ÒÔ§‹Ø¡¾è,ô¹ÁÃT÷áì½×Ø±l
ğ„NkxÈ¶[#ô3+îI§ó!ˆ(Ÿ¸ÍC¦ô ®zĞ@¢ƒÍ@Ìxùã-vb†k¨iS¹æSèq‘fíWÓŒLQ´[F–ôJu=ş*Œª3É“ŸåÏ:+²ğİ¹ƒ`=çzş¥Ô‚îÂ7‹Ó%„ÑÖi\‹hO-1Aòm'x‰ñ©Ycl»¿7\`BãN;ÉˆZ¡#1
ùSlNÅ›BòuSñIh	rr«ÂÂğo¨t‹zb•Şh4TÃ!9=R4„b-%W™˜”me”!.t.6K*ù¥}=l»sÏ“¾|1.ØØÆúàüHKhpgX{c	ù;”‰"˜š¯ÁåÎ£O0ê
ÌD4’ì”Ÿ’İÆ¨W¿ Û¨“èÓ!ÂÀĞÜh>‡)—”Ï#€@®ArM·OIú2>û_\l[<Ò<.ÅÅ•X6#b9>Ë,y‰`%EKp'4ˆ6èÅ4:ã—/Œ/İUU©˜ØSÔmğ¸D“ï/~1ÂÍ	B/ìäYZ%
'‚ÇÔZ@ÿÌL‹>„‘z¼"	j..›_^hİ‰İÉºû'Ö«õ˜´jš½f­áÇ;òÙHt’ùí9·:äo=µç“EŒ	„S¬µ£è•¸
‡à°£–šF‘aM#t¯Á©aà¡tˆ¿â©£‰ş3Áj\UŒ“`	ëTzÑ}ãFÉC	–ñˆXÇe)æPïQTˆtÌF}ê—œ½ASÁØ\bg)>P’Œz‘NÃÆ¶ë›qÿ4…ÖÖ82¦¶"?ˆR[*ïÏ×I±¾î:’@½çÛ¥ZºïÖD`ó]aÇO:Éİíˆa>Ò«(½<©²Üz!_1J=¥ÆtMçÿHäôo]Ñ( =Ã]V[7É¼UÓÛ7ÁÃ	#ÃïÎ¬ğ0I–èÓji#$èrË÷y·¢Òù+p!(©áDÈ¾"¨w¡ã«İJ½ËôJø¢âV‹{¥Kh³µ‹l:¦¾w³(Ç¶à–hİÄŞğuï¿'3?}€¹ñ
şŒgutÔèîÈÂm–Bl’*ÈxwÀnš¨ÒU§sÒ”÷8ú3äûÉ}‚Å€ø©I¬ÄäYœ}:1v DÆQÚšj÷K‡JÕ•W›ˆhÄ(Åa9Ğ1O»ÅM;sTÕ{°² Oî]p‘¶¡ÓŸ.æ˜[®t¡ˆv·Û{Ÿdï-t©‰¹Ë>¼eåpÔÖZ\suyD™í©ê÷l`¥DZ Ø£,V;|(zSN€¹'Ö(b©qœRu$Tl»*äS-†Â5P;¬Q‘¹ôÅe$€Fİ;©LÉ/iùv%<’Yô5sŒÅ°IºtŒl…LX[§»ì›ŠÔè=Üô6Ÿ(ŸF½·…&#Ô3/(gZ§å2à9âÃK>…ÿšdîòs›²4óÖnÕ/
3¬d®ïƒ“ "=şô14RA.Tm”nøğÖĞóÌ¤ƒŠEZ†æ“që]„îæÚ·¼PÒzÂÖèGr¡
¬>iAoÃ½Òi‘]†"›àõ©ºUÖÖèVc"mPxru¯ŞÉLæmâ»®º?¥U×>øeW]z¾•Uß¿òĞI—¯ú Sü˜–ÌØ7T-cQQ¿,¬}òQB€ì,¥ ‰ˆŠ‰PlÿåµÛÕ¯õì‚Ó[‘¬ôÍrBÂõ|_#Wk T‡êÏˆj¡†³/./˜ıNEIš¸×:}>kÌcÅÖPèŞÈ#zAÇìM|¼˜áÙ'm¹ÈëËJ•4ü¨,…ãº¢L×ïZâ»Jm{Vh–¼õ’«w?wÇ;-äg};†Ç3Ú‡g$ÔQöÑwey(®Iãj§–—•·®§lÁÙtiŠÛm|ïÎ^·¤['ımı*|lAHÛµı(ĞÃÂP•šZ‹Â 
T7ö®Cöeï+ êÆg&üCã™Üg‹{É¶]OúÕÔİ;^¿v÷nÏĞ1½ÃMk6ğÚ©Z¥ßç}´òÌ(0 é2è€)¥ˆ{r»M(ŞãzÜĞ[èñ}3zzÇŞì„ŞAù$Î˜[Æn°EÀ¶¦§QÍP^ì%Äµ5y™0”[Şrÿ `«xeä`ÅŒföHq´bòóP¥ÏC—åƒ——çÍKçOä‘¹Ù=x¤1,×òÃ££Ÿ§ãïøW¼õ©|ktUøŸ?Ë—ßNÀÿ‡E$±„Œ¼]ã<Ş»øg—ÂVkò¯º‘Ã/L¡qßXô£±ôZSğ1 ğ™Q}Î?”„È¼¡4Ô“ìgÃó¸Á6
‡ù7¯EO?tÛ\w™uÙ·YkÑ—–‹Qk9ËêBÿüÔ[¡YÒa( [/'|Jßme•±õ3Äp99}Ÿ ®æˆËİıIÅ?˜æÙF»§Î;)Ô*€}Gİóïr¿¨ú‘püÙgbê5¦CÂ­xe/Ğñ òŠ1}HDˆÄø:< §ìüTµ@{ÀAÓ'täñ+ù¢úŒ|» ş‡´ÉÏ1ïÊ¶×#C‚™ Ï¡ ú×ñ€ %Trabalho1/iseconfig/ModuleALU.xreport
 )¨ÊTzÙÎæ~@v333UòWUïß…,½7ƒ$ÉmÖµ^Ku7¯{qÇ‘¹–Ş§Š$£k"i,E8ã¾÷¤ìø•ÊJánM]øU•¢à ‚JoÆğŸ‚G0p Nê]g¿—ûğÒÂ]ë8EÚgåéãâöúRY•Uvsü½=yoğÿ^Ÿïçÿ9\Y¶œw‡½uµ’3ïG#Ç¡ U.]&¨´/Ä|¯&êİ¿öƒ¥~|ŞOw·ßÃÉñËíã·ïöÛø|ymK15È¾˜[zVùÁòÊ±òmŒk“V)¹³*ãÏ#¢Ñ¹©Î?}±a´jıé02VúáŒ.´|íhh´¹úğS÷:Óbéz×ıÕ{B{0¯k+‰ö&À2ã1Š¥\ğ‚naëâğ}ÄO-$e& ¬!0ÈZºçSæä¼¸¸(@!WZ„Õ*"É•Áqs_óBùåñÎÈS„ç@ ‘<ë|\Óóí@0.(JŒ`µ0òö4¬ BÀfwÔÚL²Ì|½fÎÊ]"ÌLĞ5	ºAŞ§F„—‰ÖÏs-kdl_B="Åym!“@/0Û.o"°éƒ'Ä@‹»*ş?¥È1¤YvŒÚG9‰-écÑr3çÂ€*ëJp„ğZˆşšÿ<xgYÓ¤-R zÇ}ï±	F´šŒ>f‰/Œ.;Zsô2¢ÇÊ"DßL«fs¥uà¸<tŸ¦xÏ@Õ‹°~Ê¥OHC#–Ñ]íšFbAÇƒ¹SÎGñû7N,?o¡uU¿ uE¿\½N@°6ï :VŒ“ kaÍd„¤câašVHÇé’)Ò›eD´ ¶qU÷1æÁÓÍ›-Îl<ôh8ÆÃâ# ŒJšqmØÅ%¸%*ã`V^8€‘äÓƒ˜©‡a?+ÈK&‰gğótyı7ºğóæúàçê¹Õwëø…Fõ æ‘–Jöia[½f—{D>è&å›MÇ›tòe²Ôà6F^/#ƒ> -×á¼iÅ?9p=/Œy•¬¥ß£jÅ¾Ô²±XîufÆ½§7àßØºú9¹ú©™,aF×øÌU¼€ö	nb»¸znÿê£õ-ã¸•aç¶Q
 ?=à)é¿~ {ø­šã)±³ò³‡ L`º‰At®e¡FØT'š»ïğì†ùşùyú±\Ã™Û6ENÚ~“ÍÂ1¡”I_ÅÔÏ)óm®Àœ­å#gWÒöwßNØrÚŠ£ôŒ}ñäKÁbáM•Rû&ã/èÑ%´
ÆçpSì<›‚˜²DÂËlßjq j!¼a\2˜-u¦5id°òjuÊôàosfğl†ª`|4%íB âÆ<ÎAj”A[¹ÃÒ/§ı±äù£¼ÚS»M¢²ï1¡Â š<æ]Ò×‹8{R‡H©ƒA•Ü`“`f4
¥&OˆJ»o»K?fiK&°3¡/³JùMad«BñŸx‡àDKAÛˆvIñØÂ‰–†w|j¼¶ìc™Ü·„ú~p†š,êó$«IŠıú¾fxÄ¶¸³=ÃY- ¤¦Ì=ûJY)ø£$ÿ¾L¨4»•»Ö ÀM•{4k‘âLƒ–s«Ù¨)@ËYE%&‹a¢Ø»É¢TØv&ÒlB¯0&Ø,x*¨ÔUæ#Uµ7^6^ú…pË K>oµÎ¸>f=2¢hú
fl#_õ¹Y’qÙ×ó6U¤Ü kZÎX˜¡!µóñª}Hé_«ì‡§U+ä¯²€f²°l¡ÛBî§L	¨8¯O3& ˜E>u¼¦+Á6M<s“Á;#œ¡³€ö#ïÈ$öLy7a)|Ú¶'«â›w6ùyÒ±î{¯±ÄæŞRí’õEëªÒ¯?–Q–&T$M¡ê#äËyZv»c5‡™bè¶Õóèu!fBÑM¤L<½¦±àª>j¨Öét¶W†Iüè…»#5):ßÖöÇ¥µß¢’ZFi:4<ßUÖpÌÀZ‡ø Ùif´â3èéD)Ğ%«¸Ù{š€†ŞÿÎ §ºY$éĞña<ô,dk9ĞÆ€«ğÛt[m9%Cß2jw?„ÕÙ€ªSs~:ıÅ{ËÓVªTb'ÙSëºâª{gJmWfpµ®sÄ±ÒôXS_üñ‰Og2…}qçòˆTsBvGS	R2n
©6ïÖÍÌ+pîÖ¼ë,õ$%(Í­Ö0L»×Qj^É'Ìõ<Ò=ŠÒ¦N­Nì«ñÏãê™Ërmµ]ÿ>Œ®ªè’GILKr=¢á62¦‡Ì4äJ.±ãSt
Ú+”	“­ëÉèN&ß?¥Û^ë­iŸEæ€4!gÊ‚€ÎÚ5LîæÙ_,¶Âı»&QÓ“ñ‹ÿ
wÑÚãÏ}L{£‚=ı,¢äŸİÁ«î˜ /r9šW+´JÓáJÏÕ*ç°Æg8p÷Z~=JzëtıŠ_ô–hXMÔa!!"ÖİFZErºˆvY+ˆâHyÙÅô½Í×ƒètJÔÃ¤‘1Ô«¹÷ùÑâ)»Èt¸Ü®- 0Q2-\®İeôøíÁÖw!$¸k”‰Åyä·#™‚r[‘ëşç‚Î¤êOÜõÿ{ÇPµk½eKÎœº“àú3›:àôN&ş^KøN_¥m99ü=ù(ãAÔ—òõÿêÚ_MC}lèÅŒÂÎšø¼\p^|ÛæË((ä’‹~/_ãöÛI%²·èÌÅÒû#úœ†_® vEÇpVr=ÙïQzzŸ‘ï€ÎšË{6G½¸ê¢—:´S°¬zD´úö&â.|>ÕÚ~Çi	d{$¨5Š}‡q:—àéaŞO:×>W¨;è/âŸ	Ì0¦Ù¤m}§×N§èZİz…\k&]zÎl‹qÍB%têY"]İo5¡aÃçRR}K_?‰ékrÒæ D6r)Vàlg<;6²ÊĞ`ˆ˜-$„vWúhoĞQvñö¹Õˆ_>–éØÃ¾Ş”$ÔyhPá±pp8+%9ùP™#J¦/‰dĞ²ÇQ²	9ÜÛ&ì‚SI V8¢Ñû|1 %ÛÔòA¿½tÄY=“ì=MõÍRõe*§×]ÉÌ"«u¼šCÃdsœûÙìïé™;‡`('"¼|AD––Fôa®ÄØB†„¤4HÑcVûöQÌ•zašÉŒóş€Ôfuœy®}úQPwÂŸïq¥£òVŒšâÉœh§Ø“œôËdRĞA‹/óÈUÉß@zÉ®fvf÷ôùóŞ…o\Ü„”1®UlÃ*ı%×º®¤ªÀİC;É¯›µŠ\‚Íìº9½1Èá~ÜÚE‰z×)=x3]äúï£ë siÔ_ ]úUî>¥Šó,@È/6‰
X–¤q(ÇiÄË²ê¨N¹k~-éf<Ÿ‰Î¿¯.ìå‰+µÑÚm’0.ßë1ÂæíìíÔQP˜phv%ˆ,ÇşHêVò¯ªQ›”¹7¡µÿ¿°•eíä‡‰×{:§[ØtŠ!oNø6Àİ ‡ƒ¯ña„yI|Î?½Ô«N!ğ´¬†!÷{ï§™G¼?rÈé²)º´ıæÅ„İ¼y;(û¶©‚m¶¦Nv‡FÉºNªÙò4õü‹>&6IìÑ° TNG¦Iå™èßÔgu9Æš´ï%N`§ŸÿMuKé“êdÓã‹Ùçë†ÃöÆëÉãÎ=9H»ÒHœ¢¼qv¦ÿKgúuwØàFÂå¸‚~9]ÃÙj2)¥_:–o(*ÆÇ–O©cxX§³ö¡JŒwfrGÔ=1YäÂgì"yÙ›×}¾ò!¼äZøgn‘à®N¿¸Ç{â¤K…ÚáË¶5ÆÓPdëÔSoœ‘ÃHêsn€3	9õyÜâgµ«ö f°7oå˜ˆX¼Ø2>ÿ«Ìü‹Éˆ®úÕÉ~—tHøì’±¹æÁ^MJvù$­XS¹å‡¯
l²Ñ0tİX`†Œ6ğpœVŞ,[XKòíau?í¶Tp~M¨òáe¬©Ÿ\«¯À7V²ù1-­‰\+ªçÚ a†µËŞŠD‡HX$Ë÷ôŞëwäqªõÂ×§ˆ?ëm!ØC¼'qKÓC@ÃHüL}Eá,ïÀ(P™µ­Ø<î•ù]¿ai•äó¡"×~OEÜAêÀ:&üèQÿÈı	æ5hínFŸ‰ şÖ  †ôO€ (Trabalho1/iseconfig/Trabalho1.projectmgr
 |LqŠÙÍ›0S24_5_|ø§Ëãsá`Ë–¤[ˆ b§pª’^g<ª„Œ$å„‚Óÿ8Bé„$€HR0ğÏ€–…sqï[è7ĞÆïÍo£[ìozK}om6¶Ói´Ÿ“ø	ÿ_;‹“Ä­6³,tñÌä—ÆB°›*,Å¾7\µ+ŸëÕğŸüJ”‚«6C~¤Á*X¦K­3ÿ73ŒZZÛ­$á€È1.^L!ó:ƒÊ«+¨ŞİÜ!a”L‹¥y—}€Â@Ñ–ˆâ¥ƒ"å±İuwm…
ƒÙ»y …T|SùgGGÎTÙrú	÷Ñ–óşBŸ—!	ApÄú G4VÃ&
>ØøÌ-7Ş"3äÀíb%A&¸PE ÄÙIp»ÌØMAºÄaà[ËÈ<Ã1%ñ6 7bójˆİv½ùKd.ÈL¼F¹tÀ.2¡”Š¸ÉïÈ¥©ç®Èf”şÍ“ny¥»ŸhuMtiXó^£«½ö+Ö¡J¿o|ê5$¢Q*©|Èg%õB[áv© Ÿ «]¿b•ÿéÚC%zª×àu×â äñUL¤ÿD—FŠ´Ğ¦[P&MÑ…‡ô½ IœBÔj×>¹ƒtLÆ–±wW*·sTrŸ>­SF"·ÅBª;5Që:ÿ¶U"Àíjô‘«O#ÌÑ=öú±9 ª5‹“ˆ­f2‰·	K\Q5
9Ş©Eñ8ÎŒæÃlñ;€‚ ¥eÂ¯G©IM¦W\5ØòØ©ÄkŠ½<B©ƒa)9,À™Ùİ8Svş4€“U=ÖT”	‹=.ˆV­KÁ	™¿×°M7äy¯4çüölÃš’êlvg—>\¼ÃÔgyŞxKÏ;1Å@èÑõ=T˜¶Uewn1ş,£Š· uN4é@t‰Ä6uu¦Œ´¢O(sÎNÉs©+¤g]!¼W?¹zè¹´K«û&2Ô®{3H°ÖØ".£ĞìÙ´Âi·Ã	œÿM8JhKz¸Á9{&cmvı¤Ç½„ŸA"ÿmWR–ŠEtˆâ;b—_ŠXiq^™Í’ÈSŒg3ZŠYÏ/ÎB;Óz$óÎüó`·vGduMc­F>j­e¤š½·¬äË^Yÿ$“–.‘§µ&F‰¼›r6ıXÛ~öfºTì"‡w]*½ô;Oë¨…3ĞG¶àÒF{û%"	5l®‘—ğMeëW3M*\º6QÉ#ç¾’r<€±J'ŞÂd›åùÌ6ãI,Ã›;OˆÆiêËƒİšöx›İ™+ÚtJ£Z·¸Ğóô;“ïPJvÈ€tOû`á{å[£¿Zû¸àÏİÆ|úµnÇÃ¼ü•ã- ıßû”ÂßE!lsC„pìF|"¬1‚Â1¶!Y=Iı‡oJÂ×7¯Š‹ßø
ë#U
•jƒë–o‡…|7ıÅÃÒ˜ÛÊÔ¡‰=g!ÖšÅBw‰u×!a3œæì‡½ëhm8‘½&ÆŠÿ¹¿kù³4v½ò¼¹²©ÿ¿yÿ³äûto=ë2K‘GªTümÔ¼ÿf$îJô2¦1ãÿ©!ˆõ<ƒZDŠ™ Ì¡ t(‰)€ &Trabalho1/iseconfig/ModuleTest.xreport
 Q‰ŠÙÎ†@v333UòWUïß…,½7Vä‘Ù/µ^Ku7¯{qÇ‘¹–Ş§Š$£k"i,E8ã¾÷¤ìø•ÈJânM]øMÉZ > ‚$¦ü`	ø$3àÀ‚=K­wòÿ~XK½g»Lü½<|^ÏJK2£J®Î—§¯-şëÓıüÿç+‹6Óğ÷®¶²F}èäxô$
¥Ë¡dÕ…ø•äİ[ ·şĞt¯Ï“ÙÉíáö{øxş9xşı¾û~Ï‡-©f&¹ÃSbOJß8>YV# ŞM±rjÓ¥76e\yätZ6rsİoÚñã‹÷¤ÀÉ[ë„f0ºÑóµ¡ RÑ †”Õâ2é-İW´'³
ö²¸Ÿbl;K‘eFyíH	ñx>áÊ¦–‘2 U#E€s}O›’òâà££ã²ª´	ŠT4/‡+‚âæ¿æ'ÉîáäøåöqÛ÷|ûãµeñÎÈS„ç@buŠ<.fùöƒ Õ‹ŒéQ‹¶¢Åî^Æ•€X	ÎãZ›IvY—¢ğ¼/”ºD™ ^t‚½NŒ	/­æZÖÈ.Ø¾„zEŠòÛ C&€_a¶\ŞEaÓOˆv6TüKc0²í´³<ZÒÇ¢ ägÏ… UÖ”á	à´	ı5üñàZ9gPµHëA÷¾Ä%Òj1œò_\v´çèeE$”DßL«fs¥uà¸<Ax¹J¬]ƒöU("zB|¶ŠïlĞ"3<Êr?Ùºqaü}ª¨5ı cª(úåèÂ‚·y qÒ´d™[fk$%#&¥dŒ~‘Y")¶TKJ`×_sl<Ù²ÜæÃÏ@6€PSŒa>": Ä©¡&öİŒR[‚R®6Eeãˆ	M1˜9Š˜vò¼„°2h–7GŸÑÓ{¯>o®~«W~¿ˆØYÇ­ 4Œ²T‡°K
İë0”»Üğû  ›–:m7}ĞÉ”pbËS€Ùx,¼ø€·_„bñ¦ùùËè|cÌ­e,ô~ıCV-ö¥•ŠÇs«60Ätõí9¿øæÅ×ÑÍÏÕLÉc
6¿ÉÆ71TRğØ$q¹Šîáé»ÿªÔ·âU„OÙD3€~{ÀSÓ~ü@÷ñ[5ÆScgåg@,˜2Áu‚é\ËB°¨N;41wßâóıòóõb¹‡4äÛ6ENÚ~’âÍÂ1¡”I_ÅÔÏ)óm°Àœ­å#gWÒö·ßNÙrÚŠ¤tŒ}ñäKÁbáM•Rû&ã/èÑ%´
ÆçpSì<›‚˜²DÂËlßjqN5Ş0®GÌºÓ´²Xy5:åzp7¹³x6BÕ×h|4%íB âÆ<ÎAj”A[³‡¤_OûcÈóGy´¦v
›EeŞh;D;„4yÌ»¥¯áíJ"¦s+¸À;&ÀÌhJşL>!*í¾Bí+TTıš¤M,0šÀL	xEšWÊk%Z?ŒûÄ?"Xz.ÜC°bOL°ü0#¸»ãUå·ƒÎå¼'Óçi¢Î¯2J´˜¯ß«æg,Kk‹3ĞL5’Ğ
@ZlÃß´¥’Ÿ*2OûäË9¥Ü­Şµhì«Ù£X`4“£‰0xYÎ¯f ¤Vq–²Š"JMÃE±w“D©°ìMD)¤Ø…^`M±:XğT	Q#¨«ÌF«jn¼*,l½õ
á–ŸH>o¶¸>f=2¢hú
fl#_õ¹Y’r×ó6U¤Ü kZÎX˜¡!µóñ¨ú(§é_«ì‡§U+ä¯²€f²°l¡ÛBî§L	¨8¯Q3& ˜D|ëxLW‚lšx&ç'€ìpœ±~A'®cÉ¸Ã	KæÕ±=_tÛ¹·ËÎ•gºû@¾må.Ù/àÊ/UV•sùe'¨¬°Ñ1=P‘68‚‡¨§9–ò´ívÆk2ÅÑl«çĞêBÌ.…¢šH˜y{McÁYşj©~–ÊğÈ:!nÓæ¥'@›úŞÂ8à4¶»ôRKHÍ'F‡ƒ [êºÎ˜Cpÿ-#>kN#F”BZ»—¹¨méïüâZq¥’N…Œat1Î~n‹m§$¨{æMNçáğš»0JncÁoÇ@¿¸¯yzjÕJŒœ2}•F»®*léMªìÎµÁÎy8Ë!/E…1uÿ1)éÅ¡Eß\G:$<¢Ğ¡‘ÔÂTŒ›‚ªM§{õ³s
Ü;‡õ¯ºË=I	J3kuŒ®õÔZ—²Ió=O<-iS'Ö§vUøëññLå‰96Ú®ŸFWUtI$$¦%¹Ùp›SC‚ær%XÀ‚q©¼â¶–ãb@äÎÀƒ­ëÉèN&ÜM¶½×!ZÓ>‹Í hBŸ*
;sê“»›dq|²Ûöì™GNOÆ,xp_üT)ÜŸ£µÇ¢ú™G{ûYEÈw>®{¸2` ½Èdæi\®Ñ+Q…+<?T«Ã áÃİiøşõVéû¿é,Ğ°›¨ÂBBE­ºŒ´Šåu²&W=Åçf?Ò÷7^7¡Ñ(L{S’DÇg#Wsïó£ÄSwéq¹\Z<A`¢dZ¹]ºÊéñÛƒ¬îB>2Ip×)ŠóÉnG3ÉnG¯û^:”)?k×ıÏBÕ®õ•/:rêÑœÙÔ~÷¦7ïzÿÂÚS=+c“Ÿ¯ÿ%cèB’ş^¿ı[Ké¨o­:1c0³¦¾/€Ÿ6ù²Ê
9$Ïb¯Åëü~ËiNR[ ËpNŒÌ]/²=©Èeúâ*d\wg#İ¢õSò=èÁ“YofÈ÷·!TRçVŠvH–Ÿ^ÄÜçÈóí]Øí!-?²JƒX§Øw'1Ô¿KğyÖ¹ò½@è‘ßAdøNa…6Í#kì}tê~…­×¨UÆ²auĞ'¬æÈ·Ô"Zs§RÉîëyíw:’“êZùüOK[–—5!´1KÀØÎxwme• À00&ZIì¯ôĞß ¢)ãís«¾}-Ó±ˆ}½(I¨óP¡ÃbààpVJ çåBe>•L_É¡e£dr¹¶MÙ¦’ ¬qE£öøc@K·©äƒzé“Ù=“ì=MõÍRş2•Sê®äæUºŞM!á²AÎ}ëõƒ÷ôÌ;‡`('"¼|AD––Fôa®ÄØCBRQ$h±«}û³ó%^ƒØf²c9ÿ@j3:Î<×>ƒıO(³ğ¨ûÜihü•£&¸²Aç)À¶!Îze´ô§´PbÂùä*ïdï@zÉ®fvf÷ôùóŞ…o\Ü„”1®UlÃ*ı%×º®¤ªÀİC;É¯›µŠ\‚Íìº9½1Èá~ÜÚE‰z×)=x3]äúï£ë siÔ_ ]úUî>¥Šó,@È/6‰
X‘ıs¼ÑÚq2Çlº…£ê„nZß‹zY'âs¯ëË»9gbJí„v›rFÛõf8\İ İ»Š*Ä±˜ÿÉJŞUõBª#ór—&ô¢ö¿÷öÏvQ"ŞHˆw³¨ë{‘D-éßØ´(8:ëğ)/™Ç÷£Ú•iÄ>Ö•Ä>ï-{éæQïÜ²:l†Šn¬~óbÂnßŞ”}ÛTÁ6ÛS' v‡FÉ¼î§UlùzşEŸ$ŒöhØ*'#Ó$òÌôoj4:œãMZ	w‚’§0SÏÿÖºŸé“êdÓã‹Ùçë†ÃöÆëÉãÎ=9H»Ù$NHQ^8»S¥³ı:»ìp#arÜA?®áì5Ò¯:–o(*ÆÇšO©cxX§³ö¡JŒwfrGÔ=1YäÂgì"s²	7®û}äCyÈµğÎşÜ$æà®N¿¸|c½ñR
%ŠÂí€åÛãi¨2uê)·æCÃHêsn€3sêó¹ÄÖ¯ØšÀpİ¾{–`B"=bğs`Èûş¯3ò/$
 F»ëTk%ú]Ñ#ã²JÆç›y5)Ûä’µaNç˜z¼)²ËFÁÓua‚F0ÛÁÂq[x±ma/Ëµ…Ôu¶ÙP9ıÁù6£Í„i–²¦}r4®¿ lÜ	ZËäÄ¶¶6%p¬B³›Ï´,2 Ãk—½‰°I—ïé½ÖïÈãUë…¯O~%ÖÚC°‡xNâ—¦††‘ø˜ú‹Â
Yß€Pş.¡3k[°x1İ+ò»~ÂÓ+ÉçBI××~OEÜAêÀ:&üèQÿÈı	Qæ•Ëœ<Ñ± ñÕØ€  Trabalho1/_xmsgs/pn_parser.xmsgs
 û0EŠÙÎØM7tC3/VO{Â´@‘!`!"ŠÒ¨„	_à‚	®Hì)‰¹!o~ÍRÑX*Óµ9¿ù›¼“^ãy¯7[İı™ãœ8n{ª¤®K\¦/SĞÁâJådÊ\úúÍşçµøfÓÌûå³ÓßÛâ8½cï(èSˆú…õØ/ë@ÚªRVP‹~dH§À%ˆ	˜‡ n ádŞt…ì[‹½À÷çÈœÍ¶~!©€L‰bh\¥J°Ø‰.<Ê¡˜©ËƒhÅ € Ó­¦ò¿V®¶˜Y¿ø!Ô\£@}˜:Ğ¶°©‹6^ÃcGÌôŞ	"¥Ç±ÉeÑ¢»0a[8=c†¦MÈÜ€²ó(7ñ~ñe{Ú©è×<½¯õç‡³†ìéºåÂEM%qÇªCêàñğ EB6øËõr{ÌçO‘Á6»ä Ÿòb€ Trabalho1/_xmsgs/xst.xmsgs
 øtYŠÙÎ ·6e3C4O4^÷áK:±ºÇ5\’Ã‘ËË˜ˆé2ú`§UMÊZV‡qß½ºqşj›wRôKú/W‚Àô*DÎ"’ÇIá(ìGâ@AÅÒ»KÁxı=ï:¬­Ã?ÉNµ]ºjmö`iÇñòSÀ¿ª§?O-.?â¥EtÜ½w­{=Kñ)~ç"RzaóåøÈ×Øq8ëj¹ˆÔ{álV? ÌÈmªJ›ûdn:v/x¿Ğ¨ Åµˆ[ª4²øÔŸŒL‘Ãó‘¤ùPCªHñly†’G¤êy|É!HHîƒšR?’‹ ØÂ3×0Ş–Pµ
ƒ¥Ç€Á™#CjM:R	Š8`Òw@Q S‘uGä<¡š&ƒU-9C¡è`W´(°?R ”<Q±0•dØ¢#Í‘¾Jh`ú©Îğyzí[¼dÌ5 üµ½ã\Ì:Ñ—kÿ˜ôqÀ&'£3”{ ;ÑöŸ*İĞ…¢ikP2ME­şIh­³[qeáö«-r¤%Ömà«—¹®5/X²‡gÂ5Æ¥Íy\;úÂŸPx‹J#Cró)ĞÕ®ÕLº"’!Ø9¬‡ãÉ<ö ZqÁ[‡íg7eââUÔTñìûøË×/•1¼¢K‘ğş$vª—€Ùò[ğÏ3èô6šÉ½W¿»+sŞ·hØä-%øş•Ù}u{\uÒD¡Dû;a<ÊaÁÓ7€^ÚKû_‘:¼M@–Òêµ…Ìí«c³]OŠ”Mœ´æ,M†ÌA1éÚƒ($o%¦æ›™
sq–'Ùjú+ZF—â¥ò´Æå>]¢oè¿µŒøSbömÑÇ[=|û™ìgİÏ½-Ï¦^jÜoXøvË~r4ãï›nüûº¥3M&ãÌ@ˆS‚\2FiAÉÏ…´ˆıÈrtşƒ'5$“ëDáqç“9©!Eè!Şsİ2½®ÔUû	E‰}É{ªÛüPTöoËÉÅÃåZ^‚HÿN·®oÇJ»µìK6RZ•®CÔZú"Gæ
a¿,Ósıíêº½^¸Ì.”·ıäD×–¦î[L'Z(¡gZÔB>gJ6w½@"­)•oyZ™oA–ZÙÖî®·ÌQ[ÆTİµ”>s"Ü0Æã>o{øeÛÖáÿyÂÉHdÕ¢RT³ÕkÇgŞm"¿èÁÛÍnï=İtÇôPª¿p5İëıœÕÙ£é¿vå›A»¶åÛX-ôvØæé_öƒŞeúì¯øiôûÙú‡¤¨T­;”è YÉ'Ì€ Trabalho1/_xmsgs/ngdbuild.xmsgs
 R×[ŠÙÈƒ6T33?VMï…*÷¹m×EX&‹@š/àZèjm©"´ I9eïÒ?Üq†a%‡=„¾HQ8ŠH•˜~ûçÓÆëUÁ‹^í÷æîLuo±®Û¢º}(ğŸO”Ùû(¡Zı~=şiÕíOŠ©ÜØ©4·]!—,cmb¥¹rQèL«o0™ĞË&Wÿ•"åGá]âõæ¨¿d¿WfÔáRvn¬xV6I8§Ã'ÊÂÇ.]‰z “XÂ:Fñ¾ŞFà½ÛàÁ¥Ô'Ò]˜8ÔXIg—Ìl…ûä™˜ÖAèÊÁo QU68š¼åšÂ]ÏÊÙÇ&ph@¼õY`TP~»qaŠÒï¦îŞ­ó Õ#6ÒÚ ÷‚¿3€ Trabalho1/_xmsgs/map.xmsgs
 Ùj_ŠÙÍXÎ6eC33ôPEŞü(Õ½9lÑEÈ‹@`I-ªÚRE¸@H”C’{å­¿ñ%,š-ñ6
c	Îg9ÌÂ|‹:Ntsf}şßü[§¯Æû•½‹^íT{´ûhScík·j£óWÒŸ}Z:}”Ò­¿o¯Ş­}Õ|•W{b¤ÒÜºEc–mmÌT»×%k`N­ÜD³–èV?«òIà_Ğ$¦ñ5Eûeà¸3I3[‰¢øŠÂ¸Ù"òŸê,¬o]¨†ô&E&œ%1IİÀŞI»%XFºÉ~jŒäŞZ …aàÊ_'„’ìE]‰NFP%ÜèB,¬lëfn€
ÑQÏÍ¯•„¥êh?=L°¶šLSxÌŠÑßÆ(–$¼°fªŞ×Ññjğìmf×Nóg¿áÎBZÃõdoºßßWp–èÓ½½pn6a˜Af?ü$pÒ!ó" “ÿ’»6UæÏÑÑüúî»7àm02 âÔ¼>rÀÑÛnÎÚ8ÉÛ’şx‰ x);UW6öËÒ:SÈúOñ"YÓEŠÈÂ\›aâ_ö–HV”¡úõä-ã²'b<i›xøM×Œùœ¥ı®õ`oLù è˜#¾6Øø ÓÓ™€ Trabalho1/_xmsgs/par.xmsgs
 º`eŠÙÉÅT7vCB3ôPUï<)Ó¢«R„¶Î¨¥R‘)Ñ
"•+ÚÍÖªõ½­î=ğRó^„µ+â11çÜß‘gÎŸgïŞ?Ûİ¶–«c!ì7ş?;êc¦|ô;Vÿœş:ï÷b½ÛîÁ^>Y~ù³ãÉŸ±YõÑ'Å¸ûufk–i¡¬Uz×Zò†
Õê)’=å[ı£rW-EÉ´øïT_¦¿5Á%Ln*†äSÅõ¡òŸ³ÓG´®t#z!ÜˆLc67ÑGª	˜¯AO‰£86¸ `:"—ê …•VÔ5ñL€*5Áüô¸€Rc]‚Ã”)ÃG>äÄ˜@*=O…{ÌŒ `ÀjšDlVŠı±DbWº¦a¾'4¾ü­ÈòN²’®¾­ãL^,íŸ~,‘™E6¿¼‰Å›Œ$ó'1/áøn¢»Ÿaºv#¾IwÉ®šzB‚^ÿ‡¿ù`ÊúÔ!EnÛ£ø‹œ­\Å…¸f`©j¡bvâ®¶ÊŒ8RZ%û¿bÛbäYäñ'u•§3JP˜®lıÕ¢E©º¹ğÕ+ûxâf¾oÙäû¥²Á(¢À•û:2ÀŒ³Ä–ô!WIrGslšÏRè-¹N‰ÜÜXöãh#9TJMs"ƒ\y¸Ëö9¥Æ~59YH·†ëƒ[×ı°.nlA¤’¦'š@V@éŠğI¶âiY˜ÄÀmtgG.·I’DÔjlilÔ÷@zšĞMæsœìá+«_+İ¿#Ñ8¯[ûËÓ—€õ%0’7©« Êhƒ€ Trabalho1/_xmsgs/trce.xmsgs
 ÃgŠÙÈ´%6eDC#ô@Uï<*ãèˆ ä4!	ğJN¨±ã¶<Ff[WyŒ	ïú»Ç ‰E xsXz*¹\åhÏ ªåhºÑuU÷w?çŠopùO2°­®•”oØØÖ×°¥Ñ#.ËG~ıè¹lîØáàÒŞøY²®~Î¾Ø¸º¢úª+ò¹Iätú)(Œ½,ËU7ã¥GñÓq`:»ıYÀ»ºJëiŞ2~×È·È§2õ>1µzÇgi5H?ÒÒ‘å1µ¿¤«'ê@Ø€©„4áGªlir*£Qìá×–!yDÓP,	1ú«(¬H§:;.¥¬È›œA[íFæŒWHŠY^ ‡‡@|Ğ%¶l’¢p˜èĞß~§ùà^ı€·y– ÌkŠYÑ6m¢©Í›;–·MBX?GÉ®šø:‘=ƒ¡j2q$‚wU	/è¯Fõ… "Mç£ûß$†‘_û‹m|ö6qlX˜ØÌ+Ë!bépVVô®9˜êšnî$…sU)B´û¹· OgÙúmâïzéEhBiÆÀ$ï¦ÒåI‘ª”õTf’E${)@«©<SM—…÷Z›éŸ©ËÆTd¸sXÒä%™ar'#ÇÚnÔ…a™ÛÙÎcõ¬q,ÿ3$ğ³K,²ª^Ñq-²Ò!>òÃ ‡¹\˜K6+o]]wçRƒpÎäË5’2q¦W*v$0½~Rûï:›HĞ_gºxwê™j	^Fäyõ³¾Ñ!’BÚ_`Ş¼‹ëÏ%}2p– ‚–¡s5”ü2È·ã;Ëö²²Ö¾*ŸÛ!ê’‡%½İbÜú°ê°BQæÀ»~n§W@Ö|Væ©yÌAäY[üÛ‹“§õÑÏë·C¡ñ8½~>Wê%b)Ëò“Àç H!i9d¤!~ã¶·m{„ßÆ3Ó¾ßq½#S«L×Èú‚½]‡ÖùÙÈÖ³7^‰˜¤ˆ‰L>C{6 ı›Yqş”ÊWd&	ãğ&x,’Ÿtá*%’é.=sy8+´—Ú<1½•0^oò•‚7EoÏy¾¦é İ+Ì"9”è YÉ'Ì€ Trabalho1/_xmsgs/bitgen.xmsgs
 Ô ‹ŠÙÈƒ6T33?VMï…*÷¹m×EX&‹@š/àZèjm©"´ I9eïÒ?Üq†a%‡=„¾HQ8ŠH•˜~ûçÓÆëUÁ‹^í÷æîLuo±®Û¢º}(ğŸO”Ùû(¡Zı~=şiÕíOŠ©ÜØ©4·]!—,cmb¥¹rQèL«o0™ĞË&Wÿ•"åGá]âõæ¨¿d¿WfÔáRvn¬xV6I8§Ã'ÊÂÇ.]‰z “XÂ:Fñ¾ŞFà½ÛàÁ¥Ô'Ò]˜8ÔXIg—Ìl…ûä™˜ÖAèÊÁo QU68š¼åšÂ]ÏÊÙÇ&ph@¼õY`TP~»qaŠÒï¦îŞ­ó PÿT3Íö È"`2€ Trabalho1/ModuleALU.vhd
 „GÜˆŠÙÏßI0eC24ô`Uî
jôÛR´Ù ¦ê†ïAùİBGâ …E:E,%	¨$.ß|/1ÏÑ	U¥U-WÁâˆãæqó1ãcñç?üÏ¸šx›k‰b}/Â:şÉı}f°Î­j1æ‘rÓ×aeš‚ëøÍ,£‹É~…å)R¦=DÈSûQü:…O‡²³kç`×”Ôò;¬æÙ¥g³è ¿Zæ#:ëhSjì´¦—Åv´Ïõe\’øšgYÂ4U³eĞ›;,BÈ³EZ_[„Çv g­f3U^ƒ´ÀEÄ;¢ €‚ÿÚä¨‚(Ì|zÙ³.s2Ht$Ør2Ÿò~•üg™­ÚÜUŸ±µŸ³C
vrÜ¿ü·c*(Ô§BµËƒé¬B$g4^,éÒÏ’ìg4DÂ8WHú ƒÃ«ø˜!İÃ1	hŞê‡M€Œøí›È™›Óa–ˆí¸-íÆÅ›'hĞ/b»k#	-ñÑc	·&¤Ø ñ®±ş6°‘¨OşÑšb ¸úÃõn+ÖğÛ»V¬hw^ƒ¤TÓI%ÊĞ(ó‘M ªySİàSô±’>Dhæ÷u«	ßÀ0©pXŒ™š¯¹Cå}×ò<™Øç$ÿÃëä”^Ór³"(µF•Ğ"g{ZNÕYñáSç+¨‹õ—†ÃyÜ¤™âûÙ) Ïw#áª
üÂØ>¢µ½}=ş?0ˆÇô9|i+~ü¸oİ­d;å§^Úr·ƒ×ûİ°@Ks›ßHÌïérznEğÈ¬UÓÁY?ûÈÏgUfyOr_»İÅq;}·-Ø-}ßûúI¤aò!Õ‘íi;MŞÇj;÷KÚBÄüTOÔy…%ş[ØğXu¨i˜s’”u5”¯jSX2­Õ\eo–œ0ÈÒ”9az‡+\!„	Lr
±ÌÒz¡İµÛöq\´z¿%Å¼Ÿ9Ğç)LxÖ2X«ËŒŸ‡arĞİƒòI/%BR—1Ë#¨û‚÷[LĞÅÉ¼3Şpé¾èÂoÑ¹st—P'ÛNÈoÈi‘¼…€z²ÀEæ"ô™=¢öÓ¥™1IîûÍÍ§éíìzKÊ›¹=˜&ñ^?N(úd
ê·>è:6Ÿ” ¤£ `gn’€ Trabalho1/Trabalho1.gise
 |LqŠÙÎ…
@D24DòfUïØğso«v#X×Úáædğİcd ãu„&-	’ïx•¾RGÅ‚¤$Úíç‚–ØÁ*OÂ¦¦¦j©_ŒOá+¦©(©š•ÎBäÌJê^ÑúgÆÕ,Ì:ó.7ù}¦gÒ“®æ[Ãù};îõs(:>³xhX&Ü‡§çşÇFf«>ÆÙsøawé%·…‡ïäúóóùTó²ĞÏLcçğ³Ùq|Lc[é¦Ïõ'l·0·Ö?Ô©t®nj^¿Ğ+,Ôã´ŸqÆ©eyŠAakE:Uœ¤P§e—éÍ§~¡ÚÔlûµlÌáYò!ËºÁ½-m†”ñe¦)•‰H‰Ce°§‚UşÂğ6Àb)¤/,Oâ"Y<E»ì‹ôİY¦œòˆ¬Ø®æÓcsÆ$qÑxø3í ¼iÕs&‡YÃˆ/_íùHÕUG˜ã>—„NSÿiXmr!5gJ;(Gt¦p§¶¥÷f¯?ùšm3z9õëyÌ®…ş|ıQ?'ÔöîŒƒİV;+Şğ±r¾ÎÛkc'^ë«_Y¬NĞëéÏ¬íKÓtæ"-DšÇ¯†ÇtØÇu¥·â½ÈÏM‹½uûo[¯kºİİÔŠË˜2‹eNÎúwğí =–ş³U®º•@ØÃ•İ&^z”AÙ~
~Şºİ=ãáZ÷gw\¢ Ö†½ĞÊ¶x ëãÁy§0”õW£ZİRæÜ¯Éš7eÎâè;O9íZn¦­bæ&×Á$µZYÚÈË¶Fğ¯æ’U\Ã‚–à†‚eª[àÁ ¹./u6ªõJWñë+d…Ë ûo»ÿW«*½»üPÆ¡ùà\ÌóùàMÀ¼Ç´PWkvÅ›½cùáÃ8?åÆ\÷R3x„ğL÷öÛîï»^ásöVİs+ì=ÆP9œ†9y>uã‹ ÙŞ~eœÿëvÏa`KÁ Ìó„	¼/SÄş6¦b2™J^ë8ôe4à›5–ãY…¡»¸Ÿc–jZà]Uìkd¦OŞ1)²ìR·!÷nã¡‘ë³†pLÚ©Zõ
µø0¾‡`¦»Ù¸Ä¢B¸qÏ;ğ9Æ˜ÇŒè”Æ}Ÿ-ìØ°4_>­áv¥D5©çw#ü9÷X!»à5iB>P”F€¨0OP,fî3P4Ö hĞ9P<f?s¨#IëÔç5PT9(Êä#ÅfÅÉF"#»È*UÔj÷•´½ê¥}(Ó&Û¶ê×àİ™(Úã•RFhäuRé5rš©£8üª}HG»UQÿàUTéBxR'Êfºî–¬J3äf„}‰Sµ«Â Z.¯Ä~W”hw¿Uç´‚û•^›ŞçW¬=§•{Mi$Ø`/I,ì(J½+-`•âÈÆzør[Ÿi\œ»eÕÊ6	Ô0xuïî‡k·kÛá0=bùæ¢ßµ~›µ;?ü †W–ÂÄ u0	¡T¾„<İ¹bÏeJµ;¯_cd3¥ŒKfeÁõjã8Ê°«a®\ÔËÀ²3{Øƒ„Œ„är"^X/ĞÌHN.Å·ôwBÂ/"ËÅ ½3ßĞ£‡E´'!Şµ‹dT»­şûÀíárfÆ,Üë¹¼YŸØ^ç?øXnœOlD4FÌ‡è Ø¢æ‰÷Wb„	‹?q÷İÇ+Ì{g>&èoà†!aèË¦Êä†Vñd1Ğ#¶=™]ëŞL_F¾Ó|¯d=`SdZW/ıAdèpò¨™Æs·v’h¸›ÄhãøÌİÉ$“;Mç¼¶WÜ¼eìø/û@½t¦ôsÄDö-+ä[^uï«aN³Kà¼ù ID9$S?u»n§mà“E†Ù}•šºåKïwÃaÊ×¦A è¿¼¨öCì\|½vÌÀ3)2kÊ¸ãôx€¶´[Ë²®‚Öûl-ƒ@A}®}Š¿ªZl,aÙMPÓLw•@uJ°½L Öœ‡±Ö®ì¯÷xÖ†:œvÃyÕéÙ>s28Æ‚-ÌÌ`™$m¾¢ô1)¯Î·“×\6&xÙßÈë™"¿Nd8¦™Š¢Š ‘=”/w±¡ ¢·¢Çé#¨?®DDõ°x,=UQPÂ?ñçş$À0èu<É: ¬"¾oóç ¢@äÍèÕ|àˆÏñHh'¤Cı¨j:ÄÎiÁö±àb$l|¾Q4SSÖ8-7âÆÉP…mL4.+¨N{¿ƒdÌ4ğ$a‰šÒH{*9S•v¸ÿ)rĞº°&XüyÙ*âY¼>øòI&y4‡¡“’".çªœåä¤#„j§ÑTPà$qª+*ñŠAûÅ^14ŒáQ¾4ÅµÏ£¡·ñ0ó/tÈ„xş`”BÕ¹0”ÔPôPôÑ<*˜?(_·&ö“ş¾„2ü~?÷¢^ÂtóèùBË>%éîTI`À°{$rª|Ê÷…ê
¼À0GB36ôß=*i‡ª¤Šš32ç|†dŒuÈã…P·¦bcÜä7_I|mÀË.ÛÒ«ó41Bš;âÈjrR¬W­£Qmí9n#Wğkù„¥³ä'æ#Š†H'çTá-zfr¦Yûc„×§Ì[õ-z‰“˜´—.©5idw+·<l¾·w•+1·mryav†míşÂ×Ì-rök‹}ÂßŞ%,F[i¬±M‰‚ÖïBoAã¼Ñ¥?8ÔĞ¾9
hïãÈD3¦­c·ñ¼pPÁ'é ü 	%-]wõóy4ãL"¸¨VÂ´©„ı+½[§×‡×}‘$‚ˆ  Ã DôQ?ÎÀUØ¤üi”'Vé>$‰l,ío¼JY%÷²ıKŠ+MECŒ=0ş_ÈäÕ4ï¿!¿9¯1m÷‚©m)œ@ íR² ò]Ÿ.qWñ€\ŠYñ°9 Ğ‡õ2z©~+dÄ›{Š¤X·Ô?b»ñAQ«à!ôhÕ}DóÇÉÊ?`~xaæQ!/ñÃ¦˜4íMg¡*ıÊÁdº®ß„+3·N¤´Ûğ/æ6ı\ê	É×7†anÕÉÚ‘L%»3ÃÉn#ìû¤$,»¶ˆØ¤)=AôÀ)€Ëì¿ÔDw^¤PTr?@:J›àİC-T4ßì›şRŠPÔ¡jò§Væ_ş‡‘#	9f’œƒBÄs.,qbÙ+Äò‹ÿU†ó g0•”hF
¨ aè›%¿B¼~+Vt.ïÖc0\ä4!€h2€UV‰öPIJaÄã ²ñİ—9Şd9q\+^Û¤P’Kš4§Ñ&ôXñ¸ª¦Éià8+dÌë².""æ$× £‡~€6"î DY&•éñà'vî†…ùm›—]·÷‹”:¿øª“®ún>«Œ ¸¾  ı³ì€  Trabalho1/ModuleALU_summary.html
 Ó³xUzÙÏ´'0uC33O5v_¼ğ¢.‹d€Xú$nÇ&¸èm¦ä{\q†“¶èÑ¢„Ú1Åµ4H©ß{Ôíá+¡§Ğ§CÖöİğxQ,Xs9|o?„ı™Â@Áƒ €pğŠ}JuÛ©OªÅT‡U-)nÅOšì.ÎB$WWÄÉ{5\ËNl>Áÿ€ëznÄ¿r)cæ§Fÿé:íòVé¯Ùo²ñÈÙÌ³í\øDabÃçÆ/:4gÕ¥Yò«ûP –R­`¥€„JÅâW±nÚwj×ÿ:z'Aâ<K3òåi%:†*xÃzàÃŞB3¦ç@5¸·¤‚¹¹«×}f“ò9‰Ó·>Åí}N¶–y‚ƒäºã_Ñp˜7fTÏ:N	Ô&ñóÓ¸ÂÛˆ“§óĞ£ÏFw9£²Hé{@*B®Ñr 4í•Â·Ÿ:õq\
±ÜÔù™t¹Ëëøp¸Kxì:#ñ%Æ¢ô"G‹Uqê£t¾8t`mclk!á.Ó(yZˆ â1Ã5ÙÄ‡N|›­±ŒÔUÌE0›~õğê*²aäw–tåYâ¡Û‹
T<qíñğˆX¡'Ã‰‚SQëÎ–ö3Öÿ]ŒZvñg„‚üCbètèKÚNÁ'Ğ™ËçD¿ Ü²&ãÃ@n–•b$òËöÉMVÕgpËÊ^iã.#}âºóñ;Û@d™)x²ëÆÔê“ªğC}´™èâ@ÇOnÕN'Ì°Ö¨f8}şÄ‚_rôF‘ß©.x5jyÇ¢èŸší2éÒã¸ÛŠØg½wˆÿDı«ŞÕq3{šÓE &‡“õ3MÍM)¿³Éw+–Úóc¥Øèô	ÎğzcÅ‡fw­©å©q‘8‹ËïyÇ1d`€¹äğ´á~ısR:¡Œ‡ş‹ÛXİ.Ëä¹E
J’ù„œpÔJ,Ösıñ
ğéÔ¤€FŒŸPš»ÕïöXÈÚ¬¬U”Wè…U%S£Ô€?ñÅüÂ°W_•ÜCİX>wİ&\N‹¶Ö ¨Ğd´¤_t«j«Ş¨?@ŸSÑ*‡Îò8ßW1xÏ›æ§Áèw•4Å·Ç€fV×i(v[xÄ·}Gc”}U)BÓçûyy}Ò¾¿\‚úøeëbµ‡Í®Uˆ›&ÊŠ¨?Â¶•*[´SYÖCà˜Z®|§ÁFXÊG
Áóâ#“ßFËJ–?ÔŸ‰egÌ²3ŸóÚìz+ÿß?˜=3‰´ršÆ«s28Ù³ç‹k²°µñ°©2áÇòFS²¬åBüœ¼r‘KAÆî	‹8¼–Õ6ï.‚‘ åüö¬.­~ÏO]ÿœ¨>|¡n:±àUï1–Ud\è=Æ™â®{jiM,-™C“k<Éì…ƒWÒ¹ÚÓ˜Ï}†æ±úJĞØñä]-pœPfq8Ío7ÎIŞĞ"i…ÙÃäj£ºº$dôÒFèE}£HVÕqùÂ»Gü`{Ål2æ‘H¿Fè£Òµ¡¥hï«j_Í0eÔuêiU†˜ÒÈ«×ÔöĞ*ŞV0ƒè_Á?ˆNæÔÿí~òÚqöÎ–)‚ğÉ%„¬A( „’„ë)¼Ä†’’ĞJš_’Ó3ÜúH4CBQV†»·©“‚$ÿ‘LmcàƒFÄ8äm¥éèóƒqƒP¬°i0bDÆGµ3œÇXaĞ¤©–•{Löµ$ï[ğ¿dŞÊô”îW7Ãu•“0†Oçä)k¼Ñ±aŸÍ5Möpœ|Çİ~H~å!÷c³˜C2R³¥ºÚL,øC.°Z{MB{ùÔ^½ÆÂÃ¬vlc6r`ÉgDÂ¢Ó1AÈ2ãØZ®aûİšê½Ûc	es ã‘IÀ¡r‡Î+öè6ë^Àû »#É¼v7Ú·‘Á„6»áÏ»a	ÿı3&B²²æÄ]‚–ès†{7â+ÿcg#é2Ÿ%†ŒÍÍcnuı67h@-u[‚[¼€mK}f²ÿ¹ò
>Ä¶ø@O[ôEº2öY,ÑÓÖÿO€¦¢Ã<~S±y¤Fär]ËÊ=1aŒ?7‘Ó(ç1)¸3ò° –1ÓÍ€ Trabalho1/ModuleAND.vhd
 tÚZ=zÙÈ}î0SC35ôPTş¯Egç{ñg…íIoÄñ´@$–‰áEæ‡[REC‰@šrÙ¿d´âmÈÅù Qtb6ÑÌ%ÚZ‹$p¬ğ9Î€æ©ûøz¥Bº½{ Vë$ì—Õ¥*B>Y«15xûëÙ±Ñf·üªóÿ«ôª×±5ÅäH*,pkŞ¸KŠXÑ¿ü³ç·ñ
wª©[ kö/Õ¶™¼Ğ3JkÑ~„) 5¬ZÚCHZ¨õì,NÆ˜<4áìB¢Bš	p™œoÜ²ˆ;õkbMÆy^ÜQ%ÊæÔ>8êo$ÿïaèÓèÁ+ÜX/ğ-=,ˆ›Õü¹¯yáîíÁwÎµnwíáÂ*9³œF'ku5û%ZKŠ3cÈtq:&Gˆ¶¯€=”#º¼…ìa–Qû`–ÃZ’}¢fTHdrbÇŸü†Ë6ÎÊ¤lí&u‹Å{–ÀÕ¬}ù´kã°h’<… uó±Å3><pbµC}>WüwQş™ğşÆmƒöwRÛ`Ixöë¿àá[+.Ñ‹—×|/İÍİR°¡èYUşÚ˜µ¹Âş[ÕÊß´ğËÔRq7Ğ„OíÊÄSá:ô}!¯z rƒÜÃCÕÖqgpÍ2m"- $?¬“2€ €      € Trabalho1/ModuleOR.bmm
 ¤ŠÙPìa©2ñ­ !Ê«3€ Trabalho1/ModuleOR.vhd
 tÚZ=zÙÉí0TC34ôPDİ‹…^ÉšÆÔyƒyšÌ€Û?ˆ š`Q"Û0&Kä}õ¹*ÊI§5@ œ0„F®®RDòfÍÕY7wGŞ+€{‡Öûü=Z±^^Í°«}¢vL
Ô•!£,õ˜ˆZ‚¾}€‡ˆ µfÅ¯Ü^Ïêèê¼3“}§R‹$;8.ãšDpşíû2¥uáÜ•²'=íbüÑyî³ÂÍHi«ƒ4†µ‚·øhªB=^&'kL:€ö¡Q¢M7.)¤ËÈÅYD6ı{ÅÔ“q¢F7W¹ir¹µ†º›Rwï°ô‰ò`•ï,88–ŞšTOêşl÷üqvuá½ãbÇòË÷1bßh45‰ºÁö•É"ı­EÉ œÅ ò!.'IùÔu‹kö ñäÁÕå/C³Ü	‚[jZ=÷	ÌÈ”ìTÅ“F<M–m]”)JØA´˜µÔ÷¤W©m[ß{†°d$!h_ß29&hÉ‡6vélQ•şãİØT¦|?’Iûõm¬'^=½öûÃ ®§i¢«ê»°^Îdtt‡ üK*ÿ›sÛS‹¼oáÁ\Íùogn7B§D¹™hà˜~/OÆ÷’+cÇàhßóŒ[³ÌÇÏ|0 «Ç¬3ï³ fz´U€ Trabalho1/ModuleXOR.vhd
 tÚZ=zÙË{ë7tC26ôPUîúxVö_º	@¢ª · áµ	j8*ªôÕ,ŒTúæ¹ EzjU_dD77dù½o7ğfşşµo€g‡Ôşü=R¡]^½+u’vKêÒ•!Ÿ,Õ˜ˆ‚¼ÀCÅzöl]%VÇ=~­êµú&1y'J‹÷Îâ–4oÿª|ş]ùS¸PmJÙsğbı‘iİæšPÓ^ƒèBšZÁ[ChiU½…‰ØÓ‡NÄ*!Ô)¢Ë„Èhdâ}Ë(ƒ¿V±±v¤Üg‘‰ÕíÅ\®mCÓ®¦òOÿv>¬½Å‚ÿ§¥‘x¿—5ïL=ıØ.úV­ÓaûxpŠlç‰ÚÄİ@Î…ÇıÒ­%Å ™†1Ü@º8N£® b-«ä„_eî¯!{˜e”|À˜%°Ö¤ŸÏh™•LXóâ¿ÙfÑûÙB”€IC]@¿’AÅ|ÀÕ¬{ù´kã Ñ$wBõó#Šf|x2àÅj†ú|¯øï£ù3áıŒÛäî¥¶À’ñí×‡È:9ŠÙYvŒ\½»ã~îc#› ;CĞ»YUÿÚšÚŒ\á¿ùr·ñ¾¸İE'}	DşÑÀü¬E>¯GÚ÷ª(=ş†“×ØqwriÜTî õA3ìş ~ETÈ€ Trabalho1/ModuleNOT.vhd
 tÚZ=zÙËxè7tC25ô`Uîäğ­ìç:	À”\\¡oA@µ	
…U^š¥‘€êƒbqÂÓßink’W¦¥UğÆ¢#y»¹¹iäZ÷á˜ÛİÍÿùbÏ­ùúzµbº½›aVûDîÕ©*BGã1µxÿ ‡¨ µfÍ¨9Ê½Ÿìñåx9§‘y§R‹;=ãšD{…ñäÎBR5Ã¹+d2O>íbüÑjÕç…šÓ814†µ‰[‚~,ªB;ÄLNÖ˜<5íB£Dšh¸L¦F^3<¸†;õìZMF‡İäq¥Ææ”:p%ÔŞEßÎÓÒ'É×¼°_á[ziQ>×óg½ã‡'f¾6,¬¿sÉö€ÑBX›¬O´®Iè•j.%Aæ)°Âæât-8 m~ğ!Q0'tyKĞÃ,ÃçAôKaŸå£~àó2%:®HXôb¿”Ñfšûèø…+ai0)K¨K÷¤N+Ô¶„­ƒ¿›…äæŒ’G°¯œ×ÍğfÁŠİ)š8¿ÜyxÉŸ‰ ÷;êc`/<xë·Ş
²¸Vf.]»İ~î|™D.`­B­e_ùnzjuáÀ¹›ô×œcÍKÑ£¡q`hÍ1sÙz~IÇ¼?¼_¡nôt“„¹;uj ZY¡
3¾  ÑÏ|À€ Trabalho1/ModuleALU.prj
 É,PzÙÇ¦;$ QøPDŞáIÀMŠE8Jz½JÿÍÉÆó9şmÎ'«P±ÅÎ†2›à¢ìÿ‡><ªrË2DˆAÑ?Ö 4KMß€ #Trabalho1/xst/work/sub00/vhpl00.vho
 Ş©ŞˆŠÙÈAÒ0uDB/V}>ÀŒ‹Æ440E„VC ,$FF Š!à P,a98€DO‡(dV¶Æ±±±±±±±©†æÛÛ§qSüÉ½3áíö{·s?¡öf{ss7Ós?zg·3Ù3”hÕ³qXKmÈ·•ùà¤¨|lyÙøÃQ›ÅÜ W7ÖĞÂ–Ş[0ØòeC›†$]¹¯^¿Öm<r‹c iÆúi)Nz²¥İÌ¬<È)Y?à!RgÕâ´RÈ2áçÙÙy½€QíÜo[ê&.j,GÈfW~_h¨éè!NÅ‡!õäÔÙ€:Ò#w’ÀB»hœ š1tpÿ’Ò	=3¤½²ºñ™€£†:)ÿ øûİco{=£ÑÂ	<ôx—Ïç¯ÙÌï‘ò6¸Î7rÿG£„x%ğÒ_!	t¿¥€æ/qjÌÿ â>c)[¨ˆôp‚O¶$—$Ïè1ió˜&¸…­ â|¯i¤¦«Û²ÖÖlîÕBŠu'¡a$!§9EY«fÂ”‡Eqé!*º<èÓT¨_¿-QHm³Å½ï8¨¸•xê_‘Ô~ƒU“1lYFªH×HòÛ*úG•³Si§B”ãäÅüÎ€ìüoY?ªı Úù4€ #Trabalho1/xst/work/sub00/vhpl03.vho
 Ğ æ>zÙÉ4¦0d4C/UméĞñB@„!

 œ¤QD‚‘pO"ˆQpw"r:ÄR°IaXX~°°°¬,,,,Qd{³¼7gt¨ü®z·ÇáÚŞş‡Z±6¾ÖßØ›ÖóßÊğ÷¢°™Lán1·o¸¥™ú Õ®9ÊAÙ;D®j÷¶¦S1ÙŒ‰ô¤”¹viB… #ã$“FÜyÖ‹ºº–ª«.p½1Éhé?á‘ÖGæüå ıÛ›w‹Õ„Çô¿HWÆu¨ËÿÈ¾ì^ÁaÙñ›aÍ†4ñŸòáş‘I(4WmŒğá9Å-Ñ¯ŒQ[Zò|ZÛ¸¢QŒŠ‹æ‡ìÌcÄw¯ÖbÌ¥®†LQôëÅîóàä­P'cïşƒs)jÀLà(†ïËqäQ"`°5¢Z=‰ğİÆJxİêfò.Fvˆ…5ù•Ak"*Ø©ezÈOE	V‘¦Ä–B…tøÓªÁ˜HA·M@³şÜ—=kl†Uı+×¨YŸã;SçQ:ê`j–C<©U_•nCxÿ€¢öG“?¬ H7Âø€ #Trabalho1/xst/work/sub00/vhpl01.vho
 Ğ æ>zÙÌ?¨0dCC/VWÓ¡ùBPBŠ
…	NR ‰:‘q		
 !EÁÜ‰Ê@èOÈ¥@VXVXXXXXXXY,,¹Ï¹¾î…'ˆ´µ§›¹¿†÷_æ7«V7›øûã×š·|PçÇ¿ „DÍë;vÍ*œÛ ×¸ï)#OåmŒh9­âØ{H™oI>‚T“ß“+j”X±õE4Ú>uù®¼Â¶ª¬ŒÄ‚fu:Ë!££4¿DH\E§'Ñ>ÄnN½ÉîÊcû9MìšÓ#× L¯d°Üä[0aÎŒ$øê‹)DNK¥‚õ±\bG:¥º	«Ã‘(,­}A-rö tbMBêFø$O˜ÇppbÅ&R×„äBœöüÛØó2u/X'0_ĞàÅŠL¥«wÄQ
aà9Øâh05 Z#å»’:|İäKÀ¹Şª…6:A{¢KX©eŠÈOI	v’¦¥Ä×B…u9TªÉäTÆ1-ÓT,ÿÇfµ·ó!‡[êwş4Å±eN•T®­ÿÈÕ3(åJ«ëóá|Ğ0­ó?±„ qÒÑk€ #Trabalho1/xst/work/sub00/vhpl02.vho
 Ğ æ>zÙÊ¼- UTC/Vol‘ ¨0F†‰CB"-
Ğ×!¨*E;T1wuš˜³dˆÖŠ-àÚ‘¡übØÚÒ¶µ­n,önû’Y?Ğö|}Ì÷»™ú\ïN÷ÏÎUÎ~a©“g ã5‡opbz¦ßÈ*Ïú—V§ó‰MÜ	°xGeÑŒÜy%Ğ!du…Òjá—œD+ü×oyG²^ö¨“Ç¢ã1ELª_™<rIé]7©Z:NÈc]ŞËiö©œ½ş
)ğ*¢¦NÂ«wÔ/Sfö¡7èì'‘¾3Şs©Ò3éáA ˆaÄE^ÊxUÃlZqóòÔ€Û–ºxDM›e/Z…¶œĞ¶ûÅêÍø–îs3Ã”·ÿ¬EÈ:+“^P¿™—«Bø7«6ŞùÍ}Q@ç§¡•?„ğ —±/€ #Trabalho1/xst/work/sub00/vhpl05.vho
 Ğ æ>zÙÊ€0TD3/ULqÃâ!(!Fƒ@ !DQ©MB	“à“H"`ÚQƒƒrAÀÖ$p ÖØpCaÁ‡ 4%æ'ñ˜Û†™Äq+Åu—ñVªó‘UÖ^ee«Uwï+¥
ø©Ñ!ÖÌûyzˆÜQ*¿¢â‘ÔHÇ¥ºAàD~œ§ÃÜıª$Äšö²•J4·,Í›?Xè$á¨ì#…•.°­:– Íë†H1†jÛ\Å§™÷z°Ìˆ1’×Hê»Sì_	¢ÒÏ øe‹´âŞ³¸ÀÑÓ	/*±_¼3Ï”¡ñ|Ù³ñÔ
#[u¥,‹pJ4Á°üÿpôï—oƒ›=áÃMfñyKä(‡½§Ã¡¸'*‹šEÂq¾ŸM’£>®ºª.÷àº3Òª¶ã"«v®3m
è¡Áu“íIt,4Ÿ2l9&jm/, Cÿ!1î¿ÛÑ`v2Õ¢›ÂDÇnâ}J&Ò††{ƒPĞ¤ºõ–è_œß~Aú@îïØ6?¯€ ¸@0€ #Trabalho1/xst/work/sub00/vhpl04.vho
 Ğ æ>zÙÉ¹+6dCC/s]  "!JGP5Âˆ ¬‹„€P@ˆSÕDÃš;‰Âa:H"ĞH@XxàÅ!ád¶U/”É\rGİÚçI,‰kzŞãÜÍ~K˜×é¯Ö½OÿªÌñ‰I” ĞFˆq'OoÀPn‡=°F^äsoàhO3…®éêäğ™ô˜ÚÓŠœÁ7Sà1„Œ6ÆØQ—ı{öû´AmßL‘Mjı­Á{WÂ*>°[}ÑĞÙÂj#‹kÙ­Ôev¯öŠj4Ô†A¿°!LvEv_ø·æù°¼Vyæ„â8~ã×Ó™úuOŞJ,“’³.Êƒ¤é¨^¢¼“X')Û¬ñ¹º7+¸ØäIµÙJß?2ÿbLñL”Å³1 eÓÒ~«t?c½t˜czv#8øR Q??® Â»Ï€ #Trabalho1/xst/work/sub00/vhpl07.vho
 Ğ æ>zÙÎ?ª0dCC/VWÓ¡øˆJBA@¡¢)ÊD  D‡$\ô$@B‹ƒ¹”ĞŸ‘JÀ¬°H ,<°°°°°°°°¨E‘¶sîo»¡Iâ:–´ñî=İ{ºü‡1½Z±¼ßÇØ½ÜÅ»â‡<=è .P6˜Óº¸Š%7ìÅ®¹ºHÓÙ[­êö´’.C²_Ğ¢4¦I•¯N$HÚ!GÇI&Oœï5Ÿm®¥ºÊïL'ÆX¬Ÿø"BÂ){·ˆ‡ğ#fuîFÍ¹h½²&;^!1û/áıb»rã´@ÁIá=Õ&qK…Œë‚;øs…©	§Ã£”F†¤@,òíá¤1&‘Fò¢ú‘çÀU«Ô1bsp³BGr
!>cTÛ·ó¹ :—¦{àÖïĞ`Å‰ÍÂÍ†;ß(„ğKpãÀâh/“4²F³W$~xÕäKÀ¹Ö¤…EùUAk,**Ù«izèPE	vÑ¨Ô–B„ø“¬ÁäDÆ0îTP4Ë‘YÓùŠÃ¡{KÿaÙ´Ÿ2‰ØS÷ç°5Éù7S¬¿"ÜføC4Í·#q?¦ê «å~–€ #Trabalho1/xst/work/sub00/vhpl06.vho
 Ğ æ>zÙÏ¶" dDB?V[]a	 D„á80 OÁp˜hI8Nq6c /’2n“v:˜®¿êğEy>
ø3ÉğÅğW“à/›š¶ãšâ½°¼ËÂş¿Åg’ÕQWe˜_ßAUãŸ©  7´?{ìÌ¼_¼`mÛÈ˜¼ÎXŒ3.›E¡-³nõCvA@ym³>Îtz hÄß¾éÅxş[ëº‚Â’cšy¥}–MÇ³ÌÉu~'sáËİ‘3!:ÃÏO_‰ş,ö;³MQĞ`F7J2­yB±Ÿ2Y¬§ÖaÉ”K8‘Ö'Å%…j¬V‰ Vÿz!TŸ%^“lFú‘ßM•Ğ)‰9Pï&mıÁA‚b5[™·3Ê+Êl¿Í~ÊU_/@÷õ/‘‡šAî“ Ñ¼  X²¾;€ #Trabalho1/xst/work/sub00/vhpl09.vho
 Ş©ŞˆŠÙÏvê	0†DU3#òP‡ç;Î±ÎÈŠë±--e(X£}qŒ®
uøvÆuÆì:ä•®ºçdn1ùŠ‘GQGB)j/“EMBj!EÔ(‹Õ/h*(…BqQË£)h˜!E¹›Íòïw³üßÃ¸Ÿ:ù¹¹áönæo7sŸçÛ™›fî}›¹¹Ÿßno9ø“oœ~ÓMNù¿¸ÖĞßº¾+Kêâëİªh)üXs|êKš»äl8÷·ñ®Íb{ ×ö‘ƒsÁ ·r…zòİ]ƒnª9»ÈĞ'Ó–ÓëÂ\Ã&q8xÄåQÓ–Nlrt £’N±ïûR¸Ø§;Í­~)+3Éoœ“ı$“BqWL1²Asr‰Ú†MœBz™¤íÉ$IDŸœí-ğ.\ù9™DçD'õÏ'¿OŒ÷ı¦Ê§9öóERG'ãÌ%ÑÛ¼#“Ob¡oÆ Æsó‰)>ô²SD'“(›ã¦ñOâb#Ñ±=:f»Z©(°ó¸ÂŸ'gU«LôQ=qSUqÉÍ3zC°1³QlTÙğšî"lFÖ:×İ„£?~ˆ-¢aº¹{¡‚©„RÈV`n­jñ’KÍEêƒŒ­ÒÌ,K,1°ÍO”S fD¬Š^ÂÕZ­	ü)Â­çkPò"ÛP„Ù@Y‘+"¼p]ÚªĞz²ºÜÕ¡YĞ,/n0®îam«S–´Š$ÈBUP÷¼‚Ç3A¦‹^ÙÎQ³G«šQÍÊ¼Œhq|©˜Â‚VY‘+"–AJ-\ãÒ(8ÊĞ»Yç,1ÁÎÅ’ÇÈiJÌ‰Y½Œ@Zd8A•¡|şÈAY££ø*.ÿŒùYfD¬ŠñÂà-2	¥VW[š´+!P˜cdœ´b(Ó¨2”œ]öÍİd¨*ßºhSñâ0¿v¡¼{¾ÔpÇ²ièDşÕ Ë2%dRÅc>Qk nAfV…ß:@7¿˜èšG:’†~e™²3•ãj-2	ñUƒMÍZ˜—k4áHŸœ$ğ®Üä“zßÑºi4^7 Uù<lQ³ú=ô6ÿÇcıYÊ2ŞYXx%dPÈ)M¯–ßâHqâĞ»ù`n~ø;o¹Æ7}ÔU$PB)˜dDÂ({
SiMR0ƒÅ¡|øy¡ ŞöµòÆi2–dJÈ¯* &Ó ’²ºÜÕ¡u0ÃË4¿–Ô£cjO
gWq(İŞŠoÏÎÉŠOIOİîrA`P–OÔl®~é³Ò}‰æ_Úø¥+ğ¾`2Ì‰Y3K~Z›úÚ¸I<Z'ÌÆmñØà®£ï¡ƒ,È•‘Cì[Š›BÕhÃ…c«üËxsUnVGß¤ƒÅeb1ìwç7õÎ¿ 1Â4Üñ±†}àe™²'Ìã0¿>hdZŒıwkZ:ÅÓúËÜ,@;ÄŠåA¨Æšâ§¬"Ûmìl!VØÙ[SUÃ³L1›4ï	Bp¥ø.y·_zFŠNÉ>i‹Ã—•P¦h|†ÉŸŸ9†·nK8o• 1ëeö1BdÇY‘+"†bY¼™cpÒ&x´.Ö`y/I#ïèî=àya™aÎ˜„?¬‚v¨Â§‹Bùêé$}ğ|AÎ¸Rlõt’>ê‡>@6©´ğä£+éDë±#çxˆH«!²åâEz³¸ïe3ã«J»;(Vs!(ùàNÑSéFyë¥ö°ÜU6}ä@i¡ãíi¸|Òâ‚‡6~#‚j´~—_N‚}<ûV0È‰„PÈb%½s oÊHqâÑ>nd<÷ú?K¯»í^°p´Ã%+"‡±ˆ@‹O1„-æ¦ bœÜ«=@Í]2Ì‰Yã…BZx	²VW[š´+!ìš¬-+ìáùUğë¢Âråˆ	±O5T"ê™ĞYô\}#‰hnjwxƒ1£,È•‘?3ÒÓëZE[[!DsÏJ´,>¾Tf¬Æ¥êQÕñæŞ¾I”±ï(4l	ç^ğs€prùw¢D•,Ò¢€ï‡Œ‘?à<Wdj×bŠZ6UßšË½úô°7LŠß§,¯ŠÎğO«!ÙñDœ{æÇíP‡ó¼ìÔ;#tè£
=ô  ÿ2ƒùŞ	ÿÈßŠŠ<¾H†0;Á=LGeæÂsÒ@ñ‹ùJôtîÎª+Mô.zNú4Å }÷¡ã&‚ƒÎïı5-}Fûê{"7A´QÎë¾†¦t²§¢«W½ZgªqÆP%î£Áèh=1ªé SÓxµE:„rë,9ÜÂiÉú&œî§ÃÖ%9Äæh*Â',l‘N±àe@áéÍ•·(¨xCÃ«îxE^8-íĞ“­­ŞàÉù<¡IYL£Ô•·H©r…×P
¨©Íœò@ã”qUït…i¤+Eæˆ4~"‡©+(
z•…mÚ*§Ïº<îœ±ÉiÍ¾;«qˆn÷1‰mNÜJ%ìnëHW“ZT‹úTJ“f÷vÆô»ÛJúäí=Y—ùNAêÇJß•ŠO´åQÍşsªÿ,˜rIçé²_Fí½1ÚéJ]˜*Ô,_æmSˆÃ‹Ş<ÛzãğÊõBÓÖI+["·YıïË¾0G¢NHzFÕ±Ê6tO±Ù:µ”k4{V-Epj·k;tN˜Çò4;tÍ	ï-§ó¦¿ï²İ=	,1Ó\¨±·M|ƒË]öÔŞ~¡…sÔà9Hn‘²QÌ„ú›â<Òºç¬œ…½¸Q“O½Fsæpnu:
L¯Ÿ´GâÀ%ÎtæTÙ#fŞÉHË%1T°Ëi¡í.ª‹ë¿m ãŸ¶^œ÷¿¼ ],@h!?Ï0)>Ü÷±Æî‚}ÌéjÆCôª›Jä[µùƒi¹:/Ö‡ıSJ¿úÎYğC
cQ·:íïB~* éjÇJUM¥	àÚ è£óó›äáÈ¢ÊÃ÷ü’Æ£®vï†ï~œ`yŠÁ)U6”'ŒGjì-£ğşz}§ıì°UoõTALjİæùª#ö´4AúÕ‚ªm(O*]«ĞEŸ-@4ş@Sp°ˆ7€®-X%*¦Ò„óıv¯À~vYà¡äT9S )/ïë¥á–afKV	J©´¡>’¬ EŒ¾ÚšEzü
NôSóíô%	ş€ëú–ğ‚64{ËÛËš<Š:ÛÛ|#xïğp(ö¸U»ÈØ•ñèìïãy‘®Ìi_$šûM†òá?Cg&èqø‰>™8O˜ÇÖ«Î7†ùAıŸZÑŞj00coî#_Ü.íÃ[¸]×Ø?•µİíÔ{{h0ié¦cMqº)úÊ´?³„ 
ş6Î€ #Trabalho1/xst/work/sub00/vhpl08.vho
 Ğ æ>zÙÈ¼/'uDC/sl"AP`†„Deœ
ĞÖÃTˆ£'U^Ñîg&¬é"6¨ ¶55£ScCSğÅ²[*Ÿ’W6I½İ›:Idøwƒ7sw=¹ïfü—}ã=§ó3ÿú¯{ã–  3ŒğàNôA©Ü¶e¸¦İ¾ÎšfËYÃÓ+©á+å1¯£9BV—¨bØ-]4(Iş}3ö{óÁo¿+å‘Kfõ©½wOº>oÛ}ĞXÀfk|X}¥Äevı~"›Ö-	H7l×p¦Â»'ü[Æö>•ø¡¶FÏØb8òaƒ=J¡ûI=‚qUa²øNpœôËĞWRRäã;U]5NmšÍ´9HöbW![æÄfOëI]é’µåfMMª5EÓõ9ÓEu÷6°Ÿpï¤ íÖ—p?‚ò ñ€ #Trabalho1/xst/work/sub00/vhpl10.vho
 Ş©ŞˆŠÙÊï~ UDC/U[É‘ñˆDDGC¡"‰Ba!	¡±c³Jº!Œ¸Iƒ’bç„GZºßƒ]Â;„u#ğÇá™w^]Ü¼š§ÈĞfçŞ«ú.×‰Ú¢Õs…öëÀ¯•J2qÀ bìĞoÁû;°`ÚúØ ¯—!S}Suò"?Å(°øYÚO5jUÕã§Sr¼Ù´'‰NŠª\LBëkYmÂ{QO(Laš¿Ïm®q	Œ™øöõQ™?ËFÊ}Ö&O°ŒÏ<£aĞ¢Xeƒ¬ão3ùÄij
KËEè¼3Ó¤JH’QG9J‰¢8qRŒn‹°V=±Ét=ÅÉß$Ûzlø‹G½O&úè4CÎ‰“„‘°ş¹€Úf$ã}•4ÿ£_"¤İûÈLõ-³rÊ…JLØvn¸ÚœÒ¶·z«©Y¥º–bTGO™zØEı@|ÿÈ¸[.CÜšs-u˜V®<Vºš	é§a=)$z»Ú^ÁüõÕ€f~R?Í¤
 ³ÇÜ€ #Trabalho1/xst/work/sub00/vhpl11.vho
 Ş©ŞˆŠÙÎßI0uDC2ôp6×9Â	
P(m"sàŠ$J"ÄH™!: šé;”|Îô'@
P(Š"€H¤°°°°¨AYd²Y,’¾Íé»¹¹9døv§Ï·ŞÜÜÏnng|ƒÙ¹ü{73İ½ûËsøö/oÅ$_1$Æ5ú|–nÚ?³{¦,;¯üË0oÛ•w6TK	·©¹mø+¹Q Ãú£Ï¤¡ÓÃ|rÓPühÃ‰ìXîbóš[ş@?ÕîWà$<Êzâ”œdÆrı PÜˆªâ´|½Ğ~?økgp&×œvN˜Gîm1¸Ú]u òëÎèÊºÚhm¥gQjr$a¥ÎdMX±=bW^…Qàş&bEõ¿aû@dş²¾AÂm;‘#ÌE¬G~ Êìwˆ¾çö3t€Ğç…w°C„Úw"U>bÏÄw”=^VÁ<oÂcN}ÏĞ{ÂŸ¸&Ó¹]ù»ëŞ]Ú7'ˆ¸­ÆrmTzlúG‹¨ŒX—Lk!LˆÛ ¤Ì˜ÓKAMg"¶\ËÓ9€º£`Êt&­½G^ÔW·¹/
ÛôO½AIR÷”Eá©í4ƒÂgüG…rûÏ¶}_&B“sô{Z#ps£(lİ·]%º°?ÃsÍ‚f‘ºµßûÒ!špUy›³™µ¤eØ³aœûY”Ü¹=ötë¹ªåD0i‘›šoX³n›£{lFJ¿/xUEJ¬o‹F“åFOÒüU‰¸z¼tæÃ®Wt´Ø@İ-.JsR©»úÔšk'#ƒk:r0š¦Ì5?¦Š Åõ™.€ #Trabalho1/xst/work/sub00/vhpl17.vho
 Xn=‡ŠÙÎµ" vDc2ôpFÙe­şaKÁ¡J*RÕl%k¼’Ê¥¶YAõ*CÛd,õm±–IRp¡TD¶—‚ÑáPx4DxQ‚AàPKx Î(ñ ñ½Ÿ»»77ø“ßQx_‡èl÷w?377ÌÙñüósss3s<Ìıç››¹æ¿qTæ¬B`fğ]C~mh‰X‹•òĞïñá©ªğªÁühëç±#9|³lu°lı½VèhdßŒÒœS]f~lµcÁš ÇÈøgÆÖ—\ŒôıÊlĞfŒôL¢·l‡qö76Ö#:=Æp ir&&bUÜ~Æ?aœ0Œ¶bôç„ÇC$Å¬Ö/-…ÀÄæ‡Ú¢9,Ú>KWÜv&sÃŠã‘8¨…ÔÑgTî²Ó/;GZ™­¨¢0¦
’.¨W&¢}D«Ïğ¦¢J£ŸKå“¸“ÊE0ÔP¸ ÍÓD¸vµîoXÍJ¡|´WùOÿqlmáêxÅ¾£®¼ñáMD•!?gî²wyˆïÓº(R–ı«½‘2Z3W{”“R/óÁİa-èaD»í&3‰I[ ÷üRUs}ÔĞmÑİ%w¶Ç…5T„ö^§ÑÇ“RP‚·ˆ¶jÇx¤Ò¥0°L`ávZµÕ*8	|iŞ“Ëµ‚İ"ğÒg	,âšXä{Îcıó ÷»ä<­@^ÉÈ‰sÆüŒØ¨²Ì‹œ}	s¥8Mğ¨?2õ#…tåõšÇşÓm£ã~#wè=¼\	jJÖ^Ì´€MZZ‰4ç]bXSÚã/ğ`ŞÁGšê‘ïšO;4SwÉî¿¡¬/sxEïÎ¼qFx™q©ªŞ :;˜ÚÂ'îJf5»ˆõ&Nb®¶)û‡º4õÜy‘ÊŠîŒ™†Ó›.S¼	#¯7‡pó—È_,Ì…Æèpa\çÇŠd9İ©Ö+í‹f”ÙËâÁUöÍ£²™o¶fM‰*fD³)–d…2–x¯öİ®•-|Ø«çER·&ßJ¸Aª&\Œ¦2b<xöî›İıñ°¨~Jo?ğ§ !VÏ€ #Trabalho1/xst/work/sub00/vhpl14.vho
 g“DƒŠÙÌ{ì dDC/Um“câ ¢""<QPt‰‚1‘ğ‰#àƒM5›	4dšÏ$œ‹Íèó^G’=¤èôz#ÉèôÜÌ››™“vAü†™¹w•••y—¡«²ëw.êü>«».ê‹ü«fç¸8ã­‡|S¶×ÃÇØãY9>µt6g6Ğ“‡Ûa¦z˜Df¨ï€Ô5äH¯QióÄ\¹Òt{·ïØÎßP
ödbA€íìhº×}w83™ôªlïÑê-»ŒGbÓ2Ü&‡ÈM˜KCº¥E§>^÷~vå,³ÆWŞÿ®ÍY„•şÄvÌ\ºˆÿ·‡&FiBÌ¾µ1¼AM™rDI¡†ÜhÜo5uX>j`V`ÆG´¼íq›w5zA.g,th¶1Zä±50(m_»ÉÚLT{Å&•ÃR¼’xÀksOú„Æø·ÿ qúğ ¹œ±ëbŞ´Ê$Œ±°cáÃ‡ŠÒ¢Ik¿òË)V˜ñÖVÊ*îâ±%­¹%°rÄ´SÔé	JÌ…Ğz¬zKå›F‚”ÊJ£õ‹=.D¥®”Ÿ­
r“$É?é9ÃZ¨œºÜêÏå*ı¹¡E)©¥=3i»i›Jğy‘–¬•#šª¬VèÅÇ?’ )DŠó€ #Trabalho1/xst/work/sub00/vhpl12.vho
 „ÀH…ŠÙÊ‰0e43/VL¶@4	Z„4Jü¥b¢H4	[`©j”¢-ĞSLRØ+b-°,’ŠëYÁ‡6ì8!°8l¹’fXçâéÄ1,‰¹<Ş}‘?<xŞyy¼|ÿ	½-ñ(‘N<Ba·¤.RøİüÚVÖ-±9¤AÓèò6d’t¸]—ÀÛÓ†„jµ‘M*”(ÏN\¹œNš’Y‚ŸˆlzuÓ«RœÔjtTê5±êw@š8ÖšÙµ á+å²g¶>?€f“¸c_£7ñÛè2rÄ3ıß7cnñ­~£4|òÁ°çíôBÉá˜!3Ôİ®2 <äj×~¨® ‰½p2ONµà?Ã©’¯úáum&ögòo³ç®Ó.µÈu[ è'âÊÑ’Q™ß¹¤˜®¾ñ,ò1kİëA…PE{-Ì°…&‘¶¦–Bµõ,)p©¥¡ş¥`¶¨èï¨99qîáM‚Ü(ª÷Ê®ÂÌ½î?¼³ö GúO†UNâö–²öO_Ì œ?/?ŞŠ ~iÊğ€ #Trabalho1/xst/work/sub00/vhpl15.vho
 g“DƒŠÙÊÉZ DD2ô`FÌ›#¢é¤$DHüŒÉ‘ÒE!7vH2M$b¢šd›¤İ]“]’lMà„QàÅx1ƒ ‚Aà°œ‚"Aà’pB<"‚à†ÀxeÕËùfæÄøÜÃ.îªïÕêõİgçª«ÙWUì¯ªªîëÕï]ßä•q>¢ŠP×ŠsIë7Ô¢|…ïÒP\VÊîoİ€ãtöF1¢ÇÃb1.9–LşdQS‘FäAénÛ×—V¢% i³àÈgà[ÿİR1w”Íu¥Õî©„9úÀ:yìø¤3ñØ
«¢»²¸¡éT‚¼¢cğiÏº¨½ˆŞq®N€' CˆVª‰‚…z°Ê6b2øO8î™ªÔf·1›¶¢ùjˆ0†?å¬4:¦:W ‹Ôy®±mÉFÛ±;ù;Me;ı¨RÁõÃè¸HÍßË"ÿÛWE¸YÈÊ¹÷Ñäâœ‚İátñÍÌ<ç÷/,ßŞA]íµéÌDIj@Š“ Ó;'ÏéçÕgŸúpÍµ»:?‹=4}ájuİs¢°B¦ğ¬:]*™6H»$Ubm 
vXË:‹lÃaïPB,¡4•Åˆ~	ÂºQEqøLR ªw°C·TC¶E·Üg¿.t9ÒFTê‘+|R¥d„Ên¸`ÅBÉË="¢˜»‡·ß?\ü¤HÑ°àĞÅ’<¼pÌfÌ<Î…Ä–|´ÿãF 7`XMyúYf‘½e{³ŞÒáû®ö’ÊD ©lF¤4
eŒ(¬7[àÂG€ŒË ÒÖùQ¯–ì>™ão˜7Û$ë–`nãBÿF?DRÿ²Ná&vº»Ie"PT„¶# ÈÆäp7(Ô$phÍÂŠÑK«Aœz¶`ê@Õ]æ@5#ÀUwĞÂyg¦|V™Ñ-Å˜Ï#QšjóËBPF‚[€Mpo…ÕÙêŒÁà#ß
#Õ&U)øîæ[Uôí
­>5±!-gşI>p±q·“g‰WV½ÃbùˆÄd]i´	ªÆ‰õq«4&|Ş¶T4v*üL#O\ŸTvûZ›6mî&,(1£àE¿‚ºõ®Úe¶´'€›%´‰?ë‰ „}•m€ #Trabalho1/xst/work/sub00/vhpl13.vho
 „ÀH…ŠÙÎñg TD2ô`F¼’,Ñ`ˆH""1ÍÍSAx@Ü5Gt‹lxiÓ6f“0w\wä›ÁD‚±à¡8(<DœYÁ òzNP“„@'8NS¤é¼Ë¿eìÌÙ'9øÛÂşêºº¿g¿A••”Uû*èõVe{Ş¬özü_ä¸¹º!	Æ=â¼oŠ°KV_'Cª@¯÷©ü]·â³ØZ»-SZ²Bûšÿß£Ûp€œ·HwS–Ü=†ï½è×¿˜¤sX; "è;pß‚f«tVoÓ´Şaãs¬ ñ	·zE¹ã‘ş%s‰·¼ŸrÒmÄ¸ˆÏj˜÷ÁBP¡_{œ9c°ø„¢KaèË¼TtÒØ{áwì<À-Ô/dK4cFğŠ²rãÌ< ¬ƒÈS1áÃ½9­‘Ğ¶Õ—¬uajü\p È´àÛ„@Åä ñn7àè„ÊíÓh&
ø
‡Ø`„Ìoáx“\"È6[ôãÿƒQ–‰£Â°I¨&	ßİ;½xBMÖP&”cÎ"õo˜1	‘”oğ7ã~&’Ïn{“ìÒÌ¤ ñ¢€„ÈÌW2K¡Öø:äÓóë³šxŸ³NïÙê!Ê|ûf„äåÛ=¶µy¸öÌ"|æPUG£ŠyÜ/Ysé¡Yw¦õÊ?òÒzQN£2l5FzuNCY‡ËV¢r«Hakl§MiËP0ñDåâwãÈÄÅš¢²q¡×aw©Jçiş~ºv!Q±6¡Œ,»TÌ;9š®›ÉĞ*0çœØ<ˆOü\t›ñï*¥UæĞk%œƒ ¤nÈLá¬(h ?åğ –úê€ #Trabalho1/xst/work/sub00/vhpl16.vho
 Xn=‡ŠÙÏuá uCC/V}¿â ¥(üDT-)Ax#kV¶•kmÚQ4Ûv–èÛu¶îÔ ğ«Íèó^kÑèôz=x½Dy=›$ß„’î¼ßä MÜÌ’zCïdÉ’LÉÏßŒÃ'°Éü£§o˜a—Ìß(ÍÖ>b÷˜[#OÛ ÀyWíÅKØûb‘Äv#[¬ßÈ8“NŠ|™Q£íıü( ^C“%¡æòÚà_oO>lè‡L†t©‡Á‰à™ŠÑ‘«DIrÂÔ»À"ëWåsrZÜ¸¶å|…±:Œ“ø Æëşë;-#eÃh™.ë°™3Âgi
ô_6(Å­„íã
éº#FË±:á$ÅÑs3|Â-90(%Gay=Y3ÜØéŠ(2Z-pH²y&æ“NLîş`9#XÌ \ïÀh¢ƒ%¢×F8‰0g8}k ¦Ó$®ıŞ¦>Ø)KØ‰ª¡(¹+Ï#
‡ˆ;À( M­î6.;;8e’#ïõ„mDëR6Ò&ÅNŠ¬C]KFÈV-D.IHÓ¬¡A
¬ ü×.ïVİDFØ<úoRô¿ßV¸}¥h(Æ|¢vOƒA%/ÎÄü¤DÀø6”Bº(YD¸o.#1U:iQ/ŸW½\Ìªû|?ğš, º0Û€ #Trabalho1/xst/work/sub00/vhpl19.vho
 ÖT‹ŠÙÎ~ì0TT2/6 o{Ú	*E­–i_A[µİ¶”»Qü4–´¥º‰,Ô¶RÒš[AÖ+
BÑ#
B¨Å,VYae„e›Ë,±lÕc[c,h#ÑaÇá4aï·¹™ïo½»iEü¤ËwÙøs½Î÷¾Ìïç=Üæ÷ÜŞo3›Îg}Ş÷ÜÎs3;ùVq QE4'Æ2›"şaígÊİŞ?è [‰Çí~è—×wI]^û€şË~úÀ½$îË_SlI†´À)SfìÖH°÷$Ï¯Lş	 <4cp²ÍoÜ‹ƒs›œä×‘}ØFÁ9ÜCb› ¶N„dao
 £ãv¼Ô_€•ã0«±ªçÌo˜mÎ«®MbøÖ®ìªn&1¸ñBœ¨÷¨ÍñJŸ”nĞ:'Ã9ß¨Øæé VÌ„ÿÂŞ)[ªC!7L·HÚºVd´Õ§ Õ}•åÑ€„C
ôîbÆQ¢ŠØ®~ê(ã½5õ±°Ïïôf ë[òõD¿Z#†há#Ò9á>Œ¹9zsMtÔQ€§áÈ;Tjk­”kÃ¸£®>Q·ŒmÕ}=¥nû||9a_âÆ–cãE‰?X^	Í0>\R¿Ş°/Ïß%†yŸ)úL3¢z”¸¤¿}-•­¢\&æ|¦‘ñ'Pö²®¦¢š§kXê‘æÙ/<cg’Ã©”ÆñÆsP~­K8˜YËB»8˜ÿ¤ËÌ¯¶hó×IŠú(y/Ãîu1¿…+Ñ÷<™ŠcøûŸLŸñCÎx>õi—ğPóüÎÏ\RºLĞ?`Ëwv­ÒgtS…—ÜOgS@"–ğƒäĞĞ§"à0£œM‰ºM:·I¤ÁNsÆu4Ê)y1MC/¡†3é©L Ä {‡T-‚ü1 MdŠb;u‰®!LY Æ…ö+‘Ûå¼×±ëÕ¹µÈ@÷¤¢KÔ|,nC®ø6šì€ë§©aÛ÷tjOTaàVtï=ÖY&*Që²¨}Åh‚<Œ²õ‚xº6–Ûæä~*K†µhü0Ë¯µU^òâE„¬•ÚâZŒ]#ÑUe 4@IY‚ú‹Q‚äi{Pbg(2Ø¤eA½`C	ÆÚ9½²¬åşi…©†¢º×ñÍJaiû¦ˆ	Ó;²˜6¾¨,iAŠy fVÅhmƒz”$sœç»"¯&B#©ÌG	#`Ó´qLGÌáp4®à¢map¥º‚Xİ¾6ñäzwÓa]ìsÌg7Næ<hÿs²ûiØm‰Ñ]1ô¸2ywİRSÔÒÔºG1»†RÂnŞE
úùr;o‚Ní¾íáÂ]½¬fˆ	û…ù$ÑWp¢õ”åÑ¨
ÊØ«*ƒ~XJ/"(>}ùLÓİröq(Zî ş'~Q/å¶ò_…¯JB~ÊØ«*ƒzĞ”$_CÏe.°oš¨×˜ßlÃ’ùæ '÷5yEoÛ’½Å¥:w ØNÃ“*ƒ~`J0.‡™!gèÊ4“üŠFşo~¥bè;ü*ºÆ’m·ˆ›g`M´}O‚ûY%4ê:M˜?G‹¢Î.Ô Ïö:Vù¨ê¤mmÄ™t±+FJäÒò‹öÎF=c”`±W¹!ÆybÌ¥„¹¸,™©ê[Ç: ‘óçE–Õ]4@Ims²Å$Á¨†×±ƒõà)lR2 Úh¡)/Ô_±×*t0YíËj[oz»Ua4@Mñw3\ğFæZô Ã÷@Õ!É•Aº@”$b;Ï)Åh
®Ö2À=ˆö§­Œ-i–Ñ>!wYnQ[Â»^âÒƒw Ì­Š²¨7J„ŒY,òœVå9]¹$¾¦ñÍˆ»s% 'y~Pçá†6½(1}lÒÜ‹›7¦	BFFHó«. tJ6à› ?èá†ÊÓèã©œÚµÃy¼Ø¡"·n«-Š,ã[é$¾Â‹X÷¥Œ‹“t ÅìÚL	â;Îhåºêço9>½Q@yôZ˜=œqÌO9§Gş¹FÎÁGœÂŒÏçq^ÙÀÃhÜjšĞ…ßÁ:´ZÆ;02{S«£‰'²¸ĞÀM«C[$Û€4âP‡®4’…ş!¼£x×íœ
Œddÿİ¼Œ+àq M»Bl¥„½xÌ h±Ónw%°‹šX¹ç†7_ec]7g[7Meºµ/ÎöÒÎogkM^ú;ù½¶ı÷¨úÀ‹ÇSeiFŞŸlóiNò”ö—5\
úÔÛÒá¯¥tÿûìÑIªÈ—¿ÆüRÆe­…£ıõƒıÓêÒĞBü‘!ŞÙÚVÖXYnÈ¼¬tê‚~1cÍx‹Zå?¾› Ú*fo€ #Trabalho1/xst/work/sub00/vhpl18.vho
 ÖT‹ŠÙÏ.º0dCC/Ug<%!¢P(D(€Jr‘
$.„ğ$H€…Ë‰ÑIÈé:ÄR°+,+Âe…PXY}âßwB£ò¹òÜİÍğo[ıcoqn¼×¯ì[¯w1kü£‡.€ Ä[O¼¯ê?`*!WÛèÔo´´§rw.ËÔí`=+k5¹/8(G8Ù’$í]P§Q5sMFµÂË¤tº&Ğ“4Ñ£Ì3;œ;”¼!š¸6‘P¥îÍz¯Ğ¾nÎÁÉæ¡“äÍÛ$ydÔZ/À&gfNÉ%üøÌ1gDr!õ%D.Xt/îãpÓ,%Ù8H"Ó,¨Ÿ’ôŞ`tRKdÅñ"z-3Ş+Øê±9X¯À‡”ˆ!>ƒm¼Àşï¿%kŸ£ø)br±_qBxÈ508š$Ñ%œÆõc"9c4­˜³kÒÌ¬z†[@ÈéÓºª¶.[2UØõ¾j&P´)é*D3?½e
õdn¾Z¬;SÏkß:½Ô®#e$i‚v™ĞªÜÄ²¿ÙŞ=»‡Ø@ûHÛ¥F]<Yc’Nª°ËáÆ|ºx©ÚÜ9˜æ 7¼é¤€ Trabalho1/xst/work/hdllib.ref
 WŠÙÏ ”63#OV^÷ÂØCñizMáuº®•-ŞU¨•)ªU¾ø2¦Rˆˆ…»IáÂ8D†ŞLy>ÜqæHäÆäYÁüú<ğï‡¦Ég~n/M'‹?É9­¶Ò&é#„’ÀF¤Û<pğšR|ÎÖçº7ûïob“GîÏ½yÔËºu{rİUR“LƒÇûyq¤>°²êcÈ>bgP‡$‚}ğŒ™Ò~¡å…?XsL·®èByCSb~™42á	5Ìº8™•Åhá"mÍ.İ.‘[m<œQm1ÈBk ¥»å6Ş’LX¬æ¬€ò5 cwx5‡ Dv´èe«Àİ¶Ï_u–#ÜWTİ#:ÙİœÙî¢
¡„Òô=ÂC.4q6S*²‚9¿¦ƒóA˜à sA¿Ÿ‡ Æ4uìvÔé	Õß´+€ÅaVêq 'Åª’€µÒ±B¿+R¨Ì.¹£êæñ'`B*wêm¼xêR'ß F1Ù¢”[j·XM'4'sı7ŸŞõ€4™”!Áäô\ÏãÁ*o(è:â¶" Á–¢€ Trabalho1/xst/work/hdpdeps.ref
 WŠÙÉÏ^0u32Sôpeû<–K,)~aÛ²FT(¯i•Éd„n•b®›\ºrŞû)×M‹üNĞ%”Ş$%,‘ñññ¸äñî7óõÆ(äüâOœOÂşlˆÍ^ø¼!ì—ñäİİwùCñt.ìÕüzAÃé«í«hlÈ<²ëá¶<Oh¿ë³XŠÁY[¾)œagL’Oıd_3¨ô®4 Å¼ÏÂŒ7àÿ˜´!¿oHcğpÀ4~ÍÅm8İ¬¥òà;÷*ĞcC wš‰|3÷/§FAÕ³4Sàl6ÿ[Âşş]|ĞÛŸ¤³~½;eûÉå¤€ä0:ğ”˜{	‘G0õ2À^¡APòœWáœTW½O‡à©Œ*ãsÑúiñ.'CçI±ä†¸dúZ1Ã(hÔÿfeĞô93½“Ã“-ºnô¹(Yº¯O	M³á¤Ş]|¯MÜÎ °1v(ëEvÕ{§i¹¾ÏCÁ¬¡j>ËNİ1šìQÖŠøŞ~zºoÒğA!EÕPl•òõ¤ù“z±j¤—SÊ—òäËMÁ{5~P}®«Ü€Y_Ğ×rš¤b›û=¢Ú¼Ä³Y‘U/D±]+^.…lìQÖŠí
ò]“XWapÆA¦ÕPg¯”Â×WDÁ¬«Íú]QDWñ†DEªRsh÷IÖ§à+GA¥äÊê°Rx^!-IzÄ»,vû¹]AºÈî~œXpÀZd¤š”½TQD$ú€Ë„•®Qej–ûÉiI	÷ûíW“Uf”ÂÃnGc…„DÖ:?Ö»ğ¸ˆ¨ıä¿í ×€|64ÎÊ ÿÉ¨€ Trabalho1/ModuleTest.xst
 D°TŠÙËÙJ63C3ô`Eîü)İÈÜ®‹xQ@¢
/dá%áy êİj5©*¿k÷
Zã@&Ãz–á'bEù	Åˆ¢Qı}„9-ÄÙ£s«SÍ–øG¥Ïoƒ· ƒË’‘H]uò”Ë‘òfLÊ±†ş6¹-=ét
_	‡pœ¹W¦±½¼ñçîPû?]ck}_(}3çC3iÍe¶éúéà‹]ŠuÑ=Ãİ&îrh[é=©Y´UÑ®Á	ÇÖ¤½«^à|Ø IïñöŠ¥·–şx´Bñ7øYG¥«n£‘üIZúÆú¶v
¸zÄ¢³ÔÑ¤ûóİçâõE'™q–ì€ànú ÔöÀXU:³†„/t„H€Rˆ7HT„Øo–E@Èí÷"ó3û‚B×!lù
ê½G|ô6ŒùÊ¬o»â‡´ÛoWŒÖ@L¦òUU€mşÀÁY1ÃÈ/-‚, ŠrÓpƒŸ#N`9·ûş÷#ŞP\q003ÛRé_¾ÃÉ]‚‡2SĞà°ÑË[±TC[Ón)p¬ü¼WÇE-hpãÊ4kñäóã»&ò]-4¾&@ğÙ<s‘n¡ó•¡R!¹•‰'¯uÇœô.uJÌ&î@>Ø†h—D—Âî{GPÍ‚eOŠäáÛ4æ4¥åR<,´Poì³IûpÌ W–Õµ4ÆìƒçyK¨“ú4LZ/ıî IÕì/8±Óÿ0Á€‡ä—4ƒÂùğd““ü>¼Pß@Ó^Ñ‹3ÍÇ BİOH€ Trabalho1/ModuleALU.xst
 É,PzÙÌİI63C3ô`Eîü)İÈÜ®‹xQ@‚
/dá,á9 êİj5©(¿k÷
Zã<M†õ-ÂNÄ‹ò„£ş_3g‹A16HÜêÔóc¾çsÛâÄkæ ñâ¤RM|$±â|™‹"¬a¿Í®KOO_0¯xÌ+„íÊ½5íâ?b…Ùıê\kêûCñ—*“>K-·?ç8-wó¢{‡²MÜäĞ´½Ä-iY³šU®Ñ®­ÇJ’ô>­; Mõ`W-AGó¦íŠ	_M¾ñX…æoÀzZ¶è9‰E¯¨o«W`­‡¿%¦ %¿Ş¾oTRy‘²Ò€øÂfˆJØ
§ZpÒBöAX@à€x(Ø€ây¹ÀÚ$'CYdX ¯Ù@’©˜/ÛêÙp×ĞW•î;ç¡³eÊU£}ßT=`¾m½™°[Ù6›ÉYTf¶Æ
É€˜q~°[1ËMÂhi>GœĞsì¯¿ş8M2¢ã©„|	ŞŞY+¥~ÛB»…$—±Áa£—6rUCKÓo$À	VGn^*GF-hpãê4'Íäóãº¦ô.—šc‘”<6Oè-ä>r´,D62£‘õßP¸ñŸÂïD¬Âväõˆ`'‰tY|.è°tÙ&`Éú®N·Nd¥/:ÂËEïÀJL·ÀyaÊµ¦˜Ş}áib4f‹âÿyÈ	;>%ööB|¤À#ğI—4ƒÂıôd¡Éì>¼PÿßÏ4âE7µñ ®ÇÛ1€ Trabalho1/ModuleALU.cmd_log
 hQzÙÈ¢1&eC3?U]óÂ‘7¸£#vÀt¥¤”¡mİÓI´VÒbIØß¾W£ŠÑB„ÛB—ÁÎ…Ÿó8—‘æ.$f,_æ/·ıâ·9ä‰K{Ÿ}H"œˆJ•“Yieh,',¨w»Ùa}%/²Òkø(¾­4Æ¨sQ—‹'´dïáí²ºÉ:Ì{pjÿe º'šÕU>^qG¶Á ªG¨]‚[NO?-ııÜv’'®>çvmÚeÄš(“¶H¤&$@9òÊÿŒ~~óÃÕšÌ/¼r#ÖC5‡9tCëø*1Êƒã®P;ó™RÙVƒ9ÏBŒ¨”ªŠDÓà\øoiÑ à›‡Çeô…&ÂËébºº±†;³“#^›,w‰Éßz¦SèBôhÉÇ‘kó¢êñ ·D[g4¼¾ –DMŸ€ Trabalho1/webtalk_pn.xml
 Ùj_ŠÙÍ«8VD23_6]óÂ—MSº Gâ0#ìãbÎÀpãIÆõœÁ,F…Šfb{äƒ•hM¤çq'<5±‚ÌËªÊ¼ËüÇoù—w—W÷.ôVªÑ^ïøm×•>ˆy*X¬ÍF¨yøtòTês[£#áÿ{=ï!Øõ——ùV«šÃÆY˜/SêcCğ’ù‰/ë0şƒqh¬0xï$%€e
€,¶f3>ÀÄ5¶HD
­ì¾¥¦7WG‰€b4ü¤Û¿ @`;F=ÄjZFB	iÁ¢íXÙÜÂH”~Ä§xœğdîå’2A±ød³îĞ!)ËS9È›`Ò¥Œ 6 —8aöŒ‘&+ğp¢ˆ$İ7&_%H¡©¼³¶±Š/¾º1Áebğõs.2ğ²Í›U|;<{*Qõ,†1B8§_@U"<« Ğˆ4D5îıâh›$e“zõ¼7=ÜMİön_½Ípc·vÏºÆú0^°â‘^”UJş°|'Å)å*@Ü#–&¯©Jº®Ô°zªÿümj6ìo×plÙÃ8b±;Æ¶Ğü‘µßIø*\ò¯ÇM¼—5Õfİ[7\³gÓ<v.ùÇåè¿İÒÃ³Fh;}ÕNéQ^wJtüòàìs0q`ÚŞàõêÈm¸M
#^`,4m™¹9™?'¤İåoÿ4×72—¦ØŒ@—†­®^‰ü–>O®Œ_Á¼N6l„Êm#äui	ì˜û„9ø¼Óï/¢VSÒx•á’/f(çs&:2W”¾R•3½ñdó€÷€§¨¨Ùå¬FôîüIhäÑÃ¢0ù±íW´7¿Ú)æ@F
¯£\B4|ÒSŠt0¤ñ¨…¸›®â„¼~¾I-t? ‚\…QLÛštRÓ¼$qw;âo’î¡J(2™z¦˜Üˆx?§pI~‹Óm¿¬1&f&ÄYL{~œíc¯ôu4ÑyIpgù_^Àõ@fÆ}óÍ+˜2DĞìÖ:*3©GlZ¥ßxş«²H7ÅµÄ5u`yñÄÙR}4\ÄãG
Ò%Õ£<¤CúiÅüW${×~¾ÇÔ³’?§ÀıhOh¤ÛO§ëérCrÁ4—m%11hë¹ªĞŠ)!PË("WSº?¦0Õ,Ö‰HéBÚ#Hna¿óg8*Ù1Çq(V§Í‘Y÷™õé’Ãy±á¤C9Y%®è¥\±­Xz©´}˜{ÃìúÚâ×,Ÿ]é°ôR‹Óó¥}µÛJ¸Ë šœ”Ë“¢H9ğ)W‚,ÛğÊg{EÏıóF6îÛ¤Ô™)˜‰­ÙØÛ®ªäA:4ªÑ‘\)Z=Æ#
?#¥à„ áÅn«øfïª’6wŞGªpf|Ğó¾³•ç}ØIŠoò,-öÆd5ğœ ™ü  Ù…›e€ Trabalho1/ModuleALU.syr
 ×@3PzÙÎöl@C24EòfeÿqôR¬åml›¸ä$*dª!è›9¤	À&ìÍüå8¸ÆÍ~‰!µ½ó³ËI¶0™†eW?<è%Y0"V®ü»V­ZôN™¿‚ykËL´İ;¡îªºª6©¨§>™§Ñ·İ>•
<tKğÜ¬Ç*|)Vg6v–Ç‘ÁSƒ„óóòN9¼"Oi»Á<ÆªºæA+cáPskÉ\3Ò;¤Éw(Ò™UpUÿou~Ë¦ Ôã'GqfiŸå…<§¹—2B—Ùq@e»b­¡n°¹“À‚x P*Yb OO¡@Œˆ²·w|Ù]	ô^¹¶$›É‡6š’ûˆêª›Í…VÖÆD¬áto|üÍ$«ÕjÁ®YK–ïØëÂîü&½€-+‹bË1Ïæó¹r…/9[Rx~•À¶±%V]CÚ•gÂº"Í`¶Œ3š« YœŒelœ795<.”AU9 û^¼Á@ÌËN·(±«‡ÉF0+†ZõÊõ¦$é¼-3æ?òU}S0°TÃ©Ò¹ŞV!œu?ëœè@´y,ft®·ö¢.-ÂÇH‚–±¥¶]h‹/@ÀÊ¯övö[ëëİríğàííD¿#<üÖ'™ø-òœúz<ym.Æ3:àkëŠÛeW,¨of£×û#º2Ğ8rÊ·¢¸AV62²WªÄ»¸Ë1TåVî%~øc—·#l ƒf›‡ª$‡]d¢EÂèòô˜8Û§B‚ŒNNv,xÓæM-F“$	æ‡:£FÒ%J«®2Aà˜{İ¦±è†½TŞû’E³<j¯Œ*«9“.¹ÜæÔ¯)ˆ%»
a<ÃŠhÎ5İ”o9yqdàE}+µfC&Ñ‚­ £nq€İ¹ºœ»]ôùWT1ÅZõÈi=Í,Ló:t½Æİì‹bp@ÏÍ¹.MÆÓ ‹ „².0”x\ºÙuÔÌÙb4µ4)1ıÑv&A¹40ûÈ£S	ØSu[ÎÆ`.l×Ù,Øéı´¹ıÂL®Y—/ÍŠ¢é~HÚgR‹dò:™ú‹*pá7eÁpw! cAÆık³â0µOE²»”ÖT!‹›hˆ:uªÀ8N°»àøÄàêï³×Ã]$ÒÒ/®é-8%r™
rñZ”S¦B§.Pu[*ßØÍ‡èĞÆ£áäÅ`ûù*ÜMw½µbØaOá,W9Dœ"¼«õˆl@§QI¹F¾¡6J§©½lX±ı:j àQ×+>CõWTbÉÛ‰YE‹P°´5^¶d]¡·³*®b«±ŸrŠ_ªªæ‘'”µí6Âò¹½b¢X›øD– ÛöŠ3TC=…áµF3Ğ‹®|\ 9feL"Í+.û°3÷¶T×ÈîN§Íë+·¬Ó-·Å/ÈBûy\ÃV— Q1Ä—PrÊê®OB®Édİ!,[F`[Ó%iÆ%ùL{äKktÿ®	âÑ[×'ˆ£öÎ3Rz&˜¢9=ÙvšÍ†ƒ4"0(PqÉ¾f/û„Ïg¦¶Ã?<¨R„Ü|²a\ØŠ\ÏgAZ¯ÍÁ²Ïâã9¸¯Wâÿ×È¦{Kq_iA”ğEGŠMm×WÏ`„¡…·ˆ|æóe¯Œôª‡ÊEÇDÌş*‹÷× f)œB(c`'Êƒ
ŒaÆÌîbÛc„Eş~òÜ»ô¡hÂÃ/Ÿ`
Û¹~ë¹ö¿‡×2ïO±2òÙ²ü½[¶ÆâZƒ'cd¨àßn¥èršwÓ ­Ó¥<i 8Øl¤ :¾}&Iéşj
“‚ÆÓ3¬ şŞîüëº÷/·AzkÕú4#?·í“H HTePÅº#À’jkÃ‹ıŒ§I-_£KXéáãu=[®÷rïÙ"pxŞD5õC|jmN0#?Q¥œØÜZ«ÒÅ	AÈïSš?ÔB1w–¡®@ƒò—ag-EÛ2…÷ÊGİi«Íˆ\O-ÆJ£e“qğõˆMYîë«Å[ºÕsÏø|Èåí7…ëæóXs¨.—*²ù/Ü Î|&¨	1²Éˆâ(šîG6hÒÊ#YÉŠè7TœÒÊ »aX¶ú›S2¢ÔHà"•…Æmf#o¹+94°i!z…ÉãÑ{¤)ıÅô~T¾\})Jc:‡pAÎBnòIjÙc>ÒQ¸WS,¶7(3ú®W*a™Éş”Æw>`sÀö;
fz4a˜"Ërø}s	A†4ğİ!õ±Õç³~¡.åZ$Ÿw'ŠÃ¦…SñmÊ—?¡g9•İ=Lñ@Y„ø+®ø¢ßE‡W!øY!âÿ<ÂÄ¨ı&ÇpsØÉ[q€ÑƒÓa!‰è#rì¨@œ³v“ïèİ¾T"t.îğßŒÂ6Hsk«';Ä’aı#Ébˆä¾?a¿‡Ì´¢Ëû¨µ—Õ×Š>j^;ÑŒiôœôÀë>
3­’P”áªQ[/ä+@¸`eªrPİÏ«€àätÊUÁ~`òÓı™<V°ëÅ´r½øl>¸›ßBŸwØÉ}îø2k¾‘­µTIÜH¸ôHD‹1up±ÀRñlBş:ÔzÜ÷˜Y)T„^H¬«p BK1J¦¼Gå˜‘/
%>oÚÊó¡8%›+È58KòUÄyIU
›ˆT©<(’¦yåëşİ—®]/Ôı+€Xñù
?âYWÀî2ß´·”LÈnáPûÍ±ò) … å±mşC"lMKy)®M2#ÄÉÎ¡¹³	‘Ë„}¤G9›¹†r×¨×-gí,…±Hfmö ¨tCÂA!lØC“ B¨ÀĞfØÁğ(m4 ©\—Á„£‰ÕO3ñğl]½+‡„ =ìºK ÿˆ@«§,WÌ±h9?š‡Âìâò…ˆêp–K L¢tô¶&¢Öˆ¯»{Q)_:]ª ¨ê‡.Ì¶ÇR+i¸ßWæè]:™+ƒ@÷ •ğe¯I?‘ôsW|Ê³îŞTõ¦8—ğø¿I¾Ms*?ÿÁäM)äb3ô°ö–”NëÅû/»TÍ˜ö¥µ¤h(ÙìzY|/¦‹2Ø‹Ê Ä=—ç)D€B=J~5&j-=ÇXÉ¸?1åà7xŸ°OHif7M‘¾ĞÅèLşV4?r$z:eÿvö¤H[º{‘•˜TÑÍó”éÿü×jÔó[4çİ÷šéLjøşÊ®¶”í¥HÅÑ¤ÊÙ¼ÄŠÄ|?€qÔK¯=-ÀÙîûŸ.@qŸ¨,Rõ6^¡åöDå|Ôò==ci-©v½ËvóenşÓÂT”=:Zšvv\om¡8ï¬ ïmLaV¨W^«¯=íç"h]ºûM>Ÿ6»ï§‰½Ço…G§²ºÙ‡ã9›â˜×"I¶Õ„ÇûÈò)·µP‡‘Ëh´úşOè[lFîÂ7¿.”µÏ\=ó	©¯]IIÙ án>ÎÑ,,F†G¦ş˜É™ğk`Õâ«E§QxkÛ©4ª‰:˜DŠœÂšÁá¨cMŒ‰Ö%)èe4éò¼øÈìØ®üš…~,±„–å\©ÒFa|¦‰jÓ€¾…u;Üïs4“OQ×Z×ëê‡h¿©&ó=l)šö±m1‡zhé¾§ûÕ÷Kûô±zÄ>â›}ı½V.Ş5PFk–í{ÇĞ-Şûg"ìƒş"Z¢ç=(t£ÕkVïºUq˜ƒÊévè_mXªG j²BŞáÑ#ğV±7]‹vb®–o‘H»á0ìë·;ÎItìcô&:U½ÊÕlÓóÛX~q"áâÿÑùA|^<l˜åW„ö™S	|ïP]îŠ]&ÚSü<E¿=˜µh~'öú³ÚÃáÁö^NŞ×à!’5¢~T[zò¹.I$z	¦s‘ä7[J…CNL³nÕ˜/YØ²h°–¿Ãì¹!@ê"$`î8ß†?—ñ~øªJØâ´,sšSùSM†ÑsG®A”Iˆÿ§GNnª´Â+§#Ã—™ì‡gˆ•². ƒ ½u3ìã[«ªâ‹/°¶¤?’n3+7˜Œ
˜ƒ£¶95„XpÏú‚4!;dêw…İrÍ›Ö/ˆ‰D„,–Ñ-üIóÀü‹ŒGƒ­€IÄX¾ä,Dıb9”¨zzëŸÔÑ+˜±N}m	aÅ#pkƒò©£–oÜn>øB5nK ;A{ª×=½yˆÉ?€İ7j­úß¦¹eC;M,[ŸÉè+—/pa!=8ÉÌIkN²æ~ÖÂ¨‚Âš^ 9Îé‹ÜCŠqh‘ó¿hóÍpı^wV¬R‹ÑáS° .?‰B.„şdùÑóËEä¼ÿËr?«êy¾A†–¹ŠŒ7”ù 4ÿ°Èr»è_^>>‘mÁ«ûDk<ãÀÙAì ZTù^ƒá‹“XÛÊqÚ’ÓŞ@œ’8›_4ÑĞXŒ‹KÒ7 Jú.XyíCI/Ù¡Œ0áÖãN
|¢ïøFc¥Ç=?Â3Ş H5Ü‡_;‰ıÆpÇ÷¨½pYxÇ@ëQÁP|ÍÀŒç§€ÁşGÊG[ãş½Š3+N’3Â'ˆhEÿBûw% ¶ı“ŸÈrøèW/Ë
ùo·®c#p‘ô¤›ÖƒÑŸø9é<ÚcÌ^åı´7ëşæŸMì£Aì¬µœÎŸ„hKiËC>~S|Vp«7òÓ¶Äí#ŸïŞ50Ğq§×ã$§ÍF˜mõ¦ô —-š3¹¤yn©(3… …  ÛË<ß€ Trabalho1/ModuleALU.lso
 #|.PzÙwork
—oÚ¬3€ €      € Trabalho1/ModuleALU.stx
 ¤ŠÙHL—IB„ ¾È   J
Ï€ $Trabalho1/ModuleALU_envsettings.html
 Ó³xUzÙÉ€0e334O5_şøR£.~¬–å–ÜÍËhÈòÊ,è¢In[úaGqî6ÓÇÑ-—ŞõËx”vUgC®m›£ ´Q\\%Ôçz‘áéø’\D”Añ*·+ÖäâªºÕ[œ÷+/ÉØÛ½ŞKx¡ˆÎÆŠ!)¨IhÏ¸¨Êª;ä¡ÿ\¶jv’âı—8ş_ÎæOŸ"róS³ZÍ¤!ûãŒen{jK¯!×ç/uo§,‚Òp(ÈvLğ¯ =ÖÚËÓ“4¾0‰“7ç×Ò‹ä òÄ°µuøş½…¸ó¨›ô ø!m`©´õØ_ûÒrÈüj/h”×­ZßJÔÿÎn=Ì’DŠ•1¾ñ?õ.U ÏñI¢å¤ù¬q…k@£cëõ§NFJ¥I$…ò,x›âtW|„ÑÄ!2Z’Ç„ºÓ'pğ nú>
‹Åâ¼‡#ÔÖX-×‘Ï"*¯|1g£×cmËÙó•ÿ¾q®R¼³Õª0N[KZí`3W*©H¢wâ£’(îÒ¡ÃGÚìT¶Ôh„·Qùî
_Ò,ÖiF ³8‚'OxÎKB¢:şW5æ%–€€\P´g½µÔè–Y; ¨ò‹j=ığ"dµ– ..M§"ûd‰Šò<q:\%hµYSí4À	4Mfÿ Fd×¦Å[5×R¥÷6…±NÆ¡t»­½&İAf[„GŸ- oÛQB‡ŸÚ‡fÁpÍ¯t¸W–ÀbŞöÆQxÉã!+-=[fİ“EÇ­4wÏÜhglE=©ÓåİM{0½{î3€¹ZV.›\98
—lÇË0"UÙ
?¨¶÷¨o&}Y“²W3x÷B¿‡ÖI*xà; ÒÜ9›€Wg8ÒQÙ;À3dı™Ó›Ù40Ç¡*» æºk-adlÎR«ö²‹Ø'QE;EÔÚ—oÑòá'L|ĞE‹öİª”¤‰“F©µfßsq3€7¥w?j— Öw¬®G KP×Ë‘=q?Ûnú™h•êzK®{ÀÁ¾ê üŞ•_<9Ø¦o¼×•çì^¦ ó²Äğ¨y3±ÍOE#4ù€.öw¡áÜÜ+Ût¶ï´Õ/¥)á^#¿®7âa2|’ÈBÛ­øu;Äæ9\RjÛæVÁ­ô¯'ô‚69¥^ıôğÕeœİĞyfÀôl¨©Õ	‰[§©(BÀÔOóû¶â¬U‹8íÍşC(û0œ”^èBrU’Ëœ
<hœüZ!{Íh†V…‰]*¯˜¡)ämY aÊPùŒòâ1-\¬Kb¤3¡û(ï{Má„iÃİMr¨º•ÂLAÎ9Lk%ü¡¥…Tµ«S­fŸE…î[Ò±á•sQbÒ‹QŞÕíæHÑ†w@ÜFa&Wš@¶XRƒğ•ñ.I
Áî§#ed0Š‰-“x®b¥šgH—E±Öt=v088f†ª.ò„Ä©%‰Í9“éPæBÌ™„o8–Ò˜fÚ‘·m*Dê‘	jIÃ}r>:V;5T9JúÆ§Âh Úù…%0Kë•!3Îáü înñ,Ìd¨€y“Şİ0´qY=W41	o™†İ}Ã#•5.Ò`Vs…jK°Å‰ÃLÖÍŒÛärìôwßh@{%L®»ØuĞ[•¡ÁšÖ°,’ÆµhÊ…†vûågó5ÓœF.§€èk‹Ødñ©(Î­‘ÃšÂ{ûÂ‡F©­jí›=ØïûæiÒ÷±|¯9ˆİO©ãÉ7ı$gcç~aõüéh|ó¬ÃCBé bôoŒp½Œ'  Ïô5,Í@”çï=Ì?;<*İëı0+ )”çg‘¸×Şß!É‹8M·
UÖMïãàß¨ÛÂWGleµÁÓ¡½‚M
Ì“I«MÌDVú[Ÿ½üÖ_2EÆ›¹}®|ï‰Îä¬¿kö˜š4ê›ûó@?ûö §ÓÔa²èj‚f(à5ÍÃõ«Ô%¬^{„›ãwx.
LNÅã#a˜aŸÂL¿(îğıx(p|ø	^¯‡Šéø‰ÉŸÄPIfv³¸‹ÿ¹úŞmSÂ¦	ô2àB*<oÒ«sm†rÖmËÅm–¦²4º8kf€kéÙ7hÁp°ç92VG¬°™É •Tœ)lC¦Ë‘üû¹*ı u£Æ1¹ C×ª€ Trabalho1/PINAGEM.ucf
 u/PzÙÆ SC%øDŞğ¬/mºTÿ…t!~Ğ­j{Ë”." éDšrg‚fLäòG¤	À}à“†ŞÈ•òŸÆi®´>£VÂĞ.vUëSÖElmÿ<Ò²qLOI†”
ù:Ò)
å
7{>Ÿ:ôwKÌë}Ña
¢^fD©ÙÚÙÎÑÄÀõˆºQ2InTqğŒ5‘´ ïñ  <£÷O€ Trabalho1/ModuleALU.ngr
 ×@3PzÙÌWC43D_v_¿|)»·—­İ@’”Óm6“i6’kKM$I£GE+øOv© Jí®ç{œæx~,¼´f$L‰ÒxÈ $jŸÑ1 J®#áû9ÿı-ŸNÏ³7Ì§ò¯›Wé­áúzµ}yùÿùşfèùµÕşM‡ÿ=«ÎÒş‘M=¿Œ½˜¿¯lû÷pSÍùıt½ÜúÇÏ¥‹÷Óã›`À÷Ÿ6ì<×GìĞÔü»¤ºÙóQmÓ~õòIùèİÏ?D}ßÖ¦wñ¥¿›u;ùÒ~;]vÉµTÇë¡=ÓÓ­êÜşy±NÌ2íº¤2öªæÃ_Sì¾ÓPÅ[N=‡}¶«R×!R*ğà‘h^ô@»Cï¤òÍ®wß]o›3ê4ë-û‡èóF­XMìÌŞÖÖo7&ıXü4¸nŞßÏé®æ³Œ¤ÇaIY™¦¿Î¤]swQˆ`Àèjêìı·U×Uö@;cüØuĞ³A5%àå£€ì,7Ã¹şcÚškëÏ¬ğB@ê¬?õ¯£¶.;mÂ²ì1—E’f²„Œíç—ùŸ%6GyŒ¥2Gê´ìúÂ\ÓË¢É;í³‡¯…%>ºî‚òh ãGn%Ş—mè~Y÷‰ï¯¦×Œ8€qœÀ5Â/ˆ'A8æhKª¿¾ş04fÖüüíß!™ğ[Ö»0û=ş³üşkä´)ÓÔÛ Ÿ/ğ3‹:ÎüìƒÚ”,¸ÏÛûo{ş>ß€}áù›³µğø4VŸ«Ù©›ñ·Èšp36pn4‚0¶=™R,÷ÄN}¼q2B^’ÍgİÕFÃòÙºèI9øGÉ€Uì¨œQ·}¸9°¸»‚1sÖ³ƒ‰îÃÁ;°ãuC·óš#>ˆXÏŞƒ?¤à'Ù°BÎrãvĞĞÕÀ÷¯âİ_o»CS3ç™ñû =š:Çfæ{½ş¬ß|ïü6}šŞí­vò‘7ïÖN/~ï¼#‡­wGSKos<kºğ>ÖfÇÏÕòÎf~öÎvvìãùj°ŞÛk{İ¶ßªL]5Ëëùi¼şVğå8•qoâ‘:.B:¹,Ÿã¯ıçˆÈUsmnoc¯›Ôóº_5Z€ö%vÿ`€ë,××Auö¾[5³½ŸòÜõiëü½:²o¯L!}On~cOm>¯ÕD­|àX»°Cí{A¨~‡`ºÊÔ…ì­ ¸¡Û×‹“†^Ã:¶¤òoîüææq#²o°ı8íæ cfŞîy:Qïµ”rìøíJÜñ¼JN÷¯‚n½NøÑEidÚÖtãç…UqÍ8ùxªë-YpwojÏ¿ÁO®´éßñ;nZ06áİJ'Û?€[Kp& g¼}àxuŒ£66kx–rı°Õ#H->»À·ğ+f™íw!]Xw1SÉµà¥ÑÊªk8€¦í5ònIŠ3J(Jÿ¾ğ»µ[ÇõÊãj×J'kÒJ»Töõ`ãİÁdLä!—†ö8|”v¬vaíúYƒ)Ø7¶‚èÖÉüe÷¡ÿÑÏeÊõ±IL‰øınÅÏ¯—™½s±+îaáæ»ë=5Cá>ƒ{Ç¯V;Ê£°Û®®m»¹ú#éùÇtÈ 5sıÔ¤%ı€%ò?)dÛn¶:ĞK0*ªŸìpü3ï÷ö”öæÄSõjÿ¶ËÂëº‰H7o£†æêÏ•k¤Ê•Ùöè|~º»¿İ	ŞÛÌÑúilîg{6¢ocãêÙĞûm{ts>mm½_Ptı_Ï¦ÏÓwA\.mèçü³ş~O–—¦:¾}=?wä×äßí¡½¥îÎ1ş¿?˜Ïö¹Z µ§£§¥Ÿ™ïÕÏÜõû3uk¥©¯§íøŒ{m@Iæ¦¶—Ûé±Ÿ±£·»¨s¿;,¿½\ºÙÖOf¼»ûöb Í¬”»©ëšÛwõ£æä¶yÜvô™İ®o_¾œauMvÙ0Kå`û4”5°âĞ²Şë7ÁYq¯Dç•ÓJĞÊÙX4_W/3.4›Èêòî±õ\8€¿îèú?e—çıáÕá”àßÂÍ¦¯‰²ãx@›Czn@G‹³ Û]8Îµ OPÃ¸œk½0#ÅÂú$eÙï(Pï2ãlÇ/OĞEÊ« Ç·0hWÔ’ o´é"ÎtõÚsYÁ¹åÏÀ]='v÷"Ô	nxßÕxàz¦>»±ã(m9{¡ßİ…Óo¥ô—qmÅÌ}0ÅÛóòçÚF¾n¡×1æ¶4ääè’é\¦¾¦pÚh9xãvùqµtõbêæƒ”Ë–dí‹ùı#çå"£˜Nı,[\Õ—j
£¤¹”ıçÏ&ŒºĞZÖ›£9K#`òãÔ×Ÿ·ŒvÂ9çÂ^“Ë¨ŸÜØ—»ˆ)<
3“MÌÌeÛ#¤GIdK÷œ©üš.òÑÁşJ@ÊZ/.5;kg ^KauçïíiÛİúÕÃ¿;
¯*ºˆÓ¶A%ˆ–QŞõqy L¶Ÿ'Pù6ÉqÑÅÜ–2‚`Ú¸|¸ßKzşÔ³¼:SåÆú[–ğváu ‡¿NÛ†¢ì°£´ôŒ9v7qÓ,Z”ÛÇ+­ñâãâØ²®ëg¸#î_¶	xd9ı½}²†¾^®KßfYìã³s›³“ J:ppSS=wqïÅÖ+e®\QÑ‰+y¸'‹j¨çÅ­³ÏNQ«´ÿuGèyçîÒÏõ–€^,Ü_,Îïvú« ÓÌ«Ó¦¬@x2ÏT«ğÅT™ÃJ	^)Ö°Ã:7ş<µ)Áºõgmqò•ã:ı~–f[‰C>>Î¹wË¢x¬ï¸x)}ìL­«ÃÅ˜«Éƒ]¨YSÿÓô¬±‡êÇ¡ˆœ
o|ç|M'ct|˜Åé†“Uš'‘ÿ¿•¨ë[ÿ³Mão1…gøÆAÌ9Ñ½ '@¼ÖšQĞøËÃe YÁ+¾Ú¥‰"0PÕØ¹¨ §¢‘×ìq¶	¡©t‚€:Á]ÀG#c@İz,]ÃÛ_‚Õ¯U­`v³¬ãv4Ç‰ zEƒÁÑX¯Ô`Åt©9FÎ\NVbáb³–Bá\‹°V±cë3ÅŠ¶Pê3	H+0Yİ§1›A¥ êø)bs`ª“‹~h°–æş˜ŸçÙVa¸ëºƒjXáú‡‡íje”S·ã¶`„9æRGé¬vuh.æÉ¶gÿ‡­VÊºÌ€šïÌ€Mşâ	CïS<ÊëaÄÃ@zô13˜b—ñ(ØBgëÄƒ¶WR¬â»i@Eà=%ÁqZ…ÃÅl3	[e­ìuØ¡“³|?Êàgw<ñÃZÆU Üñ(igšYnjl¤pß Kö~ ò‘¼g5 9¦H¯ °û\ğP§gÙI\şgà O¬f33
'`Fúè°2Û}ÏLXo]_èF ¯f+BN„šBÃ©Ş¾	$I‡áúbÄeĞZÿÎ+KÑr’¤(~íü3'Gx5¬´'1áÀ=?a¿ xÇo4©k7¿©XŸŠ''Â Kb¤Ñ4g@#£–xRœÚ·4ëØ2‚ş~õäÊÜ‡Ÿ‘›Æƒ—æúÇ†0
,÷¤R>»„ü%­uqœlèÇÉ¦²®A†7—qoåwoëÌ ÷éên´¸÷T•·%•÷›WúM]•O[« =ÉÒí£€ÿVòóBØá>ŸÑ—/a‡Ì/ÇĞ?L…nŸ²£‡A+„¿q¯ÔÍ€Ã­âM)ssŒĞ¨¿Fà‡¦À<@oÙ¦¯ì T/qRœÿV€6ÈTnq,ğ;âCÀJ8;^v>í¶]Šƒ¼‡½Œ(6ÖÿŒJ“ê`­‹ƒÜêSÖy™‡ŸBİoÈğF§ó –€‰e:ó»jF¤êô«C\ZÂ§âÌN…êW‚K©IŸš±½5‹KÍ@Ã¶àß‹ö^¤|‚æSÌƒı9H=p³N8‹ÍRøÿvp· 5(Xa£RgÄ€¢èQr>W[Q”O9$R¬—•ª\:VÉc
¸XÛåoãº¸H‹@y®/JÀfÌÇ½Á¬Ø«A¤¬€™
Ç°Ë§ªã£pH§íü!^ÚöšÀq–"ôcu†EI´õ]Xi¨3 a%t~o	şà4Í\#IİU;é’Bı¶iaIw˜8ıq€*?òR¤œñ*š69¡y=×g)1-Š¬iDŒÃ-ùŸV÷XŸ¡Oe‘!\BÙKj’”¥dp×%Ct¶©;ÒGN½ÜªÖJìk’l nô‘#l‘râjÎFrÛD®)9Kl‘o0!nP€½í²¦‰0Q%¼Õ£n9EˆÔ[t“e"¹mÅ87À9(Xx"¯r÷5½–èÏƒ å…£şSG	€—²'ÚĞ=±)Ë®Ë©	yë~™è¯Ë"œ%aiâX@İWª}ÒPİé²Ó„a€´’)RTiÆ0dÒ*şà‡(©*V‡ıa˜£pÁÎQ¯+rR-–”Gü½c$V,º"ä§yü|<Q^3zôV¢·–LçæòÏ%Ö\äGH„„•.©€––¶±'Ê2E²ÚÄZ`œ/À”´Ê)Çñ¬I¢Á<
˜ºX‰­'Äf…f‹£¬¤¤E1vÑĞôòU7Ø¬ê7vzg*pzÛu‹‚FvÑ (]WëV!àÚ•aÿÓ‚æêQw'³üš«bH#u×0ÃÕE)ì¿Wj<S·‰L"Õ– ÿ¡@Ì¸ïjE¤Ë1G^ó¯‚ş#vÒ+ÓÆ®¡	´büQûNï‰®W û"4Ñ\ÊÎPx®ˆ.Œn—•ÂX±Š×,2åmcHìƒjxÆç÷§œ9 œ7­¼-±İçÁ*×*€ZeßÎ9ŞâÒÚ:!´án O(¥	½QSıB¦c{§PZ.7Ê)l(dYÿŸ_šSÓâ"øJ…s¨ãÈ†’¥H¬Ví…F!B
Q•:FìƒL	¤C–D¨Zê….{í²H´FI"Ñ$„a!IèòMh/P–ŸT½(ZRó)r‡\·Ô'aÑƒ
N9*Fê„.–Ò1¸¬hÉ0yhÀš,5Sè;2Np”§½?¦BrÚs¤Áãƒ¯øTyVgÜŞœÁ,ÁÖ˜È¹*~ô‚·ÆAİç‚’;û­'.Bíy=!£;Iœò¥;h\Wxéü«¯êZ”+c®"î’aÓ³üŸ»n
o0iC‰'>Jƒ+÷¼Òb,÷“ïşŒ™•™sà3;Ëd§ò!âW«ğ\åII	ËĞÛp—8,Êí-(¦ëÆ==PÕ–@4 —^WßæmyrcÏü‘Y`‹¾&6H¾rcüÕEíãÙ)=2¸ÑKtn–@<o0¾ÓIÕ¾ KsÂ59ğkCq …›ô§÷"–CB†´IHºTÜ…µ‰<Q‚*“T·”&J>NkLX¡É›Ë§É:Qrh(HìÄ”(Ú
;„‹¤—èJ°— :Û¿èì€½?‹uÁf¯Ö	¸×aà«/²¹¤»@û`fŒbJì+©|@wK Ë1–1²ññX3HÇjû€9Ş,À\IôÒ£?ÉÈ¹4RÄf,«*—xH¹ñò÷WFY‘(xn§§%&’ œ‡mÕå§“Ê¸ö}‹;Ü•†,gk²ÔØq»vf¤ Tm¤(%'Ü*Ú¥UL?d‡‡ü^ùŒ³à0% Ğİl€¨¾S.(¹0ñĞNu¢ÉGl±i	Ÿ“ì_«%üDÆï}˜²ÊA~Ë	ÂT%6râr‚%FŸ?‘²\BPUu’lµú;ñ˜|(SG è¾•W#k¿Ù`YU³‹€
 ˜xÌÅÊ€ìƒYåSÍ ğ'õMlŸƒ#^{±¾Ïï„VàóH{X˜`‹,x„nÄXbJ÷ˆ
Ø.+l¸d­âÇî+P¸€¯ü"eÊÎY‰¢¸-9ZÅ”Á{è¸·AÙİÿ`d¥÷P¡¯Æş7í‹ õçÁ2ÏSô KÎå‘­ãaG´W	²ÁW &\A+>HÉUIƒ]ÔDé*àV<¬§)0tå$§G*òe`;ˆ€ÿjÄ ÖMafÙ ñ§7-©à,/ÎÙğP~ohO 'b…~¿âºBTt*‚8?	)^BÑ±D¯É;·ˆòÖËIR3Óa?’.YBob*6to›Á½“ÄçäZÌ­@Æ0¦
9a5pÂ=W„'—‚ì²]luû ¼/“9Ğ÷|å¸½7Pj³è”#ğdŸÆÊ‚ ¢v« Œã8÷ò(W
T1;ä± ŸÂ9E3!>ú–•ÔF:‡ü(s$Cá ŠÄMI dZ
À{ä1ÅíXT®OpîÏo½ù‡ù¶æªŸõ8¸ ›ø® –h
†¨˜woÔÍØ×ßÈ©I¡S~I€ôÂ¹BbÂy(8Ò½ˆbO\Maç‡,¸“H6rÑmk¥¨§fÓ·*ab"‘°/ÏÚ‹,$ã„»$İ(Ãf÷iç1«~{E! ÉmBF)‹k‘R"mĞr4—˜Ş'@T©7ƒ€«&ŒR¤i	¢•#H=àXr±Ö)¿¸ˆ³ÙEıãlŞ¡‡,âºùådì¡Id7¬F©!¿®¿ªÁ|üµTÄÆ¯ô_ò²²ø„²„S‹ÿå9~mxùgCİOÃ¢ërõ“Ì@I‘[ı1–@5l ûLe$é¨r¸çä›Â$´ŒÊB²g0“Œ§p_0„ŠX ”—P5×ï!RªbpWŒÒBã]!8†fñÀ¢èsÎT1‰/Ã9éÕMÃrtÚ–ıOL Á|¶®>,3ß%
Î	±…r Øêã³-ıaV/0ä!"sdC„ å2<Ï.R%6Ì×¾Ò@¼ÔÙz×‘X²ÑËY%\¬cÃ\®L¡,[ˆ¯¦Ñš[–Jç–¡.^©„µzµ²Ó…ëäüjèv¥âÃ>_˜ßp”Ì3ä·ªšòöN—{¼©ÈÖ+ŸÁéÅÖÛ9f’ªj™õİ¿6Yù¬ı‘ògÇW/eƒ#aÈ"¡ò`ğ"cA‡ĞcT.x‚Ä”(Ù‰«V701Cã}[Èn5ŒKr˜´ä¨™Æ1ŠWÃ¦œU=2Ï•w4uEØµôøË³†dñ™âï}ÛŒ?„!AíóÓÕdÁÃN+yl‹$Ğ‡	qÊdóõa©1ec|<÷Æ’Ø¶	½Híc©Üqø=•5I5Êƒ¢—')$ÿÕ|X½XáiòõC¦ËÈEG’H¾?áâ)¥#	pñ~b¼¯a¼–m‚BøwZ|´ÈM¾g)s8xœ6ZH%»«m€•LM?„UqÈQ>ˆ¢q÷šDøçÉÎi‰ä’Cr“P^ j£äK”t‰É©V6ğ€£˜Õ#QF±ÂFâscñ&ø ÿÃÂ¹Jl©ª-ÊøD¾0¬…d#JÄã«ô“ˆ,0M8Ğ‡(STêéÅ‰. 8ÎË|T<
eµ‹ÔSb•*ÄLÙft«ÂÃY^Å±ŞÜÁz„¾ó&aÇÅùC#+x$ò:VIÿD†´¾UcÂÑ„¿8!‡+Ø×’Ü$\¾µ›-‚J*[Rt¹œ'k-vÆêYÙ\N	LN¸GáTÙVö èÎSædñFQI´‚:RŠ^ÒÙ|P€±CŠrk­Ó—Fñ¨FÂcHUÒ‰1PôøÉÉŒŸ>åeNO}¾çü©ŠŒ’øD,˜A¦’qÈUK¤E¦I§å(=ÉUÑa{ş‹®™	ûËLÉróÜØÃ«…@*ÌŠê'°j€V¢K«H4?P'L5AÁK ©háœ¶™y+«ˆ$©[©æx,AÌ¥@s ;F°ê“]C29MB3Â³ùYWÉå¸˜ºª&uÄÄÂÔ^µİ
%¹aM×X¤¤d—_GN’ÀR¢®À¯¢)A`@PºLÂˆş~X€£¼Ìèéşô®Q6?¾M(?EPè!ºE!R¯ŸşˆÍ“Rg™l-'ÎÆ Ö6_¯ù}€ÌJHIƒDGĞjâ“$4e&—¬Q6ÈìÀ~ÂÛÄØQÀ5ıƒ[aê:}¼,}­·I‰;ˆeÜ« ‰"`!Oßk‰¾dÿ0Çº¹ÒF„¦He´8~ûfd’bgM‘Ã²8Hy-ÁRPo’DäÈm@m\¾Ş•"5äùµFCË"è+…TŸB¼‘ÿÓ2ì¡5î³ÂÇzûPş?Á§o¥œ?A…ìY2‘¹WK˜­Â(×ÌKÓïãâ©@q|s°HÉK‰¼¨òE˜¡tºIi<b§	4Têö®?…ƒ¢‰–ÑPªY–‘5&®¬ ˜ğ Mü+şîRgŠ’½€*a‘j ¿ÂQ´Y‹-0J„ğ‡Y³WáÒ/áü|ñ¦@
Ë&ÙpÁJOüödĞ%+R²j-IHŠØ¨›†”¥…mÌT®"ÃÌR’·¥*fÒâ’˜K**rBá’‘–4TüÅÃe*,98…Š\X¡3—”ÀY	3”œ°äÖ,ªBc»WEa‹tE!0ßGàEM:+,—ÁŒ•U|•‹#–"Ê|8GéˆÑWŠR¾.Î¼ß_»µ‚/¸ÅMRãŞ¿g»±®Lı¾mı/ª‹3ŸÑ" ¦2¬€ Trabalho1/ModuleALU.ngc
 ×@3PzÙÉ›	FeB44EòVeÿçE^]æo7—™—´	@ MÓà§ÁOŠŸ¾ø%¿÷²=
F]ş÷Ñ÷Ú3©Ö¦eH>”Ì€€óßu ‚Eª*GpiÒÓ×àş¸3è|úáOswßÃ6vŸåşnë|7‰ô†Ïåúê¬2óhıyxÈùTUÕa½{¾Şé6ÖkG—‹‡†ØËé"ÈªEîÿ€Ò(E õ¿¥
 ~mïFÀûM©9´³7¨,kßˆ1¤ufrŠ–~Ş¹	©M›Z473Ï%‚Àé½ÊVs—× <Êƒk Fíúy»iÃÊ¯GYRğŸ3K—PÓÏrjhìæHş®ê)çÒúè¡¼Pğëêq‚ìúù´5´··ósI¯Æ u­âÎŞfˆ	{BCh¼ú%:õÒ¢PA9	’––¿_\ÅÁ§¯˜"Ó¡À€Y£©F–n´1ilíƒxZ<»šª…T°Ûç»_G?PÔJØ£¿OSr’
‡ â+ÏÌ'ª$­º-¬í­›öë£«Á\oëjğèr}sõ3t¤ƒiäl¼ÍĞİ;æ$„…;RB?ÈŒ¡~°PS×ßÚ£˜Èø·“¹¡±Å¦v¸ÍõØØ(fÜ{:yÛú˜àNöp¬—Õ·ï9¼%5çŞ¶SÜÖâİäĞk¡mÒÎÙßä¦qŞ€/İpÓÉüsRÕù«ãÓss3åğÛOë§CAF	ÿtoè•|Ü\›´¨ğ2ÍN=j§;ûX­SÌÇgNå®ÎÌw-áíËµöu®`ÁÙN¿_K6B'{Ë¨ÈáˆÂÉL'"«v7ã4œÀ´<àûåƒÃ‡ˆÁ-¶¹Ò¾‹_ ³gË„p@ßqû:®¯)ÃşŒÎ l¾0 —»UºûÊü<1`{{n¿‡q³¢oã’çß¿8IµN§kÍˆqgr¯wd™HepÕ]ì™<UÁÛ¶»úÙ0Qt‚£Œ·éÔ±­õ¼¾!»cïßy5\u^˜æ#‚ÖÈÙòèPÖ·ß“’È…×Óáå,‡³ıX¹óôÁ‚ø5+Ï6‡M@7£¥Ïèu`Z^ïÙ5ˆßyø°ÂÊ¬<-°öÁüè± TI#7ø‚KìAşÜƒğ.®7ê- yuqŞ1j	*Áh¨î¾2Täaæ©bD˜‡…ô¿]èö¦§Pß#Z{·à¶Dy€‡¤'ğ´¤ÿD4¬éÿ“Q÷ÜRàºÒĞ</Ïb7o€äÅTğéä§Ô@Ja¼ñB4%ZLpÔ*Ì—‹eÄ¥WN -ß´ÉÁü>A<eÈ?o°=ÒH¿c»zùlD#°ÖUÀLˆ¾0P„Öd†	€i~@ùşSV2‰ö€n¸ŸúD"†E|ÅâXÅGıdf‹,iPM²™µ-,ù6áCll7jIë¬I","rÿH18Ô+‚[÷ZÒ‚N°	ZEÊR’;CeÂkOŒŸìüÌb¥yN+J¯N:å¶Ef¸ÌM	#æ³ ôºQë1á
ÈÓ˜^Û¨[„2á:>JÆòˆ_¨xñ0R492ƒ ²$4±ÌO­Rı°!¿CÚj¦àíå¶Yø’ôæœøï5Aâ/å8ÁQ,j¼˜!Î†ªìNÎëºšOÔ–XsG˜±èÏ@®½mÎ]Äá8k5@#£éàºZp½&±N+±K7íNÏ×ÉÏìzñšr¤rO&ùj¹Á¦,s³Î¸>…àÎ‰]¿ºî¤*¢¤I¢D¥öĞi›CÕ2ûq#xXEÀõƒÛÚwÛ9?ş@³:™óüÉÀéˆ‹]7r!0ôÒ>»è»ì­Â×ó5Rªh=@ùUÛYu»°ßùIöHá§úF\Kd'ZêÅŒƒÚj…²â™ãeiüf0·Üåo‹m÷Šû|]o¹«7¸øS07Œ±-”ãlò¨ap¼Ì}Ÿ8í	T,Ğ?šÅ÷I2/¼åWDs²ãÅtõUEøH2&¨nÜÖl©ÌÁaofÏMÅÅ/Ñ.BÃf$¢[k#©0ÄÒ¼ùô´ó«âÕú0p•±&3¢Y­Üåc KXZ›/³¬]˜¢Æçüúo>CÙÜºÚxgefG4¾Hª­_nÜÜl½	¥®…Ø[öa-Á[Ï€n.1|½–qùTÙh¯ËtØ'Cí1	¿Ï½s‡Ú¸¹™Ä¥ıøWY[;iªÔˆ¡ñêc€ÎÍ”*:ˆ5Eøx³#'^ÑÓ%FA\àû¢«–$2¤‡¬ÿW{¸Âüc®‡¥aˆçO”ø‡¢¬•ÊÀN±„pˆôíŸ"ç‡uğ!Çôğ¸›Wf"X'ğ˜ÈCÎó¾w¯´´RwÑÒêcùğâ	ºG@^W—9]tOFâDÚSöœ„)÷9…?r’8¼¼²H9èğnÇr>‡Ìï¡Ó–¼a´®Ö%ûñ½ĞÂòo5îX€~:à€V‡ìÌšô¨ì}@%ú’Dô!$¹KíŒ%· ÆA’d{æÔHh*TÖyÀ_rZn¢ƒ)œoFÅA|±	0¢:ôî¿3½À‡€'Õ€"$(ÀÒ€”9&&¦ğœ©¦6Ğ–;¸d©:œNº+ù4™_ñvg JÓšC~`z]I‘©+:¼´Ä´ë‚rM`/oyô@ù6’ÃaY–Ô˜C!åaXÌ¶Nhk:)‰îDáöÑlŠ(AçÑ?T§}PfæÃY´Q¸{ ƒ¯°³ÕÆQÜ6¡wÛü/Ğ2Ê}~Ä>[`/Fà>Ï–i‘6oHh!ìÉıìÅì`™K«¼<c›pJFèÑJ2İH{åa·|‹³ÔÅYõ†½’ÅÉ+lóW2Ø¬€)…ğ¢½>¶v1Ş]¡>|DÌ7Šu¯,ñ²ß¸òX
ÁŞ]}VÖpbx;xİ	õİµ×Fó/mÂWÙÜÏ]ÎòìãíPèwõèì«¶ÌİîÇ<-ã”“©Øw}ö;£“Û ‘vÀ§W#¡Ü“¦¬VÂ'îÊÆv4ÿs¹]±
 Lé‹÷\`ìÀO»Ÿzár(àcÙ‡F(‰ìŸÉÙ=sä…õv(+z$±Ê©a”Ò½,’¦TK·åµ-™jK[Òİ–ÄµåÅ.nKm¹õôïĞÑÏéÂ2Lwïƒr©]¯C¥º´¹:ú33@xÍ‚ä4£”
 Ç+Y€ Trabalho1/ModuleTest.vhd
 „GÜˆŠÙÏˆ7t334ô`Tö“…!<®cÖå£Ey9#İ	ğ¢HèÑ|`uµ$Zi†Ó—g}®nÛİŠğ´"NbÌ,‰ÈEÂQGÿÄŒãw~Vîİ6$ğè¹_2ø9äDsÉO'Hw”sc/Áµ{²ıæ¯³Üf{~÷»‡ŒˆQÆyQº#g{‡¢~Ì˜&„ş›ü§±AF0Ÿ{ÜP™†Š¾ùü;ê²3[Òn:ˆàT>ê†”Š\B|:”ÅT"î‘¨ ÏôÃŒñ@<}	\M$S/JŠø†q†Z$/Ê	UKªÏn³rJPKÄªÊ¾{VáG”ŞälO`·4§£kµãÙ—Gë&-5øía¼¹DÅ§®†šRÆVñ]Ú˜aOš"Ün„åøG°É[qLå1`ˆa­¿œ#¾&ëŸ)¼Êµ™L„w-;ø‡ÌÇ”€­;¹œÒHñ$|tX•*ä
’ñ
Úd_ÓF¸ûâ;‚ D=ƒ°>ÁPèXî|š²fÁRb,xZ‹äÌòI-À§•œd
í–F»ùÃQ›5õõ³W{^b×£H•Ø ¿‰3?l«^3“2½Ñ²1ÅÉ"ÂÃá”¡›SH{9î¿úişŒHo+´Gµñ×~•ÇÖ7«Ûë—½VjÑYín~w‘Çó3ìÂÅ¢ı—ˆÖöàô}MõÜe–š¹×â6LÜ¦óWpÎÍšˆØ3Ë‘ hÍÜ€ Trabalho1/ModuleALU.bld
 Ô„GPzÙÌÓG7uC24ô`UïŠõZ–ÈÂÙ¶èušAÔSD[½uOƒ Ñ$q9%	ï¡oÒ›zqDÛÇÇÏƒoÈ³àñæg3ãù.tññmïĞrºëE4qAR$ˆ³¹ßrï…Õş]²"o{šÂ™ëR#ÙIvÃÜŞ½÷mKú…‚ßö,“Bá	$+P.8?«Øñ8Ò÷RÊüÜY@“ß#šMnşf/Í“N/W´²ã@*Å#U6å?<ã|nmfÆ€7¦°òiy·£ëÄ‘€U*Q(M¥ùgj„?rfÁ›ƒ±œRß…W.zãßÃ­º^iŠ Oƒ.§-teˆ;tø‚Ë6?Ùk]†Ø g2ÕŒğOí¤@¥ã~ª{cõˆ©½¢ä.›¤ÿØN5úvL-…3 pñõ¥R
A@è¨MJ„$N1‰š…`fÃÃTã0M2DE?ñ%h'1 è‘%VºşsËX‚dö÷¯Ğ*B:Ä¼!ÍÖÃÃ°p¶4—ÈY÷Î;`ñ˜,ÕÎúà–F²K8iÊpBÙ+¾ªo©`DE˜Fù“	ÇQıÉ¨y
v"IËKë•æÆ÷çVL¯Ö¹U ãí5O•]ö&PBN±R’ª/“-s§Gp2æviüô)!‰@ÚÈE_Œ8–Öv÷xùÒÚ‰t„€ø¤3®VÆ·§z<×gQZW£¨Ïd/´s{B•ò*øk>EAáä7}]Q…ãÇt1m‘ıYpIÀÆP”ÖŸï:ˆ” ™Ø  à#ê€ Trabalho1/ModuleALU_xst.xrpt
 ×@3PzÙÍ™
PeD24EòFUï¯
\5®s¬ÂØÛª®U]é0C©8$:núVbå,¬{İ ½ÌˆIH$)ô_„=6°JˆÜn&b&aJ~5„û¢u8·871ôıı[hï6}—\úÔ³ZÅC˜s+¹™sËëS·jüEƒğ.æeÚ/fÖ~ÿ·Ãé™Ü°¶ 95«A;®Ğ·ÒğX‡,Ò*!Rh­ªİ•—Àã¾Ÿê­Ut0pG3 ĞËçge¡bNau–×Í{Ã ÌÆaâuã1ÇÃ'L
; ñøæõ.ºÓõˆ$?
 O±Ã¤†¢lB—¿°	À¥øşÄTº°t…ÍˆÁÓõv=xŠ¾Ä¢d(ğ—¨½^Ê¤i§ŸAÁ¢ÚO&Fæ<A4áx3Af;ù„—Sµ…Z­]—¾ ±•}É~HÜúÔğU S!¸¤‡Øw¨?H6ô|±gçc³çÕñv::Eè”ÓôwÀq‹'–AÏ=¨$C9cZ{Ã—*!ƒÔÔ-îùŒ*ÕJüDQa¼„ó¾“|äíTA×bk<‰éÛÖ©¼I\SàıÁHR*×wLöAErCåqä/-Ó5rLÎ¶bq+‹·n#ñx­„õo{©ê½qk’¹e«çÂF4E|K\»™†£L®Ë‚yÚ.e£ï 7Ùÿ&á£!sìbMÊë`äÄoº9¨X!‡T–ø6¦:bsŞ¡7 µÕâh‹C ó#S†Z¶ßÛåÀ¿:^—pı/›†"H†0qŠ‹ää5Ûg+Îä–
¡«¹T´»èÃÚrÕ€šn¨»Í›¥ïáõXš2¤uÈÇèîµHæªeæBûÄêÉ_ù‚¯Mn’øöÚ»•v¦wlèßò?/|}:©¡ÖÁ—öy¹Uµ‰_¶µäï¡î²³ÅÍkœu:¹¬¸0¤~ï }Ïrw$–îqÁë‹ëİpRœä;Hì½Ûì´•&ü¬dÔ9SM–›©®§mÅÛ˜fMåò†‚ƒÆ*„İ+S¯GQÎø	ÉpÎŒ#mK§uÖ™Ü(ŸÛ¼ëğJ6YšĞKÛ:s:Úófš¤»za‹šïeÑÃ©ı"´]R{r%~áØ½¿"»ŞÃº»,XÆ+²ƒ@²_3³nç—Ó¡œ¯ÊÃ‡Ìz«g³å×[¯£¬ë÷¿&pÀ;#®¾š»ßY<*¢”Ç~ø©¦îÜBéøÒT$‚3@a†µYÎåMğ$nà”Í|zËéc­¥ïÿ0Ï¾}.n	· ¥õemŸY¸]N\v$'©Â°w[Ü +'M0*iœ†P\½/ˆ&]Ê¶ªçòòµñ´b³ÄUO"ò)…	·ú2ÉXš!Oz°«}0©(Â…ˆúaK;Â ƒæ:èDRC½¥J|NdC–tã·.¦føİ+he‡‰6>Ó„>È!†ò(T‹w¼f;õßX;-³ù$ÒHÄqˆdğøU$G:Qà=8¬dç¼>a‹é9ˆ÷Ï¼¢ş,?NzI[I;b˜1äÓ¹
íÎî	]£fZjŞ³/ã |ø/&Œ¼5Ï[+£“óÎ¢ƒki*L;“¬Æá‰²\ÂÄ»€A±GóÃDH'°~ø‘T<ÈßDM¢x†#ÇJªr°ˆ*Ó}ğÆ+ì²î¯gÙÉ·‰5-ëŠCÒñQ6-yÀÒAˆaÏU<Zí^œş5ıı¦²B‚¡±séÌÜjt…Èª„Á¨À)³·%Úú{äz’äO|—ÿ»®Fğ-›?ÜÃãja…‰ëœÏä´r¬ñyNa(’6ĞÆ¨¦£ø<šXâ/Zd5gd­˜3FÊşm™¹â’°ÇwË 'ÙœÀïCOº?„yn‹ç|8Cq0S3:i.©}–Õ3Ö*ø¼{²TC-§pIü¹ Ã¦RlúùØY–ôìİ(-ûÎÅóî ü) F2¥¿CáRıãğöiŠØãâ”±DUc<¬W¦¾‘:µaø½J/Fj ®¬¸WÇ¼kv.	Åó¼‡"XÁ=|x„!Š21œNPaÄŠc<IÌÜº7ô<Ç•-Ò©x»¹#|sÀÑº¬Q|Çm4’?
ˆsˆH£…¤âjlß.D…‹™Æ•òş(2)™™a¯ÚnDäŸq\ö,
İ…á¢Cúz„Â(ZO+cãñkÀÖ†eßös,C«œ÷ùO è™x™?[¸^Ü-AG†È›ÎäË¹!Ï8Aûqİ3~º¬Xša_Õlë¸ì0E©ş@=8Õ›¨Ù?)Åú-m-™ça1òàßE£\{ò¹¬ĞÉòåŸıÂ·d1\Ç„P‘»¢ù¬ÊÇÈ¸ÚËE±±{Oav÷$%Øš-›ò˜lfÛé,±>œ¡Ÿ9õ·ßÒú?Àab'!ÕŞ‚†Óe#Ø°v&Ãœæ5-`h`?¶d`›NGË.cœ#d–±Å_Ñy ÈÈµGR©’ëA.|Äß®3$T–-$:†İ%œæû=ç¤)5Û£ôÉbeÄ¬'üo3+†UÉŒ„ÆÒH$Ë+ıR7w6¤i¶¤o\Ia€ŠŞˆp•,)âW{j\Ÿ}E}´lz5Pj|¤ßªtİÉƒB	÷;Äß!sü	*ê#ÙL•ö®§ .`Lfş=›$½Ú@ìxª$ÁÙçş2~íqË(NxÔ•zœ …y@Ô[î)óZ3‚:Á±ğ,®ÍîÁ!Ú}ÄòW0déH–¡5Pào¢G²~M´å‹µP°Ók2€àëŠü(79Â×}d¢|.@û_>“r&•cf~{1/¹9™ïmìR/ln&ÙîS`vÌYBBºƒößÂd¢usûh$Ïdşä'²8S{Úõ]òš¶fº“'ê¾·Gµ©W­Dø­*ïU"üÜ ÍCn¤ü=[w¦PX>Ÿ¼Èqh%=WPİÌ{Œñ›Tsgõ_S /ur° ŒÚÛ,òğ¹]g¹¬Ï®!Ş5»Zf·”Ÿ -åeIj¡sjü¥èşÛ>ugWnyáJÅŸùRGã{0BŞAô^w9Êˆ©Õ[`Ñ¨"wvPó.tpZlövu˜4m-ôÃÂ^8-{CLBfüDU(pn6ï–Š|6]³Îƒ[#¤ÿÑT/¥ÚƒÈˆjÚè´`Ùî¶—Û‚Ó/™Ió`g²P¿'¾¾´{•†„á[§¢‡M
(ÎËB¼ö3ìµMsñ‰Ét{©k…÷Ö`Ê3{"’7SââHì—ş E‡ÀwÇÿzƒ°¸öËz5ï¡ À¼  Î?ìö€ Trabalho1/ModuleALU.ngd
 Ô„GPzÙÏnëWuB44U_V_¾ü*µV5Z±UZ,$$$„6æ]‰°åô9èGĞìÅ/"nuOz­ó›çÃMâ”’œ„Yñ¸ €ıÿ1c1ÂÂñ-¹ÔgRÛúíÍÌ÷ì_v¶¾Ç¯Ã/Zdéßëñ›£îÙ/Ù?×Åû]NFó§úíáì¯ßg'şÿ.¿¿Ú•yÃÃCG_OU[Î¾XlcäÛ•íÔÅ†3¿î‚ì#ïŸ?c[XÚ}
&=PeÜb£©©³«¾}7–ôer	–£E9ØJ4UNj\La#&|Áà%±š;gx&—Ã¡•³˜¥gm>	 yĞY\Ş£7V‘K?Z=LìÍy¡'<aŸ–q"$0Ì
ú«4*GÌÉwF Ígëe:p­xÍ©ú{šÓ·´B½G~‚S–íÊYÚY¡&Lß)S˜Àë0ÇŸ—;r‚œ™¢Œ…4é¹yYûÃ;9Ìf¾dî-%"}Østò·¶u¦Ğ£¹·?o2)ú¹QÅ£©»<jÔ(‰ÎßØÏF-zT§éçh mÒ«3L/™ºdÊTtôö³ÇÙÁ¹ R†ĞWhçå© ı±£›—@Ÿ§FvèZ“å£'O<º9N*”™ÇŸ ª#Òr)‰“´Šş÷•6sƒ?/:n QqeçÌááÜÒŞÍ®™ó÷t/²Öµ@o4Ã×ˆ3óšW ŠZ›Y´33·tb&nfîÎœ×ŸĞ›«7)EÏ-øBù—³7_î½h´  $g™AU¥3CG.(ëì½sõ(MÍÛ\jsG_uĞÖá¥Âeß¯O“j×Mû—/>¨ÿwnXåã»zğ6Î
vô¦l 4]ˆ±gQûïÓ68i!üf¶\&Íûíáw‡ìsà\¢œçŞàÒ ä¹›:–¢ÛkÒÛà¶å7õèèmÏßÜY¡:šyÎÇ´á÷€ö´oåhù€Ñ¨]àFÙ£r§V»É{ñ‹feƒp+ÍÇFnÄ,7ÚÊ§d8IÁ?;O)gİØN´Ú; NóØÀÅ-£ƒLßzz“Şˆp6|Ù€‘êÿE$ÜŠ0¹àz=g@:_»€Ë­=ıZ;ºI{y¥ªÚÛ²é'¶3æNÒİûoåÍù¿ó‡ùáÜŞÑ÷èoˆÁãğ)×ûîŒù[ßÙÕÛÒÏ¤¡¥Ü:j/‚®-­Îªµ&İé«í«û»<õ+Ì±ØÚ¯sƒ[¢ıín>¼X$V¸u8®ÜÖ­ÏÛNÅ…)¹÷ø)XÅsŸï«ªÅZq‘¨¹»C›=\<[#ışCŸYÚl ^'—Ã¨Yu¥ÅÆêwCíÏÒÜ™Àø·ŸC‡Eh×Ó*d7œÜĞGŞÚÔSğmï£vw’H	€JÃ½ÀMéâ!t)­O·¤…1­i‹=|ñ¬†Œğ9N-]›^ÊÎ£+xf×öçš
ŠàÏ,R4#UnÇw$#„¡Á`¶|öx­·.÷ñÁ cé%v‰{“‰#-b/§©ûsÇí†o—ÅücàÁùgÍ\âğxcKÀÔ¸äà­R¿%KL÷‡†NzØ®{»|p¸‹7íßíã¼İoÍm\]œØx½ßVÇÎï_¿ıúıÙ“9†²éçOå~ã“„ÒæñÙpÀ¸ÄTÆà?¦gjDíÈ â«K÷  ßHÔXRï&±Ğ“ÓúÂûø—xIUà\kƒ~@’¡‘Q×*ªk[ßx¡»RãâäW‡ÊÛÑaòm, ½ƒ¤g†]’TDˆUn POûœ´Ëe™:õÃ%.(6ÏŸÿ=t¨–^qy¼Á L+’+¤…î/à* g½a@×û'Ï _äLb,åa.2Û¦ª)3áH‰ó‰è<·ä^ğNDE +<˜ƒ:Ö½æYÌ—«  Äıå  ;öŒ2¡	wZÄV‹Tx]ã”Ğ”•èèÿT=Üö–Õrå€šô8Zél&½zğaØ¾Ç6ı#ÆËê°kav£¯ ‚{a½'ô3¿èÂT}Lgu–– ·†FñYq1…L³µg‘­?… 5#pìãÂ=$rÓg$Ë*;šÙèù¾/TÓÊÒéfB4ş^¦ûY÷.ò~ÉS©ªŸ˜Õbé«ÿÌwâä9ƒ@’ŸóÑ,g5™“<¯2¯³ =#ğöƒ¨3Hy—ò5h`ñé†ØèAqÏü¢¨iÒ"™$J€”_èíÂşŸÀ¾Áú’š×`àSŒS’ˆ¸Õ†íGî‘ää~ˆJD{+6Lô!•‰˜g×|­áõÄ€á7F¡¼e#{P÷S…K	¡%¸£øM`—”£-@ş•‹C®0ì áà7È¶£Š»L‰Œ®1;Œ&S@àšŠĞ2g¼VV`y`$~»ÄD^+Íkéò×\ï†»(Óû¿|5)AtÊJ‡8A|â0l¸øšÊUi¦-ŒÎ±9UF‚xÿƒ=mDÉUFaÀªc…NClk-~,yºäªó¡ĞãDƒ‹ö‡ l¼ÒˆÏ–T X,"ãŞ#ú«~ğE =HyŒx\“Ê9Xd3Œè ¨=M_†xOÑü	f!¦k¦$°Ï¤/•Üœh™@ô‘@È3dè4‘Z/ ÄUÀÛ¿@t´¦¸f^ ™yûÄFG’™NÊ´2B¦1Ú£|3ãKŸŠ²¬0¿wNóÄğ³[ÿõG)ÈŸşã«Rs zDİ÷É+T‚7pÏ±ºÁş»O5È‘_oÈ/‘„¨à,“`[: °÷ôú›¾ı^yk®ziƒÙ¶¤û]UÑ}«F$"v~®Ú| Åšk|¿Ì„T~Ãwß2 —X/ŞÉ2ÔP{ İ¶(D,>Ş¿™¬ÄA¶ŒçÊ rÂÅQ–øw-»Oq@è[¥ª±¬r°Ówepû$.Ë£nÑ	˜İ^ãØP¯rd/»ğ…¼H'˜ıÀî#vŸ¡œ1.ÄklØÖ†ËÑ3|÷>jÁÚïŸÇô%sAÛBæ‚ŒkJ°YvÃ¸­Ú{Ï	ÏmêêºJÀgÆ-t« „q‡5³âjÆµÜğ÷–ñÆPÛÒpú€²gÀi6;ÁÈiZøE 1"Ğ-›¤¬C¦Ÿ ‡u‡MÇ/µcãN÷ü#º%gD„'à^´4*èrV¾Âí“‘µXDz¬+È Å!Ğ3Õˆ$$w}p©ˆmœ‘8¦ÈĞ9æE`91‡şåK†;i&°$DT€™‰0H³íåúÅm¬m‘<,Õâ©Ğ°oáÈì­zÎÊoYPHÓt¹‰öWÒ–¬!?ÈÛ>l4fÈÁTÿç1¡fga&NEX®ÿ¶ÉÄ±<ÈüìxrKM§
‹c¦«‹+SCv<V	È¯1áxAn[	ßYZóÃßœB6ÖÉe*ÿÃ³ìQ3
Âªn1‹üÂ="…’(ÙÓ]üTÕ¼7±×N >„ÑÄylcP)<ƒZ…©í(è5Ã=êæÄJ°Ê: O³!"*³®Ãé!]öo×©¥ü’À©0«ÄüÜšäë’Ìê,³?p«y7Añ+nÔëSB…À¾ÑæV–Çew(Û¥b8}bÕ¢øÍ.?'Ò!Iu/3P³ a}×âK¥©’¾l/y¬~”–ÜƒÉC;\”Õ7½ìs_-€>Ëy‰’Í@/†A­ì8†6ÜhÇiû¦PÿÂ`ºÄã$wYÕ%Öüo!°L–añ*õ—ld?9aÆ°OIŠSŸ–Š8'û³C¦†£Ü	 p"‰Oö™A€$~“óxQËShÙ÷'è&¸»V/Ÿ¶ØÚØ5é^”Ô E"Ù–ÌÂŒúA·•ÒA²7ÊıUëy¨=+oP$!òÒÚUÜ2Èş"²àö¾|›à–Ä;ø–›L^TÁÅ>´¦&š=l#¬³ÿÕÈ!­µ
ô“›HX†hy–Ñ‚²¹+Ç™qÿÓaşvÑ7¤—é'6ˆT±ñ-¡UZ7òV…e/ı8Ÿç”V ¾á'-rÌÓ„’Cc Pë2U‡eC{ÿWBÒËr³0uXqáÜ¾z71–¿ÆÀ‰gôµThjsÕÅpjHw‚÷ií™(+'ÙïM´‚|ŸÁ-œx­ —|Ÿ´vÀh=N†Pï˜Y¹§#—âäÔr¨?WClE'.Ks…èù
/tÊû®#×¬Ş2Vÿ}§S{ ı›ğ-úa%ò¡ÙDîãª"Îrí±bnx£ôÓ›®àãEÛÂ	 0÷ág­yab‰—Mo1]±WìªùğXåî+f‡»ÄëòÂ‚°"ú¹Ğ–İn”1¼¡­ øj„ãğ[mÑ|Gs©…¯Ğ€Ï‡L°dñjÄÖA‚yYß$wî%AÖ× …é‰ê	õ0Á™…k?×Ğ>"ÿN°ö²#ØVG¡ _;ÉÊÕ‡XwbÖ(×|ˆ·™-¥Îık`)|‚ıÅß†Ùï	V\,£úbIMëäô†.yU 7T óÑâ›Í²IpqxO<&ò/Z”Uäãğ*G·
Mp¹×gl°Ås}Ü´	ÙwÉ¶Şw[Óqì5^0¶üG@Â×$‚[{Ãló?‡ï™6ÏÙ-æ€.\Àè0bü‡±ªOR$ßtİöä#Æ>–Hš"X:ÄëyÖB;ùp8Ê1ÜBï4hA&˜çXRàï;	,ŠÇ¯t>®?Ş§|ZÚÉ`Q+™J¾#ª˜oL%	º²¾	õÁÀE'{¶c¾4ıÑVó_¼"]=AœCuğq¬WP%[êç^:_F›ÁÁ|<Ñ Ô&‡r½eâ"ÿ¡JbŠ .H‰Ô1ŸÈ.7txñKéD<h–yÖ© 3\İgl İƒ‚Ñ±
rUF'eØRE+Ó³´­õ².aä‹“ÀÅ(œ½ÁÕ,A=³Œ+o³Àœ ;;é¶Œ~Z<„8ò(™Oñ¤/ÑşGÛlÔ~±ì½K»¡Ğ1İÇ›ß#y\ı‡‹Ò,oG´¸äïÅM½¦ÑD·Äë4}[îßk¬ç…ÛRÓ\M‡ñ%Ğ)W>³ø„A·.¶”»n¤ğj5GÉÑ²»£l%`çüÕî6(^ÆËZF‰ª)î]ƒXi…ìCN:×ÛÒÆñm®Æ¡djÅdhdhÕYñ"¼ÏŒjû&RÖÜøàîñÁf_m8ÛNg:î4Î{Vğ¶ším¢ê·a¾§+¡´pÒÓ¬œ˜j·¬îmlÀ¯hÖ×ÿ¢3_¹áajêd ‚cI?OE\/‡¡ú›ÖÀ‘3uÈÎEå[ü¬F.V2¸ÅN6Eÿ,¥\¸ÉDçj-uW…D$N:!ïî¿NĞt'‘µ&|÷ÏRÛÁ +ô¦íù”•ŠC›¤ÃkN¶õ•!t­ÎMÓÙI<@&0+ Úè³[ÙÆ©a“Šé’^_u–âdì³¬——Ìß@:ïUmî6Ã ­“–¥wTw¶×tU¹íÛaò­åM›xÌ›ŞÚo…ûñß
#ÂnlŞçù§ĞßèåÒÊ<@?8ë2 Ÿ‡€ Trabalho1/ModuleTest_map.mrp
 Ùj_ŠÙÏtç0uC33O5v_ºğ¢ ´[vÆ«é‘ÈÆHã» qÆ#NİñĞše¸…]!tI^‰ïIWÌÂ›‰Æ›è‚¾Dq§‡3™ĞzWgğœı‹8N –‰|µ.%˜’ŠÖW´¶`FëÕ­b±|G½ÆŞã³ğ[úl¼>ç{of@Á@ü1¢èJ0ÙGŠ.&&ó<w[ù$˜˜ıË-¥'SÄ¢ë1¶ûËTÙ²İº/È‹À\èVĞéjÄ`9¶EŠİ«Z«T,TË›5K5,„­:†a’\òå%hVWÛAÊCéôP'„*»Íd¢ˆ~³KœRÌÉÀ=w¶Ñ­ĞljºÀË_fG„ÄäIğÀ”äS€k'H*ıÈ‰ö$q@c –ÛQÎÒ;‰•eø¸‘ì|cn3@?ÁvÄlÎ/ùGõ«uxíÖãEzµìjŠ¸dÚşh¢µğ›6PÿÂøn€•Z­†xL9î´+ÏæR1F'úr’ÚÚÛ(pHëØ˜Ÿ¯kH®ÉY«pÚµÇ3Vöé¸8ÃJAGÚjH'Ãj4zú0.Ai½ĞÔ §Ä¡ 5 ÂU&<\ÎˆRàˆ`aÃ Û¤Ÿô({x‘êpÉŠ²È‘Lâß¶¤v1Ó… db<#Ì¼„ıà`<L}ÁU9r¥¨â?×–¹0ø$9¼H¤‚Övñ†Bêìç¤˜HäÖslZ•ƒ¤ æïÒ®‹ í¥BûïTè¾ÃÅ1ÒV_“Œa°%‘Ö—Cí¢ WµXh±Î´î—oO5àÿ¶èŒf‡› nÀâN‰J&D–¢F•¾Œ·SacöÇÙ#í£Æ‡¨ÎVŞ$,i)¯=Ì}ÁXc‡úO@¢Ğïn0s¨„¯™qàù‡m-QÁ< àg/sÏŒ2ˆzT›‰y—Ô]<L°Xw†Íˆé_„ÂËU Úï&„‡f¬@ËOª%b:éf…ÇÔÓ#‚‹‡èÃ
Ÿe@hÜz³<«œÅ¯JZ·Ÿ×{—œ­àÛ+( L.§!
˜<’ê5™ LÎë–¿Ü¼¾İ5¤¤ª†³ÆÂü™»Œ/Ì¥‰9ºûñ¦wõBs¨ä¡¢	cøaD¦9´œOxÔ;¨hÂ¿ğ’‰P+ê~ô'@+ÊÈ­xŠîzTI?² Â;ÒÄ"*…„ôÏÂz¹&rù(I8ÜIÒ†ÜWnëÁ¢›©€äV—ÈÎ˜tÌğúd*±æÑ?ŞòĞ¶–Jê-º63g ÍÌFç2z0©î|‘™[f‹Œ8Kå72Ë‚H°£á&è'lc‹g{¥°•"Ú°ÉŸIìÛäŠ¹"úÏ³?’K”82ç•Í™NÔºF1ÀN~·µ(ñK/+3ìçF @'P"M…£Â`ë ƒ’Sç#aåŸ†•Ç,§1pKùŠM€åf½ƒj¼Ø%ÖĞÂ¢?œ±@±²·šHYŸ+–(¿kÊáE÷ºcÚ*6¡¼ò1çGòP;]À§K!)8²SÉ€±ºZÙ•Õ6Ö[ªıŞËcD‹Íã·ÅÆlKï¡/w¶
:(ùá¦ÙR’² Ô€ÒIEPÄUçÆŞêbİ{%A<Î9«Dò3Š‡Ií~6…-YD§Î™Õb„$‰Zµ§Àôf.(Î	A–.ùdUt0yûpdœ8£CX¶ÚeÊvqˆ²ÏY²P,–OƒNI”:rA\‘£”°.e#ÔºÛÅtÔô¬¶ã!›Î“$û¦_Æ§émê¶ø­â§zû.¥|x¡Œğ'ÎŠãpÏ	fÄgı˜ry”²åWÙR4è°ŠmŸÇµ9‘ï‹à‰ÿQ­ß„Ãyñ]ùu]¸kØ°àé¿rˆ¡w›Rªxí|æ‰<é…Õ£jÍq–'è½ã·'€ò5µkÿò¡^oŞ¯ğBÊ•¯àÄÆŸ;ßN¾Ì6,yÔ©!ú6|iê£ä_6±ŒÎ5¥ëëËÀõÓ‰zßïz¬q¨ÚöbcIÊoşIa†÷gÖ]›Xæc§Dæ¥5²jS[&¥5£ô[ úÍ¾+lôNØS[oÑƒl,´ê¥ÚF¨G[–’ë~_IŠŸ“e–¡ê.ŞåÎ{OJ–c’/H4»Ö{@ éà‘Î(/m½‡Ó¢îQéû»mŸ·×1àÿäÜ[s×"¦ŞË1@l{PâÕ.ÕÑî~êî¾W[xìq#ØÎä[ü»[I>¢|2+À~ò—àÑäo—©QãèåNĞï³¶öJ¾~¤Ecâ”nX³¸ä)vŸn2i>´İvÎ©ë$ÕvÌÂö@\/ “l9ì ’¿  |1€ Trabalho1/ModuleALU_map.mrp
 ˆILPzÙÊè0vC33O5u^ê|(ˆ-İ±ªÓnp±£@sÍƒ\qˆÛ²İé¡4‹q
šKW–Q=æ¥gØIm§rK¢ôÏ@8Ó'3ìû8#
ñ¼şïÅa3ôàÀ3ÁúòfÃ§æjŞbµVk²_íy×÷,{òt»>ÉÍ…×ò)CRØÅ
ØÇiø‘¹>Ï4J0­\Ã²cfÃå|2µ#°>jš½†£1÷p ®õdùHP~$NÒtŠõÙºñîÕª*cÉ’ÆõŠ–+yNÔ@ğI¿<d•öØrBPú€ú	¿BaöÜ¡‚?9&„-…s`Ù@wëu²%Ù ÕÏ•y¦ş­ÉÅ‘³ãß…qGĞX1B4—Ä|ü‡!@	\Uëè!ääN™colşµ§…Ş&¤(ù/ÓÚaëo«6jïY°ÚÕkWÏ¯Ê!œ]¾œk£6 PşÅ n€•uVG`V|Kõåw«dQğÈ&çİ2†É»ÕĞÖ	pÊ	—0àZŸ[Á²Éì³µ»»¹>™öfâv9"w´‚6Ü°ºO…ğÔm‚ö;ø}½­áÔûïÕ %¬°5#@ÂU;^í<HxD00òH6iú7æå~œ2r¬İì:ş/¡ [Ÿó±Ø4ùÑö„>˜À•™:‚*1ãCrFŸ×…–Á`€ó#Y ´¼A¦áróğRL&vôœÚûµ”é-Î%Ïfú‘J±£«lÎ6ù9°üµªÏÖ±6Ík­•m´şd éS…èúÔIHËƒ/!¡ŸÌŒ°EÚ|1#‡19¸¨ÑÇjáäw(X.Õá82ÂòRE.cCqŸ2_ì>"QëÏ³&nYe‡ÑFZSÄcuòÀhwbAR"òdêÎŒ"U0„À¯[²C¡ŒŒşÈSh­}…ĞnÀMv­q%õ>ª‰×HÊ|™`±—ÉfÆšÄÚHY_6ºÉ¡AÁ‰,Âuˆ]’‰X¹™¤!Å‚AexTØı$0ª´9ñÈPy(Ûi¾ƒášÂ`F:¿Îõ¿›ÜÂÊİ¼òµZÂ`p!Q!TƒË4Ç€0ÒİrR/æşÿ³6ÕŠ¨aÊ(%ÉÔ¿ Nf"Í×`‘T&´(Z¸—*õS-'‘Ö³çHWæ;D‚TŸ¾õ”¾ 'á<²×Jˆ'öTİÌGzXƒ˜EP°€Ÿ¶“j÷,ì@!ÿ$	ckÈM $0¼¦[·§Šn¢â®V~ĞäÅšg‡ÑÁãöÉø$D½åiªY+œ·• â4àÕÌisšM³”÷@Xi+jÑrC„¾SqÄøÉG…ÂNØ0É®ÂC_*D#³#F|iñµ£
´ÇJüjhÄ¯1Cc°&èÉ±1ĞŒ¤cTç¯Ê^„¹ºÑ“¸‘QqKÑ@N ÂE†êU/sPÀŞ˜ä•Ğò¯iNŒù‹E²×Rl)•—†Á×U™¨KdlÅ>D;%Ä2ÆîIbik¢°I"‹ñA6´Ì`x#¢Mb!CjÏ‹´ÿØy@ìMõ,„¤ÛO&*Rôn›]ynòY%áÙ°•?™Pìpclªæ—mŒÈT$#¨úpıBì5ª–šKÁ(;fë^×I‹İ]$ïZF^“~r¾£&Ğ¯É
£ÊÕL²¿ô­¬aù6ïMÙaph$hd#>Â°IhÂ6âSÍMwFİ¾zæÙTÖÎ}Î;%böÒŒE¹ÌiÖ)Zˆº-ÇqıÂ…·AÜ?=nÄYD?XFt´­~®O&uÛœ¸,Ö±`ªç³İ0JA¨D'aHó^Eƒ×mnsSÿ¼4í7c-Ö
“B¨Lò¬mğğ± ‚±§xğ˜ò:ÛOS³’ 2ÊİÑCÒINİ7%n`TZÉ’D2:ÿ ¹Œ|“8	¯×5O+¤’âØùíÜÅ=‡ï0×cT4«boDÜú83Ù6î3ú½\9øÃr]â?«Õò¿ƒè]¦ñlãâï©èÎ½æîS½u¬¨<ÿl(ğáq;á"@Å¾ÅÒZ‰Ï<jû*“^ñWKíèFC”ß>Ôc`Ö¹ØŸ[|INÃ~÷“_wÇÌõJ‰İ­ïäó¢,ª3H5o’N¤–ÿ
÷kÃ‰àN™õ­IP­¯æ¯ô#¥JL+·°àÍßsãÃÍÏ~½
$?>¯m"Süæ¶1¤âÌØúÓOĞócx?mXõ¶ç¶š{‰é§¸š{kóÚşèâÌØÿFÖ?ûæ¨Tmà|øpf9yWŞ™×îsôæ_·m™ı×¿‚Ö=S‹3cë~+Í‹ÓŞ?è½æÕâvÔC6¿Š#\,e¢—%ÌR=/ÿõƒ~ŸOÑèÆ ¿Ê\£åÁ“›‹E©%Ê.]QÂ pø pVcâ-»¨ãùa”]Ê<d¾;m>È|‰SÿÓpŞ/…MFÁ@lzö#Ï.ÕÃL¾Wü°æ9ø=_GçåÙ°Æ„ñlTqK{	öİÁÒ@^‡ÇÓÃ;NĞŸ7É=æÉWSèlRüsÌâãÈT….Lwd&#éA“Ú§ï JQuÌÂ=(¤€è 7í	÷ ™âÚè€ Trabalho1/ModuleALU_map.map
 ˆILPzÙÍzé0uD24O6u^÷áV¢ÌSwP40s$‡Y$ÃJˆ!³7«S¶Fµ»·¯àß{ÑäåU¶@š±jÏ´»¯‡+åuoÇ«øN~¥Î*\ªñ\‰/N”8ë|èÄô¨ğníÇ/8_‘úG¾Nş­}b/OFÁ,±ÄûÔDµ#¹z„p®dv&x´|¸— –ìÜ­5TíQ HÅ6­ğé®µÈ* `(jú$&=±²‰èÖC‘¹lô~ôü÷.‹pèĞïC¶İ_‘LÒLõÃ	#LÓ<¾ à”<-ÎoòB©ø7º6T¯…v¼@v„ĞP^‘“—q«´×ƒÏÿOJŠÜm¥òÊ”ÀÇô;	P7K÷§)N	Ï(E ^'ªÚ>xÌTœo›™
ÓÂïcÔ€ûG¨ ïJ.9~çE÷D[våÛÍ5§òzk·ûùRı3EF»üÂe£—Ú+åÍêòNs‹PoÛmy`ÉŒ*ı7»°ş6upÑ¨PéNyß%;x§›À.1Ïş·Zi/¥P šäè\Ev¿B×LÔ6F€ªRDÑ*|Äm#=4#XBHÆıqt¼¡ÖWeÒû9´Ë š @\â“©2ú'o‰púÑÓPĞĞˆ|¢ì­İ›Ä0šÈ50ÜA¬ÁVå$ˆo›ƒÚíç'NWã!M°÷®æ8TÍéÄ‹ v4ìãvZGæ×ï‰¸_kôÎ&ŸãşeÍ=ô3W7L	n=f½Pç„O£0lÇø|Î €¶âk¢AÊ)HF(ïë !²FCZççùU|lìŠz&ˆUşE¾ı2Ä$Q‡tğ»ë¨æµĞ5T?€U¬©½Íqë½³r3poñ+Ü0‘øô«Qsgˆ•LköÊ”£Ï* ÈXÔyGyHO¤ 1G8f0Š˜a/.[dâ°äGø#îP-èo8iÀC]½ı\J„ç6ô{ë!*àâQğë?æ*Ç¶ßfufÃôÅ›ë÷Tª‘uİ‘¬%˜,/*Äaô·×Æ*ñ¦ kº2sà—üI‘skFiÈ ‘Ä˜ºšd¿ÉóÁÜ\U<:bÁà+’Æ“¹"§3¥ùÑb__†oøJEê£GW/$O&í4,°@˜bQÎ’´JÌÑæ3÷8ş™–ÂF>ôŒ·Œ¶%½ƒú–aÅV‹¯ÄrWa¼€Lì«]k†èˆ©L°‰Û©yJ&Xv$Ï³g;Ä´aeŞ¸mi&„£6EÃ…ˆ9w#ºëëc4„;À`OM1‹›Œ0®´AóÑf'Ç@Çßêƒ5³‘·îÿlV¥ïÅÍÖëA‡ÊĞ&fB<¿½\.JEıÓÓñ³‡ì*Éa·
 ¼Ë§G™…û‚lbV÷c]	®=`h0nb¸—+õcÚQ§HÚ;´hÂ¾×hJÁVÈïÕHTÀ(ğøFëµD”{IåÌO~,Á°E’°€•Sµgh¬Å	 ˆü)ìñ¤í Ãåçù4Uu2€x’²íÎk*x àl{¾QÁuvÈ¼±5Å¢»]¹#Ğ~g<xÎd\²&n·—p§Ìn3¶1DlíÒÉ6$‰e¹…)	}HòoüüI4¼‡•Ğ3d;.h“goş9š¸ Èö  ÀnöZ€ Trabalho1/ModuleALU_map.ngm
 [KPzÙÌœWuC33E_w_ÿ¾.îK¹wrNI‚	 ¼©àOğTŠH¢°”Û’8ğFß»*)ì”nrù®÷ğû·@€*·DP¡U°¼hc¡çİÖë  ”š%ééøW-ZTø><ÙÆ>FömînãøeíæÒ¥ÿ—ºŞÍã|œ±ÿØêv6§N×Ç‚nêş_¾ØÿÛl›ùù&?®[k­Ë½Õ=ñş”ù¬¡ØµéprsœĞˆ«‹}fu×½rÚ]oàä‘==~w5Y#ç‡rv	iròñsp;¸ÓO³
a½cÒÿÆm9±xà¤t#2É¢ûî¼E.G_ÊåkW;j™§·Î†fæsñgpŸ+K›Lç§ÎÏ.†ÆPÌj83§­E'p.Ô‚!¸”w²ĞâüúÃû«Å¡ 1¼&İ<ímÑàç¥§¹”3İXaÏşîff¦XS4²–ÅGkO]NÓÏ¾‰‘£KX$<£s[+[WS|_fD-ççóğëåî0Ğ¿ÓÒÜäÒÎçÛáä§·K/3L5Lî!ˆõ(›Î®öğÎ÷oH1Îm!æmvõv3A© Ë;;C¹œò´)Âiğlæ…X%Á©¡ÁÁÏ®<›»,Y¼üšá &Şw(©f†­¯Á§©|ô¶²³òµ6ówuµ®1¦0ÒçÍÍØËË¯>=M]ºcã¡¥ŸY»šûÔ³¸sxƒmZ\A¦ÕS”´Ìw³²õT€9¯ğåËäÜøF¶¦Ó‰gZfa¸ı·4÷vıÔŞ~!€¹Íí=½÷™ÍyÜåBş“Fˆ3cµ”ôBØ÷š{OMÈi…ÃÌgæê…4µsò÷÷35X6ffwK+{B7ÍªğaqºZüºÙ¹|:ÀXEºyGsDc–ğ‹+WG?0Á,ş}Ş]Gğ›Y™LC¨¤'3 õ³¢ìT³8Q†#_ÌÚàmZz9ºÚÁl¬Íd>>ÚÚ#9gC˜bÇguÀÄRØÎÏĞáDWÏ™–2ãWIx@Æ^¯7>~}dû{€_ÓæÊÒ¶Ş¶V×&Æ®¦g_49<ß.èa»OGD&n…K`
5t7³€k«½ÅÏÃû ø	¦ÿ&Ò…ÿşƒuBîËİÏ·Ê½Zµ“¯lßM›İı±Ö¬èJi:å¨åI³Ã~yºa|ÜÔßÖ‰ Ç¹öùBw¶ÃÚ¬#şŸ¯Ôb^ßãßå¨ÏËãÙM?¶j=ŞßwñI~›Ÿõòı¿L×ÿwïÒ»Ş³¿oû?og·:/w‘¿¯ˆ¿i­ ú†ÃÚE§··i/r¡Š¦,«{ùKÏ¢ÛçÖ273³:œ<?>—Î˜jºra3söõøù)gñU‹w^–ş§? nÙºgNÖ®ŞVã~g8\çğ94ê·4³Ã~›Û;Û:AÖŸ’‡Ì]B3'ÛC¼Ú™¢ÆÎ†ÄŞ]=İ,Ş®6Ó³¯—´x8ôr×É«\*tõ¸Àùûî¿µ½½£O‡C<pãİ·¸\ÁÉÎÑ57^Û[Á‰¿ÄßX€–5-*ÿµ°
µÇ/ÏËºı¿2€7™…ØvÍ|Ø nm¬Íí®nVXàÒäÌ¥¯›¯"¶·FsÃÆ/õ2÷-ş]ÜĞÛ‘ñ±q©æ^ŞpíÁÊkLpá9y÷õ65´tó}ähîphgïrÑƒ—Y‘•¿ño/Ú{ş.nj~†ı3v4uuÌÖÏ8¿ÕCü;;üyšY¶üÎP¼.×Şä‚~lÍİn<Öuøµ6¶5âÆí»ÜúRI,w÷ôìvøëÇRµ¾š–ùlÕù°”rU›ƒ>^í*Ş_}[÷ú~Ö.um÷KÛZg7®JtŞ—^·EÃmËcgŸª[úvşv Ø½ç'•‘úìê’5sV©½ÅÛb§¾®«—@x »Wwõ»­ğX¿É¡vZÕlŞLB÷0¦ü?"ˆ0’n=+ö¬÷òMããf¤Ì½Çöéf£¤èspA:â9må3°ìN¯ƒpäè7¾áu¹°ÃÏpñŸ‡KO“Uïì©ÿüT³ùuŞc{jñò›LGI6ÎÚœo‹˜Üšš;yw•{:â`ÁSmøç7¬øı!TMBÓÖ‡—~¿—În$lXõßş¢¹8ûõ?„|Õˆ¹ømøt¤[²•Í]Ë>»öbÅs«¡éÁÈÀW¬¬@ê@¶†ı±#u}wğšºÆµÑâìãÁ£QZÂ¦éğp[KˆgjT´›ñ€D6¯Ş—ÆÅ[ju=W<:ï×µcvïŒ}ş\û^i|`3Ï½ß¿}[æúº¾¾Ycé^9&íû^8ËÊ½­ËİÕ9ÍËßRÏó_¿ÃÛóšk}YY}Fm˜ttº`£axc·aÈ`ÍAiÀÌŸëAŸ»d\uW¶øÛš¢^ßõUÖ†$ïG,'~²TÕxCU¡œ[;5?óN3mløauš!œHCp)İóxâöÃÈ˜Á}Çöü€eô"üJ®û˜cÛƒbT:1`‘·k2ıÅ[r…*»9 ÌC*a´Ü5[®Š;
A¿1ôj/ÑÛBÆtWÀÀ2œ35Ö¾JïòLgG±Œ"¥7‡ vÅ"ùñÍË®n²tÕÜzóñJoÚ«Ær‹nÇí ëdğ:×Óä7_íYyµ~§¸Õ«a(.$ø$ówHìçv˜ÍüS5]ßŠêOÚú‡Í(ß®0…“z:±Kà¤šõ£ÕrÈÎ¢n@€·ïÔx, ašÁ³LØ·3¢ßµÆ^±VJ¾—\«5Q)_ØÈÊÕãXMÆà|~¤¼´O1}ĞÇ †y¤ÀÏÆßq¤Éìİôü-Ü~ûvø*ÊÀ¿ş^‰8ÔlŠÉl¨ì“|‹*p©åQ&MhRLËIÈ'£9è„ØÒşCÅQJX´ôıÒºö¬Jòc»÷~8™ªÖ[M;ëïû«0¸àøM`Çô›ÕL_ jŒÛe…ûC695P77oûªÊ:¡™ø(i~´dj×£RBŒ—ç„¢"¶‘Ó~¥å6ŠézÛ†_±p`”6ÿŞ btf‹i_ôìƒ7±´Q,!å£#Èaš„5’†oyÀ üTƒå$¸E`‡ÛíĞÜdImZqÖ
¢–•FÖÆî“ËÏQ~ÑX†îPÕ¬9‚WºÈåø¯ÒÈÀ*Œ;ÑvğÄšx*A#«äĞÎSiúC‹#}ª2Û~ÓºóªıCwjÓ DŒN0Í­×ÂÂ!Ô($ÂJ€=:i²§Àev ŸÌv2_Âr‡JßWz™Å‡ 9u“F§›‰+Ò2Æ¾’ŒÑØ°s~+Ø•xjXCËFPÌÇ½çÎÒwoa@AøäÃå5L"ö„à¯™[Vœ‰N€Ë*T£z£‹÷Êİœ©ØõÔ$˜J‚¨ˆ»+Ä¥Á^ÇKa	BÒÂºvØ{ø0Wëá+Ûyp €6Øs\*9+l3êÓxÈÙÂú<ÁÒêú+‹‘k\
FÍ;Ç  ŞÕM ‡Ê)J‚{T“‹r$°ö‘Ôôû«x3%ÃE°#TÁ„2™?u'%qøw'-»g"TÍ¹êÕuFÅ †“Ğ0”63ÚÂ±¡5 (2Óş­[ºDYc~‡C†ª\Ôp¬
kz)qƒ“ñlé!ì5x`@Qè[»‚ìa­€b™É­‘Cº4'Õ®ë˜T~0ó‹¹÷]!™è¼òÆí 
šÚùŸ»²DË@½¹4âİ–!¼\×I[Q-ğ›d™.-€áŒç‚Ğİa°¤#÷,åIƒ¨"NGüˆ<¤^¨CºÚ/T+ K°aP6x9±õ 9„ÌNÿOÆvB:Í¼‡«=h¹•E`S[ñË¥øí—:öÅh¼°_éy+¶ã…ş d´È¿lfí7‘|bW¨Y»îºß¨(ÁÏèÛ”êÖ{§	s¡Àªj¿+a‰åúN/ŒX^Åï@«!ëÖ`ÿ×´^h¶„úS¥”€ŠÏMÚf¦AğåW;Ç½•ÏFtßº<Œ!|9ßq½Ş’P>ÁC@ŸDïY^İ_¬â‡Ÿş½ĞhJ}Ct¶ò²sË–Ye
õê-¶\¡òN–4‚ÜÒdá–nşÄq+ÿÉ]$,iœq¦ øWÃQı¶Ú2q&7eÃÕªÂåàÆ®Ï@¨»ÂIéŠ¬/ À+ì ÜŞ7b¨6!à‹üë.”0Xı²Úè$MY‚V€>—ı6ªål3Š³Ğq‘M•ßÿƒªBFõ(’Ø³=şĞËµ¯¤E±éLUY`"‰|n©„(BÖ4…W—’’ô^r Ó/b”FCÀïù†+®b ±¨ËlÅ¢«T†aô®•¤œZŒuÈH
ìÿÁK?ÿ8.ñ^®^™‹ô^/}Rş+‹ÓP¿BAæa+¿‹¾Œ±RÕ|ç“éÏŸÒ¨jçÄà¾Å‡ïcÔ1]¦~Ö¦ Å+à’â“˜PàD½ã…“ÆUxUÀ‰[©“‹_(Œp¦Ê|â´ètÚdå†àŒ!¸§ñ63j¾k˜İÎFò;lÖÙòšƒfJ"LÔaMÖ\ˆıYKLÚ`ÔÛ¤jV¶Ë”Hÿå‚ä£-=mœ›÷¨›$ñLÀ¨te«Í&òäf%_D—ˆåô€¼PÌ—‰Òùnñ(¾“‰âùÁàöö©D9.¶—tÒD*¢‡.{ŠZ.ìØÿÕøÌÚ¼XØÀÆ°ø¯Ñ#MÉJì”Kh”E3Å¹Ğ[E¹ÖI)È	Ç¸aZ` 9mÊˆŒ»FĞ*¼ÖŸ»Ò¶¹(ÒábĞp-¦ë’Ø=ÃBPYÀB1‡_¾qımœUÒaFWh—„ÂcËŒG@ø…3U~ÇgÕsQm»­Â)#¡JÒ•x])°IëÇ‚á#¼R) cÅ÷ï kì]­¤Go[ ”¸*D%›vlBÙºü ]c±æÄQœ˜›®Ÿ.ƒáv:\FŞ:bV#ÖkéÚ7®îFC`•Ğ,Zœ‰ğ…Yáœ`Dû5"œ®±Nº¾l‹°Ëï¼$Á€©„¬òÑ`®ÜgíÙ	ÃÉŞPc’•å3)Ù- Ş•Ö-×ÀôWS)´ÇOŒVÇ o †Ñkwïn7¼~Í®8GE	8Ù<*Mv€|áHYvPUÅ×şı#°xÜ=@u;°¬J¬§QZ;1ØC!=|{p”ã¾<ÁS^Àp\,Aõî	˜wAßÎ=S@ÀR€ğÍrOtm$jnWæùı×ÑÜSÓÌM]ÌH¶UH¿…u‰6ºˆÜäZT°©‚å¬	 ˆÕßô½¾¢Û¸±…O5ë‚òÊõ€Zƒ8Ù×¨òè·Ã}‹¤[|¢!uì4İ¡Ë »uÓ@Öı»ÁvïU|i[³ë%¡ ‹¯ba9ú©Â¸ÈÂåµÀ^U—Bùï€ÉjACª¸ VçWW´³Š¸{\ ßY«÷@%«¤•õÙ«CFq2¶$/EU²IêvĞŞm[£ëİ*Ét=âØgìh	Ãª³˜û‹j3à›Á"Ò¶¿B"`ÉÃö"[Ó£Âò1l@Á!•‰1GoXuy±²NìÂı_»<Ù ĞäÖ±zÒI†f˜Z‘¹+V°3Ü-° Pö××Ç¤4‹şmÊ(Î¿G´ì÷wÛ_"ƒé`ŠƒÒp8Ì|>zÃ«ÊwÀ[ˆr˜}«k}W]´Äd1¯3¯yIZƒ˜;êº	ú¦ZÄïİqFx†ÜÏo9ÚX‚³ïE4Õ™W$Ş²ªÅvQÒ—:7 mmB~Ó_k÷ÆVjêÌ£¬û]‡‹¿•õ¥ÕR¨Eøa3aèÇjébæUú*08+ªXŠç…ú‹r—[.xd!;º3›M™¥-¥âú/‰!>W¤¨H¸ë@ELù7râÃŒ^¬vgAW\ŒÌx#Lc
Ñ+ğ– ÊÛ	û½ÕB’¸‚ÅÖA¨®6ÉÃP|_¦c¦µå˜ ¢øòıÉIFáeHJË˜a€õö“FOeA*ÔV=“Ãå€¢~x²r€ÿ?@ÌZH‹cÉt–Æfx¾šHs
€Ã	–øk±u±~¤/Ğ5RÙœ¡Ë):+Êø·×mè…×ÔvÕG&vb¿‘gŠ+z°ÿëT/EBU\/Eb‡?BBW]^%jéz‹Ñ¬ĞƒE·Qm((x¶¨Š[e’ˆ‹¥é/I(´](¢ÁtÉ.ßÓtwÖbG\«ÀÒåxHjìH'ñ	«‚T—µÑl#4Â(Î`é{è@„Ô9Æõ0ÂQÈÇÓ‰€“*„Qï‹@»ôCªğ:tå•Â‹ŞŸv;ëæÃGÜ$6İ¦­SR-„Ê£Ò>²õg'Q¦®Íc‰}&¹mrÙÑ”c2”ÁiÇkÜó_¸‚^0™”´ U±ôóK§¡,Ş`ØT½]L±§ØÔ1F3=)Òb™•Ag9;|”IÈ0gs±ü­;=%ÿD=¢¬ù%MØ,yÒ¦-Ö¨!ë}¿—-% Û8Ü0]È_?q‹Ä8ŸüT bgE›4AÙ:œİ¦Œ¶”Â+“¤«‹’Ë¿IE÷0	½qø7†¸_O~ÆCq¤ºmLóQ …]e0­r1éxu ÌbJ.ı¢‰bÀ³rM9˜ÆcÈ_§+f+¢Ï‚ÕÙÏ4Å¯ŒF¨TÇ¬ˆ±$ãÖDñU_®·+òë´V<Ç°=s!jœ¾÷ôùÆ‹UÚ”lHZOQ•Ğ˜æj:ÆsQ?cOºÄ€»Ÿo+Ï‹‹4ZÉEÊªe–2,®ûÎR 7oña¶öCUîrªÏ†S÷hÜœÆn1Ÿ&ü+4nşw<dcı"úÎ¦˜ÖÎ.•XR÷ìgXQ`ÀÑKÀPd%Øé¶tRÑh#6ÄŒÑ
Xë¸)HNæCQ¸dp;ŒÛc"CXÉ¿#˜oGE¥šM&«Ñ
ÀFWÛLg‚­Çï\Jp2kËôUQ2Ó!V]0 ÌzŞ>Œes“H“åTõ°^’¯ö‹ &ò¬uk&²ùFQ‹ ÃQÂòF_,@^Kò¯?é|Ì’Ü/–¢h°çÇÒLg¡{?—Kƒ|ôÛ¨¬Úé¾eËeü‰Q‚Û§-<ñ`qõY_ªüE´†»ı‰Ò ’°dß?øö„ØKˆŸ ¨ÏÉ§Ÿ÷
zŸƒš‰J1e¡t¥KÛ,UÂºLXÄX¢!EÌ‡™ÿ“ÊR„–Qz§N'˜4ü4|fih[)©Œ+sÊp	ù8ùc²?5­óYİ‘ëbA/~n	‰6X¤9ı@H-„;1?‡ˆI[(Äg0¨ñ…,óU¢G,fşGV³uqtQ{å\KŞmş[@¤ _ &FĞÔ!D°ğì€æKDpÌ˜Ğ»Œ)'•LIÒÆïa¿ÃÒ2VJ0—É¸Êª¿¦ïÇo.ä'º4	\ş!ˆ…ø\ÙÇ¬¢Q~;Ao!TüvÙà¿À˜UÛƒ!æ~
òû	PnB«¤šv?èäıµ9¥Á²4X{ıŠH.ı;¹
^©ø†!ø°Æ>	(‹™vGÓéb±â(ñ‘¶½bûI'ûÃ†@sN>rNrw‹5W1Gj*/½Hÿ>çå,İÆ'cçô,“¨°bîTöÏ_z‰İmMåã Ö.,oQ„,dÖd”š³a¨W¸~fPik=Æ6Y@&j?®µGÀöI,Èî¤àÌç¤¶ıF}X5ø:‚#–®A~ı€ïÇÀ{$İßPş³POVKÚiøx¹´^Óú½+SñQ’Kì„S±ÑQ¬¨ñh€8(Êd2‚—ºêÉ'§P›ıãFcÁGO5àˆÀÔ?CËí	¨.[Cyµ³,DxĞæ$ä(`£GtâQ7àF'@2î>êŞ5aŒ-:=aiYó'ƒ_V
Er€YŸ)z2Ã¶°yÀİYFª—Ö¡©¬¢<Tb—Š£ÆQSp¨ø!K†$x_¸l
™'~£`[\jtb,–¦JPT|¸‘Ìæ±ç,’5`v§¨Ä
v[ü—€Ô‡¿˜SäëHS);¡ULñˆã	’‰f ¤<ÎäØa¢§ÉŞ„¥dÉàj  ÛY‰Aß ØBTrn¨Ğ,&¤­¢ƒYƒy~”c9”ÍtÙş§S¨*BcÇ&ã6Ç)´¥ÉÓ0cÁì sÄ’XDR)ÜĞc8Ldğs¨h”‚Øk%/_'zLQ·—™+İXƒ&Y~v‡~¼:š“‰ù¨/ª”¡SËz
mg¢©U¢uaÄa-…Äı 2áâo˜&ŞiE
û0âh2â/â>R/+$UKR¬¿A®î»¾`×²ıhŒ½¡$ÀÍåñ[Å…å’”ĞjÂ^Š‹[å!ØË€Ù5äÖ¢“¢dabS­oÜ_C&^Äé,NK÷‚üÊ8«¬ÚQ^ 
ˆ/-Ãtû5A8û-… Ñ9:²æ#è¹Ñûq[»:XY ù\œy\¨Læç+‘Y-••ètJYáâ£y“Ë#¢½Ğp€®¾8ÔT[V,§†I›ÒüÄØŸ')c¤î8NÙaÉŞ,lÒÇÉß,IEÇ½ v‰ò¬íòÊ„ÒYdœ%’€²Á?S`d»í=n
tË™M‚ ‹MPp¨Ÿƒˆ#º ÉQ/Q7îĞj("U3ø1^»AœÅô±ÓZ+«š‡ñ¢…@«W ÚQ8›ØÑ¯TïŞ‰@Ø+ŒH¸ø\Ñ5/ƒŒÕ•Éº¨—WÒd”Ê&5`kTôª(@„-·ChOÙ@ÖQÛqÚËŞ¡ë¢ZQè].Nñpá9‹‡Iß.')SBPd“”	!d	'!`İ~xŒ±—
+•<%FIöëéè§¯›ÜÃM¦-Àı©^ùëåföš¯ŒQ³CSÇĞ‡ÜËua
ğ©¬%@)ah[# ò·DH5UÙÄºzİYxi|Ã—È=G—¢<å`Š<î}pğ† Koòì…tæ`ÅÑš;}`ü‡M>ÜTûßÚŸ¦bfå±6ûTË¢èCò—gÛãõiö òsóôŒ:Ÿf«ŸóØÅ€g.ª ;OÔ‡İÔú|„V-±¿j}‚j¯µ>Å†ÄûéIŸj®#UŸl™üô»>Ç÷+Ï·_¥yöó¨Œø|+ÇŸp×‚HpD ”º^VçêáK«ÄL]_"¡uTŠ¥Õb,—V2Š.ƒ™îÑ]«lz}Ê¥ÎÏ¾fnç~`Ë°å3¾¿ 'AtŞ€ Trabalho1/ModuleALU.pcf
 ˆILPzÙÂ#»&d43öP4¿xRÉDß(qÏ Óf„`Ülo[+p%™ÇLï‘è'T† BñÃ3É30~²œşÿşâ‡>€Ó›ÁpéŒ0ïä;{Œ&¶à£R˜S”‡¡ÛU¸î¼°>Fˆ£×Ş…Blõªg&Ì·HÁXåÒí¦dóPuÜ³°y4792¤‹ZÛceş8‡'f=e²"M+Y+ïkIN”¢–¼,£Nş-÷ï7ŸÈÀÍ9Âo7•Ê% ÍÑ¥>€ Trabalho1/ModuleALU_map.ncd
 ˆILPzÙÏ
‘GU5#PuT FT÷íŠäG=€Ê,Ÿ2«€Àe6øC/ß?ÌÂÜÄÄvÌîˆÅ¤³œg{{Ğu%•¤´©şÄbÎÂ³y‡ÿP¢úşÇÿN¼ÿÿı:‚Ë×şj³ş½ÿeÿ×ûÿì“
/ÿpÛÏ²;Uşøí0Rÿ÷û,Şr¶uıÛªÓæ–¢_Ÿ"%¨;ÑëcrìfòÀ_1³3Ô˜y/AaF1=£ÃÓï¨"Páê{ÈÄ,·ÄkYÑ|ÇƒNI+Ì‘^eü~âşûÑ'ylÙg¼ÿ	iBŞòog¶0±A0ÛÏ/Ö5‚xJĞ/%dUx†˜«ÿø®Iæ3ï³à»÷™ÂEy©/Û®Â1}¤-Æïä&7Îó9ÂÆÛÖ35Ñå6¥éWJ"U’Q]Ôù §ì‹¢¾ÂY†´gïd(¨$ë¸=Û`Çâ` 0áÎü‰1OG f³eLáÙ6ğ[xuïÓ9Ö>ï§%ÂÚªìû8ûµàü5òÁeã‹´õ!öËó<¥·cÁAk"Ey(ÌDPç#¢‡¿-u×ÿ0&œ†%zúò‘Ãç÷{ğÃ69©üãàâ]\¿GGx]—3¦†Î(£%fÄÀAuÇ¾
C=<	QçÊ-û&ZÉÓsz"õ[uÃ¶[Ÿştï®u£>Â;†Z¥6Gè¥bârË÷É¸2 XkİŸ,<võÌ±$È§œ“ñƒ	ÌôŞ}yHm’S([Š¬ä£ë³â!x·ßøbÄ§òn‹uË1ğş¶C,×°ø!Œ£5Âd+ìY¡R‰%€LjoéO¦449?nê5!oÏ¢Ÿ(wrû’4í°huöˆI†ñ³jpó‹6É4ª’°33E ßzcÍĞbu^À5Gæ¢9şåxÓî¿6°?†oüSÌÄçvºàGÔ¡rDÛPüç1×ğõ2V¸—>ê“*ZAÊéÙûª+
%HÍÎ¸«š‹Ñš!ã¸¸çÓNfĞE|0ûùğävKjc¼nöw‚ób…‚‘UgKsÃ›Q× ~ŠY»†öI¾0‡‚”0µ¹&«h{ïoÔk¿¤g—d¡<’İ‰Ÿä¢¥õLáL'—œ/™şÑÓÃÏ‹TÌ¹·õN1@¯¾U%³ºg¿Ò²}‚Ë/çm÷‹6V“cÙ¨ÌöóZ]néwª e¯ãïŒu‡û‚;`Á«;şÖÚd
ÈJ>0¬êM·ûË)0}_/æ1&pÜ®-eêî/‘/ Û’ùÇŸÄKÇ>ç0'ûÑL{'l&›èRŞŸït$v4RÈ¢c*{Ùh”7	É"¯îu„şÛŞîEıÈÙ>;%¥ËöB›‡ ”/ª]F ¡ÑèĞº¦å*iîu€î¯¿Ñı…Gî©Í®ª‚÷¹^ÍeÎùª»@Í£n§å—>İ}
®]Óá@¢lø~½D1¹m‡‚0i—A´{#Ê,Xk@Ëp¤¯z£ õµSíj—2ìûõ¼ıé»l<“ù®hã,Ë°àÍ8b*%ÍÁ§f*ñğÔšFdüú`bY¨…õm/'|t©İ™®k~93‘8÷v©vØ'Ï~Â	SÎgSvíMa¬q—÷'öŞ‡XG$UT÷±F‰œ“	õİêIµ(A¯^”ğµ~alâM`kJÛÙ&kóë®ÿ{-ôåFƒ03ïÅRı÷vó¿0’!šÎXS9µïñ!ş{¹í@@5º^r‡†
×Wd¿æ|¤Ò^„Pévö0Ğûoê[»G€×¾mùFû$ÎA$ÒújQ
ç8lşòëX@Çà,PöÆ˜|=‰ï¹"lØ0âÁ–ûKn<4ö´è;WFéú$ÇIïõŒ’§Gƒ3 ÷ÅÉó0o
bh¥Ò±Ìw]Úe£@‚Í<~ÓFšï5€ÙfŠ$ŞÅ8WsÙ¯’ÿ’áß®Èâ…-ï»9¾|vÄ_’éÔ÷gëêÒFØs÷&“‰Ñf«ı’ä+8g©6|¼#™[VmµQRöfã«ı}J–´ĞššÒâMÁb±¿bá;à€×úYÒAÈğÚ‚uG™Jû¾ï;fx‡å*d
e[6†a2zS,Şê>eÌa$‚»{Ïä"!¦¯qF‘ÀÈ‘T©Û¨¼ÄR¸¼³¹ÓÄ½ş·\	¢Ëî\7“òÈÃü´¥HÈ=Ï¶;¢¶WÊè/ŒKh¢®©X¿Mó<4ç0½²A-ÄfõÈr Ÿç ×@2±¡F¡u1Pm§/úGíËDŞ½¬^›Æ
JÁ“d%m (®+Owót:ü¿Ó†I6}ßHy=Ì÷½ßPù0ùïÕîS®ÙC7•ê&Gï
35¿ÂÄfa'|¿ D´h4a„‡<—¯ˆá(==ùÏß >éúŒÛQÈñ]—ƒ”ÿMqŸœ_<”á‚„»B(kñAî¾úY/gƒ~Õ­Y	ç 5&‹Ì1"¹Õ×m65'÷£x›J^IARçq¿øè©H'›ÚµA`B {ô•”5ûAá’Ä¾“£F©¦ûy‡ĞDNOÊ«zÛÄD‰OgQ=ó¤ÒØ“v(ø´iúÌ8)
N—›ä÷Ä+	Wk2ÚêĞè°u1w<603546Ogı¦ñÄ<nÉú÷ä ÉZöP]Q÷…™²²Ö}éÎ/ê[H¨Ï|pA[Ä%¾^Keq$³Cœ§@LİY¡g³¸SîêèégÕ HÍøÇßŒ´Æ§ öé0i‚––å´d—C­³U\{r¬.ß }À³Úøm”hŞë¾úh‚–+.Y^—•7 Õ4!û±Ğ±÷â7ÂåŸ „6Y%¦F[åŞàEéĞèğÿÚ÷°,­ûÔÚ«0l‰—AIá•ø%®_nÁ²P^©»YËdÃï¯äw^ÚÛ)/Ø_d ØøÚ}vˆ‹)h¥wù\ø6|íŠKÏf‹U¡?°
dúDşÆW@*ä$ù$¾øÄ/'§ç9ƒb¤—˜-«ût'“ôƒÔ	†’­ØºSÏˆ½ıtaåÉ‚JèÍeT¤ğÉ>hö•õè8|¨¶™<¸3T7ØÓ‹äwÑ~X—7Š}­lhh«gæDw;¿½;Š¥us.O‚‡Nì7¡GÓ‘OúßS¸¦yr<|[\Qhz\TÊ¬—ÚcKR”·€âJìÊ“#ŸˆĞ)Ë5Ëéw‚rê$ó‰m‘ÄĞ¸œ¾vPrj½`áİƒ¨e¾†áş?ƒFkeh]ÿ[“p:ÿ~«_ô!M¹ŞvşÀh¨µàÏş¹ãŒÜjâ¨_ ×DhT=sÆè7Ë‹çf˜:bpFj0VøZ¥¶ıî?éN"ñPØŸP ™qáÏ¥±Yù ğDş\9şğ8vèİpEŞÊ2×“º~˜!1ïÒÏïØj¢¸8¼€:]öe2uõ#®t`rà™YgJÉÄñ
ròüÍeZşP¯Ly7ğ!0váœ#:Í©<ÛOŸ“Ãÿ÷—…¨‚(T›e@mNh©§å(`Ş§9¸"N±¤`p0Éî°éqïR“M8`køß^G×µÒ×4£OK«á’íÑ/°>iëàe;ù–@ÃxÉ=GÜüÿñz(ŞfHjéƒŒ-!şu|ù+ØÈÕüŠªÀõ~g¦æ¬9‰|*ÈÔ¨¼PõÇG÷â«Ü‚ĞñäÓ}G8Æ d‡ZÒôHìfQŞh²(_:^¡UÏ<Äƒ&Î†ŞSäSğ²u3Óôº7â‘ñ¸<o;
Ê(éK$‹øÍ“/	J‘|d¦c2ÑrP¤"8t;(6É>_ZO¾İ2 ’mô˜.õx·‡{ƒ%á–İK¯†³õiÕ2¦´ãœŞo§Şßóö Ğ­V»?‚¸öxŞ¬(G ÒäºEúÓ’EıÇ^ ¾±ÌïÃv<xöÌÕ‚80ˆî0FåÒİäT+éZ½ÿ%•ş.ıú.
Œ{µ¿ D˜wè;óÓáÃÇ‰z~—²{âÊúš~OÃˆŸVŞÅ¡ˆ)”0"T‰cAPyğ­œ0‰ *gÿë{C¾ú&àW™PXX!¦s0Jš²ÜÊÆäºpÌ¼…ôßµE·²Ädw—ÔˆÈÌ%5éƒæ>Æç'é'¯>ÑL>ÅıåópñöO‡ü]šá¹¿6ÂÊppĞz“4ná9øû=xJ§Í=r%²æ×¤€zl|kÎ÷„¤†
$X<ËŸFípo¢SßlV;}Áš;68]d¯»ú§»P]ø?¸RØvuüH¨ã{ ôÚKÛØp+ü ~ëÜÑI·šcCABVU't‡4ÿ$f°@Œ·kwš¶nŞ³2¸=uÀ³€-Ll‹ü~I_ñö9èÅÆ¡Hş#ÉK\¦3sœ©•I|W–m“À”QÄ—"İXˆœÉ§›ÂeŸ$nvä¢ì§öH»+ëiã¾„Sjòş‹öHtšó_l?6S2?¨<ul„šlW}+¥ <ô¿ÂcÌ—Ş|›×ŸÍED>±8IÔÅçOî¢Ëºyóo8È/ÀaM-CM)¸IIÈ®ÕèL;,5¦GAºx4¾s÷?fÆFéoŞp†£s8_[C¥ês-#…õ³7
Ø¨¬´]Yå»£”\x~}ş±l mœN÷?Í¾Å 7(y7p^áqdæ°áN}}ØÓ9Óæ]®û6³Á±L¬îÑ¼éÏÅïê82,†–ÏÜ©:(í¿F8¡â’&mÅ´%Oˆ(’"Z±¾õ/E*éJn6”}Ás1+Ë@öh£ıA¹Ö>²Ú¢°Tà·§È
òğ+Â®æ>ôÉ¸5ì4²¬' qû/š€ Trabalho1/ModuleTest.par
 º`eŠÙÎ¼.0334O5f_ûğ¥° :úgE›ú¶e¹l‚Kww÷FÜ‘í}:ú-³=ï™Â›’;:l3+‘¥ÃÃÂRE¤üpü„”Ip‡Âğ¶ëg³*Âv	â6ÖQUÕ/ãUuÇì±Y+°C'2æÕY¬õuX®€fÿ\ ı¼û)˜İnºiÂÆ>›1z¶Òi$ åPÚdåÉü8®\û€ƒx9ı«ŠY¸²¦K.¡_ÛöÀ'“8M™ÂNW€f™‡à €”\yŸ‡
aøÕ;$w%70³ÀÔ 'ÇdGÒæÈÍÜ6Ğ0©ï€íì¦Ğ=\d<²@àò¾dò8‡'ãëªæ(œŒßEã´¢‡(s}œmğ ^>ğû
n˜!“¦yAÒSo¦ö.ĞC‰]!Øaò¥$B‰?`7øİúôÕ¸£CÁtÖèÖŒ÷f‡KâÆ³è|¤…Ë•‹løám±×`DWŸp*N”@²6ğ¸|’ÄI­ØL7(k­ºå3U¡M\C Ô\2“€İ[hÛÖ Æ‡éU1 ßÙXoËè¾œ:ÖfØ,¾=×î`<W¶±ñáÆà; ùšXKì-ƒœ!™
 	M˜ş¢Ò?Ğ`Ì>Äá)PN72¾ 7¾%«Pe@§uz•‚Ÿ§8(A†ZÃ‘ÂÍ¤¯–ÔÀ#^¤·ÔFRÏ#	Û¨‡(ˆGŠÍ‘tîpÂô1@HÔ"a¦ÓCúD€ïÀv}#CŒÒ£%€FvhG9	/_ÂÈ™ AF: ÁkÿÊàèYS ×m‰"Ô¾C&6Ğğ0‹R•³ºEö¼:¬ö>Ş(0>|µ^k,•à»‹=Î€²nÂ‡d665 6]´BhÎGˆŒoî+„2ä8nÒ)¨G­ôkÂÑXı:DÎ”Í¨5Q3NÑ4İüVR 0fI*5>š<‡Õ£EÚ˜0ßúùİò½Äeù……•^ºªWPÔMe€Åª6Â‰Ep[ˆ(X„TEˆ]¾ôaØ#ìŒÜO–ÀÉdCö–Áoå$IMéKğ®{²qÙû<û£ĞHë´Ëß~è‘üF¶5«ØÑ
¨¦†à¬/<5š¸lú>wZôZìq§"àN7q
í7ÄÅ¥µ¾,['}i‹Ì]÷®öøpIÖ@·SbuÊWÆiÅ>9Ùª<pÖ¹7Ü¼r¤ŠSE¸
µ´˜UÇÆ<G
æ€òeRE87Hâ›´±‘xTrzò›Êzõ‰7vM‡·¯¼¨P5Æ°Ô³"-K¸†Ç™¶¹ÆZnÚiy@,¤(ÇŸ^xÛÊ>€â^P*‘-wpyšk	`ÌœIª/jYNª«±kÊ5[¡Ü+›+×;VTÈ?Õ·ñm«ª¦¢ıÃkC˜ÆÁ)3šrNH:ï]5É}ß?åñä¥ç?(ñŸËˆç_,&¶Éot¼£Ë=ëô¹<ëîÂk¨¾À«™Â2 P\e5eÌŠç_¶fxó+—Î¾m'od¢RM>5õ7…Ô_ªÊÇš«iØù\°~uïÔš¤¼àr ¹×jª|Ëî\G.ùÛ§èÙ»®ºoBëh,áÓßäşDâ*Ñ>æ¤G®$Ôë%?‚äµIÅ˜ÃÂ*æ•ø‘r×ô"ÏÆaïa^gc™`bb«€ñÏh"ôGh5ï—¥¹:¶á½©½±3©2Ÿ8Fé$4nrk.U¾ÎH7 KE“¼’—Ú¸lLY™v£{SbÛıuL»y§ÉôğÒu­'ÈŒ2Ò’,Íy¥Bè24Ù$±¥_äù¤3l%£˜P„ÄzÖß$4¹Ï°  ¥%AÇÎ R¡:8dİFÛœEÉ8§\B–üôï­às´ø’»Tq1&âôù¡wcG,
${zó¢úu'ºrêß
sî	Ù9?¡¼x!Ã«Î1è“µ‡¤ˆYv$–ºÌ;´5—¤ˆ¦ Z(ç™i£yB_(T¶oïàÀæ4<#rß°Ñ¹ÿz.Am;¥RåëDR	¡·ü$\’ 4¾‚" R€Mí€ Trabalho1/ModuleTest.ncd
 º`eŠÙÌ¡:5V43dOdLó¢¤	ÈÅJ´ÓJ€¬&¯4ÕÜjË_€jŞû™©øúZe†Ú‡õ(V6 “Ï‡œÓğ&²lAÿPz7û‹şFşí¸ïÿXòÙÉ§ı¿ÿîğßä¯íş?Çø$Eÿ¸-áâş^ÿ=ÜPÈÿØÂÈLìekèh]BØ•hP§²â_§$ş[%ÿ7œVÿ.Eûè¿·»9ŒxJû1‹×¬†nëk†(Ëš]Ò%š7F÷›å”÷æùaÊsÊíÙ›‹MF§j-}Ô÷b9=%²Gì²÷ á“f.ßWs%j–lš/Ò(|Tş¤•;%’,·Ñòn©¦˜¡¨PPD‰	¯ÁˆKt”QU …˜j>ã÷°"ß$X÷rÄhIv‘DFø°áøÓPŠ²<Ú§ä×ƒ(#<Y¶ÀÆ0a¼w‡ì•øìÅu…÷‘.ª®ü‰37Së[@5'Â¶ÃA#õçÕDÈ{“«ÜUôtqqv@B1Zš2lz)e­+fiv:^ë!–İfçÒ­ƒ<&ùÜ™äğ÷;MFãOcV%İ¨ç#'ˆ0Ê—²Ì´ó•Áúô:Ç¸g=,9ÿ¡•0eœoLwCÌw÷nàÓØvø"sE6¾ó:¶Ê«Rh¦dõœ€¨,Şâ\P¯e¸ì–Õ
¬, ;Š5‰—_ÆèÛhB¨M4ÁùE{(ÏÄ¯«sã¦çªI
r¥ö Fİß3Ê•ºi¾)ÒùüÊ;zV*	JÂ¨³DHo”(ûÀµ ì§LÑØ‡ïëùm˜’úŞíì'í¤}ÿHFÕ2Â~šÙÎşÁ²'«a´²ôz„‘ş(0Ö0ptµ²zTOĞ±ÄòÒŸ†qüy\sÍC±†…úäÆ(ÔnĞóPËJx`O7a|&>L wÇVdnuÓ3²q÷íœ³³
a(ÊGn’”h?B’åoÉD,¶TNÚ¾Ï:K=ÌÒı¦¢Ï¸à¨`H¾ÂgÙ=‹J3(-ìa{ —™g´Ï±¸nÖO¢uû$ß,™.Ü½‘Î³äÁófş&Ş…!]šì¨¢`î{@éfètµ{
Ÿm; *ÿ-f‚İ±óùàp¬%†/Y”öl´:‚x¨r'MrÂ¶Uÿ]¼^Ú|¤ØÔf‚uï¿ j˜KQ›a§hôòC(v–O¼+­ EÊœæ>ÑåãypRŒ+ô°[ápî0ì~êJ®”Ñ`w'Ú§ı:õÅU¡5
l%J'ø^¡ï—½`9.6Ì‡Ó4•`£°œ¤!mŒ€~ãCŞ1»µDñÿ $kqB’q[Ø2±ûï^6Å¶G	­óp&×ğ¾Ès×•v™6>"­÷±|õ ø@&çVQƒœ;-÷‘	ÆØ¥fë÷¬€H(æ’Ü48
«9•0ùR<d‰ÕGÚîûÊìn8Ô6’‘å™/Ç]ÓéH°§ÍOŒúc9&Æ®ôúÍş¨ê\’våññ8gœß¿,ôz;ğñEJôHô]‡±”—¢”ß2¶ì¢¯4û,Sû¡Æ¯ClJ€‚6·éxâè	“Çëú‰Œy»±¸ÍcvÙ—ƒïl½x{?~AjÀ|°$¯~Œ,BírŸÇ.'ßµ¯ieoa”ˆZ·>ÎÏ½éV²à“œ¶Š²&;| Çeã%Ò{¢,}o– ziiãGœ‚f’°¡¤|C„]ghT›¤c¿îÓÄ”hmìĞk²^Á­{IFî}Uà·p|øJˆ9ğ‰}ŸEÚéÔF~}nâO‚ºŸÍ¼¹ÃîwÓ£˜¶¢mI2ò”A»
Û"
.õˆ#¦ÖIg01Â¸Y@”tåL’\5?ü*áµzïÈÅÆ
XÖ­Y»:®ãà¿a,;{’ĞœÏ%à/‚1²öVêGXû^úûRnX™<Xì@Ê,şÅ®ïè3ô›‘\%ï‰ôïğvçÍŠºé=J¥EÅiŠ¶d±X: :c)mˆ›	aNÇf¬rmÖö­ÉÑ8k\3áRˆıƒUnì?ãµã¡Ë¶A×ä=l’¥fBÜ70Ôı„
”Â‘jÉ4µK²½ëábYùç4ı(âÏT+½}ˆ¯ÛóäZû¤ãàè ³=LÿÉÚAï
aÜEä²=3
.–5Ï¶{šOÊñÌ$Ê±s*™ÍDÕ×F^¼!Â:½ƒy‚€ù'Ÿº‚…|ù :?_¨’œ›h³ _'ßsòƒ†-j¬¦¬ĞdøÄmq0f¸zˆtirsĞ0sÌ—ƒ>W„Hœ ›káŸ²±Ğ
MâKk‡ŒÚûãZP7Á~M¡Y}wk¸ğÓ$d|¨;ît´y¨´ånaÄàJ£æÌµ
¾´b¢°*A‚fõzèÖM]oÒóÆÉ›Ø©}=˜eÌ£KIÍMî%y`KÚ)Iœ?xõgÙÕn’äDØ>tßûŠŸos›<|œ6ïµg¢nñoïN!6›'bş<¢Åéá‘šÀgc‚+’uß’Ã1b(Jø1¿‡ğd”3Efh¡ÏRÉU:")ÆN#e¢×~”¨˜ÃºÃµ]å÷Ìùg_™ö«L›ƒÊÎcĞş_^ã«TŠw²qĞ_±k`%U/ú°«÷GÌ!¬tFL>Øü¬(\èx½‡Ó‰^\Î+ëç»Ij`ã-	`1KI‡Æ¡¡]äÍÆ©™cğ‰ë‘½5M)mK‰f¬–ëUVÏMĞ:+…“n	?&O,‘vFĞ./Ë4VOÀw Yâ•SõÁæÿĞéÇşË§ş„F¯ä_ bÀì=?p½É¤	8J«ú¢¢ \ÿ}¨LgLE|ƒ´SãÖG0‚ ˆ (eUhUÏ&º#"=uĞğ;CßÅÅa&J×µO0…/—•RÆŞ§¹a¼,Ş·òRP_åñøÜZ·ïGæ6´ÃhNƒ5š÷HéZ%Õjû <âèÔmßâü¬™y™~Í]ÓŠ®yÿÏÑ”U†ÈH3g-š–ùSa>v]\;¿1Ì8#Ê	oõ}dãtÿà“şi?ÇˆìñŸÂGÏWühF#äÊ={™c=]y¯öF’€¯O…ÙíX<˜sY	sig”’¯“Ít[6H›Lˆo•Ng	?rÉ"QÙ@B{å™
pğ__v”×ô_i< 7‹˜Éxà±pä¾©]şÜÒW†=p¹*mÿ‚…0®(¬ÇÕ) ÏÔÏVrA;Ú?¶7w\×Ï€>/–÷ÖğÜ¯š
Wå€ÈÉnàºNÌ[­*šŸAá­õ¦ØóW¬õÂ*Hî_Ñ‘À2/ÑZìfvÉ¿ãÕ†ŒxA¿ès;¯‘vÛ¿	'Â	›²ùæÃÈ-·Hæ«8ÍÛZ°<<{iÌU½&¤±şì5K±yïš¡€	Í=ñõ½ùñ3®§Ş·¹‰Özi<ºùhé–‡vïËrÚa%ASJà]f^ÿ
6Í>!¾Éc\^%®7CÈÒ´ú^«ıR±]4háµı‘ë(uÑœ.©9›Á‹5‹û‚x!B^pïõ_lïğÌ=~ş˜‰1•¤Jd²Ò's¡-Àn±Àƒ«½\3û†¤#ˆ_öL>[_E¨Ë…±\ªÔ…XaÔHí¹[ã€O%­Rn#SN>Ä‡KßNpÀÅÙŠ‡¹7,De¿aÌ‹O|<1l¡2¿
Óëò6Œ]îj#‚};¼‡—óšşÀßküä˜û¶¾¾ùRÕĞ _ã¹€`ŞWö¦©v…¸šÍ, {;Ëí«S‡ìØî„Öó¼‡©Â‚KÈN²t´Ú˜–foU;@q8aôXCúÌ2/JN‰íĞÁ5”\·fİõ°Ù¡Y†gWánò<”V#ªv_ƒ)!ô0©%ûÜ¢ÜøUùù	[ÙXt,Iêı¤¦/£'èĞk¾4l?àşN€cò®ÇÜ	0œÌvml¡É/¼å¤dªHœæ/ïwí‰ø´ÂNìø‹N/y¼–A¥rŠ’¶+7h+„ªa®åù
IF„*·k¹¹Ì¹–ÍÔ¦g”ˆ>ıYr'ëLÙÄ×„BÒ”œş^ÌU8÷ú¬sÜkÉ|VÒ1R<sÍ†Ú‘2ÖP[Ê•9?…$İ´”¯·ÏãÂ\§İDéYjã#H‡È}’ØùîüÌÀhıWû–àšvÑs¯ı6¯ø]‚¾-¨§QûÁî½ŸÁ¾ÏáoH±úgÏ¶2Íª¶‹¿±.3úznÇa=Á“*Ñ³¥„šóú;Ã­Öl±CÆ|wWªªéù·“¨ã¶ãµág%°Q•kS”AglÌ\O{—6ÍRŞHÄ³Tö#Ì@GÉäïØ`{09¿&îeæÓbÍï‰78°-ø®kqN%ùzº6oVkœz1";$öà«Úä„4« «  (Å?È€ Trabalho1/ModuleTest.xpi
 º`eŠÙPROGRAM=PAR
STATE=ROUTED
TIMESPECS_MET=OFF
›ğv3à“8 U‰Y‡€ Trabalho1/ModuleALU.par
 WPzÙËEÜ0C34EòfUï^xÀÑ’fH¢I§#N<“6 äŒ7'37ªÒM´"i,_ãÑ=çT|«%&ÓøÈØÜİğ¤&4‰7wUv~w7„ª²H³fÁ¢H|.ë8xÜ2ì«ÌhO®*ÂËÕ\¿Æày×ùYáRÔå‰Ü8¤7\!'Ÿ·Íøt=8ÖûJ˜Ö^xÉEŒzp4bóqµTQè;Ø ESòÜÎìX	×Öaìs›ú°µ{˜k1T) ‹ÇpÊ“(/Ò/ñÀ¸¦#à+.nÈ”XY·áâĞª›¥RŠ*M”-`0i„øeÄ|Ìl ìåƒi¡E¸ØµÂfÜóu ‚ C˜C¾r:ÍwÖ‹ƒ„–¾UcæYcq|Œ!¸ø@ãÁ‹’däLä(µÉ×{¤0o#× éªh¨Nøİ¶¾¼Fór(ĞUV8³’ıœ!ñS	Úò>"aÂÍvE8áqÀıñ²§ŸèüS¯·«ºÅç–'dËb³!´o–ï’Mû¹~á‹’+ïfïhUûRTe‰ñ  `“ DØå¿BÒDq!ú6#†[Ç†1‚IÓIz"‡4@¹>Í$<2;ìZˆü®(*Í‚WÚCGˆ×å
ÙCÏŠÇ…<!€oÌ§X2¢ñ¨bè&Ëg‘ÀĞ+'ÜÈ1VŒ€GìxÿGàcõ¾è,ù,( ¬dùHhµë*°ğÖ€¨ye†àmÌ•ààqšéÈ÷`Ë%]+‡Q­ç S,’:ê®ÈFÿÅQ³gÏl”v9fÀf&ú®+W+±í€ÀCæ©d¿ ® á¬†‡óeŠ5â?˜½X1p&öˆÜ/„6L^
ƒ?Jœ ÏqãŒmh]Ğ×MïE+å”Š— ˆ»œbÔº|Ãå*s2dåD‡€~c*±¢ƒÙB8b€‰¨$ÃMda­Ğ$D^ø 
HO(Ğ3:28g@vƒJ4°HøX$(vDI	øĞæ
ßÌ®ÂÎô|C ôWFH¨?!Rûˆ0ŠÒ…©	×,İ¢¯@Ş2s Ï}™Ù’ã¸²ÎÎx"É®ê ¸àÕiÚp¨Îé£E>Ğ>/¿¨¬«€áyÂ`ˆ¨M×8³İhu‰l}<LgŠ&ÔÔTÉX¾…aşê©k”R}EÓ¤PÊÑèÎ×’¥Ë½ß_]ı}İ£ÃA¢Øßu‡õT-Ù\¯Pû]D"°+Ã”*A*"¼.ŸIîì0ú#6ßÅëÉdB…^fRÏì¢ ¦Å’ü$•³g®ºU=õ~¨ı¤ZŠ¶û­î-³œŞsZ¯.cµ8w¹ÅœÉÛ«³í™Ã]oÙÙôYodt:Û±m.ÅmeQşİµî/œa†h$û6á½3›uêgšÕÇ‰hşÚĞÎõ¾»]=›V"Ú<ì²š„?Jwttò5À8TğŒ}÷.ª#Nxµ¡šúˆm$¦÷Ç¡£ÈpG‘—Që°âš*^"Ğ´Cu;½:)Y–7FÃF»ÓfÙhÒ4$ª3®Ğ{Tê$Øñ8Şø«L6sÚğ
‡©%éĞÒû˜B#èGòtªLYÔí\ğ4İg¹‰«U4ë ä”2Ö[A×tE7 6—Š§o•l[‡IígPMÌ€ÓéaÔ8;|pX“)’ÄÜ÷ĞúªÕ#õ¸Ó>wÚ±»ü£qİ#ãÔeV4C{E²ò7¨ëî¤ŞQYüŞiùk_ççY¦&Uej¬_`Ê¿™îŒ—f2‹Èio)[èï,Ã—ßŠ[ºFú3Í0øF4£ÇÆLy¼ê±^ûS*ºµ¾~ìL^ıeï·ÏZ¼ÊçV¾{Â§†OzÛH
½jµ›f´Ê]oˆç»¤oÃ#H‚?í{’{•šK{Ñ1v7g¦’G÷†uv ˆsí­œC2’v®¿[DÚ6(ûË	ï6YÎBb;¿é÷ò§´¢w0Rˆ8 ˜™«WâE‹õêé8ëêlÀf¤Åi¼ªÌÕ÷¥f— ë ]ÙrA’;AŸ¦í.rœ:íŠ³kZfZj¯îj…Y'¥%ó#²bÏß¥ÖRqŠ:°è,rÍ_Ccšoµëjı†`Ó,ª¯¯ÅÿÿÛj›£e•ÄV­Å¡Rt"v’Xş'¹v 6†,òğ'ÛÕï ¦àÌûâ’ªP îPPMƒY/|öşi,QÀ¬»:{ÊJ}6dO¦Î–§­’OÑOYú+ĞAíØ‹ÄV‚dbXcN"Ö_ÉÆızø¹oT"^òp?¯aı&g•4È/£ËŞ,x—k|Í?Z¯ÂÿÂŞ¥yÓLÊ=	W£¨ê(/0­Í;üúŸ3Q‹&ĞÕ·p`O)$WÅ–GÊk‡LÇqË£qŸÑ?e–ñÊ@øÒ²ˆ±¢Jjßj¢J:q_ÙÛ&oÊnÅ#9X”$*r{{îÚé¢Nlõêé)íÍªMºÉ‹9•"$
ÓÒŒ”‰˜E:,Ëˆ”›.Îş~Ü@ø¡Ç„0#Dª´ °Kóu±4¼İ6É¤vãâQ—=YçOq™ì«ÕÕ=Ÿ±eâ–Zeğ^rIa/#~ğ<Ù|	D¨h8tşùğ°4Oh=)ƒ©"´‰²®Š8F1qeŞŸ½ËƒÆ!P{%F•)RÀ$¦Fb ƒ~£HÏC¯ÒøE‹Tù¸úŒëşAä@†ÑBËRoÆÚ/·ã!M
ÌsÈ—PÛÏ¾íe Ö2ø¼8³ùQZ ¢‚(æ?êÃA€××œ¸‹éÒ×NáÛŸY…gS-…ÎNMœŸi÷3ğfWe·ÙMWÒÛ)¶ßéZ7¬pşFìs$€ÏÄ÷%Ï™amÙĞVts2v¨)6™éSÅ„m¸ª$ß“©ğ¢©ı'°V4F2NÌÆ$m-EˆfÓ²]MÛ™á@&Æ„ñ@MôM13†,•9 E.ğÚ€ Trabalho1/ModuleALU.ncd
 WPzÙÊ„6UT3VD ED¿)À{„LòØH¢JFš5mš©G=Ã»Ï?w‰$Â‹½)‹3q·Ím#A‹,7ÏûZÃĞú[Óÿêÿ ßò?ôq×¿ïs³ˆzõÿş½_ú>?ü™ÿ×úÿS	 ¯ıÃo/…?Ë_ç¢işïóqóPÆVÀE½'Õ
ææaØş^Å^göÆ«oNæû-mØù?‰9 næ£4lİ-j®–mØaDU†-Ì£²³Ì&íÄĞêîĞpÃØA5L/yMõâ•øgÆL‹~ğ½¿ÃVÆÀ’e<QNş±@jaò+½ÆŸ•¡ĞËŞKéğ³;÷ofÅU>ÌsÀ¹oüF`E6qü<í:ë²„ÖÌŸŒZXWàÂDÂ›hŠÉ¤oÏSM°–­ `ĞdÃatRœË:¹>2Ş0LÄñÄì× P¹ükƒŞ±jä°¬vhJ;gF5¥2 ¨iõ"Tu¡ş^-oO2®ŠºñKVn{À.UŸe&jH¯y"tşàmœ©óô£›³‰føbĞó_~y‚ª=ÎçY{>í;©o¾ã¾ëqÈ–%×~¥º¦1.¡Ìh«1ªrˆğ´®ùş0ÿ<PF•Iƒµü;µ5º*c³]ãp—Ÿ}‡¦i°|!Ò+›o5šíÈäÔO””÷íñå[xê412ïÄm%FÁb¡=aØ³¹s ^Ÿü)!ëÎÙÈÄ×6îş¡fìˆ.mÑ é î›üÛO3Ëö(qé¢®—ˆ"JİË‘ÏÅFğÅ:Kÿİ¼ÑH`Â†^Ü÷ö@I´³÷öw#¨¯}2_XKd4øó‰	[e;÷”Ò5êón:l’Ö^œ …9øLŞÖÌÏ“Ş ÀKÈ6ˆYu5?GÃø ®ÏórgèÆK×v3_Ëe`aÔ­±ç5;›dˆvò_&&-P¬òF0àçŒqÍ#ìØïÔËÄÏ<?•oóÁxşM%»¢{vœŸ/š!¨)Y3cú3[
¯ÌÃäƒÂû›‹pbBLçÅ’•¿².Sú=ïò©|¸1òÂBµl«ha'xsÍ‘ZV±Ç6Ò‰=ºnİÓŞÜĞQ’µL)iedxq/¯=¨7ácú×GC˜={',ß{ÂWx¢<™Ÿs·ÏªåïSàû —lÓñŠ¥0%œé]¾x„ÌÙlµÉÓõ¯©’Võçzu•9›œİŸQßa—*G3Àô4$4:r¿OZÁ![İGEÉ.É ,8€ÂÂ~hÆz6j#"“Ií\¯´ø°=Vî×
â\
í u÷µRCÛ·„"½?èáïØfA’Ä3©wA;lŠŸ‡éJeù%hqöâ9ÄNhŠØü×¶ÎÊ³Ê„v?^†rMƒ›(YdøĞBj?á¶%Â`ë·¹‘1dB–×åû¢AÎ«P¢Ø:õc°˜R“«“ğÒÃJ¶´BùkÇ˜*v»óÙk	cŸ¾úˆZPË±uY ’˜ê]“%œ¦-Å³@ÿ&78oÛeÚGP#iıÈıÚ´ö´	­¨ásÿ!íxå5û+iò8ğy@@Ä!y*órûyÍLUŞá¬üR™€l†Ï<èWº®q¾˜,˜ò¶^^kÂÏh±7neùòIl#÷!X‘!†=ëåÀ‰a¼‘Ÿ®¤)÷L¤Š8}ó u®›1l-MÚNvÁ vt¿¨—/éş&ºô'öR^ Ã{y=¢ø]òP¥Ğ/ÜŞ_yğùÓ$`FıW_ú×ĞöşzĞ±ŞïÑÂÊu/±<$ô‹‘b
Iûo(ACôÎÉƒX.â!`hLzl2wY’TW#ÁÂ…bM»ëO¿…yhı™>*b¾Äıï_¤ş†ö=ä€:†Égz^Ë¢ÀL+Û¸†€V—“<…ÎdÀ `d=Lİ§-KØse‚ág•íS•RØ>kc.Ã¶6½³R®+Î÷¹T]'úÿ’TÜlÇN 7©†´ÌÔ.Û¬7]³ÕA£ZGä$×¡i? ÃıøÊ=Oûh¯’~
èßoŞ»ğš·Z"7øa°šÓ÷Z©ZA@¼{lÇùÁEoº;­«úDİ¼wPÁ	Ê+ÀÛèZşâş!Ş^¾; ¸ÔâÕ=Y›šR+‡E$â‡Ö±ß9=3‘»pz…ÁRœõZ-GECÀ£óÊF#?|ûA£8ÆI¯Éáö±Ùş¸ú<§IË š^›y†E	UÓH¤;‰ö¨)A;á1
#ã½×fº ¥”æbqŸYK%•&	‹şÑMu„_Ë§Ó¸î96û·ƒ@¾­Ê@¬AEğßÏÃ"æ,¾ZdÇºı÷aû|cĞdU\^­û¸3$PÆå4^Ø!Dùœ¾îƒxù1Ôèã”Ûéw£ƒÏGUè{è¦·L†y#¯/ª^F(#âÿ!ël„ï½T#Ö³—6êTæXÚÃ Á‚z¾sÀE·î‚ëşcâ(J¦ô‹­ù!¬_ôV}?Û~ëİ™¥š‡ÿY‹ÆÑœª¶¹+jP·´ïî3™C†¨n@9&d_¨‰j·'Ÿô;ìK|zÍŠ}Â›êîá‹	õvôvr ~S¤ğfkSğ÷¤ù5Ë=ò–'Ç©ÚC‡?6€€°aû%Í4y™.ã“ú_†1)š/)?qè®A€ZkËàC»ÆÇû¯å¨3•á¶ödMã©KëÉ£M¾ÎíÆÛ§®ÚÕÃEä¦x¹çİôÆÒÉëí_·–±c#oÖ<sbÑ@M<…Ÿ*”6^Ó¹ùœï‹$oÒçG-FÏÕ‚³‡‡H°t0µi’HN¥ù‰]€ üÔí_ÏP‰½ç]LR+ºI6}K	æR ¯ïŞÏşÅG©£°ä3úÑÛ¶«„/¯®Ã¡ìeJÀóÒÊÆO“ùµ£Âßå/ÿËtaşåzæ1åfõûg•§Z%’İí(g[ØƒTJìË÷yŒm° ôÓìŠŠô	C
ÚŠFAÜçj8l3KÌÀ¢¤hK¬eÈÿÌ£#°«v[ÀgSá.hì›ÒS Ÿ—iè—5‰­½ıÆ¨xïÑ
óõ™ Ôp;œ#i—×œŸj	…ÖQ‚b–şÙe^Å¤lï¤Q6NÃ	N‹	bl;&wîmç;CÁ‡‚U–7ä¼©jË »´«†2Y2?aU¹	®³9P­GPÄ¶ºM8	lí¶wO¶üš^Ú2©O¶ LÉ3o()î¥§âdÿ[vÙ€‘óp?ù1˜ã©õHóŞAÑàñ1L ùş© ñ¾»òƒ0çv¼X†Y(c2û(at–Ë˜]ôW¹_?YD‹—²t¢Ljl7O]œìgrä"_dGãŞ€h«lÙLê_bè9É9wğÖ”I·üëŒKyÉbÍ¦[Æa&O»)ví*¡ó‡wvòéœªµá×q²	+ŠÓê…EñkÍ¤û`í}ò¿°İîú²İn¯ÖUY8şÑ~‡ÙæF@5şí†B2ÈHG_åœÜ¬(bh³û$ÉS¤8³"±1M?Ô¯¨»g!Mõ®=ÑVßÚ·Ğ€.-\BH¿¢-Ãùwµ(µØ²N½ò[¿Œ"²	zİëß¢wt˜L&3—æ·Ét1éç˜kø·¯oÅçcÄÀ)¶à÷Î»f“%TÁ¦¨Jƒ¦Å]€´Ö;¾çµ{Â¤ ?ë–¶.İåVşï¦Ä¾ÕS,­öëÉàoÈ:}”øÍéô‡¿Íü³'ùH
€Ó|ímXRÅŞKÿ,E¨G5ÚH,Ó¼ÍæÃ7àhá‡‹H€™¦ÇUC©Ü°w‘#ƒç€›%µôkÅb‰¸Eh~Ñ!¶Èİuí@EíÌh9)—
„	@¡
³æöubm©ˆUÂ@_ÁU?Dü¬ÏL“×IĞöWª¹tLr"¢RcÖÔuÑ.ßOr`xôU#b,Î¯«s¢‡÷—€ˆ%¢g´®­ü3³Ç©IYT™Nº@MÉ¸”r0ÕC„}!:-v
k@3{û	Ú³Ğ·Ø7É½'ëêŒòö4‡{CßÂ5ƒéã5ºÙ‡æ¬/ªºRñûæmó¨†Nmú^0p"‰‰ÅûMV˜±hj9¹¶µÇs»£?B¨[¿DAÃEİÙÅ—ÓA*ÔøAÉ£%mƒ&lÙõ?^©ƒ‘e·©8ÊLÒ,Ìz’ƒ0¤m´VXy4#¹]>ùÂÍ·ÁãÍPBó`¤$D|öÓ£ëCyÑ 1x<„rXXå&\Ävdü>Ôg4=^¼ÙSY¦Ó¯ÛºªëŞ ¨‡ŸÈJ"3~	>JĞ<4'§¬ó³ËYü½Ÿö¿i´ÎDŸNgåŒÍ©îó@-'QiàšÕ]ÄÖac¥•©4²¾Œ_Oxó9iÉŞ£‡åê{c¬<ô	L>©ÁØ §‚‚Ø]á[šI®ëk@­®F•,bŒ™	õ&‹„8´ğCÓµºÅMTßÁæ«ÜúÅPÏB”¦áØÔ ^å Á[öç'kÙ½Û)öTU.•qï`SŸÿŸí|;ôÌGBÑR†ï¯µ6?õ2øTéwÀ nkáAÈ~#×WâÙ÷¿AŠı9àóê¸½MÛÀ<ÿ@	È7 =[˜36¥]D»3­êì¼=t/°‚¤0u¯'cêIXZsöj:û·1,šğe*}Ş¯CPä]w0ê] 8ÿk	ğù>„Âœ02Ø“×S!ñmwëy?‚‘yS&Y‹&/ÌT/îí	Û¯ˆ“8d°‰×è¹K®Mãø~e
¸Ä”RNO8ˆó}[j	Bôİ°y77åƒó8ÍwxH+‰ùäÙO*t†ï{¶€Õû¬ıÕ>†ã_2~ŠuÈ½væTÈİı%X(¶äÜc7ç¢ptôÖ·y·7~cpÑâ_?€AqÀa«aÎ …ÑûPß%îmj€9(Æz‡@–ùxlúÕN]	É,q&¾3ÙËà¤÷Ã¾ıáFçîR|°û&AÂrÎß_„`våÂk™˜;oĞø_ëğşù‡¯Ş—¡0…/Cñì­	©ËG¹ Gáº×edXx…y¨¬ì%-?	˜fl‘0–zB;†š7±Ën‚||{\t}CˆtˆWa¢ßÉÕ…œK'•õµJìşÜP!•˜<IIjµûr_{xbG¬æÍ•ıÃ	ië¥×C½O¨2jÕ/{¬óW¿q8lı_¦<(ÈC ]yñİ¬cÙË#ğšê.iÿ/	ıFGûRf.¾iÛÕÏ po³ú¡'Y¹rsC¿d=² Øef«zÚ8×hå„Mä”\å'ÆT¡aJ›ñ¢ˆö‰¼[rIÚszãFòêåb$§ÓÎŠm‚cKÂS¸…zÑ»@vÏÌÔ¨ÙÌË*âÒî<FğlëëRyU>;U±6'Ş:¦*`LhQ¿>ŠòºügÕm gú¦Æ(»’\P¯¬Ò·ê…÷ò -1`Ğ·ï–}½¾¤NH±üËsÁ}ˆ¨3©p!¾¤‰Ì‡2„¡Fd-Óü´4ñó•T$-uÕ¢¼Í¡
Yä¹AOÙÉ¶€üDÍĞ"‡ı„/öiş³r¬ÖA¤ı^e ¤`—QÕß€ç*?"z÷aVÕ¾]2g.EÁìş‚i3RÄåéÊ›ù·Àq¬p(#{Ÿ…tÈÅ¼Ëšh]ğ…ó¯[¤=ZÃ‘u ¡×t: ~]i±3¹à2¿zÒ$ûÁ)­-ğ)‰½×ò§ÂÒ4N.¬WÍr(¢İöxXëg˜ˆßwoÀc¶¬híü~~·…8ÄõğHß™¢!/õŸ$A¨-äuâæ¥²öÒL|¿Vc/ã¿fì²ÿwn5ûÅİ„Û@ãì9iD¶½r³]k¿æóïsç·©ÛpµüB¨¸J\ä}¦w“'ßCæƒïãï¤BÕåNlG—û]›LùFGUbxí¿ÒkÜ‚›ö¡Àÿº ys2ùLLãŸï÷#9aŸÜ øGŸIq 1ş Ş]èğÈßWF³[v…Da ÕsO}9åeŠÎ%¬ pªòÚù”™¬îbjÔ>Ş†ú\ü”şc_‰÷²ºåEâo…ï€¹@àI_ûçöª}Y›NÙ†ûcAâ(£ë®äß ÷ñd«¬<.Yv yÎ+
¥€|ˆ ×Ènfc]Àõîõ¼ÔÑw
‘0FÌT)îJãtê¤	|ìC³Î¿ßD?|)}MgàùjUˆ¾ùA~/µÊ ¶ tA¶Âx¸ßZLTBÂ¿‹µï vQŠDÈA™PT¼÷ng³Ú¨¬«ŸÓå³`ü.Ï$ÿ¿¯é!fÿºI;ül F¿‰C·ºò=ÜªÄ{0ªÕöŞ`'¡ÁÁ½ö8Uœc¼{ùßYY7|qF@^½Ğj—¸ÎVàƒŒòŒ4C„álX•Ä¨Ö44D	MÆk8ÏSÊÚÛPeš„#5íP~Ş•Hì™Èi—©MÍş¯Gw3Ş†”Jh+˜ö(XJ'¼ojÖüÍÍ†¾`û€†)<,6dzÊ]ÒÜ5IEQÌ‚¡ ÂˆZL„ªWCy²ªUr‡F,S5¥ÏJÇD¡»Ÿ—n=òƒW+¡&,`k’´€ĞïËu6…æHc„2pçÃìf©z= 
i_ŸIÁ>99ªiVp”¿ö}ÿ’æI¼ÛàÓ>¥½2.{·£ Ê­xáø¹EfnS(/LĞ"_è}æ§É`~Ü_±Óú¶Øİ\Ë…ò¦ŠXo—¾ÎÔKÔäšåÒƒ¼\ ‡ŞF_!Şöl¼Ñ‘Åº×”¨$'Æ©.Áº -îî{€9ıçTr0¯—‡yÄ¿ I2oì~ÌiA iìÜØïjÉp}â<6T4ñ# –„"YßëN
Y{R	,jnKƒCsÔ#¨¹bæh‘´­ı‹/êg<pñAvŠšej=Û>wÏ=V6ˆeép#ú®1KPÜİmÏøy¯Vp¯¤én¿O'4†ú,díšÇwîÀbšÍÉí¡¤•ÕlxÀÖ/‚ñãÖ¿!®#áD	1Õgò ğÔQ¥Feè‡½ÕÛœü 
È}ˆ×'ç÷Gç•“«~úù¤qYXÃ›Q;ñE'ˆş©¡_„-²scñÂ
‚¯•M˜Y>)-,F¾(ß`_¾’…ŸÅ0Ö2}=8KNìƒY$v˜7"„1T…à†ş¹˜Po˜EE)ÁsÛßöşÀ½ Z9†,•9 E.ğÚ€ Trabalho1/ModuleALU_guide.ncd
 ¤ŠÙÊ„6UT3VD ED¿)À{„LòØH¢JFš5mš©G=Ã»Ï?w‰$Â‹½)‹3q·Ím#A‹,7ÏûZÃĞú[Óÿêÿ ßò?ôq×¿ïs³ˆzõÿş½_ú>?ü™ÿ×úÿS	 ¯ıÃo/…?Ë_ç¢işïóqóPÆVÀE½'Õ
ææaØş^Å^göÆ«oNæû-mØù?‰9 næ£4lİ-j®–mØaDU†-Ì£²³Ì&íÄĞêîĞpÃØA5L/yMõâ•øgÆL‹~ğ½¿ÃVÆÀ’e<QNş±@jaò+½ÆŸ•¡ĞËŞKéğ³;÷ofÅU>ÌsÀ¹oüF`E6qü<í:ë²„ÖÌŸŒZXWàÂDÂ›hŠÉ¤oÏSM°–­ `ĞdÃatRœË:¹>2Ş0LÄñÄì× P¹ükƒŞ±jä°¬vhJ;gF5¥2 ¨iõ"Tu¡ş^-oO2®ŠºñKVn{À.UŸe&jH¯y"tşàmœ©óô£›³‰føbĞó_~y‚ª=ÎçY{>í;©o¾ã¾ëqÈ–%×~¥º¦1.¡Ìh«1ªrˆğ´®ùş0ÿ<PF•Iƒµü;µ5º*c³]ãp—Ÿ}‡¦i°|!Ò+›o5šíÈäÔO””÷íñå[xê412ïÄm%FÁb¡=aØ³¹s ^Ÿü)!ëÎÙÈÄ×6îş¡fìˆ.mÑ é î›üÛO3Ëö(qé¢®—ˆ"JİË‘ÏÅFğÅ:Kÿİ¼ÑH`Â†^Ü÷ö@I´³÷öw#¨¯}2_XKd4øó‰	[e;÷”Ò5êón:l’Ö^œ …9øLŞÖÌÏ“Ş ÀKÈ6ˆYu5?GÃø ®ÏórgèÆK×v3_Ëe`aÔ­±ç5;›dˆvò_&&-P¬òF0àçŒqÍ#ìØïÔËÄÏ<?•oóÁxşM%»¢{vœŸ/š!¨)Y3cú3[
¯ÌÃäƒÂû›‹pbBLçÅ’•¿².Sú=ïò©|¸1òÂBµl«ha'xsÍ‘ZV±Ç6Ò‰=ºnİÓŞÜĞQ’µL)iedxq/¯=¨7ácú×GC˜={',ß{ÂWx¢<™Ÿs·ÏªåïSàû —lÓñŠ¥0%œé]¾x„ÌÙlµÉÓõ¯©’Võçzu•9›œİŸQßa—*G3Àô4$4:r¿OZÁ![İGEÉ.É ,8€ÂÂ~hÆz6j#"“Ií\¯´ø°=Vî×
â\
í u÷µRCÛ·„"½?èáïØfA’Ä3©wA;lŠŸ‡éJeù%hqöâ9ÄNhŠØü×¶ÎÊ³Ê„v?^†rMƒ›(YdøĞBj?á¶%Â`ë·¹‘1dB–×åû¢AÎ«P¢Ø:õc°˜R“«“ğÒÃJ¶´BùkÇ˜*v»óÙk	cŸ¾úˆZPË±uY ’˜ê]“%œ¦-Å³@ÿ&78oÛeÚGP#iıÈıÚ´ö´	­¨ásÿ!íxå5û+iò8ğy@@Ä!y*órûyÍLUŞá¬üR™€l†Ï<èWº®q¾˜,˜ò¶^^kÂÏh±7neùòIl#÷!X‘!†=ëåÀ‰a¼‘Ÿ®¤)÷L¤Š8}ó u®›1l-MÚNvÁ vt¿¨—/éş&ºô'öR^ Ã{y=¢ø]òP¥Ğ/ÜŞ_yğùÓ$`FıW_ú×ĞöşzĞ±ŞïÑÂÊu/±<$ô‹‘b
Iûo(ACôÎÉƒX.â!`hLzl2wY’TW#ÁÂ…bM»ëO¿…yhı™>*b¾Äıï_¤ş†ö=ä€:†Égz^Ë¢ÀL+Û¸†€V—“<…ÎdÀ `d=Lİ§-KØse‚ág•íS•RØ>kc.Ã¶6½³R®+Î÷¹T]'úÿ’TÜlÇN 7©†´ÌÔ.Û¬7]³ÕA£ZGä$×¡i? ÃıøÊ=Oûh¯’~
èßoŞ»ğš·Z"7øa°šÓ÷Z©ZA@¼{lÇùÁEoº;­«úDİ¼wPÁ	Ê+ÀÛèZşâş!Ş^¾; ¸ÔâÕ=Y›šR+‡E$â‡Ö±ß9=3‘»pz…ÁRœõZ-GECÀ£óÊF#?|ûA£8ÆI¯Éáö±Ùş¸ú<§IË š^›y†E	UÓH¤;‰ö¨)A;á1
#ã½×fº ¥”æbqŸYK%•&	‹şÑMu„_Ë§Ó¸î96û·ƒ@¾­Ê@¬AEğßÏÃ"æ,¾ZdÇºı÷aû|cĞdU\^­û¸3$PÆå4^Ø!Dùœ¾îƒxù1Ôèã”Ûéw£ƒÏGUè{è¦·L†y#¯/ª^F(#âÿ!ël„ï½T#Ö³—6êTæXÚÃ Á‚z¾sÀE·î‚ëşcâ(J¦ô‹­ù!¬_ôV}?Û~ëİ™¥š‡ÿY‹ÆÑœª¶¹+jP·´ïî3™C†¨n@9&d_¨‰j·'Ÿô;ìK|zÍŠ}Â›êîá‹	õvôvr ~S¤ğfkSğ÷¤ù5Ë=ò–'Ç©ÚC‡?6€€°aû%Í4y™.ã“ú_†1)š/)?qè®A€ZkËàC»ÆÇû¯å¨3•á¶ödMã©KëÉ£M¾ÎíÆÛ§®ÚÕÃEä¦x¹çİôÆÒÉëí_·–±c#oÖ<sbÑ@M<…Ÿ*”6^Ó¹ùœï‹$oÒçG-FÏÕ‚³‡‡H°t0µi’HN¥ù‰]€ üÔí_ÏP‰½ç]LR+ºI6}K	æR ¯ïŞÏşÅG©£°ä3úÑÛ¶«„/¯®Ã¡ìeJÀóÒÊÆO“ùµ£Âßå/ÿËtaşåzæ1åfõûg•§Z%’İí(g[ØƒTJìË÷yŒm° ôÓìŠŠô	C
ÚŠFAÜçj8l3KÌÀ¢¤hK¬eÈÿÌ£#°«v[ÀgSá.hì›ÒS Ÿ—iè—5‰­½ıÆ¨xïÑ
óõ™ Ôp;œ#i—×œŸj	…ÖQ‚b–şÙe^Å¤lï¤Q6NÃ	N‹	bl;&wîmç;CÁ‡‚U–7ä¼©jË »´«†2Y2?aU¹	®³9P­GPÄ¶ºM8	lí¶wO¶üš^Ú2©O¶ LÉ3o()î¥§âdÿ[vÙ€‘óp?ù1˜ã©õHóŞAÑàñ1L ùş© ñ¾»òƒ0çv¼X†Y(c2û(at–Ë˜]ôW¹_?YD‹—²t¢Ljl7O]œìgrä"_dGãŞ€h«lÙLê_bè9É9wğÖ”I·üëŒKyÉbÍ¦[Æa&O»)ví*¡ó‡wvòéœªµá×q²	+ŠÓê…EñkÍ¤û`í}ò¿°İîú²İn¯ÖUY8şÑ~‡ÙæF@5şí†B2ÈHG_åœÜ¬(bh³û$ÉS¤8³"±1M?Ô¯¨»g!Mõ®=ÑVßÚ·Ğ€.-\BH¿¢-Ãùwµ(µØ²N½ò[¿Œ"²	zİëß¢wt˜L&3—æ·Ét1éç˜kø·¯oÅçcÄÀ)¶à÷Î»f“%TÁ¦¨Jƒ¦Å]€´Ö;¾çµ{Â¤ ?ë–¶.İåVşï¦Ä¾ÕS,­öëÉàoÈ:}”øÍéô‡¿Íü³'ùH
€Ó|ímXRÅŞKÿ,E¨G5ÚH,Ó¼ÍæÃ7àhá‡‹H€™¦ÇUC©Ü°w‘#ƒç€›%µôkÅb‰¸Eh~Ñ!¶Èİuí@EíÌh9)—
„	@¡
³æöubm©ˆUÂ@_ÁU?Dü¬ÏL“×IĞöWª¹tLr"¢RcÖÔuÑ.ßOr`xôU#b,Î¯«s¢‡÷—€ˆ%¢g´®­ü3³Ç©IYT™Nº@MÉ¸”r0ÕC„}!:-v
k@3{û	Ú³Ğ·Ø7É½'ëêŒòö4‡{CßÂ5ƒéã5ºÙ‡æ¬/ªºRñûæmó¨†Nmú^0p"‰‰ÅûMV˜±hj9¹¶µÇs»£?B¨[¿DAÃEİÙÅ—ÓA*ÔøAÉ£%mƒ&lÙõ?^©ƒ‘e·©8ÊLÒ,Ìz’ƒ0¤m´VXy4#¹]>ùÂÍ·ÁãÍPBó`¤$D|öÓ£ëCyÑ 1x<„rXXå&\Ävdü>Ôg4=^¼ÙSY¦Ó¯ÛºªëŞ ¨‡ŸÈJ"3~	>JĞ<4'§¬ó³ËYü½Ÿö¿i´ÎDŸNgåŒÍ©îó@-'QiàšÕ]ÄÖac¥•©4²¾Œ_Oxó9iÉŞ£‡åê{c¬<ô	L>©ÁØ §‚‚Ø]á[šI®ëk@­®F•,bŒ™	õ&‹„8´ğCÓµºÅMTßÁæ«ÜúÅPÏB”¦áØÔ ^å Á[öç'kÙ½Û)öTU.•qï`SŸÿŸí|;ôÌGBÑR†ï¯µ6?õ2øTéwÀ nkáAÈ~#×WâÙ÷¿AŠı9àóê¸½MÛÀ<ÿ@	È7 =[˜36¥]D»3­êì¼=t/°‚¤0u¯'cêIXZsöj:û·1,šğe*}Ş¯CPä]w0ê] 8ÿk	ğù>„Âœ02Ø“×S!ñmwëy?‚‘yS&Y‹&/ÌT/îí	Û¯ˆ“8d°‰×è¹K®Mãø~e
¸Ä”RNO8ˆó}[j	Bôİ°y77åƒó8ÍwxH+‰ùäÙO*t†ï{¶€Õû¬ıÕ>†ã_2~ŠuÈ½væTÈİı%X(¶äÜc7ç¢ptôÖ·y·7~cpÑâ_?€AqÀa«aÎ …ÑûPß%îmj€9(Æz‡@–ùxlúÕN]	É,q&¾3ÙËà¤÷Ã¾ıáFçîR|°û&AÂrÎß_„`våÂk™˜;oĞø_ëğşù‡¯Ş—¡0…/Cñì­	©ËG¹ Gáº×edXx…y¨¬ì%-?	˜fl‘0–zB;†š7±Ën‚||{\t}CˆtˆWa¢ßÉÕ…œK'•õµJìşÜP!•˜<IIjµûr_{xbG¬æÍ•ıÃ	ië¥×C½O¨2jÕ/{¬óW¿q8lı_¦<(ÈC ]yñİ¬cÙË#ğšê.iÿ/	ıFGûRf.¾iÛÕÏ po³ú¡'Y¹rsC¿d=² Øef«zÚ8×hå„Mä”\å'ÆT¡aJ›ñ¢ˆö‰¼[rIÚszãFòêåb$§ÓÎŠm‚cKÂS¸…zÑ»@vÏÌÔ¨ÙÌË*âÒî<FğlëëRyU>;U±6'Ş:¦*`LhQ¿>ŠòºügÕm gú¦Æ(»’\P¯¬Ò·ê…÷ò -1`Ğ·ï–}½¾¤NH±üËsÁ}ˆ¨3©p!¾¤‰Ì‡2„¡Fd-Óü´4ñó•T$-uÕ¢¼Í¡
Yä¹AOÙÉ¶€üDÍĞ"‡ı„/öiş³r¬ÖA¤ı^e ¤`—QÕß€ç*?"z÷aVÕ¾]2g.EÁìş‚i3RÄåéÊ›ù·Àq¬p(#{Ÿ…tÈÅ¼Ëšh]ğ…ó¯[¤=ZÃ‘u ¡×t: ~]i±3¹à2¿zÒ$ûÁ)­-ğ)‰½×ò§ÂÒ4N.¬WÍr(¢İöxXëg˜ˆßwoÀc¶¬híü~~·…8ÄõğHß™¢!/õŸ$A¨-äuâæ¥²öÒL|¿Vc/ã¿fì²ÿwn5ûÅİ„Û@ãì9iD¶½r³]k¿æóïsç·©ÛpµüB¨¸J\ä}¦w“'ßCæƒïãï¤BÕåNlG—û]›LùFGUbxí¿ÒkÜ‚›ö¡Àÿº ys2ùLLãŸï÷#9aŸÜ øGŸIq 1ş Ş]èğÈßWF³[v…Da ÕsO}9åeŠÎ%¬ pªòÚù”™¬îbjÔ>Ş†ú\ü”şc_‰÷²ºåEâo…ï€¹@àI_ûçöª}Y›NÙ†ûcAâ(£ë®äß ÷ñd«¬<.Yv yÎ+
¥€|ˆ ×Ènfc]Àõîõ¼ÔÑw
‘0FÌT)îJãtê¤	|ìC³Î¿ßD?|)}MgàùjUˆ¾ùA~/µÊ ¶ tA¶Âx¸ßZLTBÂ¿‹µï vQŠDÈA™PT¼÷ng³Ú¨¬«ŸÓå³`ü.Ï$ÿ¿¯é!fÿºI;ül F¿‰C·ºò=ÜªÄ{0ªÕöŞ`'¡ÁÁ½ö8Uœc¼{ùßYY7|qF@^½Ğj—¸ÎVàƒŒòŒ4C„álX•Ä¨Ö44D	MÆk8ÏSÊÚÛPeš„#5íP~Ş•Hì™Èi—©MÍş¯Gw3Ş†”Jh+˜ö(XJ'¼ojÖüÍÍ†¾`û€†)<,6dzÊ]ÒÜ5IEQÌ‚¡ ÂˆZL„ªWCy²ªUr‡F,S5¥ÏJÇD¡»Ÿ—n=òƒW+¡&,`k’´€ĞïËu6…æHc„2pçÃìf©z= 
i_ŸIÁ>99ªiVp”¿ö}ÿ’æI¼ÛàÓ>¥½2.{·£ Ê­xáø¹EfnS(/LĞ"_è}æ§É`~Ü_±Óú¶Øİ\Ë…ò¦ŠXo—¾ÎÔKÔäšåÒƒ¼\ ‡ŞF_!Şöl¼Ñ‘Åº×”¨$'Æ©.Áº -îî{€9ıçTr0¯—‡yÄ¿ I2oì~ÌiA iìÜØïjÉp}â<6T4ñ# –„"YßëN
Y{R	,jnKƒCsÔ#¨¹bæh‘´­ı‹/êg<pñAvŠšej=Û>wÏ=V6ˆeép#ú®1KPÜİmÏøy¯Vp¯¤én¿O'4†ú,díšÇwîÀbšÍÉí¡¤•ÕlxÀÖ/‚ñãÖ¿!®#áD	1Õgò ğÔQ¥Feè‡½ÕÛœü 
È}ˆ×'ç÷Gç•“«~úù¤qYXÃ›Q;ñE'ˆş©¡_„-²scñÂ
‚¯•M˜Y>)-,F¾(ß`_¾’…ŸÅ0Ö2}=8KNìƒY$v˜7"„1T…à†ş¹˜Po˜EE)ÁsÛßöşÀ7ƒà€6±¤ ’œ ¸o€ Trabalho1/ModuleTest.twx
 ¤ŠÙË®-@C34CòGuÿ£ğ£ªšÓ®7™“5*xšY‹cà£InÌ’¥mQMši´ğ|6³Şu&îìp ‚Iæìªé´€¾¢Ç2_Œ_àŸ_Ö ²8|¯ø>ğ³ã—#ïÇ$C÷ÖŞÛİ¬ãğ½(!ìûëaÁskÛZÍo‡óåéµƒézÛ’øu?š(åsşK|Öùíô`Ïã\(üßwœçòv8\úˆÎWúæìĞ÷aÇ}œíñ‘}ß›(ë"üAA‡\Š)l•Y >R7³\˜~L9®ßUd†íË\ +‘ÀpwvxkX¢Í“"L}¿Şü@´éh³yGgl¦©—0=ï˜@0@ì„Ô¯Z¸€]ä¿Ğz³Kçkp÷ş ğlWYV…+¿¥ã2lÜ€ìW¢Î¶-ƒaHpÆ.‡r¿æoæ}ü_(İÄ¥Q„ÈÁdÔö¢ÎÆ÷iìú]ç¼mò¹›»±p^˜(À6nÊ6{'bì¯åæƒ,š_°„ãC![)ezR„¨ówä)+2›\õÅ#æ§ƒ8
)np€“|ÕÁàê·şpİê;ÂÉ9É‹¼j8	ÜXmùµÎNköÀŞ±¾ë65$ø7ÀÛHL­à_¼e¯Bhaı¹ÿkáö)C‘7JÜÿÓ<|¾©ĞHû£ ³só]ïo;/l•VÄ›kh'±Ç½ìFbªÏxuTk&›³µ²4b~G£€9ğM¢^¢È°ØjÇ mxAÄ¨ÁÄ@×Ğ`¡ì4â³š)1I¬šH™‰ëšdÆµqŸŞ€sÁ)ŠÖNéŸ“,ıÇd—Oi	f
b#‰ë;&]eÌjŒY%_‚%l÷Ád,‘zx ,¡‘®¨²d›6zò?°XåKÃúÌõDÇ+±ùŒÁpÃ•ùL*Ô2­•QYòr³ó§(>Îßí}únùã‘1~OrC¢Ì™5ƒİùy³Œ£¥ÿpÃìÏl‹å ¬…ë©Ù,*]¥%³Jïîw\ÑyØ’¸Ì‚‡û-:H 	õ›-]ñP€B,Ìp„Ò£Í¸«Ó.k2g7l4‘j‹]Ï@˜¬:*Ba¼pGË;9ÇS¯?çN+âè7c^ÀË†%èW4Át?)5˜dî¿Üÿb­±]x€LB~ğyfæz-à}oäÇ3Ê'Ò˜[ÿâßä°KÀ™ù€@ÅËÖú®ôòÑ‡¢×O@/Ù–˜$ığVá¼Ù‘´mi~û Ì\Æ-Á”{`¤úQ
Gÿn›_ãEı7.ÄŞ†a-ã9r'hoX‰ç]Á8~œ8`¢¢Á¨Bã#ÖÌ0ŠÌwùŒş|×yîà¿^|š\QíMQ¬B``²l_÷å›2•­ÃŠñ®Jzÿ8²bÙÖK!Hya8C\äåÆÂ˜tk?iwÇ•üˆ¢:LÑH.˜ q¨7M5X!éÇÒ£FºøÎÎæ5Ö˜¡W©O9uÌŠÍw—M¦(^V¸Té”@Ò‰hôk U!6»_{¹üUÍÕO×Û/§¶¦Ä&·Å¸°áİ/~¾ÇS|âá›/X ê²}4­7aM-Õ- JíIåHÑÎ×\ßGÉµL–ÈåÊ/(4“y —×a– 4Wøäˆl¹Ù7Öj¢±‡*Ü“BšßÙreH±t€›1j5P4"MØT¥eôÍ-×ç‹ê³ÙàeHÄ¸‡ÂßÇà‚8HRCá!ÕÍ¤b#“V>yF§¿{µÙHaR¿ôò¾c5õşĞaÍ¥ü©~TpE>:C¤.lŸoµVGukÄm‚ê2„+â,XZ\!2¶A˜^¨„¨hŠ9¶=‚¶!=Œ6h’879Ê¿	¤ ´n´¬ßÈëİÔ¤òªIÄ_c&vªäÆ²M‡¾U› ŸS GX‚æ˜ã‹,£°jh{¡‹ÂÇ™VÇ Ï³Xö—°ó¾Œx ê,İïùIøAJÏ =ØsM+(Ğá–×=HÓ3CÄÈĞ|–ÿIª¤q{ÔÈÙä1Yo +CºZÂU‰$axw cÀàmG°<îM?ugÅì^¯”ÎÆ,"7‡^y«@£=ËÏ;)ôhÏÔg£(Ê`ÔW6´=}s6È|h i móB˜…¦8¸ÏGé£GAûH0«Oûœç@Ì<KÀ¢)C—Íè1Àz¦0ÿ©Åş7ªF“óSd‡-ˆjFÕ'èè;m7‹X¡ì#eHİçšÉNkVdËµTº%—@ò¤‚…9¨˜MIï Ûz©…QùCfÖÊĞãÕ©¶¤ê¡ux^¬QÊ§ÓE>
6aÍ`tiH{J¿¯¢¦Äœ,ÁG!-CÕÀTŠfÓ™^ÊRç:ëÏJ&$hù½+ K3•ß^s?TÃ%àÿòrRÍj®QæûÓø¥™Õ\„5Õó	R8Uít ho¹ÅØùm·‚Aèc¯î;“ Ó.¨Ã†¬Ôó’1å-v†%ãóÔı^…äëŞcÙ Ö<È3P›ˆ¸ÁG›8ıùKŠ3 üØ¡²awÁ)y|ƒˆÍ–£Á°…+XŒ‘Õ1üï8›mÙX¢‘çŒ…?Å¡íŸŸ×“6hâñ5ŠjíML… Ò‘ÆŠ­ûÎÛõ„pl(,Bu–ÃQvÖÃÏwZĞŸo;Jê“¶¡†£;…gaÔFÃğ „óõFÙ	êÅÑ§NßH‚~qª}E|´§H+™¼æ'?Š^u:‹Ó»S“®OHhœœ¹³Æ”aèxY3„+Ô³¨DÙb o/2¡vnhŠv@SoK'ƒˆñ31©Á…RÜà:£à†øª±oÈ5[€ˆÒÏ…Ø¼<´”H$_t„º\±Çß½>x—ş¶ü
#÷Ù#L"I‹OöŸ]â°+w/”2í/AÂ¦â¢£Ù:øæÉ“¡ˆyXp3üp¹ ğ@ÃK…Ã0ÆÇ×¥™Üš~“’m‰Ö9z*êL›ñÇkâÎp­¡˜ÆY54ÑŠY¡X¸÷îĞïêjûJHe.µe0ªêôü]7!Ÿ#Ò¦‘õY7uòÑt´¾ñË*ÿ©¼F’À8€­€aÖÌx@ÎÂµÃüìÃa«ø>“½×åvY>«š.èÑ=72æ—ÈÂ#ve“ObfTĞŒÕÙ)ŒK©ÃV§]F¸Ã–¦<…<ş ¾ûHêK%> ÂØÜÃÔ—ŞµpubxúƒfáëM°ZÔøM%”®¨jƒ¸ÒÍ¬±ŒJ«¸¾õNì)[cJaŒ±w˜Ó
^@,2¿Åc®sFu°è¼jD5)‘I›,MR2G€]\qO´1½WÃ±•!ÄòæGŒ:g§Î.ˆ.Æ‰êßƒ³Î/Aw®Í_SÙÀ•Á2eLŠÔìšœ©†$Ş%ƒ$
Tm
J ihÕéZ®Ø)ĞEQš"÷P=ça¤É€Í°}ihÕé]
WÆœlHD£øj;%¶Â9'wï;ˆ€}OT8ù4ñ³½ü(.şØ’[dü²`²`_É•Qo/8ŠpÏ²ğÕfÉ™F²Ä[Ç! ZrÏÊL»s›—UcJl²šñ„Ü­ZVVñÄÑÈŒK²%ÓÔ`çbàÜ•øáw!-3ŒD¤Îf•ÇJé®ÑÅH~Ë†E_ÏLªùÿ©RoÔ²^éÈ¬®“¹-Soü3d{²hÄB¯<Ô4i ¡liNyêÙvY¹ P_Ä>F êKâğøJú‚â‹:9ñ];¦.õIÖ†Ó/xvñœØ©«1
ÆßWW‡%$ò’²HùYÙ<ÓOP¨	Äú:×Ió\—Ò‘l=*J£ÿ=Êdæ^/.)ïµ<( JgçÍMŒµ8¸ƒ6:cÑŒ±Z¹ëİ„Ş2@3äR×,]Íø:ÃO‚úâ–8Ò;5¿”Q‘´8¢ğûsw9ù÷B_Ú«h×Ú,[/aH²†6Bê,0‡}…†ªl6iê]ñÏñê%ú|‡´ ’%ş‘“+Ç`&â¥¤fr/W¤yCa¬ÖÜÃÍ	Õ­Q6jÇ/:#×Ëá¬H bÙ‚na¨Çtú ®k­éEĞõI—Ñù8†ş¤›šèó.ŠÓ‡vBwûÇyS.ŠGDPÙ.“ÃùthN8"(‰(¤6–iøµU7†©]ÔõÆ
¹°£ñ}£ÍK³³?š6j†ó7SL7{õŸÈ§0 ¯‚%@PµQ¶´Ö»&0ĞÜnïã,€Åüag%kƒm©Î¼ş¤ ÈÒş}Ê;gŞƒuRFw7HASÓùEónIB7%£[“P…ŠaŒ‹i·ã›#°‹¥°…òJî\Ë›Î©0ºA¬‰›yñCp«ã.—TQıémÎˆËW’YccÄL¡+g©'$“M6<ù´‘ZW!Î+5-!ÕKPÿDyı½ëD|ÿa{´+İåûëoV †÷¹,.À85_ïpíñ¹‚7^
@‹¹|\5şŠ|'÷½ìOï€½\}ŞïfÖşî÷Ÿê8ñè*öÁÈµLK r(†>÷ñm’JsÓ%ß+±¹è%Ü9şá1[—oÛüùo—ÖçXÜ3#¹4>»›0"µCÏ‘/gl:àv»Üà€Vpèë`ëK˜|¨- ÿÿ<X¦œ4û`¶ñ¡XÜ@EÄëgó™ìyÄÃñzïG'Êß>ØÓÖÖ3–†ûàZÂÉr#@‰È‡&äÆ%AÌ‰afˆÈ)
¦'b@?
ş—ßZLÁ÷+°ğ;X=üğ¯³³‡ÛÃY+Ö<^à“wt		š>şı®¨"½ÕÓË†Ö½=omğï¸2%µ½º¼š¤îNÍ‘òŞıÀ3Hö®+/ïRÈæîbÉåóoøù¡î €§JB‚áKY+\«!Rr”{Ê {Ğ…ºÊ{Ç÷ÀŠÂ™vV÷\Ù‘à'ÜEà_¸d˜İh’˜Rì[õ¬]è¹ÓïEÃ„Wß¿Åîö¹´à¥e0Sª&Ÿdñ€aq»6@X‚Ö`\—––W3$û?|88w·ó¶à+‡~{èWì‹d4ûCøåZÉ““„/,çÊhü7X~\@{^©[Â»«ÇìÑ^ÇåH=%iA›AxW€ß p\Í&zMï t+šòñnÛ,
N?ƒè&Äƒ×(x@$}`2ñ [¥bñ%õÃ£ú,f%9­S·ìÏ‡ ~{´;xyÂv¥‹j)¥>Q’{‡‹èO™¸ëvAb'÷\ön¹ÓÛ•Ág¡iüœ!†8‚EĞÿ,Û™bÄş@Ä¦à¦3pqòHvÔS¦²-($=á¬)ğ7YJFL¥xù¡Hˆ-MMšTaƒì‹dFccÔ‰ç|Š. æª“9©ƒüYò÷nçqiG îìÉ!g±D%<’lÆ‚i;şAÔ¥•ÏÀ
ÃD ]L2µ’¬+ÿKø-óş…ÜõÔ¥È½Fk°Ú¸T‚
AÈÀBqƒcykDR^«À«Ó\ß“›í÷gäû¹@‰èÆyã}ÅcŸq½(¸ãˆ@ªÁÉ²M8Ü
²È™ÄıB¬F”-3†ã—2»Ü”<9€ı]„Ğ£®%¡è€<Œ”‹å(qg—q|İW„:ñ/—ÚÀšUgèß*ûkOÑÙè7½…’ê¼Lê{³”qS*ğ•uNŠ•Xäş¹%şû¿×°>	 ?šXÿtD˜…d±½»·»Ãì8\…Š©OXŸŞÏ¯{o‡‹<ştğpg”àÎîn~ïY÷vøxôJhFìããÏ'¡ï»?Nÿ¯oø¸ø´Iµµşg©Ÿş]ø÷³£r…şÈÁ^a#¦8*šª¸8îO„@íì/´ît±r8çwÈ6D‡ï¿w‹ßÀ:Ÿwø#e	ŠªOÛö¦ÑÚÊ-_Å´@ÕğŸmİ
c·«¨nàqÓs2'E¶¶Æ¶µçİîĞr¾IW½Î> ñ-Šç%*+'•aFXœcV>ß=`=±¬9•œ §Ÿ ¨1 (€ Trabalho1/ModuleALU_pad.csv
 ¤ŠÙÌ‰0uC34EòGeûß… 3ã™aÜˆèZpt`T6ÔAé™;ñ°îGrØìÓ×4fX÷™EÊ)6ã”'wĞ3ÂİË‘4¸hÑ&¸hÕ$WŒWğèÂÑåsõ(‡~˜sõçÍáä/‚'¾OwæÒôÜ	}
Cï~½z;a_íğı,÷wıôèêûx½úô~Â2I ùNïçC@ÿu»ÛÑÀóÕúúŞ /€ÿ3ŠSO~€Ó1f5~ñL&G½?wäÈGô©½!ÿ~KËßîö?¶¢ıE*S½#M7k!ïç¾äöw÷iñoØj¶ò3=à(Á]:|>ÙóŠ`x»º´æì@ó|º>ÃÔfËğîúNß÷Ğ6xRƒK{ÏFèiUš9¨6ğˆÑGx5*Ş>×ƒRæ … 6ÿ7@Õ:gQ<†ÀôÎñoS¤lf«¢m8İ ı†•ÀEÏ7X£½—†¢Ú´Š£ßëM½_	êyí}ÙfÉë—o¶Ùëùƒ»§ÈPUïäùöfïàíèm3”A.àAFtğtxy²&¯‡Ö1óÍìˆxmr¼"}ñ³C~cÎ·iî,5ímë|—=
Íêü[y3üúõu.6ôZ¸L+w­ŸO¼ü/KåÙôÏ§÷o=¿Ÿ)şVÿ÷ğÜªëbºÍÖ?\İ™ëOÎÉá›«_«Z4çèñÑİÛZï+Ø¼G3iéŸÀñÍ¨;Ztyç{õì¯û
;¯?ôöŞ#IÆ=ÁBæÙK°õ¬ıy¾õ²÷uøÏPYo‡œÂÂó£0çêĞ?mÅ6èó‡’)Oğ®ŠÃóŠ[UƒØóéjíË˜±Øm;ç}PËó†l–¬üÇ‘’\˜­´{áíA¬µLìBÁPÆÇÂD®™(ÁR!R)Cå€4¼Döß‡ŠÍûÑ=$L²,ò>u×!e 8[v9pÛ¸u®‡İÄEM>zˆL5~ÄÈ
uÁ%ö+-(¸ìŞ¬—%m¥Æ‹{¢à›æ ü¯p†Ÿ¥S…¥!ù,á`«V­–Í‘	?7_E<?³ªLC|YàÔ>©qp±Ó`3iòU¨å+h€ôBíI¤Päj>j[ÅD™r&¢Í%¸Ãh^ThøL°%Ën6U£«H÷‹ñú’s”5Äã[ŠfıãG 
„ÖÌÖßofHáãµgØrİ‡X³`˜°úÀ‹
(•¬8)äÎÁ„07‡°X¨K@Z!ò€ô½'eÃBa`)“ÖšaPmTŞ¨r’ºoÒd`åÅw†Èÿşv¢ÀZ¬)Ã_š½ëfĞ!Š¡Q)±’ QtGÈ}ø“DŠ’zU/”S[†Óãùv^qr›F@,—~Ø#¿H	MÜêıN…Kx
}]…”B ¶»ş~cìKÆ¨æ5›…Œ´Ø ‹©‰geT-¨E7qQ¨š3®ğíEBÂzš°Î U‡…Ú+àq†d½×÷¬ÆRhùëÆÂO»¦é5ÓìİhOP”ãR²R„€$Ô|ú@l©ÅòÙn!M‡—ˆs÷óÉ‡Š7]å’’)Gj&)X%Ì&€«–«,•Ú©AÉšNÔ“d4jZ ÚÌËhË©™ó¯ÖõuÆˆ“DÄ
v"2¬ğM¨¤­cı+ø¶2\ÚÖ"yKµ¯å²/°Lt)ÁÖjÿ-šøÚˆ—•¿’ÛÕ-4”Û6‘Xi ë!u†ŸZBh,€J*E@^µ/}«´LnQ²0-IÜ‡e¢™ƒk§À¤q„–©I'QÕ9] —Ãh6€š_'ó«jàVÎ™]¯õ²İ®Åvzn#54L@§_•ûé¤ÕÑjröøs¸ğÏÍFmˆ_a>tZ-$²CÉ0N« Ô²–Âîè[ÖÂB~f¾†nß¿ÆšÀ¨¨¨€–Q
€æ†¶C£sù¶ÅQº…-²hÄó€÷ÎIä
9\e’øm2€X~"fà0y^B³Ô¢Êëñ,Œ^öıôÿ-½…”4†è@~j §Ñ`|g²;ukVÇk–¶ïÁnÍ™­ëj%Fai¶Ó'AŸSìê•ãH5p†ê~¸TŠˆNá^-ÂİUĞæã˜.ºâ;…x­=rJˆ&î4¸U±‡K3JnöWv¬ñ+«XZLıÎwXt\dï–øÚxÈàçÀnm‡—ØI­`W[*3’eÔš Ò$0kA¤Fâ)65É\Nc£â!"AºxŠëÎ© (ˆ ¡!t€êê-æ9qnºŞ¢n)7ÈñEâ
ŞH}«Ñ~zCéœ4AÇ¶gÖPp{¢5°QTÊv'UáâKœ°x‹§¡°!´–»°¼l±º{8ÊæCa¤ãQR+Ô­ÍP@B1!Â!!jêëf4]ùËkXB|ßA+2…³YÁÊ<Ÿ†_ø÷Å{;E?¸¬UÔÊ½é_ãÛ$rß®#cl4Şá#´,†ĞâªI½J:jk!‡!ë½"ôª	ÔF$/lŠ- ®Ä|4ë"îFZ*¶äßCÈWl§K‘Ìt\O~Si°ïÔŠxÎ„¥ÒÆj«„‘Òó²~ÅÙqíæ#;:hwAHb zİó\)Ù@òÈäœ©ƒÉëG@ÑÉ¸éımìzÕÜ†6Vë)NĞl³gV²O‚ä+¨ÓiÚ¿z’i°oğßã¸RåïRNÕ—”TÃó š{xªDg$u*®œèËÏ:«PHsr^C™À7§%‡PRPbºy÷AVâ+Î
ƒdò2b â!+6Z5âÂn¤“#›Ùm=‡wÆ‹gÂ™î>î\û(Ğ€TÈn¼M©Pû¤]ôrl‡*Ğ[İ2U÷8ù}EE *„"ë;GEø`‘´ÿ¾í¥=ÁG7R=ö6
·À_‘ÕgPç»àûáğ}ö”ƒè0S,†Ên¾à˜$İ%7İHT¾W9&3êÂ‘ÈÎªi:!XıˆªŒ£8q¦Ê@M¬üíXÁJ ^Ö•X;$úö‘+§ õ¬~Æ.tUÓÉÓeJÏLà…mFº†6JÎ
e­*9.ÆÈÂ=Öxø üZy°8,‰ŞAÙï4Ñï9ƒ6–ÖØË ìŞ0R/kÚDàº‘#‚“ Ñì©ºt4¥+PÕëø—}ì¥ti²9¥!?Sçq¢-§¯QFÁå+ˆÁ õ(İ3ËGYî°*o(>PÆP|¡Œ Ô,¾V5ÕÂÍ)eô¥ùB¤0f»æİ€™£# #¶D&±jytø¢ˆM!Ô'	˜ .º6xë )Š[‚Òb»ØA¦+®ä9"ç5 §Á”İô†ÉÊT1ªóÀº`¹.î5D¼)ƒ‡>P4Õ˜05ótÃÌà>n˜©ª¤7Í°“nÊ³d¨ÄS«À¤Cà9wªƒÒbéËDyáb¨Şê¦ovO
©Ì0A\à£’%ÓR¶/Ró¼4É
á92îk©‚äŞ6Î’İèŞé?×iM ÿËôpY—1¬¾Æ¯zÒn"±Iõ5îx"wÕ;RHŸU­têx™¯öß‡—o˜æŠÓî¤ëjÒ”Ú¨ø¯òóOŞŸ8=ë{xµ÷¬°–¤vÔ:ÌÊkNóQ7:şñ“Q"€±…–p‚5›
î0c{•v
/ÃjŒcátËd–¦JÕöùE+—e÷b=ú:µ‹à9c÷ŠªçÜoêÄ:Àïq³2½ø?B‡ñ„aSôv}]A‘Œ¯_i@Á’	b@q(vã¤ôƒdúãu:EàÙ§9c`ÈWœ›æF*ĞrEŠ´0 (‡ÀœÌ8É2’0”‡nJÌ~A+•ç`OşÓEÙSÅ¯s‡M›Aãa×@QƒıU3í¤Í·6§rÔÁ¼7™dé_Ó©9«bÖéôZUTßì“¼>äS;™òÙ$4°so|S)LQ°ãeßI.Ê
£aèÊ°E¨êÌï.ß)<İ1ÜCğàC–ËñŒò´Ì¿üSÏ+ò
.Rm5›¼ÏÃk›­ÇNRïP”rº]—ì[74Š2€–+ûµ7:ÜK¼»Œåì‰Eö6"ÆnÎò“f
¤%Š¥0ã=«!øM$E™ ù*ŞZ¨˜2…Ÿ7²QÍOÏŸtH9Š‘Y±,ó(¢M¦úg*î¯{˜˜¶;&‹|S^fëšÆÁôsä—Œ'¢~’VxbeÔ™.`Ç˜$Šd{^„³*"—%iI¯æ.ôšéä¿• ñ%*ë•…RuéK,ıµö¬»oŠE©2ëø^! 0\Ï_Š³d˜ó”½›;™Ù<äØ’·~9g+¼ÜyÊZŒô äÜ%ÄpŠ{¼æ=š('O»%/;™‘j'bËè5Tr×KUûóx?L^ÚÙõÎóÖc /RÏ–«¤±®–Î°Ñ0‰…xšbÔlTÑlí Á…7Ë˜ä³$E6â·~}9Ìƒ‘F³xêPç=#$lÛò½a°úÉo‹Ö³ısyuø½ç›¯Ë?y?ılŸNÎ|Ãú‡ÿÎïë·Xwº3ÓTwyçÓ§GH‹®ü±£Ç¨xx'KQñì]ùú4÷› aí9ÿï–ıvNöfû½›¿¿¯î#fŸ×ôwvøOW·×góÑĞ?Æ¬:ş2;4¦úäıuˆúèÿ	ÓŸQ÷P¥†Ö5ûTî×S*ğ¾ÚW4şŞ “ä¼Ë€ Trabalho1/ModuleTest.twr
 ¤ŠÙÎêz0eD24O6^÷áW×aøp­Jl„ˆÄ¡ Õ»½8˜İ°hcm;lÕ=é’r®Ù47vbÌÏ´»««ç9UuvÏåîªş®qRV•ıÑ^!gñ¶[ÄñÔÌ7iÃe™×cVŠî·]n¹%Û4:4Î½\9^½rË+°Ñ¿ˆIÇƒaëA÷ª(Œ§d¦Øwí,µ±¬İO6Ò9oLNÌ‰ºŞpÒÚˆíÑ3–Q¢·<Äud4 Óí	#BI;;,fÇäkŒQ<®Ï¤1³ç¬wÈıë(3Ôş^|X‚]ğç'#‰–§Ù^‚’‚üÇ‡WvûEæ}ƒ(@ñš µ=óqÛqlzv‡§7¤Œ2[oÓr–Àğ{jö§tĞ"‘T7æóHquİÄ47Òİ‹"&­ÇÃ³7^\>ŒÅ¦Ù1Nõ–®6¢Y&à}°ñr'C	³È%tÊr>Á¬Á3¬ä–ıİšs‰Ÿö¸ €ï‹sh&§-şkb<çÛ†?	”êäàŸq?<wî¬!,8»|/å‡\1è¾ÍÛİ!N”<êaÁ°	”Fıƒ?"r<ÑQ…=VàókŒ-¦ØfœËH1Ê!¼NÁ@åç¤}©äİqHŠ
Ì+tİÔB[7uÑ­¯È!—.Sº9&@´BıÁU¡aPT
jPø*ÿÅÙßS¨€,'áÊUiâÅMGÑq$äœÜZ_(IÓ>ıû&ª†ÒÎO$r²+‚hõV«’L^İ9á=ªÌòY’€t&@,™ÂŠ¥nğ5'ùİA
@t×7†f$ D‡´ Ì9ğ ³¯§W®GÏé´ R4aœ+¢EIñ+>ÅA±˜	Ü2"¬/-iİ4–ºğŠÄ]:D’æÅtLU;îP$P½/¨¨=*ºôß¼ï§”âà 5Á#•#¯/M$¼.œLb çäî[&Š%Tƒ÷§L›P„uó‚é”g±Ø¨şŞtâÉüäËƒ¿éóÃ”]ãÃÒ\ò)-›¯µ>BBCÕ1ö¥æŒ+àÂ_FHê%àiÍ­û]7¾"ç£°9½1UeK.„Îä”ôcÒ•Ó"±2‰&U–µ£Ş¢¿±†EQ„®8Õ#úİÔ$¨G†¼>B2ÏTmÊŞ1!’Ç,J·á;ê®)o„
…å„½mPbBÕÇªaß¨ßP4[íUdßúúÀ±r-;€E!.‰B÷j¸Ù½.ŒŠÀı\cwÔ$Ñ]õü¿ßÉl‚/_É×“oAê(VmQøšzR$jY?d-Õú/úğwuéırãöÆ´»w=cÛşÅ¦[»K3J´Õ.Õ*Ã}4Æ?ı +sÕıSqqÇ)mÉ¸^ó4Æ}¸İrîæçBí\LØkà 8Å9ö²-Õ±ä"=ı2¾nÙ¡7x¢F/_^íö‹ø–ùrş(È·D_ÿ‚.W Œ[İÔã…^db/™§.†?±r<A/cQ9¿¡ †Ù HÛ1@€ Trabalho1/ModuleALU_pad.txt
 ¤ŠÙÎ?»@f334DòPUï«z³/w#D”“jêëjŸr9QSà“ftÊy#¹n¶pìr^eÕOy€r;qÛwåfŞƒàê¤DŠôE ¢|P8Oä~¥i}iÆçÃÁïäéÉ6HİX?H;q÷A>ÚáSGì—N^¹"üö¬övı;²ô|»àü¹¿3•Ë,¥2h?ÖZ$ŸÇø‚ç_6ÜWééƒ<£1üd2·wÏ'>ŞÖÖgÄWí2ÊåƒËß§ù!ëÂ¶çjäÖø}ğaù=¹Ã“¿Îî£‘ËÙÖzæE>³ç—œb¼ÿ#'ÎMñ>Fán{ãR+2ÏÜœ|ÇıÇÖrÛıç«ùO^ÿçIö¹³PQÉ³iğL›ïÚVŞ~càØÌca¼}Y?Ï)•Œ|ïş;üù_äe´ë=ç( ßÙ >õhü£¡¼3cèÈVÇËÀ÷'ò|ºeLµºø,Ü¸|”–óğğ9“÷Ïº£§mÑòƒ›³«ª‚Ny1òî_.ãÚ_Ú(ç9³|ôZ9ÑüşçÂ™7m<×1FBŠ=Ç/ŸBæğæùPm/`ƒsøæÉÓIyéÓÓæô	ñôæ>—ı²g?Ÿ¤×³¹OURğëËÌØ=ßofc*™×Ôú‰¬9;a·™wA¹¤PZû×ÑO.sÔù!ÈQÔ°W¾‘ÿ5?eoíH†3ã¦]ÇA8b'ÇwG?øÈ†ˆnM>,0[¹wsŞØÏ¥îÎåÚ÷qr˜W·o¯›Ÿk„äº²})7ŸÛıª:ÉpòOõ$Áüs35XaÇ×µ€ö»– İ¿^Öïé%
ûº6éñèèŠ±îr}<4~RnïìŞ_±ôÏ¼ößßô}ôşû^:]ñÀbcé?ôşŞçÛb¥9³ëS³ƒ×§¬½Ù9¨A&…ÜçÜ®>îzuì·ûĞ^ZîËó>×z«şf\éÉûÁ|Ñ—Ç	î:Œ­Ó‹±¬8ş<]=ôòù”YlfïîÆrç}$Ûù:2Ÿı¤¸{cØ™g¼øWğø®­/LíiënÍjf:İ]M}RIeØmFï¼_Q° eaÕËvğa°¹ÃËu’MËIñZ³Ë`?Ø¦Å€ûwÌ!÷ŞÙ8G¦ìUDP4ÅWX62 ä•DCÒ°`ÒW#á`ÑPˆ”MT!U6Tİ³w‚©,Y`väŒh’“—•	€Ö0Ú§ıËz:’ÈAµZ(RˆsXmk(	)3báUë¼²éëa³Á³Ohğ£:ï,£zexJû*w®ßb~V4Z²qùÕÊ|¡™ ŠíÕ“·ç´PÄ-G;oâ³g‡T`t7Ø^Üp‡¢†´é3àsé©ËÅ>¥%†³,ãzi=•†0j¥?4V!”6¥ä#ïÿX2Çå=¢sgÚ-#pjİ¢€íKGZú“ï¡Êo»J¢ÃkK†µ+…fyiJcÅÂç[º–N~¤pÊ€1¥O—–_ªØĞH…TŞµd;”rÆ_|g/X!BÄŸ–[?¨f j3Q-±2)Ç
ÀÔL,ÄJXµ+=<ü„½N6ÕPøP…Rñ˜p”­CÅ
ÑÍö¹_hrSzİ8.¥î*YÁs–Â d¦,(¡·R¿~ÀXYËÒ©5!ÊÖÃ˜¿+”ŒúOq«J?¨fŠyú–¡?Ë“T½s	'lÃ„iSà³<kÂz03ì0ÿ-"àö]{Iìw$.›­‰'B%×°2 i®°Xmô¶îjÇC}ñX•
EŠ¾Éğ™œ¼ZÁ ’ ú÷ø§Ö¼­<Úz03íWŞÂÖ%zë¢½RA‘åOaœpbPø,åFÇA¨ç0Ï©V¨‘R	hÔ­Š&E'ÚıUJë`w~.¾öÁIö¿ù¤e`²Ë›Å;!¡·Â¹‰™Hñø§²2óßáİó5@+}(o½¦Å		ËÖ\ØJ”ô¡¾ûõ
jÌLÜ Q‹AÑë|KHPÛ²Z‚’gÁPæRX#«8¢‚4§vƒ¡·Â”Ÿ¨ˆÖÎû‰1‘5E«… nÒ‰ì=Xø3ü‡7,b·N¦’[ù¦"¤mwŠÍîÜ¯*ñMw†Í|&dxÍÂ7MÃ6àzkØ<ŠAD(YDB-$v€Šv¶q1–$Ï†÷á½‚f‚ÓŒDá‰(wí¡$¡ıÛ—(‰ÅYÅ˜ƒ;A#Ç@vĞ‘€ÎÓ‹ƒÚátuZd»°2¾/ô?=›l/4¢rk»A…«¤!CY´PÕJŒÖl|²^@ÌbPºeê(ÇA`°ÚıÂ‡}ÚËbdCRHøÜSG 3Ü×°<Ôtá¨ìcëú{³éÿPÉhÓ>*ƒM‚Ão`4%i7˜1'V©¸#bIüÿ¸2iĞûH‘—†B÷œØÊK„9Ñ-$¥8Şª¡Ìh³à‡Q\cR¥FG¬qTlıB‰± scà°ÎR
G&Š&µŸŠ3İu‚Æ¶\0k4ş¼e¾-ÀÓõ§Ÿed’ğ…8¬¢Oí ·Ø49„|.jIÜ˜)$ÿæÛt6õ$ 6öÈ•’ƒ#¿¶3T{L0Ú¹³AıòñŒƒzbªZÙ'XmÉÁí&¤cŞ—µ/-Œ«j}ãVÊG”øÄí¿¢ëÜ®GˆÛTö}îŸN¶*gmº}C)5‚\\ÙXŒ4Lˆ7ÑõBd„Èƒ}Å.ë›Är>ï¡ş¾3—·Z5$¬7\œë=ÑÓ¦34‡š”îë‹ƒŞ›ÄÂ$d¤y…BU¢Î4e…hss0­Iä3é¯	%6àhÁcce úˆ…s‹Æ…†è@f0ü7ŸŒ8X,¬?CÄgv›Ãİld•‚Æó“ƒÚJo¼C7•¤Ë‹ƒØÀ³ŞÉxII¦ÎÁ`pI¡ÉhÁs–kX[jj¥™x†"†vw°à“C™_†íçåæò”û=ÆïÚÜk#YÙDN>³—¢ª’Ra³ŞõĞ¶5)ıQ+lã{%k1‚Ÿ à”C™\V	J'³›Æg[ª8gbà÷xpœ7áŒÍwÄ•RTóûïÄë|ˆ’ó¿¡2_}»í‡ac¿#òÛ;­Õ(šŸ¨Ï®rRüDN7Ü/[“a/­µ‡…ø©0Ğ¥ÏÎ4a¬Œ90<dÉá7ÄŒ{êªû[›lª-e~;´!œn,£G³çÿçÃ“Ã»"FÈ»Ãß}ÅÁír
œ£Lø8ú¥İë7x
xne¤Ö	àœn-$2ã`° iÀâàöªÀÏ€F¤¢¹°<(2"¢ì‰&RÀû¬ÀŞñsÀ¥?'Ãïè=ñ†÷½•ãk¥[J¼ÉáÅ÷ÄÇƒgxÚêJŒ”úkÂ.rhá úbÒ‡ÃƒƒÙß:Š©{G¼O‘Æ"pºfl¹~×'§G$BŒ¶²0"]6:ÍB…-ÒÂÔ¡Êó°Fa#ºü@>®¸Ø,ùæÆëÏê3â(g¸Û®L
'aOÄDâé%b6º$"ëSuøp{»åwÊï•ß+®„¹ğSé°ÿ$£‰ÖÃ‹Å¤Ÿ£—ñDN?2ààöºÉD9r`yXZ0m„®cR×?£¯Iµ‘£TÃÊ%±Eâ$AÔ@¦ğ-ÂFÕDJ+b©îÓÍÔˆA—µÇ øóñ¬Ôu÷·‡F´”S¦ñlw€’ƒ;ÁZ½å{Ê÷‘@Öo?œ˜-% ?^0Şq€}-%ay¼D‹BÁ1"Æe}êÕ/4‘h[4IğüDN/98=«B{BÕ39°<’tZ¤ÏÄêg'´”J¿3“ÆB”·‰ñ2-•;$È†ÈÅ£ŒDáuE¤°:Uª'áÁì`k#YÈÀıïê‡ŠIGŸóÕ"Fo3Âì¸fJ>8g+VGŒ¸8=ª˜ú©.q°XQq!/lş»jIm/X”vˆÎDI[§$­ï“‰%s¿‰Àk”Î©ÀlJ'³FÈÁœåZœkS¿´à%À9Eş0ø*ÌáZB’~N#„ZNüDNœã¹ÆÅvöÖgs`yO»Gâõ;F¨ÒM*ïˆØ’õKâ3‚´$†Hl`3¾cğ"wä}ãş/ˆâß²Pg~Xu‚oªÖ‹8ÿ'ò\Xg™±dÀ³ ­âwÀ‘%)çÜ,´¡ğáxÚ©bÕÃĞ{ê¢ÇY]d¹e×ë¥ìÂxl@«ì±zgÉMÈ–0²Ö°]áãÕj½Şè?UÒ;rn`ºo¸À>””™°F¡²@g	‰+Œ/ÄDã‚Ó&´!ÄÖ˜@géA©í*ÀûÓalšzÓYƒ[§´øA™Cªúü¯[}ÏäŸ›J€èöáT/Â©OĞËï úq`y äjB7ùOi´áp»CMı÷­(CŸĞ	|¡ÏëğVÍxI–I(§K`»“>)ÜØ$®^\BD•¯''±iˆG Jxœl"…(2ü\.Øª¿Âb­ \°q® ;‰ËÜ¨jşà
ÿíßÜJoUÆTÁğåŒéjùä›"–ˆR'ÔvÔŸ1–@
ÈK§!Th—š¢'ç»GDñ#ñâø¸]±{8«,î}½….¿_ƒ6L!x‚â…†‰Á¢œıu"¼#Œê—ªîñØ8–ûÛ¸œœÒP~'bk‰€Ï‰øÂeR@ç‚ÂWRò‘”g¼N.pDÉ]_IßsÚª–@­Äã„Ê!–…¿kÿ-„IğãˆÙ”’É ',gKWÓ$Ù‹!3(¸Z,ølå„k“\ÂŒObbdBd35 ‰Š¢&0Z¾øL aÂÁbk¸Ü.ĞÉ3Zr^ôP"†ªHøãÄ8ÀqN6&5 èÓR
Â×–ŒñOÆãŒéOhö÷î·wv ;Æã„Ê!ª”qÉAÅRÆë‹‰kAïèo?+,¿?!†·£‰ö$R¹0<bNfÇâ"qÆãŒéWPø1IQ—&‘L-2~Ä¯v€ñvÕ•"Ö	".o1˜Ak‹ƒÜ`Ì`F’öUÿ#H’‡"ò	V÷ÎA‘ã ;Èã”‹tLØº–pµ†ªäs`x’Ëï#3¥†ªPdF¤Z§##fR³¯	
4eÅÁìá
4d,CS8ã:U1&ÎVåo¼hñ’ë¾ÇYë\*?»ˆH·ô‡ş9ŠJ!Ë†3¥ZU=œ×TdDº¢ÔDº{´´¢^äÀò)É§±p»ZÔš¸*yŒ”äÂ¯6åÀ
¹p¤n.Çç9…6½ĞZÉñÇáÓßÏO†M³Ø{©Î›ÿ?¦Úsşß¶¥?ıŸ¿_œ¦ŒéŞşÅŸ<İÙyÎVîSü±—¿ õvà N`íÉÍ”å°—¼Ù?ç†Sşu“¼Êz±ı ÇÛÛÓô9éÎÂ^nÎ¼ÔòÓÎš“&üòóÆ×™î+«)ÈQ6ÔçSøó§³5%¿‰Ê`è2ÁËı'Ï(ëÖr±èO £8œ¢ ø´^q€ Trabalho1/ModuleALU.unroutes
 ¤ŠÙÃ ™%T33øDß8RÙ XÉ–Qİpº®º[¦íc¬µƒ­±·ig|¶†I8úB@¿˜³“b>bZ†{ÜšÚ´ÉemæÜU”äcÙmÖçeKXì/ª†Qg*UP=Û^€]Y˜¾l..Qˆ±kKQÈaaÈû_cQGD„ñ€}:îû+½‡¸qĞ²ürZáOó	1È*ÿSÕOà‘-ÊÔ3Ú ÒÄÌ€ Trabalho1/ModuleTest.ut
 ¤ŠÙÎœ	 dC3?VO{Â¯JY|¤RZRÒV9!ä„ÓÚÄ7büU_}VİiFí³‹?,ùbÕ˜¹&™›ú7sL3>Î+¢Z,ëÖ>ÍIs\À?"m\‰©*;0"¦‚ÒRlÕpI4ƒAÆZŒfMé{¦ÊNà'n™†.Ê ”>ë¸_> X€ïE½ ­1åÄòlG<aÕæ1èÁS/Úg–²v|øeô‰¹ÃVpòu¤.?§ë·a‘‚´Né/Ç~ì•¦3{½ñ~…ó¿¥ÓË‚ÁÕ†"P-7‹>ÀÙ¬w~Dçå€£6±¬üËÖÊ³\YÛŸ‘ŒÄæŸz9Îå ÿKd7öœÎÛÃ5±¦ †± ½:Ûÿ€ Trabalho1/ModuleALU.twx
 ¤ŠÙÊ®-@C34Cw_ú?
?Tª›‰ëâ’|³ëÆé4ÒÆ¶>
4–ìÉ*VQeÚ¦‘+I)ğ•ó¥'wc
O6JÙá³ú‹É~1ƒ|°‘ÂÑ|¥WDø7/¦Lmy;8Ÿ{åJ¦Öå&yÇğb{¿åJıë[<4¹y5¸ÿûŸ²Åï¥Ë-EçÚîWà‰¯ò!,ôÙê³×z>Ÿ £Ğëx9v#£p<×ØFs»İ›¿;[{ôõö#^`Qz—›¹²n·ò/Äu§ß‹”¨XÇˆøˆß–™0õï^é·uU’¶¬s€ªíƒ¹±»K’[6L‰1ö}sóÓ¥ŸËë.ÿS&{İ0€`Şñ©\±i ¼‰œvå‹E¬½åùƒÁ¯Nb­
0W;†d&‘lÌ€ìW´GgYÁ¤8c†—[yĞ.åuÜ8À¥Q„ÈÂbjKÏfàsÀöüíõ\¶yÚËãß4¶
0›„²Œ‡ÄIØ·¹:qdÅ¥úøN3Ğ•°"‘ÆS)AO–2’¸ )°Ïsğºjw£@¢‘6ç	7AÀËLÛ?Úı¾Ó¼+“•ğyF;{¶ıj¿MÛ oHŞi25$ø7ÀÛBL­À_¸e¯Zh_ıº¿k¡äR‡"f•µ¿¬oóèÿgA#Èx2 k3?5Şú±=q¸¼!¢¶$Ø«A=4î^ú/F|kÃ¨z£\/İ˜å‘ £°¹ xäÁ6Yz‹"Ãa‹P•áv#^zÁ‚{¼ÓˆÌ2h¤Å&°LBi"f$®i“ÔÆzÁÏ¦üa›?&Yû%¦á‹Oi	f
b }Î]ƒ.²e5ÍüqMÀà‰Y=ÄpÈY"óÄx ,‘®Ğ*Ç›-æû±»®XåKÃÿË%Q1ÈÜ¦#0[ïdv#
°ôS2ª+>NVz)Î³w|v{¾xäL_«€œ„è³&M`öşcå¥QÒÿ¸aö$¶I¹@+! zå…´¤¶i]ïûÎëYï;WÅŞ)×¿“¤‚ Ÿ\Ù(ïŠ„f` ÄJKíà§<¹ŒÉœİÒEª.k01XtT„)Ãxàœ»§kn;¡ÚW3o<9ÕëŒ±(bQ.Q•3L[±ÓY†?¾.ù–*ÚôæÄbæ÷®PÎg®Íá7ÖşGüj4àá×úOwúÙı&¸	€¨ 8µrÏm¾ÎyaoõØìëúòÓœ“«t·î2A¤lã[ Ú]º°2×1kGheÈ)>’Â‘ÿ7OeëşËV…‚Z
ßZğ–ic4…iÚÕ¢z¦¸'Ù~ó «RØ5Z\zÉ†BÃ™ş£$?^›}Vï]§&M.(v¦¨V¡00NØ6/ƒFë±fÊ¥k/`¸k’¿Cøğlk%¤<°T Ü¤åÆÂ˜tk;ioÓÜh¢:LÑH.˜ q¨7M5P9ìÃ†:sq‘Ìc­1Bö-)R~róLŠæ·Ï¦Ó/+* ôƒJ iŠÄ³ö‹1€*›‹¹âîúÍéMO×Ù/¤¶¦D&·Åµ0pî—yø[©¾AofÉÜ(:,ŸM+LØSKuH»ByB4sµøÁòmS#©™¬9Eå’o$úÛÑbGp~lo—,;#zÍTB2#Baå[’hS[ñšL©ö.f-.ª„I¶òƒ”¬ şÌÑK M~§ğªıTŒK|pL-ğ8~ Ã„…$=ñÒLÚF1À‰5cç”junx7©*W`>WLg7_ì¦Ú_Ê‘gå/Sã¤:@òeÆéöûQ`ÔwQ–¼H&lQ”!\ÀRµ…Â$…êˆJˆ£›!²X+"ØÃ&‰#ƒsœZ1j€TM­…döî6Üñ'”ROì¦A}Ì™Ø£“J6úÒd€rMLÿƒøæ˜`$C°k3Ş/?æğcÌŠ31è3ìÆ=¥àd<ï¢ŞÀ:7A¾°şX§Yà¶ö\Ñ,yìuP34<LŒÃgõÍE#ˆÃŞ†FÏ!ŠÈ[‹Âd;•±õŒ%˜I
ËÃµ‰o€±(±8Ş=?t¬gÅì^¯fà–‘{Ãğ’jĞ(ÏtÙñ–§]>Œúà”eLŠæV‡ğø°>CãELošÀ„-1ÅÄxB>Z4s¼ƒ
´ÿ¹À.Daâ^ =oÄ¾nbÃˆ õ`;ÿC‹üP'æ†ÈY"Ğ¢OËĞvÊo&X¡ì#aHİ£9‰Ÿq5Êè¼£ÀéŒº%—@ò¤‚…9¸˜MIï”Û{©…QùCfÆÊĞãÑ¡¶¤ê•ux^¬QÊŸÓE&	vaÒÿxtiB{J»Š'QHS	âN\£–¡í|'QLÚs)ò¥.s¡.¸äBbA††d	fr7èKÎ—^¢˜d¼úNJY­UÊ<ß{vä¥™Õ\„5Ôó	B8Uìt ho¹ÁŞém·Åô1Wö›ÇŒi—TaÃRby^å-v…¥ãûívBòuï	±ì€k¦Ş7q‚6qúògYù±Cd¼×Á)x¼ÇƒˆÍ–£Á°…+Œ‘Ô1üï8›eÙX¢»
2ƒ;Y??­|¹`ĞÖ(a³Zš<Ad8ÑUŸyÛ>£…çˆ×Yd5md<÷u¡İ	÷ó´¡î©;jj3¸X²v½l?
AÑ?dm’ l]síôˆ$à×§ØĞ4få¥"A\Íä19ûñu)Ô^Ú•û¡öv	É™<iA2‡…s8B½Ë:„O*Õ9y‰³sDkÏ²›yÙ<@ß‰y*şçÕ7ÅUk~A¨ÜF•ü.Åè†ÕÙÜ´’È!›º]MÜyTz<KKÿ[?~±õW#L"pLÅ§ûO®ñNØãÓrƒ]¥è8TÁ|TTzç_lxúÖ‡‰g ÂÿÀçÍˆ?@zw†P…onE™¼tX™Ëu^Šº“&ì?ÜYÎ‚3É¦š1Jô"ËıÙ]ıCÓÍO]‰IÖ¬¦]®ş¿›fä3®äI¤}@\¦î¾™dKEæQL²¯ûÔi,ˆÌ¶[Âvçf›èúH÷]‰°g~ÓM
&º2ÏCÌ™bõ0ˆÄôPéìLÊ™Qššå1‰u8jÄë´×[ÂRÄÆ¹O?¸/º³:ãÉO¸0²70÷%÷,ZXàÅ¸{ÓkÖ5>CÉdëª î4å—Uv1‰A±w—Ş‰ÀšÈ•–4¦»|Æ˜Rö@¤%ø?T—fDhÎçaŒpãR!§LŠL×bj‘¸üqÅ>¶ĞÆôU›‡b*C%‰äÊXt6ÉO¨\î]U»‹¿CÜÄômMz¾‡³+‚dÊ™ş+HèhbMêX.@ 5Ğ¤ –}^Õ¢í‚‘U¡!Ÿuš,4— ’ öœ,ú½«%}iÆDˆõ¤J8ßèªÉm®IÚ·À@>Çª|™ÁzÙŞÀĞ\;ı°$·”ü°‚`²`›ìÊ¨·‹ÌœE8g×z	j³dÌ£YbLõÈeœ³ôÅwns#2ê£di=–S^0•«K–g® €æD|b]€á.’¢Ç<ƒäNÀóxÉh±˜\b%&s4®:WLv*C÷\0**ú4Ê®øÊ•&ıK!@Y·N@eet˜9¤´M¿üfÈ÷dÏˆ…›<Ò‹3é”¡di>yèÙuÙ¹ P_Ä?cu%ñz|%}ÁqEœûÍú{´ë~‘ø–^Le6ğìã9±SVbm¿ ®IÉå%d&‘Òÿòìi¤¨T‚}šeÃ’|Ç%ô¤YJ’ˆÿGéLœËÕåÁ%ö¤…‰Lüè‰‘–§f³‡Lz1¦«˜á½·ïó$ IÑÀ¯>AtírÅÜßxö¿ç7\TÃ#³@kú?=ÿ?¸77s8ô%ıê°¶}âÅ‘ÔÛ
E”-°²Aa„;î,5S`Äi“ODjß¤|=®ã»?ötD¿ËÒ2exã,$Ü@Ó´ŒÈEîô(l5˜Û˜{¡:µª&ÍVåç,|Ü¾H³1dÁ30Ôcº~PQôÏMñE—Å+å&›£òAşI6¾÷.ŠÓ‡vBwûëÈ©—Äã¢(d—Iáıº4'œDäR›NYş­UÍã¡¨Wt=q‚®d(ü_h÷Rùv$÷FÍPŞæêi†ï~ãûæï>¨j&UkMkoWÂİüeæwEY I\Ğ`MU9øIòJM÷îTiÙ>ò›ª3¹ºB
ŸÉo›2IP™,¸2ÌšT,öˆm„b2-¦Ï¦\m¼>®–º6Ãy2Í7=bjAn«‰™{ñCp«é—TQşélãE–­x¢o2„¬¤œ’M4ÖóæÊEi\‡8®iÚC¨–0”3ıóı{ÜƒD}ÿŞsÀ+ÛçùR©H‚îää]€pj¿©»µÀÕèp),6åïîÓãÛP›O»ß’O¼Ê`sÅÅ½³Wr¥f¿¾!8ôØ*ö\5j˜–äPNàÚ$”‡¦JŞWÉ·ì‘mœÿl˜­»wlıyî—¾à	¶fGo3Şp7—(" µ#Ï‘¨gl:àv|šd›¡ú{XháZ,£íAl‡ğGúŸÁ˜
kôßÚ¯¢µA«ÀË}r¹‡[g0~š¹o®¿ÎÏVĞÓÖÖ3†ëŒÿ~—$´¡ <„#k"Sæ>ä–¾""BÂ©‰–@9_~WÊ”9CÌM½YºA÷ã…|=ıû¼;´P2­Éèåhx77 ‘		Q÷ë»É³ºBÕ ‘Ã#W;{9ïØ½o³­ª›[µZ
Ù©¸êÒ íÈÍ‘ôÏ¾À¤}V¦ıÓ‚2Â¬ız›Ş—¼H )Ê{  ‡¸3Ë%k•d*NR¹4zÁ°³IO¸ÀAèb€)—e/â6Ì0Y:Ğj'ı³$ÆêD$Â—Z«K’ß]®Ïˆb!¿»ü\-l´)XŒ§êŒÀÓìıò.ócˆ-sä½´2¹Y'Ö©ëG…mÚ•c[Ñ Wû¯'P¯ØÈiøüåXÆü9…É¾kç›ÊÿÏ|iÑ+wfº¼ÙëŞìBéÄ"2ç
ğàœĞÇLÏHúBy¯ùFí¢À„àCşl@¸1ÅjQ‡!#î ğ‡ˆ 
Í,	/ğgğ˜”æ´NŞôxVÎ,àNÜp˜ŸÙ4GÊ¯qBx¾„ù›æá 2wm­íÆ»<24,à4 Mÿd0¿0H¶Å“k#øÆÚÃ4ÁÆ^>8NÚŠtÃö¥€g¬5…>ãK!HÉ”®ÿ™áûòˆˆØp„ÑÙ¥Fx<‘l ˆÊlx‘!€œòÄàj(c0~<¸·#aiG îäÈ¡g°>%<‡6SA4ÎßPêJÈ×äa¡ğ.¦VÈÉVß¥ÛÖz¾¿•»ÁãµK‘{#æk¯Ø´T‚
bÃê`!8Á±l½µ") ®UÀUé®oÁ9Íáâsğç' æ;ø~ø Ç¬;ğ”ÁÃ°M8Ü
²B™ÄÿaUóJ™Ãi«†„ñJœ€ƒçY4Äáôq¿2ˆÈÉH±®R‡&zk‹¡•påC ş¹yOğJ¬òE^Rtr{%MâÉu^†Õ
¸£	à¥rÑ,ù–‚¶ïôÇÿÕşáú>d‘*—hÔàs’¹îGbÆÇ¡8·~µ~¶ù¯Ú¤¯%pÜÚÜÊGIMèù'×İ#@EÁh€Í}ı­Ú†Ì^C<ã£W@lÖÚáââÎŠ™òÑ*pÍù©–öÖıj±›Wƒv3*ÿnu8ªFoMøÌ­—×eïmTŞ­?7ğ×çŞÚŞİßŒİÎ.g“°ú«µ»½ûh“Îœ5¸£7z¯íOxx74ÁR¤|÷t]ù«½Z3knñFgğ™çÖÜıìö¡ŸgnV¡ÂT+ßb§>æ§¨±0în(K5'EÿÉª_á2¿INú!íon ;dì)ß+1üG{à›ğÌ7ĞEÍúG¥KD_hjZÜ‘Ì©Êölú7÷£äâÜj´~¹JjŞjíù·™©zM¶§CQ^´ş‹Héo¬[äÆŸEAºª%?·)±#u=c;´t2»»väŞ=å=—CŠÂ¾X«ÄÖåOçÆ¥@äù«Y¢6P˜ª¤ñN†õ"]ZJ.W¢ç„#uAñÉĞ_*˜ô•uÚá±â„	:.‚Mmk·â×S¡ÄŸê€AÇMñj·æ.ló’•‰å@r(Ë€›m=úÀØMCÛ3î
Š  áQ¬5€ Trabalho1/ModuleALU.twr
 ¤ŠÙËşj0dD25O5_ûğ¬ıÀ\>“¡‹‹‰“N-’
Õ»ÏÌN6Àj1±>‚CT÷6J¼Æ6h”›ámHgC¼ª«èÌmøíİ_n]å7w|ë1fRÏ¯ó½%Üëîµ¦U„í›¾&›tÆ¨ûĞZbª\ğèÕÙsH2[ªÙfÍu”Us/¥c`´Ãmçß2£:¢Òë‰¤•¬’Å69c+şe™a,K˜1£@ÑØ’":®3 4š‚LÏE}&•À³òŠî@¨“CRf5ı3ƒN¸\”5^ıñ§'Ÿ¦î•p1C¿ŞŠc¡¼‰W”~ËİWúÓ+á]ĞAÁ²“·M¿ÖøÊXsj-´[† ÂYlÒÒ#ı!ÚÁ\ß“YE±‡€y(ômxí¨£PVÉ—+­\;ú˜{»z1ó÷àíì2©°±Š3×UAü½Q(ôC&š]~’pdEã…1!Œ8·à±ÆwI+ü5Íxˆ•íWòdu±˜—€PÇ²ú]ù¸ıvBgwH´ÍˆÍæàu'wát<=·{ŞÎôn­i›Nt<ˆÈÜ$2Àåc9	û;‘©_
O(U† ÜSß]…V›ÎùÇ :Z]Ø"±8å0ÿ¡¤ÜïÃ¤îã°n©^F©ªĞÖÕ¤$µ»3c+²d>-V–*
M,t‚¯ü]ºâC„Œcf«>ÔèÍâÃ4H(!“cß£Kæñ2xìŸeô8?x6qÊ‘ÕÙÕFª”3?¥Şl?MùW’ğÊ„H‘GA+ÑÑv BâÔdX‚hÖT7nlæ$ D†¸ã#³ù†€,Ó‡Õç…Ç_º@£\üt'ÄFıj`9	œe@ÖìçšZÓaët‡; 6+¢"©İ¥NÛíã·dçpû§!š1;Á™Rj$y[H"1PsŠ÷)"9t" ÛN˜µFƒõø‚ÈcKOÊ'ûaĞK‡7õ‹¾ÿ_‡ãx³»w„©!B[?IïöMHÉß’qÀğdvÑÙD68µ¿^ã<¢ç› 0n"ªÊ|ÇÇ)æÃ˜êıø¢ÛÅb%AVXnÏÚŠşÆQD\’¸vp¢óµä ¨G†¼?·h}m€€Çß†E™Dø<õFÔö:B¡iºzê‡0áhsãÄüsàOP4SÚŠÉ»ÃÆE¸³Ì ô„¼z÷R6Ù ½.Å@~ª± €cö…÷¢>Ï€ïÕo¶ø¯Ó”ÁO+è–ï1½mz¤RŒM}xyµõ¢FE¥å“fv´3*3+µiàÁ †¡Ş~IpeëD> O’s/}Tûn'‹«I°«;ªŸuÓ¸Ë?¬^x`ûãéöı­(šŸ©ĞVf²¥Ö˜-m‰¡[«*Ì-«jhW™­¦ÍË“|ªÙ^~zp>4öXµ8Q›|ˆ$î=\õ…“bÌÑkyÕÅÙ˜YZh§pæ)mMbÚªÍÏ½"#ëµØfhx(~º›®fÌïùìKŸoº,-9Ê‹ûüïî÷İß¨öØGQÊxíGBŞè;'Èo£…Kù§.í‰ıÿ{FüÓ•¼¶i³eI¡^n¯‡@b<#›D9¹%?ÓÁAõ|µİêBÓMİî(~×ÒÓïñòöx¡FZ’¢ô÷Nê§W‹rXÜã¹v=N~µxW(ùµo¼¸õ‚ê×´De™2ŠİQ›ªª>\,¹¿ğøÀµA?ÅíMßp›PF%…Ö¼ÖèöùÔ> ÇÂ¦^İÁ“÷/KàaVf2Ú ÒÄÌ€ Trabalho1/ModuleALU.ut
 ¤ŠÙÎœ	 dC3?VO{Â¯JY|¤RZRÒV9!ä„ÓÚÄ7büU_}VİiFí³‹?,ùbÕ˜¹&™›ú7sL3>Î+¢Z,ëÖ>ÍIs\À?"m\‰©*;0"¦‚ÒRlÕpI4ƒAÆZŒfMé{¦ÊNà'n™†.Ê ”>ë¸_> X€ïE½ ­1åÄòlG<aÕæ1èÁS/Úg–²v|øeô‰¹ÃVpòu¤.?§ë·a‘‚´Né/Ç~ì•¦3{½ñ~…ó¿¥ÓË‚ÁÕ†"P-7‹>ÀÙ¬w~Dçå€£6±¬üËÖÊ³\YÛŸ‘ŒÄæŸz9Îå ÿKd7öœóüR$4»	é. †¼ÎL€ Trabalho1/ModuleTest.bgn
 ¤ŠÙÏ&·@U334O4_uñF§É2Ş¨Ü¼·ç19%:Én:mİ^g’¢Ò-EQ­QQGUô´t•¡§Ì«ÉüY¦ÓDz:	`è864÷´
H€	ò¼ø¼æØbÂb^ÁoèKDşCfx™­ß»{ªò~“ŸcuàèYwàÚwòA9Ùèß_®JU'ôâT½~dÈó6ÈNÍ›	B¼#ğÀ`ş†jÚŞ• ªÙ7£Œ†V·ÎBÁ ¼2T8øfgÖÆ:¬Nû£À¿.¨~—n–ÛĞy|ˆ/dP¤-t~¡k€ŸEÊ[x¹“GhĞ¯Ë˜¤æû>Ô@H!#˜_>Qq•|`È	‡…M. îüæûÕšY÷‚
Ï™CúM·ƒ÷À+ÃõkXñR2/@Hå„»”¬2-ÀÎ°Ú[¸?A!vŒ:ña»ˆ`‹÷oõ-şç]A%Åc5ÈŒ€3ZJ5dM¥3µ,°ä¶£&3j‰±•)%˜®âÊú’
ïûq=EEó¯‹¶U©7„ÕÎ2%Ûı=K«Š¡Âo9PlWğ©c¾Ş`	‹0plûÁC*Ø‡K>~Ô9'Éwa’ßw¢Æ«F±½BY‘òcÅw×ºª)&„Iî¾Ï<K§Å_½¬3µìâÀªıútU[šüWk×$x/üÉè}¿q˜=¶¥Æ°ô@³CEqkèe$§æyˆca¸O< |ú«^jH`±—Î»’WYIÒƒìP3Iü HÍ¼kRC¹Ì±ı>ó-e´Dë£4ˆşº¢SÆÁd8–ı­{ôÿ$Ë~j½)]¬û/Î! Ád!1=?ŸBï» ØI½I—>WÒ9™s[†k£¦\ùÌVµœ•‘ˆ@œ4ü’ˆDéé­Ç¿rì½£sfİÛç6‰;:æ&!É4×÷x\9±S£_·'B@×™:nòqj?$¤4ä†¿!Ã!uì¯/@ïã{}‡6*ö_Kn¿r/¥¯ëˆÓ¢NØdm^áùmFãCnŞfZàâÇ“ÆæTgSPE{ûKÏÖE\½§	à‹;Jxkğ`‡3:8ÈàwXÿGc(sĞm{Ş8—rÑ>œÌ«r™@Ì7p»>Å‡Îï!á"iŞŠ_ìŞ”kD…gWoÒJˆü‹G{Î1åO4Àî,ƒÎš'i_XnI¬‰¢—‘ì¢ÆÕï`%Ù×ƒY»BËı³Úûğ‘g¸gêğ1ÿ!ì‰7=Ìq37ê†(Ùq‚´ÑëÜEÚ©Ó;ï¾Ñ§u55>üÊ¦?¯qü"9›rÌv#-»»Gcä_³3†ÙÎÈÿ†.:a
®Á-±›YbØÿóHÉÚ){Uıà3L%U÷êDƒSD†‰JblbF´ùÕ¹=vDt¨dXBD&Õ®ÂÉºœ'^.‘½Ù;ìM~ç‡ öD§D‰ªq·Ø¥³ÄóÊg±ç\VO„±ĞÈMÈ	Â_:gª¤e:—Ğ…uÄ™ê‚kêLP[[A}+CL›áÙ£šË96<ÁctÑ.¬Q;|ä);; _¸SZcÍ3Ñ
â0 ã=v€ Trabalho1/ModuleALU.bgn
 ¤ŠÙÉÛM@U334O4_uñF§ŒÑ‘êËÈüŞ&îS¬–ã¦ä©—ä¨´‹QTZp¢£ªÿé$úJÒÛ—™•™üZ¦ÒD: %85F‚JH‚	¥áÓŞ|^s:bÄb\½gèKıœCf|™¬İ·s²â“¡×í½Ò²ğC°î7ê‚t3Ò»»¯ØQ©?‡eñÖL³d„Âë¤œŞ!àÀ`şæjÊŞ jÙ7»Œ…V¨BÃHd¨r ¬Ï©ŒTÜ‡`$=yû"ú[¶[/ÃëÎ@–@Êƒ!xûÃÊ´ú-P¸´¦âÖMÀ…x´…'7Ú£ Ø|<ù‚XbJ²¯ˆ4a‹<JPìç\ß|3B¥ğF³ìPş†Û½úŞâ„Á¼ZÅå¼G£ãÔŒ„¨r…º]¹ÚZÔöagP\­ 9Áñvî÷İÌŸ×Ç½»½‹{g¤´¬dµúÀô!XÒI«!ì)V‰U±¬~l˜¦6ÆS¥Š1^Á–ß)ö`~{ç_9cJRg8Èt0¦øzOWCa¼á­6·ÔC1ào0Á˜9ÎùÃ:œ€“>Ü$rM ’¯E%<ßŒ1TL)u¿9Y ù1`·ñõ§¥Ğ€é #®ï¶ÓÚvWÇ.6ØÈwØ/*ß–Šm_“•^öÉÿy=·¡\DâÆf3m‰$ù·ˆA¯ÜÑOl^û™E(ÂùŸb-l7öÊ¦£æ¤»Ö_j’zÊ[IÛØáf†å@šÍ¼Õ¨Š"­Ì¯ä—Ùh’Z7€j§P<aN‹ñ`[ô±ùúş¢Ë~)J&R¼M¹ÛÆs&B©½¾ï¼B5Õ7ºü£,	„Ì¹©Ã5ÓÕµ|æ+ZF¦¥h¸Ÿ>¦‰ô‡ÕÕQ—ßÕ”¹÷ÜËW¬İöÀÖü›YÑöZuI¦¸ûsæáÌ•5pã„ìFó1£mÎN"}ÆI)9!°IıÄ=…Õix4 Ç¾£™* ¾–»ã2õyh“•ùU™i<Eø†8®3ë{‹63&[x‘Hîæ8 Š£ë.üOyÈËÂØLˆ›ZQ&·Ë>i™Ï,õ`•®ZíÕ<Éae{ˆ^÷‰KyhÛƒg3*‰zP38W~Å‹Úß!’DÓ¹!·d'{7¥ÀÚ‘!YÕËè’¹Á‘lãwĞIc™Kí09Š ÇİÛGW^I¼‰¯C‰Èà¢F´ï`®%ÉÓå¼ŠùBKÛ»Ê÷É#w˜_!ÃnÆ‡†ÛŸ“LÍó|!‰à¸ÁZhõDEºzêã¾¶£mu6š`‚h¥D›ŸñÂ/ğQÍ‰rÌv5‰-_6 §È¾ÌP»cDKMN<a¥W¡–˜¨±ºÿÎ‘“<w/ö]Şqœè¡"“yéH5H§¤¦*ÇÒ5åêbELIêº#ÅC"â"!7­|’J)Á}jíl‹øåúäïÜªùÑI!<ŠN‰Uc>±+g÷Ô¯bÎ¸´ÉS 0¨I€$"ÓXYV5”ê9ˆä
T"¾*1“ªÃœê¬OCiÌšQøFëAÓ|¡¿qõÙ-÷€X\‘¤¿Qé‰‘y=8HBèxR€·K
[Û4³=8¥©­ Sø±YƒÍbÃ©À!ƒÑ™$Ãìá6°!ÖM1 › )_û¢Ûb.?˜ÊµlMve©­„í HWp6Oó×úKø²â”Ú²~+?ÆNÃdt+g{ÔFŠWc›/5xÖ›`o]-ø©^×ÓZBÁZÀÑp¨d3°Ä  —¨ƒ€ Trabalho1/ModuleALU.drc
 ¤ŠÙÂ5­ d4#ö`EîøVt¨WGõhŞh¼hZiBõMİ­CMSVş½üÅ¼oHI	ôÌM&f}Â3È«[f+J¢§$rDpÅ$YÈÔË›²WŞ¦ü>:ë{ä5%òtóÍƒnÌÏzÆö¥ PÆÁ‰¢Êë¼­Hyîv(ÁÂ9Áå¸°bc|1Èt«6ø>7«ÁñQÃ¢

ÿÇö#ªºB—’Ò`ë„½ÅmÓV9¥í¸–€BcWù5×ˆ ¬í Ó`Ñ¥€ Trabalho1/ModuleALU.bit
 ¤ŠÙÎÃS0C42ô`FÈöj²é.İU @"[Êñ
önŸT¦¤!!*%Râr.Û¥â*¨Hàpü‘È9Z!!? t-HàrøKÎòÀêy“e·m¡mÔnè@Û·cBÕµUköÉ©Ïì‘ìn7Ïä“ò8ß³3Ù3cR)¢r>26üÛ‰Çñğ]Şı©ú [ìw²<=Ú°ñyyXù,\º¿W¨[Tğ“3/œsãew2rfóæ†8p›;s07	¾€dÙåôeÍ‚î`PüÜ:%ËíóŸ4.š	x×Y—ı;Ùp`ü¥ÎÂb^y§»æ>…™óéo0ók%¸Ço@nÚKpk`6ôÌÅûÌŸI ÀÔ÷ƒ&¶'lèÏåpÀ2«ÿ­ù`½iÈ!ãÄ?ô!@Ó}_ğ3üÖ³‰ Gş8g´èª¯é¿(â¿ànp!*·Ó„è@àZ¯é¿#…r¿àNe46/u€B!_ÛgÅ’]c$ó~YÄE ¯ø@ßTèvÚ5¿i[­()?Uı°,Eæ:Å•ÀB	EäÿÑúßÑ:oÉt?Œ·òı«ÿ@Ér¿¬­YQ[HÂ?b\ÉúÎíØ+úp¤rsrÚ.ìVˆÿÆ¨7	MùWù,ŠGş£–ï¿.'õ¨%ÈVV­ïøÑ¢¾ïÀØ‚g#*h1'øAêÀ.“§HJsïN²BIi W•sñ–|÷}-£KæøQ};À:4(ÑÑå$ø/_ªT©Á‚“	¼1(=“ÁğY¥84’ç†3†º9€qIQv‘¥mw:k®5‰'Ov¼Òğ6L›»bd€¾»Ç}‹‚éšó=5oóµıı[ÈŸ×WQ++L®¡&ş–œ-İ‡Ù\í„ÄPÇå¤!¯_¿µM+ûÔCA¨ZÀ”†aißHæ›«ŠÎÙ­I 5j‰é“C™é6¬	0K°ô¹L‡ùÃşZK£}ºÒœğ?Rÿé*G­Qw+X:2:­
ÂÈ­VéË/à.­Ûµ›ù¤æ+ü—ÁøØù(XTÅí¤àŠP¥Î\¸¦Ÿ‡—&·ÀTñ:P™nÄÚüÕ®¿PÒŒ‰ˆÂ0o*…ªêÖ?ÕÅªI¤=Ô’¤µjô¿KY$€ù;L…Š›Õ$=ªññDí,Le>ï)B(É-Lm®R¥.7éSÄ*1åÇoZT6Óº˜NQm¨ùØLı„,DÓÕ-©vÂ|}’+ÆŠXù3%…õ.ØA.HÍF
¦m^mŒ»Y&Ç0k{én#ötùVı;Vï?ÀT·ª,m¯¶»:QMâÕı]â ür=W÷½,#õ]è0¯ë—#ÿB¹ˆbP®~xUÜb¿àbz¿¿Ğ¥BÿÇö¥[W‘„	AivåzßÁÌj/4$i_ §ëIÜsèÇÎ}PgÎG¯È*¼ÖÊ¿ÄÌÇ@x;Æ¢ Àu€ Trabalho1/ModuleALU_bitgen.xwbt
 ¤ŠÙÅ\Ã6dD"öPDßœ(à+‡†@‚ 3ğ`aj&ˆ!á"÷ÅÑf§{Än®î¥ÕÊ®OR+EWò}Á>â„ÒgİjÜĞ"ÂñvÈvaåØ¸Œüi†#‘ÁóÕËíûFlAîŠ*Öä6ü»ï¦¡E)¿ÔÑn‚y¸yš“å¡ïY´€*Kö°‹«q™¯T­›	¦î'zë#$h£è98XşğŸ/aJ)~G>Ó"h=”^u!#±Á€°º©ˆ¥#ÃÆ1­² ¼aÊ€ Trabalho1/webtalk.log
 ¤ŠÙÏ=©0UC2?UOù¢Ÿå©R1ÊB…JüUKR*¨B«~ÄÆÜ$¶Å”&ü¥GY
‚éH”Eònj'™¹Æ³yÏ¾sKúªUŠ!­?ØK÷Vl‡—èŸ‚ÉºÌîú^ğ\õQ&xÚN„twnÃaÙ,“âId›WQ/Ì‡ÈNùe%`0h ­GÚ’ûÏb¡*C\"%Ñ í‘s=cıë€7ïwZ7b.Y»é ·"·³ğÂ”ŒOæ†íkÎã®8éĞQW;C×ğyaíŞlÛzA$©šZåıæº&˜ÓºÌ*ZæÏ´Œ8ä
Ş»ì6˜g Øu¥zV$·–2!-a|é½êô¹s0ZX|êÊçA0x‘Ë¤#·ZümÑ/j:èiÀÙ2Æ¹”î‡¹½ÜV8»Š¾mDj@-Ré‰¿4ƒCàó$“Ğ½Up˜c‡ü†)‘ÛÀ4;„°¨DƒnZÕ¨‡Úº;–D'\9Ä®1¡í,õ‰A‚®v—t4®ıÜ·ñøå½n…HÎrî awÙò€Z#ÔÒ°jì›”¬? ÒÃ  ?İ¸Å€ !Trabalho1/ModuleTest_summary.html
 ¤ŠÙÈŒ0uCB4O5v_¾xSY«0™« ]Â§HbÉ!¸BD33V­QX÷/ WÑ o½í›œnú€»€M™)¶íº®W7Tİ5_Â~§ÇIR¦ëàÓm*ğŠ}	ôÚ©O¢ÅT‡ÚvSµb§ÑU•c+já`—]]uÉN„AÕûWªn¤¿‚'cèŸ,ïÑşN%nzıVº®§›*ÊZ³oã‚Å‡”4éRF¯gŠ¯8µ>€2Y:µ‚”"+	^Å«Wzê×ÿyùP~ˆ ’YqDŸ;)'Ğ/H‹·±û½Ã£9íò‹-°¹$ÇÇ^»Ì{OHÖ'mÿÆøò†>§K8X©†ÙÂu´Ïö[ã­×qÖÉ¸…*ñĞŞCx-÷H"”hû©Ğ@K¤«™€0Àó'¿4‘ §Õ'y•
îHĞ‡·ÔM¥/(·{(ÏÆ«e¾YyáF…¢Xh#Ça‘‰-³€ÖyAä`B¨¾€Š2›N++âq~`j²ÁÌ½_ZÊ_.(Àÿ¸Ë£Íƒ[¦£XJà{oè(qß¢ß
<nï÷aÃ¿Å¿§v…‰Òo—p£U@ş8ÒŞ¨èjü³€àuæù 7 ftİ›¶üş½üÃzÂ¬a›æiÕ'EÁÙÚQ›,éöW-ğPI›î›¡ûº—z™-+B'Œ¡ÛvÂ†‡ë=ş¿jJ8§Ä¹9a]Î¨ä‡¼Ù-#ñ«SZ' Ñã»û>{¤u…zŒ_‰Êõ$ùc+àK:³šLR×IÈò!=Ö3ã6 VX—LÃd®É²+–ÉòìdÕ×ğ!°ä–'¥hµĞîP$ÜUƒõ otx‘FuI»d‘¦¤òMUÌx†İ†Ì—ÚC×ÚÅæñ~ÚÑaZ
#`¼±´1C´X¼+†söç÷¸ºÂ×r
ò®K°×–õ}á/Ì.BH	Û·Ùh¿jĞ$ÎÎòxã>ƒp¸íÈAĞSÑÍ¨û:Üvä!Â»c6š4Óq¥¤|u^Rv8Ÿü‚0ÉE¨ ®YçèN@ ¢F#PšÏ¯áí±„Yp&¥å‹ËªJ¦G¬àçwú`¤¼€pt\?CY0„´Î¨Ìd³£Ø;.
º¾
yÄú	”<fFóÊÛ.q¸äÄĞËñËÊ™âÛn¯xHæÏq7È«p–»n'·Í½Q˜®EÏÙ"¿0_½kBvoßw¢F[«M™o=E/ùç¢˜.Ÿr¾È•)SEŒV0 –ÑVQÃ2ëÏ|›-3\lÒzK("yªdS¨‡“dv»› J±?/ËÌ›Lâm„®¦)øÚÄäpJ³ÕXMˆ*TÒxš“y²æf2‹G†eè¶©WÀÂRs(À•ìÄ¶Xİ®i5i\˜ÃÔgñG„™ËIJz¡àñBwGYZîe¥Í:'›DîJÈÄ×Q/”Ô¨Êm¸%˜w!÷+`7g¸şm*S­S¸ÉŸ[9™ŠûC(X”iéÀº=ÑŸ–^ØC/³´ÇO£lâš?˜?A=Ÿ\·—/÷ì§¬ÖÏ	eĞ±Y$Ş4º-~¢§É"ˆã¬\MííbPBŸÔh(p?8ìãñlgÎpÿn…o9XArDğ“àÃÄ†RÁìÍ‹>yË,w3&×*ñ¯‡¶|ç·‘©Á¹È-ãm¼ü„I]ĞÎ>f•'HH89Bâ!¹F¥›”%«6N(\fë<PúCÅ>9¯-àŞXûfu£¡/r!éí¹æ6]¬ATŒZãgÆ÷·dwÓ²flÖ¾ñÖK»yşo6§?Î‰:´rï=m<lòîEå÷ç'[>%j"Jœ˜¤yjS1óœesÅì2Û›¡qpş”qÄ[ZÎ6Q¢õ±Æ¯–_x=*w°°ñYW0–[ZN§÷"NYc‡ƒ’’ˆÒ{³O­D2ızd¾ô^WJ8p°»şm/ÄjşeùÌ?e¦ÛÏ«j¯<q}«¶zFÕ¥İ²Ñ0ö¥à³EÙÙğ¢?‘Ë¼6u±Â½ÚÙ´•Jßo·Ä·‡gÖIÌQMæÇuöe[)À÷æ!±ğ!¨>ï¦Ùè ö±í¾§y¬¥óJn·ª*H´şıRJ~áîÈ†èd`ü1†L›ğå€o>Ó×6ü› ¤ …ÈY}€ Trabalho1/ModuleTest.syr
 ¤ŠÙÊeø@C24EòWuÿµøR¬åmT›Ì9	ÒTÉT@$ÓœÊ:9³3ù”Àaë5¶N÷¸Ø}i6ÆÁ°“+•¾
«$•«¿®Õ¤­tçŒ_àŸ]ımU¤+]Vì~efUÅŒœù¼¦˜o77lŞÉñ&_†Şavy'ï¥I¬~¯‡ÁÑ3{|óóñÌ9»—"?™ª³ziE†‚WÂÀæßŠ×æ¥2gI’íUµq,èš5ºı´êÙ0¥§Z:;ƒm~ì«ã5ÜXÒ¶Óªƒ-š”k
uÅHäÄ¼Ğ¥2Ó4:léÄ`¼ä%”»nkŠù^ciI7áõÛø••	6pšúÎ/„ˆ+µ ,¶?—fão÷$ıªÕ§X:©bİAş´+O|Ö½â©8(±œò>mdÅˆ)…MÂğıiu"K.Â§¥)Î'…4 …ám¼=E-ô#SO‚§gæÎˆ)¢—ÔôgÌm6éSr
7üUfò×å«\. ‚1•áY¯!ø·ŠÌI0s
eaL:»áÖ¹â™ü¹Î„GŠál€­…ÿ¥QQr:D:—ÈÙZÊàÊ­Õ¯VÇ`·nÕ,ÛôÜÒKô3ÙõVgáı7HNcèè`ñ\AÄª³#¡¯°'lÜ°¾R^ÃåU¦ÀõÓ‘eÏ‰5¯‚¬,‚e£¯t‰xt'×f±Ê¬(”`3„^g+Ô‡-ÿ,õht’=”’…¤êJ<ïq9Ë:r¬ÌŸ33ù§¥!¥ÁiClp__XÒ#	’¢M|&@¢ÕsTóJñŞ·+Ö¥¤‘LÍæ‚0…Yw|1hmJÒ¸^©a‰f]WDÛğÒ6ôb\I=k–Ò³GRÊâ…53ceM´å_'Ÿ­5ƒY½qÙ'µµÉz!§KÔ`MÚğ_£l+¸ì¹4GÍ+Ã	”T50w)d?Ã+Â´iifbcûbìLƒji9ğşğU½Bvİ=½àØ6çm¢½ë;Ÿ¨I–K&-Xªwä‰¦u*ÀÈr0ï#"ÿİFûæª ¨dÁ€`l°oØÃWE‚WWÍ|Y1­R»¤PœãÉNÅ™	Ò{ßÄ'ıî«}›ğ•ğÏK8¾BZoJİ2å¢¥,TA¦2§.Pu[ÿĞ½Ãü‡ğc2 òbp}üVr»qÅ¡Ôe[¯ÂV®rˆöEig_ä!¤U•¢“r‰|CVŠg©ÍX©üä5@pcˆÜ%…UÄÑMè.¨µ“·¢†Ö ahj½Fª3ícYkúU0` ¿‘4¿è+ÇYiÚlå‚kŠ‰bs¾± ,Û¬h2RÕIö†’0ÍdaƒÚáÊó*ß6´»îåwì0¶XÖÈîĞ9 ®¨•&ÚqÈöy²ş‘<eöÒØÆmn´Ü¢c. å”Ö`…m2‰º:BX´&‹.¼¾õ%…sŒKò˜ÜÅ“üi^¸'‹%my<%ø_8.xMÂ>é›Q$4r{³ íª½†cª,¶ãİ1|OÇ–†ƒ3?¯,Ô	Bn>>Ø6‡;åÁà'Vàrÿ6¯d(,Üàÿ™)ø+éY~mª.šà´¥z4Ô³ŞŸU[sJ»òJ˜İÌg>M7üMJˆ|°ôwÈ"jº°0øŒúEâÚÀ1DA>/N÷QWÄğ3İ Äá²c-7—Æ0Ó}z¿×¾âOztñ8Q±OØĞaU›û¼+ìY‚7»Âv·íBŒµ¹ìş ¯w¶e^{­•‡ò¹ÕnÍ~Ñı2]tù>nçöú÷×¹Zİ^ÚÕi{[Ìâ‚.ÛÅyıßyª×‡ö£fÀØŸ 1²Ã†ÚÓ”Ÿ;Ó?º€låü³D £jq—
'S¬G„8¯¾ÈŸòT¬Fº£º;Ë8æßŸ-e>ÑşAšN³ïÙµê¶á_£B3ú}|3€fæY_£;[é&®ÃŞtX;ÊÇk=Ú×Nøg;aì;§»¬S{ÖRÏ»FJÙaöç®ïsÅŸ|ñ¯º !ÉŞR2÷¦J›Ş¿¿X7Ã(?å§`Ò8vŒıFvSkÉz‹ÚeŒJ¡ 9q•İĞ£Â}¥q¶"Ò*mYEë€ğÂö8öhs'Ïıè\ØyyùhBù©ˆ¸BŠ¥Xp+÷Ä»‡Ş“”3óKv9dn9
Hƒ«¯·².ÚÔÌ7vïùËænëVÍä¸å—THRGÂ©`sá09  “ÌÅ´¢kµÅ£FÄ&³“PF.pSœ'‰QV¾¹n¨› S1"”Hà«rÄm#uL•Ÿì8^r(tZé
GÚr?iúğúñzÏõãõäéJRİåÜñ[SØ§íHôOñ)gÚ`Ô ÏCµ µ0`fèA‡PEÔîöÌ%°f/íÚ3ÚÁzF}0‘ŞMé\Ìşœ¬ÿÎ]¸3¢i–è‘lÃ»8ˆ6Àæ‘¢T7¢C 5ğÈèÆ¿P—jÍˆTOÁwu{ë¶±ù,FB£œY$´ÆCÌÍ‘OeZ8—
|ËefÆw&±ö‰QşÖè8éc$ä@Xæ¬ -tÔ³*'(Û¥Š&i‚6ÊƒÎƒÛÂÛ©÷K2í±èam¸‚Ú\°:Á°m¥'0·3Æë§ô%¢gÇÚÊ:~Ôü€ŒBRÙ3ÍÜ
·œßÎ°è>ñgô¶‡ô¨v{İqÜ¡í=Ş™1àrOäy-A`t¸Æ<â&)‚K]ºãçÄE_‘ÂÆÂßRäfóL¼/ /`ñ¨İ€{E=!tRÊ-ö£òøÁ¼=ïÄõ,¥Äø^¾’|=1RE¦m¯ç'?mÈêÒx8cˆ´`eÚDqhuÜa¹˜äÛ*|¼Ó£[7Û•ãÖKT$6éğnĞ'ı½_Ñ·¹ÇO±¡¹Üz. ‘ç´‚qÙ¿÷wu.—“ëá\º–„+€ xh.—I²FFÖÒ—g@’+ƒºg<BÚ…w^/¤[Ğltp‘(š>Æ`ÁIfØô&Œ(0¯{pF‹’•î[¥][Í´'Çe`‚AÄ¿Ñgbá¾úTŸQñ¤«që\OvÏİ=+£ÒÚ­²ıä‡é$b­ÃÎòÃÇ]Ÿ8_OëŞ¢W5/éRçUe)(óUwbı3~å4¥ŸÃ&{ŸÿÄñ]Jw+Tƒ8_Â‚¢€/İÁ›¡ôõŞğ8p}Ì¾f[OÆı2;U®M(³]\xÏLY·­üä<N‡«"ì_xˆöŒgÀ^:vQÛc9J#û	*kÑx~9¨ ANtão±ä‡j‘ÆüÌ¨Ûw#„ÁŒÎ ¡ühz¾ÔBìtÒMÍ(P¶bîm¢äP)Ì„Î#§ÿû]°Ú>Uã?M1'Å@X7dq)›	Qa¨Ãçä°‰›ì8üW!ÇbÄÇflú|,”o5±Ÿ¨‰,\t.züy'ƒ,¯•:?¢Eœ-¥±/Ò©íŞW-¿¿ñ¶wôRGU²­Ï•½U6[P70¬Ò  \q\!V UNª•­=·ˆ‰²š×-ğërÃÊçã	ïl×øÂ T!6Õê¹Öö‰ù¬£Û~›šEdZMemë²å˜D(P˜E€ŸÏ<TÉæ|À5]Y²É8»öîPÕ*¢ÌGdŠ|ÂYŒïÍá ÆK—£tXœ±§Š14ùyyÎúVµ\Ò
î´5dß/$µOš2<“œ¨wN«®g:¯WîÁ¸îLY÷W¬Ÿ]HØe©@ÖÿZ–ªAëÄ±r¿UK6D™K¾£èï­ƒ‘UƒôD´ENjPc,¢•+‚;ŒæøS¤ITWBûZ¥=WX9
u‰€²•H€0»*X¨s0lë¶E"¬DS"3,©pèÔãˆªÎâ.t«{
sF¼‚ˆ:²­µ)yÚCáÑöb®6H<°2¬ƒ­ç¼Øä†ÔºrGÆøİª*0G$]qQ/<Ø¢l¯–6ãì¾ d"ï`î	‡™(½ì7V%md28+:”yı‘µ`4£ÿ9#ø+j—¦[eZ¾+¹B°òJœŒØT+fåšŸ'+.g])¬ê«±¤¹¤[f/È°d«¹Œ«HÓêÌ´âÁ«_ÀÍ¿º®) G<j´;QÓ•B‚¬^şcÿÁdÌX9œ8
Ô]…w?,XÂ9Å??E_ö2JšCø@Õ¼x¸È^´£}Å¾CûVäÕhôNñİ´iœaÄDŸn„òØäSv’ÍB
Ã­f)c.Áºñ”ØYÔT*gL>¥,z—¬ÆùƒØxIwŠ¾®ú»k-Ğ)J,óhU ¼ .7š:>yx§<(÷Îï9`NEõ}X0ÎÑ1&ùäŸÍë?…ä‹bwKZîRæ1®o¿íŞ?a­ƒ>ğú§Ş¤dz’ã«>oĞñJ*¹E}Û*Abb^Q;$ÙÉŸè}â_˜]„ÿç‘±hXîÓ-î`:ùç1‘ÏóˆÃº/¥´ÿÉ=î’+ç~ø »Mú!âûíòyáÂ…ÂÃwĞ*£ğPjmíC]z?c‚Tb´µıøå>J¶ÈÂMÇÊsŞÒ9½ÚpÚÃš@¯®hE4… …  ÛË<ß€ Trabalho1/ModuleTest.lso
 ¤ŠÙwork
|ó¿Í:…ƒ §ß  è€ Trabalho1/ModuleTest.cmd_log
 ¤ŠÙË e33?V^ûáL½ò»KCnÜØ×5ï£9#4‘Â75“ß5ÅãÁ‚JğRî­qM®Úx‰&—8‘8Æçµøi®$×ÇİßxŞZØG“;Ë%A´5Ø§&È©V¾WĞ¿*‚ø>^ÊŸÖv¤º)4”Jä.uCP©Ğ%™‰¡XHò¾-bì§Yƒ‹–ã†
“,.ZĞˆ:Fšƒ)645ÚNş¾î®œøƒQÄ*Ï•|Øñšw¢<ÜùÌKdàûO€m1¨p¾xóÔ ÍŸÒA”l}½|‚i¹Õ±½-Óùí‘¶õ½0P6œ=T¤‘1ÈfMĞ¹õÃ):ò&Qádn?«1iƒ¶H ½\ÒÜfªÜ»ˆlò—Âb¹ğ K#DîXñ\©©¸Fr £	_Qê™oª/y«ü¡@à%ø–Åı<Ş¤ rëĞ§ŠkOÑ6Âõ-°½KûÿúM@û{­®âÊ½K›où<Û|Ê½K¡¦õ¼4€ €      € Trabalho1/ModuleTest.stx
 ¤ŠÙ±ü j6¶Ú	 ß´ó€ Trabalho1/SOMADOR_1BIT.vhd
 ¤ŠÙÏ¥20tC24ôpeûÂŸÓ¹.% qÉpw|
r‰* rñ²0(6)üß|¤·5ÏàİoÂ«áææãÌÏ!{º÷s^ëÜßß³%1_ãúb½s_Víï'Æá—“
v!'<Te´GzC›vM[¹nÍË6bßS_~«6ÈÀxÑ±&Æöî*ÀqPK	øïEÜ^Á“.¦ºÛÌa[¬û^à…Dô3œì‰_Ó¿'=îg¢Øy	@.ø[¤5(À4)I¤"Ô?7È@ÍhyÓ şú)¹X™I&:‹òÊ!Øh˜H']¸^ô!jÄÒ=\dÉÉ=ñİ1
;¢ÿ‰›Ã1u‰c<øYw6X²~Û¿©¦¾ßVobÄ*-µœDPÔ4›A­j†w¡;R@œ¿ò!+#Y‚iT]€Šmó ï‹ì¡uã7ygFß„àÊˆ–ã£9”ñ•Ç&yÜÃ”™òl{öX¥ôµ’h@8Ÿo;‡½x\Œ!l^²F*LÏ·[rí-z2³ü.g’ÚFCû	4 ’9§WG‚ñ‚äÏ0;>CW5ÅèW¹îÏV´Í½Z×ÊŸµg·Š©dö/WR’¼Š|æ-ÿÇÁCDéı¢<Kùş0­úLÅbÜR¬í£­ö|­\è`¬?w}Ğ<VMøüÏğÿÒTëv¬`hòÕx›“P­Ğíqš=:y*Ò…’O¢ûÚ]äüĞ‚—†ğNˆ4É” ôS°İ€ Trabalho1/ModuleTest.bld
 ¤ŠÙÍĞE6C25ô`UïªõZ—$al¼´:ÎB8Šp@UÎuÕ?ƒVHârJßBÜnC…*©#‰·¯~¿"ßÃİÖówqü–,Kx¶ƒÈwè9]uÏš8 ©DYÜí¹wºêÿ.¹7åŞÆ°¦zÔˆöR]pö o^ïmËü…„İø,“Bá	$+P089W±âq¥òå•ù¸2ãß#õ&·’f,›&œ^if€T5Š†ªmª~yÇ>nM†ÆÀ:¦°ôiz·£éÀ‘U*Q(CKòÎ4ÕyÉ›<^NÚÆ±Kt=Ôx\¸­ë7|]mÒòLU­Kã¸	¡kŸTAé ïÄ#,Øÿ…¬(àê6Á9¨×“C*ÙÓ~ê{cõˆ¹µvä.›èsÔNšÆı;¦Â™†À¸Aõ¥R”
A@ÁPš•Jœge
À•œ.c³‚i’#tı	¨q1ˆø’²Yk¯ç3k@ƒ2{{ûô
£„±3tCêÀøwæÿcQxü†tâïı‚ÍÜï®do$³†ªú²WT4ßCàHE˜G9	§QıÉ¨y
v")õ¦tË3c{õç“+Äõ®aÑµH:ÿ¦¡é…W}‰£4“¬CêRUEòg×9övs.kfßÁ­BËHB"Pd"ïÆ‹l;zïiz¢DÁ]!:T†[òÙÙ<şl²ÒÚ[£¬öİ¾O˜R¾Î/£«QÜT áÏçÑÂó3–ˆ1ıŒØ$Şc04ËC¶ á  3Èum€ %Trabalho1/ModuleTest_envsettings.html
 ¤ŠÙÈ§2@C24_6e^şxR®r¶lŞˆøïÃ›$®8HT M“©Ò†=ÖÚzşá¾÷ÆM´Â Ç°İ’UoföJƒmbÅjó$ÒÆ3Ÿ„µ™J•¬ËI_ZğÎ%¹+onq*¥AÅj«VW{¦Úw¬–û „ÎF†I˜	hÏøw(âTğØ¿­Íû:²¼ënúÿÊX½dßá§bµ‹HCÁ‚p
Õkñ÷(*¬c›ºŞŞºıøÂ‘ä-a @³t_¯‹šãLãá½–Q ‰$«îãßdû€¡+©È®ïö«½->w\E_}«ûBâOQÛ=ñ¤7JoÆà*+h”Õ­Zİ•)ÿü;´°Ñ*TÁ$ùU¨·5kƒ7ªC:Ö¤>p×İ
µÖE©&ëáğ§N<H§R:!EµûFØ­æñ%Œ$RbdcÇ\eƒ¶wĞ9yÂàíˆn¡Ídsö‹q³asè¯Æ©×9¨ÅÕväM7w6¡Â½Ûw€ÎÆVÅ]Z¢á£ß´¥®…Ã6·Vz'z8aN¾Õu¶Õ^¥¹9Q¢ÜGÇ}»_ê;i4µ<YV§n°w;©.~À8~Ö8dÇ>—v7t˜; dÁr(Ew†·B‡wıC±\½3kö[+ª_1nÈKğ|ğß"Ë.ÅEÆ˜|÷Áö4–LÉfxıF}æ5PXt;A_sC_Ê/ÅÖ¼';l_.6‘{†ÓmÆÆ(‡Ê|‘@ú)\ŒQúÃ­³CfJôêNÁ[ÊEÛ©Uˆ2Q¥FN‘¿ÀˆİşFï™cw'\‡=Q ówN«,rB•™Ø'’*}Ö!3¿|³YJê"Udà'M^fZÄÈQ’TâR´­ö;ó@Ô²ø	3ğö~¶VÏƒ+gj9™3è’·íõ5É\®fÊÖï—­æ+qJ%¨kÅ‰¸I‚Ù0ƒ¬Õä¼¨âz}ôùt`ÏÃAçşyÕ|Ñ!˜q®³]Nà«Î­Là9ç…‰áPñ÷¯ÃNZ†XÓ llÁî¥H®ëmk^e¯~Ôğ­	ŞÓ-Ğ®à±›´¬-8×Ø£‰İ'	ÊÚUVŞ2}‡·eXù XºLŞt][×¤i³^S«.ba%>XH1á˜sãÍ„#¯¦ÓbëØÀœ± dŞ^ûF ±±%ş4''h®yÀ›¦…¶NXZ¾*©a• _¤Mò”%<uË»_= 7©+	@ä&%¥«Ø¸Ìà~©;îƒA8`Ùl÷$¾SB¶Iˆ Q¶éßD4&–µju¬Sã®ªÖó¬ÏivşA^Òí`ß¡[rÔ2ÃzŸh7kÈdu”
ãÄ­_)H´rœhpr5Á ¸$l+¥o°DbVZrV’GE0^t?r ;tÍ Ê=7©/o„Ä©5‡ã¨ÈùŸC–; `Ë£d¶.å® É¤£rÜŠåŒ‰j:"94=YÖ¹5sHç&‘¹ºLø;;A,“9±$&RYÜ#^€Ö e‰ ³°¬AN°{¢æÔŠ§G•läÀ[Æ]§lÈõkÈìæ'9WH^‚ÆÍ0[•ijxÇ,åÙKãFT+Á)Ï]{çÒåX/¾ft¬
ÈWÒ­P®¼˜hx>“PË9ÉäfèxŸ¼¯Í†Ï’5ŒëÉÏÆœ§´«µh÷"½ã™·Ö½âºx¦ ?]@ï©í÷ĞÌÏÊôÃìØÚ•ëÌíÓ#BñŸ^ìOğ<‡gx˜óüWXš	ÎMıÚ3×yôs})áïğ`R(‹Ì9Ãïâñxæ>H²áÒác
š@4E—s}bk¤­‹ãîĞèpèGã`«9¡Uq‚Qşû-LD^Ú]T½S{ú‹§ÿŸ7õLš}¿±Ø|ÛÚ:ÊçtÙÀ‹·f —u“Î€ç[ÓğïMÖÚE1â>ÍZêp«É@)Ş™
Ì‰ŞB½çÈ•—0ú#_ÉhnY—Û…cƒ‚Z†X{&¨í›h„Ì†T‹dVMìí"Örô³˜¨<æO Íê±vu„¤M‘¨Ô•hØ%¬^à£X£»ÀHˆ`*¬o¤öOzôµÊb«3âphİ0-—A´iu7Ÿ0×ÛïĞxw˜Ñs8—y¡àje‚Z(°½­LOcÅ2VDÇbjØ³‹ibÆûLßŒ?9-7ª`ÈâLËxAàEMØÒÂ‰L˜~İWPcrL˜3‘Iäm®hÓ¢EĞWê¾Ûİ;<¤PMcÊ†'ÍG*v ,
†õm{$˜Íª· èkg[c_`>ôZâm./µ‘Ê•· œ‚‡£-ºşØï’è¸Ÿ ¥¶™¤=nâc¥¯?ó¡qÿÌÕå,[Å•¦;=1²x$üZy£v…übÁš<Gñ''¶†½"jğ4&Ô{<‘S+$*#ğ o=#ğD ×ä4øÙ/ $44\€ Trabalho1/ModuleTest.ngr
 ¤ŠÙÌlôWtB34VòVeûùÑS733yÃ3 H\`§‘Éœr?CHãqÇ}ìÅ2„æózŞµçJÉ5‹àª»,]8!"ìûıU`­t¯Dù2ú5:6uô‰ù.—'/7¿†·&Ä™?ûıÍ•¥Î_ËT¿÷ÅÖ¼Û¢¤Úu-éå¯¥³nv
ÓjøãùêåÜ¥sı]I˜(Ñ§Fu'´õfpÊå—2W6ì½íÉ{=Ú~u(˜®}íV¯kçŠæœ™Ö|¬ÔµwÖVISëùkTÒåñ¡:•ku]ùíÑ«ç>¾´©š§³¾T(M±¥ãKSnÅ?ª™|ôöñïU›‚×ÛÊµ‹»Ÿ”«tğ_üy>9(ÖC¯şkÙ}oÙùË£sÎ…{~W¿îëÜ­vDı>Ÿ[sæÛ¦~¼»{;ÜüI×ÜçÆ3…ÚØîêå|$İ¢óFu—Ò'ƒŸ†z~µB\b%wıİŞnNCuhÇYEæY=@O-Ú…—tßqïciÓ¡ÆîmëpòóşÿÈVû3öªYRÖ qL˜÷™Ra¿bdæ’ám%ÎåG	)Ğ“¬ƒ á;oº2Æ2ÀVØ	„ô,ïóÏàU S–XJQšù İ;¡;ûZè(g‘Û{»Oÿ¿±Á®ó™ÛÎœçG_>ÆÖî¼ìõÍ¶G«yÇ /. ßÆ|¹;ü|’¥ Ç~ô¾]™†EÊÀ	4qb°o»60Ìİ¥—Î öÌÜØLzÇÌ;Ó¼¨Bu	¥×ó²¤†Æİ+Õxg}­Ûwæ¤¡pPœ•µ¸A¼aĞOÛD·¬—VNçwææßÔÍ® ‘·±»·¿­*ƒ›œÛİ2:—fVÌÎÉdìí‚ôšÜ¼ZüÒ¹÷ydğlÉ®”__§»ƒŸs‹‚fÈgww5û8A; cÕ›×7FÆ¯÷'i¤’ÆÍ+˜§X—¿Ê“^…=Öóbk>+Wºä6	smøĞÍÅÌR;¾Údó?\½Ô ”Áfú·Xc§{§¢ÉûÃÿíÖâçàØá°3ö¶8¥sqïëÉÕ<]²ß}_+X;tØê–”Ü¼<€ö^6s¸®0¦u'UÃ0Ú‡›iè$ü|ò¤îÀ‹áû$ÈÕç™ÕÁ$,¼:ü¼[º½´`ëÕšè Ş¶şØW|ÉD/nÖçO/Gƒ§»?Ù:y·ÚñÚ„ ¥_ï[Ë&ã×ÕÙÕ™©Ó#[â£_N®îéz‰øàşŞÿBº{Æ~ûôñLë×ÜØvÌGxó‘+ˆ@ÍÎI=»:ürµeñóñmoŒa¿<N^î®>i}œ³$Ì•×İÆó\ö'÷oT9Ñßf4‹U'dç£víªõ@<\Ç±Nİ»¼Ó°ù[©QĞ¬¾€tŞÃ±¹Z…ªO“˜ÏT»44\d‡?BH©Â¶^óî„~Ä0û=B_×ŒÔÇ$ÑŒC.ƒí¹‚$=ı"c`®A¡òûıkÏjcËËVÏ¥¹ïxYÁ{§Ê×¦j`yÉ~×nT”/V°[—îÍÕ6İ[WV»>6ğŞ©7¦Äê—)[ ÏjX`Y¬=Š Ø¾¡ÿT¨O40 |!^<¡:0mHÌ‚JjSŒ%„ 'şl¥°#4!ŸãP/ZNÈoĞüGĞ¼KİÀŞ¼?ø›”Uy÷™Š€;†q›0ö¼åØg3Á	³¸ì6àuÇ‡$MEéhazš9_7œÁÿBJ@êˆ€;l2`?-’á>6vÏöFa‹	}¤2Ò8şi 7^ıŒÏfà0fšñÔE 1ü>,¬£µà™wfZ{×¡¢‚Ï«¾Ã]œäá"‚¡!i q˜@ı´ô!ºü 3”
g8/é¬Æ/ÑÖ€2´Ğ|°m'øœ4H­EZš¨–¿ÆY`ÄUCŠË"*VU”J©È¬³õ)ğ¶‚xHõ¸oîYÌ@À”ıêLƒ‘Eï›#<şZ€^4š¬õ0P]e‚±` /c²ásPş_ZVŸPqZJ›
ÑTÒ­3‹"¯ÄÙV’¦Ú´U7•­\VTW“•–â—á”Ô¸ªV•×Œª‡•Ğ¿E]J²‹6T€ı%ƒû~º¡tKÚÎqZ€ğÙ¿0Wäù6úZ¥áÑ
çüçqw‡ôl»Élzƒb8
@°ÔĞEhk„üH?N:õ–Ø@Å4@#v]q”&¨õ0áèÎ+ŸÙQ
j0…àK?Uº_ã	­übË^¤¬›UV§+(¿iTÖ•ÖUˆW„V:¯ V^8¬*»A’©<GğıG¥ã4æûUÄ@Ùü'’˜§i„<åİWĞrún’ãŞJÊƒP«9¤i¨pØN‡ Ïh´ÆÉdWÎÍfè-H«
Úiªˆ\
†:ÜZ`dã”Ëi6M8mFGÙÉï’¤?Ñ2,{ÖÀ!ó©~d£>kdÎ^Ñ‚u.·2&&“çpö½áù2rVÙTz%°ÊºQ‰~ªcCÏg,m>1m8—ê– áÓ9åğz<ÑKÈ~×ÀYùqC©(ÏZÆ7lşÇ‹´¨	Ğ)Æ¿`L<‹YaCƒ…ĞÉà­LöÿÃrã9<î¶ã0à¼xYœX¦4Náä‚ØëB± Õ”Á—t¯Ä]ÙKÓ7’°N‡+{*b‹àÄ&zá(Cdáçk€ ô`,¡tCöô8~Â˜¡ò$¿Ù{mà}9äz‰@K~”Ö?İ¹îËU%¦­<â¼–ôÇ„E_zÑµG°‚W€4ÔÏélËÍĞyÇ‡ıËC–èv? ø	)~à©ePæ³î>SB*÷íÅ<¡»¤´.›ñ´s#!(>=ˆC¦ÀM¯iLzW
É@“VCÈ±ÕÁ­1:cÉ{K‚2à@M¼98qÌU=hPã] ÈOõa|€ÒüzFØS¥9ıfÙn.¾ƒØÀb”F˜šêcœâ#1/QÆòt@ƒ›l­c5ØõÈ½ÌíM`^KPÁ¶,^ò<+Ğ€è¬P„¹Ì!‘É¢MŠ~'j·²J™ñv´ªö¡qe‰{+Ë0Æ%–µ£õÜ¸K<jœ»£kbnˆ³–˜Ä4à 2$lzæœzX†òØhÎ4£ÂÅù¤{ûnè
‘§ÁZ]^ˆOÕvi,‚Rr=ÅsG¥
uI?=p½‰<¼óyî08+ø~`ªÛAÏ¥SsÄ8å‘æ)~’ 7j¿O€†}À/¢“;såaS\·ïNêèlEGº)
Š¥S]Lâ€^/\4ÛTëb›¥Ö’rx3?DÊ
êŒTR+jã°ª¢GN#x(ka#k×l£Ù-€yÿû ûJ*ƒZà…È„[EU:ÇRWĞá)C¢pßD-ºıƒ`wÍğ-ÈtŸG„5©;ıõp*0VÕ·Xtéş‰n9°&‡¹ÜºD	òñ%"â2æ[CrßòdÚ›ÊÓ…(3üÃû	Úb À;•uéÑ_îfƒ€öÓág`Î-óê	Ár:Å}ÛBÜs¥âÜ{™¬¸[©CŒ!|u°œôò°;=ĞÔÃûÜM€ø
ßlw‰ËV-€êú»Xä?d´W=‚j:âlğëšE·£ÔY|ÏèáôàØéÛÿ©€`bÓô>jŠš€LOebÒfc>G†º¨;xıÎè·¡=‡]\Ÿf¢°kàaVdsô7çö¢Z‰€lÛôk¿cï©}EíÓf¹E«ù€YS÷ ŸWÌwÓÆ¦ªÒ“èeÚÁâÚ]5TqRà¹dÆZc°öÂğwoïŠ–[$
]tŒk“1òˆ=È$á^ÍuÔTc9i…ì q¡ÁLÌz‹AúóØ›ß§ë2ØXù³L>h1¨ñ?._­òX·Ğèù°ŞObÿå"ÿêë ìqÆ¿AÚß÷™:¦Eivğ*Ã .€ŒVS»‘åÈšËĞjÂëÀ‹³ëxñˆ÷‡(è¶ØÂy|S¸ÁÂÅòèMM‹ø_ 7§`vE`8©·¦VšKC`àä‘I+á[£¯íAÇaĞ•Ê².EÀE±zk|ÖÅ.Ğµ}œ÷AWt°ûïª¦Â³ı²Æ¨¨£b‡ürî†VÆĞ¹ ieï eğÖk¤©{*³FŸáª¨>?èım”ğ[\ÃT•#Æ³YÓ°²˜ÄöC0ÕñÄı¡´°`~Ä&›â“N784%„Oå||‚Áâ–×Å¥=plÔè„°vÇ¾È0Ú¦Œ`Ğaª.Ó%PÅ¨áis¬n##û‚{´*¯“a(vê§ µÂ8=Qpñ±Ÿ0,	Ä+í¡EU
 ®q_ÙMğKÍ®¸ŠD†­^¦ÍB,–“¢+Bx“ş©ª¡4ŸmgÕ"…o£œô]´VÊş J‰1éØ:~?²ğàCø@}ÿB5[mp¸ĞÙ‰M@_Z½­²È’côÆ˜tTÍ)5=Õ/è|öƒôõ–…œ¤Dâ;Îø€ŠI´ ÙÕØ¢Ë¨*%ı&ƒ±\„CË¡ Uå?hƒ/ìO¥V(§0fƒD+©‘Óöõ²»`ÿqjPŠÍPêg÷²ÂşDØeÀââÛ¦~,>È¦Á›»$hÛë¹T7–} ‘D©n.:»*kö´lÙÀëÀ^	ê£P‹@^ÅÈIüÙ3‰Ğ'bvÀ|×æº>²‰TæáÃd-ôaÓ.åİÓ—	‰£†<:ŞÍ5Ñ ÓBcëÀê‘Î›*¹}Àâpeş D}À'h
¼üšƒE2¢Ã@½ÄªEğìè­–Ì®F†ƒò‘c~ãc9µËÑ¼!¨¶f(üPê/áÁzT½ütG7–E«ì6*¯¬eÍ±³Í“ÓrH¥C•4¹€ €Š'Ò€ Trabalho1/ModuleTest.ngc
 ¤ŠÙÌ¥5VeC3$O5f_ştQ—†pİØci6›M4Üsàä$'1$$@¸qH½®mC3Y«é€ĞÚUU¾
TÑÓõJ©Tm×ùºÿWI×•6TúüUâÃà[~
•y?ßH*D•+ôÿâÎà¬¿¹ÿN^ñ¾ñk•Ú R ‰À­r-\³bÃ‘²¸ÂWJš°$CYé;O-8n®g">Óæ80x)½«„µ:EHê¦œ‰Ü’n73à™vs¡D·&AJ#ÎËµb¬h’aÈKÑ¤Æ‹íy2ÛD:1ã	ˆ‡ ıj+ÉD’®üÖ,#¿ø¦óGlòåÍ§VÔ›“Ğhp¤I‚•Ó2İ¶ıè,Ù+'¡J‘êDûæÄ¡wÖP/%Ûr íM‚4êVdÊˆ5ĞáŸh-Å?fmUéÖíÄ²›ehãz€Œ*/í–Œê³ùC5.|É3âÜ§Q®?ÒD¹3#Ÿ†ëş—lÛ×œáã¸êĞI³DN…3ç2ç,[²+ŠıT8’&rƒHœ5Êù| ÏÒO®_:ÔjêÀGŞ[r³`ïMÍ|À-Öª%8Å ‰öÌ¬.Sâ3-0
İHbŒ*<¼ïVÕi7.Å—Ë€G—/š-; ¶ùÚ¡TOèMJV(ej½¹tîU©±fNYpş¤Ø ëÍôİ‚4HÕx+L‡ú“‰Ÿß’¥°½#äïúæK#ÂµhG”á«gÁrfFYéÅÉ« r¶-:z³e3d§×~œLz4iä¿áİ£&C­W×Í²ñ\¶Ãl>×)óG°ÙhÉ^’Á½4#Û-™aIëu¥
X¨~í†yc†%‚ç%Ò[›3£8NÜ¯úõ¯tñ­ı^½Ö’?Ù:~ÖX<H¾_%{­ –Öl0FÄù¡Ó¶*‰Î©ès¥gÂèòüšû¬æ'…|Í%÷
¹Ù0ÎğL>œºï0>ñÊ7]y‘µÚ¶Î‡P©cl~vÒabã€Œtk¦R¼oyÇ·ÏÓïFÂşñ7˜G3%1ÚÄ.µ`¯zœÉå0o§öqq!1W87‘mß<‚¾]Ö¾i2Yœ/ „ÆÙ¿ápë’äl…Ëd ×É—‹÷S äyo9‚xÙxÎç¼„£	â]¾º‰ıº6ÁçQ–e&>%¡Ş&÷\êös÷X„O@ÊÀª6DÓÉŠ4|íÖ¯¨Œ¨NişŸ3"1ÂØÓ@;ÿôÀ8ÊUıÀƒğfğN	·ÖêÜUX—Ü#ĞHgë4t„ÇğB¿…RovÆï¶][k¯(Íùd¢éL‘Ma$<Æ'a#¡h£‚¸B°í*NnØŸwïÔŠI|ø¢9Ô»#Œ]Yrª‰TríıFø)wÜ&ä•
“[¶'ûí¿sxïùôVN²(_gkâ]ú:w
¥ôßÆqLarZéRüÖÙ½§µpó²;/îf^ e)Íö]üKOK§@u™Fo·Œá2êQ)kŞÇ‹y)f:ÊQsióÌáF < h(v†dêÌËÎ“¤o²—–/æÂËîıæÔb³ê—yÿÃ åNƒ¶8Æ¾•Ô“ş=ÅøTğ+ËÚõ%B{¾ˆD»„47|õ¾©?İHÎ?|:‚¹İçğ¦«‡;ÙhÅÕäE0æ·ClG†[ĞºEXb Ä<D)\R‚Ÿ_Ja=‚s@±@¼(ÉXF€šQ¯6¾í›qşò½‰YöÆñ{İcı<snœ›ŞíiÎ†Ÿt%|æİ…¸ø@…ll,#€ı¯*áoa0=ıZ»~Á6Vp>Á‚£z+‘¦˜U °®ÀNîJßóË“}¶£t× ¯º…pk+£AlÂûí.pA¬:Cƒ‡šo è]3ë<>‰áÎû#¶ş…çŒu<Ô¬§–vq«¦xFtÈÙÒ·¶?l1Õ×Úùp(Œz+èwà{2˜/ŒÕ>»²@¼{\¡Ô×V4+¸ßz¾vĞ›d]7Ø¬‡n†UŠkd!r»0†t0DÚ¬v¬Oç‚kÍY­}=P«ë™uX#J¾‡¦Í¾±cFØ—V¯:xÕ®.ÆõK™k¿íBŸ„>Š	¿' ò„¼`€ "Trabalho1/ModuleTest_ngdbuild.xrpt
 ¤ŠÙË†@T434O4^÷ñG'|…£¼pŞ^ÑI˜Ä‰P‰Y9:RGÓgBÑ÷h¼š+IJƒi®ÙğNJ¨	R+B Ÿœ@@P¡CĞ8S H?áõÌó¥dn(Üÿ•L:¡M¾Ì8ş/˜´_Ğ0Eßiw@FÃ,íÇî}—ƒP3+ÀvB“P5töØáˆDÊÌŸ„TB¥‹wT>EáúZ¸Û(b¤ÆäeaqĞÄŸb1Ç—îç#™ÓM´AA~1…C!¥0ú€öaÆaéÍ„DÆeˆY"ºC#í°o:ÿ À¸ {ùÉ1€˜ƒŸiJÙ„ƒyJˆ‹ÆŞÓb%h02<ÊÉ–œ–h¢ºÊ>!+ñ†ÈS:	|GÆR°şÒ“*µà,½9^Be•ôËD‘xFÏD±5å(6j -p!T‘q=†–ƒÒ®®$Z¿°ë»¼îŞúµÊ¬ujã4Î¯ø†wÈà¢Yòk
@À©‡[÷Oô%M¡È›]•íÂ¬ƒEçÔ7˜ 0Ş(2Ñ~K£b'-G ‘•ç½Õ°Õˆ¥êµ•/nğ¢g@ÙlÈn–MÂš7.Biş·TM"j–¸«£¥Ë+Ÿ+çßÿ¼z¾U}4ĞÕƒgão(@„,ÿ:fúz<¾ÖèµĞŠY¡Q#ù‹Šÿµ­8ş†i‚#Ï&À™d¹c†¯«02’ù8âï:»çãmv§Çy[]¤'g‰ùMyÆb€s÷nxI·0en(Y,"@Ê|:ñ=O¼–—2Äìî;"l•Öa¾¨\wFš¹C3ÒÇ-1 7í!uÌ¯;½m`ewh^Óc}ä{oê³5t|$±ÑsMë‡¤¢Ùê</lÜ_I"şº=u^sñÖÉûÕí½¿‚ëïrœ{p)¨R/ŠK„Í’¿.-õŞ £æ(MMÔ§'UwâõÑ¸Wi•N+²Ğ‚üè	Då¼éWÒ Ïiñ×12ÃSK†/ôÆ"¢_âÑó†]¯8ùtdÇ§.hzp½ƒ¨Šµì¿ó+Î›ìVè°årëU¬pa{_ÁC™[ôûòö·©75×§:·w£œ}¥‹šª)×x:ÚOÛv|°"(¹Nò¨¦’Ê`»tQ{¶gàTÇdeGà¸©!‚"ºÍ»0X¯¨ç'x&(<×:9íL¼£¦šá›A,–iÈ¶œ, ‚fui78›™šñ÷rï—‡+KØ§à²³ÃÀØVÂåè¤}´.˜G÷õkú?nf·¯¡y;êÒµœ,(¹°'•sÂM*~NŠY÷Æ¥#Ğ-…f?°$ˆm¤¿ğó¤õB­©”R´ŸQLqÈïkW/O—‚Ul\Q¿NÑ­Pïÿée{˜­CÅOÀ(¯¢âdóòô¡5ÿàÒ>i&[A$/ŸÅíãŠJ*z^h)Hıºhz‹ƒÔr/ëõ¿EÀÍîö94´– J^Ñ6€ Trabalho1/ModuleTest.ngd
 ¤ŠÙÍ­0
GvB34Vò@eûó¢³W9™“2p´€=Ñé‘Çr9¡´ã×s&—6w´nO&WµÏ¿½••‰¤]ù .í,éÛˆa¿At*)Ré+èÏ§cõbT5KğÙ­µïø³&|ÿëÿjÒøW.«·¯£Ïu¶§œ7êÇ'o…ì¹_ù¹¨ÛEûêäy^·2E³ñx]C“êU¯®¹©I‡ï;êV¯³±±ûh"ZÃ©ri‡æ{ƒM÷j«uùcÊu5Aå‚y# ‹ú)X3ÔvÃ:5yÃ3mğ©	Üá¥|¶hÊ«L¥ÖÙVÄÉ¥lÇ9Ë?p7õ©;cU™»­ J¥ï:2Àı¥npóÉ˜SAÒ¥íRÁNv(U‘¿®2äYİ£ÁöwÎ­2IáÉU'ÏZ“+wdH‘F¼áü“ğ—ƒn|ÚbUiF¦[èÎÙ²úI?hêrÀ‚A_öêIšùÉá[©¼Óé%ÃsÈGé<ÜĞia)í"… @\§FÆæ€ĞŸR†ŞŞÀlRã(<UŒ	 ±»*Uù4ãÈ×´}jÃS)PÜœ—&TÚ²Ö¡¡…n
Ï·F˜9È%LŸÃñ:xœÔ"µªï$5ĞˆE:úåP×áŸ2O Lxàs¯¹-•ó·¯Jµ=º[ZÔèN¦•dÆ”;æjMÖBb~‘úmøpÙßîÆwNt@@>³¯"MPüPàÛl1]a&†[sZm!ß?åDDA5'xàíšİ4±Á..tš»`bPÓøÈÜà©^vÅA5x,HŞC¾7ßÙ|¤æËÏ¿¹gÃ
_y8–î…kİ]Yp^ÄY—nhWâååÉˆwPÒì·ÍŞn¦×BNÏË¡v:SLQ†vşşo|àYZ1œwr‚Zİ;œ1ökÄ½ª“Â6%Ï¯‘;)Y›³Zdé´Öîô$hãÃ9¨,Ë©¼;÷TsnÃ³±¹P&ö³#m STòn9‘½ª³v,ìÔ­5MNØxè­­®æ˜#µæQFÏß~D¿±şˆüğnîÈøµúsë6µÒa{k~È×Œâ÷â»·“ïÅ‡c—1ycj®^*¼xëöôZµ¾H«oy_‹øó¯úVêÉäÅÉËµo7O%ûáüd¢á£&<ÚñvöÜâ‰Nmóôˆç ã@Ö»Ğ…õ½ĞëBÒ·´İv±Œ´}Ğ½Í¡ÃI±ß®^
Qö$ª
µß­$UEç·gËß¨Ñ"Å‹'N \…]9°÷x‚ê²¼ÌyAÇ5à˜'E»Y¸G÷66 +>™|{~=w-ßì—32ŠZzCî‰¯¼¦ü+dP\C+×›)B29‡¦Û€Úñ˜£ü/ú†ÓyZî/Ë1ò»)ˆ‚,§]·„å°®FÇú³¸ëWN¨J¸Bz­†‡àƒÂù³ñ©çt¹}£d9„O; Ÿà¹4!^€Dë4erìœ„H×d/çüpİEgH&{üawº’îÏ‹–ÚK Z~¦‰Cüˆé@uÌ€4ø†BõÇË(ùú8áŞ†ó„ìùÜïÈíõ…}ùÂƒ°	l¢V°†ì¿c¬G®	ÀEÄ€Şêœx} l[ğá€úßí¡ğcüëc-×Ã%íˆÌ8&'®!`2 
Ó_ ;Çì!uŒ«’œ‰ÈHM@'{îŒë^Äo;ëÏ‚oÇäøÀ4ô´†§»i6Ô #ì°0èÖÿ Zi!›Ôq§Æ¾3Y%Ğ[p·^]Ø/ÀÚ9hD†™#	åãöb>cÏójş,ŞªMqô·İ8ú	ƒ´5¾aŸ;û·Õ{KPB. ¹PšÀCirrYÓDğ‚Îª‚Ù¡±àuPàdKLjØlõñ6,”ş‘;¶hÑØu-iú¼E~DÁP5µy÷´õ¶m
†¾WŠ<Ş²D {ğƒ$ PVƒ<´i•èpÂ–p¯Â×ıRîFDèÛù]sš!ˆ9oÒG/Øçq¡İ@CREÒ@#X«äæ
ûÁ‘ è4İÌùB5oH£@r¯‘Æü.qıÿ;Şm³œ)„NoºCVŸ¢G`}Ÿ…ÂG…7ŸˆbKdˆ³ä- ã·‰–!LP/“ßiØ˜$
_„¼’Û]#<hêÀó(Ä7¡åzXô›Q«‹û#.Œ#Nüc}Ô‡;ÊÙm0Ièzu•åSiö¤-ˆ
1šmfı?‹I½ëœ9÷ªL/—¿ŠAs;Æñ"`ŸåtiÂUHNY/±n¸„kTù4›êKj3[÷½P)¼úb†‹;²ùsÉ÷bÇV´ğ$©ö5h“Òã0Ï÷ï¨häwùÀ‡– ÑÛhÁö›´wÔÈri[àôPÀRÿ¡u Ò1„Çóƒ?‰³ïJG KÚãgû-¥µtlšt[F™Pù4=¹wŸ$BÔç¶îƒ1*Mµ§p´g¯†õ‡ÌÊ¿İ?Wï*^ÈõçÓÎÆÜç-Q³úºø-1â‚ë€¬Ó!¾vhafaí´ƒ§V4ú`Í¼´ãYHÌòqc×Á1h°¶—Ä#;£_³£¥¶ÜÓlĞşQ˜ğàœÄ0îfíÍ5‰KK¸	{D•äõ’…N7ôt	ƒƒ6Íûº	ówÚÄÌzş€h%~kÊÎwøí¸¸S¸=&“”ÉPé†Y–[ÿ»O’õîµ
8Äk'ãéSÇ0}<ıí6é± €Ga9ÍÖÏT7nòı ©¦p»ÿlõ&ùöğÍÉD•ynDnÌ¬qĞ
jnÔ!Cë2ãFmñ;Rn2Jş-0e¢Û«aïòB-ëb$ Âï‰ò]Ww@ø‡ºŒ=(†m?Æ%¸-£Ë•Ç3Éó>šoÑ{<Şê: ü‹ÌP†Ó°¨mŸÍ²—R'—™I .?æóœÜíÜ;ëÁ¥!àt¾/w> %Ù¾[Ğ†{E‘Ğœ\e‹¯¥¦sÄ…’-Eç”n“„Q‹ä7»˜<Ìë/œ¢a>Âhr4]Qƒ€«›¯×ÈèÊXz‚7ád×Ô÷€º'/=°šØßƒ/«¸#^<ÄÃ!KxC¿æ|8üÌÄ&`‹îßÙ>a‡ØLˆvcjã*™ìS‚Ì­tk£Ğt
ÇwhuÙ…/¡–fBŞ~:Ş~ãGÏÁŸ¸3ì¹ğ;N-:s>ÑŸz9ıòÚC>ç3^H¹O–àMà78öûrŸK¯+¯»03ç3[ˆúÏZ±®Nªá8í Û,e(‹}î~nA?™‰w²İû¸—Ù‚y3èâÓD/hšîj:„ÙNZ´õËˆg}>¥sFW¬}€H³ê8µ„ 1;#J€ Trabalho1/ModuleTest_map.map
 ¤ŠÙÊ¥10dD33O5e^óáXMİ	‹I¤Úëq¸€€6âƒwzôNÈ„æp”Úß|Eº»ÂL-5  Cdæ__^/¿Â}V*Å
»ñ]	‘/±({¹ŞüÈÎï>°¼_èş$Xñ.±–6ëši#ú#Z‘Ü½¨Ì¸—:;RÈö‚.õÃH%¨m£äã–ú¨ej£—ış9Ø¹AÅBÃ2¢Rd_( {Èv2wo‚pafLEø¶íÅÓŠş V	Püáş$Àà.(‰wö„¡ñh¸çÄ*ê †é!»oš ´æ #µ4¸Däçe¸Ø´Öwàû¾4T«rm/¦d¦ÀÛpJÁ¸:¿ØÿaJ°M“Z &{o£á ‡ŒÅCÎôt#áZx]í~‚~‹4ñ‰ã¼êÙ2àÇ•ìhçÁÏ…Æ¥F¤BÙº%@‰ûµêc£Ç4R¥4Üs¦
Bb{‡­¦@/`®°š¿)
~w\ĞŠ‚FÇ©Oä« v´ì¬Úi}üU‹Ü{+FÁ&—¹×;Vß0]1äÇ¬×¨-¦8¬6dÿ;F €µÄÜBAÍMZwÌ!’2zöL˜êÇ¾6	öÆÊ'e<EÁ3F$‘~	÷óúÄt^éU§òàk(€Püg5Æ™7Û7$7/ B½Âğ?`>•rÃ*X8x‰TÇŸÖ”¤}µ}4 …#æêB|æŠ9Àk4x„TÅ´vî6[¤©aÈ“ö(Gä UÃu­lZ¡!¯¯ÛçÈ¨HéöA¸rpÁ	 :÷ÒäV`ûXàïö‚¸Òš9O;ÓŒ+gKàÿze¶ôka >G†?şnW	húu÷ô‘Å¾ş¼âyË4‰;%)˜ÄÀÄX—ÙŸ_èJª8s¿(úDô]˜ãã’1F¢ øÕ±%Uë3GˆFÃÔí® +º:ç}	wk ÿ’Ì8§idÕÒ`&t÷}k†èˆ©M£lv£ü”L°ìK²Cf°í^ñ…–xÃkq4&ŸĞœÙ…ÂÌå×XŸ[¤!Ú¶ƒ‚ziYpÜa…he`Èd@úPfºr#_¶Ô­ŠÔ¿l\ín·”rHŞ 0˜«16`ôğéäIúárR/]]_/I¥[,-ç/:éÛâa|A61+{¼BkZ'Z70‚K<0˜Ö9´¤Nàhí£Féw‰¬mıI@*šz„#uÚ¢J=¤ò'¿&`Ø"ÙX@J©Ş<´ÔÈGäKÙ"NĞ0»„Í›Û&Š®¦`q|â	Ê#HG^àlk€£‚é9±y`·“Emvåj¿åË|ğÂØ¹dLİo}—p§Ín7¯gƒÙ&Ä‘,l Ãb`²"/Äï7àYææ<x€”aÖ€m£@—8$±9 ÙÑU”€ Trabalho1/ModuleTest_map.ngm
 ¤ŠÙÍ
FUCC3F_f_ÿ½İ´ó]|”J8Â²’)Ÿ‚,¤›X{*)hR)¿o—ÈäG:A¤®… &w°$LìUôØ„ŒT'ÍjgsR¨1ô}YôgÓ«ó«/WĞ—Ñ?FŞæîŸ	;r§ÏÿŸËÚ^äşŒ]ÿš­Ô´®¯Î®oÍÎÛÙóµê_â²‰ûş>ÇÂ½Şœ|™q`ÜÖ¤üş]S•e—¿‡6l°¬ß©Û®0İ*Û\JĞf`Nò-ĞØÚß¯]-” Zmt …:ñ¤™~³’¡\eŞ»K˜åEU<ßñ&ºë-÷ÏâeÙÕá£/jšiëí½³3Wr[°Ë¬¾ü‰Üzë¯Oê¥}y›?ZO¾½-ÙÔæğìÍİ©D¾ã§0ÊVşÇ|é#jœçj‰ï©¯±³(}ÔŸX?x5åÜnnôÊÛƒ"xÎñÎà¢²-ÑØÕm¤éÊ’eË™Å0|U§"e7Áó^©Ò‘ ·Bdºµ~µfîÊ‹Á+ëVtº“çmË¯¬2‚f¥]z×Ÿµ#ZE¹[´©cK\ÂwÔ6$É¸õ>vé3'kZ†VäÊ›ÓÂÄ® I»gğŠm@•	Ò5Ì€úG¯zwhüË‘Âš­Ë“@bxÔùW“Å¹òÖIeŸ¦â’‰°(åØ‚¢ÏÃRƒËO¨ãT¨§	‚åü™à›úÁ>´¨Ï÷5uõÀv§‘Cp3¥HãÌìê[Ï)ü!¥‘Ûá­³5˜h€úŒ	ÍÖ©ÅOjªÍN×›(!´†Å&<%Ò™6ƒªLãªÚàuº‘„ı½·_ï­YÀŠ[’'ëî¬î4æR¯CbE’“Ã¼³ççX-ö¸‹ı]©ts%&Æäà4ßö½_,6kkmìëĞ ´
Ë©Ç·SVDª:uø(DW•ÂÔ©Ë§±ç—®z ŸÑ5á;[æÕO§V·MéÛ57å ;W‹`Ífä{õ¥ÌŸ-ÿêWN~zõ¸{pºĞ-ƒó´r*äÿv¶ÆìÊÒx&¥	Æœ èzXwÔ÷¢“iÖÚ£+AKå?Š¶½}n1¾“6Œj[<3§Ê-ÔÔ7fE;1}ªíos\HÚ6{¶+y=ê‘¾6w)ïÒİ×§BpNqíJ6`>!æpÔ…Õõu·+É¯­;Û/orM]^û4õæËÕÁ¼gõÿ¹Tè˜”9nş6÷öBQõÖ…ímmÚ "Ÿ÷fÍáİŸ¹Å©Jµ)G–µ¡ë¹ğıøòuu]µc#´qåÇÓ±kóù·rÖEõsİk;6şİ'­>µiZêµBÛó—ôÿZ¯{y&)îòÿ%ÓVc>­Ny°ü=ÿÚK|¿¹.ú5aÔöê{§+ïùuÔ_ÕÓ)¯YoÙñ÷ĞWéó¨ÄîöâXvœ?KÌ¦ß¢¥T	+9KoZJïMâãÄÍCé$š„–—­¨ÛÏ?ƒÅ9‡÷çÒ<¸¨ñp´æĞ[ïT—?[.FÆ®æÎ¼Š÷ª=Õ2hÍJõ™uJ²äŒÏù•äPØ¶ò•¦Ïà}mº“ËıíÉyuªmL™­·+fm/ªÊ×3Xàbó›Ú§úVŞıjªÖßúë.Şı}Ù^'®ÂÇ¨Şó¬õtğ¥[Œ>»ã}Jn¾«Šq*»F7«Çƒ[Z§)¿ó­2N¢şæ=Ü|tşpzSôÊØ›F¢jìÖú—ô[vµë<4mZ-æ··NÏo4¬Ù/æûİŠëö^Ë:÷]ø8íØŞàü]±ÁÑÉrã\VsU«×n÷ÎÌ&%hkÚÎ>øòfc{^9±YÏ‡;N%¹†ØØÁ“£nßß®ÅÛ¤Å¿s%zyqş÷Ïrô¥ _Úf·“„œ*†Ã©=´)¼«‹p>›ïõZŞ &ƒ¾5x¨MÛ’’›mI¥»5Æ¸ø«4›ŒêŞnFÛËnÍÎk7s(Ïwvno½¼¬ÜîKƒ\YL¿ëÁº®Îë›oìôÜ·ó±ÓËîı¾nŠ4»²ZsVWbwß¦ª®Šğ2êëÚ¶ä_qµÕNã–;°$ú ®c­.ÃÅìÂ•Å~Õœq–ÃÂÌÌ©u¸¡dœÙI(`]F[È0Áàµ»ë+Àëì.òéº©}“U·qdumµX÷œ¬Ã™ä0¢ˆÓÖã¹RP¼âI³ydô½—.Eø‹-¬+€­]‚Ò¸Up—¾Ûi.Úª<k<$›	«iïä4˜]/4ĞefÛÉ¼üîgamE/0ÿ¨
”1ÕÂcö•€ -sòÕY2Élv14ùì€Í†ß´ÍÖ8}×@/8%Ëït/×¼ó*üÂÈ`V¢VbÃ÷^À“¤f`‹TU„h#u5ÚOô“Àíö¸Èvô[ZéA‡ğ‚ÈÿÂÃmcGÀÇĞ™×s©ˆÛã6æ~ÿtØœch l¥mÁÕÀ…;ªß…PAôÃ“ñLg¬†í×1Ú=Ïz~´´”FW†mO˜Ë1œgW+Ìå†ÒşÀim.1ˆMSèiN¯@/>:S”ææ°Ğb¥?Ø”ú4Ã®úÒ@x°ÓŒûÏS‹ª4ÊQŒñ–%³07k@şg 4öàpeT¶»îŞ¡âÚc²÷ß±/,
S3¿×¥"ùÅR–é”à×¡C|#û•™YÏbvé@ÁÖbş,t	 ß¹ÃÑqÌ!Ú¶7°·Ä¿	™ IH}cÒ,¼6¼i†Êöğ´ÁCÍ$Ï&@_:€doüßCô~3;=c*IŸ›îèŞê(›o&ÿ©Ì©<Í³Éå}BÃš2ÄÀ ÅÁ·AÒ[@ƒzñ²=èŞ$Ú¹(áäµ‰ˆök
öY08’b1ù¸Ékñ}#Üß‹_­aĞÍ÷¤Be-ÖVÅÁf£™ÍË>7ï`‚ )ñ¶â—b_‹,4@óNÉĞ7sõduÈó¾+ÿs% ¦E5_]aÕSZÏ{}ğÅ¨ŞA·¬XöQ‚ÍóMòÓ+vÛ¸Ú9cAÉî/¬7AK %Şê8¸s];PK6«XFyÀĞÖ%Iqô,2ægp$FáïT(;7ûÚb€VEû<ÿ7‡Ä9È%æ£ãóñNtûY$ÏÜS8±•õ@ÚPåbøoQ´BœÆqåÓUuTéÂ œWÁ_´ÀBõæ&7pıg[gYì.úÓP'GSäI„¹¶Q§aôàëc!Å‹]ÿqÇòÄ¿’ıÿÜq·S•5ş*…0Á¢tÅaÔSKqb	‡Ì(£1uÿ"Z¡ü `Ü`@Í¹GI6ñï	·OCl“éİ$ÚÌ°bwŞ²<ØJÏûˆ'n.Òb/³ŠEÖx¿G¡AÈ¿{£È†#ã0Eg7ZOhyëG9à]z/‚MS|h’üÇ¸PÉå¦H¬äëä?©”Ùøªq—QÓº×Ñì£tRÄ­ÜàØĞ³³Ò±¤¨T‰×º!K†Ö%<c[iæ‘ƒùm’BñHÊsB?t–¹üâéõ:ÚMf`/J¤T9§@äTY9&¢„°Âz‘ªŞv>G¼ QG±Ä†*ˆË¼… _<á7&<»ø[Ã š‡ªâ_ıh£Œh^‹FA‹%i¬K¦¹;Ğ|)vü<J*LDrPÇ œ­Ÿˆ—{ÚXÍ¼¡\¥Q€:²x´7Që"Ğoi™}Dú39—ÅWBÇdrCQÑÔ¼i à7qW²úTpgÖevœÈÁAyC}lÿçaØÑ¸gº¨z—)À0r¼A:¾ğó];`ßi2áØ#—»?ŠŸWÁ²üüÜÈÓ~:o“k1~ùar)%¢A³4…4„¿'€Â´¸Ò0fìU×öÌFšè;Ç4%¢]y(Í@nP¨%Ÿ‡I¸ü™%
É@ø-46‰ [üõƒÑ{ìtÀáDPñ	«+µ‡Èó¸VvßzÄ”C/ñø,¦# İæ’½¤æó Â÷`Néıƒ`nxÑ%û7 Â{z×€­älºzÀIJş HUÆoa?w³”ÅˆãœÌ‰ÜÉäÃ*½÷ü†©"?Öóù4™Wh{AŞù;Ú!ÒÍò_… êâ\›ç‘’.?H†¯Úä8t)şQ7TUŞGÙçİ¡($†è´ãèn·Ş£\²„&£J~†có´éBÏ@
c€¼XIŒƒB¬iù„Xk·„6;AhUäG ›F *hœéG<ŠÆÿ7ı‘:"”4Çí5¢&@,CîG(‰	µƒb/”âEŠ‰.Zîˆ²ëófYh–{$BªCåÔ7Ô.”•¦Ù}À}§d*ôü\lY?P¬v¢ª>-òĞuª×w‡¹€øVš‹õÆ.ö¢ÙG0£¿ªÌr2„Ôzİfø9#÷–Û¬hTı"pñ¬İöâÔk®D§~-EAz®¾^&³£Hs:·ÖMô‘C<û¶’Wa‹8IáÌë8HL)ôƒv’ÛÉÊ…¥ã¥Âš ºÃ×Â¨v¨|²:%½mFS%ÀtZÀY¾ß”óøŸ.±+(’Mæï§ƒş¥ÁIèVt'ÎiXÌÂ4 w$üÖŠ(g¶0é[¬5ˆ<ø &ÖTKÃ*Ş–ˆ¸Î•ÂãÇ
ÈR¯#UèJô¸üE²w+<²w§Ş^¸ *úô*G|›šêXò˜®ñBS¿A.öX$	Hê/ƒhÍV‡Ò7j?™/s§$7T³9²†Ğa^Òf˜K`èªá†I_¶ÌØ/åM£­¿¼6Ü^ø±/'(dG¶9M âÅVÛ_¿0ßÍ1?çøFÇ¤iv«˜#¦˜Ò¢'q¬Ş5ÿª ğ Åç^QY£i·¥4„Ôş09sà!	yPGUA“Í
Ò¤kC>Ptæqó]·]W-åhĞ {Ğ‰bc»MŒšyL*£øví=Š<¹ò—­2o—û›:|{XRôuÃO-9+ÑÈ	iL!oå¢ÿiæTr-v/jØ‹¶‹¥’‹rÅí¼ábj„EÍÏ:šd#I®iO4­^
Qp~¡?€¡èŠF¦hI§ï+¯_{$UÌfMÑj­5çı£†yQ¼±©˜È5Ø¦49ó³óNŒ£Y´ ¤z¬§Š)b>öıñV2Çüêáed»5šû`´ŠN‘ğş/Úô}ÜABguÒ‰Í„¿[ÉåWïk<ZÛiÚo“ßÄËE/·yŸBÃ Û²_¼ttj×¬ûªËÒÍÈšMâNÇ˜"ÿ]n.‹›Ïı(¸R-êEX¸‡)èNªahĞÇŸsJÅb«RC°ísã²Qø åFI(f]zç’)x±$tóäBQÏØš~àÛÁĞùÔNûeÂ% ş8DÿHH¼MÌóİÒM4fäB*‘¸ºÈCJ ª89nsà¼w¾ÓLZ‚ª¢Y“:ë3Áäc‹àJÑ±™9É„S×aá…²~"çÃ›Kÿ$#§HjÌBXük$J‘
ÛŠeeÜNıW´)‚Üa@Kİ[ƒj1Ÿ½ÆVíæ]İ/?œ/2ŸÓn©Ø}	ÇG-¼øã«‹7“WøC²ãŠÑO.$˜^ŠÑÉ§Şş â¸ëóE±ÅĞB¡„îšğB'ÅüQE?Ğ‰Aq¸¤V¶û±_GÇNò"Ù^^R+òìnÌ‡Xàí·Ì‰˜{sØF¡4ÜQ¦µn+E)™N~nÙ:²?W®>ì-…üy\E¹?¥—ìƒ:#ÌÁİ¡PnxQ&xŠZğ/ƒß3ÙX|Ğ§3d;”gÚ0;¤òâeÈâ4D"ÏñÿSèéw/Âììtº¸åèiÂ ™Fe }Û¼‹ó0?'PÃO‚}˜¿}7'KºeByºÙ¸‹ñ\USèA:ü¬‰a’tS*>Fìüô:øUe|+<$]J"N: '0wßo»ôª8a`g<ù›ñÜ•”_†ÎcƒT¡êíM	âx–O¥XÚ41µ4umÄz:µz.«öé¡F¹í‘$u±f18Üò Âùå9€ Trabalho1/ModuleTest_map.ncd
 ¤ŠÙÊÁX	6fE#UTòFD¿ÜÄ»pSÖR`å.Ø+0A”­Œ¤ÏÀ¶ï³ÉQ´¥)Ã.Á°Ö¢>}6:z(ëQSï˜zWU˜Ô(úúôï—¿÷!®ª¿Çÿİcôøß×_ãùş’Ÿ÷¿_ Í_ÏCe¯ùõ!3³•¡Q¯)×£½=èa‡|pê-Ñìö(|øiV2oÆÓ;¦•<C,èæÈEÄŞ¼7š”$¡/Æµ.OAÖãm5ß«ÕÃÆsÅxÍõ+Ñ|¤4øšQ_==?[[fq|ó½½ŠnêX3>ûìÓî7uÂÁ¬÷¾Šj
ß‘4xÇİTÁ5×©#˜†¸­Ú«/¥±PY*—’åñÒ	&õõ„:ú 9Ñ8bhV~ o1*°L*õßkW×ÕÕ¬æİÏÕ©Räù×xÓÈG@FnƒªÚŒµ@ÈÎˆ„´AÒêHòÜe_zpûk$µ'İbj)WûW±Œ¯¾œƒe¨=€”‰çs<ªêA!¿c8—µt7Ê>Ø¥Áo«rbé/ìåÍüN”„zÅ/²¿“ùz8ôI“Â¼˜Rc¤;Ãw=ÙÈŠÎ•Wf¾Ò™Îï˜B8 W;SN>„–½Äœ4R©§nÕ
FÛÉÛÉŒÉ[—aj2!@c7(mOyxAç (æî?`>û–yCäìô%íÃÅ°¨Œ2üQ¶E7#€ög˜‰Ñ1$üwØÓ\Ii_„?‘¬úÕ†\(„˜˜Ù²¼æ|E±WÌmGüF€ÚWK…ú»¥•Ôõ°-9lµsÖŸ2µ|ÉÂvFÍiIãû"êİ¼o‰ƒºaÁXDHõ¾ÅÚ¸={qô“^‡3ø(µw§r—èÿdIx%N Ğ@7ìÂ7êb¾ºOt<éTf_¡"Eä’² ĞêÜ0"Šr¦ùvC·UöGÜ¼åF×µÍ‡…$®úûÒ„[J>È	Œ€CuÜOYwª`%,ì)"˜èß)t N&gRÄªSÑÂ±[‘VL0İkzéê?,õ®%Ñ/ğ©bï3¹je³è¯ßóÎbâ?mı*~_÷6ˆÀH~l¼N=]ëğzÁÍo3Í,™(:IÈBlÅL³. hË…äuFîÊ‡j/U†A¡^>¨-í"ˆ {ç_íë[íÀâY—épHãG%zÓ—„]ik¥SãÔ0êŞÔ¯_´VÙ!ÛE°ig›Ï$ }Ô|ÚpŠÒ‰ğr*ô?õª4¨ååo^ô»<ãğ±¦¿ßI”Õ¸Æ	ú‡òÿÂ€š†zSÃ¼*yßï­t¤¹½DÏŸYşÚŠçx‚É}j	J@låO~]­üî¼$¯ö}û3æ£ªñ£–Ç¯‡‚Û·°…Ç!_? øóQŠê	ï—:nI2Ğdy¢Î]¨{¨b¡}¨C,|­Ámf‘Ó§	Pò¼ÂUÜË OQ²$E ‰ô£2N¦qÉÛ˜mWÔ‚~\ã¥5 Á9*B„Ll4ûñÒãÄ;ØT÷8¼SXdÍHjáÎÜŸ¢¬9SŸÊ’\Ä'§ ıúÍ^i®u253“ÈEÈàhÕÖW şùÆwğ¦@+é40Qå