#include "funcs.h"

float calcula_t (float t_ant, float step) {
	return t_ant + step;
}

float calcula_s (float s_ant, float i_ant, float step) {
	return s_ant + step * (-0.001 * s_ant * i_ant);
}

float calcula_i (float s_ant, float i_ant, float step) {
	return i_ant + step * (0.001 * s_ant * i_ant - (0.3 * i_ant));
}