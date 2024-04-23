/*
 * @Author: dxlinux 2435653946@qq.com
 * @Date: 2024-04-24 00:22:10
 * @LastEditors: dxlinux 2435653946@qq.com
 * @LastEditTime: 2024-04-24 00:26:26
 * @FilePath: /dxsf/dx_serverFrame/noncopyable.h
 * @Description: 不可拷贝模板
 */
#ifndef __DX_NONCOPYABLE_H__
#define __DX_NONCOPYABLE_H__

namespace dxspace {

/**
 * @brief 对象无法拷贝,赋值
 */
class Noncopyable {
public:
    /**
     * @brief 默认构造函数
     */
    Noncopyable() = default;

    /**
     * @brief 默认析构函数
     */
    ~Noncopyable() = default;

    /**
     * @brief 拷贝构造函数(禁用)
     */
    Noncopyable(const Noncopyable&) = delete;

    /**
     * @brief 赋值函数(禁用)
     */
    Noncopyable& operator=(const Noncopyable&) = delete;
};

}

#endif
