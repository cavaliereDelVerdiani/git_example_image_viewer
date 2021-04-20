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
    if (fileExt == "png") {
        //I'm falling in the quicksand of my thought
        //and I ain't got the power anymore
        return true;
    }
    return false;
}

bool BitmapImage::save(std::string name) {
    std::string fileEXtention = name.substr(name.find_last_of('.') + 1);
    if (fileEXtention == "jpg") {
        //something something
        //something
        return true;
    }
    return false;
}

void BitmapImage::resize(int newWidth, int newHeight) {
    width = newWidth;
    height = newHeight;
}

BitmapImage::~BitmapImage() {
    delete[] buffer;
}
