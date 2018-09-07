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


/*
  TToGreenwich ToGreenwich = 0;
  TInit Init = 0;
  TCloseLib CloseLib= 0;
  Tfact  fact = 0;
  Tpw    pw = 0;
  Tscla  scla = 0;
  Tsmpy  smpy = 0;
  Tmcpy  mcpy = 0;
  Tmadd  madd = 0;
  Tmsub  msub = 0;
  Tmprd  mprd = 0;
  Tmtra  mtra = 0;
  Tscal  scal = 0;
  Tnorm  norm = 0;
  Tunit  unit = 0;
  Tmvec  mvec = 0;
  Tort   ort = 0;
  Tmrot  mrot = 0;
  Tdjul  djul = 0;
  Tdatej datej = 0;
  Ttopo  topo = 0;
  Tsinv  sinv = 0;
  TABAT  ABAT = 0;
  TATA   ATA = 0;
  Tt2TimeStrMs t2TimeStrMs =0;
  Tt2TimeStr t2TimeStr =0;
  TTimeStrMs2t TimeStrMs2t =0;
  TLinIntF LinIntF = 0;
  Tangle_vect angle_vect=0;
  Tquatmul quatmul =0;
  Tm2q     m2q = 0;
  Tq2m     q2m=0;
  Tquatnorm quatnorm = 0;
  TRoots Roots = 0;
  Tgauss gauss = 0;
  TUniform Uniform = 0;
  Tminv minv = 0;
  TRK4  RK4 = 0;
  Tqsimp qsimp = 0;
  bool LoadDLL();


*/
