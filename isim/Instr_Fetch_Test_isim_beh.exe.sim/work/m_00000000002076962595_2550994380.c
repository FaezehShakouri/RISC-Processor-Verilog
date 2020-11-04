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
static const char *ng0 = "D:/Uni/Term 7/Architecture Lab/CPU/RISC_Processor/Instruction_Cache.v";
static int ng1[] = {0, 0};
static int ng2[] = {8, 0};
static unsigned int ng3[] = {4294967295U, 4294967295U, 4294967295U, 4294967295U, 1023U, 1023U};
static int ng4[] = {73, 0};
static int ng5[] = {74, 0};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {65535U, 65535U};
static unsigned int ng8[] = {0U, 0U, 0U, 0U, 0U, 0U};
static unsigned int ng9[] = {0U, 0U};
static unsigned int ng10[] = {1U, 0U};
static unsigned int ng11[] = {2U, 0U};
static unsigned int ng12[] = {3U, 0U};
static int ng13[] = {5, 0};
static int ng14[] = {63, 0};
static int ng15[] = {64, 0};



static void Initial_41_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char t25[8];
    char t26[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    int t35;
    char *t36;
    unsigned int t37;
    int t38;
    int t39;
    char *t40;
    unsigned int t41;
    int t42;
    int t43;
    char *t44;
    unsigned int t45;
    int t46;
    int t47;
    char *t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    int t60;

LAB0:    xsi_set_current_line(42, ng0);

LAB2:    xsi_set_current_line(43, ng0);
    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2568);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng7)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);
    xsi_set_current_line(50, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 75);
    xsi_set_current_line(52, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB6:    xsi_set_current_line(45, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 2088);
    t16 = (t0 + 2088);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2088);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2568);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t28 = (t0 + 2088);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng4)));
    t32 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t25, t26, t27, ((int*)(t30)), 2, t31, 32, 1, t32, 32, 1);
    t33 = (t14 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = (t15 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    t39 = (t35 && t38);
    t40 = (t25 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (!(t41));
    t43 = (t39 && t42);
    t44 = (t26 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (!(t45));
    t47 = (t43 && t46);
    t48 = (t27 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    t3 = (t0 + 2088);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2088);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = (t0 + 2568);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t19, 32, 1);
    t20 = (t0 + 2088);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t15, t22, 2, t23, 32, 1);
    t24 = (t5 + 4);
    t7 = *((unsigned int *)t24);
    t35 = (!(t7));
    t28 = (t14 + 4);
    t8 = *((unsigned int *)t28);
    t38 = (!(t8));
    t39 = (t35 && t38);
    t29 = (t15 + 4);
    t9 = *((unsigned int *)t29);
    t42 = (!(t9));
    t43 = (t39 && t42);
    if (t43 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 2568);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng6)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t52 = *((unsigned int *)t27);
    t53 = (t52 + 0);
    t54 = *((unsigned int *)t15);
    t55 = *((unsigned int *)t26);
    t56 = (t54 + t55);
    t57 = *((unsigned int *)t25);
    t58 = *((unsigned int *)t26);
    t59 = (t57 - t58);
    t60 = (t59 + 1);
    xsi_vlogvar_assign_value(t13, t12, t53, t56, t60);
    goto LAB8;

LAB9:    t10 = *((unsigned int *)t14);
    t11 = *((unsigned int *)t15);
    t46 = (t10 + t11);
    xsi_vlogvar_assign_value(t2, t1, 0, t46, 1);
    goto LAB10;

}

static void Always_55_1(char *t0)
{
    char t7[24];
    char t14[8];
    char t24[24];
    char t26[8];
    char t35[8];
    char t42[8];
    char t52[8];
    char t68[8];
    char t76[8];
    char t116[8];
    char t117[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    int t100;
    int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    int t122;
    int t123;
    int t124;
    int t125;
    int t126;
    int t127;
    int t128;
    int t129;
    int t130;
    int t131;
    int t132;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 4056);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2088);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2088);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t15 = (t0 + 1208U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (t18 >> 3);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 3);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 7U);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 7U);
    xsi_vlog_generic_get_array_select_value(t7, 75, t6, t10, t13, 2, 1, t14, 3, 2);
    xsi_vlog_get_part_select_value(t24, 75, t7, 74, 0);
    t25 = (t0 + 2248);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 75);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t14 + 4);
    t6 = (t4 + 16);
    t8 = (t4 + 20);
    t18 = *((unsigned int *)t6);
    t19 = (t18 >> 10);
    t20 = (t19 & 1);
    *((unsigned int *)t14) = t20;
    t21 = *((unsigned int *)t8);
    t22 = (t21 >> 10);
    t23 = (t22 & 1);
    *((unsigned int *)t5) = t23;
    memset(t26, 0, 8);
    t9 = (t14 + 4);
    t27 = *((unsigned int *)t9);
    t28 = (~(t27));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t9) != 0)
        goto LAB8;

