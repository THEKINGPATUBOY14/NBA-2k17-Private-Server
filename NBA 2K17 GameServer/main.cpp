#include <WinSock2.h>
#include <WS2tcpip.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "Offsets.h"
#include "Networking/Server.h"


DWORD WINAPI MainThread(LPVOID lp)
{


}





BOOL WINAPI DllMain(HINSTANCE hModule, DWORD dwAttached, LPVOID lpvReserved)
{
    if (dwAttached == DLL_PROCESS_ATTACH) {
        CreateThread(NULL, 0, &MainThread, NULL, 0, NULL);
    }
    return 1;
}