/*
 * Copyright (c) 2020, Armink, <armink.ztl@gmail.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief configuration file
 */


#ifndef _FDB_CFG_H_
#define _FDB_CFG_H_

#include "PikaObj.h"

/* using KVDB feature */
#define FDB_USING_KVDB

#ifdef FDB_USING_KVDB
/* Auto update KV to latest default when current KVDB version number is changed.
 * @see fdb_kvdb.ver_num */
#define FDB_KV_AUTO_UPDATE
#endif

/* using TSDB (Time series database) feature */
#define FDB_USING_TSDB

/* Using file storage mode by POSIX file API, like open/read/write/close */
// #define FDB_USING_FILE_POSIX_MODE

#define FDB_USING_FILE_LIBC_MODE

/* log print macro. default EF_PRINT macro is printf() */
/* #define FDB_PRINT(...)              my_printf(__VA_ARGS__) */

/* print debug information */
#ifndef PIKA_FDB_DEBUG_ENABLE
#define PIKA_FDB_DEBUG_ENABLE 0
#endif

#if PIKA_FDB_DEBUG_ENABLE
#define FDB_DEBUG_ENABLE
#endif

#endif /* _FDB_CFG_H_ */
