/**
  ******************************************************************************
  * @file    at_custom_modem_signalling.h
  * @author  MCD Application Team
  * @brief   Header for at_custom_modem_signalling.c module for BG96
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef AT_CUSTOM_SIGNALLING_BG96_H
#define AT_CUSTOM_SIGNALLING_BG96_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "Cellular/Middlewares/ST/STM32_Cellular/Core/AT_Core/Inc/at_core.h"
#include "Cellular/Middlewares/ST/STM32_Cellular/Core/AT_Core/Inc/at_parser.h"
#include "Cellular/Middlewares/ST/STM32_Cellular/Core/AT_Core/Inc/at_modem_api.h"
#include "Cellular/Middlewares/ST/STM32_Cellular/Core/AT_Core/Inc/at_modem_common.h"
#include "Cellular/Drivers/BSP/AT_modem_bg96/Inc/at_custom_modem_specific.h"

/* Exported constants --------------------------------------------------------*/

/* Exported types ------------------------------------------------------------*/

/* External variables --------------------------------------------------------*/

/* Exported macros -----------------------------------------------------------*/

/* Exported functions ------------------------------------------------------- */
/* BG96 build commands overriding common function  or specific */
at_status_t fCmdBuild_ATD_BG96(atparser_context_t *p_atp_ctxt, atcustom_modem_context_t *p_modem_ctxt);
at_status_t fCmdBuild_CGSN_BG96(atparser_context_t *p_atp_ctxt, atcustom_modem_context_t *p_modem_ctxt);
at_status_t fCmdBuild_QPOWD_BG96(atparser_context_t *p_atp_ctxt, atcustom_modem_context_t *p_modem_ctxt);
at_status_t fCmdBuild_QCFG_BG96(atparser_context_t *p_atp_ctxt, atcustom_modem_context_t *p_modem_ctxt);
at_status_t fCmdBuild_QICSGP_BG96(atparser_context_t *p_atp_ctxt, atcustom_modem_context_t *p_modem_ctxt);
at_status_t fCmdBuild_CGDCONT_BG96(atparser_context_t *p_atp_ctxt, atcustom_modem_context_t *p_modem_ctxt);
at_status_t fCmdBuild_QICFG_BG96(atparser_context_t *p_atp_ctxt, atcustom_modem_context_t *p_modem_ctxt);
at_status_t fCmdBuild_QINDCFG_BG96(atparser_context_t *p_atp_ctxt, atcustom_modem_context_t *p_modem_ctxt);
at_status_t fCmdBuild_QENG_BG96(atparser_context_t *p_atp_ctxt, atcustom_modem_context_t *p_modem_ctxt);
at_status_t fCmdBuild_QURCCFG_BG96(atparser_context_t *p_atp_ctxt, atcustom_modem_context_t *p_modem_ctxt);
at_status_t fCmdBuild_QPSMEXTCFG(atparser_context_t *p_atp_ctxt, atcustom_modem_context_t *p_modem_ctxt);
at_status_t fCmdBuild_COPS_BG96(atparser_context_t *p_atp_ctxt, atcustom_modem_context_t *p_modem_ctxt);

/* BG96 specific analyze commands */
at_action_rsp_t fRspAnalyze_Error_BG96(at_context_t *p_at_ctxt, atcustom_modem_context_t *p_modem_ctxt,
                                       const IPC_RxMessage_t *p_msg_in, at_element_info_t *element_infos);
at_action_rsp_t fRspAnalyze_CPIN_BG96(at_context_t *p_at_ctxt, atcustom_modem_context_t *p_modem_ctxt,
                                      const IPC_RxMessage_t *p_msg_in, at_element_info_t *element_infos);
at_action_rsp_t fRspAnalyze_CFUN_BG96(at_context_t *p_at_ctxt, atcustom_modem_context_t *p_modem_ctxt,
                                      const IPC_RxMessage_t *p_msg_in, at_element_info_t *element_infos);
at_action_rsp_t fRspAnalyze_QIND_BG96(at_context_t *p_at_ctxt, atcustom_modem_context_t *p_modem_ctxt,
                                      const IPC_RxMessage_t *p_msg_in, at_element_info_t *element_infos);
at_action_rsp_t fRspAnalyze_QCFG_BG96(at_context_t *p_at_ctxt, atcustom_modem_context_t *p_modem_ctxt,
                                      const IPC_RxMessage_t *p_msg_in, at_element_info_t *element_infos);
at_action_rsp_t fRspAnalyze_QIURC_BG96(at_context_t *p_at_ctxt, atcustom_modem_context_t *p_modem_ctxt,
                                       const IPC_RxMessage_t *p_msg_in, at_element_info_t *element_infos);
at_action_rsp_t fRspAnalyze_QCCID_BG96(at_context_t *p_at_ctxt, atcustom_modem_context_t *p_modem_ctxt,
                                       const IPC_RxMessage_t *p_msg_in, at_element_info_t *element_infos);
at_action_rsp_t fRspAnalyze_QINISTAT_BG96(at_context_t *p_at_ctxt, atcustom_modem_context_t *p_modem_ctxt,
                                          const IPC_RxMessage_t *p_msg_in, at_element_info_t *element_infos);
at_action_rsp_t fRspAnalyze_QCSQ_BG96(at_context_t *p_at_ctxt, atcustom_modem_context_t *p_modem_ctxt,
                                      const IPC_RxMessage_t *p_msg_in, at_element_info_t *element_infos);
at_action_rsp_t fRspAnalyze_QGMR_BG96(at_context_t *p_at_ctxt, atcustom_modem_context_t *p_modem_ctxt,
                                      const IPC_RxMessage_t *p_msg_in, at_element_info_t *element_infos);
at_action_rsp_t fRspAnalyze_QPSMTIMER_BG96(at_context_t *p_at_ctxt, atcustom_modem_context_t *p_modem_ctxt,
                                           const IPC_RxMessage_t *p_msg_in, at_element_info_t *element_infos);
at_action_rsp_t fRspAnalyze_COPS_BG96(at_context_t *p_at_ctxt, atcustom_modem_context_t *p_modem_ctxt,
                                      const IPC_RxMessage_t *p_msg_in, at_element_info_t *element_infos);
/* Exported functions ------------------------------------------------------- */

#ifdef __cplusplus
}
#endif

#endif /* AT_CUSTOM_SIGNALLING_BG96_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
