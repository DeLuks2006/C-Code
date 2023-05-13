#include <windows.h>
#include <stdio.h>

// creating processes now
// it aint the same as opening proceses as with opening a process ur opening a handle to a process already existing

int main(void) {

/*
BOOL CreateProcessW(
  [in, optional]      LPCWSTR               lpApplicationName,
  [in, out, optional] LPWSTR                lpCommandLine,
  [in, optional]      LPSECURITY_ATTRIBUTES lpProcessAttributes,
  [in, optional]      LPSECURITY_ATTRIBUTES lpThreadAttributes,
  [in]                BOOL                  bInheritHandles,
  [in]                DWORD                 dwCreationFlags,
  [in, optional]      LPVOID                lpEnvironment,
  [in, optional]      LPCWSTR               lpCurrentDirectory,
  [in]                LPSTARTUPINFOW        lpStartupInfo,
  [out]               LPPROCESS_INFORMATION lpProcessInformation
);
*/

STARTUPINFOW si = {0};
PROCESS_INFORMATION pi = {0};

    if (!CreateProcessW(
        L"C:\\Windows\\System32\\notepad.exe", // file
        NULL, // only used if sth is cmd based
        NULL, // process handle
        NULL, // thread handle
        FALSE, // handle inheritance
        BELOW_NORMAL_PRIORITY_CLASS, // process priority
        NULL, // use parents enviroment block
        NULL, // use parents startup directory
        &si, // pointer to startupinfo 
        &pi)) { // pointer to process information

        printf("(-) failed to create process, error %ld", GetLastError());
        return EXIT_FAILURE;
    }

    printf("(+) process started! \n(+) pid: %ld\n", pi.dwProcessId);
    printf("(+) tid: %ld", pi.dwThreadId);
    return EXIT_SUCCESS;
}