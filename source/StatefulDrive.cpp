#include "StatefulDrive.h"

double StatefulDrive::Process(double input)
{
	auto driven = sin(input);
	auto mix = fabs(previous + driven) * .5;
	previous = driven;
	return input * (1.0 - mix) + driven * mix;
}
