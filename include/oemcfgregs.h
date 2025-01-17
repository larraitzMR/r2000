/*
 *****************************************************************************
 *                                                                           *
 *                 IMPINJ CONFIDENTIAL AND PROPRIETARY                       *
 *                                                                           *
 * This source code is the sole property of Impinj, Inc.  Reproduction or    *
 * utilization of this source code in whole or in part is forbidden without  *
 * the prior written consent of Impinj, Inc.                                 *
 *                                                                           *
 * (c) Copyright Impinj, Inc. 2010. All rights reserved.                     *
 *                                                                           *
 *****************************************************************************
 */

/*
 *****************************************************************************
 *
 * $Id: oemcfgregs.h 80889 2012-05-03 17:14:00Z dciampi $
 * 
 * Description:
 *
 *   This file is automatically generated.
 *   Automatic Generator File: source_oemcfg.pl (Version 63541)
 *   Reference File: oemcfg_registers.xml (Version 80847)
 *
 *****************************************************************************
 */

#ifndef H_OEMCFGREGS_H
#define H_OEMCFGREGS_H

/* Address Constants */

#define OEMCFGADDR_WW_YEAR                  0x0000 // Normal
#define OEMCFGADDR_MON_DAY_MIN_SEC          0x0001 // Normal
#define OEMCFGADDR_VEND_SITE_CODE1          0x0002 // Normal
#define OEMCFGADDR_VEND_SITE_CODE2          0x0003 // Normal
#define OEMCFGADDR_PBA_NUM                  0x0004 // Repeat 4 x 1 
#define OEMCFGADDR_CHECKSUM                 0x0008 // Normal
#define OEMCFGADDR_SKU_CAP_CODE             0x0009 // Normal
#define OEMCFGADDR_OEM_CODE                 0x000A // Normal
#define OEMCFGADDR_OEM_VERSION              0x000B // Normal
#define OEMCFGADDR_OEM_CONTENT_ID           0x000C // Normal
#define OEMCFGADDR_USB_VID                  0x000D // Normal
#define OEMCFGADDR_USB_PID                  0x000E // Normal
#define OEMCFGADDR_MFG_NAME_HEADER          0x000F // Normal
#define OEMCFGADDR_MFG_NAME_STRING          0x0010 // Repeat 39 x 1 
#define OEMCFGADDR_PROD_NAME_HEADER         0x0037 // Normal
#define OEMCFGADDR_PROD_NAME_STRING         0x0038 // Repeat 39 x 1 
#define OEMCFGADDR_SERIAL_NUM_HEADER        0x005F // Normal
#define OEMCFGADDR_SERIAL_NUM_STRING        0x0060 // Repeat 39 x 1 
#define OEMCFGADDR_ANT_AVAIL                0x0087 // Normal
#define OEMCFGADDR_GPIO_AVAIL               0x0088 // Normal
#define OEMCFGADDR_LED_AVAIL                0x0089 // Normal
#define OEMCFGADDR_DC_OFFSET_COEFF          0x008A // Normal
#define OEMCFGADDR_PROTSCH_TXTIME_OVHD      0x008B // Normal
#define OEMCFGADDR_DEFAULT_LINK_PROFILE     0x008C // Normal
#define OEMCFGADDR_RESERVED_08D             0x008D // Normal
#define OEMCFGADDR_RESERVED_08E             0x008E // Normal
#define OEMCFGADDR_RESERVED_08F             0x008F // Normal
#define OEMCFGADDR_RESERVED_090             0x0090 // Normal
#define OEMCFGADDR_RFCAL_FWDPWR_A2          0x0091 // Normal
#define OEMCFGADDR_RFCAL_FWDPWR_A1          0x0092 // Normal
#define OEMCFGADDR_RFCAL_FWDPWR_A0          0x0093 // Normal
#define OEMCFGADDR_GGAIN_NEG7_X             0x0094 // Normal
#define OEMCFGADDR_GGAIN_NEG5_X             0x0095 // Normal
#define OEMCFGADDR_GGAIN_NEG3_X             0x0096 // Normal
#define OEMCFGADDR_GGAIN_NEG1_X             0x0097 // Normal
#define OEMCFGADDR_GGAIN_PLUS1_X            0x0098 // Normal
#define OEMCFGADDR_GGAIN_PLUS3_X            0x0099 // Normal
#define OEMCFGADDR_GGAIN_PLUS5_X            0x009A // Normal
#define OEMCFGADDR_GGAIN_PLUS7_X            0x009B // Normal
#define OEMCFGADDR_RSSI_THRESHOLD           0x009C // Normal
#define OEMCFGADDR_REGULATORY_REGION        0x009D // Normal
#define OEMCFGADDR_HW_OPTIONS_FORMAT        0x009E // Normal
#define OEMCFGADDR_HW_OPTIONS0              0x009F // Normal
#define OEMCFGADDR_HW_OPTIONS1              0x00A0 // Normal
#define OEMCFGADDR_HW_OPTIONS2              0x00A1 // Normal
#define OEMCFGADDR_HW_OPTIONS3              0x00A2 // Normal
#define OEMCFGADDR_HW_OPTIONS4              0x00A3 // Normal
#define OEMCFGADDR_HW_OPTIONS5              0x00A4 // Normal
#define OEMCFGADDR_HW_OPTIONS6              0x00A5 // Normal
#define OEMCFGADDR_HW_OPTIONS7              0x00A6 // Normal
#define OEMCFGADDR_HW_OPTIONS8              0x00A7 // Normal
#define OEMCFGADDR_HW_OPTIONS9              0x00A8 // Normal
#define OEMCFGADDR_HW_OPTIONSA              0x00A9 // Normal
#define OEMCFGADDR_HW_OPTIONSB              0x00AA // Normal
#define OEMCFGADDR_HW_OPTIONSC              0x00AB // Normal
#define OEMCFGADDR_HW_OPTIONSD              0x00AC // Normal
#define OEMCFGADDR_HW_OPTIONSE              0x00AD // Normal
#define OEMCFGADDR_HW_OPTIONSF              0x00AE // Normal
#define OEMCFGADDR_RFCAL_FWDPWRTEMPCOMP_C0  0x00AF // Normal
#define OEMCFGADDR_RFCAL_FWDPWRTEMPCOMP_C1  0x00B0 // Normal
#define OEMCFGADDR_RFCAL_FWDPWRTEMPCOMP_RFU 0x00B1 // Normal
#define OEMCFGADDR_RFCAL_FWDPWRFREQCOMP_C0  0x00B2 // Normal
#define OEMCFGADDR_RFCAL_FWDPWRFREQCOMP_C1  0x00B3 // Normal
#define OEMCFGADDR_RFCAL_FWDPWRFREQCOMP_RFU 0x00B4 // Normal
#define OEMCFGADDR_PROTSCH_TXTIME           0x00B5 // Normal
#define OEMCFGADDR_PROTSCH_FTIME            0x00B6 // Normal
#define OEMCFGADDR_RESERVED_0B7             0x00B7 // Normal
#define OEMCFGADDR_RESERVED_0B8             0x00B8 // Normal
#define OEMCFGADDR_RESERVED_0B9             0x00B9 // Normal
#define OEMCFGADDR_RESERVED_0BA             0x00BA // Normal
#define OEMCFGADDR_RESERVED_0BB             0x00BB // Normal
#define OEMCFGADDR_FREQCFG_CHAN_INFO        0x00BC // Repeat 50 x 3 
#define OEMCFGADDR_FREQCFG_PLLDIVMULT       0x00BD // Repeat 50 x 3 
#define OEMCFGADDR_FREQCFG_PLLDACCTL        0x00BE // Repeat 50 x 3 
#define OEMCFGADDR_LBT_CORDIC               0x0152 // Repeat 5 x 1 
#define OEMCFGADDR_LBT_RFU1                 0x0157 // Repeat 5 x 1 
#define OEMCFGADDR_LBT_REGCFG               0x015C // Repeat 380 x 1 
#define OEMCFGADDR_LBT_RFU2                 0x02D8 // Repeat 235 x 1 
#define OEMCFGADDR_LBT_CFGOPTS1             0x03C3 // Normal
#define OEMCFGADDR_BOOTOPTS                 0x03C4 // Normal
#define OEMCFGADDR_SJC_CFG                  0x03C5 // Normal
#define OEMCFGADDR_RFCAL_REVPWR_A2          0x03C6 // Normal
#define OEMCFGADDR_RFCAL_REVPWR_A1          0x03C7 // Normal
#define OEMCFGADDR_RFCAL_REVPWR_A0          0x03C8 // Normal
#define OEMCFGADDR_CAL_AMBIENT_TEMP_A2      0x03C9 // Normal
#define OEMCFGADDR_CAL_AMBIENT_TEMP_A1      0x03CA // Normal
#define OEMCFGADDR_CAL_AMBIENT_TEMP_A0      0x03CB // Normal
#define OEMCFGADDR_CAL_XCVR_TEMP_A2         0x03CC // Normal
#define OEMCFGADDR_CAL_XCVR_TEMP_A1         0x03CD // Normal
#define OEMCFGADDR_CAL_XCVR_TEMP_A0         0x03CE // Normal
#define OEMCFGADDR_CAL_ANT_SENSE_A2         0x03CF // Normal
#define OEMCFGADDR_CAL_ANT_SENSE_A1         0x03D0 // Normal
#define OEMCFGADDR_CAL_ANT_SENSE_A0         0x03D1 // Normal
#define OEMCFGADDR_XCVR_HEALTH_CHECK_CFG    0x03D2 // Normal
#define OEMCFGADDR_CAL_PA_TEMP_A2           0x03D3 // Normal
#define OEMCFGADDR_CAL_PA_TEMP_A1           0x03D4 // Normal
#define OEMCFGADDR_CAL_PA_TEMP_A0           0x03D5 // Normal
#define OEMCFGADDR_CAL_PA_CURRENT_A2        0x03D6 // Normal
#define OEMCFGADDR_CAL_PA_CURRENT_A1        0x03D7 // Normal
#define OEMCFGADDR_CAL_PA_CURRENT_A0        0x03D8 // Normal
#define OEMCFGADDR_CAL_PA_BIAS_DAC          0x03D9 // Normal
#define OEMCFGADDR_AUTO_LOW_POWER_CONFIG    0x03DA // Normal
#define OEMCFGADDR_AUTO_LOW_POWER_CMD_0     0x03DB // Normal
#define OEMCFGADDR_AUTO_LOW_POWER_CMD_1     0x03DC // Normal
#define OEMCFGADDR_AUTO_LOW_POWER_CMD_2     0x03DD // Normal
#define OEMCFGADDR_CAL_EPC_RSSI             0x03DE // Normal
#define OEMCFGADDR_EXPANSION_0              0x03DF // Repeat 31 x 1 
#define OEMCFGADDR_BL_SERIAL_NUMBER_OPTIONS 0x03FE // Normal
#define OEMCFGADDR_GROSSGAIN_CONFIG         0x03FF // Normal
#define OEMCFGADDR_CAL_GROSSGAIN_VALUE      0x0400 // Repeat 32 x 1 
#define OEMCFGADDR_EXPANSION_1              0x0420 // Repeat 224 x 1 
#define OEMCFGADDR_CUSTOMER                 0x0500 // Repeat 256 x 1 
#define OEMCFGADDR_CUSTOM_LPROF0_HEADER_1   0x0600 // Normal
#define OEMCFGADDR_CUSTOM_LPROF0_HEADER_2   0x0601 // Normal
#define OEMCFGADDR_CUSTOM_LPROF0_MAC        0x0602 // Repeat 46 x 1 
#define OEMCFGADDR_CUSTOM_LPROF0_INDY       0x0630 // Repeat 768 x 1 
#define OEMCFGADDR_CUSTOM_LPROF1_HEADER_1   0x0930 // Normal
#define OEMCFGADDR_CUSTOM_LPROF1_HEADER_2   0x0931 // Normal
#define OEMCFGADDR_CUSTOM_LPROF1_MAC        0x0932 // Repeat 46 x 1 
#define OEMCFGADDR_CUSTOM_LPROF1_INDY       0x0960 // Repeat 768 x 1 
#define OEMCFGADDR_REG_INIT_CTRL            0x0C60 // Repeat 256 x 2 
#define OEMCFGADDR_REG_INIT_DATA            0x0C61 // Repeat 256 x 2 
#define OEMCFGADDR_EXPANSION_2              0x0E60 // Repeat 4502 x 1 
#define OEMCFGADDR_OEM_AUTO_INIT_1          0x1FF6 // Normal
#define OEMCFGADDR_OEM_AUTO_INIT_2          0x1FF7 // Normal


