#include "funcs.h"

float calcula_t (float t_ant, float step) {
	return t_ant + step;
}

float calcula_x (float x_ant, float y_ant, float step) {
	return x_ant + step * (-2 * y_ant);
}

float calcula_y (float x_ant, float y_ant, float step) {
	return y_ant + step * (-1 * x_ant);
}