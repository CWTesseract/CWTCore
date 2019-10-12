#pragma once

// https://github.com/microsoft/STL/blob/0d95d86ee7b6462a5c1d921a8575a3b4215090e1/stl/inc/xthreads.h#L21-L26
struct msvc_Thrd_t {
	void* _Hnd;
	unsigned int _Id;
};