#ifndef LUNA_INTERPRETOR_H
#define LUNA_INTERPRETOR_H

#include <stdint.h>
#include "ast.h"

luna_object_t *
luna_interpret(luna_node_t * root);

#endif
