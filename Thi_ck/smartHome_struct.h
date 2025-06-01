#pragma once
#ifndef SMARTHOME_STRUCT_H
#define SMARTHOME_STRUCT_H

typedef struct {
	char light;
	char fan;
	char motor;
} smartHome_t;

smartHome_t pair_data(const char* data);

#endif // SMARTHOME_STRUCT_H

