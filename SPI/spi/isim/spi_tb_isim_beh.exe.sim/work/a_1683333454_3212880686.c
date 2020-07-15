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
static const char *ng0 = "C:/Users/SWARNADITYA/Desktop/SPI/spi/spi_67.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1683333454_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    unsigned char t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3872);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 992U);
    t5 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t5 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(53, ng0);
    t6 = (t0 + 1832U);
    t7 = *((char **)t6);
    t6 = (t0 + 2448U);
    t8 = *((char **)t6);
    t6 = (t8 + 0);
    memcpy(t6, t7, 16U);
    xsi_set_current_line(54, ng0);

LAB8:    t1 = (t0 + 2568U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t3 = (t9 < 8);
    if (t3 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 3952);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t12 = (15 - 7);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t6 = (t0 + 4016);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t17 = (t8 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t12 = (15 - 15);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t6 = (t0 + 4080);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t17 = (t8 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB6;

LAB9:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1192U);
    t6 = *((char **)t1);
    t4 = *((unsigned char *)t6);
    t5 = (t4 == (unsigned char)2);
    if (t5 != 0)
        goto LAB12;

LAB14:
LAB13:    goto LAB8;

LAB10:;
LAB12:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1352U);
    t7 = *((char **)t1);
    t10 = *((unsigned char *)t7);
    t1 = (t0 + 2448U);
    t8 = *((char **)t1);
    t11 = (15 - 15);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t1 = (t8 + t14);
    *((unsigned char *)t1) = t10;
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 6204);
    *((int *)t1) = 1;
    t2 = (t0 + 6208);
    *((int *)t2) = 14;
    t9 = 1;
    t11 = 14;

LAB15:    if (t9 <= t11)
        goto LAB16;

LAB18:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2448U);
    t6 = *((char **)t1);
    t9 = (0 - 15);
    t12 = (t9 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t1 = (t6 + t14);
    *((unsigned char *)t1) = t3;
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2568U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t11 = (t9 + 1);
    t1 = (t0 + 2568U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((int *)t1) = t11;
    goto LAB13;

LAB16:    xsi_set_current_line(58, ng0);
    t6 = (t0 + 2448U);
    t7 = *((char **)t6);
    t6 = (t0 + 6204);
    t15 = *((int *)t6);
    t16 = (t15 - 15);
    t12 = (t16 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, *((int *)t6));
    t13 = (1U * t12);
    t14 = (0 + t13);
    t8 = (t7 + t14);
    t3 = *((unsigned char *)t8);
    t17 = (t0 + 2448U);
    t18 = *((char **)t17);
    t17 = (t0 + 6204);
    t19 = *((int *)t17);
    t20 = (t19 + 1);
    t21 = (t20 - 15);
    t22 = (t21 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t20);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t25 = (t18 + t24);
    *((unsigned char *)t25) = t3;

LAB17:    t1 = (t0 + 6204);
    t9 = *((int *)t1);
    t2 = (t0 + 6208);
    t11 = *((int *)t2);
    if (t9 == t11)
        goto LAB18;

LAB19:    t15 = (t9 + 1);
    t9 = t15;
    t6 = (t0 + 6204);
    *((int *)t6) = t9;
    goto LAB15;

}


extern void work_a_1683333454_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1683333454_3212880686_p_0};
	xsi_register_didat("work_a_1683333454_3212880686", "isim/spi_tb_isim_beh.exe.sim/work/a_1683333454_3212880686.didat");
	xsi_register_executes(pe);
}
