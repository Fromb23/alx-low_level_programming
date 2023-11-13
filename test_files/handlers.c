#include "main.h"

print_t handlers[NUM_HANDLERS] = {
    {"c", print_c},
    {"s", print_s},
    {"d", print_d_i},
    {"b", print_b},
    {"u", print_u},
    {"o", print_o},
    {"x", print_x},
    {"X", print_X},
};
