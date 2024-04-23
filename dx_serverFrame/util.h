/*
 * @Author: dxlinux 2435653946@qq.com
 * @Date: 2024-04-24 00:09:45
 * @LastEditors: dxlinux 2435653946@qq.com
 * @LastEditTime: 2024-04-24 00:18:53
 * @FilePath: /dxsf/dx_serverFrame/util.h
 * @Description: 常用工具函数
 */
#ifndef __DX_UTIL_H__
#define __DX_UTIL_H__

#include <stdint.h>
#include <pthread.h>

namespace dxspace{

/**
 * @brief 返回当前线程的ID
 */
pid_t GetThreadId();

/**
 * @brief 返回当前协程的ID
 */
uint32_t GetFiberId();

}

#endif