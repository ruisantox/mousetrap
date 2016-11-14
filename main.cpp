#include <iostream>
#include <windows.h>
#include <atomic>
using namespace std;


int main()
{

    cout << "Hello World! Where is the mouse ???" << endl;
    bool stop = true;

    POINT p;

    while (stop == true)
    {

        GetCursorPos(&p);
        cout << p.x << " x-coordinate and " << p.y << " y-coordinate  " <<"(Press ESC to Exit)" << endl;

        if(GetAsyncKeyState(VK_ESCAPE))
        {
            stop=false;
        };


    }

std::cout<<"Thank You - RSX"<<std::endl;
std::getchar();

    return 0;
}