/* Length Constants */

#define OEMCFGLEN_WW_YEAR                   1   
#define OEMCFGLEN_MON_DAY_MIN_SEC           1   
#define OEMCFGLEN_VEND_SITE_CODE1           1   
#define OEMCFGLEN_VEND_SITE_CODE2           1   
#define OEMCFGLEN_PBA_NUM                   4   
#define OEMCFGLEN_CHECKSUM                  1   
#define OEMCFGLEN_SKU_CAP_CODE              1   
#define OEMCFGLEN_OEM_CODE                  1   
#define OEMCFGLEN_OEM_VERSION               1   
#define OEMCFGLEN_OEM_CONTENT_ID            1   
#define OEMCFGLEN_USB_VID                   1   
#define OEMCFGLEN_USB_PID                   1   
#define OEMCFGLEN_MFG_NAME_HEADER           1   
#define OEMCFGLEN_MFG_NAME_STRING           39  
#define OEMCFGLEN_PROD_NAME_HEADER          1   
#define OEMCFGLEN_PROD_NAME_STRING          39  
#define OEMCFGLEN_SERIAL_NUM_HEADER         1   
#define OEMCFGLEN_SERIAL_NUM_STRING         39  
#define OEMCFGLEN_ANT_AVAIL                 1   
#define OEMCFGLEN_GPIO_AVAIL                1   
#define OEMCFGLEN_LED_AVAIL                 1   
#define OEMCFGLEN_DC_OFFSET_COEFF           1   
#define OEMCFGLEN_PROTSCH_TXTIME_OVHD       1   
#define OEMCFGLEN_DEFAULT_LINK_PROFILE      1   
#define OEMCFGLEN_RESERVED_08D              1   
#define OEMCFGLEN_RESERVED_08E              1   
#define OEMCFGLEN_RESERVED_08F              1   
#define OEMCFGLEN_RESERVED_090              1   
#define OEMCFGLEN_RFCAL_FWDPWR_A2           1   
#define OEMCFGLEN_RFCAL_FWDPWR_A1           1   
#define OEMCFGLEN_RFCAL_FWDPWR_A0           1   
#define OEMCFGLEN_GGAIN_NEG7_X              1   
#define OEMCFGLEN_GGAIN_NEG5_X              1   
#define OEMCFGLEN_GGAIN_NEG3_X              1   
#define OEMCFGLEN_GGAIN_NEG1_X              1   
#define OEMCFGLEN_GGAIN_PLUS1_X             1   
#define OEMCFGLEN_GGAIN_PLUS3_X             1   
#define OEMCFGLEN_GGAIN_PLUS5_X             1   
#define OEMCFGLEN_GGAIN_PLUS7_X             1   
#define OEMCFGLEN_RSSI_THRESHOLD            1   
#define OEMCFGLEN_REGULATORY_REGION         1   
#define OEMCFGLEN_HW_OPTIONS_FORMAT         1   
#define OEMCFGLEN_HW_OPTIONS0               1   
#define OEMCFGLEN_HW_OPTIONS1               1   
#define OEMCFGLEN_HW_OPTIONS2               1   
#define OEMCFGLEN_HW_OPTIONS3               1   
#define OEMCFGLEN_HW_OPTIONS4               1   
#define OEMCFGLEN_HW_OPTIONS5               1   
#define OEMCFGLEN_HW_OPTIONS6               1   
#define OEMCFGLEN_HW_OPTIONS7               1   
#define OEMCFGLEN_HW_OPTIONS8               1   
#define OEMCFGLEN_HW_OPTIONS9               1   
#define OEMCFGLEN_HW_OPTIONSA               1   
#define OEMCFGLEN_HW_OPTIONSB               1   
#define OEMCFGLEN_HW_OPTIONSC               1   
#define OEMCFGLEN_HW_OPTIONSD               1   
#define OEMCFGLEN_HW_OPTIONSE               1   
#define OEMCFGLEN_HW_OPTIONSF               1   
#define OEMCFGLEN_RFCAL_FWDPWRTEMPCOMP_C0   1   
#define OEMCFGLEN_RFCAL_FWDPWRTEMPCOMP_C1   1   
#define OEMCFGLEN_RFCAL_FWDPWRTEMPCOMP_RFU  1   
#define OEMCFGLEN_RFCAL_FWDPWRFREQCOMP_C0   1   
#define OEMCFGLEN_RFCAL_FWDPWRFREQCOMP_C1   1   
#define OEMCFGLEN_RFCAL_FWDPWRFREQCOMP_RFU  1   
#define OEMCFGLEN_PROTSCH_TXTIME            1   
#define OEMCFGLEN_PROTSCH_FTIME             1   
#define OEMCFGLEN_RESERVED_0B7              1   
#define OEMCFGLEN_RESERVED_0B8              1   
#define OEMCFGLEN_RESERVED_0B9              1   
#define OEMCFGLEN_RESERVED_0BA              1   
#define OEMCFGLEN_RESERVED_0BB              1   
#define OEMCFGLEN_FREQCFG_CHAN_INFO         50  
#define OEMCFGLEN_FREQCFG_PLLDIVMULT        50  
#define OEMCFGLEN_FREQCFG_PLLDACCTL         50  
#define OEMCFGLEN_LBT_CORDIC                5   
#define OEMCFGLEN_LBT_RFU1                  5   
#define OEMCFGLEN_LBT_REGCFG                380 
#define OEMCFGLEN_LBT_RFU2                  235 
#define OEMCFGLEN_LBT_CFGOPTS1              1   
#define OEMCFGLEN_BOOTOPTS                  1   
#define OEMCFGLEN_SJC_CFG                   1   
#define OEMCFGLEN_RFCAL_REVPWR_A2           1   
#define OEMCFGLEN_RFCAL_REVPWR_A1           1   
#define OEMCFGLEN_RFCAL_REVPWR_A0           1   
#define OEMCFGLEN_CAL_AMBIENT_TEMP_A2       1   
#define OEMCFGLEN_CAL_AMBIENT_TEMP_A1       1   
#define OEMCFGLEN_CAL_AMBIENT_TEMP_A0       1   
#define OEMCFGLEN_CAL_XCVR_TEMP_A2          1   
#define OEMCFGLEN_CAL_XCVR_TEMP_A1          1   
#define OEMCFGLEN_CAL_XCVR_TEMP_A0          1   
#define OEMCFGLEN_CAL_ANT_SENSE_A2          1   
#define OEMCFGLEN_CAL_ANT_SENSE_A1          1   
#define OEMCFGLEN_CAL_ANT_SENSE_A0          1   
#define OEMCFGLEN_XCVR_HEALTH_CHECK_CFG     1   
#define OEMCFGLEN_CAL_PA_TEMP_A2            1   
#define OEMCFGLEN_CAL_PA_TEMP_A1            1   
#define OEMCFGLEN_CAL_PA_TEMP_A0            1   
#define OEMCFGLEN_CAL_PA_CURRENT_A2         1   
#define OEMCFGLEN_CAL_PA_CURRENT_A1         1   
#define OEMCFGLEN_CAL_PA_CURRENT_A0         1   
#define OEMCFGLEN_CAL_PA_BIAS_DAC           1   
#define OEMCFGLEN_AUTO_LOW_POWER_CONFIG     1   
#define OEMCFGLEN_AUTO_LOW_POWER_CMD_0      1   
#define OEMCFGLEN_AUTO_LOW_POWER_CMD_1      1   
#define OEMCFGLEN_AUTO_LOW_POWER_CMD_2      1   
#define OEMCFGLEN_CAL_EPC_RSSI              1   
#define OEMCFGLEN_EXPANSION_0               31  
#define OEMCFGLEN_BL_SERIAL_NUMBER_OPTIONS  1   
#define OEMCFGLEN_GROSSGAIN_CONFIG          1   
#define OEMCFGLEN_CAL_GROSSGAIN_VALUE       32  
#define OEMCFGLEN_EXPANSION_1               224 
#define OEMCFGLEN_CUSTOMER                  256 
#define OEMCFGLEN_CUSTOM_LPROF0_HEADER_1    1   
#define OEMCFGLEN_CUSTOM_LPROF0_HEADER_2    1   
#define OEMCFGLEN_CUSTOM_LPROF0_MAC         46  
#define OEMCFGLEN_CUSTOM_LPROF0_INDY        768 
#define OEMCFGLEN_CUSTOM_LPROF1_HEADER_1    1   
#define OEMCFGLEN_CUSTOM_LPROF1_HEADER_2    1   
#define OEMCFGLEN_CUSTOM_LPROF1_MAC         46  
#define OEMCFGLEN_CUSTOM_LPROF1_INDY        768 
#define OEMCFGLEN_REG_INIT_CTRL             256 
#define OEMCFGLEN_REG_INIT_DATA             256 
#define OEMCFGLEN_EXPANSION_2               4502
#define OEMCFGLEN_OEM_AUTO_INIT_1           1   
#define OEMCFGLEN_OEM_AUTO_INIT_2           1   


