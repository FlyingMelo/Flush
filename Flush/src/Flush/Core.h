#pragma once

#ifdef FLS_PLATFORM_WINDOWS
  #ifdef FLS_BUILD_DLL
    #define FLUSH_API _declspec(dllexport)
  #else 
    #define FLUSH_API _declspec(dllimport)   
  #endif
#else
  #error FLUSH only support windows!
#endif // 

