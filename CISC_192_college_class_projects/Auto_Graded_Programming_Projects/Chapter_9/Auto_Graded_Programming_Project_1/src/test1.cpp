#include <iostream>
#include <fstream>
#include <cmath>

short pixelToGrayscale(short red, short green, short blue) {
    short r = red * 0.229;
    short g = green * 0.587;
    short b = blue * 0.114;

    return r + g + b;
}

short* photoToGrayscale(const short pixels[], int size) {
    if (size % 3 != 0) {
    return nullptr;
    }

    int numPixels = size / 3;
    short* grayscalePixels = new short[numPixels];

    for (int i = 0; i < numPixels; ++i) {
      grayscalePixels[i] = pixelToGrayscale(pixels[3 * i], pixels[3 * i + 1], pixels[3 * i + 2]);
    }

    return grayscalePixels;
}


int main() {
    std::ifstream file("picture");
    if (!file.is_open()) {
        std::cout << "INVALID" ;
        return 0;
    }

    int width, height;
    file >> width >> height;

    int size = width * height * 3;
    short* pixels = new short[size];

    for (int i = 0; i < size; ++i) {
        if (!(file >> pixels[i])) {
            std::cout << "INVALID";
            delete[] pixels;
            return 0;
        }
    }

    file.close();

    short* grayscalePixels = photoToGrayscale(pixels, size);
    if (grayscalePixels == nullptr) {
        std::cout << "INVALID";
        delete[] pixels;
        return 0;
    }

    for (int i = 0; i < width * height; ++i) {
    std::cout << grayscalePixels[i] << std::endl;
    }

    delete[] pixels;
    delete[] grayscalePixels;

    return 0;
}
