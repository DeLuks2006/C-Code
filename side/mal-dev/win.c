// processes
/* instance of an executable */

#include <windows.h>

/*int WINAPI WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    MessageBox(NULL, 
    "Hello, World!", 
    "Note", 
    MB_OK
    );
    return 0;
}*/

int main(void) {

    MessageBoxW( // w stands for wide, a stands for ansi = no need for unicode encoding, but ansi is not reccommended. ex stands for extended = gives more parameters for tinkering 
        NULL, // do not attach a owner window
        L"Hello", // text of our meassage box // L makes sure the text is encoded as unicode when using wide function
        L"World", // message box title, if we set to null the title will be called "error"
        MB_OK | MB_ICONHAND// type of buttons we want | icon
    );
    return EXIT_SUCCESS;
}