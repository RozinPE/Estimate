//---------------------------------------------------------------------------
#include <vcl.h>
#include "LoadEstimate.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------
bool TMathLib::LoadDLL()
{
  Lib = LoadLibrary("Estimate.dll");
  if( Lib >= (HINSTANCE)32 )
  {
    ToGreenwich = (TToGreenwich)GetProcAddress( Lib, "_ToGreenwich" );
    GetMagField = (TGetMagField)GetProcAddress( Lib, "_GetMagField" );
    Init = (TInit)GetProcAddress( Lib, "_Init" );
    CloseLib = (TCloseLib)GetProcAddress( Lib, "_CloseLib" );
    fact = (Tfact)GetProcAddress(Lib, "_fact");
    pw = (Tpw)GetProcAddress(Lib, "_pw");
    scla = (Tscla)GetProcAddress(Lib, "_scla");
    smpy = (Tsmpy)GetProcAddress(Lib, "_smpy");
    mcpy = (Tmcpy)GetProcAddress(Lib, "_mcpy");
    RK4 = (TRK4)GetProcAddress(Lib, "_RK4");
    gauss = (Tgauss)GetProcAddress(Lib, "_gauss");
    mprd = (Tmprd)GetProcAddress(Lib, "_gauss");
    TimeStrMs2t = (TTimeStrMs2t)GetProcAddress(Lib, "_TimeStrMs2t");
  }

  if(!ToGreenwich || !Init || !CloseLib || !fact || !pw || !scla || !smpy || !mcpy || !RK4 || !gauss || !mprd
     || !TimeStrMs2t)
         return false;

  return true;
}
//---------------------------------------------------------------------------