/* Base Constants */

#define OEMCFGBASE_PBA_NUM                  0x0004 // Register = PBA_NUM
#define OEMCFGBASE_MFG_NAME                 0x000F // Register = MFG_NAME_HEADER
#define OEMCFGBASE_PROD_NAME                0x0037 // Register = PROD_NAME_HEADER
#define OEMCFGBASE_SERIAL_NUM               0x005F // Register = SERIAL_NUM_HEADER
#define OEMCFGBASE_FREQCFG                  0x00BC // Register = FREQCFG_CHAN_INFO
#define OEMCFGBASE_LBT_CORDIC               0x0152 // Register = LBT_CORDIC
#define OEMCFGBASE_LBT_RFU1                 0x0157 // Register = LBT_RFU1
#define OEMCFGBASE_LBT_REGCFG               0x015C // Register = LBT_REGCFG
#define OEMCFGBASE_LBT_RFU2                 0x02D8 // Register = LBT_RFU2
#define OEMCFGBASE_EXPANSION_0              0x03DF // Register = EXPANSION_0
#define OEMCFGBASE_CAL_GROSSGAIN            0x03FF // Register = GROSSGAIN_CONFIG
#define OEMCFGBASE_CAL_GROSSGAIN_VALUE      0x0400 // Register = CAL_GROSSGAIN_VALUE
#define OEMCFGBASE_EXPANSION_1              0x0420 // Register = EXPANSION_1
#define OEMCFGBASE_CUSTOMER                 0x0500 // Register = CUSTOMER
#define OEMCFGBASE_CUSTOM_LPROF0            0x0600 // Register = CUSTOM_LPROF0_HEADER_1
#define OEMCFGBASE_CUSTOM_LPROF1            0x0930 // Register = CUSTOM_LPROF1_HEADER_1
#define OEMCFGBASE_REGINIT                  0x0C60 // Register = REG_INIT_CTRL
#define OEMCFGBASE_EXPANSION_2              0x0E60 // Register = EXPANSION_2


