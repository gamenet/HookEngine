#pragma once

#include <Windows.h>

namespace HookEngine {
  namespace System {

    class Lock 
    {
    public:
      friend class CriticalSection;

      Lock(CriticalSection& cs);
      ~Lock();

      Lock(const Lock&);
      Lock& operator=(const Lock &);

    private:
      CRITICAL_SECTION& _cs;
    };

  }
}
