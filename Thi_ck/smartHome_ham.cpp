#include <string.h>
#include "smartHome_struct.h"


static char state_to_char(const char* state) {
	if (strcmp(state, "on") == 0) return 1;
	if (strcmp(state, "off") == 0) return 0;
	return -1;
}

smartHome_t pair_data(const char* data) {
	smartHome_t result = { 0, 0, 0 };
	const char* p;
	char buf[5];

	p = strstr(data, "\"light\"");
	if (p) {
		p = strchr(p, ':');
		if (p) {
			p = strchr(p, '\"');
			if (p) {
				p++;
				int i = 0;
				while (*p != '\"' && i < 4) {
					buf[i++] = *p++;
				}
				buf[i] = '\0';
				result.light = state_to_char(buf);
			}
		}
	}

	p = strstr(data, "\"fan\"");
	if (p) {
		p = strchr(p, ':');
		if (p) {
			p = strchr(p, '\"');
			if (p) {
				p++;
				int i = 0;
				while (*p != '\"' && i < 4) {
					buf[i++] = *p++;
				}
				buf[i] = '\0';
				result.fan = state_to_char(buf);
			}
		}
	}

	p = strstr(data, "\"motor\"");
	if (p) {
		p = strchr(p, ':');
		if (p) {
			p = strchr(p, '\"');
			if (p) {
				p++;
				int i = 0;
				while (*p != '\"' && i < 4) {
					buf[i++] = *p++;
				}
				buf[i] = '\0';
				result.motor = state_to_char(buf);
			}
		}
	}

	return result;
}
