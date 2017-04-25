#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <log4cplus/loggingmacros.h>
#include <log4cplus/configurator.h>
#include "cnv_liblog4cplus.h"
#include "cnv_log_bridge.h"

#define LOG4CPLUS_C_STR_TO_TCSTR(str) str

//APP共用了一个 logger配置
//SYS,ACC 是独立的 logger 配置,这样 SYS,ACC,APP(APP_DAILY) 分别属于不同的logger
//它们可以独立的输出文件,相互不干扰

#define LOG_APP_ROOT log4cplus::Logger::getInstance(LOG4CPLUS_TEXT("APP.APP"))
#define LOG_ACC_ROOT log4cplus::Logger::getInstance(LOG4CPLUS_TEXT("ACC.ACC"))
#define LOG_SYS_ROOT log4cplus::Logger::getInstance(LOG4CPLUS_TEXT("SYS.SYS"))

//app
void LOG_APP_DEBUG_(const char *buff)
{
    LOG4CPLUS_DEBUG(LOG_APP_ROOT, LOG4CPLUS_C_STR_TO_TCSTR(buff));
}

void LOG_APP_INFO_(const char *buff)
{
    LOG4CPLUS_INFO(LOG_APP_ROOT, LOG4CPLUS_C_STR_TO_TCSTR(buff));
}

void LOG_APP_WARN_(const char *buff)
{
    LOG4CPLUS_WARN(LOG_APP_ROOT, LOG4CPLUS_C_STR_TO_TCSTR(buff));
}

void LOG_APP_ERROR_(const char *buff)
{
    LOG4CPLUS_ERROR(LOG_APP_ROOT, LOG4CPLUS_C_STR_TO_TCSTR(buff));
}

void LOG_APP_FATAL_(const char *buff)
{
    LOG4CPLUS_FATAL(LOG_APP_ROOT, LOG4CPLUS_C_STR_TO_TCSTR(buff));
}

//acc
void LOG_ACC_DEBUG_(const char *buff)
{
    LOG4CPLUS_DEBUG(LOG_ACC_ROOT, LOG4CPLUS_C_STR_TO_TCSTR(buff));
}

void LOG_ACC_INFO_(const char *buff)
{
    LOG4CPLUS_INFO(LOG_ACC_ROOT, LOG4CPLUS_C_STR_TO_TCSTR(buff));
}

void LOG_ACC_WARN_(const char *buff)
{
    LOG4CPLUS_WARN(LOG_ACC_ROOT, LOG4CPLUS_C_STR_TO_TCSTR(buff));
}

void LOG_ACC_ERROR_(const char *buff)
{
    LOG4CPLUS_ERROR(LOG_ACC_ROOT, LOG4CPLUS_C_STR_TO_TCSTR(buff));
}

void LOG_ACC_FATAL_(const char *buff)
{
    LOG4CPLUS_FATAL(LOG_ACC_ROOT, LOG4CPLUS_C_STR_TO_TCSTR(buff));
}

//sys
void LOG_SYS_DEBUG_(const char *buff)
{
    LOG4CPLUS_DEBUG(LOG_SYS_ROOT, LOG4CPLUS_C_STR_TO_TCSTR(buff));
}

void LOG_SYS_INFO_(const char *buff)
{
    LOG4CPLUS_INFO(LOG_SYS_ROOT, LOG4CPLUS_C_STR_TO_TCSTR(buff));
}

void LOG_SYS_WARN_(const char *buff)
{
    LOG4CPLUS_WARN(LOG_SYS_ROOT, LOG4CPLUS_C_STR_TO_TCSTR(buff));
}

void LOG_SYS_ERROR_(const char *buff)
{
    LOG4CPLUS_ERROR(LOG_SYS_ROOT, LOG4CPLUS_C_STR_TO_TCSTR(buff));
}

void LOG_SYS_FATAL_(const char *buff)
{
    LOG4CPLUS_FATAL(LOG_SYS_ROOT, LOG4CPLUS_C_STR_TO_TCSTR(buff));
}

void set_config(const char *filename, char errmsg[], int msg_length)
{
    assert(filename && errmsg && msg_length > 0);

    try
    {
        log4cplus::PropertyConfigurator config(LOG4CPLUS_TEXT(filename));
        config.configure();
    }
    catch(std::exception &e)
    {
        memcpy(errmsg, e.what(), msg_length);
    }
    catch(...)
    {
        strcpy(errmsg, "unknown error.");
    }
}

