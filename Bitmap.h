#pragma once

#ifndef BITMAP_H
#define BITMAP_H

#include <string>
#include <memory>
#include <vector>
#include <cstdint>

class Bitmap {
private:

	int _width = 0;
	int _height = 0;

	std::unique_ptr<uint8_t[]> _pPixels{ nullptr };

public:

	Bitmap(int width, int height);

	void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
	bool write(std::string filename);
	virtual ~Bitmap();

};

#endif