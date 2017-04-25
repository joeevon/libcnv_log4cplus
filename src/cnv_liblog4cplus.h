#pragma once
#ifdef __cplusplus
extern "C" {
#endif

#ifndef CNV_LIBLOG4PLUS_H_
#define CNV_LIBLOG4PLUS_H_

#include "cnv_log_bridge.h"

#define LOG4CPLUS_OUTBUF 4096
#define LOG4CPLUS_FILENAME 128
#define _BACKSLASH_ '/'

#define LOGGER_GETFILENAME(pathname, filename) { \
    char *path = (char *)pathname; \
    char *name = (char *)pathname; \
    while(*path) { \
        if(*path == _BACKSLASH_) { \
            name = path; \
            name++;\
        } \
        path++; \
    } \
    if(name) snprintf(filename,LOG4CPLUS_FILENAME,"%s", name); \
}

//设定配置文件
    void set_config(const char *filename, char errmsg[], int msg_length);

// app
#define LOG_APP_DEBUG(fmt, ...) \
  do \
  { \
    char outbuf[LOG4CPLUS_OUTBUF]; \
    char filename[LOG4CPLUS_FILENAME];\
    LOGGER_GETFILENAME(__FILE__,filename);\
    snprintf(outbuf, LOG4CPLUS_OUTBUF, fmt, ## __VA_ARGS__); \
    LOG_APP_DEBUG_(outbuf); \
  } while (0)

#define LOG_APP_INFO(fmt, ...) \
  do \
  { \
    char outbuf[LOG4CPLUS_OUTBUF]; \
    char filename[LOG4CPLUS_FILENAME];\
    LOGGER_GETFILENAME(__FILE__,filename);\
    snprintf(outbuf, LOG4CPLUS_OUTBUF, fmt, ## __VA_ARGS__); \
    LOG_APP_INFO_(outbuf); \
  } while (0)

#define LOG_APP_WARN(fmt, ...) \
  do \
  { \
    char outbuf[LOG4CPLUS_OUTBUF]; \
    char filename[LOG4CPLUS_FILENAME];\
    LOGGER_GETFILENAME(__FILE__,filename);\
    snprintf(outbuf, LOG4CPLUS_OUTBUF, fmt, ## __VA_ARGS__); \
    LOG_APP_WARN_(outbuf); \
  } while (0)

#define LOG_APP_ERROR(fmt, ...) \
  do \
  { \
    char outbuf[LOG4CPLUS_OUTBUF]; \
    char filename[LOG4CPLUS_FILENAME];\
    LOGGER_GETFILENAME(__FILE__,filename);\
    snprintf(outbuf, LOG4CPLUS_OUTBUF, fmt, ## __VA_ARGS__); \
    LOG_APP_ERROR_(outbuf); \
  } while (0)

#define LOG_APP_FATAL(fmt, ...) \
  do \
  { \
    char outbuf[LOG4CPLUS_OUTBUF]; \
    char filename[LOG4CPLUS_FILENAME];\
    LOGGER_GETFILENAME(__FILE__,filename);\
    snprintf(outbuf, LOG4CPLUS_OUTBUF, fmt, ## __VA_ARGS__); \
    LOG_APP_FATAL_(outbuf); \
  } while (0)

// acc
#define LOG_ACC_DEBUG(fmt, ...) \
  do \
  { \
    char outbuf[LOG4CPLUS_OUTBUF]; \
    char filename[LOG4CPLUS_FILENAME];\
    LOGGER_GETFILENAME(__FILE__,filename);\
    snprintf(outbuf, LOG4CPLUS_OUTBUF, fmt, ## __VA_ARGS__); \
    LOG_ACC_DEBUG_(outbuf); \
  } while (0)

#define LOG_ACC_INFO(fmt, ...) \
  do \
  { \
    char outbuf[LOG4CPLUS_OUTBUF]; \
    char filename[LOG4CPLUS_FILENAME];\
    LOGGER_GETFILENAME(__FILE__,filename);\
    snprintf(outbuf, LOG4CPLUS_OUTBUF, fmt, ## __VA_ARGS__); \
    LOG_ACC_INFO_(outbuf); \
  } while (0)

#define LOG_ACC_WARN(fmt, ...) \
  do \
  { \
    char outbuf[LOG4CPLUS_OUTBUF]; \
    char filename[LOG4CPLUS_FILENAME];\
    LOGGER_GETFILENAME(__FILE__,filename);\
    snprintf(outbuf, LOG4CPLUS_OUTBUF, fmt, ## __VA_ARGS__); \
    LOG_ACC_WARN_(outbuf); \
  } while (0)

#define LOG_ACC_ERROR(fmt, ...) \
  do \
  { \
    char outbuf[LOG4CPLUS_OUTBUF]; \
    char filename[LOG4CPLUS_FILENAME];\
    LOGGER_GETFILENAME(__FILE__,filename);\
    snprintf(outbuf, LOG4CPLUS_OUTBUF, fmt, ## __VA_ARGS__); \
    LOG_ACC_ERROR_(outbuf); \
  } while (0)

#define LOG_ACC_FATAL(fmt, ...) \
  do \
  { \
    char outbuf[LOG4CPLUS_OUTBUF]; \
    char filename[LOG4CPLUS_FILENAME];\
    LOGGER_GETFILENAME(__FILE__,filename);\
    snprintf(outbuf, LOG4CPLUS_OUTBUF, fmt, ## __VA_ARGS__); \
    LOG_ACC_FATAL_(outbuf); \
  } while (0)

// sys
#define LOG_SYS_DEBUG(fmt, ...) \
  do \
  { \
    char outbuf[LOG4CPLUS_OUTBUF]; \
    char filename[LOG4CPLUS_FILENAME];\
    LOGGER_GETFILENAME(__FILE__,filename);\
    snprintf(outbuf, LOG4CPLUS_OUTBUF, fmt, ## __VA_ARGS__); \
    LOG_SYS_DEBUG_(outbuf); \
  } while (0)

#define LOG_SYS_INFO(fmt, ...) \
  do \
  { \
    char outbuf[LOG4CPLUS_OUTBUF]; \
    char filename[LOG4CPLUS_FILENAME];\
    LOGGER_GETFILENAME(__FILE__,filename);\
    snprintf(outbuf, LOG4CPLUS_OUTBUF, fmt, ## __VA_ARGS__); \
    LOG_SYS_INFO_(outbuf); \
  } while (0)

#define LOG_SYS_WARN(fmt, ...) \
  do \
  { \
    char outbuf[LOG4CPLUS_OUTBUF]; \
    char filename[LOG4CPLUS_FILENAME];\
    LOGGER_GETFILENAME(__FILE__,filename);\
    snprintf(outbuf, LOG4CPLUS_OUTBUF, fmt, ## __VA_ARGS__); \
    LOG_SYS_WARN_(outbuf); \
  } while (0)

#define LOG_SYS_ERROR(fmt, ...) \
  do \
  { \
    char outbuf[LOG4CPLUS_OUTBUF]; \
    char filename[LOG4CPLUS_FILENAME];\
    LOGGER_GETFILENAME(__FILE__,filename);\
    snprintf(outbuf, LOG4CPLUS_OUTBUF, fmt, ## __VA_ARGS__); \
    LOG_SYS_ERROR_(outbuf); \
  } while (0)

#define LOG_SYS_FATAL(fmt, ...) \
  do \
  { \
    char outbuf[LOG4CPLUS_OUTBUF]; \
    char filename[LOG4CPLUS_FILENAME];\
    LOGGER_GETFILENAME(__FILE__,filename);\
    snprintf(outbuf, LOG4CPLUS_OUTBUF, fmt, ## __VA_ARGS__); \
    LOG_SYS_FATAL_(outbuf); \
  } while (0)

#endif //CNV_LIBLOG4PLUS_H_

#ifdef __cplusplus
}
#endif
