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
static const char *ng0 = "C:/Users/SWARNADITYA/Desktop/SPI_effort4/spi/spi.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2958835482_3212880686_p_0(char *t0)
{
    char t22[16];
    char t24[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t23;
    char *t25;
    char *t26;
    int t27;
    unsigned int t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 5472);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 4752);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 992U);
    t5 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t5 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB13;

LAB15:
LAB14:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB21;

LAB23:
LAB22:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB29;

LAB31:
LAB30:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB37;

LAB39:
LAB38:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB45;

LAB47:
LAB46:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB53;

LAB55:
LAB54:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB61;

LAB63:
LAB62:    goto LAB3;

LAB5:    xsi_set_current_line(58, ng0);
    t6 = (t0 + 1192U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)2);
    if (t9 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t12 = (15 - 7);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t6 = (t0 + 4896);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t12 = (15 - 15);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t6 = (t0 + 4960);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);

LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(59, ng0);
    t6 = (t0 + 1672U);
    t10 = *((char **)t6);
    t11 = (0 - 15);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t6 = (t10 + t14);
    t15 = *((unsigned char *)t6);
    t16 = (t0 + 1672U);
    t17 = *((char **)t16);
    t18 = (15 - 15);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t16 = (t17 + t20);
    t23 = ((IEEE_P_2592010699) + 4024);
    t25 = (t24 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = 15;
    t26 = (t25 + 4U);
    *((int *)t26) = 1;
    t26 = (t25 + 8U);
    *((int *)t26) = -1;
    t27 = (1 - 15);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t28;
    t21 = xsi_base_array_concat(t21, t22, t23, (char)99, t15, (char)97, t16, t24, (char)101);
    t28 = (1U + 15U);
    t29 = (16U != t28);
    if (t29 == 1)
        goto LAB11;

LAB12:    t26 = (t0 + 4832);
    t30 = (t26 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t21, 16U);
    xsi_driver_first_trans_fast_port(t26);
    goto LAB9;

LAB11:    xsi_size_not_matching(16U, t28, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1192U);
    t6 = *((char **)t2);
    t4 = *((unsigned char *)t6);
    t5 = (t4 == (unsigned char)2);
    if (t5 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t12 = (15 - 7);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t6 = (t0 + 4896);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t12 = (15 - 15);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t6 = (t0 + 4960);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);

LAB17:    goto LAB14;

LAB16:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1992U);
    t7 = *((char **)t2);
    t11 = (0 - 15);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t7 + t14);
    t8 = *((unsigned char *)t2);
    t10 = (t0 + 1992U);
    t16 = *((char **)t10);
    t18 = (15 - 15);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t10 = (t16 + t20);
    t21 = ((IEEE_P_2592010699) + 4024);
    t23 = (t24 + 0U);
    t25 = (t23 + 0U);
    *((int *)t25) = 15;
    t25 = (t23 + 4U);
    *((int *)t25) = 1;
    t25 = (t23 + 8U);
    *((int *)t25) = -1;
    t27 = (1 - 15);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t25 = (t23 + 12U);
    *((unsigned int *)t25) = t28;
    t17 = xsi_base_array_concat(t17, t22, t21, (char)99, t8, (char)97, t10, t24, (char)101);
    t28 = (1U + 15U);
    t9 = (16U != t28);
    if (t9 == 1)
        goto LAB19;

LAB20:    t25 = (t0 + 5024);
    t26 = (t25 + 56U);
    t30 = *((char **)t26);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t17, 16U);
    xsi_driver_first_trans_fast_port(t25);
    goto LAB17;

LAB19:    xsi_size_not_matching(16U, t28, 0);
    goto LAB20;

LAB21:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1192U);
    t6 = *((char **)t2);
    t4 = *((unsigned char *)t6);
    t5 = (t4 == (unsigned char)2);
    if (t5 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t12 = (15 - 7);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t6 = (t0 + 4896);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t12 = (15 - 15);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t6 = (t0 + 4960);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);

LAB25:    goto LAB22;

LAB24:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2152U);
    t7 = *((char **)t2);
    t11 = (0 - 15);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t7 + t14);
    t8 = *((unsigned char *)t2);
    t10 = (t0 + 2152U);
    t16 = *((char **)t10);
    t18 = (15 - 15);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t10 = (t16 + t20);
    t21 = ((IEEE_P_2592010699) + 4024);
    t23 = (t24 + 0U);
    t25 = (t23 + 0U);
    *((int *)t25) = 15;
    t25 = (t23 + 4U);
    *((int *)t25) = 1;
    t25 = (t23 + 8U);
    *((int *)t25) = -1;
    t27 = (1 - 15);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t25 = (t23 + 12U);
    *((unsigned int *)t25) = t28;
    t17 = xsi_base_array_concat(t17, t22, t21, (char)99, t8, (char)97, t10, t24, (char)101);
    t28 = (1U + 15U);
    t9 = (16U != t28);
    if (t9 == 1)
        goto LAB27;

