#pragma once

#include "nvim/api/keysets_defs.h"
#include "nvim/api/private/defs.h"  // IWYU pragma: keep
#include "nvim/api/private/helpers.h"
#include "nvim/cmdexpand_defs.h"  // IWYU pragma: keep
#include "nvim/highlight_defs.h"
#include "nvim/types_defs.h"  // IWYU pragma: keep

#define MAX_HL_ID 20000   // maximum value for a highlight ID.

typedef struct {
  char *name;
  RgbValue color;
} color_name_table_T;
extern color_name_table_T color_name_table[];

#ifdef INCLUDE_GENERATED_DECLARATIONS
# include "highlight_group.h.generated.h"
#endif
