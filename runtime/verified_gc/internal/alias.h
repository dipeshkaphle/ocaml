#ifndef ALIAS_H_
#define ALIAS_H_

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// NOTE: All of this is handwritten
//
// Hacks to make sure everything operates in 64 bits(this has to be done due to
// Low* limitations in codegen)

#define Prims_int uint64_t

#define uint32_t uint64_t

#define krml_checked_int_t uint64_t

#define KRML_HOST_EPRINTF(...) fprintf(stderr, __VA_ARGS__)
#define KRML_HOST_EXIT(code) exit(code)
#define KRML_CHECK_SIZE(ignored1, ignored2)
#define KRML_HOST_MALLOC(bytes) malloc(bytes)
#define KRML_HOST_FREE(ptr) free(ptr)
#define KRML_HOST_CALLOC(nelems, elem_size) calloc(nelems, elem_size)
#define KRML_MAYBE_UNUSED_VAR(ignored)

#define load64_le(ptr) (*(uint64_t *)(ptr))
#define store64_le(ptr, value)                                                 \
  {                                                                            \
    uint64_t *__tmp_ = (uint64_t *)(ptr);                                      \
    *__tmp_ = value;                                                           \
  }

#endif // ALIAS_H_
