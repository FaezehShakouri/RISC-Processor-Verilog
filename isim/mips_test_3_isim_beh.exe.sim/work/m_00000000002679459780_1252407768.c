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
static const char *ng0 = "D:/Uni/Term 7/Architecture Lab/CPU/RISC_Processor/Sign_Extend.v";
static int ng1[] = {9, 0};



static void Always_26_0(char *t0)
{
    char t4[8];
    char t7[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2688);
    *((int *)t2) = 1;
    t3 = (t0 + 2400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng1)));
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 6);
    t14 = (t13 & 1);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 6);
    t17 = (t16 & 1);
    *((unsigned int *)t8) = t17;
    xsi_vlog_mul_concat(t7, 9, 1, t5, 1U, t10, 1);
    xsi_vlogtype_concat(t4, 16, 16, 2U, t7, 9, t6, 7);
    t18 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t18, t4, 0, 0, 16, 0LL);
    goto LAB2;

}


extern void work_m_00000000002679459780_1252407768_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_00000000002679459780_1252407768", "isim/mips_test_3_isim_beh.exe.sim/work/m_00000000002679459780_1252407768.didat");
	xsi_register_executes(pe);
}
