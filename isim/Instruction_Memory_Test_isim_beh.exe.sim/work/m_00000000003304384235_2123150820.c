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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Uni/Term 7/Architecture Lab/CPU/RISC_Processor/Instruction_Memory.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {4294967295U, 4294967295U, 4294967295U, 4294967295U};
static const char *ng3 = "instruction_mem.txt";
static int ng4[] = {1, 0};
static int ng5[] = {4, 0};
static unsigned int ng6[] = {0U, 0U};
static int ng7[] = {7, 0};
static unsigned int ng8[] = {1U, 0U};
static int ng9[] = {15, 0};
static unsigned int ng10[] = {2U, 0U};
static int ng11[] = {16, 0};
static int ng12[] = {23, 0};
static unsigned int ng13[] = {3U, 0U};
static int ng14[] = {24, 0};
static int ng15[] = {31, 0};
static unsigned int ng16[] = {4U, 0U};
static int ng17[] = {32, 0};
static int ng18[] = {39, 0};
static unsigned int ng19[] = {5U, 0U};
static int ng20[] = {40, 0};
static int ng21[] = {47, 0};
static unsigned int ng22[] = {6U, 0U};
static int ng23[] = {48, 0};
static int ng24[] = {55, 0};
static unsigned int ng25[] = {7U, 0U};
static int ng26[] = {56, 0};
static int ng27[] = {63, 0};



static void Initial_41_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(41, ng0);

LAB2:    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1608);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1768);
    xsi_vlogfile_readmemh(ng3, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Always_50_1(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 4072);
    *((int *)t2) = 1;
    t3 = (t0 + 3288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    goto LAB2;

LAB7:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(53, ng0);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 2088);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB12;

}

static void Always_57_2(char *t0)
{
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 3504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 4088);
    *((int *)t2) = 1;
    t3 = (t0 + 3536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t4, 3, t5, 32);
    t6 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t6, t15, 0, 0, 3, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(60, ng0);

LAB9:    xsi_set_current_line(61, ng0);
    t13 = ((char*)((ng4)));
    t14 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 3, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

}

