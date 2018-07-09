#include "stdafx.h"
#include "DLL1Class.h"

void CDLL1Class_SkVertices::SomeFunction()
{
    std::cout << __FUNCTION__ << "\n";
    if (m_pVertices)
        std::cout << "Vertices ID is : " << m_pVertices->uniqueID() << "\n";
    else
        std::cout << "No Vertices\n";
}

void CDLL1Class_SkData::SomeFunction()
{
    std::cout << __FUNCTION__ << "\n";
    if (m_pData)
        std::cout << "Data size is : " << m_pData->size() << "\n";
    else
        std::cout << "No shared data\n";
}

void CDLL1Class_SkTextBlob::SomeFunction()
{
    std::cout << __FUNCTION__ << "\n";
    if (m_pTextBlob)
        std::cout << "Bound is : " << m_pTextBlob->bounds().width() << ", " << m_pTextBlob->bounds().height() << "\n";
    else
        std::cout << "No shared Blob\n";
}