LAB9:    t11 = (t26 + 4);
    t32 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t11);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB10;

LAB11:    memcpy(t76, t26, 8);

LAB12:    t108 = (t76 + 4);
    t109 = *((unsigned int *)t108);
    t110 = (~(t109));
    t111 = *((unsigned int *)t76);
    t112 = (t111 & t110);
    t113 = (t112 != 0);
    if (t113 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t35, 0, 8);
    t5 = (t35 + 4);
    t6 = (t4 + 16);
    t8 = (t4 + 20);
    t18 = *((unsigned int *)t6);
    t19 = (t18 >> 10);
    t20 = (t19 & 1);
    *((unsigned int *)t35) = t20;
    t21 = *((unsigned int *)t8);
    t22 = (t21 >> 10);
    t23 = (t22 & 1);
    *((unsigned int *)t5) = t23;
    memset(t26, 0, 8);
    t9 = (t35 + 4);
    t27 = *((unsigned int *)t9);
    t28 = (~(t27));
    t29 = *((unsigned int *)t35);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB41;

LAB39:    if (*((unsigned int *)t9) == 0)
        goto LAB38;

LAB40:    t10 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t10) = 1;

LAB41:    memset(t42, 0, 8);
    t11 = (t26 + 4);
    t32 = *((unsigned int *)t11);
    t33 = (~(t32));
    t34 = *((unsigned int *)t26);
    t36 = (t34 & t33);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t11) != 0)
        goto LAB44;

LAB45:    t13 = (t42 + 4);
    t38 = *((unsigned int *)t42);
    t39 = (!(t38));
    t40 = *((unsigned int *)t13);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB46;

LAB47:    memcpy(t117, t42, 8);

LAB48:    t115 = (t117 + 4);
    t111 = *((unsigned int *)t115);
    t112 = (~(t111));
    t113 = *((unsigned int *)t117);
    t118 = (t113 & t112);
    t119 = (t118 != 0);
    if (t119 > 0)
        goto LAB60;

LAB61:
LAB62:
LAB26:    goto LAB2;

LAB6:    *((unsigned int *)t26) = 1;
    goto LAB9;

LAB8:    t10 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB9;

LAB10:    t12 = (t0 + 1208U);
    t13 = *((char **)t12);
    memset(t35, 0, 8);
    t12 = (t35 + 4);
    t15 = (t13 + 4);
    t36 = *((unsigned int *)t13);
    t37 = (t36 >> 6);
    *((unsigned int *)t35) = t37;
    t38 = *((unsigned int *)t15);
    t39 = (t38 >> 6);
    *((unsigned int *)t12) = t39;
    t40 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t40 & 1023U);
    t41 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t41 & 1023U);
    t16 = (t0 + 2248);
    t17 = (t16 + 56U);
    t25 = *((char **)t17);
    memset(t42, 0, 8);
    t43 = (t42 + 4);
    t44 = (t25 + 16);
    t45 = (t25 + 20);
    t46 = *((unsigned int *)t44);
    t47 = (t46 >> 0);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t45);
    t49 = (t48 >> 0);
    *((unsigned int *)t43) = t49;
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 1023U);
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t51 & 1023U);
    memset(t52, 0, 8);
    t53 = (t35 + 4);
    t54 = (t42 + 4);
    t55 = *((unsigned int *)t35);
    t56 = *((unsigned int *)t42);
    t57 = (t55 ^ t56);
    t58 = *((unsigned int *)t53);
    t59 = *((unsigned int *)t54);
    t60 = (t58 ^ t59);
    t61 = (t57 | t60);
    t62 = *((unsigned int *)t53);
    t63 = *((unsigned int *)t54);
    t64 = (t62 | t63);
    t65 = (~(t64));
    t66 = (t61 & t65);
    if (t66 != 0)
        goto LAB16;

