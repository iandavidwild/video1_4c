/*
 * Video1_4c.cpp
 *
 *  Created on: 22 May 2018
 *      Author: Ian Wild
 */

#include <iostream>
#include <limits>
#include <cstdint>

using namespace std;

int main() {

	cout << "max(float): " << numeric_limits<float>::max() << endl;
	cout << "min(float): " << numeric_limits<float>::min() << endl;
	cout << "lowest(float): " << numeric_limits<float>::lowest() << endl;

	uint32_t int32;

    return 0;
}
