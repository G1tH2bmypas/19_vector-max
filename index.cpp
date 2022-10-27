#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

float vectorMax(std::vector<float> &numbers) {
 int smallvalue = -INFINITY;
 int bigvalue = INFINITY;
 int nulevalue = -INFINITY;

 float max = -INFINITY;

	for (int i = 0; i < numbers.size(); i++) {
		if (numbers[i] > max) {
			max = numbers[i];
		}
	}

	return max;
}