LAB13:    if (t64 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t52) = 1;

LAB16:    memset(t68, 0, 8);
    t69 = (t52 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t52);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t69) != 0)
        goto LAB19;

LAB20:    t77 = *((unsigned int *)t26);
    t78 = *((unsigned int *)t68);
    t79 = (t77 & t78);
    *((unsigned int *)t76) = t79;
    t80 = (t26 + 4);
    t81 = (t68 + 4);
    t82 = (t76 + 4);
    t83 = *((unsigned int *)t80);
    t84 = *((unsigned int *)t81);
    t85 = (t83 | t84);
    *((unsigned int *)t82) = t85;
    t86 = *((unsigned int *)t82);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB15:    t67 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t68) = 1;
    goto LAB20;

LAB19:    t75 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB20;

LAB21:    t88 = *((unsigned int *)t76);
    t89 = *((unsigned int *)t82);
    *((unsigned int *)t76) = (t88 | t89);
    t90 = (t26 + 4);
    t91 = (t68 + 4);
    t92 = *((unsigned int *)t26);
    t93 = (~(t92));
    t94 = *((unsigned int *)t90);
    t95 = (~(t94));
    t96 = *((unsigned int *)t68);
    t97 = (~(t96));
    t98 = *((unsigned int *)t91);
    t99 = (~(t98));
    t100 = (t93 & t95);
    t101 = (t97 & t99);
    t102 = (~(t100));
    t103 = (~(t101));
    t104 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t104 & t102);
    t105 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t105 & t103);
    t106 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t106 & t102);
    t107 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t107 & t103);
    goto LAB23;

LAB24:    xsi_set_current_line(60, ng0);

LAB27:    xsi_set_current_line(61, ng0);
    t114 = ((char*)((ng6)));
    t115 = (t0 + 1928);
    xsi_vlogvar_assign_value(t115, t114, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t18 = *((unsigned int *)t3);
    t19 = (t18 >> 1);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t4);
    t21 = (t20 >> 1);
    *((unsigned int *)t2) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 3U);
    t23 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t23 & 3U);

LAB28:    t5 = ((char*)((ng9)));
    t100 = xsi_vlog_unsigned_case_compare(t14, 2, t5, 2);
    if (t100 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng10)));
    t100 = xsi_vlog_unsigned_case_compare(t14, 2, t2, 2);
    if (t100 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng11)));
    t100 = xsi_vlog_unsigned_case_compare(t14, 2, t2, 2);
    if (t100 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng12)));
    t100 = xsi_vlog_unsigned_case_compare(t14, 2, t2, 2);
    if (t100 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB26;

LAB29:    xsi_set_current_line(63, ng0);
    t6 = (t0 + 2248);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memset(t26, 0, 8);
    t10 = (t26 + 4);
    t11 = (t9 + 8);
    t12 = (t9 + 12);
    t27 = *((unsigned int *)t11);
    t28 = (t27 >> 16);
    *((unsigned int *)t26) = t28;
    t29 = *((unsigned int *)t12);
    t30 = (t29 >> 16);
    *((unsigned int *)t10) = t30;
    t31 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t31 & 65535U);
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & 65535U);
    t13 = (t0 + 1768);
    xsi_vlogvar_assign_value(t13, t26, 0, 0, 16);
    goto LAB37;

LAB31:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 2248);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t26, 0, 8);
    t6 = (t26 + 4);
    t8 = (t5 + 8);
    t9 = (t5 + 12);
    t18 = *((unsigned int *)t8);
    t19 = (t18 >> 0);
    *((unsigned int *)t26) = t19;
    t20 = *((unsigned int *)t9);
    t21 = (t20 >> 0);
    *((unsigned int *)t6) = t21;
    t22 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t22 & 65535U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 65535U);
    t10 = (t0 + 1768);
    xsi_vlogvar_assign_value(t10, t26, 0, 0, 16);
    goto LAB37;

