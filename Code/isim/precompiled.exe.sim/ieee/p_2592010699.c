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
x�yR+���Kmd0U��G�F
 �;�����b0TD24�PU���8j@� MKY��t�!�@ȡ<D�xjfcO���j���ɰժE��m
㽡���fW�MEi��x�R�\�@.(��V�>4q��RG�n�o�\����j���]���2B~�ի�@R;=1(�ͯK�i%���t�'�6�"��<�q�_Y}�c{?�a@�3ά2ʼN?΅2E�}��J��AJ���{#>�ހ�sk�T�SʽV:��UY���K�yʗ���`�s�@0�":�� �@�m� Trabalho1/MY_MULTIPLICADOR.vhd
 |����΋0tC24�pe��?�*V�I ����,�$��U��)`�>A��-��;5�!Kor\��E��񛙯d���q���?k�ֵbO~���Q��3�ѥ��,{-����M�c��G5��U��[�*������G�e|�.�U-���9Յ���w�]�s���������Ԅ��}��P'�w����O
��P���w��g[|RV���Xi�Iw@�$�sS��9dvԕd�[��k�V=T�[P��Q����)�'?�4A�8��,�Ȓ�'D	7�"&=��q���7j��E���d�EB$Fn�ɢV�َ,J�m��X�qsIpևt����qT�0��R%�T�1���ju��\%Ym���*�*��IP_�Ѿ�iRf.�ʸʻ���:&���=~$��+���S��0�mǣy�''=�T�a�˛%�d�2UYS�6��������NyQZ֤��;_�y����8�4�� Bn�� Trabalho1/MY_SOMADOR.vhd
 :bC�����q0d42D�`T�~�$I �V��@�BG��ņx�d,�	qO��w�"�rB����,�E%�n�Ꜹrv��n�t�i��t�����Z3I��ot�eh��<s�F��@v�9��a�m{����>�}�V�fz|'�6f�H�*wF����]�t��}0�|Иvz���;�v���
