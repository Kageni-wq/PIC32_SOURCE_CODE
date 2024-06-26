/******************************************************************************
 Software License Agreement:

 The software supplied herewith by Microchip Technology Incorporated
 (the "Company") for its PICmicro(r) Microcontroller is intended and
 supplied to you, the Company's customer, for use solely and
 exclusively on Microchip PICmicro Microcontroller products. The
 software is owned by the Company and/or its supplier, and is
 protected under applicable copyright laws. All rights are reserved.
 Any use in violation of the foregoing restrictions may subject the
 user to criminal sanctions under applicable laws, as well as to
 civil liability for the breach of the terms and conditions of this
 license.

 THIS SOFTWARE IS PROVIDED IN AN "AS IS" CONDITION. NO WARRANTIES,
 WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT NOT LIMITED
 TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. THE COMPANY SHALL NOT,
 IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL OR
 CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
********************************************************************/
#ifndef BT_GENERAL_EVENT_H
#define BT_GENERAL_EVENT_H

// @ event define
typedef enum {
    BT_EVENT_CMD_SENT_ACK_OK = 0,       //ACK OK
    BT_EVENT_CMD_SENT_ACK_ERROR,        //ACK error
    BT_EVENT_CMD_SENT_NO_ACK,           //no ACK
    
    BT_EVENT_SYS_POWER_ON,
    BT_EVENT_SYS_POWER_OFF,
    BT_EVENT_SYS_STANDBY,
    BT_EVENT_SYS_PAIRING_START,
    BT_EVENT_SYS_PAIRING_OK,
    BT_EVENT_SYS_PAIRING_FAILED,
    BT_EVENT_LINKBACK_SUCCESS,
    BT_EVENT_LINKBACK_FAILED,        
         
    BT_EVENT_HFP_LINK_CONNECTED,
    BT_EVENT_HFP_LINK_DISCONNECTED,
    BT_EVENT_A2DP_LINK_CHANGED,
    BT_EVENT_A2DP_LINK_CONNECTED,
    BT_EVENT_A2DP_LINK_DISCONNECTED,
    BT_EVENT_SPP_LINK_CONNECTED,
    BT_EVENT_IAP_LINK_CONNETED,
    BT_EVENT_SPP_IAP_LINK_DISCONNECTED,
            
    BT_EVENT_MSPK_STANDBY,
    BT_EVENT_MSPK_CONNECTING,
    BT_EVENT_MSPK_CONNECTED_AS_NSPK_MASTER,
    BT_EVENT_MSPK_CONNECTED_AS_NSPK_SLAVE,
    BT_EVENT_MSPK_CONNECTED_AS_BROADCAST_MASTER,
    BT_EVENT_MSPK_CONNECTED_AS_BROADCAST_SLAVE,
    BT_EVENT_MSPK_BROADCAST_MASTER_CONNECTING_MORE,
    BT_EVENT_MSPK_BROADCAST_MASTER_CONNECTING_END,
    BT_EVENT_MSPK_BROADCAST_SLAVE_POWER_OFF,
    BT_EVENT_MSPK__SYNC_POWER_OFF,
    BT_EVENT_MSPK_SYNC_AUDIO_CHANNEL,
	BT_EVENT_NSPK_VENDOR_CMD,
    BT_EVENT_CLK_REPORTED,
    BT_EVENT_READ_EEPROM_OK,
    
    BT_EVENT_BTM_VERSION,
    BT_EVENT_BATTERY_LEVEL,
    BT_EVENT_FEATURE_LIST_RECEIVED,
    BT_EVENT_BD_ADDR_RECEIVED,
    BT_EVENT_NAME_RECEIVED,
    BT_EVENT_PAIR_RECORD_RECEIVED,
    BT_EVENT_LINK_MODE_RECEIVED,
    BT_EVENT_A2DP_BREAK_IN,
    BT_EVENT_PORT_INPUT_CHANGED,
    BT_EVENT_BTM_INITIALIZED,
            
    BT_EVENT_EXCHANGE_CUSTOMER_INFO,        //not broadly use, only for certain firmware
    BT_EVENT_REPORT_TYPE_CODEC,

	BT_EVENT_AT_SOURCE_CHANGE,
	BT_EVENT_AT_MODE_CHANGE,
	BT_EVENT_AT_SAMPLING_RATE_CHANGE,
	BT_EVENT_INQUIRY_RESPONSE,
	BT_EVENT_INQUIRY_COMPLETE,
	BT_EVENT_ACL_CONNECTED,
	BT_EVENT_ACL_DISCONNECTED,
	BT_EVENT_INQUIRY_STARTED
} BT_APP_EVENTS;

typedef enum {
    LE_STATUS_CHANGED = 64,  
            BT_EVENT_SPP_CONNECTED,
            BT_EVENT_IAP_CONNETED,
            BT_EVENT_SPP_IAP_DISCONNECTED,
            BT_EVENT_SPP_IAP_REJECTED,
    BT_DATA_EVENT_MAX
}BT_DATA_EVENTS;

#endif

