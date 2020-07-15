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
static const char *ng0 = "C:/Users/SWARNADITYA/Desktop/SPI_effort2/spi/abc.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1683333454_3212880686_p_0(char *t0)
{
    char t24[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    int t12;
    unsigned char t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 4352);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4272);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t9 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)2);
    if (t11 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t15 = (15 - 15);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t3 = (t0 + 4608);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t19 = *((char **)t6);
    memcpy(t19, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t15 = (15 - 7);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t3 = (t0 + 4672);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t19 = *((char **)t6);
    memcpy(t19, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 4736);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 2792U);
    t5 = *((char **)t3);
    t12 = *((int *)t5);
    t13 = (t12 < 8);
    if (t13 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 2312U);
    t6 = *((char **)t3);
    t14 = (15 - 15);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t3 = (t6 + t17);
    t18 = *((unsigned char *)t3);
    t19 = (t0 + 4416);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = t18;
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t15 = (15 - 14);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t3 = (t0 + 4480);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t19 = *((char **)t6);
    memcpy(t19, t1, 15U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t7 = *((unsigned char *)t3);
    t4 = ((IEEE_P_2592010699) + 4024);
    t5 = (t0 + 6980U);
    t1 = xsi_base_array_concat(t1, t24, t4, (char)97, t2, t5, (char)99, t7, (char)101);
    t15 = (15U + 1U);
    t8 = (16U != t15);
    if (t8 == 1)
        goto LAB14;

LAB15:    t6 = (t0 + 4352);
    t19 = (t6 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t1, 16U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t14 = (t12 + 1);
    t1 = (t0 + 4544);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((int *)t6) = t14;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    xsi_size_not_matching(16U, t15, 0);
    goto LAB15;

}


extern void work_a_1683333454_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1683333454_3212880686_p_0};
	xsi_register_didat("work_a_1683333454_3212880686", "isim/spi_tb_isim_beh.exe.sim/work/a_1683333454_3212880686.didat");
	xsi_register_executes(pe);
}