LAB33:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 2248);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t26, 0, 8);
    t6 = (t26 + 4);
    t8 = (t5 + 4);
    t18 = *((unsigned int *)t5);
    t19 = (t18 >> 16);
    *((unsigned int *)t26) = t19;
    t20 = *((unsigned int *)t8);
    t21 = (t20 >> 16);
    *((unsigned int *)t6) = t21;
    t22 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t22 & 65535U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 65535U);
    t9 = (t0 + 1768);
    xsi_vlogvar_assign_value(t9, t26, 0, 0, 16);
    goto LAB37;

LAB35:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 2248);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t26, 0, 8);
    t6 = (t26 + 4);
    t8 = (t5 + 4);
    t18 = *((unsigned int *)t5);
    t19 = (t18 >> 0);
    *((unsigned int *)t26) = t19;
    t20 = *((unsigned int *)t8);
    t21 = (t20 >> 0);
    *((unsigned int *)t6) = t21;
    t22 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t22 & 65535U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 65535U);
    t9 = (t0 + 1768);
    xsi_vlogvar_assign_value(t9, t26, 0, 0, 16);
    goto LAB37;

LAB38:    *((unsigned int *)t26) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t42) = 1;
    goto LAB45;

LAB44:    t12 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB45;

LAB46:    t15 = (t0 + 1208U);
    t16 = *((char **)t15);
    memset(t52, 0, 8);
    t15 = (t52 + 4);
    t17 = (t16 + 4);
    t46 = *((unsigned int *)t16);
    t47 = (t46 >> 6);
    *((unsigned int *)t52) = t47;
    t48 = *((unsigned int *)t17);
    t49 = (t48 >> 6);
    *((unsigned int *)t15) = t49;
    t50 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t50 & 1023U);
    t51 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t51 & 1023U);
    t25 = (t0 + 2248);
    t43 = (t25 + 56U);
    t44 = *((char **)t43);
    memset(t68, 0, 8);
    t45 = (t68 + 4);
    t53 = (t44 + 16);
    t54 = (t44 + 20);
    t55 = *((unsigned int *)t53);
    t56 = (t55 >> 0);
    *((unsigned int *)t68) = t56;
    t57 = *((unsigned int *)t54);
    t58 = (t57 >> 0);
    *((unsigned int *)t45) = t58;
    t59 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t59 & 1023U);
    t60 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t60 & 1023U);
    memset(t76, 0, 8);
    t67 = (t52 + 4);
    t69 = (t68 + 4);
    t61 = *((unsigned int *)t52);
    t62 = *((unsigned int *)t68);
    t63 = (t61 ^ t62);
    t64 = *((unsigned int *)t67);
    t65 = *((unsigned int *)t69);
    t66 = (t64 ^ t65);
    t70 = (t63 | t66);
    t71 = *((unsigned int *)t67);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    t74 = (~(t73));
    t77 = (t70 & t74);
    if (t77 != 0)
        goto LAB50;

LAB49:    if (t73 != 0)
        goto LAB51;

LAB52:    memset(t116, 0, 8);
    t80 = (t76 + 4);
    t78 = *((unsigned int *)t80);
    t79 = (~(t78));
    t83 = *((unsigned int *)t76);
    t84 = (t83 & t79);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t80) != 0)
        goto LAB55;

LAB56:    t86 = *((unsigned int *)t42);
    t87 = *((unsigned int *)t116);
    t88 = (t86 | t87);
    *((unsigned int *)t117) = t88;
    t82 = (t42 + 4);
    t90 = (t116 + 4);
    t91 = (t117 + 4);
    t89 = *((unsigned int *)t82);
    t92 = *((unsigned int *)t90);
    t93 = (t89 | t92);
    *((unsigned int *)t91) = t93;
    t94 = *((unsigned int *)t91);
    t95 = (t94 != 0);
    if (t95 == 1)
        goto LAB57;

LAB58:
LAB59:    goto LAB48;

LAB50:    *((unsigned int *)t76) = 1;
    goto LAB52;

LAB51:    t75 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB52;

LAB53:    *((unsigned int *)t116) = 1;
    goto LAB56;

LAB55:    t81 = (t116 + 4);
    *((unsigned int *)t116) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB56;

