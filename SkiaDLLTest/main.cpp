#include "stdafx.h"

std::string gBasePath;

void TestVertices()
{
    std::vector<SkPoint> arrPoints;
    arrPoints.emplace_back(SkPoint::Make(0.0f, 0.0f));
    arrPoints.emplace_back(SkPoint::Make(1.0f, 0.0f));
    arrPoints.emplace_back(SkPoint::Make(1.0f, 1.0f));

    auto pVertices = SkVertices::MakeCopy(SkVertices::kTriangles_VertexMode, static_cast<int>(arrPoints.size()), arrPoints.data(), nullptr, nullptr);


    CDLL1Class_SkVertices dll1class;
    auto pdll2class = std::make_unique<CDLL2Class_SkVertices>();

    dll1class.ShareVertices(pVertices);
    pdll2class->ShareVertices(pVertices);

    dll1class.SomeFunction();
    pdll2class->SomeFunction();
}

void TestDataForMalloc()
{
    auto pData = SkData::MakeFromMalloc(sk_malloc_throw(sizeof(char) * 100), sizeof(char) * 100);

    CDLL1Class_SkData dll1class;
    auto pdll2class = std::make_unique<CDLL2Class_SkData>();

    dll1class.ShareData(pData);
    pdll2class->ShareData(pData);

    dll1class.SomeFunction();
    pdll2class->SomeFunction();

}

void TestDataForFile()
{
    const auto testFilePath = gBasePath + "\\dummy.txt";
    auto pData = SkData::MakeFromFileName(testFilePath.c_str());

    CDLL1Class_SkData dll1class;
    auto pdll2class = std::make_unique<CDLL2Class_SkData>();

    dll1class.ShareData(pData);
    pdll2class->ShareData(pData);

    dll1class.SomeFunction();
    pdll2class->SomeFunction();
}

void TestDataForWithCopy()
{
    std::vector<char> buffer(100);
    auto pData = SkData::MakeWithCopy(buffer.data(), buffer.size() * sizeof(char));

    CDLL1Class_SkData dll1class;
    auto pdll2class = std::make_unique<CDLL2Class_SkData>();

    dll1class.ShareData(pData);
    pdll2class->ShareData(pData);

    dll1class.SomeFunction();
    pdll2class->SomeFunction();
}

void TestDataForWithoutCopy()
{
    std::vector<char> buffer(100);
    auto pData = SkData::MakeWithoutCopy(buffer.data(), buffer.size() * sizeof(char));

    CDLL1Class_SkData dll1class;
    auto pdll2class = std::make_unique<CDLL2Class_SkData>();

    dll1class.ShareData(pData);
    pdll2class->ShareData(pData);

    dll1class.SomeFunction();
    pdll2class->SomeFunction();
}

void TestTextBlobFromBlobBuilder()
{
    SkPaint paint;
    paint.setTextEncoding(SkPaint::kGlyphID_TextEncoding);
    SkTextBlobBuilder blobBuilder;
    auto runBuffer = blobBuilder.allocRunText(paint, 1, 0.0f, 0.0f, sizeof(char) * 1, SkString());
    auto pTextBlob = blobBuilder.make();

    CDLL1Class_SkTextBlob dll1class;
    auto pdll2class = std::make_unique<CDLL2Class_SkTextBlob>();

    dll1class.ShareTextBlob(pTextBlob);
    pdll2class->ShareTextBlob(pTextBlob);

    dll1class.SomeFunction();
    pdll2class->SomeFunction();
}

int main(int argc, const char* argv[])
{
    gBasePath = argv[0];
    const auto found = gBasePath.find_last_of("\\/");
    gBasePath = gBasePath.substr(0, found + 1);

    TestVertices();
    TestDataForMalloc();
    TestDataForFile();
    TestDataForWithCopy();
    TestDataForWithoutCopy();
    TestTextBlobFromBlobBuilder();



    return 0;
}

