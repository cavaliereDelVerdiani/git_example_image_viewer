#include "BitmapImage.h"

BitmapImage::BitmapImage() : width(640), height(480) {
    channels = 3;
    buffer = new int[width * height * channels];
    depth = 8;
}

bool BitmapImage::load(std::string name) {
    // check it is a supported image file
    std::string fileExt = name.substr(name.find_last_of(".") + 1);
    if (fileExt == "jpg") {
        // load image file
        // decompress into buffer
        //more code to handle channels and depth and the existance of birds
        return true;
    }
    return false;
}

BitmapImage::~BitmapImage() {
    delete[] buffer;
}