LAB28:    t25 = (t0 + 5088);
    t26 = (t25 + 56U);
    t30 = *((char **)t26);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t17, 16U);
    xsi_driver_first_trans_fast_port(t25);
    goto LAB25;

LAB27:    xsi_size_not_matching(16U, t28, 0);
    goto LAB28;

LAB29:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1192U);
    t6 = *((char **)t2);
    t4 = *((unsigned char *)t6);
    t5 = (t4 == (unsigned char)2);
    if (t5 != 0)
        goto LAB32;

LAB34:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t12 = (15 - 7);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t6 = (t0 + 4896);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t12 = (15 - 15);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t6 = (t0 + 4960);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);

LAB33:    goto LAB30;

LAB32:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2312U);
    t7 = *((char **)t2);
    t11 = (0 - 15);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t7 + t14);
    t8 = *((unsigned char *)t2);
    t10 = (t0 + 2312U);
    t16 = *((char **)t10);
    t18 = (15 - 15);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t10 = (t16 + t20);
    t21 = ((IEEE_P_2592010699) + 4024);
    t23 = (t24 + 0U);
    t25 = (t23 + 0U);
    *((int *)t25) = 15;
    t25 = (t23 + 4U);
    *((int *)t25) = 1;
    t25 = (t23 + 8U);
    *((int *)t25) = -1;
    t27 = (1 - 15);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t25 = (t23 + 12U);
    *((unsigned int *)t25) = t28;
    t17 = xsi_base_array_concat(t17, t22, t21, (char)99, t8, (char)97, t10, t24, (char)101);
    t28 = (1U + 15U);
    t9 = (16U != t28);
    if (t9 == 1)
        goto LAB35;

LAB36:    t25 = (t0 + 5152);
    t26 = (t25 + 56U);
    t30 = *((char **)t26);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t17, 16U);
    xsi_driver_first_trans_fast_port(t25);
    goto LAB33;

LAB35:    xsi_size_not_matching(16U, t28, 0);
    goto LAB36;

LAB37:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1192U);
    t6 = *((char **)t2);
    t4 = *((unsigned char *)t6);
    t5 = (t4 == (unsigned char)2);
    if (t5 != 0)
        goto LAB40;

LAB42:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t12 = (15 - 7);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t6 = (t0 + 4896);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t12 = (15 - 15);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t6 = (t0 + 4960);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);

LAB41:    goto LAB38;

LAB40:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2472U);
    t7 = *((char **)t2);
    t11 = (0 - 15);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t7 + t14);
    t8 = *((unsigned char *)t2);
    t10 = (t0 + 2472U);
    t16 = *((char **)t10);
    t18 = (15 - 15);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t10 = (t16 + t20);
    t21 = ((IEEE_P_2592010699) + 4024);
    t23 = (t24 + 0U);
    t25 = (t23 + 0U);
    *((int *)t25) = 15;
    t25 = (t23 + 4U);
    *((int *)t25) = 1;
    t25 = (t23 + 8U);
    *((int *)t25) = -1;
    t27 = (1 - 15);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t25 = (t23 + 12U);
    *((unsigned int *)t25) = t28;
    t17 = xsi_base_array_concat(t17, t22, t21, (char)99, t8, (char)97, t10, t24, (char)101);
    t28 = (1U + 15U);
    t9 = (16U != t28);
    if (t9 == 1)
        goto LAB43;

LAB44:    t25 = (t0 + 5216);
    t26 = (t25 + 56U);
    t30 = *((char **)t26);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t17, 16U);
    xsi_driver_first_trans_fast_port(t25);
    goto LAB41;

LAB43:    xsi_size_not_matching(16U, t28, 0);
    goto LAB44;

LAB45:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1192U);
    t6 = *((char **)t2);
    t4 = *((unsigned char *)t6);
    t5 = (t4 == (unsigned char)2);
    if (t5 != 0)
        goto LAB48;

LAB50:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t12 = (15 - 7);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t6 = (t0 + 4896);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t12 = (15 - 15);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t6 = (t0 + 4960);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);

LAB49:    goto LAB46;

