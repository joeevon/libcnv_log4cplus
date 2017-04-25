#pragma once
#ifdef __cplusplus
extern "C" {
#endif

#ifndef LOG_BRIDGE_OUTPUT_H_
#define LOG_BRIDGE_OUTPUT_H_

void LOG_APP_DEBUG_(const char * buff);
void LOG_APP_INFO_(const char * buff);
void LOG_APP_WARN_(const char * buff);
void LOG_APP_ERROR_(const char * buff);
void LOG_APP_FATAL_(const char * buff);

void LOG_ACC_DEBUG_(const char * buff);
void LOG_ACC_INFO_(const char * buff);
void LOG_ACC_WARN_(const char * buff);
void LOG_ACC_ERROR_(const char * buff);
void LOG_ACC_FATAL_(const char * buff);

void LOG_SYS_DEBUG_(const char * buff);
void LOG_SYS_INFO_(const char * buff);
void LOG_SYS_WARN_(const char * buff);
void LOG_SYS_ERROR_(const char * buff);
void LOG_SYS_FATAL_(const char * buff);

 
#endif

#ifdef __cplusplus
}
#endif