LAB57:    t96 = *((unsigned int *)t117);
    t97 = *((unsigned int *)t91);
    *((unsigned int *)t117) = (t96 | t97);
    t108 = (t42 + 4);
    t114 = (t116 + 4);
    t98 = *((unsigned int *)t108);
    t99 = (~(t98));
    t102 = *((unsigned int *)t42);
    t100 = (t102 & t99);
    t103 = *((unsigned int *)t114);
    t104 = (~(t103));
    t105 = *((unsigned int *)t116);
    t101 = (t105 & t104);
    t106 = (~(t100));
    t107 = (~(t101));
    t109 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t109 & t106);
    t110 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t110 & t107);
    goto LAB59;

LAB60:    xsi_set_current_line(71, ng0);

LAB63:    xsi_set_current_line(72, ng0);
    t120 = ((char*)((ng7)));
    t121 = (t0 + 1768);
    xsi_vlogvar_assign_value(t121, t120, 0, 0, 16);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng13)));
    memset(t26, 0, 8);
    t6 = (t4 + 4);
    t8 = (t5 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t8);
    t23 = (t21 ^ t22);
    t27 = (t20 | t23);
    t28 = *((unsigned int *)t6);
    t29 = *((unsigned int *)t8);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB67;

LAB64:    if (t30 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t26) = 1;

LAB67:    t10 = (t26 + 4);
    t33 = *((unsigned int *)t10);
    t34 = (~(t33));
    t36 = *((unsigned int *)t26);
    t37 = (t36 & t34);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB68;

LAB69:
LAB70:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 32, t4, 3, t5, 32);
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t26, 0, 0, 3);
    goto LAB62;

LAB66:    t9 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(76, ng0);

LAB71:    xsi_set_current_line(77, ng0);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    t11 = (t0 + 2088);
    t13 = (t0 + 2088);
    t15 = (t13 + 72U);
    t16 = *((char **)t15);
    t17 = (t0 + 2088);
    t25 = (t17 + 64U);
    t43 = *((char **)t25);
    t44 = (t0 + 1208U);
    t45 = *((char **)t44);
    memset(t52, 0, 8);
    t44 = (t52 + 4);
    t53 = (t45 + 4);
    t39 = *((unsigned int *)t45);
    t40 = (t39 >> 3);
    *((unsigned int *)t52) = t40;
    t41 = *((unsigned int *)t53);
    t46 = (t41 >> 3);
    *((unsigned int *)t44) = t46;
    t47 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t47 & 7U);
    t48 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t48 & 7U);
    xsi_vlog_generic_convert_array_indices(t35, t42, t16, t43, 2, 1, t52, 3, 2);
    t54 = (t0 + 2088);
    t67 = (t54 + 72U);
    t69 = *((char **)t67);
    t75 = ((char*)((ng14)));
    t80 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t68, t76, t116, ((int*)(t69)), 2, t75, 32, 1, t80, 32, 1);
    t81 = (t35 + 4);
    t49 = *((unsigned int *)t81);
    t100 = (!(t49));
    t82 = (t42 + 4);
    t50 = *((unsigned int *)t82);
    t101 = (!(t50));
    t122 = (t100 && t101);
    t90 = (t68 + 4);
    t51 = *((unsigned int *)t90);
    t123 = (!(t51));
    t124 = (t122 && t123);
    t91 = (t76 + 4);
    t55 = *((unsigned int *)t91);
    t125 = (!(t55));
    t126 = (t124 && t125);
    t108 = (t116 + 4);
    t56 = *((unsigned int *)t108);
    t127 = (!(t56));
    t128 = (t126 && t127);
    if (t128 == 1)
        goto LAB72;

