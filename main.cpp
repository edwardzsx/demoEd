/*代码示例*/

#include <iostream>
#include "APPRevision.h"

#ifdef USE_MYMATH
#  include "MathFunctions.h"
#endif

using namespace std;

int main()
{
    std::cout << "Hello, Universe! I'm running on Cloud Studio!\n";
    cout << "APP Version" << APP_VERSION_MAJOR << "." << APP_VERSION_MINOR << "\n";

#ifdef USE_MYMATH
    cout << "16开平方 = " << mysqrt(16)<< "\n";
#else
    cout << "no to use my math sqrt \r\n"
#endif

    

    return 0;
}
