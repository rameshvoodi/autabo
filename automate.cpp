#include <windows.h>

int main()
{

    const char *urls_to_open[] = {
        "https://www.bseindia.com/",
        "https://www.youtube.com/results?search_query=indian+classical+music",
        // add more urls here
    };

    for (const char *url : urls_to_open)
    {
        ShellExecuteA(NULL, "open", url, NULL, NULL, SW_SHOWNORMAL);
        Sleep(1000);
    }

    return 0;
}