/* Base Size Constants */

#define OEMCFGBASESIZE_PBA_NUM              (OEMCFGLEN_PBA_NUM)
#define OEMCFGBASESIZE_MFG_NAME             (OEMCFGLEN_MFG_NAME_HEADER + OEMCFGLEN_MFG_NAME_STRING)
#define OEMCFGBASESIZE_PROD_NAME            (OEMCFGLEN_PROD_NAME_HEADER + OEMCFGLEN_PROD_NAME_STRING)
#define OEMCFGBASESIZE_SERIAL_NUM           (OEMCFGLEN_SERIAL_NUM_HEADER + OEMCFGLEN_SERIAL_NUM_STRING)
#define OEMCFGBASESIZE_FREQCFG              (OEMCFGLEN_FREQCFG_CHAN_INFO + OEMCFGLEN_FREQCFG_PLLDIVMULT + OEMCFGLEN_FREQCFG_PLLDACCTL)
#define OEMCFGBASESIZE_LBT_CORDIC           (OEMCFGLEN_LBT_CORDIC)
#define OEMCFGBASESIZE_LBT_RFU1             (OEMCFGLEN_LBT_RFU1)
#define OEMCFGBASESIZE_LBT_REGCFG           (OEMCFGLEN_LBT_REGCFG)
#define OEMCFGBASESIZE_LBT_RFU2             (OEMCFGLEN_LBT_RFU2)
#define OEMCFGBASESIZE_EXPANSION_0          (OEMCFGLEN_EXPANSION_0)
#define OEMCFGBASESIZE_CAL_GROSSGAIN        (OEMCFGLEN_GROSSGAIN_CONFIG)
#define OEMCFGBASESIZE_CAL_GROSSGAIN_VALUE  (OEMCFGLEN_CAL_GROSSGAIN_VALUE)
#define OEMCFGBASESIZE_EXPANSION_1          (OEMCFGLEN_EXPANSION_1)
#define OEMCFGBASESIZE_CUSTOMER             (OEMCFGLEN_CUSTOMER)
#define OEMCFGBASESIZE_CUSTOM_LPROF0        (OEMCFGLEN_CUSTOM_LPROF0_HEADER_1 + OEMCFGLEN_CUSTOM_LPROF0_HEADER_2 + OEMCFGLEN_CUSTOM_LPROF0_MAC + OEMCFGLEN_CUSTOM_LPROF0_INDY)
#define OEMCFGBASESIZE_CUSTOM_LPROF1        (OEMCFGLEN_CUSTOM_LPROF1_HEADER_1 + OEMCFGLEN_CUSTOM_LPROF1_HEADER_2 + OEMCFGLEN_CUSTOM_LPROF1_MAC + OEMCFGLEN_CUSTOM_LPROF1_INDY)
#define OEMCFGBASESIZE_REGINIT              (OEMCFGLEN_REG_INIT_CTRL + OEMCFGLEN_REG_INIT_DATA)
#define OEMCFGBASESIZE_EXPANSION_2          (OEMCFGLEN_EXPANSION_2)


