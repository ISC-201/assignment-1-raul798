#include "MathUtilities.h"

int MathUtilities::FloatToInt(float number) {
	int result;

	if (number >= 0) {
		result = (int)(number + 0.5);
	}
	else {
		result = (int)(number - 0.5);
	}
	
	return result;
}

int MathUtilities::FloatToEvenInt(float number) {
	int result, firstDecimal, intNumber;

	if (number >= 0) {
		intNumber = (int)(number + 0.5);
	}
	else {
		intNumber = (int)(number - 0.5);
	}

	if (result % 2 == 0) {
		result = intNumber;
	}
	else {
		firstDecimal = (int)(number * 10) % 10;
		if (firstDecimal >= 5) {
			result = intNumber + 1;
		}
		else if (firstDecimal < 5) {
			result = intNumber;
		}
	}
	return result;
}

float MathUtilities::DegreesToRadians(float degree){
	float result;

	result = ((degree * 3.141592) / 180);
	return result;
}

float MathUtilities::RadiansToDegrees(float radian) {
	float result;

	result = ((radian * 180) / 3.141592);
	return result;
}

float MathUtilities::AngularDistance(float angleA, float angleB) {
	float result;

	result = angleA - angleB;
	return result;
}

bool MathUtilities::intPowerOfTwo(int number) {
	bool result;
	if (number > 0 && ((number & (number - 1)) == 0)) {
		result = true;
	}
	else {
		result = false;
	}

	return result;
}