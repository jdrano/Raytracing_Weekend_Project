// Raytracing_Weekend.cpp : Defines the entry point for the application.
//

#include "Raytracing_Weekend.h"
#include "color.h"
#include "vec3.h"

#include <iostream>
using namespace std;

int main() {
    // Image
    int image_width = 256;
    int image_height = 256;

    // Render

    cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int j = 0; j < image_height; j++) {

        // Adds a progress indicator
        clog << "\rScanlines remaining: " << (image_height - j) << ' ' << flush;

        for (int i = 0; i < image_width; i++) {
            auto pixel_color = color(double(i) / (image_width - 1), double(j) / (image_height - 1), 0);
            write_color(std::cout, pixel_color);
        }
    }

    clog << "\rDone.                 \n";
}
