//---------------------------------------------------------------------------

#ifndef LoadEstimateH
#define LoadEstimateH
//--------------------------------------------------------------------------
typedef void (*TToGreenwich)(double t, double *m);
typedef void (*TInit)();
typedef void (*TCloseLib)();
typedef double (*Tfact)( int k );
typedef double (*Tpw)( double x, int n );
typedef void (*Tscla)( double *a, double r, int n );
typedef void (*Tsmpy)( double *a, double r, double *b, int n );
typedef void (*Tmcpy)( double *a, double *b, int n );
typedef void (*Tmadd)( double *a, double *b, double *c, int n );
typedef void (*Tmsub)( double *a, double *b, double *c, int n );
typedef void (*Tmprd)( double *a, double *b, double *c, int ma, int na, int nb );
typedef void (*Tmtra) ( double *a, double *b, int ma, int na );
typedef double (*Tscal) ( double *a, double *b, int n );
typedef void (*Tnorm) ( double *r, int n, double *r0, double & rr );
typedef int (*Tunit) ( double *r, double *r0 );
typedef void (*Tmvec) ( int j, double a[3], double b[3], double c[7]);
typedef void (*Tort) ( double *r, double d, double & fi, double & psi);
typedef void (*Tmrot) ( double angle, double *mat, int i );
typedef double (*Tdjul)(int day, int mon, int year, int hour, int min, int sec);
typedef void (*Tdatej) (double tj, int &id, int &im, int &iy, int &ih, int &imin, int &is);
typedef void (*Ttopo) ( double lat, double lon, double *mat );
typedef bool (*Tsinv) ( double *mat, int n );
typedef void (*TABAT) ( double *A, double *B, double *C, int nB, int nC );
typedef void (*TATA) ( double *A, double *B, int nRows, int nCols );
typedef void (*Tt2TimeStrMs) ( double t, char *str );
typedef void (*Tt2TimeStr)( double t, char *str );
typedef double (*TTimeStrMs2t) ( char *s );
typedef double (*TLinIntF)( double *x, double *y, int n, double xx );
typedef double (*Tangle_vect)(double * a, double *b);
typedef void (*Tquatmul)( double *b, double *a, double *c );
typedef bool (*Tm2q)( double *m, double *q );
typedef void (*Tq2m)( double *q, double *m );
typedef void (*Tquatnorm)( double *q );
typedef int (*TRoots)(double f(double),double x0,double xk,double dx,double eps,double *X);
typedef double (*Tgauss) ( double sigma, double mean );
typedef double (*TUniform) ( double xmin, double xmax );
typedef bool (*Tminv)( double *mat, int n, double &d );
typedef void (*TRK4)( void f(double, double*, double*),
				  double t, double *y, double *yk, int n, double h);
typedef double (*Tqsimp)( double (*func)(double), double a, double b );
//---------------------------------------------------------------------------
class TMathLib
{
 private:
  HINSTANCE Lib;
 public:
  TToGreenwich ToGreenwich;
  TInit Init;
  TCloseLib CloseLib;
  Tfact  fact;
  Tpw    pw;
  Tscla  scla;
  Tsmpy  smpy;
  Tmcpy  mcpy;
  Tmadd  madd;
  Tmsub  msub;
  Tmprd  mprd;
  Tmtra  mtra;
  Tscal  scal;
  Tnorm  norm;
  Tunit  unit;
  Tmvec  mvec;
  Tort   ort;
  Tmrot  mrot;
  Tdjul  djul;
  Tdatej datej;
  Ttopo  topo;
  Tsinv  sinv;
  TABAT  ABAT;
  TATA   ATA;
  Tt2TimeStrMs t2TimeStrMs;
  Tt2TimeStr t2TimeStr;
  TTimeStrMs2t TimeStrMs2t;
  TLinIntF LinIntF;
  Tangle_vect angle_vect;
  Tquatmul quatmul;
  Tm2q     m2q;
  Tq2m     q2m;
  Tquatnorm quatnorm;
  TRoots Roots;
  Tgauss gauss;
  TUniform Uniform;
  Tminv minv;
  TRK4  RK4;
  Tqsimp qsimp;
  bool LoadDLL();
};
//---------------------------------------------------------------------------


#endif


