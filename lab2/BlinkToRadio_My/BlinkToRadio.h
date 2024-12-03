/***********************************************************************
 * @file BlinkToRadio.h
     BLINKTORADIO
 * @brief   header file
 *
 * @Copyright (C)  2018  YangJunhuai. all right reserved
***********************************************************************/
#ifndef __BLINKTORADIO_h__
#define __BLINKTORADIO_h__

enum {
  AM_BLINKTORADIO = 6,
  TIMER_PERIOD_MILLI = 250
};

enum {
  AM_TEST_SERIAL_MSG = 0x89,
};

typedef nx_struct BlinkToRadioMsg {
  nx_uint16_t nodeid;
  nx_uint16_t counter;
} BlinkToRadioMsg;

typedef nx_struct test_serial_msg {
  nx_uint16_t counter;
} test_serial_msg_t;



#endif // __BLINKTORADIO_h__