g�0ґG�M��/S�g C�r�o��çH�D�E���Hg��A� �4:w*}�ې�RIHJ�E?=��� ��lx�W��	�ʶ�Xv���������Z�L�b��a�BP�q��u��!��@>ty�7����(8��fB;�z0J��С�H��x2`#�h��>#<$H9��Š�d���BT16*�P)J�)|P+����_�1�"������cӏ-�R�i[��d/R,�I/\�����m�s=@�f� w�8Q�7����^��95a�����[�8Jq�_��/��MLq��T9H*�秱�V)�∇���?o����l�z�Ss=S��kV���޵s�,��XJ�c�/KY�E�%�-�-/2`�}�?y�v+&
 A�h����n�@T24T_f_�<*{_���80u��������8���P��v��kl�s�lks) @ۥ2s�J��,��8��e-��ki(J�J'kX'�~���3f�e��u����K�f\a�m9��������]�k�:G	�u��~�L�;����q����th�\�-6;�@C�G�ݥ���e��t�2���s�u��1��ܾ0l�ڨ��B���`����A���~�q��^��q~��#�rk�"l���j�+O�g���U�g,g��w@#�
k/{
��If������5S�;��wO��>X@GN鈰��%�f�;��Bz��)�cҦ���C����&8�O���C��>cv́'��oTm�#�	��=e��q�FG�Q�χ�Eq�"��6�Wۮ�\��t����s9}�b ���X��'`����/Y�S�žHX��J�Fr��ٵc�
~¬p��~�V|�Ps{f�X,޵f���>����ؽ��Qmk\���������Ѻj�i��ְ^�ۄ��<?~n�g#=˄r

�'F���٣pH��Z�����r�����Z	�9�"ו���e�?�5���'/>=\p�s��r{UE�֯�(84��'���D�׋��iR]�㌨���\Ë�Y��q� .j��i��q(&�&���h�屪UX��p,��4�-v�_Y$����ڪ_"-��NV�V�t����\sB��OId")(P%���'9;�8��	�v;�[��ɯ$t��s����T�_��˄�9����ƏY�����S�*Е�k��L��(sfѤ!�#a��Hc���$JP�����ц��d���R������.���_g!�W�w�!����Ә�F+#<�S	fN�X�K��)R�YY�TN��/�z�b�J�B�V�=���F\�I Ǒ p}C���*a��{RPhN��]S?�[���]�le�GP*�2�R�E�1̂���H���v.^�%F'y�ˡw�!��ˑ�
����c��~p�����v�`d�4�^�{3:\3v-�<���E�B�l�o9LI�vT7I��K�F�٨'��8���#)��3F=lԩ<�'rO�����Ö�;�i>�׬�'�q�f�h�D��?�+j���V�ǩ�i�>��U`�s��y@5�Z�i)kf���@�>@����(w��I�������
)�d�SG�[u�E���vo�a6(�քhK-j�1����P��2�m܊�����О}�F=P
8��5ro����2S���kw�O��ӧ��R�I��}J�l>_�.�+4L_����`�� ��~;��n�0��UH\%��΋�lfoé��[�B�>[C���6�x��|�(C�k�������Z�x�m'G::H�u�I�P-�z��h�p��~�(�;9� QJ)������椒b*%})�m��?�5 �̚�㒙�
k��D
\NK$^9P��φ\C���;��#Wh:'yNDʚ�!�"�>z͊�EQ-����ڻ�:|;�Hbx����*����>
Q8��z�a�{������x�H<�먹
�d����v��.��umm,>̳�u��9y3�%MU:+�jg��=1�+sT|i`1,����p�n��.���aA ���>��� �~�{�c�e���	H�f;11� �lNI���:�2ѳ���-�K��j*"Q�S[]�H�i^����鮊����m1��[]�m_�P�k�-��E<MҸy�*�����]2/	N�\����pG.y@ɷ6��B~�=���Ȫ�2KZߖv�ZW�����mg�?Arb �N�n��K� r蚪�|ý/6�ʦ&LiR��<D���ǌI���X��(�%`��
�!+��F��2���!�Q7�����v������Ҫ����8� ��3����R���/��<�.L>��Wq����I��tG�z�éz�Q��3x�sp-�������MĊ�ٗm,2�qM�%�#\�ie���a*'mG�]  ɵ�^'	�.!9gO(�v���̌�Y��pX� =�q2��Aq, � �y֠�y���x�2�
�'z\
�d�G�cU��/&<P�6>.'�*��H��/�ԁ��ء���,����T�����؏�l
��Nkx�ȶ[#�3+�I��!�(���C�� �z�@���@�x��-vb�k�iS��S�q�f�WӌLQ�[F��Ju=��*��3ɓ���:+��ݹ�`=�z��Ԃ��7��%��ցi\�hO-1A�m'x��Ycl��7\`B�N;ɈZ�#1
�SlNśB�uS�Ih	rr����o�t�zb��h4T�!9=R4��b-%W���me�
�D4��������W� ۨ����!����h>�)���#�@�ArM�OI�2>�_\l[<�
'���Z�@��L�>��z�"	j..�_^h݉�ɺ�'֫����j��f���;��Ht���9�:�o=��E�	�S���蕸
�ణ��F�aM#t���a�t��⩏���3�j\U��`	�Tz�}�F�C	���X�e)�P��QT�t�F}���AS��\�bg)>P��z�N�Ɓ��q�4���82���"?�R[*���I���:�@��ۥZ���D`�]a��O:����a>ҫ(�<�
��gut�����m�B�l�*��xw�n���U�sҔ�8�3���}��ŀ��
3�d��"=��14RA.Tm�n�����̝���EZ��q�]���ڍ��P�z���Gr�
�>iAoýҁi�]�"������U���Vc"mPx
T7��C�e�+���g&�C��g�{ɶ]O����;^�v�n��1�
��7�EO?t�\w�uٷYkї��Qk9��B���[�Y�a( [/'|J�me���3�p99}�������I�?���F���;)��*�}G���r����p��gb�5�C­xe/���1}HD�Ď��:< ���T�@{�A�'t��+����|� �����1�ʶ�#C�� ϡ ��� %Trabalho1/iseconfig/ModuleALU.xreport
 )��Tz���~@v333U�WU�߅,�7�$��mֵ^Ku�7�{qǑ��ާ�$�k"i,E8�������J�nM]�U��� �Jo��G0p N�]g������]�8E�g������RY�Uvs��=yo��^����9\Y��w��u��3�G#ǡ U.]&��/�|�&������~|��Ow������������|ymK15Ⱦ�[zV���ʱ�m�k�V�)��*��#�ѹ��?}�a��j��02V���.�|�hh����S�:�b�z���{B{0�k+��&�2�1���\��na���}�O-$e& �!0�Z��S�伸�(@!WZ��*"Ɂ��qs_�B�����S��@ �<�|\���@0.(J�`�0��4� B�fw��L��|�f��]"�L�5	�AާF�����s-kdl_B="�ym�!�@/�0�.o"��'�@��*�?��1�Yv��G9�-�c�r3�*�Jp��Z����<x�gYӤ-R zǐ}�	F���>f�/�.;Zs�2���"D�L�fs�u���<t��x�@Ջ�~ʥOHC#��]�FbAǃ�S�G��7N,?�o�uU��uE�\�N@�6� :V�� ka�d��c�a�VH���)қeD���
 ?=�)�~ {����)��� L`��At�e�F�T'���
��pS�<����D��l�jq j!�a\2��-u�5id��ju���osf�l��`|4�%�B ��<�Aj�A[���/���������S�M���1�� �<�]�׋8{R�H��A��`�`f4
�&O�J�o��K?f�iK&�3�/�J�Mad�B�x��DKAۈvI����w|j���c�ܷ��~p��,��$�I����fxĶ��=�Y- ���=�JY)��$��L�4���֠�M�{4k��L��s�٨)@�YE%&�a�ػɢT�v&��lB�0&؝,x*���U�#U�7^6^��p� K>o�θ>f=2�h�
fl#_��Y�qُ��6U�� kZ�X��!����}H�_�쇧U+䯲��f��l��B�L	�8�O3& �E>u��+�6M<s��;#�����#��$�Ly7a)|ڶ'�⎛w6�yұ�{�����R��E�ү?�Q�&T$M���#��yZv�c5��b����u!fB�M�L<����>j���t�W�I�腻#5):������ߢ�ZFi:4<�U�p��Z����if��3��D)�%���{���ޞ�� ��Y$���a<�,dk9�ƀ���t[m9%C�2jw?��ـ�Ss~:��{��V�Tb'�S��{gJmWfp��s����XS_��Og2�}q��TsBvGS	R2n
�6�����+p�ּ�,�$%(ͭ�0L��Qj^�'��<�=�ҦN�N������rm�]�>����GILKr=��62���4�J.���St
�+��	�������N&�?��^��i�E�4!gʂ���5L���_,����&Qӓ��
w����}L{��=��,��������� /r9�W+�J��J��*��g8p�Z~=Jz�t��_��hXM�a!!"��FZEr��vY+���Hyُ����׃
X��q(�i������N�k~-�f<��ο�.�坉+���m�0.��1������QP�phv%�,��H�V�Q���7������e�䇉�{:�[�t�!oN�6�ݠ����a�yI|�?�ԫN!�����!�{慄G�?r��)����ńݼy;(����m��Nv�FɺN���4���>&6I�Ѱ TNG�I����gu9ƚ��%N`���MuK��d������������=9H��H����qv��Kg�uw��F�市~9]��j2)�_:�o(*�ǖO�cxX����J�wfrG�=1Y��g�"y���}��!��Z�gn���N���{�K���˶5��Pd��So���H�sn�3	9�y��g��� f�7o����X��2>�����������~�tH�쒱���^MJv�$�XS����
l�с0t�X`��6�p�V�,[XK��au?��Tp~M���e���\����7V��1-���\+�
 |Lq�����0S24_5_|����s�`˖�[� b�p��^g<���$儂���8B�$�HR�0�π��sq�[�7����o�[�ozK}om6��i����	�_;��ĭ6�,t����B��*,ž�7\�+������J���6C~��*X�K�3�73�ZZۭ$��1.^L!�:�ʫ+����!a�L��y�}��@і�⥃"��uwm�
�ٻy��T|S�gGG�T�r�	�і��B��!	Ap�� G4V�&
>���-7�"3���b%A&�PE ��Ip���MA��a�[���<�1%�6 7b�j��v��Kd.�L�F�t�.2������ȥ���f��͓ny���huM�tiX�^����+֡J�o|�5$�Q*�|�g%�B�[�v� � �]�b����C%z���u�� ��UL��D�F��Ц[P&Mх��� I�B�j�>��tLƖ�wW*�sTr��>�SF"���B�;5Q�:��U"��j���O#��=���9 �5����f2��	K\Q5
9��E�8Ό��l�;���� �e�¯G��IM�W\5��ة�k���<B��a)9,����8Sv�4��U=�T�	�=.�V�K�	��װM7�y�4���lÚ��lv�g��>\���gy�xK�;1�@���=T��Uewn1�,����uN4�@t��6uu����O(s�N�s�+�g]!�W?�z蹴K��&2Ԯ{3H���".
�#U
��j���o��|7���Ҙ�����=g!֚�Bw��u�!a3��쇽�hm8���&Ɗ���k��4v�򼹲���y����to=�2K�G�T�m�Լ�f$�J�2�1���!��<�ZD�� ̡ t(�)� &Trabalho1/iseconfig/ModuleTest.xreport
 Q������@v333U�WU�߅,�7V��/�^Ku�7�{qǑ��ާ�$�k"i,E8�������J�nM]�M�Z > �$��`	�$3���=K�w��~XK�g�L��<|^�JK2�J�����-�������+�6ӎ�����F}��x�$
�ˡd�������[����t�ϓ�����{�x�9x����~χ-�f&��SbOJ�8>YV#��M��rjӥ76e\y�tZ6rs�o��������[�f0��󵡠R� ����2�-�W�'�
����bl;K�eFy�H	�x>�ʦ��2� U�#E�s}O����ࣣ㲪�	�T4/�+����'�������q��|��e���S��@b�u�<.f��� Ջ��Q�����^ƕ�X	��Z�I�vY����/���D��^t��N�	/���Z��.ؾ�zE��� C&�_a�\�Ea�O��v6T
��0������ ��:m7}�ɔpb�S��x,�����_�b���ˁ�|c̭e,�~�CV-�����s�60�t��9���������L�c
6���71TR��$q��������Է��U�O��D3�~{�S�~�@��[5�Scg�g@,�2�u��\�B���N;41w��
��pS�<����D��l�jqN5�0�G�����Xy5:�zp7��x6B��h|4�%�B ��<�Aj�A[���_O�c��Gy��v
�Ee�h;D;�4y̻����J"�s+��;&��hJ�L>!*��B�+TT���M,0��L�	xE�W�k%Z?���?"Xz.�C�bO�L��0#���U巃��'��i�ί2J���߫�g�,Kk�3�L5��
@Zl�ߴ����*2O���9�ܭ޵h�٣X`4���0x�Yίf��Vq���"JM�E�w�D���MD)�؅^`M�:X�T	Q#���F�jn�*,l��
ᖟH>o��>f=2�h�
fl#_��Y�r���6U�� kZ�X��!�����(��_�쇧U+䯲��f��l��B�L	�8�Q3& �D|�xLW�l�x&�'��p
�;�����=I	J3ku����Z��I�=O<�-iS'֧vU����L偉96ڮ��FWUtI$$�%��p�SC��r%X��q��ⶖ�b@��������N&�M���!Z�>�� hB�*
;sꓻ�dq|����GNO�,xp_�T)ܟ��Ǣ��G{�YE�w>�{�2` ��d�i\��+Q�+<?T�������i���V����,а���BBE������u�&W=���f?��7^7��(L{S�D�g#Ws���Sw��q�\Z<A`�dZ�]����ۃ��B>2Ip�)���nG3�nG��^:�)?k���Bծ��/:r�ќ��~���7�z���S=+c����%c�B��^��[K�o�:1c0���/��6���
9$�b����~�iNR[ �pN��]/�=��e��*d\wg#ݢ��S�=���Yof���!TR�V�v�H��^�ܞ����]���!-?�J�X��w'1ԿK�yֹ�@��Ad�Na�6�#k�}t�~��רUƲau�'��ȷ�"Zs�R���y�w:���Z��OK[��5!�1K���xwme���00&ZI����ߠ�)
X��s���q2�l�����nZߋzY�'�s��˻9gbJ�v�rF��f8\ݠݝ��*
%������i�2u�)��C�H�sn�3s��Ğ֯���pݾ{�`B"=b�s`����3�/$
 F��Tk%�]�#�J��y5)�䒵aN�z�)��F��ua�F0���q[x�ma/˵��u��P9���6�̈́i���}r4�� l�	Z��Ķ�6%p�B��ϴ,2 �
Y߀P�.�3k[�x1�+�~��+��BI��~OE�A��:&��Q���	Q�˜<�� ���
 �0E�����M7tC3/VO{´�@�!`!"�Ҩ�	_��	�H�)��!o~��R�X�*ӵ9�����^�y�7[����8n�{���K\�/S����J�d�\��������f��������8�c�(�S������/�@ڪRVP�~dH��%�	�� n �d�t��[�����ȜͶ~!��L�bh\�J�؉�.<��������hŐ � ӭ��V����Y��!�\�@}�:�
 �tY���� �6e3C4O4^��K:����5\�Ñ�˘���2�`�UM�ZV�q߽�q�j�wR�K�/W���*D��"���I�(�G�@A�һK�x�=�:����?�N�]�jm�`i���S����?O-.?�Etܽw�{=K�)~�"Rza������q8�j����{�lV? ��m�J��dn:v/x�Ш����[�4��ԟ�L����PC��H�ly��G��y|�!HHR?�� ��3�0ޖP�
��ǀ��#CjM:R	�8`�w@�Q S�uG�<��&�U-9C��`W�(�?R��<Q�0�dآ#͑�Jh`����yz�[�d�5�������\�:я�k����q��&'�3�{ ;���*����ikP2ME��Ih��[qe���-r�%�m૗��5�/X��g�5ƥ�y\;��Px�J#Cr��)����L�"��!�9����<� Zq�[��g7e��U�T������/�1��K���$v�����[��3��6�ɽW��+s޷h��-%����}u{\u�D�D�;a<�a��7��^�K�_�:�M@��굅���c�]O��M���,M��A1�ڃ($o%�曏�
sq�'�j�+Z
a�,�s��꺽^��.����Dז��[L'Z(�gZ�B>gJ6w�@"�)�oyZ�oA�Z���Q[�Tݵ�>s"�0��>o{�e����y��HdՏ�R�T��k�g�m"�����n�=�t��P��p5�����٣�v�A����X-�v���_���e���i��������T�;�� Y�'̀ Trabalho1/_xmsgs/ngdbuild.xmsgs
 R�[���ȃ6T33?VM�*��m�EX&�@�/�Z�jm�"��I9e��?�q�a%�=��HQ8�H��~������U���^����Luo��ۢ�}(�O���(�Z�~=�i��O���ة4�]!�,cmb��rQ�L�o0���&W��"�G�]��樿d�Wf��Rvn�xV6I8��'���.]�z �X�:F��F�������'�]�8�XIg��l����֎A���o QU68�����]����&ph@��Y`TP~�qa����ޭ� ��#6�� ���3� Trabalho1/_xmsgs/map.xmsgs
 �j_����X�6eC33�PE��(ս9l�E��@`I-��RE�@H�C�{孿�%,�-�6
c	�g9��|�:Ntsf}���[��������^�T{��hSc�k�j��Wҟ�}Z:}�ҭ��o�ޭ}�|�W{b����Ec�mm�T��%k`N��D����V?��I�_�$��5E�e�3I3[����¸�"��,��
�Q�ͯ����h�?=L���LSx̊���(�$��f���ѐ�j��mf�N�g���BZ��do���Wp��ӽ�pn6a�Af?�$p�!�" ����6U�������7�m02 �Լ>r���n��8�۝��x� x);UW6��Ґ:S��O
 �`e�����T7vCB3�PU�<)Ӣ�R��Ψ��R�)�
"�+��������=�R�^��+�11��ߑg��g��?�ݶ��c!�7��?;�c�|�;V���:��b�����^>Y~���ɟ�Y��'Ÿ�ufk�i��Uz�Z��
��)�=�[��rW-Eɍ���T_��5��%Ln*��S������G��t#z!܈Lc67�G��	��AO��86
 �g���ȴ%6eDC#�@U�<*��
 � ���ȃ6T33?VM�*��m�EX&�@�/�Z�jm�"��I9e��?�q�a%�=��HQ8�H��~������U���^����Luo��ۢ�}(�O���(�Z�~=�i��O���ة4�]!�,cmb��rQ�L�o0���&W��"�G�]��樿d�Wf��Rvn�xV6I8��'���.]�z �X�:F��F�������'�]�8�XIg��l����֎A���o QU68�����]����&ph@��Y`TP~�qa����ޭ� �P�T3�� �"`2� Trabalho1/ModuleALU.vhd
 �G܈����I0eC24�`U�
j��R�� ���A��BG⠅E:E,%	�$�.�|�/1��	U�U-W�∍��q�1�c��?�ϸ�x�k��b}/�:���}f�έj1摏r��ae�����,���~��)R�=D�S�Q�:�O���k�`ה��;��٥g�蠿Z�#:�hSj촦��v���e\����gY�4U�e�Л;,BȳEZ_[��v g�f3U^���E
vrܿ��c*(ԧB�˃�B�$g4^,��ϒ�g4D�8WH� �ë��!��1	h��M����ș��a����-��ś'h�/b�k#	-��c	�&�� ���6���O�њ�b ����
��؝>���}=�?0���9|i+~��oݭd;�^�r����ݰ@Ks��H���rznE�ȬU��Y?���gUfyOr_���q;}�-�-}����I��a�!Ց�i;M��j;�K�B��TO�y�%�[��Xu�i�s���u5��jSX2��\eo��0�ҏ�9az�+\!�	Lr
���z�ݵ��q\�z�%ż�9��)Lx�2X�ˌ��ar�݃�I/%BR�1�#����[L���ɼ3�p���oѹ�st�P'�N�o�i����z��E�"��=��ӥ��1I���ͧ���zKʛ�=�&�^?N(�d
�>�:6�� �� `gn�� Trabalho1/Trabalho1.gise
 |Lq���΅
@D24D�fU�؍�so�v#X����d��cd �u�&-	��x��RGł�$��炖��*�O¦��j�_�O�+��(����B��J�^��g��,�:�.7�}
~޺�=��Z�gw\� ����ʶx ���y�0��W�Z�R���ɚ7e���;O9�Zn��b�&��$�ZY�
��0��`��ٸ��B�qύ;�9Ƙǌ��}�-�ذ4_>��v�D5��w#��9�X!��5iB>P�F��0�OP,f�3P4֠hЎ9P<f?s�#I���5PT9(��#�f��F"#��*U�j������}(�&۶���ݙ(��RFh�uR�5r���8��}HG�UQ��UT�BxR'�f�J3�f�}�S��� Z.��~W�hw�U紂��^���W�=��{Mi$�`/I,�(J�+-`����z�r[�i\��e��6	�0xu��k�k��0=b��ߵ~��;?���W��Ġu0�	�
��0GB36��=*i������32�|��d�u��P��bc��7_I|m��.�ҫ�41B�;���jrR�W��Qm�9n#W�k�����'�#��H'�T�-zfr�Y�c�ק�[�-z�����.�5idw+�<l��w�+1�mryav�m�����-r�k�}���%,F[i��M����BoA�ѥ?8���9
h���D3��c��pP�'���� 	%-��]w��y�4�L"��V´���+�[�ׇ�}�$��� àD�Q?��Uؤ�i�'V�>$�l,�o�JY%���K�+MEC�=0�_���4�!�9�1m���m)�@��R� �]�.qW�\�Y��9 Н��2z�~+dě{��X���?b��AQ��!�h�}D����?`~xa�Q!/����4�Mg�*���d���߄+3�N����/�6�\�	��7�an��ڞ�L%�3��n#����$,���ؤ)=A��)����Dw^��PTr?@:J���C-�T4���R�Pԡj�V�_���#	9f���B�s.,qb�+���U��g0��hF
��a�%�B�~+Vt.��c0\�4!�h2�UV��PIJa�� ��ݗ9�d9q\+^ۤP�K�4��&�X�����i�8+d��.""�$� ��~�6�"� DY&����'v����m��]�����:������n>�� ��  ���  Trabalho1/ModuleALU_summary.html
 ӳxUz�ϴ'0uC33O5v_��.�d�X�$n�&��m��{\q����Ѣ��1ŵ4�H��{���+��ЧC����xQ,Xs9�|o?����@�� �p��}Ju۩O��T�U-)n�O��.�B$WW��{5\�Nl>����z�nĿr)c�F��:��V��o����̳�\�Dab���/:4gեY��P �R�`���J��W�n�wj��:z'A�<K3��i%:�*x�z���B3��@5��������}�f��9�ӷ>��}N��y����_�p�7fT�:N	�&��Ӹ�ۈ���У�Fw
�����t����p�Kx�:#�%Ƣ�"��G�Uq��t�8t`mclk!�.�(yZ���1�5�ćN�|�����U�E0�~���*�a�w�t�Y�ۋ
T<q����X�'É�SQ�Ζ�3���]�Zv�g���Cb�t�K�N�'Й��D� ܲ&��@n��b$����MV�gp��^i�.#}���;�@d��)x����ꓪ�C}����@�On�N'̰��f8}�Ă_�r�F�ߩ.x5jy��蟚�2���ۊ�g�w��D����q3{��E &���3M�M)���w+���c����	��zcŇfw����q�8���y�1d`������~�sR:������X�.��E
J����p�J,�s��
��Ԥ�F��P������X�ڬ�U�W�U%S�Ԁ?���°W_��C�X>w�&\N��� ��d��_t�j�ި?@�S�*���8�W1xϛ���w�4ŷǀfV�i(v[xķ}Gc�}U)B���yy}Ҿ�\���e�b��ͮU��&ʊ�?��*[�SY�C��Z�|��FX�G
���#��F�J�?ԟ�eg̲3����z�+��?�=3��r�ƫs28ٳ�k����2���FS���B���r�KA��	�8���6�.�� ����.�~�O]���>|�n:��U�1�Ud\�=ƙ�{jiM,-�C�k<�셃Wҹ�Ә�}���J�����]�-p�Pfq8�o7�I��"i�����j���$d��F�E}�HV�q�»G��`{�l2�H�F�ҵ��h�j_�0e�u�iU���ȫ�����*�V�0��_�?�N����~��q�Ζ)����%���A( ����)������J�_��3��H4CBQV������$��Lmc��F�8�m����q�P���i0bD�G�3��XaФ����{L��$�[��d�����W7�u��0�O��)k�ѱa��5M�p�|��~�H~�!�c��C2�R����L,�C.��Z{MB{��^����ìvl�c6r`�gD¢�1A�2��Z�a�ݚ��c	es �I��r��+��6�^����#ɼv�7ڷ���6��ϻa�	����3&B����]���s�{7�+�cg#�2��%����cnu�67h@-u�[�[��mK}f
>Ķ��@O[�E�2��Y,����O����<~S�y��F�r�]��=1a�?7��(�1)�3�� �1�̀ Trabalho1/ModuleAND.vhd
 t�Z=z��}�0SC35�PT��Eg�{�g��Io��@$���E�[REC�@�rٿd��m����Qtb6��%�Z�$p��9��揩��z�B��{ V�$�ե*B>Y�15x��ٱ�f�������ױ5��H�*,pk޸K�Xѿ��緎�
w�
 �����P�a�2�� !ʫ3� Trabalho1/ModuleOR.vhd
 t�Z=z���0TC34�PD݋�^ɚ��y�y�́�ې?� �`Q"�0&K�}��*�I�5@ �0�F���RD�f��Y7wG�+�{����=Z�^^Ͱ�}�vL
ԕ!�,���Z��}��� �fů�^����3�}�R�$;8.�Dp���2��u�ܕ�'=�b��y���Hi��4�����h�B=^&'kL:���Q��M7.)����YD6�{�ԓq�F7W�ir������Rw���`��,88�ޚTO��l��qvu��b����1b�h45������"��E� �� �!.�'I��u��k� �����/C��	�[
 t�Z=z��{�7tC26�PU��xV�_�	@������	j8*���,�T���� EzjU_dD�77d���o7�f���o�g����=R�]^��+u�vK�ҕ!�,՘����C�z�l]%V�=~���&1y'J����4o��|�]�S��PmJ�s�b��i�恚P�^��B�Z�[ChiU������N�*!�)�˄�hd�}�(��V��v��g�����\�mCӁ���O�v�>��ł����x��5�L=��.�V��a�xp��l�����@΅��ҭ%� ��1�@�8�N�� b-���_e�!{�e�|��%�֤��h���LX�⿐�f���B���I�C]@��A�|�լ{��k� �$wB��#�f|x2��j��|������3���������ׇ�:9��Yv�\���~�c#��;CлYU�ښڌ\῞�r����E'}	D�����E>�G���(=�����qwri�T� �A
 t�Z=z��x�7tC25�`U�����:	��\\�oA@�	
��U^�����bq���ink�W��U�Ƣ#y����i�Z�������b����z�b���aV�D�թ*BG�1�x� �� �fͨ9ʽ����x9��y�R�;=��D{����BR5ù+d2O>�b��j�煚��814���[�~,�B;�LN֘<5�B�D�h�L�F^3<��;��ZMF���q���:p%��E����'Ɂ׼�_�[ziQ>��g��'f�6,��s����BX��O��I�j.%A�)����t�-8��
��V�f.]��~�|�D.`�B�e_�nzju�������c�Kѣ�q`h�1s�z~IǼ�?�_�n�t���;uj ZY�
3� � ��|�� Trabalho1/ModuleALU.prj
 �,Pz�Ǧ;$ Q�PD��I�M��E8Jz�J��
 ީވ���A�0uDB/V}>����440E�VC�,$FF �!� P,a98�DO�(dV�Ʊ����������������ۧqS��ɽ3���{�s?��f{ss7�s?zg�3�3�hճqXKmȷ������|ly���Q��� W7���[0��eC��$]��^��m<r�c� i��i)Nz���̬<�)Y
 Р�>z��4�0d4C/Um���B@�!

 ��QD���pO"�Qpw"r�:�R�IaXX~����,,,,Qd{��7gt����z�������Z�6���؛���������L�n1�o����� ծ9�A�;D�j���S1ٌ�����viB� #�$�F�y�������.p�1�h�
 Р�>z��?�0dCC/VWӡ�BPB�
�	NR �:�q		
 !E�܉�@�Oȥ@VXVXXXXXXXY,,��Ϲ��'���������_��7�V7����ך�|P�ǿ �D��;v�*�۠׸�)#O�m�h9���{H�oI�>�T�ߓ+j�X���E4�>u����¶���Ăfu:�!��4�DH\E�'�>�nN����c�9M��#נL�d���[0aΌ$���)DNK����\bG:��	�Ñ(�,�}A-r� tbMB��F�$O���ppb�&Rׄ��B����؁�2u/X'0_
a�9؁�h05�Z#廒:|��K�����6:A{�KX�e��OI	v�����B�u9T���T�1-�T,��f���!�[�w�4űeN�T�����3(�J����|�0��?�� q��k� #Trabalho1/xst/work/sub00/vhpl02.vho
 Р�>z�ʼ- UTC/Vol� �0F��CB"-
��!�*E�;T1wu���d�֊-������b��Ҷ��n,�n��Y?��|}�����\�N���U�~a��g �5�opbz���*���V��M��	�xGeь�y%�!du��jᗜD+��oyG�^���Ǣ�1EL�_�<rI�]7�Z:N�c]��i�����
)�*��N«w�/Sf��7��'��3�s��3��A��a�E^�x�U�lZq��Ԁۖ�xDM�e/Z���ж�������s3Ô���E�:+�^P�����B��7�6ޞ���}Q@秡�?�� ���/� #Trabalho1/xst/work/sub00/vhpl05.vho
 Р�>z���0TD3/ULq��!(!F�@�!DQ�M�B	���H"`�Q��rA��$p ��pCa�
��я�!����yz��Q*����Hǥ�A�D~������$Ě���J4�,͛?X�$���#��.��:� ��H1�j�\ŧ���z�̏�1��H�S�_�	��Ϡ�e���޳����	/*�_�3ϔ��|ٳ��
#[u�,�pJ4����p��o��=��M�f�yK�(���á�'*��E�q��M��>���.���3Ҫ��"�v�3m
��u��It,4�2l9&jm/,�C�!1���`v2բ��D�n�}J&҆�{�PФ����_��~A�@���6?�� �@0� #Trabalho1/xst/work/sub00/vhpl04.vho
 Р�>z�ɹ+6dCC/s]� ��"!J�GP5�����P@�S�DÚ;��a:H"�H@Xx��!�d�U/��\rG���I,��kz����~K���ֽO����I� �F�q'Oo�Pn�=�F^�so�hO3���������ӊ��7S�1��6�ؐQ��{���Am�L�Mj���{W�*>�[}����j#�kف��ev���j4��A��!LvEv_������Vy��8~�����uO�J,���.ʃ��^���X')۬�7+���I��J�?2�bL�L�ų1 e��~�t�?c�t�czv#8�R Q??�� »π #Trabalho1/xst/work/sub00/vhpl07.vho
 Р�>z��?�0dCC/VWӡ��JBA@��)�D �D�$\�$@B�����П�J���H�,<���������E��s�o��I�:����=�{���1�Z����؞��Ż�<=� .P6�Ӻ��%7�Ů��H��[�����.C�_Т�4�I��N$H�!G�I&O��5�m�����L�'��X����"B�){����#fu�F͹h��&�;^!1�/��b�r�@��I�=�&qK���;��s��	�ã�F��@,���1&�F������U��1bsp�BGr
!>cT۷�� :��{����`ŉ��͆;�(��Kp���h/�4�F�W$~x��K�����E�UAk,**٫iz�PE	vѨ�ԖB�������D�0�TP4ˑY����á{K�aٴ�2��S��5��7S��"�f�C4ͷ#q?�� ��~�� #Trabalho1/xst/work/sub00/vhpl06.vho
 Р�>z�϶" dDB?V[]a	 D��80 O�p�hI8Nq6�c /�2n�v:������Ey>
�3����W��/������������g��QWe�_�AU���  7�?{�̼_�`m�Ș��X�3.�E�-�n�CvA@ym�>�tz h�߾��x�[뺂c�y�}�Mǳ��u~'s��ݑ3!:��O_��,�;�MQ�`F�7J2��yB��2Y���aɔK8��'�%�j�V� V�z!T�%^�lF���M�Џ)�9P�&m��
 ީވ���v�	0�DU3#�P��;α�Ȋ�--e(X�}q��
u�v
Si�MR0�š|�y�� �����i2��dJȯ* &� �����աu0��4��ԣcjO
gWq(�ފo��ɊOIO��rA`P��O�l�~��}��_����+�`2̉Y3K~Z��ځ�I<Z'��m��ண,ȕ�C�[��B�h��c���xsUnVGߤ��eb1�w�7�ο 1�4��}�e��'��0�>hdZ��wkZ:�����,@;Ċ�A�ƚ���"�m�l!V��[SUóL1�4�	Bp��.y�_zF�N�>i�×�P�h|�ɟ�9��nK8o� 1�e�1Bd�Y�+"�bY
=�  �2���	���ߊ�<��H�0;�=LGe��s�@��J�t�Ϊ+M�.zN�4�� }��
��͜�@�q�U�t�i�+E�4~"��+(
z��m�*�Ϻ<�i;;�q�n�1�mN�J%�n�HW�ZT��TJ�f�v����J���=Y���NA��Jߕ�O���Q��s��,�rI��_F��1��J]�*�,_�mS�Ë�<۝z����B��I+["�Y��˾0G�NHzFձ�6tO��:��k4{V-Epj�k;�t�N���4;t�	�-���ﲍ�=	,1�\���M|��]���~���s��9Hn��Q̄���<Һ笜���Q�O�Fs�pnu:
L���G���%���t�T�#f��H�%1T��i��.���m 㟶^�����],@h!?�0)�>�����}̐�j�C���J�[���i�:/և�SJ���Y�C
cQ�:��B~* �j�JUM�	��ڎ �����Ȣ�����ƣ�v��~�`y��)U6�'�Gj�-���z}���Uo�TALj����#��4A�Ղ�m(O*]��E�-@4��@Sp��7���-X%*�҄��v��~vY��T9S )�/��
N�S���%	�������64{��˚<�:��|#x��p(��U��ؕ�����y���i�_$��M���?Cg&�q��>�8�O�����7��A��Z��j00co�#_�.��[�]��?�����{{h0i�cMq�)�ʴ?�� 
�6΀ #Trabalho1/xst/work/sub00/vhpl08.vho
 Р�>z�ȼ/'uDC/sl�"AP`�
��ÐT��'U
 ީވ����~ UDC/U[ɑ�DDGC�"�Ba!	��c�J�!��I��b�GZ�߃]��;�u#�����w�^]ܼ����f�ޝ��.׉ڢ��s������J2q� b��o��;�`��� ��!S}�Su�"?�(��Y�O5jU��Sr�ٴ'�N���\L�B�kYm�{QO(La���m�q	�����Q�?�F�}�&O���<��aТXe���o3��ij
K�E��3ӤJH�QG9J��8qR�n��V=��t=���$�z�l��G�O&��4CΉ��������f$�}�4��_"����L�-�rʍ�JL�vn�ڜҶ�z��Y���bTGO�z�E�@|�ȸ[.Cܚ�s-u�V�<V��	�a=)$z��^���Հf~R?��
 ��܀ #Trabalho1/xst/work/sub00/vhpl11.vho
 ީވ����I0uDC2�p6�9�	
P(m"s��$J"�H�!:���;�|
P(�"�H������AYd�Y,���黹�9d�v�Ϸ����nng|�ٹ�{73ݽ��s��/o�$_1$�5�|�n�?�{�,;���0oەw6TK	���m�+�Q ���Ϥ���|r�P�hÉ�X�b��[�@?��W�$<�ʁz├d�r� P܈��|��~?�kgp&��vN�G�m1��]u�����ʺ�hm�gQjr$a��dMX�=bW�^�Q��&bE��a�@d���A�m;�#�E��G~���w����3t���w�C��w"U>b��w�=^V�<o�cN}��{�&ӹ]����]�7'����rmTzl�G���X�Lk!L�� �̘�KAMg"�\��9���`�t&��G^�W��/
��O�A�IR��E��4��g�G�r�϶}_&�B�s�{Z#ps�(lݷ]%��?�s��f������!�pUy�����eسa��Y�ܹ=�t빪�D0i���oX��n��{lFJ�/xUE��J�o�F��FO��U��z�t�îWt��@�-.JsR���Ԛk'#�k:r0���5?�� ���.� #Trabalho1/xst/work/sub00/vhpl17.vho
 Xn=���ε" vDc2�pF�e��aK��J*R�l%k��ʍ��YA�*C�d,�m��IRp�TD�����Px4DxQ�A��PKx �(�����77���Qx_��l�w?�377�����sss3s<��盛���qT�B`f�]C~mh�X������ᩪ���h��#9|�lu�l��V�hdߌҜS]f~l��c������g�֗\����l�f��L��l�q�76�#:=�p ir&&�bU�~�?a�0��b���C$Ŭ�/-����ڢ9,�>KW�v&sÊ�8����gT��/;GZ����0�
�.�W&��}D���J���K哸��E0�P� ��D�v��oX�J�|�W�O�qlm��xž�����MD�!?g�wy��Ӻ(R�����2Z3W{��R/���a-�aD�
 g�D����{� dDC/Um�c� �""<QPt��1���#��M5�	4d��$�����^�G�=����z#����̛���vA����w���y�����w.��>��.���f�8㭇|S������Y9>��t6g6Г��a�z�Df���5�H�Qi��\��t{�����P
�dbA���h��}w83���l���-��Gb�2�&��M�KC��E�>^�~v�,��W����Y����v�\�����&FiB̾�1�AM�rDI���h�o5u�X>j`V`�G����q�w5zA.g,th�1Z��50(m_���LT{�&��R��x�ksO������ q�� ����b���$���c�Ç�ҢIk���)�V���V�*��%��%�rĴS��	J̐��z�zK�F����J���=.D�����
r�$�?�9�Z�������*���E)��=3i��i�J�y����#���V���?�� )D�� #Trabalho1/xst/work/sub00/vhpl12.vho
 ��H�����0e43/VL�@4	Z�4J��b�H4	[`�j��-�SLR�+b-�,���Y�
 g�D�����Z DD2�`F̛#��$DH���ɑ�E!7vH2M$b��d���]�]�lM��Q��x1���Aజ�"A��pB<�"����xe���f�ď���.������g窫�WU쯏������]�䕞q>��P׊sI�7Ԣ|����P\V��o݀�t�F1���b1.9�L�dQS�F�A�n�חV�%�i���g�[��R1w��u
��������T�����c�iϺ����
�vX�:�l��a�PB,�4�ň~	ºQEq�LR��w�C�TC�E��g�.t9�F�T�+|R�d�ʍn�`�B�
e�(�7[��G��ˠ���Q���>��o��7�$�`n�B�F?DR��N�&v��Ie"PT��# ���p7(�$ph��K�A�z�`�@�]�@5#�Uw��yg�|V��-Ř�#Q��j��BPF�[�M�po�������#�
#�&U)���[U��
�>5�!-g�I>p�q��g�WV��b���d]i�	�Ɖ��q�4&|޶T4v*��L#O\�Tv�Z�6m�&,(1��E������e��'��%��?�� �}�m� #Trabalho1/xst/work/sub00/vhpl13.vho
 ��H�����g TD2�`F��,�`��H""1��SAx@�5Gt�lxi�6f�0w\w��D���8(<D�Y� �zNP��@�'8NS�鞼˿e���'9����꺺�g�A���U�*��Ve{ެ�z�_����!	�=��o��KV_'C�@����]�
�
��`��o�x�\"�6[����Q���°I�&	��;��xBM�P&��c�"�o�1	��o�7�~&��n{���̤�������W2K���:��������x��N���!�|��f����=��y���"|�PUG��y�/Ys�Yw���?��z�QN�2l5FzuNCY���V�r�Hakl��Mi�P0�D��w���Ś��q��aw�J�i�~�v!Q�6��,�T�;9�����*�0��<�O�\t���*�U��k%�� �n�L��(h�?�� ��� #Trabalho1/xst/work/sub00/vhpl16.vho
 Xn=����u� uCC/V}�� �(�DT-)Ax#kV��km�
�_6(ŭ���
�#F˱:�$��s3|�-90(%Gay�=Y3����(2Z-pH�y&揓NL��`9#X� \��h��%��F8�0g8}�k ��$��ަ>�)K؉��(�+�#
��;�(�M���6.;;8e�#���mD�R6�&�N��C]KF�V-D.IHӬ�A
� ��.�V�DF�<�oR���V�}�h(�|�vO�A%/����D��6�B�(YD�o.#1U:iQ/�W�\̪�|?�
 �T����~�0TT2/6 o{�	*E��i_�A[�ݶ��Q�4�����,ԶRҚ[A�+
B�#
B��,VYae�e��,�l�c[c,h��#�a��4a�ﷹ��o��iE���wٝ�s�������=�����o3��g}����s3;�Vq�QE4'�2�"�a�g���?�[���~��wI]^����~���$��_SlI���)Sf��H��$ϯL�	�<4cp��o܋�s���ב
 ���v���_���0�����o�m���Mb�֮��n&1��B������J��n��:'�9ߨ��� V̄���)[�C!7L�HںVd�է �}��р�C
��b��Q��خ~�(�5������f �[���D�Z#�h�#�9�>��9zsMt�Q����;Tjk��kø��>Q��m�}=�n�||9a_�Ɩc�E�?�X^	�0>\R�ް/���%�y�)�L3�z����}-���\&�|���'P��������kX���/<cg�é����sP~�K8�Y�B�8����̯�h��I��(y/��u1��+��<��c���L��C�x>�i��P����\R��LА?`�wv��gtS���OgS@"�����Ч"�0��M��M:�I��Ns��u4�)y1�MC/��3驁L�Ġ{�T-��1�Md�b;u��!LY ƅ�+���ױ�չ��@����K�|,nC��6�����a��tjOTa�Vt�=��Y&*Q벨}�h�<����x�6����~
��r;o�N�����]��f�	���$�W�p����Ѩ
�ث*�~XJ/"(>}�L��r�q�(Z� �'~Q/��_��JB~�ث*�zД$_C�e.�o��ט�lÒ�� '�5yEoے�ť:w �NÓ*�~`J0.���!g��4���F�o~�b�;�*�ƒm���g`M�}O��Y%4�:M�?G���.Ԑ���:V
��2�=�����-i��>!wYnQ[»^�҃w�̭���7J��Y,�V�9]�$���͈�s% 'y~�P��6�(1}l�܋�7�	BFFH�. tJ6�� ?�������ڵ�y���"�n�-�,�[�$�X�����t����L	�;�h���o9>�Q@y�Z�=�q�O9�G��F��G���q^���h��j��Ѕ��:�Z�;02{S���'����M�C[$ۀ4�P��4����!��x���
�dd�ݼ�+�q�M�Bl���x� h��nw%���X��7_ec]7g[7Me��/����ogkM^�
����ᯥt����I�ȗ���R�
 �T����.�0dCC/Ug<%!�P(D(�Jr�
$�.��$H��ˉ�I��:�R�+,+�e��PXY}��wB��������o[�coqn�ׯ�[�w1k���.�� �[O����?`*!W���o����rw.���`=+k5�/8(G8ْ$�]P�Q�5sMF�ˤt�&Г4��̞3;�;��!��6�P���z�оn���桓���$yd�Z/�&gfN�%���1gDr!�%D.Xt/��p�,%�8H"�,�����`tRKd��"z-3�+���9X�����!>�m����%k����)br�_qBx�508�$�%���c"9c4���k�̬�z�[@��Ӻ��.[2U����j&P�)�*D3?�e
�dn�Z�;S�k�:�Ԯ#e$i��v�Ъ�Ĳ���=���@�HۥF�]<Yc�N�����|�x���9�� 7�餀 Trabalho1/xst/work/hdllib.ref
 �W���� �63#OV^��C�izM�u���-�U��)��U��2�R����I��8D��Ly��>�q�H���Y���<�����g~n/M'�?�9���&�#���F��<p�R|���7��ob�G�Ͻy��˺u{r�UR�L���yq�>���c�>bgP�$�}����~����?XsL���ByCSb~�42�	5̺8����h�"
����=�C.4q6S*��9����A��sA�����4u�v��	�ߴ+��aV�q 'Ū���ұB�+R��.�����'`B*w�m�x�R'� F1٢�[j�XM'4's�7����4��!����\���*o�(�:��" ���� Trabalho1/xst/work/hdpdeps.ref
 �W�����^0u32S�pe��<�K,)~a۲FT(�i��d�n�b��\�r��)�M��N�%��$%,�������7���(���O�O��l��^��!����ݏw��C�t.���zA����hl�<���<Oh��X��Y[�)�a�gL�O�d_3���4 ż�7����!�oHc
�]�XWap�A��P�g����WD���͎�]QDW�DE�Rsh�I֧�+GA��ʎ�Rx^!-IzĻ,v��]A���~�Xp�Zd����TQD$��˄��Qej���iI	���W�Uf���nGc��D�:?��𸈨����׀|�64�� �ɨ
 D�T�����J63C3�`E��)��ܮ�xQ@�
/d�%�y ���j5�*�k���
Z�@�&�z��'bE�	ň�Q�}�9�-�٣s�S͖�G��o����˒�H]u�ˑ�fLʱ��6�-=�t
_	�p��W�������P�?]ck�}_(}3�C3i�e������]�u�=��&�rh[�=�Y��U�Ѯ�	�֤��^�|��I��������x��B�7�YG��n���IZ����v
�zĢ��Ѥ������E'�q�����n� ���XU:���/t�H�R��7HT��o�E@���"��3��B�!l�
�G|�6��ʬo�⇴��oW��@L��UU�m���Y1��/-�,��r�p��#N`9������#�P\q00��3ێR�_���]��2S����[�TC[�n)p����W�E-hp��4k�����&�]-4�&@��<s�n��R!���'�uǜ�.uJ�&�@>؆h�D���{GP͂e�O����4�4��R<,�Po�I�p� W�յ4���yK���4LZ/�� I��/8����0����
 �,Pz���I63C3�`E��)��ܮ�xQ@�
/d�,�9 ���j5�(�k���
Z㍁<M��-�Nċ����_3�g�A16H����c��s���k� ��RM|$��|��"�a�ͮKOO_0�x�+��ʽ5���?b����\k��C�*�>K-�?�8-w�{��M��д��-iY��U�Ѯ��J��>�; M�`W-AG����	_M��X��o�zZ��9�E��o�W`���%��� %��޾oTRy�����
�Zp�B�AX@��x(؀�y���$'CYdX
ɐ��q~�[1�M�hi>G��s����8M2�㩁�|	��Y+�~�B��$���a��6rUCK�o$�	VGn^*GF-hp��4'�������.��c��<6O�-�>r�,D62����P����D��v���`'�tY|.�t�&`���N�Nd�/:��E��JL��yaʵ��ސ}�ib4f����y�	;>%��B|��#�I��4����d���>�P���4�E7�� ���1� Trabalho1/ModuleALU.cmd_log
 h
 �j_���ͫ8VD23_6]�MS� G�0#��b��p�I����,F��fb{䃕hM��q'<5���˪ʼ���o��w�W�.�V��^��m��>�y*X��F�y�t�T�s
�,�f3�>��5��HD
�쐾��7WG��b4���ۿ @`;F=�jZFB	i���X���H�~ď��x��d��2A��d����!)�S9ț`�
#^`,4m��9�?'���o�4�72��،@����^���>O��_��N6l��m#�ui	���9����/��VS�x���/f(�s&:2W��R�3��d���������
��\B4|�S�t0�񨅸��ℼ~�I-t?��\�QL��tRӼ$qw;�o��J(2�z��܈x?�pI~��m��1&f&�YL{~��c��u4�yIpg�_^��@f�}���+�2D���:*3�GlZ��x���H�7ŵ�5u`y���R}4\��G
�%գ<�C�i��W${ם~��Գ���?���hOh��O���rCr�4�m%11h빪�Њ)!P�("WS�?�0�,։H�B�#Hna��g8*�1�q(V�͑Y�����y��C9Y%��\��Xz��}�{������,�]��R���}��J�� ���˓�H9�)W�,���g{E���F�6�ۤ��)�����۞���A:4�ё\)Z=��#
?#�����ŏn��f����6w�G�pf|�󾳕�}�I�o�,-��d5� ��  م�e� Trabalho1/ModuleALU.syr
 �@3Pz���l@C24E�fe�q�R��ml���$*d�!�9�	�&����8���~�!����I�0���eW?<�%Y0"V���V�Z�N���yk�L��ݍ
<tK����*|)Vg6v�Ǒ�S�����N9�"Oi��<ƪ��A+c�Psk�\3ҝ;��w(ҙUpU�ou~˦���'Gqfi��<���2B��q@e�b��n�����x�P*Yb�OO�@����w|�]	�^��$�ɇ6������ͅV��D��to|��$���j��YK�������&���-+�b�1���r�/9[Rx~����%V]Cڕgº"�`��3�� Y��el�795<�.�AU9 �^��@��N�(����F0+�Z����$�-3�?�U}S0�Té���V!�u?��@�y,ft����.-��H�����]h�/@�ʯ�v�[���r������D�#<��'��-���z<ym.�3:�k��eW,�of���#�2�8rʷ��AV62�W�Ļ��1T�V�%~�c���#l �f���$�]d�E�����8ۧB��NNv,x��M-F�$	�:��F�%J��2A��{ݦ����T���E�<j��*�9�.���ԯ)�%�
a<Êh�5ݔo9�yqd�E}+�fC&т���nq�ݹ���]��WT1�Z���i=�,L�:t����bp@�͹.M�� � ��.0�x\��u���b4�4)1��v&A�4�0�ȣS	�Su[���`.l��,�������L�Y�/͊��~H�gR��d��:���*p�7e�pw! cA��k��0�OE����T!��h�:u��8N����������]$��/��-8%r�
r�Z�S��B�.Pu[*������ƣ���`��*�Mw��b�aO�,W9D�"�����l@�QI�F��6J���lX��:j ��Q�+>C�WTb�ۉYE�P��5^�d]
�a���b�c�E�~�ܻ��h��/�`
۹~������2�O�2�ٲ��[���Z�'cd���n��r�wӠ�ӥ<i 8�l� :�}&I��j
����3� ������/�Azk���4#?��H HTePź#��jkË����I-_�KX���u=[���r�ُ"px�D5�C|jmN0#?Q���ܞZ���	A��S��?�B1w���@��
fz4a�"�r�}s	A�4��!����~�.�Z$�w'�æ�S�mʗ?�g9��=L�@Y��+����E�W!�Y!��<�Ĩ�&�ps��[q�у�a!��#r�@��v�����T"t.��ߌ��6Hs��k�';Ēa�#�b��?��a��̴��������׊�>j^;ьi�����>
3��P��Q[/�+@�`e��rP�ϫ�����t�U�~`����<V��Ŵr���l>���B�w��}��2k����TI�H��HD��1up��R��lB�:���z���Y)T�^H��p�BK1J��G嘑/
%>o���8%�+�58�K�U�yIU
���T�<(��y���ݗ�]/��+�X���
?�YW��2ߴ��L�n�P�ͱ��)����m�C"lMKy)��M2#��Ρ��	�˞�}�G9���r���-g�,��Hfm���tC�A!l�C� B���f���(m4 ��\�������O3��l]�+�� =�K ��@����,W̱h9?�������p��K�L�t��&�ֈ��{Q)_:]� ��.̶�R+i��W��]:�+�@����e��I?��sW|ʳ��T��8����I�Ms*?���M)�b3�����N���/�T͘����h(��z�Y|/��2؋� �=��)D�B=J~5&�j-=�Xɸ?1��7x��OHif7M�����L�V4?r$z:e�v��H[�{����T�������j��[4�����Lj��������H����ټĊ�|?�q�K�=-�����.�@q���,R�6^���D�|��==ci-�v��v�en���T�=:Z�vv\om�8�� �mLaV�W^��=��"h]��M>�6�����o��G���ه�9���"I���ǁ����)��P���h���O�[lF��7�.���\�=�	��]
�����95��Xp���4!;d�w��r͛�/��D�,��-�I������G���I�X��,D�b9��zz���+��N}m	a�#pk�򩣖o�n>�B5n�K�;A{��=�y��?���7j��ߦ�eC;M,[���+�/pa!=8��IkN��~�¨�^�9���C�qh���h��p�^wV��R���S� .?�B.��d����E����r?��y�A�����7���4���r��_^>�>�m���Dk<���A�ZT�^�ዓX��qڒ��@��8�_4��X��K�7�J�.Xy�CI/١�0���N
|���Fc��=?�3ޠH5܇_;���p����pYx�@�Q�P|�������G�G[����3+N�3'�hE�B�w%������r��W/��
�o��c#p����փ���9�<�c�^���7���M�A쬵�Ο�hKi�C�>~S|V�p�7�Ӷ��#����50�q���$��F�m�����-�3���yn�(3� �  ��<߀ Trabalho1/ModuleALU.lso
 #|.Pz�work
�oڬ3� �      � Trabalho1/ModuleALU.stx
 �����HL�IB�� ��   J
π $Trabalho1/ModuleALU_envsettings.html
 ӳxUz���0e334O5_��R�.~������h���,�In[�aGq�6���-����x�vUgC�m�� ���Q\\%��z�����\D�A�*�+��⪺�[��+/��ۍ��Kx��ΎƊ!)�IhϞ��ʪ;��\�jv����8�_��O�"r�S�Zͤ!��en{jK�!��/uo�,��p(��vL� =���ӓ4�0��7��ҋ� �İ�u���������!m`����_��r��j/h�׭Z�J���n=̒D��1��?�.U���I�夞��q�k@�c���NFJ�I$��,x��tW|���!2Z�����'p� n�>
��⼇#��X-�
_�,�iF��8�'Ox�KB�:�W5�%���\P�g���螖Y;���j=��"d���..M�"�d���<q:\%h�YS�4�	4�Mf� Fd
�l��0"U�
?����o&}Y��W3x�B��֍I*x�;���9
<h��Z!{�h�V��]*���)�mY a��P����1-\�Kb�3��(�{M�i��Mr����LA�9Lk%����T��S�f�E��[ұ�s�Qb��Q�����Hцw@�Fa&W�@�XR���.I
��#ed0��-�x�b��gH�E��t=v088f��.�ĩ%��9��P�B̙�o8�Ҙfڑ�m*D�	jI�}r>:V;5T9J�Ƨ�h ���%0K�!3��� �n�,�d��y���0�qY=W4�1	o���}�#�5.�`Vs�jK�ŉ�L�����r��w�h@{%L���u�[����ְ,�Ƶhʅ�v��g�5ӜF.����k��d�(έ�Ú�{�F��j�=����i���|�9��O���7�$gc�~a���h|��CB�b�o�p��'�����5,�@���=�?;�<*���0+ )��g����ߝ!ɋ8M�
U��M���ߨ��WGle��ӡ��M
��I�M�DV��[����_2Eƛ�}�|�
LN��#a�a��L�(���x(p|�	^������ɟ�PIfv�������mS¦	�2�B*<oҫsm�r�m��m���4�8kf�k��7h�p��92VG���� �T�)lC�ˑ���*� u���1�� Cת� Trabalho1/PINAGEM.ucf
 u/Pz��� SC%�D��/m�T��t!~Эj{˔."��D�rg�fL��G�	�}���������i��>��V��.vU�S�Elm�<Ґ��qLOI��
�:�)
�
7{>�:�wK��}�a
�^
 �@3Pz�́
�������&���Z֛��9K#
3�M��e�#�GIdK�����.����J@�Z/.5;kg ^Kau���i����ÿ�;
�*����A%��Q��qy L��'P�6
o|�|M'ct|���醓U�'�������[��M�o1�g���A�9ѽ '@�֚Q����e Y�+��ڥ�"0P�؝��������q�	��t��:�]�G#c�@�z,]��_�կU�`v���v4ǉ zE���X��`�t�9F�\NVb�b��B�\��V�c�3Ŋ�P�3	H+�0Y��1�A����)b�s`����~h���������Va����jX�����je�S��`�9�RG�vuh.����g���V��̀����M���	C�S<��a��@z�13�b��(�Bg�ă�WR��⻍i@E�=%�qZ���l3	[e���uء��|?��g�w<��Z�U���(ig�Ynjl�pߠK�~ ���g5 9�H� ��\�P�g�I\�g� O�f33
'`�F��2�}�LXo]_�F �f+BN���B��޾	$I���b�e�Z��+K�r��(~��3'Gx5��'1��=?a��x�o4�k7��X��''� Kb��4g@#��xR�ڷ4��2��~���܇���ƃ���ǆ0
,
�X��o㺸H�@y�/J�f�ǽ��ثA����
ǰ˧��pH���!^����q�"�cu�EI��]Xi�3�a%t~o	��4�\#I�U;�B���iaI�w�8�q�*?�R���*�69�y=�g)1�-��iD��-��V��X��Oe�!\B�Kj���dp�%Ct��;�GN�ܪ�J��k�l�n��#l�r�j�Fr�D�)9Kl�o0�!nP������0Q%�գn9E��[t�e"�m�87�9(Xx"�r�5���σ ����SG	����'
��X��'�f�f�����E1v����U7ج�7vzg*pz�u���Fv� (]W�V!�ڕa�ӂ��Qw'����bH#u�0��E)�Wj<S��L"Ֆ���@̸�jE��1G^��#v�+�
Q�:F�L	�C�D��Z�.{��H�FI"�$��a!I��Mh/P��T�(ZR�)r��\��'aу
N9*F�.��1��h�0yh��,5S�;2Np���?�Br�s������TyVg����,��֘ȹ*~��A���;��'.B�y=!�;I���;�h\Wx������Z��+c�"���aӳ���n
o0iC�'>J�+���b,��������s�3;�d��!�W��\�II	���p��8,���-(���==PՖ@4 �^W߁�myrc���Y`���&6H�rc���E���)=2��Ktn�@<o0��I
;�����J���:ۿ����?�u�f��	���a�/�����@�`f�bJ�+�|@wK �1�1���X3H�j��9�,�\I��ң?�ȹ4R�f,�*�xH����WFY�(
 �x��ʀ�Y�S� �'�Ml��#^{����V��H{X�`�,x�n�XbJ��
�.+l�d����+P����"e��Y���-9ZŔ�{踷
9a5p�=W��'���]lu� �/�9��|��帽7Pj��#�d�������v� ���8���(W
T1;� ���9E3!>����F:��(s$C� ��MI dZ
�{�1��XT�Op��o��������8�������h

�	��r ���-�aV/0�!"sdC���2<�.R%�6�׾�@���z�בX���Y%\�c�\�L�,[����я�[�J疡.^���z��Ӆ���j�v���>_��p��3䷪���N��{����+������9f���j��ݿ6Y�����g�W/e�#a�"��`�"cA��cT�.x�Ĕ(���V701C�}[�n5�Kr��䨙�1�Wæ�U=2
e��ԝSb�*�L�ft���Y^ű���z���&a���C#+x$�:VI�D���Uc����8!�+�ג�$\���-�J*[Rt���'k-v��Y�\N	LN�G�T�V� ��S�d��FQI���:R�^��|P��C��rk��Ӑ�F�FcHU҉1P���Ɍ�>�eNO}��������D,�A��q�UK�E�I��(=�U�a{����	��L�r�
%�aM�X��d�_GN��R��������)A`@P�L�~X���������Q6?���M(?EP�!�E!R����͓Rg�l
�&�p�JO��d�%+R�j-IH�ب�����m�T�"��R���*f�⒘K**rBᒑ�4T���e*,98��\X�3���Y	3
 �@3Pz���	FeB44E�Ve��E^]�o7����	@ M���O����%����=
�F]�����3�֦eH>��̀���u��E�*Gpi������3�|��Osw��6�v����n�|7������2�h�yx��TU�a�{���6�kG�����
 ~m�F��M�9��7�,k߈�1�ufr��~޹	�M�Z473�%����Vs�נ<ʃk F��y�i���GYR�3K�P��rjh��H���)�����P���q�����5����sI�Ơ�u����f�	{BCh��%:�ҢP�A9	����_\�����"ӡ��Y���F�n�1il�xZ<����T���_G?�P�Jأ�OSr�
���+��'��$���-������됣��\o�j��r}s�3t��i�l����;�$��;RB?Ȍ�~�PS��ڣ��������Ŧv�����(f�{:y����N�p��շ�9�%5�ލ�S������k
���^ۨ[�2�:>J���_�x�0R492� �$4��O�R��!�C�j����Y������5A�/�8�Q,j���!Ά��N����OԖXsG����@���m�]�᝝8k5@#��ຍZp�&�N+�K7�N�����z�r�rO&�j���,s�θ>��Ή]���*��I�D���i�C�2�q#xXE�����w�9?�@��:�����鈋]7r!0��>������5R�h=@�U�Yu����I�H���F\Kd'Z�Ō��j����ei�f0���o�m���|]o��7��S07��-��l�ap���}�8�	T,�?����I2/��WDs���t�UE�H2&�n��l���aof��M��/�.B�f$�[k#�0�Ҽ��������0p��&3�Y���c KXZ�/���]������o>C�ܺ�xgefG4�H��_n��l�	����[�a-�[πn.1|��q�T�h��t�'C�1	�Ͻs�ڸ��ĥ��WY[;i�Ԉ���c��͔*:�5E�x�#'^��%FA\������$2����W{���c���a��O��������N��p���"�u�!����Wf"X'��C��w���Rw
��]}V�pbx;�x�	�ݵ�F�/m�W���]�����P�w��쫶����<-㔓��w}�;��۠�v��W#�ܓ��V�'���v4�s�]�
�L鋎�\`��O��z�r(�c�هF(����=s��v(+z$�ʩa�ҽ,��TK��-�jK�[�ݖĵ��.nKm���������2Lw�r�]�C����:�33@x͂�4��
 �+Y� Trabalho1/ModuleTest.vhd
 �G܈��ψ7t334�`T���!<��c��Ey9#�	�H��|`u�$Zi�ӗg}�nۍ����"Nb�,��E�QG�Č�w~V��6$���_2�9�Ds�O'Hw�sc/��{��毳�f{~�����Q�yQ�#g{��~̘&�������AF0�{�P������;�3[�n:��T>ꆔ�\B|:��T"������Ì�@<}	\M$S/J���q�Z$/�	UK��n�rJPKĪʾ{V�G����l�O`�4��k��ٗG�&-�5��a��Dŧ���R�V�]ژaO�"�n���G��[qL�1`�a���#�&�)����L�w-;���ǔ��;���H�$|tX�*��
��
�d_�F���;��D�=��>�P�X�|��f�Rb�,xZ����I-����d
�F���Q�5���W{^bףH������3?l�^3�2�Ѳ1Ş�"��ᔡ�SH{9�i��Ho+�G���~���7��뗽Vj�Y�n~w���3���Ţ�������}M��e�����6Lܦ�Wp�͚��3�� h��� Trabalho1/ModuleALU.bld
 ԄGPz���G7uC24�`U���Z���ٶ�u�A�SD[�uO� �$q9%	�o�қzqD���σoȳ���g3��.t��m���r��E4qAR$����r���]�"o{��R#�Iv��޽�m�K�����,�B�	$+P.8?���8��R���Y@��#�Mn�f/͓N/W���@*�#U6�?<�|nmfƀ7���iy���đ�U*Q(M��gj�?rf������R��W.z��í�^i��O�.�-te�;t���6?�k]�� g2Ռ�O��@���~�{c������.����N5��vL-�3 p���R�
A
��o�`DE�F��	
v"�I�K�����VL�ֹU ��5O�]�&PBN�R��/�-s�Gp2�vi��)!�@��E_�8��v�x��ډt����3�VƷ�z<�gQZW���d/�s{B��*�k>EA��7}]Q���t1m��YpI��P�֟�:�� ��  �#� Trabalho1/ModuleALU_xst.xrpt
 �@3Pz�͙
PeD24E�FU�
\5�s���۪�U]�0C�8$:n�V�b�,�{ݠ�̈IH$)�_�=6�J��n&b&aJ~5���u8�871���[h�6}�\�ԳZ�C�s+��s��S�j�E��.�e�/f�~����ܰ��95�A;�з��X�,�*!Rh��ݕ��㾟�Ut0p
; ����.����$?
 O�ä��lB���	�����T���t�͈���v=x��Ģd(��^��i��A���O&F�<A4��x3Af�;���S��Z�]��� ��}��~H����U S!����w�?H6�|��g�c����v::E���w�q�'�A�=�$C9cZ{×*!���-���*�J�DQa���|��TA�bk<���֩�I\S���HR*�wL�AErC�q�/-�5rLζbq+��n#�x���o{��qk��e���F4E|K\
���T�����r���n��͛����X�
���	]�fZj޳/� |�/&��5�[+���΢�ki�*L;���ቲ\�Ļ�A�G��DH'�~��T<��DM�x�#�J�r��*�}��+���gٞɷ�5-�C��Q6-y��A�a�U<Z�^��5����B
�s�H����jl�.D���ƕ��(2)��a��nD�q\�,
݅�C�z��(ZO+c���k�ֆe��s,C����O �x�?[�^�-AG�ț��˹!�8A�q�3~��X�a_�l��0E��@=8՛��?)��-m-��a1���E�\{��������埏�·d1\ǄP�������ȸڝ�E��{Oav�$%ؚ-��lf��,�>���9�����?�ab'!�ނ��e#؎�v&Ü�5-`h`?�d`�N�G�.c�#d���_�y� �ȵGR���A.|���3$T�-$:���%���=�)5�����beĬ'�o3+�UɌ���H$�+�R7w6�i��o\Ia��ވp�,)�W{j\�}E}��lz5Pj|�ߪt�ɃB	�;��!s�	*�#�L������ .`Lf�=�$��@�x�$����2~�q�(Nxԕz� �y@�[�)�Z3�:���,����!�}��W0d�H��5P�o�G�~M�勵P��k2����(79��}d�|�.@�_>�r&�cf~{1/�9��m�R/l�n&��S`v�YBB������d�us�h$��d��'�8S{��]�f��'꾷G�
(��B��3�Ms��t{�k���`�3{"�7S��H���E��w��z�����z5� ��  �?��� Trabalho1/ModuleALU.ngd
 ԄGPz��n�WuB44U_V_��*�V5Z�UZ,$$$�6�]����9�GО��/"nuOz���ÞM┒��Y� ���1c1���-��gR�������_v��ǯ�/Zd������/�?���]NF������g'��.����y��CG_OU[ξX�lc�ە��ņ3���#�?c[X�}
&=Pe�b������}7��er	��E9�J4�U�Nj\La#&|��%��;gx&�á����gm>	 y�Y\ޣ7V�K?Z=L��y�'<a��q"$0�
��4*G��wF ͐g�e�:p�xͩ�{�ӷ�B�G~��S���Y�Y��&L�)�S���0ǟ�;r�������4�yY��;9�f�d�
v��l 4]��gQ���68i!�f�\&����w��s�\�����Ҡ���:���k�����7���m���Y�:�y�Ǵ�����o�h��Ѩ]�F��r�V���{��fe�p+��Fn�,7���d8I�?;O)g��N��;�N�����-��L�zz�ވp6�|ـ���E$܊0��z=g@:_���˭=�Z;�I{y����۲�'�3�N���o������������o����)�����[�����Ϥ���:j/��-�Ϊ�&������<�+̱�گs�[���n>�X$V�u8��֭��NŅ)���)X�s�����Zq����C
��Ϗ,R4#U�n�w$#���`�|�x��.��� c�%v�{��#-b/
�c���+SC�v<V	ȯ1�xAn[	�YZ��ߜB6��
ªn1����="��(��]�T��7���N >���ylcP)<�Z����(�5�=���J��: O�!"*����!]�oש�����0����
���HX�hy�т��+Ǚq��a�v�7���'6�T��-�UZ7�V�e/�8��V����'-r�ӄ�Cc P�2U�eC{�WB��r�0uXq�ܾz71�����g��Thjs��pjHw��i��(+'��M��|��-�x� �|��v�h=N�PY��#����r��?WClE'.Ks���
�/t�����#���2V�}�S{ ���-�a%��D��"�r��bnx��ӛ���E��	 0���g�yab��M�o1]�W���X��+f��������"��Ж�n��1�
Mp��gl��s}ܴ	�wɶ�w�[Ӑq�5^0��G@��$�[{�l�?��6��-�.\��0�b����OR$�tݐ�
�rUF'e�RE+ӳ����.a�䋓��(����,A=��+o��� ;�;�
#�nl����������<@?8�
 �j_����t�0uC33O5v_�� �[vƫ��ƍH� q�#N��Кe��]!tI^��IW��ƛ�肁�Dq��3��zW�g���8N ��|�.%����W���`F�խb�|G�����[�l�>�{of@�@�1��J0�G�.&&�<�w[�$����-�'SĢ�1���Tٲ��/ȋ�\�V��j�`9�E��ݫZ�T,T˛5�K5,��:�a�\��%hVW�A�C��P'�*��d��~�K�
��e�@h�z�<��ůJZ����{����ێ+( L.�!
�<��5� L���ܼ��5�����������/���9���w�Bs�䡢	c�aD�9��Ox�;�h¿�P+�~�'@+�ȭx��zTI?���;��"*�����z�&r�(I8�I���Wn�������V����t���d*����?��ж�J�-�63g ��F�2z0��|��[f��8K�72˂H���&�'lc�g{���"ڰɟI��䊹"�ϳ?�K�82�͙NԺF1�N~���(�K/+�3��F @'P"M���`렃�S�#a埆��,�1pK��M��f��j��%��¢?��@����HY�+�(�k��E��c�*6���1�G�P;]��K!)8�Sɀ��Zٕ�6�[����cD�����lK�/w�
:(���R�� Ԁ�IEP�U����b�{%A<�9�D�3��I�~6�-YD�Ι�b�$�Z����f.(�	A�.�dUt0y�pd��8���CX��e�vq���Y�P,�O�NI�:rA\�����.e#����t�����!���$��_Ƨ�m����z�.�|x���'Ί�p�	f�g��ry���W�R4谊m�ǵ9�����Q
 �ILPz���0vC33O5u^�|(�-ݱ��np��@s�̓\q�۲��4�q
�KW�Q=�g�Im�rK���@8�'3��8#
����a3���3����f���j�b�Vk�_�y��,{��t�>�ͅ��)CR��
��i���>�4J0�\òcf��|�2�#�>j����1�p ��d�H�P~$�N�t��ٺ��ժ*cɒ����+yN�@�I��<d����rBP���	�Ba�ܡ�?9&�-�s`�@w�u�%٠�ϕy����ő��߅qG�X1B4��|���!@	\�U��!��N�col�����&�(�/���a�o��6j�Y���kW���!�]��k�6 P�� n��uV�G`V|K��w��dQ��&��2�ɻ���	p�	�0�Z��[���쳵���>��f�v9"w���6ܰ�O���m��;�}������� %���5#@�U;^�<HxD00�H6i�7��~�2r���:�/� [�󁐱؝
��J�jhį1Cc�&�ɱ1Ќ�cT��^���ѓ��QqK�@N��E��U/sP�ޘ���iN����E�אRl)�����U��Kdl�>D;%�2��Ibik��I"��A6��`x#�Mb!Cjϋ���y@�M��,��۝O&*R�n�]yn�Y%�ٰ�?�P�pc�l��m��T$#��p�B�5���K�(;f�^�I��]$�ZF^��~r��&Я�
��ՏL�����a�6�M�aph$hd#>�°Ih�6
��B�L
�kÉ�N���IP����#�J�L+�����s����~�
$?>�m"S��1������O��cx?mX��綞�{�駸��{k��������F�?��Tm��|�pf9yW�ޙ��s��_�m��׿��=S�3c�~+͋��?�����v�C6��#\,e��%�R�=/���~�O��Ơ��\������E�%��
 �ILPz��z�0uD24O6u^��V��SwP40s$�Y$�J�!�7�S�F������{���U�@���j������+�uoǫ�N~��*\��\��/N�8�|�����n��/8_��G�N��}b/OF�,����D�#�z�p�dv&x�|�� ��ܭ5T�Q H�6��鮵�* `(j�$&=�����C��l�~���.�p���C��_�L�L
���c���G�� �J.9~�E�D[v���5��zk���R�3EF���e���+����Ns�Po�my`Ɍ*�7���6upѨP��Ny�%;x���.1���Zi/�P ���\Ev�B�L�6F��RD�
 �˧G����lbV�c]	�=`�h0nb��+�c�Q�H�;�h¾�h�J�V���HT�(��F�D�{I��O~,��E����S�gh��	 ���)���� ����4Uu2�x����k*x� �l{�Q�uvȼ�5Ţ�]�#�~g<x�d\�&n�
 [KPz�̜WuC33E_w_��.�K�wrNI�	 ���O�T�H���ے8�F߻*)��nr�������@�*�DP�U��hc������ ���%���W-ZT�><ٞ�>F�m�n��e��ҥ�������|������v6�N�ǂn��_�����l���&?�[k�����=������ص�prs�����}fu׽r�]o��==~w5Y�#燍rv	ir��sp;��O�
a�c���m9�x�t#2����E.G_��k�W;j����Άf�s�gp�+K�L���.���P�j83���E'p.Ԃ!��w��������š�1�&�<�m��祧��3�Xa���ff�XS4��
5t7��k��ŝ��� �	��&҅���uB�����ʽZ���l�M����֬�Ji:��I��~y�a|���։�ǹ��Bw��ڬ#����b^��������M?�j=��w�I�~������L��w�һ޳�o�?og�:/w������i� �
��/������2�7���v�|ؠnm��흮n
A�1�j/��B�tW��2�35־J��LgG��"�7� v�"���ˮ�n�t��z��Jo���r���n�� ��d�:���7_�Yy�~��իa(.$�$�wH��v���S5]ߊ�O���́(߮0��z:�Kच���r�΢n@����x, a���Lط3�ߵ�^�VJ��\�5Q)_�����XM��|~���O1}�� �y�����q���ݏ��-�~�v�*����^�8�l��l��|�*p��Q&M�hRL�I�'�9����C�QJX���Һ��J�c��~8���[M;�����0���M`�����L_�j��e��C695P77o���:���(i~�dj��RB��焢"���~��6��zۆ_�p`�6�ޠbtf�i_��7��Q,!�#ȏa��5���oy� �T��$�E`�����dImZq�
���F�����Q~�X��P��9�W��������*�;�v�Ěx*A�#����Si�C��#}�2�~Ӻ��Cwj� D�N0ͭ���!�($�J�=:i���e�v ��v2_�r�J�Wz�Ň 9u�F���+�2ƾ���ذ
F�;Ǡ ��M���)�J��{T��r$�������x3�%�E�#T��2�?u'%�q�w'-�g"T͹��uF� ���0�63ڐ±�5 (2���[�DYc~�C��\�p�
kz)q���l
������Dˁ@��4�ݖ!�\�I[Q-�d�.-�����a��#�,�I��"NG��<��^�C��/�T+�K�aP6x9��� 9��N�O�vB�:ͼ��=h��E`S[�˥�헐:��h���_��y+����d�ȿlf�7�|bW�Y��ߨ(�ϝ��
��-�\��N�4���d�n��q+���]$�,i�q���W�Q���2q&7e�ժ���Ʈ�@���I銬/ �+� ��7b�6!����.�0X����$MY�V�>��6��l�3���q��M�����BF�(�س=��˵��E��LUY`"��|n��(B�4�W����^r��/b�FC����+�b ���lŢ�T�a􎮕���Z��u�H
���K?�8.�^�^���^/}R�+��P�BA�a+�����R�|��ϟ
�+� ��	���B�����A��6��P|_�c��� �����IF�eHJ��a�����FOeA*�V=����~x�r���?@̏ZH�c�t��fx��Hs
��	��k�u�~�/�5Rٜ��):+����m���v�G&vb��g�+z���T/EBU\/Eb�?BBW�]^%j�z�ѬЃE�Qm((x���[e�����/I(�](��t�.ߞ�tw��bG\����xHj�H'�	��T���l#4�(�`�{�@��9��0�Q��Ӊ��*�Q@��C��:
X�)HN�CQ��dp;��c"CXɿ#�oGE��M&��
�FW�Lg����\Jp2k��UQ2�!V]0 �z�>�es�H��T��^���� &��uk&��FQ���Q��F_,@^K��?��|̒�/��h����Lg�{?�K�|�ۨ���e�e��Q�ۧ-<�`q�Y_��E������ ��d�?����K�� ������
z����J1e�t�K۞,UºLX�X�!E̇����R��Q�z�N�'�4�4|fih[)��+s�p	�8�c�?5���Y���bA/~n	�6X�9�@H-�;1?��I[(�g0��,�U�G,f�GV�uqtQ{�\K�m�[@� _ &F��!D����KDp̘л�)'�LI���a���2VJ0�ɸ������o.�'��4	\�!���\�Ǭ�Q~;Ao!T�v�����Uۃ!�~
��	PnB����v?����9����4X�{��H.�;�
^���!���>	(��
Er�Y�)�z2ö��y��YF���֡���<Tb����QSp��!K�$x_�l
�'~�`[\jtb,��JPT|�����,�5`v���
v[����ԇ��S��HS);�UL��	��f��<���a���ބ�d��j���Y�Aߠ�BTr�n��,�&����Y�y~�c9��́t���S�*Bc�&���6�)�
mg��U�ua�a-��� �2��o�&�iE
�0�h2�/�>R/+$UK�R��A����`ײ�h���$�����[Ņ�����j�^��[�!����5�����dabS�o�_C&^��,NK����8���Q^��
�/-�t�5A8�-���9:��#����q[�:XY��\��y\�L��+�Y�-���tJY��y��#�����p���8�T[V,��I����؟')c��8N�a��,l�����,IEǽ �v����ʄ�Yd�%����?S`d��=n
t˙M���MPp��
+�<%FI���觯���M�-���^���f����Q�C�S�Ї��ua
���%@)ah[#��DH5U�ĺz�Yxi|×�=G��<�`�<�}p�� Ko��t��`���;}`��M>�T��ڟ�bf�6�Tˢ�C�g���i� �s����:�f����ŀg.� ;O�����|�V-���j}�j��>�����I�j�#U�l����>��+Ϸ_�y���|+ǟpׂHpD ��^V���K��L]_"�uT���b,�V2�.����]�lz}ʥ���fn�~��`˰�3�� 'Atހ Trabalho1/ModuleALU.pcf
 �ILPz��#�&d43�P4�xR��D�(q� �f�`�lo[�+p%��L��'T��� B��3�30~������>�ӛ��p��0��;{�&��R��S����U���>F���ޅBl���g&̷H�X����d�Pu܎��y47�92��Z�ce�8�'f=e�"M+Y+�kIN�����,�N�-��7����9�o7��% �ѥ>� Trabalho1/ModuleALU_map.ncd
 �ILPz��
�GU5#PuT FT���G=���,�2���e6�C/�?�����v��Ť��g{{�u%������b�³y��P�����N����:����j�����e�����
/�p�ϲ;U���0R���,�r�
C=<	Q��-�&Z��sz"�[u��[��t�u�>�;�Z�6G��b�r��ɸ2 Xk��,<v�̱$�����	���}yHm�S([������!x���bħ�n�u�1���C,װ�!���5�d+�Y�R�%�Ljo�O�449?n�5!o���(wr��4큰hu��I��jp�6��4���33E �zc��bu^�5G��9��x��6�?�o�S���v��GԡrD�P���1���2V��>꓎*ZA������+
%H�θ���њ!㸸��Nf�E|0����vKjc�n�w��b���UgKsÛ�Qנ~�Y���I�0���0��&�h�{�o�k��g�d�<�݉�䢥�L�L'��/��э��ϋT̹���N1@��U%��g���}��/�m��6V�c٨���Z]n�w� e����u���;`��;���d
�J>0��M���)0}_/�1&p��-e��/�/�ے�ǟ�K�>�0'��L{'l&��Rޟ�t$v4RȢc*{�h�7	�"��u�����E���>;%���B�� �/�]F ���к��*i�u����G�ͮ�
�]��@��l�~�D1�m���0�i�A�{#ʎ,Xk@�p��z����S�j����2������靻l<���h
�Wd��|�ҝ^�P�v�0��o�[�G�׾m�F�$�A$��jQ
�8l���X�@��,P�Ƙ|=��"l�0����Kn<4���;WF��$�I�����G�3������0o
bh�ұ�
e[6��a2zS,��>e�a$����{��"!��qF��ȑT��ۨ��R����ӞĽ��\	���\7�������H�=϶;��W���/�Kh���X�M�<4�0��A-�f����r �� �@2��F��u1Pm�/�G���D޽�^�Ɲ
J��d%m (�+Ow�t:��ӆI6}�Hy=����P�0��՞�S���C7��&G�
35���fa'|� D�h4a��<����(==��� >����Q��]����Mq��_<�ႄ�B(k�A��Y/g�~խY	� 5&��1"���m65'��x�J^IAR�q���H'�ڵA`B�{���5�A�ľ��F���y��DNOʫz��D�OgQ=��ؓv(���i��8)
N�����+	Wk2����u1w<603�5�46Og����<n���� �Z�P]Q������}��/�[H��|p�A[�%�^Keq$�C��
d�D��W@*�$�$���/'��9��b���-��t'����	�����Sψ��ta�ɂJ��eT���>h����8|���<�3T7�Ӌ�w�~X�7�}�l
r���eZ�P�Ly7�!0v�#:���<�O���������(T�e@mNh���(`���9�"N��`p0���q�R�M8�`k��^G׵��4�OK����
�(�K$��͓/	J�|d�c2�rP�"8t;(6�>_�ZO���2 ��m��.�x��{�%��K�����i�2���
�{�� D�w�;����ǉz~��{����~OÈ�V�š�)�0"T�cAPy�0��*g��{C��&�W�PXX!�s0J������p̼��ߵE���dw��Ԉ��%5���>��'�'�>�L>����p��O��]�ṿ6��pp�z�4n�9��=xJ��=r%��פ�zl|k�����
$X<˟F�po�S�lV;}��;68]d�����P]�?�R�vu��H��{ ��K��p+���~���I��cCABVU't�4�$f�@��kw��n޳2�=u���-Ll��~I_��9
ب��]Y����\x~}��l m�N��?;Š7(y7p^�qd��N}}��
��+®�>�ɸ5�4��' q�/�� Trabalho1/ModuleTest.par
 �`e���μ.0334O5f_��
a��;$w%70���Ԡ'�dG�����6�0�����=\d<�@���d�8
n�!��yA�So��.�C�]!�a�$B�?`7����ո�C�t��֌�f�K����|��˕�l��m��`DW�p*N�@�6�|��I��L7(k���3U�M\C �\2���[h�� Ƈ�U1 ��Xo�辜:�f�,�=��`<W������;� ��XK�-��!�
 �	M����?�`�>��)PN72� 7�%�Pe@�uz����8(A�Z
����/�<5���l�>wZ�Z�q�"�N7q
�7�ť��,['}i��]����pI�@�Sbu�W�i�>9٪<p��7ܼr��SE�
��
��eRE87H⛴��xTrz��z����7vM�����P5ưԳ"-K��Ǚ���Zn�iy@,�(ǟ^x��>��^P*�-wpy�k	`̍�I�/jYN���k�5[��+�+�;VT�?շ�m�
${z��u'�r��
s�	�9?��x!ë�1�����Yv$���;�5������Z(�i�yB_(T�o����4<#r�߰�ѹ��z.Am;�R��DR	���$\��4��" R�M� Trabalho1/ModuleTest.ncd
 �`e���̡:
��,�;�5��_���hB�M4��E{(�į�s㦏�I
r�� Fݍ�3ʕ�i�)����;zV*	J���DHo�(��� �L�؇���m������'��}�HF�2�~�������'�a���z���(0�0pt��zTO����ҟ�q�y\s�C������(�n���P�Jx`O7a|&>L w�Vdnu�3�q�����
a(�Gn��h?B��o�D,�TNھ�:K=�Ҏ����
�m; *�-f�ݱ���p�%�/Y��l�:�x�r'Mr¶U�]�^�|���f�u� j��KQ�a�h��C(v�O�+��E���>���ypR�+���[�p�0�~�J���`�w'ڧ�:��U�5
l%J'��^�`9.6���4�`����!m��~�C�1��D�� $kqB�q[�2���^6ŶG	��p&���ȏsוv�6>"����|� �@&�VQ��;-��	�إf����H(���48
�9�0�R<d��G�����n8�6���/�]��H����O��c9&Ʈ������\�v���8g�߿,�z;��EJ�H�]�������2�좯4�,S��ƯClJ��6��x��	������y����cvٗ��l�x{?~Aj�|�$�~�,B�r��.'ߵ�ieoa��Z��>�Ͻ�V��������&;|��e�%�{�,}o� zii�G��f����|C�]ghT��c���Ĕhm��k�^��{IF�}U�p|�J�9��}�E���F~�}n�O���ͼ���wӣ���mI2���A��
�"
.��#��Ig
X֭Y�:���a�,;{�М�%�/�1��V�GX�^��R�nX�<X�@�,�Ů��3���\%����v�͊��=J�E�i��d�X: :c)m��	aN�f��rm�����8k\3�R���Un�?��˶A��=l���fB�70���
�j�4�K����bY��4�(��T+��}�����Z�����蠳=L���A
a�E�=3
.�5϶{�O���$ʱs*��D��F^�!�:��y����'����|��:?_����h���_'�s�-j�����d��mq0f�z�tirs�0s̗�>W�H���k៲��
M�Kk�����ZP7�~M�Y}wk���$d|�;�t�y���na��J��̵
��b��*A�f�z��M]o���ɛ�ة}=�e�̣KI�M�%y`K�)I�?x�g��n��D�>t����os�<|�6�g�n�o�N!6�'b�<���ᑚ�gc�+�uߒ�1b(J�1����d�3Efh��R�U:")�N#e��~���úÁ�]�����g_���L��ʝ�c��_^�T�w�q�_�k`%U/����G�!�tFL>���(\�x��Ӊ^\Ύ+��Ij`�-	`1KI��ơ
p�__v���_i<�7���x�p���]���W�=p�*m���0�(���) ���VrA;�?�7w\�π>/����ܯ��
W���n�N�[�*��A���؏�W���*H�_ё�2/�Z�fvɿ��Ն�xA��s;��v��	'�	������-�H�8��Z�<<{i�U�&����5K�y�	�=�����3��޷���zi<��h閇v��r�a%ASJ�]f^�
6͎>!��c\^%�7C�Ҵ�^��R�]4h�����(uќ.��9����5���x!B^p��_l����=~���1���Jd��'s�-�n�����\3����#�_�L>[_�E�˅�\�ԅXa�H��[�O%�Rn#SN>ćK�Np��ي��7,De�a̋O|<1l�2�
���6�]�j#�};�������k�������R�Р_㹀`�W���v����,�{;���S�����󼇩��K�N�t�ژ��foU;@q8a�XC��2/JN����5�\�f���١Y�gW�n�<�V#�v_�)!�0�%�ܢ��U��	
IF��*��k��̹�
 �`e���PROGRAM=PAR
STATE=ROUTED
TIMESPECS_MET=OFF
��v3��8 U�Y�� Trabalho1/ModuleALU.par
 WPz��E�0C34E�fU�^x�ђfH�I�#��N<�6 �7'37��M�"i,_��=�T|�%&�������&4�7wUv~w�7���H�f��H|.�8x�2��hO�*���\���y��Y�R���8�7\!'�����t�=8���J��^x�E�zp4b�q�TQ�;ؠ�ES����X	׎�a�s����{�k1T) �ǐpʓ(/�/����#�+.n��XY���Ъ��R�*M�-`0i��e�|�l ��i�E�ص�f��u�� C
�Cϊǅ<!�o̧X2��b�&�g���+'��1V��G�x�G�c���,�,( �d�Hh���*��ր�ye��m����q����`�%]+�Q�� S,�:��F��Q�g�l�v9f�f&��+W+���C��
���?J� �q�mh]��M�E+唊� ���bԐ�|��*s2d�D��~c*����B�8b���$�Mda��$D^��
HO(�3:28g@v�J4�H�X$(vDI	���
�̮����|C �WFH�?!R��0�҅�	�,ݢ�@�2s �}�ْ�����x"ɮ�����i�p���E>�>/������y�`��M�8��hu�l}<Lg�&���T�X��a��k�R}EӤP����ג�˽�_]�}ݣ�A��ߍu��T-�\�P�]D"�+Ô*A*"�.�I��0�#6����dB�^fR�� �Œ�$��g��U=�~�����Z�����-���sZ�.c�8w��Ŝ�۫����]o�ٝ�Yodt:۱m.�meQ�ݞ���/�a�h$�
��%�����B#�G�t�LY��\�4�g���U4��2�[A�tE7�6���o�l[�I�gPM�̀��a�8;|pX�)��ܐ�����#���>w
�j��f��]o�绤o�#H�?�{��{��K{�1v7g��G��uv �s����C2�v��[D�6(���	�6Y�Bb;���򧴢w0R�8 ���W�E����8��l�f��i������f� � ]�rA�;A���.r�:튳kZfZj��j��Y'�%�#�b����Rq�:��,r�_Cc�o��j��`Ӑ�,�������j��e��V�šRt"v�X�'��v�6�,��'��� ����⒪P���PPM��Y/|��i,Q���:{�J}6dO�Ζ���O�OY�+�A�؋�V�dbXcN"��_���z���oT"^�p?�a�&g��4�/���,x�k|�?Z����ޥyӝL�=	W���(/0��;���3Q�&�շp`O)$WŖG�k�L�qˍ�q��?e���@�ҝ����Jj�j�J:q_��&o�n�#9X�$*r{{���Nl���)�ͪM�ɋ9�"$
�Ҍ����E:,�����.��~��@��Ǆ0#D�� �K�u�4��6ɤv��Q�=Y�Oq�����=��e�Ze�^rIa/�#~�<�|	�D�h�8t������4Oh=)��"�����8F1qeޟ�˃�!P{%F�)R�$�Fb �~�HϏC���E�T�������A�@��B�Ro���/��!M
�sȗP�Ϟ��e �2��8��QZ ��(�?��A�מל�����N�۟Y�gS-��NM��i�3�fWe��MW��)����Z7�p�F�s$����%ϙam��Vts2v�)6��Sńm��$ߓ�𢩞�'�V4F2�N��$�m-E�fӲ]Mۙ�@&Ƅ�@M�M13�,�9 E.�ڀ Trabalho1/ModuleALU.ncd
 WPz�ʄ6UT3VD ED�)�{�L��H�JF�5m��G=û�?w�$�)�3q��m#A�,7��Z���[�������?�q׿�s��z����_�>?������S	 ���o/�?�_�i���q�P�V�E�'�
��a��^�^g���oN��-m��?�9�n���4l�-j��m�aDU�-̣���&������p��A5L/yM���g�L�~��V���e<QN��@ja�+�ƞ�������K��;�of�U>�s��o�F`E6q�<�:��
��������pbBL�Œ����.S�=��|�1��B�l�ha'xs͑ZV��6҉=�n�����Q��L)iedxq/�=�7�c��GC�={',�{
�\
� u��RC۷��"�?����fA
I�o(AC��ɃX.�!`hLzl2wY�TW#�bM��O��yh��>*b����_����=�:���gz^ˢ�L+۸��V��<��d� `d=Lݧ-K�se��g��S�R�>kc.ö6��R�+���T]'���T�l�N 7�����.۬7]��A
��oސ��Z"7�a����Z�ZA@�{l���Eo�;���DݼwP�	�+���Z����!�^�;�����=Y��R+�E$�ֱ�9=3��pz��R��Z-GEC����F#?|�A�8�I���������<�Iˠ�^�y�E	U�H�;���)A;�1
#��f� ���bq�YK%�&	���Mu�_˧Ӹ�96���@���@��AE����"�,�ZdǺ��a�|c�dU\^����3$P��4^�!D�����x�1�����w���GU�{覷L�y#�/�^F(#��!�l��T#ֳ�6�T�X�à��z��s�E����c�(J�􋐭�!�_��V}?�~�ݙ����Y��ќ���+jP����3�C��n
ڊFA��j8l3K����hK�e����
��� �p;�#i�ל�j	��Q�b���e^Ťl�Q6N�	N�	bl;&w�m�;C��
��|�mXR��K�,E�G5�H,Ӽ���7�hᇋH����UC�ܰw�#�瀛%��k�b��Eh~�!���u�@E��h9)�
�	@�
���ubm��U�@_�U?D���L��I��W��t�Lr"�Rc֍�u�.�Or`x�U#�b,ί�s���
k@3{�	ڳз�7ɽ'������4�{C��5���5�ه�/��R���m��Nm�^0p"�����MV��hj9����s��?B�[��DA�E��ŗ�A*���Aɣ%m�&l��?^���e��8�L�,�z��0�m�VXy4#�]>��ͷ���PB��`�$D|�ӣ�Cy� 1x<�rXX�&\�vd�>
�ĔRNO8��}[j	B�ݰy77���8�wxH+����O
Y�AO��ɶ��D��"���/�i��r��A��^e �`�Q��
��|� ��nfc]�������w
�0F�T)�J�t�	|�C��ο�D?|)}Mg��jU���A~/�� ��tA��x��ZLTB¿��� vQ�D�A�PT��ng��ڨ��
i
Y{R	,jnK�Cs�#���b�h�����/�g�<p�Av��ej=�>w�=V6�e�p#��1KP��m��y�Vp���n��O'4��,d��w��b��������lx��/���ֿ!�#�D	�1�g� ��Q�Fe����ۜ� 
�}�׏'��G畓�~���qYXÛQ;�E'����_�-�sc��
���M�Y>)-,F�(�`_�����0�2}=8KN��Y$v�7"�1T������Po�EE)�s�������Z9�,�9 E.�ڀ Trabalho1/ModuleALU_guide.ncd
 �����ʄ6UT3VD ED�)�{�L��H�JF�5m��G=û�?w�$�)�3q��m#A�,7��Z���[�������?�q׿�s��z����_�>?������S	 ���o/�?�_�i���q�P�V�E�'�
��a��^�^g���oN��-m��?�9�n���4l�-j��m�aDU�-̣���&������p��A5L/yM���g�L�~��V���e<QN��@ja�+�ƞ�������K��;�of�U>�s��o�F`E6q�<�:��
��������pbBL�Œ����.S�=��|�1��B�l�ha'xs͑ZV��6҉=�n�����Q��L)iedxq/�=�7�c��GC�={',�{
�\
� u��RC۷��"�?����fA
I�o(AC��ɃX.�!`hLzl2wY�TW#�bM��O��yh��>*b����_����=�:���gz^ˢ�L+۸��V��<��d� `d=Lݧ-K�se��g��S�R�>kc.ö6��R�+���T]'���T�l�N 7�����.۬7]��A
��oސ��Z"7�a����Z�ZA@�{l���Eo�;���DݼwP�	�+���Z����!�^�;�����=Y��R+�E$�ֱ�9=3��pz��R��Z-GEC����F#?|�A�8�I���������<�Iˠ�^�y�E	U�H�;���)A;�1
#��f� ���bq�YK%�&	���Mu�_˧Ӹ�96���@���@��AE����"�,�ZdǺ��a�|c�dU\^����3$P��4^�!D�����x�1�����w���GU�{覷L�y#�/�^F(#��!�l��T#ֳ�6�T�X�à��z��s�E����c�(J�􋐭�!�_��V}?�~�ݙ����Y��ќ���+jP����3�C��n
ڊFA��j8l3K����hK�e����
��� �p;�#i�ל�j	��Q�b���e^Ťl�Q6N�	N�	bl;&w�m�;C��
��|�mXR��K�,E�G5�H,Ӽ���7�hᇋH����UC�ܰw�#�瀛%��k�b��Eh~�!���u�@E��h9)�
�	@�
���ubm��U�@_�U?D���L��I��W��t�Lr"�Rc֍�u�.�Or`x�U#�b,ί�s���
k@3{�	ڳз�7ɽ'������4�{C��5���5�ه�/��R���m��Nm�^0p"�����MV��hj9����s��?B�[��DA�E��ŗ�A*���Aɣ%m�&l��?^���e��8�L�,�z��0�m�VXy4#�]>��ͷ���PB��`�$D|�ӣ�Cy� 1x<�rXX�&\�vd�>
�ĔRNO8��}[j	B�ݰy77���8�wxH+����O
Y�AO��ɶ��D��"���/�i��r��A��^e �`�Q��
��|� ��nfc]�������w
�0F�T)�J�t�	|�C��ο�D?|)}Mg��jU���A~/�� ��tA��x��ZLTB¿��� vQ�D�A�PT��ng��ڨ��
i
Y{R	,jnK�Cs�#���b�h�����/�g�<p�Av��ej=�>w�=V6�e�p#��1KP��m��y�Vp���n��O'4��,d��w��b��������lx��/���ֿ!�#�D	�1�g� ��Q�Fe����ۜ� 
�}�׏'��G畓�~���qYXÛQ;�E'����_�-�sc��
���M�Y>)-,F�(�`_�����0�2}=8KN��Y$v�7"�1T������Po�EE)�s�����7���6�� �� �o� Trabalho1/ModuleTest.twx
 �����ˮ-@C34C�Gu�����ӏ�7��5*x�Y�c�In̒�mQM�i��|6��u&��p �I�쪞鴀���2_�_��_� �8|��>��#���$C����ݬ��(!���a�sk�Z͍o���鵃�zے�u?�(�s�K|����`��\(��w����v8\���W�����a�}�����}ߛ(�"�AA�\�)l�Y >R7�\�~L9��Ud���\�+��pwvxkX�͓"L}���@��h�yGgl���0=�@0@��ԯZ��]��z�K�kp�� �lWYV�+���2��l܀�W��ζ-�aHp�
)np��|�����p��;��9ɋ�j8	�Xm���Nk��ޱ��65$�7��HL��_�e�Bha���k��)C�7J܍��<|���H�� �s�]�o;/l�Věkh'����Fb�ύxuTk�&����4b~G��9�M�^�Ȱ�j� mxA����@מ��`��4���)1I��H���dƵq�ހs�)��N���,��d�Oi	f
b#��;&]e�j�Y%_�%l��d,�zx ,�����d�6z�?�X�K����D�+����pÕ�L*�2��QY�r��(>���}�n��1~OrC�̙5���y�����p���l�� ����,*]�%�J��w\�yؒ������-:H 	��-]�P�B,�p�ң����.k2g7l4�j�]�@��:*B�a�pG�;9�S�?�N+��7c�^���%�W4�t?)
G�n�_�E�7.�ކa-�9r'hoX��]�8~�8`����B�#��0��w����|�y��^|�\Q�MQ�B``��l_���2��Ê�Jz�8�b��K!Hya8C\���tk?iwǕ���:L�H.��q�7M5X!�ǏңF�����5֘�W�O9ů�w�M�(^V�T��@��h�k U!6�_{��U��O��/����&������/~��S|��/X��}4�7aM-�- J�I�H���\�GɵL�����/(4�y ��a� 4W��l���7�j��
6a�`tiH{J�����Ĝ,�G!-C��T�fә^�R�:��J&$h��+ K3��^s?
#��#L"�I�O��]❰+w�/�2�/A¦⢣�:��ɓ��yXp3�p����@�K��0�ǁ�ץ�ܚ~��m��9z*�L���k��p����Y54ъY�X�������j�
^@,2��c�sFu��jD5)�I�,MR2G�]\qO��1�Wñ�!����G�:g��.�.Ɖ�߃��/Aw��_S����2eL��욜���$�%�$
Tm
J ih��Z��)�EQ�"�P=�a���͐�}ih��]
WƜlH�D����j;%��9'w�;��}OT8�4�
�ߐWW�%$�H�Y�<�OP�	��:�I�\�ґl=*J��=�d�^/.)�<(�Jg��M��8��6:cь�Z����݄�2@�3�R�,]��:�O���8�;5��Q��8���sw9���B_ګh��,[/aH��6B�,0�}���l�6i�]����%�|����%����+�`�&���fr/W�yCa�����	խQ6j�/:#���H�bقna��t���k��E��I���8�������.�ӇvBw��yS.�GDP�.���thN8"(�(�6�i��U7���]���
����}��K��?�6j��7SL7{��ȧ0���%@P�Q��ֻ&0��n��,���ag�%k�m�μ������}ʍ;gރuRFw7HAS��E�nIB7%�[�P���a��i��#��������J�\˛��0�A����y�Cp��.�TQ��mΈ�W�Ycc�L�+g�'$�M6<���ZW!�+5-!�KP�Dy���D|�a{�+����oV ���,.�85_�p��7^
@�
�'b@�?
���ZL��+��;X=�𯏳����Y+�<^���wt		��>������"���ˆ��=om��2%�������N͑����3H��+/�R���b���o���� ��JB��KY+\�!Rr�{ʠ{�
N?��&���(x@$}`2�� [��b�%�ã�,f%9�S��χ ~{�;xy�v��j)�>Q�{���O���vAb'�\�n��ە�g�i��!�8�E��,ۙb��@Ħ��3pq�Hv�S��-($=�)�7YJFL�x��H��-�MM�Ta��dFccԉ�|�. 檓9���Y��n�qiG ���!g�D%<�lƂi�;�Aԥ���
�D ]L2����+�K�-�����ԥȽFk�ڸT�
A���Bq�cykDR^����\ߎ����g���@���y��}�c�q�(��@��ɲM8�
�ș��B�F�-3�㗍2���<9��]�����%��<����(qg�q|�W�:�/����Ug�ߞ*�kO���7����L�{��qS�*�
c���n�qӎs2'E��ƶ������r
 �����̉0uC34E�Ge�߅ 3�a܈�Zpt`T�6�A�;��Gr����4fX��E�)6㔍'w�3��ˑ4�h�&�h�$W�W�����s�(�~�s�����/�'�Ow����	}
C�~�z;a_���,�w�����x���~�2I �N��C@�u���������ޠ/��3�SO�~���1f5~�L&G�?w��G����!�~�Kˎ���?����E*S�#M7k!�羍��w�i�o�j��3=�(�]:|>��`x�����@�|�>��f
���[y3���u.6�Z�L+w���O��/K���ϧ�o=��)�V���ܪ�b���?\ݙ�O��᛫_
;�?���#I�=�B��K����y����u��PYo������0���?m�6��)O���[U����j�˘��m;�}P���l���Ǒ�\���{��A��L�B�P���D��(�R!R)C��4�D�߇����=$L�,�>u�!e�8[v9p۸u����EM>z�L5~��
u�%�+
�����o�fH��g�r݇X�`������
(���8)����07��X�K@Z!���'e�Ba`)�֚aPmTިr��o�d`��w����v
�}]��B ���~c�Kƨ�5����� ���geT-�E7qQ��3���EB�z��� U��ڏ+�q�d�����Rh����O���5���hOP��R�R��$�|�@l����n!M���s��ɇ�7]咒)Gj&)X%�&����,�کAɚNԓd4jZ ���h˩����uƈ�D�
v"2��M���c�+��2\��"yK���/�Lt)��j�-��ڈ������-4��6��Xi �!u��ZBh,�J*E@^��/}��LnQ�0-I܇e���k���q���I'Q�9]���h6��_'�j�VΙ]���ݮ�vzn#54L@�_�������jr��s����Fm�_a>�tZ-$�C�0N� ԝ�����[��B~f��n߿Ə�������Q
�憶C�s���Q��-�h����I�
9\e��m2�X~"f�0y^B�Ԣ���,�^�����-���4��@~j ��`|g�;ukV�k����n͙��j%Fai��'A��S����H5p��~�T�
ށH}��~�zC��4A��g�Pp{
�d�2b �!+6Z5��n���#���m=��wƋg��>�\�(ЀT�n�M�P��]�rl�*�[�2U�8�}EE *�"�;GE�`������=�G7R=�6
��_��gP�����}����0S,��n���$�%7�HT�W9&3��Ϊi:!X�����8q��@M���X�J�^֕X;$����+� ��~�.tU���eJ�L��mF��6J�
e�*9.���=�x� ��Zy�8,��Aف�4ю�9�6���� ���0R/k�D���#����쩺t4�+P����}�ti�9�!?S�q�-��QF��+����(�3�GY�*o(>P�P|����,�V5���)e���B�0f��݀��# #�D&�jyt���M!��'	� .�6x� )�[���b��A�+��9"�5������ɝ�T1����`�.�5D�)��>P4���05�t����>n����7Ͱ�nʳd��S���C�9w���b��Dy�b����ovO
��0A\࣒%�R�/R�4�
�92�k����6������?�iM����pY�1��Ưz�n"�I�5�x"w�;RH�U�t�x������o�����jҔ������Oޝ�8=��{x������vԎ:��kN�Q�7:��Q"����p�5�
�0c{��v
/�j�c�t�d��J���E
�e�b=�:���9c�����o��:��q�2���?B��aS�v}]A���_i@��	b@q(v��d��u
�a�ʰE����.�)<�1�C��C����̿�S�+�
.Rm5����k���NR�P�r�]��[74�2��+���7:��K
�%��0�=��!�M$E����*�Z��2��7�Q�OϟtH9��Y�,�(�M��g*�{���;&�|S^f������s���'�~�Vxbeԙ.`ǘ$�d{^��*"�%i�I��.���俕 �%*땅Ru�K,�����o�E�2��^! 0\�_���d�󔽛;��<�ؒ�~9g+��y�Z�� ��%�p�{��=�('O�%/;��j'b��5Tr�KU��x?L^������c /�R�Ϟ������ΰ�0���x�b�lT�l� ��7˘�$E6�~}9̃���F�x�P�=#$l��a���o�ֳ�syu��盯�?y?�l�N�|����Ξ��Xw�3�Twy�ӧGH������Ǩxx'KQ��]��4���a�9��vN�f�������#f�מ�wv�OW��g���?Ƭ:�2;4����u����	ӟQ�P����5�T��S*���W4�� ��ˀ Trabalho1/ModuleTest.twr
 �������z0eD24O6^��W�a��p�Jl��ġ ջ�8�ݰhcm;l��=�r��47vb�������9Uuv�����qRV���^!g�[����7i�e�׎cV��]n�%�4:4��\9^�r�+�ѿ�Iǝ�a��A��(��d���w�,�����O6�9oLN̉��p�ڈ���3�Q��<�ud4 ��	#BI;;,�f��k�Q<�Ϥ1��w���(3���^|X�]��'#����^����ǇWv�E�}�(@� �=�qېqlzv���7��2[o�r���{j��t�"�T7��Hquݎ�47�݋"&���ó7^\>�Ŧ�1N���6�Y&�}��r'C	��%t�r>���3���ݚs���� ���sh&�-�kb<���?	
�+t��B�[7uѭ��!�.S�9&@�B��U�aPT
jP�*����S��,'��Ui��MG�q�$��Z_(I�>��&����O$r�+�h�V��L^�9�=���Y��t&@,��n�5'��A
@t�7��f$ D�� ��9� ���W�G��� R4a�+�EI�+>�A���	�2"��/-i�4�����]:D���tLU;�P$P�/��=*��߼倫�� 5��#�#�/M$��.�Lb����[&�%T���L�P�u���g�ب��t�
�儽mPbB�Ǫaߨ�P4[�Ud�����r-;�E!.�B�j���.����\cw�$�]�����l�/_�דoA�(VmQ��zR$jY?d-��/��wu��r�����w=�c��Ŧ[�K3J��.�*�}4�?� +s��Sqq�)mɸ^�4�}��r���B�\L�k�8�9��-���"=�2�n١7x�F/�_^��������r�(��D_��.W��[���^db/��.�?�r<A/cQ9�� �� H�1@� Trabalho1/ModuleALU_pad.txt
 ������?�@f334D�PU��z�/w#D��j��j�r9QS��ft�y#�n�p�r^e�Oy�r;q�w�fރ�ꤍD��E �|P8O�~�i}i�������ɏ6H�X?H;q�A>��SG��N^�"����v�;��|�����3��,�2h?�Z$�����_6�W��<�1�d2�w�'>���g�W�2������!�¶�j���}�a�=��������z�E>�痜b���#'�M�>F��n{�R+2�ύ܍��|����r�����O^��I���PQɳi�L���V�~c���ca��}Y?�)��|��;��_�e��=�(��٠>��h����3c��V����'�|�eL���,ܸ|�����9��Ϻ��m�򃛳���Ny1��_.��_�(�9�|�Z9����7m<�1FB�=�/�B����Pm/`�s����Iy�����	���>���g?��׳�OUR�����=�ofc*�������9;a��wA��PZ���O.s��!�Q԰W���5?eo�H�3�]�A8b'ǏwG?�Ȇ�nM>,0[�ws��ϥ�����qr�W�o���k�亲})7����:�p�O�$��s35Xa�׵�����ݿ^֍��%�
��6���花�r}<4~Rn����_��ϼ����}���^:]��bc�?�����b�9��S��ק����9�A&���ܮ>�zu����^Z���>�z��f\����|ї�	�:���Ӌ���8��<]�=����Ylf���r�}$��:2����{cؙg��W����/L�i�n�j
��L,�JX�+=<���N6�P�P�R��p��C�
����_hrSz�8.��*Y�s�� d�,(��R�~
E����𙜼Z��� ����ּ�<��z03�W���%z������RA��Oa�pbP�,�F�A��0ϩV��R	hԭ�&E'��UJ�`w~.���I����e`�˛�;!��¹��H����2�����5@+}(o���		��\�J������
j�LܠQ�A��|KHP۲Z��g�P�RX#�8��4�v�������Ύ��1�5E���n҉�=X�3��7,b�N���[��"�mw������*�Mw��|&dx��7M�6�zk�<�AD(YDB-$v��v�q�1�$φ�ὂ
G&�&���3�u�ƞ�\0k4��e�-�����ed����8��O� ��49�|.jIܘ)$���t6�$�6�ȕ��#��3T{L0ڹ�A���zb�Z�'Xm���&�cޗ�/-���j}�V�G��������ܮG��T�}��N�*gm�}C)5�\\�X�4L�7��Bd�ȃ}��.�ĝr>���3��Z5$�7\��=�Ӧ34�����닃ޛ��$d�y�BU��4e�hs�s�0�I�3�	%6�h�cce ���s��
��L�8����7x
xne��	��n-$2�`��i������πF����<�(2"��&R������s��?'���=�����k�[J��Ɂ����ǃgxڍ�J���k�.rh� �b҇Ã���:��{G�O��"p�fl�~�'�G$B���0"]6:�B�-��ԡ��Fa#��@>���,�������3�(g�ۮL
'aO�D��%b6�$�"�Su�p{��w���+����S��$���ËŤ����DN?2�����D9r`yXZ0m��cR��?��I���T��%�E�$A�@��-�F�DJ+b���͍ԈA��Ǡ���ԍu���F�
����JoU�T����j��"��R'�vԟ1�@
�K�!Th���'�G�D�#����]�{8�,�}��.�_�6L!x�ⅆ�����u"�#�������
�ז��O���Oh����wv��;���!��q�A�R���k�A��o?+,��?!������$R�0<bNf��"q���WP�1IQ�&�L-2~įv���vՕ"�	".o1�Ak���`�`F��U�#H��"�	V��A��;�㔋tLغ�p����s`x���#�3���PdF��Z�#�#fR��	
4e����
4d,CS8�:U1&��V�o�h����Y��\*?��H���9�J!ˆ3�ZU=��TdD���D�{���^���)ɧ�p�ZԚ�*y���¯6��
�p�n.��9�6��Z�������O�M��{�Λ�?��s�߶�?���_��������<���y�V�S������vࠍN�`��͔����?�S�u���z�� �����9���^nμ���Κ�&����י�+�)�Q�6��S��5%���`�2���'�(��r��O���8�� ��^q� Trabalho1/ModuleALU.unroutes
 ������ �%T33�D�8R� X��Q�p���[��c������ig|��I8�B@����b>bZ�{��ڴ�em��U��c�m��eKX�/���Qg*UP=�^�]Y��l..Q��kKQ�aa��_cQGD��}:��+���qв�rZ�O�	1�*�S�O��-��3�� ��̀ Trabalho1/ModuleTest.ut
 �����Μ	 dC3?VO{¯�JY|�RZR�V9!����7b�U_}V�iF���?,�b՘�&���7sL3>�+�Z,��>�Is\�?"m\��*;0"���Rl�pI4�A�Z�fM�{��N�'n��.� �>�_>�X��E� �1���lG<a��1��S/�g��v|�e��Vp�u�.?��a���N�/�~앦3�{��~�����˂�Ն"P-7�>�٬w~D�倣6�����ʳ\Y�۟����z9�� �Kd7�����5�� �� �:��� Trabalho1/ModuleALU.twx
 �����ʮ-@C34Cw_�?
?T�����|����4�ƶ>
4���*VQeڦ�+I)��'wc��
O6J������~1�|����|�WD�7/�Lmy;8�{�J���&�y��b{��J��[<4�y5��������-E���W����!,����z>� ���x9v#�p<��Fs�ݛ�;[{���#^`Qz����n��/�u�ߋ��Xǈ��ߖ�0��^�uU���s�������K�[6L�1�}s�ӥ���.��S&�{�0�`���\�i ���v�E�������Nb�
0W;�d&��l̀�W�GgY
0�������Iط�:qd����N3Е�"��S�)A�O�2�� )��s�jw�@��6�	7A��L�?���Ӽ+���y
b }�]�.�e5��qM���Y=�p�Y"��x ,����*Ǜ-�����X�K���%Q1���#0[�dv#
��S2�+>NVz)��w|v{�x�L_�����&M`��c奍Q���a�$�I�@+! z����i]����Y�;W��)׿��� �\�(f`��J�K��<��ɜݐ�E�.k�0�1XtT�)�x�����kn;�ڐW3o<9�댱(bQ.Q�3L[��Y�?�.��*����b���P�g���7��G�j4����Ow���&�	��� 8�r�m��yao����������t��2A�l�[ �]��2�1kGhe�)>��7Oe����V��Z
�Z��ic�4�i�բz��'�~� �R�5Z\zɆBÁ����$?^�}V�]�&M.(�v���V�00N�6/�F�fʥk/`�k���C��lk%��<��T ܤ��tk;ioӝ�h�:L�H.��q�7M5P9�Æ:�sq���c�1B�-)R~r�L��Ϧ�/+*
�õ�o��(�8�=?t�g��^��f���{��j�(�t��]>����eL��V����>C�ELo���-1��xB>Z4s���
����.Da�^ =o��nbÈ �`;�C��P�'��Y"Ѝ�O��v�o&X��#aHݣ9��q5�輣�錺%�@��9��MI��{��Q�Cf����������ux^�Qʟ�E&�	va��xtiB{J��'QHS	�N\������|'QL�s)�.s�.��BbA����d	fr7�KΗ^��d��NJY�U�<�{v䥙�\�5��	B8U�t�ho����m���1�W��ǌi�Ta�Rby^�-v�����v�B�u�	��k��7q��6q��gY��Cd���)x�ǃ�͖����+���1��8�e�X���
2�;Y??�|�`��(a�Z�<Ad8�U�y�>������Yd5md<�u��	���;jj3�X�v��l?
Aя?dm���l]s��$�����4f�"A\��19��u)�^�ڕ���v	��<iA2��s8B��:�O*�9y��sDkϲ�y�<@߉y�*����7�Uk~A��F��.�����ܴ��!��]M�yTz<KK�[?~��W#L"pLŧ�O��N����r��]��8T�|TTz�_lx�և�g ����͈?@�zw�P
&�2�C
E�-��Aa�;�,5S`�i�ODjߤ|=��?��tD���2ex�,$�@Ӵ��E��(l5�ۘ{�:��&�V��,|ܾH�1d�30�c�~PQ��M�E��+�&���A�I6��.�ӇvBw��ȩ���(d�I���4'�D��R�NY��U�㡨Wt=q��d(�_h�R�v$�F�P���i��~����>�j&UkMkoW����e��wEY I\�`M�U9�I�J�M��Ti�>�3��B
��o�2IP�,�2̚T,��m�b2-�Ϧ\m�>���6�y2�7�=bjAn���{�Cp���TQ��l�E��x��o2������M4����Ei\�8�i�C��0�3���{܃D}��s�+���R�H����]�pj�������p),6������P��O�ߒO��`s�Ž�Wr�f��!8��*��\5j���PN��$���J�Wɷ�m��l���wl�y��	�fGo3�p7�("
k������A���}r��[g0~��o����V����3����~�$�� <�#�k"S��>䖾""B©��@�9_~Wʔ9C�M�Y�A��|=���;��P2����hx77 ��		�Q��ɳ�B� ��#W;{9�ؽo����[�Z
٩������͑�Ͼ��}V��ӂ2���z����H )�{ ���3��%k�d*NR��4z���IO��A�b�)�e/��6�0Y:�j'��$��D�$Z�K��]�ψb!���\-l�)X���������.�c�-s佴2�Y'֩�G�mڕc[ѠW��'P���i���
�����L�H�By��F�����C�l@�1�jQ��!#� ��� 
�,	/��g��N��xV�,�N�p���4G��qBx������� 2wm��ƻ<24,�4 M�d0�0H�œk#�����4��^>8Nڊt����g�5�>�K!Hɔ�������p��٥Fx<�l ��lx�!������j(c0~<��#aiG ��ȡg�>%<�6SA4Ν�P�J���a��.�V��Vߥ��z������K�{#�k�شT�
b��`!8��l��") �U�U�o�9���s��' �;���~��Ǭ;��ðM8�
�B���aU�J��i����J����Y4���q�2���H��R�&zk���p�C���yO�J���E^Rtr{%M��u^��
��	��r�,�������������>d�*�h��s���Gb�ǡ8�~�~���ڤ�%p����GIM��'��#@E�h��}��چ�^C<�W@l�����Ί���*�p�������j��W�v3*�nu8�FoM�̭��e�mTޭ?7�������ߌ��.
�  �Q�5� Trabalho1/ModuleALU.twr
 �������j0dD25O5_����\>�������N-�
ջ��N6�j1�>�CT��6J��6h���mHgC�����m���_n]�7w�|�1fR���%����U�훾&�tƨ��Zb�\����sH2[��f�u�Us/�c`���m��2�:��뉤�����
O(U� �S�]�V����Ǡ:Z]�"�8�0����������n�^F�����դ$��3c+�d>-�V�*
�M,t���]��C���cf�>�����4H(!�cߣK��2x�e��8?x6qʑ���F��3?��l?M�W����H�GA+��v B��dX��h�T7nl�$ D���#�
 �����Μ	 dC3?VO{¯�JY|�RZR�V9!����7b�U_}V�iF���?,�b՘�&���7sL3>�+�Z,��>�Is\�?"m\��*;0"���Rl�pI4�A�Z�fM�{��N�'n��.� �>�_>�X��E� �1���lG<a��1��S/�g��v|�e��Vp�u�.?��a���N�/�~앦3�{��~�����˂�Ն"P-7�>�٬w~D�倣6�����ʳ\Y�۟����z9�� �Kd7����R$4�	�. ���L� Trabalho1/ModuleTest.bgn
 ������&�@U334O4_u�F���2ިܼ��19%:�n:m�^g���-EQ�QQGU��t���̫ɍ�Y��Dz:	`�864��
H�	������b�b^�o�KD�Cfx��߻{��~��c�u��Yw��w�A9���_�JU'��T�~d��6�N͛	B�#��`��j������7���V��B� �2T8�fg��:�N����.�~�n���y|�/dP�-t~�k��E�[x��GhЯˁ����>�@H!#�_>Qq�|`�	��M.�����՚Y��
ϙC�M����+���kX��R2/@H�
��q=EE󯋶U�7���2%��=K����o9PlW�c��`	�0pl��C*؇K>~�
��-��Yb؏��H��){U���3�L%U���D�S�D��JblbF���չ=vDt�dXBD&ծ�ɺ�'�^.���;�M~燠��D�D��q�إ����g��\VO����M�	��_:g��e:�Ѕuę��k�LP[[A}+CL��٣��96<�ct��.�Q;|�);; _�SZc�3�
�0 �=v� Trabalho1/ModuleALU.bgn
 �������M@U334O4_u�F��ё�����&�S���䩗䨴�QTZp������$�J�ۗ�����Z��D: %85�F��JH�	����|^s:b�b\�g�K��Cf|��ݷs�������Ҳ�C��7�t3�����Q�?�e��L��d��뤜�!��`��j���j�7���V�B�Hd�r �ϩ�Tܞ�`$=y�"�[�[/���@�@ʃ!x�����-P�����M��x���'7�� �|<��XbJ���4a�<JP��\�|3B��F��P��۽�����Z��G��Ԍ���r��]��Z��agP\��9��v�������ǽ���{g���d����!X�I�!�)V��U��~l���6�S��1^���)�`~{�_9cJRg8�t0��zOWCa��6��C1�o0��9���:����>�$rM���E%<ߌ1�TL)u�9Y��1`�����Ѐ� #����vW�.6��w�/*���m_��^���y=��\D��f3�m�$���A���Ol^��E(���b-l7����椻�_j��z�[I���f��@�ͼը�"�̯��h�Z7���j�P<aN��`[�������~)J&R�M���s�&B�����B5�7���,	�̹��5�յ|�+ZF��h��>�����Q��Ք�
�T"�*1���Ü꬐OCi̚Q�F�A�|��q��-��X\����Q鉑y=8HB�xR��K
[�4�=8��� S���Y��bé�!�љ$���6�!�M1�� )_���b.?���lMve������ HWp6O����K���ڲ~+?�N�dt+g{�F�Wc�/5x֛�`o]-��^��ZB�Z��p�d3�� ����� Trabalho1/ModuleALU.drc
 ������5� d4#�`E��Vt�WG�h�h�hZiB�MݭCMSV���żo�HI	�̞M&f}�3ȫ[f+J���$rDp�$Y��˛�Wަ�>:�{�5%�t���n��z��� P�����뼭Hy�v(��9�帰bc|1�t�6�>�7���Qâ

���#��B���`����m��V9�����BcW�5׈ �� �`ѥ� Trabalho1/ModuleALU.bit
 �������S0C42�`F��j��.�U @�"[��
�n�T��!!*%R�r.ۥ�*�H�p����9Z!!? t-H�r�K�����y�e�m�m�n�@۷cBյUk�ɩώ��n7����8߳3ُ3cR)�r>26�ۉ���]���� [�w�<=���yyX�,\��W�[T�3/�s�ew2rf��8p�;s0�7	��d���e͂�`P��:%���4.�	x�Y��;�p`����b^y���>����o0�k%��o@n�Kpk`6�̝��̟I ����&�'l
�ȭV��/�.�ۍ�����+������(XT�����P��\�����&��T�:P�n���ծ�PҌ���0o*����?�ŪI�=Ԓ��j��KY$��;L����$=���D�,Le>�)B(�-Lm�R�.7�S�*1��oZ�T6Ӻ�NQm��
�m^m��Y&�0k{�n#�t�V�;V�?�T��,m���:QM���]⠏�r=W��,#�]�0���#�B��bP�~xU�b��bz��ХB����[W��	Ai�v�z���j/4$i_���I�s���}Pg�G��*��ʿ���@x;�� ��u� Trabalho1/ModuleALU_bitgen.xwbt
 ������\�6dD"�PDߜ(�+��@� 3�`aj&�!�"���f�{�n���ʮOR+EW�}�>���g�j��"��v�va�؁���i�#�������Fl�A��*��6��說E)���n�y�y����Y��*K����q��T��	��'z�#$h��98X��/a�J)~G>�"h=�^u!#��������#��1�� �aʀ Trabalho1/webtalk.log
 ������=�0UC2?UO����R1�B�J�UKR*�B�~���$���&��GY
��H��E��nj'����ƳyϾsK��U�!�?�K�Vl�����ɺ���^�\�Q&x�N�t�wn�a�,��Id�WQ/̇�N�e%`0h��Gڒ��b�*C\"%Ѡ�s=c��7�wZ7b.Y���
޻�6�g �u��zV$���2!-a|�����s0ZX|���A0x�ˤ#�Z�m�/j:�i��2ƹ�����V8���mDj@-R���4�C��$�нUp�c����)���4;���D�nZ�ը�ں�;�D'\9�Į1��,��A��v�t4��ܷ��彏n�H�r�aw��Z#�ҍ�j����?�� ��  ?ݸŀ !Trabalho1/ModuleTest_summary.html
 �������0uCB4O5v_�xSY�0�� ]��Hb�!�BD33V�QX�/�W� o�훜n����M��)����W7Tݞ5_�~��IR����m*��}	�کO��T��vS�b��U�c+j�`�]]u�N�A��W��n���'c�,���N%nz�V����*�Z�o�
�HЇ��M�/(�{(�ƫe��Yy�F���Xh#�a���-����yA�`B����2�N++�q~`j��̽_Z�_.(���ˣ̓[��XJ�{o�(qߢ�
<n��aÿſ�v���o�p�U@�8�ި��j����u�� 7 ftݛ�������z¬a��i�'E��ڐQ�,���W-�PI������z�-+B'��ۍv��=��jJ8�Ĺ9a]Ψ䇼�-#��SZ' �㝐��>{�u�z�_���$��c+�K:��LR�I��!=�3�6 VX�L�d�ɲ+����d���!��'�h���P$�U�� otx�FuI�d����MU�x�݆̗�C�����~��a�Z
#`���1C�X�+�s�������r
�K����}�/�.BH	۷�h�j�$���x�>���p����A�S�ͨ�:�v�!»c�6�4�q��|u^Rv8���0�E����Y��N@ �F#P�ϯ�����Yp&����J�G���w��`���p�t\?CY0�����d���;.
��
y��	�<fF���.q�������ʙ��n�xH��q7ȫ�p��n'�ͽQ��EϏ�"�0_�kBvo�w�F[�M�o=E/�碘.�r�ȕ)SE�V0 ��VQ�2��|�-3\l�zK("y�dS���dv�� J�?/�̛L�m���)����pJ��XM��*T�x��y��f2�G�e趩W��Rs(���ĝ�Xݮi5i\���g�G���IJz���BwGYZ�e��:'�D�J����Q/�Ԩ�m�%�w!��+`7g��m*S�S�ɟ[9���C(X�i���=���^�C/���O�l�?�?A=�\��/�짬��	�eбY$�4�-~���"��\M��bPB��h�(p?8���lg�p�n�o9XArD�����
 ������e�
�$����դ�t�_��]�mU�+]V�~efUŌ�����o77l���&_��avy'�I�~�����3{|����9��"?���zi�E��W���ߊ��2gI��U�q,�5�����0��Z:;�m~��5�X��Ӫ�-��k
u�H���Х�2�4
7�Uf���\�.��1���Y�!����I0s
eaL:����ֹ���΄G��l�����QQr:D:���Z��ʭկV�`�n�,����K�3��V�g��7HNc��`�\AĪ��#���'lܰ��R^��U���ӑeω5���,�e��t�xt'�f�ʬ(�`3�^g+����-�,�ht�=�����J<�q9�:r�̟33���!��iClp__X�#	��M|&@��sT�J�޷+�֥��L�揂
'S�G�8��ȟ�T�F��
H������.���7v����n�V���THRG���`s�09  ������k�ţF�&��PF.pS�'�QV��n�� S1"�H�r�m#uL���8^�r(tZ�
G�r?i����z������JR����[S�ا�
|�ef�w&���Q���8�c$�@X� -tԳ*'(ہ��&i�6ʃ΃��۩��K2����am���\�:��m�'0�3���%�
���ΰ�>�g������v{�qܡ�=ޙ1�rO�y-A`t��<�&)�K]����E_����߁R�f�L�/ /`����{E=!tR�-������=���,���^��|=1�RE�m��'?m���x8c��`e�Dqhu�a����*|�ӣ[7ە��KT$6��n�'��_ѷ
�� xh.�I�F�F֐җg@�+���g<Bڅw^/�[�ltp�(�>�`�If��&�(0�{pF����[�][ʹ'�e`�AĿ�gb��T�Q���q�\Ov��=+��ڭ����$b�����Ǟ]�8_O�ލ�W5/�R�Ue)(�Uwb�3~�4���&{����]Jw+T�8_��/���������8p}̾f[O��2;U�M(��]\x�LY����<N��"�_x���g�^:vQ�c9J#�	*k�x~9��ANt�o��j���̨�w#���� ���hz��B�t�M�(P�b�m��P)̄�#���]��>U�?M1'�@X7dq)�	Qa���
�5d�/$�O�2<���wN��g:�W����LY�W��]H�e�@��Z��A�ır�UK6�D�K���ףּ�U��D�ENjPc,���+�;���S�ITWB�Z�=WX9
u����H�0�*X�s0l�E"�DS"3,�p�ԏ㈪��.t�{
sF���:���)y�C���b
�]�w?,X�9�??E_�2J�C�@Ս�x��^��}
íf)c.����Y�T*gL>�,z�������xIw������k-�)J,�hU ��.�7�:>yx�<(���9`NE�}�X0��1&����?��bwK�Z
 �����work
|��:�� ��  ��� Trabalho1/ModuleTest.cmd_log
 ������� e33?V^��L��KCn���59#4��75��5����J�R�qM��x�&�8�8�玵�i�$����x�Z�G�;�%A�5ا&ȩ�V�Wп*��>^ʟ��v��)4�J�.uCP��%���XH�-b�Y����
�,.ZЈ:F��)�64�5ڎN�����Q�*ϕ|��w��<����Kd��O�m1�p��x�Ԡ͟�A�l}��|�i�ձ�-���푶�
 ������� j6��	 ߴ�� Trabalho1/SOMADOR_1BIT.vhd
 �����ϥ20tC24�pe�ӹ.% q�pw|
r�* r��0(6)��|��5���o«�����̍�!{��s^���߳%�1_��b�s_V��'�ᗓ
v!'<Te��GzC�vM[�n��6�b�S_~�6��xѱ&���*�qPK	��E܎^��.����a[��^��D�3��_ӿ'=�g��y	@.�[�5(�4�)I�"�?7�@�hy� ��)�X�I&:���!�h�H']�^�!j��=\
;�����1u�c<�Yw6
 �������E6C25�`U���Z�$al��:�B8�p@U�u�?�VH�rJ�B�nC�*�#���~�"�����wq��,Kx���w�9]u��8��DY���w���.�7��ư�zԈ�R]p� o^�m�������,�B�	$+P089W��q�����2���#�&��f,�&�^�if�T5���m�~y�>nM���:���iz������U*Q(CK��4�yɛ<^N�ƱKt=�x\���7|]m��LU�K�	�k�TA���#,����(��6�9�ד
A@�P��J�ge
���.c���i�#t�	�q1����Yk��3k@�2{{��
����3tC���w�
v"�)��t�3c{��+���aѵH:����W}��4��C�RUE�g�9�v�s.kf���B�HB"P
 �����ȧ2@C24_6e^�xR�r�lވ��Û$�8HT M����=��z����M�� ��ݒUof�J�mb�j�$��3����J���I_Z��%�+onq*�A�j�VW{���w��� ��F�I�	h��w(�T�ؿ���:���n���X�d��b��HC��p
�k��(*�c����޺����-a @�t_����L�ὖQ �$����d���+�Ȯ����->w\E_}��B�OQې=��7Jo��*+h�խZݕ)��;���*T�$�U��5k�7�C:֤>p��
��E�&���N<H�R:!E��Fح��%�$Rbdc�\e��w�9y���n��ds��q�as�Ʃ�9���v�M7w6�½�w���V�]Z��ߴ����6�Vz'z8aN���u��^��9Q��G�}�_�;i4�<YV�n�w;�.~�8~�8d�>��v7t�; d�r(Ew��B�w�C�\�3k�[+�_1n�K�|��"�.�EƘ|���4�L
�ĭ_)H�r�hpr5� �$l+�o�DbVZrV�GE0^t?r ;t͠�=7�/o�ĩ5�����C�; `ˣd�.� ɤ�r܊匉j:"94=Y��5s�H�&���L�;;A,�9�$&RY�#^��� e�� ���AN�{��Ԋ�G�l��[�]�l��k���'9WH^���0
�WҭP���hx>�P�9��f�x���͆���5�
�@4E���s}bk��������p�G�`�9�Uq�Q��-LD^�]T�S{������7�L�}
̉�B��ȕ�0�#_ɐ
��m{$�ͪ� �kg[c_`>�Z�m�./��ʕ� ����-����踎������=n�c��?�q����,[ŕ�;=1�x$�Zy�v��b��<G�''���"j�4&�{<�S+$*#� o=#�D ��4��/ $44\� Trabalho1/ModuleTest.ngr
 ������l�WtB34V�Ve���S733y�3 H\`�����r?CH�q�}��2���z޵�J�5���,]8!"���U`�t�D��2�5:6u��.�'/7���&ę?��͕��_�T���ּۢ���u-�寥�nv
�j�����ܥs�]I�(ѧFu'��fp��2W6���{=�~u(��}�V�k�朙�|�Եw�VIS��kT���:�ku]��ѫ�>��������T(M���KSn�?��|����U����ۏʵ�����t�_�y>9(�C��k�}o��ˣs΅{~W���ܭvD�>�[s���~��{;��I���Ɲ3������|$ݢ�Fu���'����z~�B\b%w����nNCuh�YE�Y=@O-څ�t�q�ciӡ��m�p�����V�3��YR� qL����Ra�bd����m%���G	)Г�� �;o�2�2�V��	��,�����U S�XJ
g8/��/�ր2�
�Tҭ3�"���V��ڴU7��\VTW�������Ը�V�׌���пE]J��6T��%��~��tK��qZ��ٿ0W��6�Z���
���qw��l����lz�b
@���E�hk��H?N
j0��K?U�_�	��b�^���
�i��\
�:�Z`d��i6M8mFG��?�2,{��!�~d�>kd�^тu.�2&&��p����2rV�Tz%���Q�~�cC�g,m>1m8�� ��9��z<�K�~���Y�qC�(�Z�7l�Ǎ���	�)ƿ`L<�YaC�����L���r�9<�0�xY�X�4N����B��Ք���t��]�K�7��N�+{*b���&z�(Cd��k� �`,�tC��8~��$��{m�}9��z�@K~��?ݹ��U%��<⼎��ǄE_zѵG��W�4���l���yǇ��C��v? �	)~��eP���>SB*���<����.��s#�!(>=�C��M�iLzW
�@�VCȱ���1:c�{K�2�@M�98q�U
��
uI?=p��<��y�08+�~`��Aϐ�Ss�8��)~� 7j�O��}�/���;s�aS\��N��lEG�)
��S]L��^/\4��T�b��֒rx3?D�
�TR+j㰪��GN#x(k�a#k�l��-�y�� �J�*�Z��Ȅ[EU:��RW��)C�p�D-���`w��-�t�G�5�;���p*0VշXt���n9�&��ܺD	��%"�2�[Cr��dڛ�Ӆ(3���	�b��;�u��_�f�����g`�-��	�r:�}�B�s���{���[�C�!|u����;=��Í��M��
�lw��V-����X�?d�W=�j:�l��E���Y|�����������`b��>j���LOeb�fc>G����;�x��跡=�]\�f��k�aVds�7���Z��l��k�c�}E��f�E����YS���W�w�Ʀ�ғ�e����]5TqR�d��Zc�����wo���[$
]t�k�1�=�$�^�u�Tc�9i�� q��L�z�A����ߧ�2�X��L>h1���?._���X������Ob��"��� �q�ƿA����:�Eiv��*��.��VS���Ț��j�������x���(�؎�y|S���
 �q_�M�Kͮ��D��^���B,���+B
����E2��@���E��譖̮F���c�~�c9��Ѽ!���f(�P�/��zT��tG7�E��6*��eͱ�͓�rH�C�4�� ��'Ҁ Trabalho1/ModuleTest.ngc
 �����̥5VeC3$O5f_�tQ��p��ci6�M4�s��$'1$$@�qH��mC3Y����UU�
T���J�Tmמ���WIו6T��U���[�~
�y?�H*D�+����ି��N^���k�ڠR����r-\�b������WJ��$CY�;O-8n�g">��8�0x)����:EHꦜ�ܒn73��vs�D�&AJ#�˵b�h�a�KѤƋ�y2�D:1�	�� �j+�D����,#����Gl��ͧVԛ��hp�I���2ݶ��,�+'�J��D��ġw�P/%ۍr��M�4�Vdʈ5��h-�?fmU���Ĳ�eh�z����*/�����C5.|�3�ܧQ�?�D�3#�����l�ל����I�DN�3�2�,[�+��T8�&r�H�5��| ��O�_:�j��G�[r�`�M�|��-֪%8Ŏ ��̬.S�3-0
�Hb�*<��V�i7.ŗˀG�/�-; ��ڡTO�MJV(ej��t�U��fNYp�������݂4H�x+L�����ߒ���#�����K#µhG��g�rfFY���� r�-:z�e3d��~�Lz4i��ݣ&C�W����\��l>�)�G�ٝh�^���4#�-�aI�u�
X�~�yc�%��%�[�3�8Nܯ����t��^�֒?�:~�X<H��_%�{� ��l0F���Ӷ*�ΐ��s�g���
��0���L>���0>�ʍ7]y����·P�cl~v�ab「tk�R�oy�����F���7�G3%1�Đ.��`�z���0o��qq!1W87�m�<��]־i2Y�/ ������p���l��d��ɗ��S �yo9�x�x�缄�	�]�����6��Q�e&>%���&�\��s�X�O@���6D�Ɋ4|������Ni��3"1���@;���8�U����f�N	�����UX��#
�[�'�����sx����VN��(_gk�]�:w
����qLarZ�R��ٽ��p��;/�f^ e)��]�KOK�@u�Fo���2�Q)k�ǋy)f:�Qsi���F �< h(�v�d���Γ�o����/�������b
 �������@T434O4^��G'|���p�^�I�ĉP�Y�9:RG�gB��h��+IJ�i���NJ�	R+B ��@@P�C�8S H?����dn(܁��L:�M��
@���[�O�%M���]��¬�E��7� 0�(2�~K�b'-�G
 �����ͭ0
GvB34V�@e��W9��2p���=���r9����s&�6w�nO&W�Ͽ�����]��.�,���a�At*)R�+�ϧc�bT��5K�٭�����&|���j��W.�����u���7��'o��_����E���y^��2E��x]C��U����I��;�V�����h"Z�Î�ri��{�M�j�u�c�u5A偂�y#���)X3�v�:5y�3m�	��|�hʫL���V���l�9�?p7��;cU��� J���:2���np�ɘSAҥ�R��Nv(U���2�Yݣ��wέ2I��U'�Z�+wdH�F�������n|�bUiF�[��ٲ�I?h�r��A_��I����[����%�s�G�<��ia)�"� @\�F��ПR����lR�(<U��	 ��*U��4��״}j�S)Pܜ�&Tڲ֡���n
ϷF�9��%L���:x��"���$5�ЈE:��P��2O Lx�s��-��󍷯J�=�[Z��N��dƔ;�jM֝Bb~��m�p����wNt@@>��"�MP�P��l1]a&�[sZm!�?�DDA5'x����4��..t��`bP�����^v�A5x,H�C�7��|���Ͽ�g�
_y8���k�]Yp^�Y�nhW���ɈwP�췎��n��BN���v:SLQ��v��o|�YZ1�wr�Z�;�1�kĽ���6%ϯ�;)Y��Zd����$h��9�,˩�;�Tsnó��P&��#m�S
Q�$�
�߭$UE��g�ߨ�"ŋ'N \�]9��x�겼��yAǏ5��'E�Y�G�66 +>�|{~=w-��32�ZzC���+dP\C�+כ)B29��ۍ����/���yZ�/�1�)��,�]��尮F�����WN�J�Bz����������t�}�d9��O; 
�_��;��!u������HM@'{��^�o;���o����4�����i6� #�0��� Z�i!��q�ƾ3�Y%�[p�^]�/��9hD���#	���b>c��j��,ުMq���8�	��5�a�;���{K�PB.��P��CirrY�D�
��W�<޲D�{��$ PV�<�i��pp����R�FD���]s�!��9o�G/��q��@CRE�@�#X���
��� �4���B5�oH�@r����.q��;�m��)�No�CV��G`�}��G�7��bKd���-�㷉�!LP/��iؘ$
_����]#<h���(�7��zX��Q�����#.�#N�c�}ԇ�;��m0I�zu��Si��-�
1�mf�?�I�뜁9��L/���As;��"`��ti�UHNY/�n��kT�4��Kj3�[��P�)��b��;��s��b�V��$��5h���0����h��w�������h����w��ri[��P�R��u��1���?���JG�K����g�-��tl�t[F�P�4=�w�$B��
8�k�'��S�0}<��6� �Ga9���T7n�����p��l�&���
jn�!C�2�Fm�;Rn2�J�-0e�۫a��B-�b$� ���]Ww@����=(�m?�%��-�˕�3��>�o�{<��:�����P�Ӱ�m�Ͳ�R'��I .?������;���!�t�/w�> %پ[І{E�М\e����są�-E�n��Q��7��<��/��a>�hr4]Q���������Xz�7�d�����'/=���߃/���#^<
�whuم/��fB�~:�~�G����3��;N-:s>џz9���C>�3^H�O��M�78��r�K�+��03�3[���Z��N��8� �,e(�}�~nA?��w�����قy3���D/h�j:��NZ��ˈg}>�sF�W�}�H��8�� 1;#J� Trabalho1/ModuleTest_map.map
 �����ʥ10dD33O5e^��X�M�	�I���q���6��wz�NȄ�p���|E���L-5 � Cd�__^/��}V*�
��]	�/�({������>��_��$�X�.���6��i#��#Z�ܽ��
Bb{���@/`����)
~�w\Њ�FǩO� v���i}�U��{+�F�&���;V�0]1�
 �����͏
FUCC3F_f_��ݴ�]|�J8²�)��,
˩ǷSVD�:u�(DW��ԩ˧�痮z ���5�;[��O�V�M��57�;W�`�f�{��̟-��WN~z��{p��-���r*��v�����x&�	Ɯ��zXw�����i�ڣ+AK�?���}n1��6��j[<3��-��7f�E;1}��os\H�ڍ6{�+y=ꑾ6w)���קBpNq�J6`>!�p�ԅ��u�+ɝ��;�/orM]^�4���՝��g���T蘔�9n�6��BQ�օ�mm� "���f��ݟ�ũJ�)G��������uu]�c#�q��ӱk���r�E�s�k;6�ݐ'�>�iZ�B����Z�{y&)���%�Vc>�Ny��=��K|��.�5a���{�+��u�_��)�Yo����W������Xv�?K̦ߢ�T	+9KoZJ�M����C�$��������?��9����<���p���[�T�?[�.FƮ�μ����=�
�1��c��� -s��Y2�lv14��͆ߴ́�8��}�@/8%��t/׼�*���`V�Vb��^���f`��TU�h#u5�O�������v�[Z�A�������mcG�����s�����6�~�t؜ch�l�m�����;�߅PA����Lg����1�=�z�~���FW�mO��1�gW+�����im.1�MS�iN�@/>:S����b�?ؔ�4î��@x��ӌ��S��4�Q��%�07k@�g 4��peT����ޡ��c����/,
S3�ץ"��R���סC|#���Y�bv�@��b�,t	�߹��q́!ڶ7����	���IH}c�,�6��i�����C�$�&@_:�do��C�~3;=c*I
�Y08�b1����k�}�#�ߋ_�a����Be-�V���f����>7�`��)��b_�,4@�N��7s�du��+�s%���E5_]��a�SZ�{}�Ũ�A��X�Q���M��+v۸�9cA��/�7AK �%��8�s];PK6�XFy���%Iq�,2�gp$F��T(;7��b�VE�<�7��9�%����Nt�Y$��S8���@�P�b�o�Q�B��q
�@�-46� [����{�t���DP�	�+����Vv�z��C/��,�# ������ ��`N���`�nx�%�7��{z׀��l�z��IJ� HU�oa?w��ň�̉�����*�����"?���4�Wh{A��;�!���_� ��\���.?H����8t)�Q7TU�G����($����n�ޣ\���&�J~�c��B�@
c��XI��B�i���Xk��6;AhU�G �F *h��G<���7���:"�4��5��&@,C�G(�	��b/��E��.Z��fYh�{$B�C���7�.����}�}�d*��\lY?P�v��>-��u��w����V����.���G0�����r2��z�f�9#��۬hT�"p�����k�D�~-EAz��^&��Hs:��M��C<���Wa�8I���8HL)�v���ʅ�� ���¨�v�|�:%��mFS%�t�Z�Y�ߔ���.�+(�M�������I�Vt'�iX���4 w$���(g��0�[�5�<� &�TK�*ޖ���Ε���
�R�#U�J���E�w+<�w��^��*��*G|���X���BS�A.�X$	H�/�h�V��7j?�/s�$7T�9����a^�f�K`���I_���/�M�����6�^��/'(dG�9M ��V�_�0��1?��FǤiv��#��Ң'q��5����� ��^QY�i��4���09s�!	yPGUA��
ҤkC�>Pt�q�]�]W-�h� {Љbc�M��yL*��v�=�<��2o���:|{
Qp~�?����F�hI��+�_{$U�fM�j�5����yQ�����5ئ49��N��Y� �z���)b>���V2����ed��5��`��N���/��}�ABgu
ۊee�N�W�)��a@K�[�j1���V��]�/?�/2��n��}	�G-��㫐�7�W�C���O.$�^���
 �������X	6fE#UT�FD��ĻpS�R`�.�+0A���������Q��)�.��֢>�}6:z(�QS��zWU��(����!�������c����_������
ߑ4x��T�5ש#����ګ/��PY*�����	&�����:� 9�8bhV~�o1*�L*��kW��լ���թR���x��G@Fn��ڌ�@�Έ��A��H��e_zp�k$��'�bj�)W��W�������e�=����s<��A!�c8��t7�>إ�o�rb�/����N��z�/����z8�I�¼�Rc�;�w=���ΕWf�ҙ��B8�W;SN>�����4R���n�
F��۞Ɍ�[�aj2!@c