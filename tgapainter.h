#pragma once

#include "tgaimage.h"

class TGAPainter {

public:
    explicit TGAPainter(TGAImage *image = nullptr);

    // TODO
    // void drawLine();
    // void drawTriangle();
    // void drawRectangle();
    // void drawCircle();
    // void drawPolygon();

private:
    TGAImage *m_image;
};