static void Always_68_3(char *t0)
{
    char t8[8];
    char t33[8];
    char t40[8];
    char t42[8];
    char t53[8];
    char t54[8];
    char t55[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    int t63;
    char *t64;
    unsigned int t65;
    int t66;
    int t67;
    char *t68;
    unsigned int t69;
    int t70;
    int t71;
    unsigned int t72;
    int t73;
    unsigned int t74;
    unsigned int t75;
    int t76;
    int t77;

LAB0:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 4104);
    *((int *)t2) = 1;
    t3 = (t0 + 3784);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(69, ng0);

LAB5:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(72, ng0);

LAB13:    xsi_set_current_line(73, ng0);
    t30 = (t0 + 1768);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t34 = (t0 + 1768);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = (t0 + 1768);
    t38 = (t37 + 64U);
    t39 = *((char **)t38);
    t41 = ((char*)((ng6)));
    t43 = (t0 + 1208U);
    t44 = *((char **)t43);
    memset(t42, 0, 8);
    t43 = (t42 + 4);
    t45 = (t44 + 4);
    t46 = *((unsigned int *)t44);
    t47 = (t46 >> 3);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t45);
    t49 = (t48 >> 3);
    *((unsigned int *)t43) = t49;
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 8191U);
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t51 & 8191U);
    xsi_vlogtype_concat(t40, 16, 16, 2U, t42, 13, t41, 3);
    xsi_vlog_generic_get_array_select_value(t33, 8, t32, t36, t39, 2, 1, t40, 16, 2);
    t52 = (t0 + 1608);
    t56 = (t0 + 1608);
    t57 = (t56 + 72U);
    t58 = *((char **)t57);
    t59 = ((char*)((ng1)));
    t60 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t53, t54, t55, ((int*)(t58)), 2, t59, 32, 1, t60, 32, 1);
    t61 = (t53 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (!(t62));
    t64 = (t54 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (!(t65));
    t67 = (t63 && t66);
    t68 = (t55 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (!(t69));
    t71 = (t67 && t70);
    if (t71 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t9 = (t0 + 1768);
    t10 = (t9 + 64U);
    t23 = *((char **)t10);
    t24 = ((char*)((ng8)));
    t30 = (t0 + 1208U);
    t31 = *((char **)t30);
    memset(t40, 0, 8);
    t30 = (t40 + 4);
    t32 = (t31 + 4);
    t11 = *((unsigned int *)t31);
    t12 = (t11 >> 3);
    *((unsigned int *)t40) = t12;
    t13 = *((unsigned int *)t32);
    t14 = (t13 >> 3);
    *((unsigned int *)t30) = t14;
    t15 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t15 & 8191U);
    t16 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t16 & 8191U);
    xsi_vlogtype_concat(t33, 16, 16, 2U, t40, 13, t24, 3);
    xsi_vlog_generic_get_array_select_value(t8, 9, t4, t7, t23, 2, 1, t33, 16, 2);
    t34 = (t0 + 1608);
    t35 = (t0 + 1608);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng7)));
    t39 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t42, t53, t54, ((int*)(t37)), 2, t38, 32, 1, t39, 32, 1);
    t41 = (t42 + 4);
    t17 = *((unsigned int *)t41);
    t63 = (!(t17));
    t43 = (t53 + 4);
    t18 = *((unsigned int *)t43);
    t66 = (!(t18));
    t67 = (t63 && t66);
    t44 = (t54 + 4);
    t19 = *((unsigned int *)t44);
    t70 = (!(t19));
    t71 = (t67 && t70);
    if (t71 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t9 = (t0 + 1768);
    t10 = (t9 + 64U);
    t23 = *((char **)t10);
    t24 = ((char*)((ng10)));
    t30 = (t0 + 1208U);
    t31 = *((char **)t30);
    memset(t40, 0, 8);
    t30 = (t40 + 4);
    t32 = (t31 + 4);
    t11 = *((unsigned int *)t31);
    t12 = (t11 >> 3);
    *((unsigned int *)t40) = t12;
    t13 = *((unsigned int *)t32);
    t14 = (t13 >> 3);
    *((unsigned int *)t30) = t14;
    t15 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t15 & 8191U);
    t16 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t16 & 8191U);
    xsi_vlogtype_concat(t33, 16, 16, 2U, t40, 13, t24, 3);
    xsi_vlog_generic_get_array_select_value(t8, 8, t4, t7, t23, 2, 1, t33, 16, 2);
    t34 = (t0 + 1608);
    t35 = (t0 + 1608);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng11)));
    t39 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t42, t53, t54, ((int*)(t37)), 2, t38, 32, 1, t39, 32, 1);
    t41 = (t42 + 4);
    t17 = *((unsigned int *)t41);
    t63 = (!(t17));
    t43 = (t53 + 4);
    t18 = *((unsigned int *)t43);
    t66 = (!(t18));
    t67 = (t63 && t66);
    t44 = (t54 + 4);
    t19 = *((unsigned int *)t44);
    t70 = (!(t19));
    t71 = (t67 && t70);
    if (t71 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t9 = (t0 + 1768);
    t10 = (t9 + 64U);
    t23 = *((char **)t10);
    t24 = ((char*)((ng13)));
    t30 = (t0 + 1208U);
    t31 = *((char **)t30);
    memset(t40, 0, 8);
    t30 = (t40 + 4);
    t32 = (t31 + 4);
    t11 = *((unsigned int *)t31);
    t12 = (t11 >> 3);
    *((unsigned int *)t40) = t12;
    t13 = *((unsigned int *)t32);
    t14 = (t13 >> 3);
    *((unsigned int *)t30) = t14;
    t15 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t15 & 8191U);
    t16 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t16 & 8191U);
    xsi_vlogtype_concat(t33, 16, 16, 2U, t40, 13, t24, 3);
    xsi_vlog_generic_get_array_select_value(t8, 8, t4, t7, t23, 2, 1, t33, 16, 2);
    t34 = (t0 + 1608);
    t35 = (t0 + 1608);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng14)));
    t39 = ((char*)((ng15)));
    xsi_vlog_convert_partindices(t42, t53, t54, ((int*)(t37)), 2, t38, 32, 1, t39, 32, 1);
    t41 = (t42 + 4);
    t17 = *((unsigned int *)t41);
    t63 = (!(t17));
    t43 = (t53 + 4);
    t18 = *((unsigned int *)t43);
    t66 = (!(t18));
    t67 = (t63 && t66);
    t44 = (t54 + 4);
    t19 = *((unsigned int *)t44);
    t70 = (!(t19));
    t71 = (t67 && t70);
    if (t71 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t9 = (t0 + 1768);
    t10 = (t9 + 64U);
    t23 = *((char **)t10);
    t24 = ((char*)((ng16)));
    t30 = (t0 + 1208U);
    t31 = *((char **)t30);
    memset(t40, 0, 8);
    t30 = (t40 + 4);
    t32 = (t31 + 4);
    t11 = *((unsigned int *)t31);
    t12 = (t11 >> 3);
    *((unsigned int *)t40) = t12;
    t13 = *((unsigned int *)t32);
    t14 = (t13 >> 3);
    *((unsigned int *)t30) = t14;
    t15 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t15 & 8191U);
    t16 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t16 & 8191U);
    xsi_vlogtype_concat(t33, 16, 16, 2U, t40, 13, t24, 3);
    xsi_vlog_generic_get_array_select_value(t8, 8, t4, t7, t23, 2, 1, t33, 16, 2);
    t34 = (t0 + 1608);
    t35 = (t0 + 1608);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng17)));
    t39 = ((char*)((ng18)));
    xsi_vlog_convert_partindices(t42, t53, t54, ((int*)(t37)), 2, t38, 32, 1, t39, 32, 1);
    t41 = (t42 + 4);
    t17 = *((unsigned int *)t41);
    t63 = (!(t17));
    t43 = (t53 + 4);
    t18 = *((unsigned int *)t43);
    t66 = (!(t18));
    t67 = (t63 && t66);
    t44 = (t54 + 4);
    t19 = *((unsigned int *)t44);
    t70 = (!(t19));
    t71 = (t67 && t70);
    if (t71 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t9 = (t0 + 1768);
    t10 = (t9 + 64U);
    t23 = *((char **)t10);
    t24 = ((char*)((ng19)));
    t30 = (t0 + 1208U);
    t31 = *((char **)t30);
    memset(t40, 0, 8);
    t30 = (t40 + 4);
    t32 = (t31 + 4);
    t11 = *((unsigned int *)t31);
    t12 = (t11 >> 3);
    *((unsigned int *)t40) = t12;
    t13 = *((unsigned int *)t32);
    t14 = (t13 >> 3);
    *((unsigned int *)t30) = t14;
    t15 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t15 & 8191U);
    t16 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t16 & 8191U);
    xsi_vlogtype_concat(t33, 16, 16, 2U, t40, 13, t24, 3);
    xsi_vlog_generic_get_array_select_value(t8, 8, t4, t7, t23, 2, 1, t33, 16, 2);
    t34 = (t0 + 1608);
    t35 = (t0 + 1608);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng20)));
    t39 = ((char*)((ng21)));
    xsi_vlog_convert_partindices(t42, t53, t54, ((int*)(t37)), 2, t38, 32, 1, t39, 32, 1);
    t41 = (t42 + 4);
    t17 = *((unsigned int *)t41);
    t63 = (!(t17));
    t43 = (t53 + 4);
    t18 = *((unsigned int *)t43);
    t66 = (!(t18));
    t67 = (t63 && t66);
    t44 = (t54 + 4);
    t19 = *((unsigned int *)t44);
    t70 = (!(t19));
    t71 = (t67 && t70);
    if (t71 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t9 = (t0 + 1768);
    t10 = (t9 + 64U);
    t23 = *((char **)t10);
    t24 = ((char*)((ng22)));
    t30 = (t0 + 1208U);
    t31 = *((char **)t30);
    memset(t40, 0, 8);
    t30 = (t40 + 4);
    t32 = (t31 + 4);
    t11 = *((unsigned int *)t31);
    t12 = (t11 >> 3);
    *((unsigned int *)t40) = t12;
    t13 = *((unsigned int *)t32);
    t14 = (t13 >> 3);
    *((unsigned int *)t30) = t14;
    t15 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t15 & 8191U);
    t16 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t16 & 8191U);
    xsi_vlogtype_concat(t33, 16, 16, 2U, t40, 13, t24, 3);
    xsi_vlog_generic_get_array_select_value(t8, 8, t4, t7, t23, 2, 1, t33, 16, 2);
    t34 = (t0 + 1608);
    t35 = (t0 + 1608);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng23)));
    t39 = ((char*)((ng24)));
    xsi_vlog_convert_partindices(t42, t53, t54, ((int*)(t37)), 2, t38, 32, 1, t39, 32, 1);
    t41 = (t42 + 4);
    t17 = *((unsigned int *)t41);
    t63 = (!(t17));
    t43 = (t53 + 4);
    t18 = *((unsigned int *)t43);
    t66 = (!(t18));
    t67 = (t63 && t66);
    t44 = (t54 + 4);
    t19 = *((unsigned int *)t44);
    t70 = (!(t19));
    t71 = (t67 && t70);
    if (t71 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t9 = (t0 + 1768);
    t10 = (t9 + 64U);
    t23 = *((char **)t10);
    t24 = ((char*)((ng25)));
    t30 = (t0 + 1208U);
    t31 = *((char **)t30);
    memset(t40, 0, 8);
    t30 = (t40 + 4);
    t32 = (t31 + 4);
    t11 = *((unsigned int *)t31);
    t12 = (t11 >> 3);
    *((unsigned int *)t40) = t12;
    t13 = *((unsigned int *)t32);
    t14 = (t13 >> 3);
    *((unsigned int *)t30) = t14;
    t15 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t15 & 8191U);
    t16 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t16 & 8191U);
    xsi_vlogtype_concat(t33, 16, 16, 2U, t40, 13, t24, 3);
    xsi_vlog_generic_get_array_select_value(t8, 8, t4, t7, t23, 2, 1, t33, 16, 2);
    t34 = (t0 + 1608);
    t35 = (t0 + 1608);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng26)));
    t39 = ((char*)((ng27)));
    xsi_vlog_convert_partindices(t42, t53, t54, ((int*)(t37)), 2, t38, 32, 1, t39, 32, 1);
    t41 = (t42 + 4);
    t17 = *((unsigned int *)t41);
    t63 = (!(t17));
    t43 = (t53 + 4);
    t18 = *((unsigned int *)t43);
    t66 = (!(t18));
    t67 = (t63 && t66);
    t44 = (t54 + 4);
    t19 = *((unsigned int *)t44);
    t70 = (!(t19));
    t71 = (t67 && t70);
    if (t71 == 1)
        goto LAB28;

