#ifndef RELEASE

// Hack to allow fdopen
#ifdef __STRICT_ANSI__
#undef __STRICT_ANSI__
#include <cstdio>
#define __STRICT_ANSI__
#else
#include <cstdio>
#endif

#include <gtest/gtest.h>

using namespace std;


int RunAllTests ( int& argc, char *argv[] )
{
    testing::InitGoogleTest ( &argc, argv );
    return RUN_ALL_TESTS();
}

#endif // NOT RELEASE
