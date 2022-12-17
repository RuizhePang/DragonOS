#pragma once
#include <common/atomic.h>

// 该结构体需要与libs/refcount.rs的保持一致，且以rust版本为准
typedef struct refcount_struct {
	atomic_t refs;
} refcount_t;