LAB29:    goto LAB12;

LAB14:    t72 = *((unsigned int *)t55);
    t73 = (t72 + 0);
    t74 = *((unsigned int *)t53);
    t75 = *((unsigned int *)t54);
    t76 = (t74 - t75);
    t77 = (t76 + 1);
    xsi_vlogvar_wait_assign_value(t52, t33, t73, *((unsigned int *)t54), t77, 0LL);
    goto LAB15;

LAB16:    t20 = *((unsigned int *)t54);
    t73 = (t20 + 0);
    t21 = *((unsigned int *)t42);
    t22 = *((unsigned int *)t53);
    t76 = (t21 - t22);
    t77 = (t76 + 1);
    xsi_vlogvar_wait_assign_value(t34, t8, t73, *((unsigned int *)t53), t77, 0LL);
    goto LAB17;

LAB18:    t20 = *((unsigned int *)t54);
    t73 = (t20 + 0);
    t21 = *((unsigned int *)t42);
    t22 = *((unsigned int *)t53);
    t76 = (t21 - t22);
    t77 = (t76 + 1);
    xsi_vlogvar_wait_assign_value(t34, t8, t73, *((unsigned int *)t53), t77, 0LL);
    goto LAB19;

LAB20:    t20 = *((unsigned int *)t54);
    t73 = (t20 + 0);
    t21 = *((unsigned int *)t42);
    t22 = *((unsigned int *)t53);
    t76 = (t21 - t22);
    t77 = (t76 + 1);
    xsi_vlogvar_wait_assign_value(t34, t8, t73, *((unsigned int *)t53), t77, 0LL);
    goto LAB21;