LAB73:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t26, 0, 8);
    t2 = (t26 + 4);
    t4 = (t3 + 4);
    t18 = *((unsigned int *)t3);
    t19 = (t18 >> 6);
    *((unsigned int *)t26) = t19;
    t20 = *((unsigned int *)t4);
    t21 = (t20 >> 6);
    *((unsigned int *)t2) = t21;
    t22 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t22 & 1023U);
    t23 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t23 & 1023U);
    t5 = (t0 + 2088);
    t6 = (t0 + 2088);
    t8 = (t6 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2088);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 1208U);
    t15 = *((char **)t13);
    memset(t52, 0, 8);
    t13 = (t52 + 4);
    t16 = (t15 + 4);
    t27 = *((unsigned int *)t15);
    t28 = (t27 >> 3);
    *((unsigned int *)t52) = t28;
    t29 = *((unsigned int *)t16);
    t30 = (t29 >> 3);
    *((unsigned int *)t13) = t30;
    t31 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t31 & 7U);
    t32 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t32 & 7U);
    xsi_vlog_generic_convert_array_indices(t35, t42, t9, t12, 2, 1, t52, 3, 2);
    t17 = (t0 + 2088);
    t25 = (t17 + 72U);
    t43 = *((char **)t25);
    t44 = ((char*)((ng4)));
    t45 = ((char*)((ng15)));
    xsi_vlog_convert_partindices(t68, t76, t116, ((int*)(t43)), 2, t44, 32, 1, t45, 32, 1);
    t53 = (t35 + 4);
    t33 = *((unsigned int *)t53);
    t100 = (!(t33));
    t54 = (t42 + 4);
    t34 = *((unsigned int *)t54);
    t101 = (!(t34));
    t122 = (t100 && t101);
    t67 = (t68 + 4);
    t36 = *((unsigned int *)t67);
    t123 = (!(t36));
    t124 = (t122 && t123);
    t69 = (t76 + 4);
    t37 = *((unsigned int *)t69);
    t125 = (!(t37));
    t126 = (t124 && t125);
    t75 = (t116 + 4);
    t38 = *((unsigned int *)t75);
    t127 = (!(t38));
    t128 = (t126 && t127);
    if (t128 == 1)
        goto LAB74;

LAB75:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2088);
    t4 = (t0 + 2088);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t8 = (t0 + 2088);
    t9 = (t8 + 64U);
    t10 = *((char **)t9);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    memset(t42, 0, 8);
    t11 = (t42 + 4);
    t13 = (t12 + 4);
    t18 = *((unsigned int *)t12);
    t19 = (t18 >> 3);
    *((unsigned int *)t42) = t19;
    t20 = *((unsigned int *)t13);
    t21 = (t20 >> 3);
    *((unsigned int *)t11) = t21;
    t22 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t22 & 7U);
    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 7U);
    xsi_vlog_generic_convert_array_indices(t26, t35, t6, t10, 2, 1, t42, 3, 2);
    t15 = (t0 + 2088);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t25 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t52, t17, 2, t25, 32, 1);
    t43 = (t26 + 4);
    t27 = *((unsigned int *)t43);
    t100 = (!(t27));
    t44 = (t35 + 4);
    t28 = *((unsigned int *)t44);
    t101 = (!(t28));
    t122 = (t100 && t101);
    t45 = (t52 + 4);
    t29 = *((unsigned int *)t45);
    t123 = (!(t29));
    t124 = (t122 && t123);
    if (t124 == 1)
        goto LAB76;

LAB77:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB70;

LAB72:    t57 = *((unsigned int *)t116);
    t129 = (t57 + 0);
    t58 = *((unsigned int *)t42);
    t59 = *((unsigned int *)t76);
    t130 = (t58 + t59);
    t60 = *((unsigned int *)t68);
    t61 = *((unsigned int *)t76);
    t131 = (t60 - t61);
    t132 = (t131 + 1);
    xsi_vlogvar_wait_assign_value(t11, t12, t129, t130, t132, 0LL);
    goto LAB73;

LAB74:    t39 = *((unsigned int *)t116);
    t129 = (t39 + 0);
    t40 = *((unsigned int *)t42);
    t41 = *((unsigned int *)t76);
    t130 = (t40 + t41);
    t46 = *((unsigned int *)t68);
    t47 = *((unsigned int *)t76);
    t131 = (t46 - t47);
    t132 = (t131 + 1);
    xsi_vlogvar_wait_assign_value(t5, t26, t129, t130, t132, 0LL);
    goto LAB75;

LAB76:    t30 = *((unsigned int *)t35);
    t31 = *((unsigned int *)t52);
    t125 = (t30 + t31);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, t125, 1, 0LL);
    goto LAB77;

}


extern void work_m_00000000002076962595_2550994380_init()
{
	static char *pe[] = {(void *)Initial_41_0,(void *)Always_55_1};
	xsi_register_didat("work_m_00000000002076962595_2550994380", "isim/Instr_Fetch_Test_isim_beh.exe.sim/work/m_00000000002076962595_2550994380.didat");
	xsi_register_executes(pe);
}
