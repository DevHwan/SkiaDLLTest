#pragma once

#include "DLL1Config.h"

class SOMEDLL1_API CDLL1Class_SkVertices
{
public:
    CDLL1Class_SkVertices() = default;
    ~CDLL1Class_SkVertices() = default;

    void SomeFunction();

    // SkVertices
public:
    void ShareVertices(const sk_sp<SkVertices>& pVertices) {
        m_pVertices = pVertices;
    }
private:
    sk_sp<SkVertices> m_pVertices;
};

class SOMEDLL1_API CDLL1Class_SkData
{
public:
    CDLL1Class_SkData() = default;
    ~CDLL1Class_SkData() = default;

    void SomeFunction();

    // SkData
public:
    void ShareData(const sk_sp<SkData>& pData) {
        m_pData = pData;
    }
private:
    sk_sp<SkData> m_pData;
};

class SOMEDLL1_API CDLL1Class_SkTextBlob
{
public:
    CDLL1Class_SkTextBlob() = default;
    ~CDLL1Class_SkTextBlob() = default;

    void SomeFunction();

    // SkTextBlob
public:
    void ShareTextBlob(const sk_sp<SkTextBlob>& pTextBlob) {
        m_pTextBlob = pTextBlob;
    }
private:
    sk_sp<SkTextBlob> m_pTextBlob;
};