LAB22:    t20 = *((unsigned int *)t54);
    t73 = (t20 + 0);
    t21 = *((unsigned int *)t42);
    t22 = *((unsigned int *)t53);
    t76 = (t21 - t22);
    t77 = (t76 + 1);
    xsi_vlogvar_wait_assign_value(t34, t8, t73, *((unsigned int *)t53), t77, 0LL);
    goto LAB23;

LAB24:    t20 = *((unsigned int *)t54);
    t73 = (t20 + 0);
    t21 = *((unsigned int *)t42);
    t22 = *((unsigned int *)t53);
    t76 = (t21 - t22);
    t77 = (t76 + 1);
    xsi_vlogvar_wait_assign_value(t34, t8, t73, *((unsigned int *)t53), t77, 0LL);
    goto LAB25;

LAB26:    t20 = *((unsigned int *)t54);
    t73 = (t20 + 0);
    t21 = *((unsigned int *)t42);
    t22 = *((unsigned int *)t53);
    t76 = (t21 - t22);
    t77 = (t76 + 1);
    xsi_vlogvar_wait_assign_value(t34, t8, t73, *((unsigned int *)t53), t77, 0LL);
    goto LAB27;

LAB28:    t20 = *((unsigned int *)t54);
    t73 = (t20 + 0);
    t21 = *((unsigned int *)t42);
    t22 = *((unsigned int *)t53);
    t76 = (t21 - t22);
    t77 = (t76 + 1);
    xsi_vlogvar_wait_assign_value(t34, t8, t73, *((unsigned int *)t53), t77, 0LL);
    goto LAB29;

}


extern void work_m_00000000003304384235_2123150820_init()
{
	static char *pe[] = {(void *)Initial_41_0,(void *)Always_50_1,(void *)Always_57_2,(void *)Always_68_3};
	xsi_register_didat("work_m_00000000003304384235_2123150820", "isim/Instruction_Memory_Test_isim_beh.exe.sim/work/m_00000000003304384235_2123150820.didat");
	xsi_register_executes(pe);
}
