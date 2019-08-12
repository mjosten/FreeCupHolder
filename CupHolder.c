
#include <stdio.h>
#include <stdlib.h>

int main() {
    system("powershell (New-Object -com \"WMPlayer.OCX.7\").cdromcollection.item(0).eject()");
    
}


// #include <stdio.h>
// #include <Windows.h>
// #include <tchar.h>

// int _tmain() {
//     DWORD dwBytes;
//     HANDLE hCdRom = CreateFile(_T("\\\\.\\M:"), GENERIC_READ | GENERIC_WRITE, 
//         0, NULL, OPEN_EXISTING, 0, NULL);
//     if (hCdRom == INVALID_HANDLE_VALUE) {
//         //_tprintf(_T("Error: %x"), GetLastError());
//         return 1;
//     }

//     //open door:
//     DeviceIoControl(hCdRom, IOCTL_STORAGE_EJECT_MEDIA, NULL, 0, NULL, 0, &dwBytes, NULL);

//     CloseHandle(hCdRom);
//     return 0;
// }