/* Other Constants */

#define OEMCFGADDR_FIRST                    0x0000
#define OEMCFGADDR_LAST                     0x1FF7
#define OEMCFG_SIZE                         0x1FF8


/* Area Map Struct */

typedef struct oemcfg_area_map
{
  INT32U ww_year;
  INT32U mon_day_min_sec;
  INT32U vend_site_code1;
  INT32U vend_site_code2;
  INT32U pba_num[OEMCFGBASESIZE_PBA_NUM];
  INT32U checksum;
  INT32U sku_cap_code;
  INT32U oem_code;
  INT32U oem_version;
  INT32U oem_content_id;
  INT32U usb_vid;
  INT32U usb_pid;
  INT32U mfg_name[OEMCFGBASESIZE_MFG_NAME];
  INT32U prod_name[OEMCFGBASESIZE_PROD_NAME];
  INT32U serial_num[OEMCFGBASESIZE_SERIAL_NUM];
  INT32U ant_avail;
  INT32U gpio_avail;
  INT32U led_avail;
  INT32U dc_offset_coeff;
  INT32U protsch_txtime_ovhd;
  INT32U default_link_profile;
  INT32U reserved_08d;
  INT32U reserved_08e;
  INT32U reserved_08f;
  INT32U reserved_090;
  INT32U rfcal_fwdpwr_a2;
  INT32U rfcal_fwdpwr_a1;
  INT32U rfcal_fwdpwr_a0;
  INT32U ggain_neg7_x;
  INT32U ggain_neg5_x;
  INT32U ggain_neg3_x;
  INT32U ggain_neg1_x;
  INT32U ggain_plus1_x;
  INT32U ggain_plus3_x;
  INT32U ggain_plus5_x;
  INT32U ggain_plus7_x;
  INT32U rssi_threshold;
  INT32U regulatory_region;
  INT32U hw_options_format;
  INT32U hw_options0;
  INT32U hw_options1;
  INT32U hw_options2;
  INT32U hw_options3;
  INT32U hw_options4;
  INT32U hw_options5;
  INT32U hw_options6;
  INT32U hw_options7;
  INT32U hw_options8;
  INT32U hw_options9;
  INT32U hw_optionsa;
  INT32U hw_optionsb;
  INT32U hw_optionsc;
  INT32U hw_optionsd;
  INT32U hw_optionse;
  INT32U hw_optionsf;
  INT32U rfcal_fwdpwrtempcomp_c0;
  INT32U rfcal_fwdpwrtempcomp_c1;
  INT32U rfcal_fwdpwrtempcomp_rfu;
  INT32U rfcal_fwdpwrfreqcomp_c0;
  INT32U rfcal_fwdpwrfreqcomp_c1;
  INT32U rfcal_fwdpwrfreqcomp_rfu;
  INT32U protsch_txtime;
  INT32U protsch_ftime;
  INT32U reserved_0b7;
  INT32U reserved_0b8;
  INT32U reserved_0b9;
  INT32U reserved_0ba;
  INT32U reserved_0bb;
  INT32U freqcfg[OEMCFGBASESIZE_FREQCFG];
  INT32U lbt_cordic[OEMCFGBASESIZE_LBT_CORDIC];
  INT32U lbt_rfu1[OEMCFGBASESIZE_LBT_RFU1];
  INT32U lbt_regcfg[OEMCFGBASESIZE_LBT_REGCFG];
  INT32U lbt_rfu2[OEMCFGBASESIZE_LBT_RFU2];
  INT32U lbt_cfgopts1;
  INT32U bootopts;
  INT32U sjc_cfg;
  INT32U rfcal_revpwr_a2;
  INT32U rfcal_revpwr_a1;
  INT32U rfcal_revpwr_a0;
  INT32U cal_ambient_temp_a2;
  INT32U cal_ambient_temp_a1;
  INT32U cal_ambient_temp_a0;
  INT32U cal_xcvr_temp_a2;
  INT32U cal_xcvr_temp_a1;
  INT32U cal_xcvr_temp_a0;
  INT32U cal_ant_sense_a2;
  INT32U cal_ant_sense_a1;
  INT32U cal_ant_sense_a0;
  INT32U xcvr_health_check_cfg;
  INT32U cal_pa_temp_a2;
  INT32U cal_pa_temp_a1;
  INT32U cal_pa_temp_a0;
  INT32U cal_pa_current_a2;
  INT32U cal_pa_current_a1;
  INT32U cal_pa_current_a0;
  INT32U cal_pa_bias_dac;
  INT32U auto_low_power_config;
  INT32U auto_low_power_cmd_0;
  INT32U auto_low_power_cmd_1;
  INT32U auto_low_power_cmd_2;
  INT32U cal_epc_rssi;
  INT32U expansion_0[OEMCFGBASESIZE_EXPANSION_0];
  INT32U bl_serial_number_options;
  INT32U cal_grossgain[OEMCFGBASESIZE_CAL_GROSSGAIN];
  INT32U cal_grossgain_value[OEMCFGBASESIZE_CAL_GROSSGAIN_VALUE];
  INT32U expansion_1[OEMCFGBASESIZE_EXPANSION_1];
  INT32U customer[OEMCFGBASESIZE_CUSTOMER];
  INT32U custom_lprof0[OEMCFGBASESIZE_CUSTOM_LPROF0];
  INT32U custom_lprof1[OEMCFGBASESIZE_CUSTOM_LPROF1];
  INT32U reginit[OEMCFGBASESIZE_REGINIT];
  INT32U expansion_2[OEMCFGBASESIZE_EXPANSION_2];
  INT32U oem_auto_init_1;
  INT32U oem_auto_init_2;
} OEMCFG_AREA_MAP;

/*  List of Castable Area Map Items
   mfg_name [MFG_NAME_HEADER, MFG_NAME_STRING]
   prod_name [PROD_NAME_HEADER, PROD_NAME_STRING]
   serial_num [SERIAL_NUM_HEADER, SERIAL_NUM_STRING]
   freqcfg [FREQCFG_CHAN_INFO, FREQCFG_PLLDIVMULT, FREQCFG_PLLDACCTL]
   custom_lprof0 [CUSTOM_LPROF0_HEADER_1, CUSTOM_LPROF0_HEADER_2, CUSTOM_LPROF0_MAC, CUSTOM_LPROF0_INDY]
   custom_lprof1 [CUSTOM_LPROF1_HEADER_1, CUSTOM_LPROF1_HEADER_2, CUSTOM_LPROF1_MAC, CUSTOM_LPROF1_INDY]
   reginit [REG_INIT_CTRL, REG_INIT_DATA] */


#endif //H_OEMCFGREGS_H

/* End of generated file */