LAB48:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2632U);
    t7 = *((char **)t2);
    t11 = (0 - 15);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t7 + t14);
    t8 = *((unsigned char *)t2);
    t10 = (t0 + 2632U);
    t16 = *((char **)t10);
    t18 = (15 - 15);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t10 = (t16 + t20);
    t21 = ((IEEE_P_2592010699) + 4024);
    t23 = (t24 + 0U);
    t25 = (t23 + 0U);
    *((int *)t25) = 15;
    t25 = (t23 + 4U);
    *((int *)t25) = 1;
    t25 = (t23 + 8U);
    *((int *)t25) = -1;
    t27 = (1 - 15);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t25 = (t23 + 12U);
    *((unsigned int *)t25) = t28;
    t17 = xsi_base_array_concat(t17, t22, t21, (char)99, t8, (char)97, t10, t24, (char)101);
    t28 = (1U + 15U);
    t9 = (16U != t28);
    if (t9 == 1)
        goto LAB51;

LAB52:    t25 = (t0 + 5280);
    t26 = (t25 + 56U);
    t30 = *((char **)t26);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t17, 16U);
    xsi_driver_first_trans_fast_port(t25);
    goto LAB49;

LAB51:    xsi_size_not_matching(16U, t28, 0);
    goto LAB52;

LAB53:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1192U);
    t6 = *((char **)t2);
    t4 = *((unsigned char *)t6);
    t5 = (t4 == (unsigned char)2);
    if (t5 != 0)
        goto LAB56;

LAB58:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t12 = (15 - 7);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t6 = (t0 + 4896);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t12 = (15 - 15);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t6 = (t0 + 4960);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);

LAB57:    goto LAB54;

LAB56:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1832U);
    t7 = *((char **)t2);
    t11 = (0 - 15);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t7 + t14);
    t8 = *((unsigned char *)t2);
    t10 = (t0 + 1832U);
    t16 = *((char **)t10);
    t18 = (15 - 15);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t10 = (t16 + t20);
    t21 = ((IEEE_P_2592010699) + 4024);
    t23 = (t24 + 0U);
    t25 = (t23 + 0U);
    *((int *)t25) = 15;
    t25 = (t23 + 4U);
    *((int *)t25) = 1;
    t25 = (t23 + 8U);
    *((int *)t25) = -1;
    t27 = (1 - 15);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t25 = (t23 + 12U);
    *((unsigned int *)t25) = t28;
    t17 = xsi_base_array_concat(t17, t22, t21, (char)99, t8, (char)97, t10, t24, (char)101);
    t28 = (1U + 15U);
    t9 = (16U != t28);
    if (t9 == 1)
        goto LAB59;

LAB60:    t25 = (t0 + 5344);
    t26 = (t25 + 56U);
    t30 = *((char **)t26);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t17, 16U);
    xsi_driver_first_trans_fast_port(t25);
    goto LAB57;

LAB59:    xsi_size_not_matching(16U, t28, 0);
    goto LAB60;

LAB61:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 1192U);
    t6 = *((char **)t2);
    t4 = *((unsigned char *)t6);
    t5 = (t4 == (unsigned char)2);
    if (t5 != 0)
        goto LAB64;

LAB66:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t12 = (15 - 7);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t6 = (t0 + 4896);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t12 = (15 - 15);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t6 = (t0 + 4960);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);

LAB65:    goto LAB62;

LAB64:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 2792U);
    t7 = *((char **)t2);
    t11 = (0 - 15);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t7 + t14);
    t8 = *((unsigned char *)t2);
    t10 = (t0 + 2792U);
    t16 = *((char **)t10);
    t18 = (15 - 15);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t10 = (t16 + t20);
    t21 = ((IEEE_P_2592010699) + 4024);
    t23 = (t24 + 0U);
    t25 = (t23 + 0U);
    *((int *)t25) = 15;
    t25 = (t23 + 4U);
    *((int *)t25) = 1;
    t25 = (t23 + 8U);
    *((int *)t25) = -1;
    t27 = (1 - 15);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t25 = (t23 + 12U);
    *((unsigned int *)t25) = t28;
    t17 = xsi_base_array_concat(t17, t22, t21, (char)99, t8, (char)97, t10, t24, (char)101);
    t28 = (1U + 15U);
    t9 = (16U != t28);
    if (t9 == 1)
        goto LAB67;

LAB68:    t25 = (t0 + 5408);
    t26 = (t25 + 56U);
    t30 = *((char **)t26);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t17, 16U);
    xsi_driver_first_trans_fast_port(t25);
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t12 = (15 - 7);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t6 = (t0 + 4896);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t12 = (15 - 15);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t6 = (t0 + 4960);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB65;

LAB67:    xsi_size_not_matching(16U, t28, 0);
    goto LAB68;

}


extern void work_a_2958835482_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2958835482_3212880686_p_0};
	xsi_register_didat("work_a_2958835482_3212880686", "isim/test6_isim_beh.exe.sim/work/a_2958835482_3212880686.didat");
	xsi_register_executes(pe);
}
