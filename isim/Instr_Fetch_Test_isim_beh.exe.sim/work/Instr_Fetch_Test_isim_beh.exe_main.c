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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003362329767_4103217869_init();
    work_m_00000000000779155137_1733832700_init();
    work_m_00000000004220226457_4033376979_init();
    work_m_00000000003304384235_2123150820_init();
    work_m_00000000002076962595_2550994380_init();
    work_m_00000000003261940069_2736469229_init();
    work_m_00000000000543496618_1709345844_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000543496618_1709345844");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
