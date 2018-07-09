#pragma once

#include "DLL2Config.h"

class SOMEDLL2_API CDLL2Class
{
public:
    CDLL2Class() = default;
    virtual ~CDLL2Class() = default;

    virtual void SomeFunction();
};

class SOMEDLL2_API CDLL2Class_SkVertices : public CDLL2Class
{
public:
    CDLL2Class_SkVertices() = default;
    ~CDLL2Class_SkVertices() override = default;

    void SomeFunction() override;

    // SkVertices
public:
    void ShareVertices(const sk_sp<SkVertices>& pVertices) {
        m_pVertices = pVertices;
    }
private:
    sk_sp<SkVertices> m_pVertices;
};

class SOMEDLL2_API CDLL2Class_SkData : public CDLL2Class
{
public:
    CDLL2Class_SkData() = default;
    ~CDLL2Class_SkData() override = default;

    void SomeFunction() override;

    // SkData
public:
    void ShareData(const sk_sp<SkData>& pData) {
        m_pData = pData;
    }
private:
    sk_sp<SkData> m_pData;
};

class SOMEDLL2_API CDLL2Class_SkTextBlob : public CDLL2Class
{
public:
    CDLL2Class_SkTextBlob() = default;
    ~CDLL2Class_SkTextBlob() override = default;

    void SomeFunction() override;

    // SkTextBlob
public:
    void ShareTextBlob(const sk_sp<SkTextBlob>& pTextBlob) {
        m_pTextBlob = pTextBlob;
    }
private:
    sk_sp<SkTextBlob> m_pTextBlob;
};

