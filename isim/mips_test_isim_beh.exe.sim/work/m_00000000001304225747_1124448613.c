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
static const char *ng0 = "D:/Uni/Term 7/Architecture Lab/CPU/RISC_Processor/Data_Memory.v";
static const char *ng1 = "data_memory.txt";
static int ng2[] = {15, 0};
static int ng3[] = {8, 0};
static int ng4[] = {1, 0};
static int ng5[] = {7, 0};
static int ng6[] = {0, 0};



static void Initial_33_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 2248);
    xsi_vlogfile_readmemh(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Always_35_1(char *t0)
{
    char t14[8];
    char t23[8];
    char t24[8];
    char t25[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    int t33;
    char *t34;
    unsigned int t35;
    int t36;
    int t37;
    char *t38;
    unsigned int t39;
    int t40;
    int t41;
    unsigned int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3736);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB14;

LAB15:
LAB16:    goto LAB2;

LAB6:    xsi_set_current_line(37, ng0);

LAB9:    xsi_set_current_line(38, ng0);
    t11 = (t0 + 2248);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = (t0 + 2248);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2248);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_array_select_value(t14, 8, t13, t17, t20, 2, 1, t22, 16, 2);
    t21 = (t0 + 2088);
    t26 = (t0 + 2088);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng2)));
    t30 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t23, t24, t25, ((int*)(t28)), 2, t29, 32, 1, t30, 32, 1);
    t31 = (t23 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t24 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    t38 = (t25 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (!(t39));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 2248);
    t15 = (t13 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 1208U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng4)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_add(t23, 32, t18, 16, t17, 32);
    xsi_vlog_generic_get_array_select_value(t14, 8, t4, t12, t16, 2, 1, t23, 32, 2);
    t19 = (t0 + 2088);
    t20 = (t0 + 2088);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t26 = ((char*)((ng5)));
    t27 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t24, t25, t48, ((int*)(t22)), 2, t26, 32, 1, t27, 32, 1);
    t28 = (t24 + 4);
    t6 = *((unsigned int *)t28);
    t33 = (!(t6));
    t29 = (t25 + 4);
    t7 = *((unsigned int *)t29);
    t36 = (!(t7));
    t37 = (t33 && t36);
    t30 = (t48 + 4);
    t8 = *((unsigned int *)t30);
    t40 = (!(t8));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t42 = *((unsigned int *)t25);
    t43 = (t42 + 0);
    t44 = *((unsigned int *)t23);
    t45 = *((unsigned int *)t24);
    t46 = (t44 - t45);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t21, t14, t43, *((unsigned int *)t24), t47, 0LL);
    goto LAB11;

LAB12:    t9 = *((unsigned int *)t48);
    t43 = (t9 + 0);
    t10 = *((unsigned int *)t24);
    t32 = *((unsigned int *)t25);
    t46 = (t10 - t32);
    t47 = (t46 + 1);
    xsi_vlogvar_wait_assign_value(t19, t14, t43, *((unsigned int *)t25), t47, 0LL);
    goto LAB13;

LAB14:    xsi_set_current_line(42, ng0);

LAB17:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    memset(t14, 0, 8);
    t4 = (t14 + 4);
    t11 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t35 = (t32 >> 8);
    *((unsigned int *)t14) = t35;
    t39 = *((unsigned int *)t11);
    t42 = (t39 >> 8);
    *((unsigned int *)t4) = t42;
    t44 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t44 & 255U);
    t45 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t45 & 255U);
    t12 = (t0 + 2248);
    t13 = (t0 + 2248);
    t15 = (t13 + 72U);
    t16 = *((char **)t15);
    t17 = (t0 + 2248);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 1208U);
    t21 = *((char **)t20);
    xsi_vlog_generic_convert_array_indices(t23, t24, t16, t19, 2, 1, t21, 16, 2);
    t20 = (t23 + 4);
    t49 = *((unsigned int *)t20);
    t33 = (!(t49));
    t22 = (t24 + 4);
    t50 = *((unsigned int *)t22);
    t36 = (!(t50));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 255U);
    t32 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t32 & 255U);
    t5 = (t0 + 2248);
    t11 = (t0 + 2248);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t15 = (t0 + 2248);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 1208U);
    t19 = *((char **)t18);
    t18 = ((char*)((ng4)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t19, 16, t18, 32);
    xsi_vlog_generic_convert_array_indices(t23, t24, t13, t17, 2, 1, t25, 32, 2);
    t20 = (t23 + 4);
    t35 = *((unsigned int *)t20);
    t33 = (!(t35));
    t21 = (t24 + 4);
    t39 = *((unsigned int *)t21);
    t36 = (!(t39));
    t37 = (t33 && t36);
    if (t37 == 1)
        goto LAB20;

LAB21:    goto LAB16;

LAB18:    t51 = *((unsigned int *)t23);
    t52 = *((unsigned int *)t24);
    t40 = (t51 - t52);
    t41 = (t40 + 1);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, *((unsigned int *)t24), t41, 0LL);
    goto LAB19;

LAB20:    t42 = *((unsigned int *)t23);
    t44 = *((unsigned int *)t24);
    t40 = (t42 - t44);
    t41 = (t40 + 1);
    xsi_vlogvar_wait_assign_value(t5, t14, 0, *((unsigned int *)t24), t41, 0LL);
    goto LAB21;

}


extern void work_m_00000000001304225747_1124448613_init()
{
	static char *pe[] = {(void *)Initial_33_0,(void *)Always_35_1};
	xsi_register_didat("work_m_00000000001304225747_1124448613", "isim/mips_test_isim_beh.exe.sim/work/m_00000000001304225747_1124448613.didat");
	xsi_register_executes(pe);
}
