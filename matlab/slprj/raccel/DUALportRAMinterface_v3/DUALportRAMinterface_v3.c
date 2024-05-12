#include "DUALportRAMinterface_v3.h"
#include "rtwtypes.h"
#include "DUALportRAMinterface_v3_types.h"
#include "DUALportRAMinterface_v3_private.h"
#include <string.h>
#include "mwmathutil.h"
#include "multiword_types.h"
#include <math.h>
#include "rt_logging_mmi.h"
#include "DUALportRAMinterface_v3_capi.h"
#include "DUALportRAMinterface_v3_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; extern ssExecutionInfo gblExecutionInfo ; RTWExtModeInfo *
gblRTWExtModeInfo = NULL ; void raccelForceExtModeShutdown ( boolean_T
extModeStartPktReceived ) { if ( ! extModeStartPktReceived ) { boolean_T
stopRequested = false ; rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 1 , &
stopRequested ) ; } rtExtModeShutdown ( 1 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_engine_exec.h"
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 2 ; const char_T
* gbl_raccel_Version = "24.1 (R2024a) 19-Nov-2023" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; int_T enableFcnCallFlag [ ] = { 1 , 1 } ; const char
* raccelLoadInputsAndAperiodicHitTimes ( SimStruct * S , const char *
inportFileName , int * matFileFormat ) { return rt_RAccelReadInportsMatFile (
S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_engine_exec.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
#define cc5d1pogrm (-1)
#define hiz5ku3muj (1U)
#define leyvdjw1oc (2U)
#define bhye01nuwc (1U)
#define hmrddibr3p (-1)
#define l4i3akvc1o (2U)
#define gmbnsgyxk4 (2U)
#define lwatnco3rs (1U)
#define ofxunbqyzs (-1)
#define meyebydag5 (-1)
#define hmmjpbkx1c (-1)
#define jamqk104qo (-1)
#define p5jrp2hw25 (-1)
#define knrjj05w1q (-1)
#define bxoc511o4b (-1)
#define jm4m00xkjj (-1)
#define kkeooqll4r (-1)
#define m5rcamyrwl (-1)
#define mhlr5mbyg5 (-1)
#define b5plz3zdci (-1)
#define k4zx2m0scn (-1)
#define h52w1vgbeq (-1)
#define k5h4vt1qk3 (-1)
#define np2rwn0k3r (-1)
#define clsuas5ybk (-1)
#define fv1o1mwhbp (-1)
#define gbsc1lpre0 (-1)
#define j032gcvgny (-1)
#define gyuy0duhkh (-1)
#define kkroyczlnz (-1)
#define avktymvjyw (-1)
#define b0u3ja5v3s (-1)
#define mhwre5bogp (-1)
#define ia4l2qceio (-1)
#define i4qa4vyxzt (-1)
#define k1n2jy4nmt (-1)
#define nyzms215fz (-1)
#define dfbloz333y (-1)
#define fhtw2a3zqd (-1)
#define aveahj054f (-1)
#define ccph5bcoae (-1)
#define kefh02u2xa (-1)
#define ixbaqxvld3 (-1)
#define djirs02oco (2U)
#define eqebeaoewm (1U)
#define gezjt1xfty (5U)
#define hfujwvncqw (3U)
#define joh0ti2mrg (4U)
#define b1hlgybhxi (13U)
#define b3pefdwl4s (11U)
#define bhhada5sju (18U)
#define bplz1bgu04 (17U)
#define dep4ye2mta (23U)
#define dhnrz3p3lc (2U)
#define e4ml1xds1b (15U)
#define ebf5cvds2x (7U)
#define eduo52fh1r (8U)
#define eisvyocwb5 (16U)
#define g5cwkvlwdn (10U)
#define imeuoffcif (12U)
#define j2y5ckvher (20U)
#define j30nisvtqt (6U)
#define jojn2ukp50 (22U)
#define kh3hkei35g (9U)
#define li4kekrnna (14U)
#define lwrsi20zvv (24U)
#define megw2qzktw (4U)
#define n53a5mkeym (5U)
#define nqs2xho5j1 (19U)
#define ocxblzochp (3U)
#define oofuxnhizy (21U)
#define pajhb4ygtb (25U)
#define pzu23l5q4i (1U)
#define czs520tlml (4U)
#define eh4oiwcenh (6U)
#define f5xc3zgh41 (2U)
#define fci5xp30ky (1U)
#define ij1x2zh0xt (3U)
#define jduobabsvl (7U)
#define jsvzrv1nlk (5U)
B rtB ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS = &
model_S ; static boolean_T bwjhtuhpzu ( jhe2xtdg5h * obj , boolean_T
skipNonDirectFeed ) ; static void jfd4g2kq55 ( lgw3dwnp03 * obj ) ; static
uint64_T kswswbzqb5hz ( gsamlxo1wb * obj , uint16_T varargin_1 ) ; static
void ipbyhx4yqv4d ( o0tlycgbd5hp * obj , uint16_T varargin_1 ) ; static
uint64_T kswswbzqb5hzc ( gsamlxo1wb * obj , uint16_T varargin_1 ) ; static
void ipbyhx4yqv4dv ( o0tlycgbd5h * obj , uint16_T varargin_1 ) ; static
uint64_T kswswbzqb5hzcf ( gsamlxo1wb * obj , uint16_T varargin_1 ) ; static
void ipbyhx4yqv4dvp ( o0tlycgbd5h * obj , uint16_T varargin_1 ) ; static
uint64_T kswswbzqb5hzcfs ( gsamlxo1wb * obj , uint16_T varargin_1 ) ; static
void ipbyhx4yqv4dvpc ( o0tlycgbd5hph * obj , uint16_T varargin_1 ) ; static
uint64_T kswswbzqb5 ( gsamlxo1wb * obj , uint16_T varargin_1 ) ; static void
ipbyhx4yqv ( o0tlycgbd5 * obj , uint16_T varargin_1 ) ; static uint64_T
kswswbzqb5h ( gsamlxo1wb * obj , uint16_T varargin_1 ) ; static void
ipbyhx4yqv4 ( o0tlycgbd5h * obj , uint16_T varargin_1 ) ; static void
ohqoxehyir ( lgw3dwnp03 * obj ) ; static boolean_T jreuwb1n0z ( gf3a2t0gs5 *
obj , boolean_T skipNonDirectFeed ) ; static void ax24t2w2l3 ( void ) ;
static void il1pqidmdp ( void ) ; static void fd0knrz00s ( void ) ; static
void bteluj4h5m ( void ) ; static void isxq4yt2zr ( void ) ; static void
dcfzm10bmk ( void ) ; static void illrhjptmh ( gf3a2t0gs5 * obj ) ; static
boolean_T oczff0h2ub ( const lgw3dwnp03 * obj , boolean_T resetIn ) ; static
void d4eqi0n2ks ( lgw3dwnp03 * obj , int64_T X_p , int64_T Y , int64_T U ,
int64_T V , real_T stage ) ; static void prlcfzcxhj ( creal_T x [ 4096 ] ) ;
static void f3k3sm4kfg ( const cint32_T twdlTable [ 4096 ] , cint32_T
octantTwdlTable [ 4096 ] ) ; static void djfqiflzn0 ( real_T sampleIndex_data
[ ] , int32_T sampleIndex_size [ 2 ] ) ; static real_T hcrh0akgkk ( real_T in
, const real_T bitReverseTable [ 2048 ] , real_T stage ) ; static void
csvkerezk4 ( const lgw3dwnp03 * obj , const cint32_T twiddleTable [ 2 ] ,
real_T twiddleIndex , int32_T * wr , int32_T * wi ) ; static void djfqiflzn0j
( real_T sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ] ) ; static
void csvkerezk4d ( const lgw3dwnp03 * obj , const cint32_T twiddleTable [ 4 ]
, real_T twiddleIndex , int32_T * wr , int32_T * wi ) ; static void
djfqiflzn0jp ( real_T sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ] )
; static void csvkerezk4d4 ( const lgw3dwnp03 * obj , const cint32_T
twiddleTable [ 8 ] , real_T twiddleIndex , int32_T * wr , int32_T * wi ) ;
static void djfqiflzn0jpf ( real_T sampleIndex_data [ ] , int32_T
sampleIndex_size [ 2 ] ) ; static void csvkerezk4d4v ( const lgw3dwnp03 * obj
, const cint32_T twiddleTable [ 16 ] , real_T twiddleIndex , int32_T * wr ,
int32_T * wi ) ; static void djfqiflzn0jpf2 ( real_T sampleIndex_data [ ] ,
int32_T sampleIndex_size [ 2 ] ) ; static void csvkerezk4d4vh ( const
lgw3dwnp03 * obj , const cint32_T twiddleTable [ 32 ] , real_T twiddleIndex ,
int32_T * wr , int32_T * wi ) ; static void djfqiflzn0jpf2e ( real_T
sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ] ) ; static void
csvkerezk4d4vhp ( const lgw3dwnp03 * obj , const cint32_T twiddleTable [ 64 ]
, real_T twiddleIndex , int32_T * wr , int32_T * wi ) ; static void
ddbkoo3nbt ( real_T sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ] ) ;
static void n435m4bqg5 ( const lgw3dwnp03 * obj , const cint32_T twiddleTable
[ 128 ] , real_T twiddleIndex , int32_T * wr , int32_T * wi ) ; static void
gvl5ridc12 ( real_T sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ] ) ;
static void axcw5y1yb3 ( const lgw3dwnp03 * obj , const cint32_T twiddleTable
[ 256 ] , real_T twiddleIndex , int32_T * wr , int32_T * wi ) ; static void
m1xs4zed55 ( real_T sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ] ) ;
static void bv20pcjkch ( const lgw3dwnp03 * obj , const cint32_T twiddleTable
[ 512 ] , real_T twiddleIndex , int32_T * wr , int32_T * wi ) ; static void
k4wethv1yh ( real_T sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ] ) ;
static void fsab4sqz11 ( const lgw3dwnp03 * obj , const cint32_T twiddleTable
[ 1024 ] , real_T twiddleIndex , int32_T * wr , int32_T * wi ) ; static void
jmd542rf2p ( const lgw3dwnp03 * obj , const cint32_T twiddleTable [ 2048 ] ,
real_T twiddleIndex , int32_T * wr , int32_T * wi ) ; static void bcoqzmpix0
( lgw3dwnp03 * obj ) ; static real_T hcrh0akgkks ( real_T in , const real_T
bitReverseTable [ 4096 ] ) ; static void lglgu5bh2x ( lgw3dwnp03 * obj ,
const int32_T dataIn_re [ 4096 ] , const int32_T dataIn_im [ 4096 ] , int32_T
dout_re [ 4096 ] , int32_T dout_im [ 4096 ] ) ; int64_T MultiWord2sLong (
const uint64_T u [ ] ) { return ( int64_T ) u [ 0 ] ; } void sMultiWordShr (
const uint64_T u1 [ ] , int32_T n1 , uint32_T n2 , uint64_T y [ ] , int32_T n
) { uint64_T u1i ; uint64_T yi ; uint64_T ys ; int32_T i ; int32_T i1 ;
int32_T nb ; int32_T nc ; uint32_T nr ; nb = ( int32_T ) ( n2 >> 6 ) ; i = 0
; ys = ( u1 [ n1 - 1 ] & 9223372036854775808ULL ) != 0ULL ? MAX_uint64_T :
0ULL ; if ( nb < n1 ) { nc = n + nb ; if ( nc > n1 ) { nc = n1 ; } nr = n2 -
( ( uint32_T ) nb << 6 ) ; if ( nr > 0U ) { u1i = u1 [ nb ] ; for ( i1 = nb +
1 ; i1 < nc ; i1 ++ ) { yi = u1i >> nr ; u1i = u1 [ i1 ] ; y [ i ] = u1i << (
64U - nr ) | yi ; i ++ ; } y [ i ] = ( nc < n1 ? u1 [ nc ] : ys ) << ( 64U -
nr ) | u1i >> nr ; i ++ ; } else { for ( i1 = nb ; i1 < nc ; i1 ++ ) { y [ i
] = u1 [ i1 ] ; i ++ ; } } } while ( i < n ) { y [ i ] = ys ; i ++ ; } } void
MultiWordSignedWrap ( const uint64_T u1 [ ] , int32_T n1 , uint32_T n2 ,
uint64_T y [ ] ) { uint64_T mask ; uint64_T ys ; int32_T i ; int32_T n1m1 ;
n1m1 = n1 - 1 ; for ( i = 0 ; i < n1m1 ; i ++ ) { y [ i ] = u1 [ i ] ; } mask
= 1ULL << ( 63U - n2 ) ; ys = ( u1 [ n1 - 1 ] & mask ) != 0ULL ? MAX_uint64_T
: 0ULL ; mask = ( mask << 1U ) - 1ULL ; y [ n1 - 1 ] = ( u1 [ n1 - 1 ] & mask
) | ( ~ mask & ys ) ; } void MultiWordAdd ( const uint64_T u1 [ ] , const
uint64_T u2 [ ] , uint64_T y [ ] , int32_T n ) { uint64_T carry = 0ULL ;
uint64_T u1i ; uint64_T yi ; int32_T i ; for ( i = 0 ; i < n ; i ++ ) { u1i =
u1 [ i ] ; yi = ( u1i + u2 [ i ] ) + carry ; y [ i ] = yi ; carry = carry !=
0ULL ? ( uint64_T ) ( yi <= u1i ) : ( uint64_T ) ( yi < u1i ) ; } } void
sLong2MultiWord ( int64_T u , uint64_T y [ ] , int32_T n ) { uint64_T yi ;
int32_T i ; y [ 0 ] = ( uint64_T ) u ; yi = u < 0LL ? MAX_uint64_T : 0ULL ;
for ( i = 1 ; i < n ; i ++ ) { y [ i ] = yi ; } } uint64_T MultiWord2uLong (
const uint64_T u [ ] ) { return u [ 0 ] ; } void uMultiWordShr ( const
uint64_T u1 [ ] , int32_T n1 , uint32_T n2 , uint64_T y [ ] , int32_T n ) {
uint64_T u1i ; uint64_T yi ; int32_T i ; int32_T i1 ; int32_T nb ; int32_T nc
; uint32_T nr ; nb = ( int32_T ) ( n2 >> 6 ) ; i = 0 ; if ( nb < n1 ) { nc =
n + nb ; if ( nc > n1 ) { nc = n1 ; } nr = n2 - ( ( uint32_T ) nb << 6 ) ; if
( nr > 0U ) { u1i = u1 [ nb ] ; for ( i1 = nb + 1 ; i1 < nc ; i1 ++ ) { yi =
u1i >> nr ; u1i = u1 [ i1 ] ; y [ i ] = u1i << ( 64U - nr ) | yi ; i ++ ; }
yi = u1i >> nr ; if ( nc < n1 ) { yi |= u1 [ nc ] << ( 64U - nr ) ; } y [ i ]
= yi ; i ++ ; } else { for ( i1 = nb ; i1 < nc ; i1 ++ ) { y [ i ] = u1 [ i1
] ; i ++ ; } } } while ( i < n ) { y [ i ] = 0ULL ; i ++ ; } } void
uMultiWordMul ( const uint64_T u1 [ ] , int32_T n1 , const uint64_T u2 [ ] ,
int32_T n2 , uint64_T y [ ] , int32_T n ) { uint64_T a0 ; uint64_T a1 ;
uint64_T b1 ; uint64_T cb ; uint64_T u1i ; uint64_T w01 ; uint64_T w10 ;
uint64_T yk ; int32_T i ; int32_T j ; int32_T k ; int32_T ni ; for ( k = 0 ;
k < n ; k ++ ) { y [ k ] = 0ULL ; } for ( i = 0 ; i < n1 ; i ++ ) { cb = 0ULL
; u1i = u1 [ i ] ; a1 = u1i >> 32U ; a0 = u1i & 4294967295ULL ; ni = n - i ;
ni = n2 <= ni ? n2 : ni ; k = i ; for ( j = 0 ; j < ni ; j ++ ) { u1i = u2 [
j ] ; b1 = u1i >> 32U ; u1i &= 4294967295ULL ; w10 = a1 * u1i ; w01 = a0 * b1
; yk = y [ k ] + cb ; cb = ( uint64_T ) ( yk < cb ) ; u1i *= a0 ; yk += u1i ;
cb += ( uint64_T ) ( yk < u1i ) ; u1i = w10 << 32U ; yk += u1i ; cb += (
uint64_T ) ( yk < u1i ) ; u1i = w01 << 32U ; yk += u1i ; cb += ( uint64_T ) (
yk < u1i ) ; y [ k ] = yk ; cb += w10 >> 32U ; cb += w01 >> 32U ; cb += a1 *
b1 ; k ++ ; } if ( k < n ) { y [ k ] = cb ; } } } void MultiWordUnsignedWrap
( const uint64_T u1 [ ] , int32_T n1 , uint32_T n2 , uint64_T y [ ] ) {
int32_T i ; int32_T n1m1 ; n1m1 = n1 - 1 ; for ( i = 0 ; i < n1m1 ; i ++ ) {
y [ i ] = u1 [ i ] ; } y [ n1 - 1 ] = ( ( 1ULL << ( 64U - n2 ) ) - 1ULL ) &
u1 [ n1 - 1 ] ; } void mul_wide_s64 ( int64_T in0 , int64_T in1 , uint64_T *
ptrOutBitsHi , uint64_T * ptrOutBitsLo ) { uint64_T absIn0 ; uint64_T absIn1
; uint64_T in0Hi ; uint64_T in0Lo ; uint64_T in1Hi ; uint64_T productHiLo ;
uint64_T productLoHi ; absIn0 = in0 < 0LL ? ~ ( uint64_T ) in0 + 1ULL : (
uint64_T ) in0 ; absIn1 = in1 < 0LL ? ~ ( uint64_T ) in1 + 1ULL : ( uint64_T
) in1 ; in0Hi = absIn0 >> 32ULL ; in0Lo = absIn0 & 4294967295ULL ; in1Hi =
absIn1 >> 32ULL ; absIn0 = absIn1 & 4294967295ULL ; productHiLo = in0Hi *
absIn0 ; productLoHi = in0Lo * in1Hi ; absIn0 *= in0Lo ; absIn1 = 0ULL ;
in0Lo = ( productLoHi << 32ULL ) + absIn0 ; if ( in0Lo < absIn0 ) { absIn1 =
1ULL ; } absIn0 = in0Lo ; in0Lo += productHiLo << 32ULL ; if ( in0Lo < absIn0
) { absIn1 ++ ; } absIn0 = ( ( ( productLoHi >> 32ULL ) + ( productHiLo >>
32ULL ) ) + in0Hi * in1Hi ) + absIn1 ; if ( ( in0 != 0LL ) && ( ( in1 != 0LL
) && ( ( in0 > 0LL ) != ( in1 > 0LL ) ) ) ) { absIn0 = ~ absIn0 ; in0Lo = ~
in0Lo ; in0Lo ++ ; if ( in0Lo == 0ULL ) { absIn0 ++ ; } } * ptrOutBitsHi =
absIn0 ; * ptrOutBitsLo = in0Lo ; } int64_T mul_s64_loSR_sat_zero ( int64_T a
, int64_T b , uint64_T aShift ) { int64_T result ; uint64_T u64_chi ;
uint64_T u64_clo ; boolean_T roundup ; mul_wide_s64 ( a , b , & u64_chi , &
u64_clo ) ; roundup = ( ( ( int64_T ) u64_chi < 0LL ) && ( ( ( ( 1ULL <<
aShift ) - 1ULL ) & u64_clo ) != 0ULL ) ) ; u64_clo = ( u64_chi << ( 64ULL -
aShift ) | u64_clo >> aShift ) + roundup ; u64_chi = ( uint64_T ) ( roundup
&& ( u64_clo == 0ULL ) ) + ( uint64_T ) ( ( int64_T ) u64_chi >> aShift ) ;
if ( ( ( int64_T ) u64_chi > 0LL ) || ( ( u64_chi == 0ULL ) && ( u64_clo >=
9223372036854775808ULL ) ) ) { result = MAX_int64_T ; } else if ( ( ( int64_T
) u64_chi < - 1LL ) || ( ( ( int64_T ) u64_chi == - 1LL ) && ( u64_clo <
9223372036854775808ULL ) ) ) { result = MIN_int64_T ; } else { result = (
int64_T ) u64_clo ; } return result ; } int64_T mul_s64_loSR ( int64_T a ,
int64_T b , uint64_T aShift ) { uint64_T u64_chi ; uint64_T u64_clo ;
mul_wide_s64 ( a , b , & u64_chi , & u64_clo ) ; u64_clo = u64_chi << ( 64ULL
- aShift ) | u64_clo >> aShift ; return ( int64_T ) u64_clo ; } void
friwhnxto2 ( fhg0fbz5a3 * localB , l1pszmkfnd * localDW ) { localDW ->
dgqdsbadmt = false ; localDW -> jr12xlibrl = cc5d1pogrm ; localB ->
oxpob150pd = false ; localDW -> mtvokfg2km = 1U ; localDW -> gm2p0wwtvc =
leyvdjw1oc ; } void mrenxli3mf ( uint16_T gutsda4akm , boolean_T cvnjyywqyw ,
fhg0fbz5a3 * localB , l1pszmkfnd * localDW ) { localDW -> jr12xlibrl =
cc5d1pogrm ; if ( localDW -> gm2p0wwtvc == hiz5ku3muj ) { if ( gutsda4akm ==
6146 ) { localDW -> gm2p0wwtvc = leyvdjw1oc ; } else { localB -> oxpob150pd =
true ; } } else if ( cvnjyywqyw ) { localDW -> gm2p0wwtvc = hiz5ku3muj ; }
else { localB -> oxpob150pd = false ; } } void mgrwe21vin ( jk5p3pxbq5 *
localB , ouvmkwvpjn * localDW ) { localDW -> c3ky5ehk3m = false ; localDW ->
lvbeuc3sjb = hmrddibr3p ; localB -> ehjybluxrg = false ; localDW ->
dpphodfkey = 1U ; localDW -> mr2pswpsef = bhye01nuwc ; } void oe0gcvm3eu (
boolean_T lrmcdmwvb1 , boolean_T nxnjdu3fix , jk5p3pxbq5 * localB ,
ouvmkwvpjn * localDW ) { localDW -> lvbeuc3sjb = hmrddibr3p ; if ( localDW ->
mr2pswpsef == bhye01nuwc ) { if ( lrmcdmwvb1 ) { localDW -> mr2pswpsef =
l4i3akvc1o ; } else { localB -> ehjybluxrg = false ; } } else if ( nxnjdu3fix
) { localDW -> mr2pswpsef = bhye01nuwc ; } else { localB -> ehjybluxrg = true
; } } void eipz3ms3lx ( cb0i5b0jtx * localB , dhrlki4cje * localDW ) {
localDW -> pqjrcy3mks = false ; localDW -> pf0eocqu32 = ofxunbqyzs ; localB
-> n1wklyyqdj = false ; localDW -> dsczn1cz1s = 1U ; localDW -> ptznzx2qmi =
lwatnco3rs ; } void mg2ewwtppa ( uint16_T dbwjqdldrq , cb0i5b0jtx * localB ,
dhrlki4cje * localDW ) { localDW -> pf0eocqu32 = ofxunbqyzs ; if ( localDW ->
ptznzx2qmi == lwatnco3rs ) { if ( dbwjqdldrq == 1 ) { localDW -> ptznzx2qmi =
gmbnsgyxk4 ; } else { localB -> n1wklyyqdj = false ; } } else if ( dbwjqdldrq
== 6147 ) { localDW -> ptznzx2qmi = lwatnco3rs ; } else { localB ->
n1wklyyqdj = true ; } } static boolean_T bwjhtuhpzu ( jhe2xtdg5h * obj ,
boolean_T skipNonDirectFeed ) { int32_T b_k ; boolean_T anyInputSizeChanged ;
boolean_T exitg1 ; anyInputSizeChanged = false ; b_k = 0 ; exitg1 = false ;
while ( ( ! exitg1 ) && ( b_k < 8 ) ) { if ( ( ! skipNonDirectFeed ) && ( obj
-> inputVarSize [ 0 ] . f1 [ b_k ] != 1U ) ) { anyInputSizeChanged = true ;
for ( b_k = 0 ; b_k < 8 ; b_k ++ ) { obj -> inputVarSize [ 0 ] . f1 [ b_k ] =
1U ; } exitg1 = true ; } else { b_k ++ ; } } b_k = 0 ; exitg1 = false ; while
( ( ! exitg1 ) && ( b_k < 8 ) ) { if ( ( ! skipNonDirectFeed ) && ( obj ->
inputVarSize [ 1 ] . f1 [ b_k ] != 1U ) ) { anyInputSizeChanged = true ; for
( b_k = 0 ; b_k < 8 ; b_k ++ ) { obj -> inputVarSize [ 1 ] . f1 [ b_k ] = 1U
; } exitg1 = true ; } else { b_k ++ ; } } b_k = 0 ; exitg1 = false ; while (
( ! exitg1 ) && ( b_k < 8 ) ) { if ( ( ! skipNonDirectFeed ) && ( obj ->
inputVarSize [ 2 ] . f1 [ b_k ] != 1U ) ) { anyInputSizeChanged = true ; for
( b_k = 0 ; b_k < 8 ; b_k ++ ) { obj -> inputVarSize [ 2 ] . f1 [ b_k ] = 1U
; } exitg1 = true ; } else { b_k ++ ; } } b_k = 0 ; exitg1 = false ; while (
( ! exitg1 ) && ( b_k < 8 ) ) { if ( ( ! skipNonDirectFeed ) && ( obj ->
inputVarSize [ 3 ] . f1 [ b_k ] != 1U ) ) { anyInputSizeChanged = true ; for
( b_k = 0 ; b_k < 8 ; b_k ++ ) { obj -> inputVarSize [ 3 ] . f1 [ b_k ] = 1U
; } exitg1 = true ; } else { b_k ++ ; } } return anyInputSizeChanged ; } void
na4ougiori ( dtrl0ddrd1 * localDW ) { int32_T i ; localDW -> oozywslmnt =
true ; localDW -> akkfyrovb0 . isInitialized = 1 ; for ( i = 0 ; i < 8 ; i ++
) { localDW -> akkfyrovb0 . inputVarSize [ 0 ] . f1 [ i ] = 1U ; localDW ->
akkfyrovb0 . inputVarSize [ 1 ] . f1 [ i ] = 1U ; localDW -> akkfyrovb0 .
inputVarSize [ 2 ] . f1 [ i ] = 1U ; localDW -> akkfyrovb0 . inputVarSize [ 3
] . f1 [ i ] = 1U ; } localDW -> akkfyrovb0 . pOutReadData = 0 ; memset ( &
localDW -> akkfyrovb0 . pRAM [ 0 ] , 0 , sizeof ( int16_T ) << 13U ) ; } void
dcguzoxh2s ( fzts3qvofq * localB , dtrl0ddrd1 * localDW ) { bwjhtuhpzu ( &
localDW -> akkfyrovb0 , true ) ; localB -> bozwbmnpo3 = localDW -> akkfyrovb0
. pOutReadData ; } void el33ttatyo ( int16_T ag4rkkodum , uint16_T dsxtwtdcem
, boolean_T oexwni10zi , uint16_T jm0kbawfn5 , dtrl0ddrd1 * localDW ) {
int32_T i ; if ( localDW -> akkfyrovb0 . isInitialized != 1 ) { localDW ->
akkfyrovb0 . isInitialized = 1 ; for ( i = 0 ; i < 8 ; i ++ ) { localDW ->
akkfyrovb0 . inputVarSize [ 0 ] . f1 [ i ] = 1U ; localDW -> akkfyrovb0 .
inputVarSize [ 1 ] . f1 [ i ] = 1U ; localDW -> akkfyrovb0 . inputVarSize [ 2
] . f1 [ i ] = 1U ; localDW -> akkfyrovb0 . inputVarSize [ 3 ] . f1 [ i ] =
1U ; } memset ( & localDW -> akkfyrovb0 . pRAM [ 0 ] , 0 , sizeof ( int16_T )
<< 13U ) ; } else { bwjhtuhpzu ( & localDW -> akkfyrovb0 , false ) ; }
localDW -> akkfyrovb0 . pOutReadData = localDW -> akkfyrovb0 . pRAM [
jm0kbawfn5 ] ; if ( oexwni10zi ) { localDW -> akkfyrovb0 . pRAM [ dsxtwtdcem
] = ag4rkkodum ; } } void kkvsri4cxy ( lf4dq10l1d * localDW ) { localDW ->
aati4n1exl = false ; localDW -> dzegpmyi00 = meyebydag5 ; } void faha5qigiv (
uint32_T dxm0n0plnh , nx5t3hqgms * localB , lf4dq10l1d * localDW ) { localDW
-> dzegpmyi00 = meyebydag5 ; localB -> pblcra52ya = dxm0n0plnh >> 22 ; } void
ksiqa1jioy ( d4apjfx232 * localDW ) { localDW -> inqavurpq2 = false ; localDW
-> j2wb0heh5r = hmmjpbkx1c ; } void kum1vfui1c ( int64_T gaqzpcm5jh ,
gtfqflwlxp * localB , d4apjfx232 * localDW ) { int64_T tmp ; localDW ->
j2wb0heh5r = hmmjpbkx1c ; tmp = gaqzpcm5jh << 15 ; if ( ( ( uint64_T ) tmp &
4294967296ULL ) != 0ULL ) { localB -> kqec11mzgl = tmp | - 4294967296LL ; }
else { localB -> kqec11mzgl = tmp & 4294967295LL ; } } void lh0vflmbah (
kb425lama0 * localDW ) { localDW -> e5djmff4ey = false ; localDW ->
bhhrytpig4 = jamqk104qo ; } void nt3t3nwbzj ( int64_T d0lgsdj01w , kio0ovttqn
* localB , kb425lama0 * localDW ) { int64_T tmp ; localDW -> bhhrytpig4 =
jamqk104qo ; tmp = d0lgsdj01w << 1 ; if ( ( ( uint64_T ) tmp & 4294967296ULL
) != 0ULL ) { localB -> fpsaqss2rh = tmp | - 4294967296LL ; } else { localB
-> fpsaqss2rh = tmp & 4294967295LL ; } } void puvsi2e35k ( n2vzy4fgqb *
localDW ) { localDW -> kfwk41aocj = false ; localDW -> ihbdkradn2 =
p5jrp2hw25 ; } void mggcxvqcxn ( int64_T nijnzrzrgb , hop5irsf4t * localB ,
n2vzy4fgqb * localDW ) { localDW -> ihbdkradn2 = p5jrp2hw25 ; localB ->
igjdtuobgr = ( int64_T ) ( ( ( uint64_T ) nijnzrzrgb & 8589934591ULL ) >> 16
) ; } void lqoiikc5jl ( ck15sjqlzy * localDW ) { localDW -> leoynkr3q5 =
false ; localDW -> kmvjqif1vx = knrjj05w1q ; } void po54rt51rv ( int64_T
bi10c2vihi , k1d03myt2o * localB , ck15sjqlzy * localDW ) { int64_T tmp ;
localDW -> kmvjqif1vx = knrjj05w1q ; tmp = bi10c2vihi << 10 ; if ( ( (
uint64_T ) tmp & 4294967296ULL ) != 0ULL ) { localB -> ftepdewpox = tmp | -
4294967296LL ; } else { localB -> ftepdewpox = tmp & 4294967295LL ; } } void
ik5qe5e3gn ( jw05mhjete * localDW ) { localDW -> l0e4fwians = false ; localDW
-> cdjbjgd1xc = bxoc511o4b ; } void k33a52bgwi ( int64_T bscvmq55l0 ,
owwwkgvypq * localB , jw05mhjete * localDW ) { int64_T tmp ; localDW ->
cdjbjgd1xc = bxoc511o4b ; tmp = ( int64_T ) ( ( ( uint64_T ) bscvmq55l0 &
8589934591ULL ) >> 1 ) ; if ( ( ( uint64_T ) tmp & 4294967296ULL ) != 0ULL )
{ localB -> k2dn0g2i22 = tmp | - 4294967296LL ; } else { localB -> k2dn0g2i22
= tmp & 4294967295LL ; } } void gbd042go2y ( joga05kjsz * localDW ) { localDW
-> kyqlsdxb1f = false ; localDW -> h4dsuebilz = jm4m00xkjj ; } void
fzp5yrcmst ( int64_T kqjnjzwl5l , p0crb3fek4 * localB , joga05kjsz * localDW
) { int64_T tmp ; localDW -> h4dsuebilz = jm4m00xkjj ; tmp = kqjnjzwl5l << 11
; if ( ( ( uint64_T ) tmp & 4294967296ULL ) != 0ULL ) { localB -> k33w3zu5xr
= tmp | - 4294967296LL ; } else { localB -> k33w3zu5xr = tmp & 4294967295LL ;
} } void o1m4iocjmv ( ecl5qgk2gm * localDW ) { localDW -> llq5zg0hho = false
; localDW -> abs01yeupq = kkeooqll4r ; } void hx2bxym1a4 ( int64_T hhojmhfaxh
, fhdgvbqydk * localB , ecl5qgk2gm * localDW ) { int64_T tmp ; localDW ->
abs01yeupq = kkeooqll4r ; tmp = hhojmhfaxh << 12 ; if ( ( ( uint64_T ) tmp &
4294967296ULL ) != 0ULL ) { localB -> bokjq0pvqj = tmp | - 4294967296LL ; }
else { localB -> bokjq0pvqj = tmp & 4294967295LL ; } } void b15csreixx (
dyycn05pta * localDW ) { localDW -> dj53101tjo = false ; localDW ->
kj0js5y43a = m5rcamyrwl ; } void jtd3j4qmtj ( int64_T hwrrxbunbl , fkmh5btb03
* localB , dyycn05pta * localDW ) { int64_T tmp ; localDW -> kj0js5y43a =
m5rcamyrwl ; tmp = hwrrxbunbl << 13 ; if ( ( ( uint64_T ) tmp & 4294967296ULL
) != 0ULL ) { localB -> egtpphpyd0 = tmp | - 4294967296LL ; } else { localB
-> egtpphpyd0 = tmp & 4294967295LL ; } } void anfmfwncyk ( dlkubice4t *
localDW ) { localDW -> bzq3ui1czr = false ; localDW -> iua2aul0k5 =
mhlr5mbyg5 ; } void mtt1ayedix ( int64_T frp0gn0i4a , mf1xdrxcmt * localB ,
dlkubice4t * localDW ) { int64_T tmp ; localDW -> iua2aul0k5 = mhlr5mbyg5 ;
tmp = frp0gn0i4a << 14 ; if ( ( ( uint64_T ) tmp & 4294967296ULL ) != 0ULL )
{ localB -> ar3jokrbaq = tmp | - 4294967296LL ; } else { localB -> ar3jokrbaq
= tmp & 4294967295LL ; } } void otgzv3ygco ( besxczw1nh * localDW ) { localDW
-> dess21gzas = false ; localDW -> e4ft35rk43 = b5plz3zdci ; } void
aazmv33tcm ( int64_T bie3kafnrj , cgfgwzt53e * localB , besxczw1nh * localDW
) { int64_T tmp ; localDW -> e4ft35rk43 = b5plz3zdci ; tmp = bie3kafnrj << 2
; if ( ( ( uint64_T ) tmp & 4294967296ULL ) != 0ULL ) { localB -> n5gzqty3ro
= tmp | - 4294967296LL ; } else { localB -> n5gzqty3ro = tmp & 4294967295LL ;
} } void glmksrsft4 ( licusx5ity * localDW ) { localDW -> eohabhj4xn = false
; localDW -> ottkqopm4f = k4zx2m0scn ; } void bstd1u2cpo ( int64_T h3faudxz0l
, jheo1cew5n * localB , licusx5ity * localDW ) { int64_T tmp ; localDW ->
ottkqopm4f = k4zx2m0scn ; tmp = h3faudxz0l << 3 ; if ( ( ( uint64_T ) tmp &
4294967296ULL ) != 0ULL ) { localB -> iz5wzxhduw = tmp | - 4294967296LL ; }
else { localB -> iz5wzxhduw = tmp & 4294967295LL ; } } void btwb2tza3v (
eoa0ko2nnm * localDW ) { localDW -> eq21cdu2ve = false ; localDW ->
ak5b20glzq = h52w1vgbeq ; } void f2rydg4dp1 ( int64_T i514xyvogp , dvalvdwvpq
* localB , eoa0ko2nnm * localDW ) { int64_T tmp ; localDW -> ak5b20glzq =
h52w1vgbeq ; tmp = i514xyvogp << 4 ; if ( ( ( uint64_T ) tmp & 4294967296ULL
) != 0ULL ) { localB -> a4bhai3ys3 = tmp | - 4294967296LL ; } else { localB
-> a4bhai3ys3 = tmp & 4294967295LL ; } } void l51dggekdp ( cnkyxsdrei *
localDW ) { localDW -> om1xuzw1eo = false ; localDW -> o2cwobb3pj =
k5h4vt1qk3 ; } void j11vdnbc5b ( int64_T d4mrk135mm , o0vix3xnem * localB ,
cnkyxsdrei * localDW ) { int64_T tmp ; localDW -> o2cwobb3pj = k5h4vt1qk3 ;
tmp = d4mrk135mm << 5 ; if ( ( ( uint64_T ) tmp & 4294967296ULL ) != 0ULL ) {
localB -> idny1f21lj = tmp | - 4294967296LL ; } else { localB -> idny1f21lj =
tmp & 4294967295LL ; } } void bluzx5r44q ( nqfwsiobzc * localDW ) { localDW
-> mpmtoteyyz = false ; localDW -> d0r4pg3qpe = np2rwn0k3r ; } void
m1qiz2ekay ( int64_T jjojeubedm , em14v3o2ve * localB , nqfwsiobzc * localDW
) { int64_T tmp ; localDW -> d0r4pg3qpe = np2rwn0k3r ; tmp = jjojeubedm << 6
; if ( ( ( uint64_T ) tmp & 4294967296ULL ) != 0ULL ) { localB -> oozybsfii0
= tmp | - 4294967296LL ; } else { localB -> oozybsfii0 = tmp & 4294967295LL ;
} } void pa4uou1gdh ( eg3ij1foh1 * localDW ) { localDW -> gzbdyuemgc = false
; localDW -> arfpsuibu4 = clsuas5ybk ; } void dlafdnj3fg ( int64_T i4qlj4pkyo
, lquylgmosg * localB , eg3ij1foh1 * localDW ) { int64_T tmp ; localDW ->
arfpsuibu4 = clsuas5ybk ; tmp = i4qlj4pkyo << 7 ; if ( ( ( uint64_T ) tmp &
4294967296ULL ) != 0ULL ) { localB -> dnymjzhjl4 = tmp | - 4294967296LL ; }
else { localB -> dnymjzhjl4 = tmp & 4294967295LL ; } } void frhugcqjcs (
isvwrqfyng * localDW ) { localDW -> bko3b1m5jh = false ; localDW ->
dxojn2xddw = fv1o1mwhbp ; } void onrxopzil0 ( int64_T pszeuy1o1q , fymwnt1mkg
* localB , isvwrqfyng * localDW ) { int64_T tmp ; localDW -> dxojn2xddw =
fv1o1mwhbp ; tmp = pszeuy1o1q << 8 ; if ( ( ( uint64_T ) tmp & 4294967296ULL
) != 0ULL ) { localB -> edk24kfgxw = tmp | - 4294967296LL ; } else { localB
-> edk24kfgxw = tmp & 4294967295LL ; } } void pdytvdxwzu ( gfn2ks10r2 *
localDW ) { localDW -> jq1v3dabca = false ; localDW -> ofrvdmgnuh =
gbsc1lpre0 ; } void fxuvuc5ilx ( int64_T jvzqnl5ndi , at25yzukvm * localB ,
gfn2ks10r2 * localDW ) { int64_T tmp ; localDW -> ofrvdmgnuh = gbsc1lpre0 ;
tmp = jvzqnl5ndi << 9 ; if ( ( ( uint64_T ) tmp & 4294967296ULL ) != 0ULL ) {
localB -> f3indibbk0 = tmp | - 4294967296LL ; } else { localB -> f3indibbk0 =
tmp & 4294967295LL ; } } void heskyuqcqw ( arzkv2ko5t * localDW ) { localDW
-> m5l4tdev1b = false ; localDW -> kbd34gxwbo = j032gcvgny ; } void
cqyo42y2gh ( int16_T l4qomuvbc5 , m0s5ocgs3w * localB , arzkv2ko5t * localDW
) { localDW -> kbd34gxwbo = j032gcvgny ; localB -> h5i5xy41ea = ( int16_T ) (
l4qomuvbc5 << 1 ) ; } void h3cnkt4jqz ( ek02ioxskj * localDW ) { localDW ->
cade0e5uxu = false ; localDW -> kac4x3wvla = gyuy0duhkh ; } void nv44ttbdg3 (
int16_T h1y3b1f34l , hgkotmg3qo * localB , ek02ioxskj * localDW ) { localDW
-> kac4x3wvla = gyuy0duhkh ; localB -> gnjj4zylsj = ( int16_T ) ( h1y3b1f34l
<< 10 ) ; } void epf0xslrxm ( lddk4cji3u * localDW ) { localDW -> jfuok3z43s
= false ; localDW -> i5moiltmws = kkroyczlnz ; } void g2rlwqx2xm ( int16_T
hyaboxmpnz , lcy0vyxdfd * localB , lddk4cji3u * localDW ) { localDW ->
i5moiltmws = kkroyczlnz ; localB -> ncs0hoa1j5 = ( int16_T ) ( ( uint16_T )
hyaboxmpnz >> 1 ) ; } void a0zkjtkodd ( npw2jnyxb4 * localDW ) { localDW ->
eqtir0gumq = false ; localDW -> pk5rrxppux = avktymvjyw ; } void am45qhx1eq (
int16_T ozkjvqpaqk , hdpijtc4eu * localB , npw2jnyxb4 * localDW ) { localDW
-> pk5rrxppux = avktymvjyw ; localB -> jn3vnl0uhn = ( int16_T ) ( ozkjvqpaqk
<< 11 ) ; } void kbagdkq0lj ( jaqxwmxome * localDW ) { localDW -> kltuftdkui
= false ; localDW -> emb3do3f0r = b0u3ja5v3s ; } void im0j4vocky ( int16_T
myxuy5wkkj , gy53ka401k * localB , jaqxwmxome * localDW ) { localDW ->
emb3do3f0r = b0u3ja5v3s ; localB -> heoxs0loqa = ( int16_T ) ( myxuy5wkkj <<
12 ) ; } void p11kjvhrns ( pozkxb0in3 * localDW ) { localDW -> mcqwmlgcq0 =
false ; localDW -> m5k3zxa1u1 = mhwre5bogp ; } void hexdymfazx ( int16_T
jr0yhlpt5r , ez0anp1fc1 * localB , pozkxb0in3 * localDW ) { localDW ->
m5k3zxa1u1 = mhwre5bogp ; localB -> iqxwhfezhq = ( int16_T ) ( jr0yhlpt5r <<
13 ) ; } void obaxn2ijaw ( fosyfoanqd * localDW ) { localDW -> hgh0tt5vqy =
false ; localDW -> j30rgfm2jv = ia4l2qceio ; } void pdnjandzta ( int16_T
akbwbe1i2v , asnllkoefk * localB , fosyfoanqd * localDW ) { localDW ->
j30rgfm2jv = ia4l2qceio ; localB -> pljux34q0r = ( int16_T ) ( akbwbe1i2v <<
14 ) ; } void fb24nl3uvc ( oyzryugtpv * localDW ) { localDW -> c0hodwtoi4 =
false ; localDW -> nf2byzbqdw = i4qa4vyxzt ; } void o3izwcuble ( int16_T
pq2bpcrpxv , o3y4cazffn * localB , oyzryugtpv * localDW ) { localDW ->
nf2byzbqdw = i4qa4vyxzt ; localB -> lavrwzhcrp = ( int16_T ) ( pq2bpcrpxv <<
2 ) ; } void fq1xgvpq5l ( gfwf1bb5ur * localDW ) { localDW -> hbw4kaxbof =
false ; localDW -> eziun3lwqz = k1n2jy4nmt ; } void gvbyuajj10 ( int16_T
d0bu1fubnt , bxvz3mkxdp * localB , gfwf1bb5ur * localDW ) { localDW ->
eziun3lwqz = k1n2jy4nmt ; localB -> crugzopkfg = ( int16_T ) ( d0bu1fubnt <<
3 ) ; } void dylc5js0a3 ( nn2t3endfk * localDW ) { localDW -> fleyftrufo =
false ; localDW -> izussz2j2f = nyzms215fz ; } void dfgw4kuzso ( int16_T
pqcvvtywoy , nlimw3bnjm * localB , nn2t3endfk * localDW ) { localDW ->
izussz2j2f = nyzms215fz ; localB -> ddekw2q1y4 = ( int16_T ) ( pqcvvtywoy <<
4 ) ; } void csr5qvg15m ( jnloryplhv * localDW ) { localDW -> ab3ipnlkse =
false ; localDW -> e2wpdf03fq = dfbloz333y ; } void m2rovdpxpj ( int16_T
j4tjf1oyg2 , poq0z42cby * localB , jnloryplhv * localDW ) { localDW ->
e2wpdf03fq = dfbloz333y ; localB -> agq2cvcyz0 = ( int16_T ) ( j4tjf1oyg2 <<
5 ) ; } void fkownensru ( k0xrm5jzxo * localDW ) { localDW -> b2wniulodl =
false ; localDW -> cexaqfpgul = fhtw2a3zqd ; } void gzu0v1k154 ( int16_T
gzvx0f25j4 , cvjcj1ixfm * localB , k0xrm5jzxo * localDW ) { localDW ->
cexaqfpgul = fhtw2a3zqd ; localB -> awrhkte3yd = ( int16_T ) ( gzvx0f25j4 <<
6 ) ; } void pr1cdqavaj ( gz3y5krne4 * localDW ) { localDW -> ap1t1grbei =
false ; localDW -> eakynmnk00 = aveahj054f ; } void bx4q2vjdxx ( int16_T
hz5cklwcx5 , for2zaeh5b * localB , gz3y5krne4 * localDW ) { localDW ->
eakynmnk00 = aveahj054f ; localB -> jgambcvtl0 = ( int16_T ) ( hz5cklwcx5 <<
7 ) ; } void ajy1izpfit ( p0cxfzutxs * localDW ) { localDW -> aczjakmt3z =
false ; localDW -> hnsu34ocdv = ccph5bcoae ; } void dmnv2typrk ( int16_T
i4lj3cjsfo , kphtmprvxz * localB , p0cxfzutxs * localDW ) { localDW ->
hnsu34ocdv = ccph5bcoae ; localB -> c0n1xa2bz2 = ( int16_T ) ( i4lj3cjsfo <<
8 ) ; } void eymblahprd ( butccgvrps * localDW ) { localDW -> i24gbolf04 =
false ; localDW -> ivbbwftzhv = kefh02u2xa ; } void c45nfqxt1b ( int16_T
n4trvkcgks , hxizgndrjv * localB , butccgvrps * localDW ) { localDW ->
ivbbwftzhv = kefh02u2xa ; localB -> eslgbrlmfk = ( int16_T ) ( n4trvkcgks <<
9 ) ; } static void jfd4g2kq55 ( lgw3dwnp03 * obj ) { int32_T i ; int32_T i1
; int32_T i2 ; int32_T k2 ; static const boolean_T tmp [ 4096 ] = { true ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
} ; static const boolean_T tmp_p [ 4096 ] = { false , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false } ; obj -> pInitialize
= true ; obj -> pOverflowFlag = true ; memset ( & obj -> pOverflowStage [ 0 ]
, 0 , 12U * sizeof ( real_T ) ) ; obj -> pResetStart = false ; memset ( & obj
-> pInBuffer_valid [ 0 ] , 0 , 57344U * sizeof ( real_T ) ) ; memset ( & obj
-> pInBuffer_re [ 0 ] , 0 , 57344U * sizeof ( int32_T ) ) ; memset ( & obj ->
pInBuffer_im [ 0 ] , 0 , 57344U * sizeof ( int32_T ) ) ; memset ( & obj ->
pOutBuffer_cmplx [ 0 ] , 0 , 114688U * sizeof ( cint32_T ) ) ; obj ->
pLastData . re = 0 ; obj -> pLastData . im = 0 ; obj -> pInitialValue . re =
0 ; obj -> pInitialValue . im = 0 ; for ( i = 0 ; i < 2048 ; i ++ ) { i1 = i
; i2 = 0 ; for ( k2 = 0 ; k2 < 11 ; k2 ++ ) { i2 = i2 << 1 | ( i1 & 1 ) ; i1
>>= 1 ; } obj -> pBitReverseTable_H [ i ] = i2 ; } for ( i = 0 ; i < 4096 ; i
++ ) { i1 = i ; i2 = 0 ; for ( k2 = 0 ; k2 < 12 ; k2 ++ ) { i2 = i2 << 1 | (
i1 & 1 ) ; i1 >>= 1 ; } obj -> pBitReverseTable_F [ i ] = i2 ; obj ->
pStartOutputPort [ i ] = tmp [ i ] ; obj -> pEndOutputPort [ i ] = tmp_p [ i
] ; } obj -> pSimTime = 1.0 ; obj -> pCurSOF = 0.0 ; obj -> pWrFifoAddr = 1.0
; obj -> pRdFifoAddr = 1.0 ; obj -> pState = 0.0 ; obj -> pSampleCnt = 0.0 ;
obj -> pOutCnt = 0.0 ; obj -> pWrEnb = false ; obj -> pRdyReg = true ; }
static uint64_T kswswbzqb5hz ( gsamlxo1wb * obj , uint16_T varargin_1 ) {
uint128m_T tmp ; uint128m_T tmp_e ; uint128m_T tmp_i ; uint128m_T tmp_p ;
uint64_T tmp_m ; int32_T b_k ; static const uint128m_T tmp_g = { {
4611686018427375905ULL , 31ULL } } ; boolean_T exitg1 ; if ( obj ->
isInitialized != 1 ) { obj -> isInitialized = 1 ; for ( b_k = 0 ; b_k < 8 ;
b_k ++ ) { obj -> inputVarSize . f1 [ b_k ] = 1U ; } obj -> isSetupComplete =
true ; } b_k = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( b_k < 8 ) ) {
if ( obj -> inputVarSize . f1 [ b_k ] != 1U ) { for ( b_k = 0 ; b_k < 8 ; b_k
++ ) { obj -> inputVarSize . f1 [ b_k ] = 1U ; } exitg1 = true ; } else { b_k
++ ; } } tmp_m = varargin_1 ; uMultiWordMul ( & tmp_m , 1 , & tmp_g . chunks
[ 0U ] , 2 , & tmp_i . chunks [ 0U ] , 2 ) ; MultiWordUnsignedWrap ( & tmp_i
. chunks [ 0U ] , 2 , 55U , & tmp_e . chunks [ 0U ] ) ; tmp_m =
1152921504606847ULL ; uMultiWordMul ( & tmp_e . chunks [ 0U ] , 2 , & tmp_m ,
1 , & tmp_p . chunks [ 0U ] , 2 ) ; uMultiWordShr ( & tmp_p . chunks [ 0U ] ,
2 , 73U , & tmp . chunks [ 0U ] , 2 ) ; return MultiWord2uLong ( & tmp .
chunks [ 0U ] ) ; } static void ipbyhx4yqv4d ( o0tlycgbd5hp * obj , uint16_T
varargin_1 ) { int32_T i ; obj -> isSetupComplete = false ; obj ->
isInitialized = 1 ; obj -> pSystemImpl . isInitialized = 1 ; for ( i = 0 ; i
< 8 ; i ++ ) { obj -> pSystemImpl . inputVarSize . f1 [ i ] = 1U ; } obj ->
pSystemImpl . isSetupComplete = true ; kswswbzqb5hz ( & obj -> pSystemImpl ,
varargin_1 ) ; obj -> pPipeline [ 0 ] = 0ULL ; kswswbzqb5hz ( & obj ->
pSystemImpl , varargin_1 ) ; obj -> pPipeline [ 1 ] = 0ULL ; kswswbzqb5hz ( &
obj -> pSystemImpl , varargin_1 ) ; obj -> pPipeline [ 2 ] = 0ULL ;
kswswbzqb5hz ( & obj -> pSystemImpl , varargin_1 ) ; obj -> pPipeline [ 3 ] =
0ULL ; obj -> pValidPipeline [ 0 ] = false ; obj -> pValidPipeline [ 1 ] =
false ; obj -> pValidPipeline [ 2 ] = false ; obj -> pValidPipeline [ 3 ] =
false ; obj -> isSetupComplete = true ; } static uint64_T kswswbzqb5hzc (
gsamlxo1wb * obj , uint16_T varargin_1 ) { uint128m_T tmp ; uint128m_T tmp_e
; uint128m_T tmp_i ; uint128m_T tmp_p ; uint64_T tmp_m ; int32_T b_k ; static
const uint128m_T tmp_g = { { 17027763760347343551ULL , 76ULL } } ; boolean_T
exitg1 ; if ( obj -> isInitialized != 1 ) { obj -> isInitialized = 1 ; for (
b_k = 0 ; b_k < 8 ; b_k ++ ) { obj -> inputVarSize . f1 [ b_k ] = 1U ; } obj
-> isSetupComplete = true ; } b_k = 0 ; exitg1 = false ; while ( ( ! exitg1 )
&& ( b_k < 8 ) ) { if ( obj -> inputVarSize . f1 [ b_k ] != 1U ) { for ( b_k
= 0 ; b_k < 8 ; b_k ++ ) { obj -> inputVarSize . f1 [ b_k ] = 1U ; } exitg1 =
true ; } else { b_k ++ ; } } tmp_m = varargin_1 ; uMultiWordMul ( & tmp_m , 1
, & tmp_g . chunks [ 0U ] , 2 , & tmp_i . chunks [ 0U ] , 2 ) ;
MultiWordUnsignedWrap ( & tmp_i . chunks [ 0U ] , 2 , 53U , & tmp_e . chunks
[ 0U ] ) ; tmp_m = 7493989779944505ULL ; uMultiWordMul ( & tmp_e . chunks [
0U ] , 2 , & tmp_m , 1 , & tmp_p . chunks [ 0U ] , 2 ) ; uMultiWordShr ( &
tmp_p . chunks [ 0U ] , 2 , 75U , & tmp . chunks [ 0U ] , 2 ) ; return
MultiWord2uLong ( & tmp . chunks [ 0U ] ) ; } static void ipbyhx4yqv4dv (
o0tlycgbd5h * obj , uint16_T varargin_1 ) { int32_T i ; obj ->
isSetupComplete = false ; obj -> isInitialized = 1 ; obj -> pSystemImpl .
isInitialized = 1 ; for ( i = 0 ; i < 8 ; i ++ ) { obj -> pSystemImpl .
inputVarSize . f1 [ i ] = 1U ; } obj -> pSystemImpl . isSetupComplete = true
; kswswbzqb5hzc ( & obj -> pSystemImpl , varargin_1 ) ; obj -> pPipeline [ 0
] = 0ULL ; kswswbzqb5hzc ( & obj -> pSystemImpl , varargin_1 ) ; obj ->
pPipeline [ 1 ] = 0ULL ; kswswbzqb5hzc ( & obj -> pSystemImpl , varargin_1 )
; obj -> pPipeline [ 2 ] = 0ULL ; kswswbzqb5hzc ( & obj -> pSystemImpl ,
varargin_1 ) ; obj -> pPipeline [ 3 ] = 0ULL ; obj -> pValidPipeline [ 0 ] =
false ; obj -> pValidPipeline [ 1 ] = false ; obj -> pValidPipeline [ 2 ] =
false ; obj -> pValidPipeline [ 3 ] = false ; obj -> isSetupComplete = true ;
} static uint64_T kswswbzqb5hzcf ( gsamlxo1wb * obj , uint16_T varargin_1 ) {
uint128m_T tmp ; uint128m_T tmp_e ; uint128m_T tmp_i ; uint128m_T tmp_p ;
uint64_T tmp_m ; int32_T b_k ; static const uint128m_T tmp_g = { {
18446744073709513217ULL , 99ULL } } ; boolean_T exitg1 ; if ( obj ->
isInitialized != 1 ) { obj -> isInitialized = 1 ; for ( b_k = 0 ; b_k < 8 ;
b_k ++ ) { obj -> inputVarSize . f1 [ b_k ] = 1U ; } obj -> isSetupComplete =
true ; } b_k = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( b_k < 8 ) ) {
if ( obj -> inputVarSize . f1 [ b_k ] != 1U ) { for ( b_k = 0 ; b_k < 8 ; b_k
++ ) { obj -> inputVarSize . f1 [ b_k ] = 1U ; } exitg1 = true ; } else { b_k
++ ; } } tmp_m = varargin_1 ; uMultiWordMul ( & tmp_m , 1 , & tmp_g . chunks
[ 0U ] , 2 , & tmp_i . chunks [ 0U ] , 2 ) ; MultiWordUnsignedWrap ( & tmp_i
. chunks [ 0U ] , 2 , 53U , & tmp_e . chunks [ 0U ] ) ; tmp_m =
5764607523034235ULL ; uMultiWordMul ( & tmp_e . chunks [ 0U ] , 2 , & tmp_m ,
1 , & tmp_p . chunks [ 0U ] , 2 ) ; uMultiWordShr ( & tmp_p . chunks [ 0U ] ,
2 , 75U , & tmp . chunks [ 0U ] , 2 ) ; return MultiWord2uLong ( & tmp .
chunks [ 0U ] ) ; } static void ipbyhx4yqv4dvp ( o0tlycgbd5h * obj , uint16_T
varargin_1 ) { int32_T i ; obj -> isSetupComplete = false ; obj ->
isInitialized = 1 ; obj -> pSystemImpl . isInitialized = 1 ; for ( i = 0 ; i
< 8 ; i ++ ) { obj -> pSystemImpl . inputVarSize . f1 [ i ] = 1U ; } obj ->
pSystemImpl . isSetupComplete = true ; kswswbzqb5hzcf ( & obj -> pSystemImpl
, varargin_1 ) ; obj -> pPipeline [ 0 ] = 0ULL ; kswswbzqb5hzcf ( & obj ->
pSystemImpl , varargin_1 ) ; obj -> pPipeline [ 1 ] = 0ULL ; kswswbzqb5hzcf (
& obj -> pSystemImpl , varargin_1 ) ; obj -> pPipeline [ 2 ] = 0ULL ;
kswswbzqb5hzcf ( & obj -> pSystemImpl , varargin_1 ) ; obj -> pPipeline [ 3 ]
= 0ULL ; obj -> pValidPipeline [ 0 ] = false ; obj -> pValidPipeline [ 1 ] =
false ; obj -> pValidPipeline [ 2 ] = false ; obj -> pValidPipeline [ 3 ] =
false ; obj -> isSetupComplete = true ; } static uint64_T kswswbzqb5hzcfs (
gsamlxo1wb * obj , uint16_T varargin_1 ) { uint128m_T tmp ; uint128m_T tmp_e
; uint128m_T tmp_i ; uint128m_T tmp_p ; uint64_T tmp_m ; int32_T b_k ; static
const uint128m_T tmp_g = { { 18446744073709167617ULL , 999ULL } } ; boolean_T
exitg1 ; if ( obj -> isInitialized != 1 ) { obj -> isInitialized = 1 ; for (
b_k = 0 ; b_k < 8 ; b_k ++ ) { obj -> inputVarSize . f1 [ b_k ] = 1U ; } obj
-> isSetupComplete = true ; } b_k = 0 ; exitg1 = false ; while ( ( ! exitg1 )
&& ( b_k < 8 ) ) { if ( obj -> inputVarSize . f1 [ b_k ] != 1U ) { for ( b_k
= 0 ; b_k < 8 ; b_k ++ ) { obj -> inputVarSize . f1 [ b_k ] = 1U ; } exitg1 =
true ; } else { b_k ++ ; } } tmp_m = varargin_1 ; uMultiWordMul ( & tmp_m , 1
, & tmp_g . chunks [ 0U ] , 2 , & tmp_i . chunks [ 0U ] , 2 ) ;
MultiWordUnsignedWrap ( & tmp_i . chunks [ 0U ] , 2 , 55U , & tmp_e . chunks
[ 0U ] ) ; tmp_m = 1152921504606847ULL ; uMultiWordMul ( & tmp_e . chunks [
0U ] , 2 , & tmp_m , 1 , & tmp_p . chunks [ 0U ] , 2 ) ; uMultiWordShr ( &
tmp_p . chunks [ 0U ] , 2 , 73U , & tmp . chunks [ 0U ] , 2 ) ; return
MultiWord2uLong ( & tmp . chunks [ 0U ] ) ; } static void ipbyhx4yqv4dvpc (
o0tlycgbd5hph * obj , uint16_T varargin_1 ) { int32_T i ; obj ->
isSetupComplete = false ; obj -> isInitialized = 1 ; obj -> pSystemImpl .
isInitialized = 1 ; for ( i = 0 ; i < 8 ; i ++ ) { obj -> pSystemImpl .
inputVarSize . f1 [ i ] = 1U ; } obj -> pSystemImpl . isSetupComplete = true
; kswswbzqb5hzcfs ( & obj -> pSystemImpl , varargin_1 ) ; obj -> pPipeline [
0 ] = 0ULL ; kswswbzqb5hzcfs ( & obj -> pSystemImpl , varargin_1 ) ; obj ->
pPipeline [ 1 ] = 0ULL ; kswswbzqb5hzcfs ( & obj -> pSystemImpl , varargin_1
) ; obj -> pPipeline [ 2 ] = 0ULL ; kswswbzqb5hzcfs ( & obj -> pSystemImpl ,
varargin_1 ) ; obj -> pPipeline [ 3 ] = 0ULL ; obj -> pValidPipeline [ 0 ] =
false ; obj -> pValidPipeline [ 1 ] = false ; obj -> pValidPipeline [ 2 ] =
false ; obj -> pValidPipeline [ 3 ] = false ; obj -> isSetupComplete = true ;
} static uint64_T kswswbzqb5 ( gsamlxo1wb * obj , uint16_T varargin_1 ) {
uint128m_T tmp ; uint128m_T tmp_e ; uint128m_T tmp_i ; uint128m_T tmp_p ;
uint64_T tmp_m ; int32_T b_k ; static const uint128m_T tmp_g = { {
18446744073709531137ULL , 19ULL } } ; boolean_T exitg1 ; if ( obj ->
isInitialized != 1 ) { obj -> isInitialized = 1 ; for ( b_k = 0 ; b_k < 8 ;
b_k ++ ) { obj -> inputVarSize . f1 [ b_k ] = 1U ; } obj -> isSetupComplete =
true ; } b_k = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( b_k < 8 ) ) {
if ( obj -> inputVarSize . f1 [ b_k ] != 1U ) { for ( b_k = 0 ; b_k < 8 ; b_k
++ ) { obj -> inputVarSize . f1 [ b_k ] = 1U ; } exitg1 = true ; } else { b_k
++ ; } } tmp_m = varargin_1 ; uMultiWordMul ( & tmp_m , 1 , & tmp_g . chunks
[ 0U ] , 2 , & tmp_i . chunks [ 0U ] , 2 ) ; MultiWordUnsignedWrap ( & tmp_i
. chunks [ 0U ] , 2 , 54U , & tmp_e . chunks [ 0U ] ) ; tmp_m =
3602879701896397ULL ; uMultiWordMul ( & tmp_e . chunks [ 0U ] , 2 , & tmp_m ,
1 , & tmp_p . chunks [ 0U ] , 2 ) ; uMultiWordShr ( & tmp_p . chunks [ 0U ] ,
2 , 74U , & tmp . chunks [ 0U ] , 2 ) ; return MultiWord2uLong ( & tmp .
chunks [ 0U ] ) ; } static void ipbyhx4yqv ( o0tlycgbd5 * obj , uint16_T
varargin_1 ) { int32_T i ; obj -> isSetupComplete = false ; obj ->
isInitialized = 1 ; obj -> pSystemImpl . isInitialized = 1 ; for ( i = 0 ; i
< 8 ; i ++ ) { obj -> pSystemImpl . inputVarSize . f1 [ i ] = 1U ; } obj ->
pSystemImpl . isSetupComplete = true ; kswswbzqb5 ( & obj -> pSystemImpl ,
varargin_1 ) ; obj -> pPipeline [ 0 ] = 0ULL ; kswswbzqb5 ( & obj ->
pSystemImpl , varargin_1 ) ; obj -> pPipeline [ 1 ] = 0ULL ; kswswbzqb5 ( &
obj -> pSystemImpl , varargin_1 ) ; obj -> pPipeline [ 2 ] = 0ULL ;
kswswbzqb5 ( & obj -> pSystemImpl , varargin_1 ) ; obj -> pPipeline [ 3 ] =
0ULL ; obj -> pValidPipeline [ 0 ] = false ; obj -> pValidPipeline [ 1 ] =
false ; obj -> pValidPipeline [ 2 ] = false ; obj -> pValidPipeline [ 3 ] =
false ; obj -> isSetupComplete = true ; } static uint64_T kswswbzqb5h (
gsamlxo1wb * obj , uint16_T varargin_1 ) { uint128m_T tmp ; uint128m_T tmp_e
; uint128m_T tmp_i ; uint128m_T tmp_p ; uint64_T tmp_m ; int32_T b_k ; static
const uint128m_T tmp_g = { { 6264931949561726765ULL , 94ULL } } ; boolean_T
exitg1 ; if ( obj -> isInitialized != 1 ) { obj -> isInitialized = 1 ; for (
b_k = 0 ; b_k < 8 ; b_k ++ ) { obj -> inputVarSize . f1 [ b_k ] = 1U ; } obj
-> isSetupComplete = true ; } b_k = 0 ; exitg1 = false ; while ( ( ! exitg1 )
&& ( b_k < 8 ) ) { if ( obj -> inputVarSize . f1 [ b_k ] != 1U ) { for ( b_k
= 0 ; b_k < 8 ; b_k ++ ) { obj -> inputVarSize . f1 [ b_k ] = 1U ; } exitg1 =
true ; } else { b_k ++ ; } } tmp_m = varargin_1 ; uMultiWordMul ( & tmp_m , 1
, & tmp_g . chunks [ 0U ] , 2 , & tmp_i . chunks [ 0U ] , 2 ) ;
MultiWordUnsignedWrap ( & tmp_i . chunks [ 0U ] , 2 , 53U , & tmp_e . chunks
[ 0U ] ) ; tmp_m = 6110483974416289ULL ; uMultiWordMul ( & tmp_e . chunks [
0U ] , 2 , & tmp_m , 1 , & tmp_p . chunks [ 0U ] , 2 ) ; uMultiWordShr ( &
tmp_p . chunks [ 0U ] , 2 , 75U , & tmp . chunks [ 0U ] , 2 ) ; return
MultiWord2uLong ( & tmp . chunks [ 0U ] ) ; } static void ipbyhx4yqv4 (
o0tlycgbd5h * obj , uint16_T varargin_1 ) { int32_T i ; obj ->
isSetupComplete = false ; obj -> isInitialized = 1 ; obj -> pSystemImpl .
isInitialized = 1 ; for ( i = 0 ; i < 8 ; i ++ ) { obj -> pSystemImpl .
inputVarSize . f1 [ i ] = 1U ; } obj -> pSystemImpl . isSetupComplete = true
; kswswbzqb5h ( & obj -> pSystemImpl , varargin_1 ) ; obj -> pPipeline [ 0 ]
= 0ULL ; kswswbzqb5h ( & obj -> pSystemImpl , varargin_1 ) ; obj -> pPipeline
[ 1 ] = 0ULL ; kswswbzqb5h ( & obj -> pSystemImpl , varargin_1 ) ; obj ->
pPipeline [ 2 ] = 0ULL ; kswswbzqb5h ( & obj -> pSystemImpl , varargin_1 ) ;
obj -> pPipeline [ 3 ] = 0ULL ; obj -> pValidPipeline [ 0 ] = false ; obj ->
pValidPipeline [ 1 ] = false ; obj -> pValidPipeline [ 2 ] = false ; obj ->
pValidPipeline [ 3 ] = false ; obj -> isSetupComplete = true ; } static void
ohqoxehyir ( lgw3dwnp03 * obj ) { static const boolean_T tmp [ 4096 ] = {
true , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false } ; static const boolean_T tmp_p [ 4096 ] = { false , true , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false } ; obj ->
pInBufferIndex = 1.0 ; memset ( & obj -> pInBuffer_re [ 0 ] , 0 , 57344U *
sizeof ( int32_T ) ) ; memset ( & obj -> pInBuffer_im [ 0 ] , 0 , 57344U *
sizeof ( int32_T ) ) ; memset ( & obj -> pInBuffer_valid [ 0 ] , 0 , 57344U *
sizeof ( real_T ) ) ; memset ( & obj -> pOutBuffer_cmplx [ 0 ] , 0 , 114688U
* sizeof ( cint32_T ) ) ; obj -> pWrOutBuffer_index = 1.0 ; obj ->
pRdOutBuffer_index = 1.0 ; obj -> pWrOutBuffer_roll = false ; obj ->
pRdOutBuffer_roll = false ; memcpy ( & obj -> pStartOutputPort [ 0 ] , & tmp
[ 0 ] , sizeof ( boolean_T ) << 12U ) ; memcpy ( & obj -> pEndOutputPort [ 0
] , & tmp_p [ 0 ] , sizeof ( boolean_T ) << 12U ) ; memset ( & obj ->
pOverflowStage [ 0 ] , 0 , 12U * sizeof ( real_T ) ) ; obj -> pOverflowFlag =
true ; obj -> pSimTime = 1.0 ; obj -> pCurSOF = 0.0 ; memset ( & obj ->
pSOFFifo [ 0 ] , 0 , sizeof ( real_T ) << 10U ) ; obj -> pWrFifoAddr = 1.0 ;
obj -> pRdFifoAddr = 1.0 ; obj -> pLastData = obj -> pInitialValue ; obj ->
pState = 0.0 ; obj -> pSampleCnt = 0.0 ; obj -> pOutCnt = 0.0 ; obj -> pWrEnb
= false ; if ( obj -> pInitialize ) { obj -> pRdyReg = true ; obj ->
pInitialize = false ; } else { obj -> pRdyReg = false ; } } static boolean_T
jreuwb1n0z ( gf3a2t0gs5 * obj , boolean_T skipNonDirectFeed ) { int32_T b_k ;
boolean_T anyInputSizeChanged ; boolean_T exitg1 ; anyInputSizeChanged =
false ; b_k = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( b_k < 8 ) ) { if
( ( ! skipNonDirectFeed ) && ( obj -> inputVarSize [ 0 ] . f1 [ b_k ] != 1U )
) { anyInputSizeChanged = true ; for ( b_k = 0 ; b_k < 8 ; b_k ++ ) { obj ->
inputVarSize [ 0 ] . f1 [ b_k ] = 1U ; } exitg1 = true ; } else { b_k ++ ; }
} b_k = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( b_k < 8 ) ) { if ( ( !
skipNonDirectFeed ) && ( obj -> inputVarSize [ 1 ] . f1 [ b_k ] != 1U ) ) {
anyInputSizeChanged = true ; for ( b_k = 0 ; b_k < 8 ; b_k ++ ) { obj ->
inputVarSize [ 1 ] . f1 [ b_k ] = 1U ; } exitg1 = true ; } else { b_k ++ ; }
} b_k = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( b_k < 8 ) ) { if ( ( !
skipNonDirectFeed ) && ( obj -> inputVarSize [ 2 ] . f1 [ b_k ] != 1U ) ) {
anyInputSizeChanged = true ; for ( b_k = 0 ; b_k < 8 ; b_k ++ ) { obj ->
inputVarSize [ 2 ] . f1 [ b_k ] = 1U ; } exitg1 = true ; } else { b_k ++ ; }
} b_k = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( b_k < 8 ) ) { if ( ( !
skipNonDirectFeed ) && ( obj -> inputVarSize [ 3 ] . f1 [ b_k ] != 1U ) ) {
anyInputSizeChanged = true ; for ( b_k = 0 ; b_k < 8 ; b_k ++ ) { obj ->
inputVarSize [ 3 ] . f1 [ b_k ] = 1U ; } exitg1 = true ; } else { b_k ++ ; }
} b_k = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( b_k < 8 ) ) { if ( ( !
skipNonDirectFeed ) && ( obj -> inputVarSize [ 4 ] . f1 [ b_k ] != 1U ) ) {
anyInputSizeChanged = true ; for ( b_k = 0 ; b_k < 8 ; b_k ++ ) { obj ->
inputVarSize [ 4 ] . f1 [ b_k ] = 1U ; } exitg1 = true ; } else { b_k ++ ; }
} b_k = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( b_k < 8 ) ) { if ( ( !
skipNonDirectFeed ) && ( obj -> inputVarSize [ 5 ] . f1 [ b_k ] != 1U ) ) {
anyInputSizeChanged = true ; for ( b_k = 0 ; b_k < 8 ; b_k ++ ) { obj ->
inputVarSize [ 5 ] . f1 [ b_k ] = 1U ; } exitg1 = true ; } else { b_k ++ ; }
} return anyInputSizeChanged ; } static void ax24t2w2l3 ( void ) { if ( rtB .
nhc0fdw3ug == 4 ) { rtDW . fotv1vmuhj = megw2qzktw ; rtB . crnx15irxr = 2U ;
rtB . i0gsq2riyu = 2U ; rtB . lcedt4qay2 = 2U ; rtB . juszgkuo2c = 2U ; rtB .
acn2nfsqnj = 3U ; rtB . oy4lh3ff4g = 3U ; rtB . fclpv43io0 = true ; rtB .
o3tyeeowqy = false ; rtB . fviw5wizdj = false ; rtB . g5l3a2xe55 = 1U ; rtB .
dqgaqsoxml = false ; rtB . ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ;
rtB . ak2vxsyixd = false ; rtB . m5q1do0vmq = false ; } else if ( ( rtB .
nhc0fdw3ug == 5 ) || ( rtB . nhc0fdw3ug == 6 ) ) { rtDW . fotv1vmuhj =
n53a5mkeym ; rtB . crnx15irxr = 2U ; rtB . i0gsq2riyu = 2U ; rtB . lcedt4qay2
= 2U ; rtB . juszgkuo2c = 2U ; rtB . acn2nfsqnj = 2U ; rtB . oy4lh3ff4g = 3U
; rtB . fclpv43io0 = true ; rtB . o3tyeeowqy = false ; rtB . fviw5wizdj =
false ; rtB . g5l3a2xe55 = 1U ; rtB . dqgaqsoxml = false ; rtB . ooqxabrlh0 =
false ; rtB . ppe24ahxyy = false ; rtB . ak2vxsyixd = false ; rtB .
m5q1do0vmq = false ; } else if ( rtB . nhc0fdw3ug == 3 ) { rtDW . fotv1vmuhj
= ocxblzochp ; rtB . crnx15irxr = 2U ; rtB . i0gsq2riyu = 2U ; rtB .
lcedt4qay2 = 2U ; rtB . juszgkuo2c = 3U ; rtB . acn2nfsqnj = 3U ; rtB .
oy4lh3ff4g = 3U ; rtB . fclpv43io0 = true ; rtB . o3tyeeowqy = false ; rtB .
fviw5wizdj = false ; rtB . g5l3a2xe55 = 1U ; rtB . dqgaqsoxml = false ; rtB .
ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ; rtB . ak2vxsyixd = false ;
rtB . m5q1do0vmq = false ; } else if ( rtB . nhc0fdw3ug == 2 ) { rtDW .
fotv1vmuhj = dhnrz3p3lc ; rtB . crnx15irxr = 2U ; rtB . i0gsq2riyu = 2U ; rtB
. lcedt4qay2 = 3U ; rtB . juszgkuo2c = 3U ; rtB . acn2nfsqnj = 3U ; rtB .
oy4lh3ff4g = 3U ; rtB . fclpv43io0 = true ; rtB . o3tyeeowqy = false ; rtB .
fviw5wizdj = false ; rtB . g5l3a2xe55 = 1U ; rtB . dqgaqsoxml = false ; rtB .
ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ; rtB . ak2vxsyixd = false ;
rtB . m5q1do0vmq = false ; } else if ( rtB . nhc0fdw3ug == 1 ) { rtDW .
fotv1vmuhj = pzu23l5q4i ; rtB . crnx15irxr = 2U ; rtB . i0gsq2riyu = 3U ; rtB
. lcedt4qay2 = 3U ; rtB . juszgkuo2c = 3U ; rtB . acn2nfsqnj = 3U ; rtB .
oy4lh3ff4g = 3U ; rtB . fclpv43io0 = true ; rtB . o3tyeeowqy = false ; rtB .
fviw5wizdj = false ; rtB . g5l3a2xe55 = 1U ; rtB . dqgaqsoxml = false ; rtB .
ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ; rtB . ak2vxsyixd = false ;
rtB . m5q1do0vmq = false ; } } static void il1pqidmdp ( void ) { rtB .
eezqixq4vm = false ; rtB . crnx15irxr = 1U ; rtB . i0gsq2riyu = 1U ; rtB .
lcedt4qay2 = 1U ; rtB . juszgkuo2c = 1U ; rtB . acn2nfsqnj = 1U ; rtB .
oy4lh3ff4g = 1U ; rtB . fclpv43io0 = false ; rtB . o3tyeeowqy = true ; rtB .
fviw5wizdj = true ; rtB . g5l3a2xe55 = 0U ; rtB . dqgaqsoxml = false ; rtB .
ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ; rtB . ak2vxsyixd = false ;
rtB . m5q1do0vmq = false ; rtB . pegi3bwz0d = true ; } static void fd0knrz00s
( void ) { boolean_T guard1 ; if ( rtB . j5hwgk53ch == 5 ) { rtDW .
fotv1vmuhj = bplz1bgu04 ; rtB . fclpv43io0 = false ; rtB . o3tyeeowqy = false
; rtB . fviw5wizdj = false ; rtB . g5l3a2xe55 = 0U ; rtB . dqgaqsoxml = false
; rtB . ooqxabrlh0 = true ; rtB . ppe24ahxyy = false ; rtB . ak2vxsyixd =
false ; rtB . m5q1do0vmq = true ; } else if ( ( rtB . j5hwgk53ch == 1 ) || (
rtB . o0wzwh53fx == 1 ) ) { rtDW . fotv1vmuhj = ebf5cvds2x ; rtB . crnx15irxr
= 3U ; rtB . i0gsq2riyu = 3U ; rtB . lcedt4qay2 = 3U ; rtB . juszgkuo2c = 3U
; rtB . acn2nfsqnj = 3U ; rtB . oy4lh3ff4g = 3U ; rtB . fclpv43io0 = true ;
rtB . o3tyeeowqy = false ; rtB . fviw5wizdj = false ; rtB . g5l3a2xe55 = 1U ;
rtB . dqgaqsoxml = false ; rtB . ooqxabrlh0 = false ; rtB . ppe24ahxyy =
false ; rtB . ak2vxsyixd = false ; rtB . m5q1do0vmq = false ; } else { guard1
= false ; if ( rtB . o0wzwh53fx == 2 ) { if ( rtB . nhc0fdw3ug == 5 ) { rtDW
. fotv1vmuhj = li4kekrnna ; rtB . crnx15irxr = 3U ; rtB . i0gsq2riyu = 3U ;
rtB . lcedt4qay2 = 3U ; rtB . juszgkuo2c = 3U ; rtB . acn2nfsqnj = 1U ; rtB .
oy4lh3ff4g = 3U ; rtB . fclpv43io0 = true ; rtB . o3tyeeowqy = false ; rtB .
fviw5wizdj = false ; rtB . g5l3a2xe55 = 1U ; rtB . dqgaqsoxml = false ; rtB .
ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ; rtB . ak2vxsyixd = false ;
rtB . m5q1do0vmq = false ; } else if ( rtB . nhc0fdw3ug == 6 ) { rtDW .
fotv1vmuhj = e4ml1xds1b ; rtB . crnx15irxr = 3U ; rtB . i0gsq2riyu = 3U ; rtB
. lcedt4qay2 = 3U ; rtB . juszgkuo2c = 3U ; rtB . acn2nfsqnj = 3U ; rtB .
oy4lh3ff4g = 1U ; rtB . fclpv43io0 = true ; rtB . o3tyeeowqy = false ; rtB .
fviw5wizdj = false ; rtB . g5l3a2xe55 = 1U ; rtB . dqgaqsoxml = false ; rtB .
ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ; rtB . ak2vxsyixd = false ;
rtB . m5q1do0vmq = false ; } else if ( rtB . nhc0fdw3ug == 4 ) { rtDW .
fotv1vmuhj = b1hlgybhxi ; rtB . crnx15irxr = 3U ; rtB . i0gsq2riyu = 3U ; rtB
. lcedt4qay2 = 3U ; rtB . juszgkuo2c = 1U ; rtB . acn2nfsqnj = 3U ; rtB .
oy4lh3ff4g = 3U ; rtB . fclpv43io0 = true ; rtB . o3tyeeowqy = false ; rtB .
fviw5wizdj = false ; rtB . g5l3a2xe55 = 1U ; rtB . dqgaqsoxml = false ; rtB .
ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ; rtB . ak2vxsyixd = false ;
rtB . m5q1do0vmq = false ; } else if ( rtB . nhc0fdw3ug == 3 ) { rtDW .
fotv1vmuhj = imeuoffcif ; rtB . crnx15irxr = 3U ; rtB . i0gsq2riyu = 3U ; rtB
. lcedt4qay2 = 1U ; rtB . juszgkuo2c = 3U ; rtB . acn2nfsqnj = 3U ; rtB .
oy4lh3ff4g = 3U ; rtB . fclpv43io0 = true ; rtB . o3tyeeowqy = false ; rtB .
fviw5wizdj = false ; rtB . g5l3a2xe55 = 1U ; rtB . dqgaqsoxml = false ; rtB .
ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ; rtB . ak2vxsyixd = false ;
rtB . m5q1do0vmq = false ; } else if ( rtB . nhc0fdw3ug == 2 ) { rtDW .
fotv1vmuhj = b3pefdwl4s ; rtB . crnx15irxr = 3U ; rtB . i0gsq2riyu = 1U ; rtB
. lcedt4qay2 = 3U ; rtB . juszgkuo2c = 3U ; rtB . acn2nfsqnj = 3U ; rtB .
oy4lh3ff4g = 3U ; rtB . fclpv43io0 = true ; rtB . o3tyeeowqy = false ; rtB .
fviw5wizdj = false ; rtB . g5l3a2xe55 = 1U ; rtB . dqgaqsoxml = false ; rtB .
ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ; rtB . ak2vxsyixd = false ;
rtB . m5q1do0vmq = false ; } else if ( rtB . nhc0fdw3ug == 1 ) { rtDW .
fotv1vmuhj = g5cwkvlwdn ; rtB . crnx15irxr = 1U ; rtB . i0gsq2riyu = 3U ; rtB
. lcedt4qay2 = 3U ; rtB . juszgkuo2c = 3U ; rtB . acn2nfsqnj = 3U ; rtB .
oy4lh3ff4g = 3U ; rtB . fclpv43io0 = true ; rtB . o3tyeeowqy = false ; rtB .
fviw5wizdj = false ; rtB . g5l3a2xe55 = 1U ; rtB . dqgaqsoxml = false ; rtB .
ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ; rtB . ak2vxsyixd = false ;
rtB . m5q1do0vmq = false ; } else { guard1 = true ; } } else { guard1 = true
; } if ( guard1 ) { if ( rtB . o0wzwh53fx == 4 ) { rtDW . fotv1vmuhj =
eisvyocwb5 ; rtB . crnx15irxr = 1U ; rtB . i0gsq2riyu = 1U ; rtB . lcedt4qay2
= 1U ; rtB . juszgkuo2c = 1U ; rtB . acn2nfsqnj = 1U ; rtB . oy4lh3ff4g = 1U
; rtB . fclpv43io0 = true ; rtB . o3tyeeowqy = false ; rtB . fviw5wizdj =
false ; rtB . g5l3a2xe55 = 1U ; rtB . dqgaqsoxml = false ; rtB . ooqxabrlh0 =
false ; rtB . ppe24ahxyy = false ; rtB . ak2vxsyixd = false ; rtB .
m5q1do0vmq = false ; } } } } static void bteluj4h5m ( void ) { if ( rtB .
j5hwgk53ch == 5 ) { rtDW . fotv1vmuhj = lwrsi20zvv ; rtB . m5q1do0vmq = true
; rtB . ak2vxsyixd = true ; rtB . fclpv43io0 = false ; rtB . ooqxabrlh0 =
false ; } else { rtB . eezqixq4vm = false ; rtB . crnx15irxr = 1U ; rtB .
i0gsq2riyu = 1U ; rtB . lcedt4qay2 = 1U ; rtB . juszgkuo2c = 1U ; rtB .
acn2nfsqnj = 1U ; rtB . oy4lh3ff4g = 1U ; rtB . fclpv43io0 = true ; rtB .
o3tyeeowqy = false ; rtB . fviw5wizdj = false ; rtB . g5l3a2xe55 = 0U ; rtB .
dqgaqsoxml = false ; rtB . ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ;
rtB . ak2vxsyixd = true ; rtB . m5q1do0vmq = false ; } } static void
isxq4yt2zr ( void ) { if ( rtB . lsw4l4smyf ) { rtDW . fotv1vmuhj =
eduo52fh1r ; rtB . kfreac4rr1 = true ; } else { rtB . eezqixq4vm = false ;
rtB . crnx15irxr = 1U ; rtB . i0gsq2riyu = 1U ; rtB . lcedt4qay2 = 1U ; rtB .
juszgkuo2c = 1U ; rtB . acn2nfsqnj = 1U ; rtB . oy4lh3ff4g = 1U ; rtB .
fclpv43io0 = false ; rtB . o3tyeeowqy = false ; rtB . fviw5wizdj = false ;
rtB . g5l3a2xe55 = 0U ; rtB . dqgaqsoxml = false ; rtB . ooqxabrlh0 = false ;
rtB . ppe24ahxyy = true ; rtB . ak2vxsyixd = false ; rtB . m5q1do0vmq = true
; rtB . kfreac4rr1 = false ; rtB . pegi3bwz0d = false ; } } static void
dcfzm10bmk ( void ) { if ( ( rtB . j5hwgk53ch == 4 ) && rtB . cde1nzc1wz ) {
rtDW . fotv1vmuhj = dep4ye2mta ; rtB . fclpv43io0 = false ; rtB . o3tyeeowqy
= false ; rtB . fviw5wizdj = false ; rtB . g5l3a2xe55 = 0U ; rtB . dqgaqsoxml
= true ; rtB . ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ; rtB .
ak2vxsyixd = false ; rtB . m5q1do0vmq = true ; rtB . pegi3bwz0d = false ; }
else if ( rtB . cde1nzc1wz ) { rtDW . fotv1vmuhj = bhhada5sju ; rtB .
ak2vxsyixd = true ; rtB . fclpv43io0 = false ; rtB . fviw5wizdj = false ; rtB
. pegi3bwz0d = false ; } } static void illrhjptmh ( gf3a2t0gs5 * obj ) {
int32_T i ; obj -> isInitialized = 1 ; for ( i = 0 ; i < 8 ; i ++ ) { obj ->
inputVarSize [ 0 ] . f1 [ i ] = 1U ; obj -> inputVarSize [ 1 ] . f1 [ i ] =
1U ; obj -> inputVarSize [ 2 ] . f1 [ i ] = 1U ; obj -> inputVarSize [ 3 ] .
f1 [ i ] = 1U ; obj -> inputVarSize [ 4 ] . f1 [ i ] = 1U ; obj ->
inputVarSize [ 5 ] . f1 [ i ] = 1U ; } obj -> pOutWriteData [ 0 ] = 0U ; obj
-> pOutWriteData [ 1 ] = 0U ; memset ( & obj -> pRAM [ 0 ] , 0 , sizeof (
uint32_T ) << 16U ) ; } static boolean_T oczff0h2ub ( const lgw3dwnp03 * obj
, boolean_T resetIn ) { real_T firstIndex ; int32_T eint ; int32_T i ;
int32_T trueCount ; int8_T resetIndex_data [ 4096 ] ; boolean_T resetOut ;
memset ( & resetIndex_data [ 0 ] , 0 , sizeof ( int8_T ) << 12U ) ; if (
resetIn ) { resetIndex_data [ 0 ] = 1 ; } resetOut = resetIn ; trueCount = 0
; for ( i = 0 ; i < 4096 ; i ++ ) { if ( resetIndex_data [ i ] > 0 ) {
trueCount ++ ; } } if ( trueCount != 0 ) { frexp ( 4096.0 , & eint ) ; eint =
0 ; for ( i = 0 ; i < 4096 ; i ++ ) { if ( resetIndex_data [ i ] > 0 ) { rtB
. tmp_data_mbvzarwird [ eint ] = ( int16_T ) i ; eint ++ ; } } if (
resetIndex_data [ rtB . tmp_data_mbvzarwird [ 0 ] ] > 26839.0 - obj ->
pInBufferIndex ) { firstIndex = ( 4096.0 - obj -> pInBufferIndex ) + 2.0 ; }
else { firstIndex = 1.0 ; } trueCount = 0 ; for ( i = 0 ; i < 4096 ; i ++ ) {
if ( resetIndex_data [ i ] > 0 ) { trueCount ++ ; } } eint = 0 ; for ( i = 0
; i < 4096 ; i ++ ) { if ( resetIndex_data [ i ] > 0 ) { rtB .
tmp_data_cl54gopm0x [ eint ] = ( int16_T ) i ; eint ++ ; } } i = ( int32_T )
( ( real_T ) resetIndex_data [ rtB . tmp_data_cl54gopm0x [ trueCount - 1 ] ]
+ ( 1.0 - firstIndex ) ) - 1 ; for ( eint = 0 ; eint <= i ; eint ++ ) {
resetOut = true ; } } return resetOut ; } static void d4eqi0n2ks ( lgw3dwnp03
* obj , int64_T X_p , int64_T Y , int64_T U , int64_T V , real_T stage ) { if
( ( X_p < - 9007199254740992LL ) || ( X_p > 9007199187632128LL ) || ( Y < -
9007199254740992LL ) || ( Y > 9007199187632128LL ) || ( U < -
9007199254740992LL ) || ( U > 9007199187632128LL ) || ( V < -
9007199254740992LL ) || ( V > 9007199187632128LL ) ) { obj -> pOverflowStage
[ ( int32_T ) stage - 1 ] = 1.0 ; } } static void prlcfzcxhj ( creal_T x [
4096 ] ) { real_T r ; real_T x_e ; real_T x_p ; int32_T b_k ; for ( b_k = 0 ;
b_k < 4096 ; b_k ++ ) { x_p = x [ b_k ] . re ; if ( x_p == 0.0 ) { x_e = x [
b_k ] . im ; x_p = muDoubleScalarCos ( x_e ) ; x_e = muDoubleScalarSin ( x_e
) ; } else { x_e = x [ b_k ] . im ; if ( x_e == 0.0 ) { x_p =
muDoubleScalarExp ( x_p ) ; x_e = 0.0 ; } else if ( muDoubleScalarIsInf ( x_e
) && muDoubleScalarIsInf ( x_p ) && ( x_p < 0.0 ) ) { x_p = 0.0 ; x_e = 0.0 ;
} else { r = muDoubleScalarExp ( x_p / 2.0 ) ; x_p = r * muDoubleScalarCos (
x_e ) * r ; x_e = r * muDoubleScalarSin ( x_e ) * r ; } } x [ b_k ] . re =
x_p ; x [ b_k ] . im = x_e ; } } static void f3k3sm4kfg ( const cint32_T
twdlTable [ 4096 ] , cint32_T octantTwdlTable [ 4096 ] ) { int32_T i ;
int32_T tmp ; memcpy ( & octantTwdlTable [ 0 ] , & twdlTable [ 0 ] , sizeof (
cint32_T ) << 12U ) ; memcpy ( & octantTwdlTable [ 0 ] , & twdlTable [ 0 ] ,
513U * sizeof ( cint32_T ) ) ; for ( i = 0 ; i < 512 ; i ++ ) { tmp = (
int32_T ) ( ( twdlTable [ 511 - i ] . im * - 134217728LL ) >> 27 ) ; if ( ( (
uint32_T ) tmp & 134217728U ) != 0U ) { octantTwdlTable [ i + 513 ] . re =
tmp | - 134217728 ; } else { octantTwdlTable [ i + 513 ] . re = tmp &
134217727 ; } tmp = ( int32_T ) ( ( twdlTable [ 511 - i ] . re * -
134217728LL ) >> 27 ) ; if ( ( ( uint32_T ) tmp & 134217728U ) != 0U ) {
octantTwdlTable [ i + 513 ] . im = tmp | - 134217728 ; } else {
octantTwdlTable [ i + 513 ] . im = tmp & 134217727 ; } octantTwdlTable [ i +
1025 ] . re = twdlTable [ i + 1 ] . im ; tmp = ( int32_T ) ( ( twdlTable [ i
+ 1 ] . re * - 134217728LL ) >> 27 ) ; if ( ( ( uint32_T ) tmp & 134217728U )
!= 0U ) { octantTwdlTable [ i + 1025 ] . im = tmp | - 134217728 ; } else {
octantTwdlTable [ i + 1025 ] . im = tmp & 134217727 ; } tmp = ( int32_T ) ( (
twdlTable [ 511 - i ] . re * - 134217728LL ) >> 27 ) ; if ( ( ( uint32_T )
tmp & 134217728U ) != 0U ) { octantTwdlTable [ i + 1537 ] . re = tmp | -
134217728 ; } else { octantTwdlTable [ i + 1537 ] . re = tmp & 134217727 ; }
octantTwdlTable [ i + 1537 ] . im = twdlTable [ 511 - i ] . im ; tmp = (
int32_T ) ( ( twdlTable [ i + 1 ] . re * - 134217728LL ) >> 27 ) ; if ( ( (
uint32_T ) tmp & 134217728U ) != 0U ) { octantTwdlTable [ i + 2049 ] . re =
tmp | - 134217728 ; } else { octantTwdlTable [ i + 2049 ] . re = tmp &
134217727 ; } tmp = ( int32_T ) ( ( twdlTable [ i + 1 ] . im * - 134217728LL
) >> 27 ) ; if ( ( ( uint32_T ) tmp & 134217728U ) != 0U ) { octantTwdlTable
[ i + 2049 ] . im = tmp | - 134217728 ; } else { octantTwdlTable [ i + 2049 ]
. im = tmp & 134217727 ; } octantTwdlTable [ i + 2561 ] . re = twdlTable [
511 - i ] . im ; octantTwdlTable [ i + 2561 ] . im = twdlTable [ 511 - i ] .
re ; tmp = ( int32_T ) ( ( twdlTable [ i + 1 ] . im * - 134217728LL ) >> 27 )
; if ( ( ( uint32_T ) tmp & 134217728U ) != 0U ) { octantTwdlTable [ i + 3073
] . re = tmp | - 134217728 ; } else { octantTwdlTable [ i + 3073 ] . re = tmp
& 134217727 ; } octantTwdlTable [ i + 3073 ] . im = twdlTable [ i + 1 ] . re
; } for ( i = 0 ; i < 511 ; i ++ ) { octantTwdlTable [ i + 3585 ] . re =
twdlTable [ 511 - i ] . re ; tmp = ( int32_T ) ( ( twdlTable [ 511 - i ] . im
* - 134217728LL ) >> 27 ) ; if ( ( ( uint32_T ) tmp & 134217728U ) != 0U ) {
octantTwdlTable [ i + 3585 ] . im = tmp | - 134217728 ; } else {
octantTwdlTable [ i + 3585 ] . im = tmp & 134217727 ; } } } static void
djfqiflzn0 ( real_T sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ] ) {
int32_T i ; static const int16_T BaseSampleIndex [ 1024 ] = { 0 , 2 , 4 , 6 ,
8 , 10 , 12 , 14 , 16 , 18 , 20 , 22 , 24 , 26 , 28 , 30 , 32 , 34 , 36 , 38
, 40 , 42 , 44 , 46 , 48 , 50 , 52 , 54 , 56 , 58 , 60 , 62 , 64 , 66 , 68 ,
70 , 72 , 74 , 76 , 78 , 80 , 82 , 84 , 86 , 88 , 90 , 92 , 94 , 96 , 98 ,
100 , 102 , 104 , 106 , 108 , 110 , 112 , 114 , 116 , 118 , 120 , 122 , 124 ,
126 , 128 , 130 , 132 , 134 , 136 , 138 , 140 , 142 , 144 , 146 , 148 , 150 ,
152 , 154 , 156 , 158 , 160 , 162 , 164 , 166 , 168 , 170 , 172 , 174 , 176 ,
178 , 180 , 182 , 184 , 186 , 188 , 190 , 192 , 194 , 196 , 198 , 200 , 202 ,
204 , 206 , 208 , 210 , 212 , 214 , 216 , 218 , 220 , 222 , 224 , 226 , 228 ,
230 , 232 , 234 , 236 , 238 , 240 , 242 , 244 , 246 , 248 , 250 , 252 , 254 ,
256 , 258 , 260 , 262 , 264 , 266 , 268 , 270 , 272 , 274 , 276 , 278 , 280 ,
282 , 284 , 286 , 288 , 290 , 292 , 294 , 296 , 298 , 300 , 302 , 304 , 306 ,
308 , 310 , 312 , 314 , 316 , 318 , 320 , 322 , 324 , 326 , 328 , 330 , 332 ,
334 , 336 , 338 , 340 , 342 , 344 , 346 , 348 , 350 , 352 , 354 , 356 , 358 ,
360 , 362 , 364 , 366 , 368 , 370 , 372 , 374 , 376 , 378 , 380 , 382 , 384 ,
386 , 388 , 390 , 392 , 394 , 396 , 398 , 400 , 402 , 404 , 406 , 408 , 410 ,
412 , 414 , 416 , 418 , 420 , 422 , 424 , 426 , 428 , 430 , 432 , 434 , 436 ,
438 , 440 , 442 , 444 , 446 , 448 , 450 , 452 , 454 , 456 , 458 , 460 , 462 ,
464 , 466 , 468 , 470 , 472 , 474 , 476 , 478 , 480 , 482 , 484 , 486 , 488 ,
490 , 492 , 494 , 496 , 498 , 500 , 502 , 504 , 506 , 508 , 510 , 512 , 514 ,
516 , 518 , 520 , 522 , 524 , 526 , 528 , 530 , 532 , 534 , 536 , 538 , 540 ,
542 , 544 , 546 , 548 , 550 , 552 , 554 , 556 , 558 , 560 , 562 , 564 , 566 ,
568 , 570 , 572 , 574 , 576 , 578 , 580 , 582 , 584 , 586 , 588 , 590 , 592 ,
594 , 596 , 598 , 600 , 602 , 604 , 606 , 608 , 610 , 612 , 614 , 616 , 618 ,
620 , 622 , 624 , 626 , 628 , 630 , 632 , 634 , 636 , 638 , 640 , 642 , 644 ,
646 , 648 , 650 , 652 , 654 , 656 , 658 , 660 , 662 , 664 , 666 , 668 , 670 ,
672 , 674 , 676 , 678 , 680 , 682 , 684 , 686 , 688 , 690 , 692 , 694 , 696 ,
698 , 700 , 702 , 704 , 706 , 708 , 710 , 712 , 714 , 716 , 718 , 720 , 722 ,
724 , 726 , 728 , 730 , 732 , 734 , 736 , 738 , 740 , 742 , 744 , 746 , 748 ,
750 , 752 , 754 , 756 , 758 , 760 , 762 , 764 , 766 , 768 , 770 , 772 , 774 ,
776 , 778 , 780 , 782 , 784 , 786 , 788 , 790 , 792 , 794 , 796 , 798 , 800 ,
802 , 804 , 806 , 808 , 810 , 812 , 814 , 816 , 818 , 820 , 822 , 824 , 826 ,
828 , 830 , 832 , 834 , 836 , 838 , 840 , 842 , 844 , 846 , 848 , 850 , 852 ,
854 , 856 , 858 , 860 , 862 , 864 , 866 , 868 , 870 , 872 , 874 , 876 , 878 ,
880 , 882 , 884 , 886 , 888 , 890 , 892 , 894 , 896 , 898 , 900 , 902 , 904 ,
906 , 908 , 910 , 912 , 914 , 916 , 918 , 920 , 922 , 924 , 926 , 928 , 930 ,
932 , 934 , 936 , 938 , 940 , 942 , 944 , 946 , 948 , 950 , 952 , 954 , 956 ,
958 , 960 , 962 , 964 , 966 , 968 , 970 , 972 , 974 , 976 , 978 , 980 , 982 ,
984 , 986 , 988 , 990 , 992 , 994 , 996 , 998 , 1000 , 1002 , 1004 , 1006 ,
1008 , 1010 , 1012 , 1014 , 1016 , 1018 , 1020 , 1022 , 1 , 3 , 5 , 7 , 9 ,
11 , 13 , 15 , 17 , 19 , 21 , 23 , 25 , 27 , 29 , 31 , 33 , 35 , 37 , 39 , 41
, 43 , 45 , 47 , 49 , 51 , 53 , 55 , 57 , 59 , 61 , 63 , 65 , 67 , 69 , 71 ,
73 , 75 , 77 , 79 , 81 , 83 , 85 , 87 , 89 , 91 , 93 , 95 , 97 , 99 , 101 ,
103 , 105 , 107 , 109 , 111 , 113 , 115 , 117 , 119 , 121 , 123 , 125 , 127 ,
129 , 131 , 133 , 135 , 137 , 139 , 141 , 143 , 145 , 147 , 149 , 151 , 153 ,
155 , 157 , 159 , 161 , 163 , 165 , 167 , 169 , 171 , 173 , 175 , 177 , 179 ,
181 , 183 , 185 , 187 , 189 , 191 , 193 , 195 , 197 , 199 , 201 , 203 , 205 ,
207 , 209 , 211 , 213 , 215 , 217 , 219 , 221 , 223 , 225 , 227 , 229 , 231 ,
233 , 235 , 237 , 239 , 241 , 243 , 245 , 247 , 249 , 251 , 253 , 255 , 257 ,
259 , 261 , 263 , 265 , 267 , 269 , 271 , 273 , 275 , 277 , 279 , 281 , 283 ,
285 , 287 , 289 , 291 , 293 , 295 , 297 , 299 , 301 , 303 , 305 , 307 , 309 ,
311 , 313 , 315 , 317 , 319 , 321 , 323 , 325 , 327 , 329 , 331 , 333 , 335 ,
337 , 339 , 341 , 343 , 345 , 347 , 349 , 351 , 353 , 355 , 357 , 359 , 361 ,
363 , 365 , 367 , 369 , 371 , 373 , 375 , 377 , 379 , 381 , 383 , 385 , 387 ,
389 , 391 , 393 , 395 , 397 , 399 , 401 , 403 , 405 , 407 , 409 , 411 , 413 ,
415 , 417 , 419 , 421 , 423 , 425 , 427 , 429 , 431 , 433 , 435 , 437 , 439 ,
441 , 443 , 445 , 447 , 449 , 451 , 453 , 455 , 457 , 459 , 461 , 463 , 465 ,
467 , 469 , 471 , 473 , 475 , 477 , 479 , 481 , 483 , 485 , 487 , 489 , 491 ,
493 , 495 , 497 , 499 , 501 , 503 , 505 , 507 , 509 , 511 , 513 , 515 , 517 ,
519 , 521 , 523 , 525 , 527 , 529 , 531 , 533 , 535 , 537 , 539 , 541 , 543 ,
545 , 547 , 549 , 551 , 553 , 555 , 557 , 559 , 561 , 563 , 565 , 567 , 569 ,
571 , 573 , 575 , 577 , 579 , 581 , 583 , 585 , 587 , 589 , 591 , 593 , 595 ,
597 , 599 , 601 , 603 , 605 , 607 , 609 , 611 , 613 , 615 , 617 , 619 , 621 ,
623 , 625 , 627 , 629 , 631 , 633 , 635 , 637 , 639 , 641 , 643 , 645 , 647 ,
649 , 651 , 653 , 655 , 657 , 659 , 661 , 663 , 665 , 667 , 669 , 671 , 673 ,
675 , 677 , 679 , 681 , 683 , 685 , 687 , 689 , 691 , 693 , 695 , 697 , 699 ,
701 , 703 , 705 , 707 , 709 , 711 , 713 , 715 , 717 , 719 , 721 , 723 , 725 ,
727 , 729 , 731 , 733 , 735 , 737 , 739 , 741 , 743 , 745 , 747 , 749 , 751 ,
753 , 755 , 757 , 759 , 761 , 763 , 765 , 767 , 769 , 771 , 773 , 775 , 777 ,
779 , 781 , 783 , 785 , 787 , 789 , 791 , 793 , 795 , 797 , 799 , 801 , 803 ,
805 , 807 , 809 , 811 , 813 , 815 , 817 , 819 , 821 , 823 , 825 , 827 , 829 ,
831 , 833 , 835 , 837 , 839 , 841 , 843 , 845 , 847 , 849 , 851 , 853 , 855 ,
857 , 859 , 861 , 863 , 865 , 867 , 869 , 871 , 873 , 875 , 877 , 879 , 881 ,
883 , 885 , 887 , 889 , 891 , 893 , 895 , 897 , 899 , 901 , 903 , 905 , 907 ,
909 , 911 , 913 , 915 , 917 , 919 , 921 , 923 , 925 , 927 , 929 , 931 , 933 ,
935 , 937 , 939 , 941 , 943 , 945 , 947 , 949 , 951 , 953 , 955 , 957 , 959 ,
961 , 963 , 965 , 967 , 969 , 971 , 973 , 975 , 977 , 979 , 981 , 983 , 985 ,
987 , 989 , 991 , 993 , 995 , 997 , 999 , 1001 , 1003 , 1005 , 1007 , 1009 ,
1011 , 1013 , 1015 , 1017 , 1019 , 1021 , 1023 } ; static const int16_T tmp [
1024 ] = { 2048 , 2050 , 2052 , 2054 , 2056 , 2058 , 2060 , 2062 , 2064 ,
2066 , 2068 , 2070 , 2072 , 2074 , 2076 , 2078 , 2080 , 2082 , 2084 , 2086 ,
2088 , 2090 , 2092 , 2094 , 2096 , 2098 , 2100 , 2102 , 2104 , 2106 , 2108 ,
2110 , 2112 , 2114 , 2116 , 2118 , 2120 , 2122 , 2124 , 2126 , 2128 , 2130 ,
2132 , 2134 , 2136 , 2138 , 2140 , 2142 , 2144 , 2146 , 2148 , 2150 , 2152 ,
2154 , 2156 , 2158 , 2160 , 2162 , 2164 , 2166 , 2168 , 2170 , 2172 , 2174 ,
2176 , 2178 , 2180 , 2182 , 2184 , 2186 , 2188 , 2190 , 2192 , 2194 , 2196 ,
2198 , 2200 , 2202 , 2204 , 2206 , 2208 , 2210 , 2212 , 2214 , 2216 , 2218 ,
2220 , 2222 , 2224 , 2226 , 2228 , 2230 , 2232 , 2234 , 2236 , 2238 , 2240 ,
2242 , 2244 , 2246 , 2248 , 2250 , 2252 , 2254 , 2256 , 2258 , 2260 , 2262 ,
2264 , 2266 , 2268 , 2270 , 2272 , 2274 , 2276 , 2278 , 2280 , 2282 , 2284 ,
2286 , 2288 , 2290 , 2292 , 2294 , 2296 , 2298 , 2300 , 2302 , 2304 , 2306 ,
2308 , 2310 , 2312 , 2314 , 2316 , 2318 , 2320 , 2322 , 2324 , 2326 , 2328 ,
2330 , 2332 , 2334 , 2336 , 2338 , 2340 , 2342 , 2344 , 2346 , 2348 , 2350 ,
2352 , 2354 , 2356 , 2358 , 2360 , 2362 , 2364 , 2366 , 2368 , 2370 , 2372 ,
2374 , 2376 , 2378 , 2380 , 2382 , 2384 , 2386 , 2388 , 2390 , 2392 , 2394 ,
2396 , 2398 , 2400 , 2402 , 2404 , 2406 , 2408 , 2410 , 2412 , 2414 , 2416 ,
2418 , 2420 , 2422 , 2424 , 2426 , 2428 , 2430 , 2432 , 2434 , 2436 , 2438 ,
2440 , 2442 , 2444 , 2446 , 2448 , 2450 , 2452 , 2454 , 2456 , 2458 , 2460 ,
2462 , 2464 , 2466 , 2468 , 2470 , 2472 , 2474 , 2476 , 2478 , 2480 , 2482 ,
2484 , 2486 , 2488 , 2490 , 2492 , 2494 , 2496 , 2498 , 2500 , 2502 , 2504 ,
2506 , 2508 , 2510 , 2512 , 2514 , 2516 , 2518 , 2520 , 2522 , 2524 , 2526 ,
2528 , 2530 , 2532 , 2534 , 2536 , 2538 , 2540 , 2542 , 2544 , 2546 , 2548 ,
2550 , 2552 , 2554 , 2556 , 2558 , 2560 , 2562 , 2564 , 2566 , 2568 , 2570 ,
2572 , 2574 , 2576 , 2578 , 2580 , 2582 , 2584 , 2586 , 2588 , 2590 , 2592 ,
2594 , 2596 , 2598 , 2600 , 2602 , 2604 , 2606 , 2608 , 2610 , 2612 , 2614 ,
2616 , 2618 , 2620 , 2622 , 2624 , 2626 , 2628 , 2630 , 2632 , 2634 , 2636 ,
2638 , 2640 , 2642 , 2644 , 2646 , 2648 , 2650 , 2652 , 2654 , 2656 , 2658 ,
2660 , 2662 , 2664 , 2666 , 2668 , 2670 , 2672 , 2674 , 2676 , 2678 , 2680 ,
2682 , 2684 , 2686 , 2688 , 2690 , 2692 , 2694 , 2696 , 2698 , 2700 , 2702 ,
2704 , 2706 , 2708 , 2710 , 2712 , 2714 , 2716 , 2718 , 2720 , 2722 , 2724 ,
2726 , 2728 , 2730 , 2732 , 2734 , 2736 , 2738 , 2740 , 2742 , 2744 , 2746 ,
2748 , 2750 , 2752 , 2754 , 2756 , 2758 , 2760 , 2762 , 2764 , 2766 , 2768 ,
2770 , 2772 , 2774 , 2776 , 2778 , 2780 , 2782 , 2784 , 2786 , 2788 , 2790 ,
2792 , 2794 , 2796 , 2798 , 2800 , 2802 , 2804 , 2806 , 2808 , 2810 , 2812 ,
2814 , 2816 , 2818 , 2820 , 2822 , 2824 , 2826 , 2828 , 2830 , 2832 , 2834 ,
2836 , 2838 , 2840 , 2842 , 2844 , 2846 , 2848 , 2850 , 2852 , 2854 , 2856 ,
2858 , 2860 , 2862 , 2864 , 2866 , 2868 , 2870 , 2872 , 2874 , 2876 , 2878 ,
2880 , 2882 , 2884 , 2886 , 2888 , 2890 , 2892 , 2894 , 2896 , 2898 , 2900 ,
2902 , 2904 , 2906 , 2908 , 2910 , 2912 , 2914 , 2916 , 2918 , 2920 , 2922 ,
2924 , 2926 , 2928 , 2930 , 2932 , 2934 , 2936 , 2938 , 2940 , 2942 , 2944 ,
2946 , 2948 , 2950 , 2952 , 2954 , 2956 , 2958 , 2960 , 2962 , 2964 , 2966 ,
2968 , 2970 , 2972 , 2974 , 2976 , 2978 , 2980 , 2982 , 2984 , 2986 , 2988 ,
2990 , 2992 , 2994 , 2996 , 2998 , 3000 , 3002 , 3004 , 3006 , 3008 , 3010 ,
3012 , 3014 , 3016 , 3018 , 3020 , 3022 , 3024 , 3026 , 3028 , 3030 , 3032 ,
3034 , 3036 , 3038 , 3040 , 3042 , 3044 , 3046 , 3048 , 3050 , 3052 , 3054 ,
3056 , 3058 , 3060 , 3062 , 3064 , 3066 , 3068 , 3070 , 2049 , 2051 , 2053 ,
2055 , 2057 , 2059 , 2061 , 2063 , 2065 , 2067 , 2069 , 2071 , 2073 , 2075 ,
2077 , 2079 , 2081 , 2083 , 2085 , 2087 , 2089 , 2091 , 2093 , 2095 , 2097 ,
2099 , 2101 , 2103 , 2105 , 2107 , 2109 , 2111 , 2113 , 2115 , 2117 , 2119 ,
2121 , 2123 , 2125 , 2127 , 2129 , 2131 , 2133 , 2135 , 2137 , 2139 , 2141 ,
2143 , 2145 , 2147 , 2149 , 2151 , 2153 , 2155 , 2157 , 2159 , 2161 , 2163 ,
2165 , 2167 , 2169 , 2171 , 2173 , 2175 , 2177 , 2179 , 2181 , 2183 , 2185 ,
2187 , 2189 , 2191 , 2193 , 2195 , 2197 , 2199 , 2201 , 2203 , 2205 , 2207 ,
2209 , 2211 , 2213 , 2215 , 2217 , 2219 , 2221 , 2223 , 2225 , 2227 , 2229 ,
2231 , 2233 , 2235 , 2237 , 2239 , 2241 , 2243 , 2245 , 2247 , 2249 , 2251 ,
2253 , 2255 , 2257 , 2259 , 2261 , 2263 , 2265 , 2267 , 2269 , 2271 , 2273 ,
2275 , 2277 , 2279 , 2281 , 2283 , 2285 , 2287 , 2289 , 2291 , 2293 , 2295 ,
2297 , 2299 , 2301 , 2303 , 2305 , 2307 , 2309 , 2311 , 2313 , 2315 , 2317 ,
2319 , 2321 , 2323 , 2325 , 2327 , 2329 , 2331 , 2333 , 2335 , 2337 , 2339 ,
2341 , 2343 , 2345 , 2347 , 2349 , 2351 , 2353 , 2355 , 2357 , 2359 , 2361 ,
2363 , 2365 , 2367 , 2369 , 2371 , 2373 , 2375 , 2377 , 2379 , 2381 , 2383 ,
2385 , 2387 , 2389 , 2391 , 2393 , 2395 , 2397 , 2399 , 2401 , 2403 , 2405 ,
2407 , 2409 , 2411 , 2413 , 2415 , 2417 , 2419 , 2421 , 2423 , 2425 , 2427 ,
2429 , 2431 , 2433 , 2435 , 2437 , 2439 , 2441 , 2443 , 2445 , 2447 , 2449 ,
2451 , 2453 , 2455 , 2457 , 2459 , 2461 , 2463 , 2465 , 2467 , 2469 , 2471 ,
2473 , 2475 , 2477 , 2479 , 2481 , 2483 , 2485 , 2487 , 2489 , 2491 , 2493 ,
2495 , 2497 , 2499 , 2501 , 2503 , 2505 , 2507 , 2509 , 2511 , 2513 , 2515 ,
2517 , 2519 , 2521 , 2523 , 2525 , 2527 , 2529 , 2531 , 2533 , 2535 , 2537 ,
2539 , 2541 , 2543 , 2545 , 2547 , 2549 , 2551 , 2553 , 2555 , 2557 , 2559 ,
2561 , 2563 , 2565 , 2567 , 2569 , 2571 , 2573 , 2575 , 2577 , 2579 , 2581 ,
2583 , 2585 , 2587 , 2589 , 2591 , 2593 , 2595 , 2597 , 2599 , 2601 , 2603 ,
2605 , 2607 , 2609 , 2611 , 2613 , 2615 , 2617 , 2619 , 2621 , 2623 , 2625 ,
2627 , 2629 , 2631 , 2633 , 2635 , 2637 , 2639 , 2641 , 2643 , 2645 , 2647 ,
2649 , 2651 , 2653 , 2655 , 2657 , 2659 , 2661 , 2663 , 2665 , 2667 , 2669 ,
2671 , 2673 , 2675 , 2677 , 2679 , 2681 , 2683 , 2685 , 2687 , 2689 , 2691 ,
2693 , 2695 , 2697 , 2699 , 2701 , 2703 , 2705 , 2707 , 2709 , 2711 , 2713 ,
2715 , 2717 , 2719 , 2721 , 2723 , 2725 , 2727 , 2729 , 2731 , 2733 , 2735 ,
2737 , 2739 , 2741 , 2743 , 2745 , 2747 , 2749 , 2751 , 2753 , 2755 , 2757 ,
2759 , 2761 , 2763 , 2765 , 2767 , 2769 , 2771 , 2773 , 2775 , 2777 , 2779 ,
2781 , 2783 , 2785 , 2787 , 2789 , 2791 , 2793 , 2795 , 2797 , 2799 , 2801 ,
2803 , 2805 , 2807 , 2809 , 2811 , 2813 , 2815 , 2817 , 2819 , 2821 , 2823 ,
2825 , 2827 , 2829 , 2831 , 2833 , 2835 , 2837 , 2839 , 2841 , 2843 , 2845 ,
2847 , 2849 , 2851 , 2853 , 2855 , 2857 , 2859 , 2861 , 2863 , 2865 , 2867 ,
2869 , 2871 , 2873 , 2875 , 2877 , 2879 , 2881 , 2883 , 2885 , 2887 , 2889 ,
2891 , 2893 , 2895 , 2897 , 2899 , 2901 , 2903 , 2905 , 2907 , 2909 , 2911 ,
2913 , 2915 , 2917 , 2919 , 2921 , 2923 , 2925 , 2927 , 2929 , 2931 , 2933 ,
2935 , 2937 , 2939 , 2941 , 2943 , 2945 , 2947 , 2949 , 2951 , 2953 , 2955 ,
2957 , 2959 , 2961 , 2963 , 2965 , 2967 , 2969 , 2971 , 2973 , 2975 , 2977 ,
2979 , 2981 , 2983 , 2985 , 2987 , 2989 , 2991 , 2993 , 2995 , 2997 , 2999 ,
3001 , 3003 , 3005 , 3007 , 3009 , 3011 , 3013 , 3015 , 3017 , 3019 , 3021 ,
3023 , 3025 , 3027 , 3029 , 3031 , 3033 , 3035 , 3037 , 3039 , 3041 , 3043 ,
3045 , 3047 , 3049 , 3051 , 3053 , 3055 , 3057 , 3059 , 3061 , 3063 , 3065 ,
3067 , 3069 , 3071 } ; sampleIndex_size [ 0 ] = 1 ; sampleIndex_size [ 1 ] =
2048 ; for ( i = 0 ; i < 1024 ; i ++ ) { sampleIndex_data [ i ] =
BaseSampleIndex [ i ] ; sampleIndex_data [ i + 1024 ] = tmp [ i ] ; } }
static real_T hcrh0akgkk ( real_T in , const real_T bitReverseTable [ 2048 ]
, real_T stage ) { real_T out ; int32_T eint ; frexp ( 4096.0 , & eint ) ; if
( stage == 12.0 ) { out = bitReverseTable [ ( int32_T ) ( in + 1.0 ) - 1 ] ;
} else { out = muDoubleScalarRem ( trunc ( bitReverseTable [ ( int32_T ) ( in
+ 1.0 ) - 1 ] / 2.0 ) , muDoubleScalarPower ( 2.0 , stage - 1.0 ) ) ; }
return out ; } static void csvkerezk4 ( const lgw3dwnp03 * obj , const
cint32_T twiddleTable [ 2 ] , real_T twiddleIndex , int32_T * wr , int32_T *
wi ) { twiddleIndex = hcrh0akgkk ( twiddleIndex , obj -> pBitReverseTable_H ,
2.0 ) ; * wr = twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . re ;
* wi = twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . im ; }
static void djfqiflzn0j ( real_T sampleIndex_data [ ] , int32_T
sampleIndex_size [ 2 ] ) { int32_T b_i ; int32_T b_i_p ; int32_T i ; int32_T
i_p ; static const int16_T BaseSampleIndex [ 512 ] = { 0 , 2 , 4 , 6 , 8 , 10
, 12 , 14 , 16 , 18 , 20 , 22 , 24 , 26 , 28 , 30 , 32 , 34 , 36 , 38 , 40 ,
42 , 44 , 46 , 48 , 50 , 52 , 54 , 56 , 58 , 60 , 62 , 64 , 66 , 68 , 70 , 72
, 74 , 76 , 78 , 80 , 82 , 84 , 86 , 88 , 90 , 92 , 94 , 96 , 98 , 100 , 102
, 104 , 106 , 108 , 110 , 112 , 114 , 116 , 118 , 120 , 122 , 124 , 126 , 128
, 130 , 132 , 134 , 136 , 138 , 140 , 142 , 144 , 146 , 148 , 150 , 152 , 154
, 156 , 158 , 160 , 162 , 164 , 166 , 168 , 170 , 172 , 174 , 176 , 178 , 180
, 182 , 184 , 186 , 188 , 190 , 192 , 194 , 196 , 198 , 200 , 202 , 204 , 206
, 208 , 210 , 212 , 214 , 216 , 218 , 220 , 222 , 224 , 226 , 228 , 230 , 232
, 234 , 236 , 238 , 240 , 242 , 244 , 246 , 248 , 250 , 252 , 254 , 256 , 258
, 260 , 262 , 264 , 266 , 268 , 270 , 272 , 274 , 276 , 278 , 280 , 282 , 284
, 286 , 288 , 290 , 292 , 294 , 296 , 298 , 300 , 302 , 304 , 306 , 308 , 310
, 312 , 314 , 316 , 318 , 320 , 322 , 324 , 326 , 328 , 330 , 332 , 334 , 336
, 338 , 340 , 342 , 344 , 346 , 348 , 350 , 352 , 354 , 356 , 358 , 360 , 362
, 364 , 366 , 368 , 370 , 372 , 374 , 376 , 378 , 380 , 382 , 384 , 386 , 388
, 390 , 392 , 394 , 396 , 398 , 400 , 402 , 404 , 406 , 408 , 410 , 412 , 414
, 416 , 418 , 420 , 422 , 424 , 426 , 428 , 430 , 432 , 434 , 436 , 438 , 440
, 442 , 444 , 446 , 448 , 450 , 452 , 454 , 456 , 458 , 460 , 462 , 464 , 466
, 468 , 470 , 472 , 474 , 476 , 478 , 480 , 482 , 484 , 486 , 488 , 490 , 492
, 494 , 496 , 498 , 500 , 502 , 504 , 506 , 508 , 510 , 1 , 3 , 5 , 7 , 9 ,
11 , 13 , 15 , 17 , 19 , 21 , 23 , 25 , 27 , 29 , 31 , 33 , 35 , 37 , 39 , 41
, 43 , 45 , 47 , 49 , 51 , 53 , 55 , 57 , 59 , 61 , 63 , 65 , 67 , 69 , 71 ,
73 , 75 , 77 , 79 , 81 , 83 , 85 , 87 , 89 , 91 , 93 , 95 , 97 , 99 , 101 ,
103 , 105 , 107 , 109 , 111 , 113 , 115 , 117 , 119 , 121 , 123 , 125 , 127 ,
129 , 131 , 133 , 135 , 137 , 139 , 141 , 143 , 145 , 147 , 149 , 151 , 153 ,
155 , 157 , 159 , 161 , 163 , 165 , 167 , 169 , 171 , 173 , 175 , 177 , 179 ,
181 , 183 , 185 , 187 , 189 , 191 , 193 , 195 , 197 , 199 , 201 , 203 , 205 ,
207 , 209 , 211 , 213 , 215 , 217 , 219 , 221 , 223 , 225 , 227 , 229 , 231 ,
233 , 235 , 237 , 239 , 241 , 243 , 245 , 247 , 249 , 251 , 253 , 255 , 257 ,
259 , 261 , 263 , 265 , 267 , 269 , 271 , 273 , 275 , 277 , 279 , 281 , 283 ,
285 , 287 , 289 , 291 , 293 , 295 , 297 , 299 , 301 , 303 , 305 , 307 , 309 ,
311 , 313 , 315 , 317 , 319 , 321 , 323 , 325 , 327 , 329 , 331 , 333 , 335 ,
337 , 339 , 341 , 343 , 345 , 347 , 349 , 351 , 353 , 355 , 357 , 359 , 361 ,
363 , 365 , 367 , 369 , 371 , 373 , 375 , 377 , 379 , 381 , 383 , 385 , 387 ,
389 , 391 , 393 , 395 , 397 , 399 , 401 , 403 , 405 , 407 , 409 , 411 , 413 ,
415 , 417 , 419 , 421 , 423 , 425 , 427 , 429 , 431 , 433 , 435 , 437 , 439 ,
441 , 443 , 445 , 447 , 449 , 451 , 453 , 455 , 457 , 459 , 461 , 463 , 465 ,
467 , 469 , 471 , 473 , 475 , 477 , 479 , 481 , 483 , 485 , 487 , 489 , 491 ,
493 , 495 , 497 , 499 , 501 , 503 , 505 , 507 , 509 , 511 } ;
sampleIndex_size [ 0 ] = 1 ; sampleIndex_size [ 1 ] = 512 ; for ( i = 0 ; i <
512 ; i ++ ) { sampleIndex_data [ i ] = BaseSampleIndex [ i ] ; } for ( b_i =
0 ; b_i < 3 ; b_i ++ ) { i = sampleIndex_size [ 1 ] ; sampleIndex_size [ 1 ]
+= 512 ; b_i_p = ( b_i + 1 ) << 10 ; for ( i_p = 0 ; i_p < 512 ; i_p ++ ) {
sampleIndex_data [ i + i_p ] = BaseSampleIndex [ i_p ] + b_i_p ; } } } static
void csvkerezk4d ( const lgw3dwnp03 * obj , const cint32_T twiddleTable [ 4 ]
, real_T twiddleIndex , int32_T * wr , int32_T * wi ) { twiddleIndex =
hcrh0akgkk ( twiddleIndex , obj -> pBitReverseTable_H , 3.0 ) ; * wr =
twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . re ; * wi =
twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . im ; } static void
djfqiflzn0jp ( real_T sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ] )
{ int32_T b_i ; int32_T b_i_p ; int32_T i ; int32_T i_p ; static const
uint8_T BaseSampleIndex [ 256 ] = { 0U , 2U , 4U , 6U , 8U , 10U , 12U , 14U
, 16U , 18U , 20U , 22U , 24U , 26U , 28U , 30U , 32U , 34U , 36U , 38U , 40U
, 42U , 44U , 46U , 48U , 50U , 52U , 54U , 56U , 58U , 60U , 62U , 64U , 66U
, 68U , 70U , 72U , 74U , 76U , 78U , 80U , 82U , 84U , 86U , 88U , 90U , 92U
, 94U , 96U , 98U , 100U , 102U , 104U , 106U , 108U , 110U , 112U , 114U ,
116U , 118U , 120U , 122U , 124U , 126U , 128U , 130U , 132U , 134U , 136U ,
138U , 140U , 142U , 144U , 146U , 148U , 150U , 152U , 154U , 156U , 158U ,
160U , 162U , 164U , 166U , 168U , 170U , 172U , 174U , 176U , 178U , 180U ,
182U , 184U , 186U , 188U , 190U , 192U , 194U , 196U , 198U , 200U , 202U ,
204U , 206U , 208U , 210U , 212U , 214U , 216U , 218U , 220U , 222U , 224U ,
226U , 228U , 230U , 232U , 234U , 236U , 238U , 240U , 242U , 244U , 246U ,
248U , 250U , 252U , 254U , 1U , 3U , 5U , 7U , 9U , 11U , 13U , 15U , 17U ,
19U , 21U , 23U , 25U , 27U , 29U , 31U , 33U , 35U , 37U , 39U , 41U , 43U ,
45U , 47U , 49U , 51U , 53U , 55U , 57U , 59U , 61U , 63U , 65U , 67U , 69U ,
71U , 73U , 75U , 77U , 79U , 81U , 83U , 85U , 87U , 89U , 91U , 93U , 95U ,
97U , 99U , 101U , 103U , 105U , 107U , 109U , 111U , 113U , 115U , 117U ,
119U , 121U , 123U , 125U , 127U , 129U , 131U , 133U , 135U , 137U , 139U ,
141U , 143U , 145U , 147U , 149U , 151U , 153U , 155U , 157U , 159U , 161U ,
163U , 165U , 167U , 169U , 171U , 173U , 175U , 177U , 179U , 181U , 183U ,
185U , 187U , 189U , 191U , 193U , 195U , 197U , 199U , 201U , 203U , 205U ,
207U , 209U , 211U , 213U , 215U , 217U , 219U , 221U , 223U , 225U , 227U ,
229U , 231U , 233U , 235U , 237U , 239U , 241U , 243U , 245U , 247U , 249U ,
251U , 253U , MAX_uint8_T } ; sampleIndex_size [ 0 ] = 1 ; sampleIndex_size [
1 ] = 256 ; for ( i = 0 ; i < 256 ; i ++ ) { sampleIndex_data [ i ] =
BaseSampleIndex [ i ] ; } for ( b_i = 0 ; b_i < 7 ; b_i ++ ) { i =
sampleIndex_size [ 1 ] ; sampleIndex_size [ 1 ] += 256 ; b_i_p = ( b_i + 1 )
<< 9 ; for ( i_p = 0 ; i_p < 256 ; i_p ++ ) { sampleIndex_data [ i + i_p ] =
BaseSampleIndex [ i_p ] + b_i_p ; } } } static void csvkerezk4d4 ( const
lgw3dwnp03 * obj , const cint32_T twiddleTable [ 8 ] , real_T twiddleIndex ,
int32_T * wr , int32_T * wi ) { twiddleIndex = hcrh0akgkk ( twiddleIndex ,
obj -> pBitReverseTable_H , 4.0 ) ; * wr = twiddleTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] . re ; * wi = twiddleTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] . im ; } static void djfqiflzn0jpf ( real_T
sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ] ) { int32_T b_i ;
int32_T b_i_p ; int32_T i ; int32_T i_p ; static const uint8_T
BaseSampleIndex [ 128 ] = { 0U , 2U , 4U , 6U , 8U , 10U , 12U , 14U , 16U ,
18U , 20U , 22U , 24U , 26U , 28U , 30U , 32U , 34U , 36U , 38U , 40U , 42U ,
44U , 46U , 48U , 50U , 52U , 54U , 56U , 58U , 60U , 62U , 64U , 66U , 68U ,
70U , 72U , 74U , 76U , 78U , 80U , 82U , 84U , 86U , 88U , 90U , 92U , 94U ,
96U , 98U , 100U , 102U , 104U , 106U , 108U , 110U , 112U , 114U , 116U ,
118U , 120U , 122U , 124U , 126U , 1U , 3U , 5U , 7U , 9U , 11U , 13U , 15U ,
17U , 19U , 21U , 23U , 25U , 27U , 29U , 31U , 33U , 35U , 37U , 39U , 41U ,
43U , 45U , 47U , 49U , 51U , 53U , 55U , 57U , 59U , 61U , 63U , 65U , 67U ,
69U , 71U , 73U , 75U , 77U , 79U , 81U , 83U , 85U , 87U , 89U , 91U , 93U ,
95U , 97U , 99U , 101U , 103U , 105U , 107U , 109U , 111U , 113U , 115U ,
117U , 119U , 121U , 123U , 125U , 127U } ; sampleIndex_size [ 0 ] = 1 ;
sampleIndex_size [ 1 ] = 128 ; for ( i = 0 ; i < 128 ; i ++ ) {
sampleIndex_data [ i ] = BaseSampleIndex [ i ] ; } for ( b_i = 0 ; b_i < 15 ;
b_i ++ ) { i = sampleIndex_size [ 1 ] ; sampleIndex_size [ 1 ] += 128 ; b_i_p
= ( b_i + 1 ) << 8 ; for ( i_p = 0 ; i_p < 128 ; i_p ++ ) { sampleIndex_data
[ i + i_p ] = BaseSampleIndex [ i_p ] + b_i_p ; } } } static void
csvkerezk4d4v ( const lgw3dwnp03 * obj , const cint32_T twiddleTable [ 16 ] ,
real_T twiddleIndex , int32_T * wr , int32_T * wi ) { twiddleIndex =
hcrh0akgkk ( twiddleIndex , obj -> pBitReverseTable_H , 5.0 ) ; * wr =
twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . re ; * wi =
twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . im ; } static void
djfqiflzn0jpf2 ( real_T sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ]
) { int32_T b_i ; int32_T b_i_p ; int32_T i ; int32_T i_p ; static const
int8_T BaseSampleIndex [ 64 ] = { 0 , 2 , 4 , 6 , 8 , 10 , 12 , 14 , 16 , 18
, 20 , 22 , 24 , 26 , 28 , 30 , 32 , 34 , 36 , 38 , 40 , 42 , 44 , 46 , 48 ,
50 , 52 , 54 , 56 , 58 , 60 , 62 , 1 , 3 , 5 , 7 , 9 , 11 , 13 , 15 , 17 , 19
, 21 , 23 , 25 , 27 , 29 , 31 , 33 , 35 , 37 , 39 , 41 , 43 , 45 , 47 , 49 ,
51 , 53 , 55 , 57 , 59 , 61 , 63 } ; sampleIndex_size [ 0 ] = 1 ;
sampleIndex_size [ 1 ] = 64 ; for ( i = 0 ; i < 64 ; i ++ ) {
sampleIndex_data [ i ] = BaseSampleIndex [ i ] ; } for ( b_i = 0 ; b_i < 31 ;
b_i ++ ) { i = sampleIndex_size [ 1 ] ; sampleIndex_size [ 1 ] += 64 ; b_i_p
= ( b_i + 1 ) << 7 ; for ( i_p = 0 ; i_p < 64 ; i_p ++ ) { sampleIndex_data [
i + i_p ] = BaseSampleIndex [ i_p ] + b_i_p ; } } } static void
csvkerezk4d4vh ( const lgw3dwnp03 * obj , const cint32_T twiddleTable [ 32 ]
, real_T twiddleIndex , int32_T * wr , int32_T * wi ) { twiddleIndex =
hcrh0akgkk ( twiddleIndex , obj -> pBitReverseTable_H , 6.0 ) ; * wr =
twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . re ; * wi =
twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . im ; } static void
djfqiflzn0jpf2e ( real_T sampleIndex_data [ ] , int32_T sampleIndex_size [ 2
] ) { int32_T b_i ; int32_T b_i_p ; int32_T i ; int32_T i_p ; static const
int8_T BaseSampleIndex [ 32 ] = { 0 , 2 , 4 , 6 , 8 , 10 , 12 , 14 , 16 , 18
, 20 , 22 , 24 , 26 , 28 , 30 , 1 , 3 , 5 , 7 , 9 , 11 , 13 , 15 , 17 , 19 ,
21 , 23 , 25 , 27 , 29 , 31 } ; sampleIndex_size [ 0 ] = 1 ; sampleIndex_size
[ 1 ] = 32 ; for ( i = 0 ; i < 32 ; i ++ ) { sampleIndex_data [ i ] =
BaseSampleIndex [ i ] ; } for ( b_i = 0 ; b_i < 63 ; b_i ++ ) { i =
sampleIndex_size [ 1 ] ; sampleIndex_size [ 1 ] += 32 ; b_i_p = ( b_i + 1 )
<< 6 ; for ( i_p = 0 ; i_p < 32 ; i_p ++ ) { sampleIndex_data [ i + i_p ] =
BaseSampleIndex [ i_p ] + b_i_p ; } } } static void csvkerezk4d4vhp ( const
lgw3dwnp03 * obj , const cint32_T twiddleTable [ 64 ] , real_T twiddleIndex ,
int32_T * wr , int32_T * wi ) { twiddleIndex = hcrh0akgkk ( twiddleIndex ,
obj -> pBitReverseTable_H , 7.0 ) ; * wr = twiddleTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] . re ; * wi = twiddleTable [ ( int32_T ) (
twiddleIndex + 1.0 ) - 1 ] . im ; } static void ddbkoo3nbt ( real_T
sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ] ) { int32_T b_i ;
int32_T b_i_p ; int32_T i ; int32_T i_p ; static const int8_T BaseSampleIndex
[ 16 ] = { 0 , 2 , 4 , 6 , 8 , 10 , 12 , 14 , 1 , 3 , 5 , 7 , 9 , 11 , 13 ,
15 } ; sampleIndex_size [ 0 ] = 1 ; sampleIndex_size [ 1 ] = 16 ; for ( i = 0
; i < 16 ; i ++ ) { sampleIndex_data [ i ] = BaseSampleIndex [ i ] ; } for (
b_i = 0 ; b_i < 127 ; b_i ++ ) { i = sampleIndex_size [ 1 ] ;
sampleIndex_size [ 1 ] += 16 ; b_i_p = ( b_i + 1 ) << 5 ; for ( i_p = 0 ; i_p
< 16 ; i_p ++ ) { sampleIndex_data [ i + i_p ] = BaseSampleIndex [ i_p ] +
b_i_p ; } } } static void n435m4bqg5 ( const lgw3dwnp03 * obj , const
cint32_T twiddleTable [ 128 ] , real_T twiddleIndex , int32_T * wr , int32_T
* wi ) { twiddleIndex = hcrh0akgkk ( twiddleIndex , obj -> pBitReverseTable_H
, 8.0 ) ; * wr = twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . re
; * wi = twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . im ; }
static void gvl5ridc12 ( real_T sampleIndex_data [ ] , int32_T
sampleIndex_size [ 2 ] ) { int32_T b_i ; int32_T b_i_p ; int32_T i ; int32_T
i_p ; static const int8_T BaseSampleIndex [ 8 ] = { 0 , 2 , 4 , 6 , 1 , 3 , 5
, 7 } ; sampleIndex_size [ 0 ] = 1 ; sampleIndex_size [ 1 ] = 8 ; for ( i = 0
; i < 8 ; i ++ ) { sampleIndex_data [ i ] = BaseSampleIndex [ i ] ; } for (
b_i = 0 ; b_i < 255 ; b_i ++ ) { i = sampleIndex_size [ 1 ] ;
sampleIndex_size [ 1 ] += 8 ; b_i_p = ( b_i + 1 ) << 4 ; for ( i_p = 0 ; i_p
< 8 ; i_p ++ ) { sampleIndex_data [ i + i_p ] = BaseSampleIndex [ i_p ] +
b_i_p ; } } } static void axcw5y1yb3 ( const lgw3dwnp03 * obj , const
cint32_T twiddleTable [ 256 ] , real_T twiddleIndex , int32_T * wr , int32_T
* wi ) { twiddleIndex = hcrh0akgkk ( twiddleIndex , obj -> pBitReverseTable_H
, 9.0 ) ; * wr = twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . re
; * wi = twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . im ; }
static void m1xs4zed55 ( real_T sampleIndex_data [ ] , int32_T
sampleIndex_size [ 2 ] ) { int32_T b_i ; int32_T b_i_p ; int32_T tmp ;
sampleIndex_size [ 0 ] = 1 ; sampleIndex_size [ 1 ] = 4 ; sampleIndex_data [
0 ] = 0.0 ; sampleIndex_data [ 1 ] = 2.0 ; sampleIndex_data [ 2 ] = 1.0 ;
sampleIndex_data [ 3 ] = 3.0 ; for ( b_i = 0 ; b_i < 511 ; b_i ++ ) { tmp =
sampleIndex_size [ 1 ] ; sampleIndex_size [ 1 ] += 4 ; b_i_p = ( b_i + 1 ) <<
3 ; sampleIndex_data [ tmp ] = b_i_p ; sampleIndex_data [ tmp + 1 ] = (
real_T ) b_i_p + 2.0 ; sampleIndex_data [ tmp + 2 ] = ( real_T ) b_i_p + 1.0
; sampleIndex_data [ tmp + 3 ] = ( real_T ) b_i_p + 3.0 ; } } static void
bv20pcjkch ( const lgw3dwnp03 * obj , const cint32_T twiddleTable [ 512 ] ,
real_T twiddleIndex , int32_T * wr , int32_T * wi ) { twiddleIndex =
hcrh0akgkk ( twiddleIndex , obj -> pBitReverseTable_H , 10.0 ) ; * wr =
twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . re ; * wi =
twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . im ; } static void
k4wethv1yh ( real_T sampleIndex_data [ ] , int32_T sampleIndex_size [ 2 ] ) {
int32_T b_i ; int32_T b_i_p ; int32_T tmp ; sampleIndex_size [ 0 ] = 1 ;
sampleIndex_size [ 1 ] = 2 ; sampleIndex_data [ 0 ] = 0.0 ; sampleIndex_data
[ 1 ] = 1.0 ; for ( b_i = 0 ; b_i < 1023 ; b_i ++ ) { tmp = sampleIndex_size
[ 1 ] ; sampleIndex_size [ 1 ] += 2 ; b_i_p = ( b_i + 1 ) << 2 ;
sampleIndex_data [ tmp ] = b_i_p ; sampleIndex_data [ tmp + 1 ] = ( real_T )
b_i_p + 1.0 ; } } static void fsab4sqz11 ( const lgw3dwnp03 * obj , const
cint32_T twiddleTable [ 1024 ] , real_T twiddleIndex , int32_T * wr , int32_T
* wi ) { twiddleIndex = hcrh0akgkk ( twiddleIndex , obj -> pBitReverseTable_H
, 11.0 ) ; * wr = twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] .
re ; * wi = twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . im ; }
static void jmd542rf2p ( const lgw3dwnp03 * obj , const cint32_T twiddleTable
[ 2048 ] , real_T twiddleIndex , int32_T * wr , int32_T * wi ) { twiddleIndex
= hcrh0akgkk ( twiddleIndex , obj -> pBitReverseTable_H , 12.0 ) ; * wr =
twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . re ; * wi =
twiddleTable [ ( int32_T ) ( twiddleIndex + 1.0 ) - 1 ] . im ; } static void
bcoqzmpix0 ( lgw3dwnp03 * obj ) { real_T stagesWithWarning ; int32_T k ;
stagesWithWarning = obj -> pOverflowStage [ 0 ] ; for ( k = 0 ; k < 11 ; k ++
) { stagesWithWarning += obj -> pOverflowStage [ k + 1 ] ; } if ( (
stagesWithWarning > 0.0 ) && obj -> pOverflowFlag ) { obj -> pOverflowFlag =
false ; } } static real_T hcrh0akgkks ( real_T in , const real_T
bitReverseTable [ 4096 ] ) { int32_T eint ; frexp ( 8192.0 , & eint ) ;
return bitReverseTable [ ( int32_T ) ( in + 1.0 ) - 1 ] ; } static void
lglgu5bh2x ( lgw3dwnp03 * obj , const int32_T dataIn_re [ 4096 ] , const
int32_T dataIn_im [ 4096 ] , int32_T dout_re [ 4096 ] , int32_T dout_im [
4096 ] ) { cint32_T twiddleTable_c [ 512 ] ; cint32_T twiddleTable_f [ 256 ]
; cint32_T twiddleTable_j [ 128 ] ; cint32_T twiddleTable_g [ 64 ] ; cint32_T
twiddleTable_m [ 32 ] ; cint32_T twiddleTable_i [ 16 ] ; cint32_T
twiddleTable_e [ 8 ] ; cint32_T twiddleTable_p [ 4 ] ; cint32_T twiddleTable
[ 2 ] ; int64_T u_cast ; int64_T varargin_1 ; int64_T varargin_1_e ; int64_T
varargin_1_i ; int64_T varargin_1_p ; int64_T x_cast ; real_T outIndex ;
int32_T b ; int32_T din_im ; int32_T i ; int32_T twdlIndex ; int32_T wi ;
int32_T wr ; static const int16_T tmp [ 2048 ] = { 0 , 2 , 4 , 6 , 8 , 10 ,
12 , 14 , 16 , 18 , 20 , 22 , 24 , 26 , 28 , 30 , 32 , 34 , 36 , 38 , 40 , 42
, 44 , 46 , 48 , 50 , 52 , 54 , 56 , 58 , 60 , 62 , 64 , 66 , 68 , 70 , 72 ,
74 , 76 , 78 , 80 , 82 , 84 , 86 , 88 , 90 , 92 , 94 , 96 , 98 , 100 , 102 ,
104 , 106 , 108 , 110 , 112 , 114 , 116 , 118 , 120 , 122 , 124 , 126 , 128 ,
130 , 132 , 134 , 136 , 138 , 140 , 142 , 144 , 146 , 148 , 150 , 152 , 154 ,
156 , 158 , 160 , 162 , 164 , 166 , 168 , 170 , 172 , 174 , 176 , 178 , 180 ,
182 , 184 , 186 , 188 , 190 , 192 , 194 , 196 , 198 , 200 , 202 , 204 , 206 ,
208 , 210 , 212 , 214 , 216 , 218 , 220 , 222 , 224 , 226 , 228 , 230 , 232 ,
234 , 236 , 238 , 240 , 242 , 244 , 246 , 248 , 250 , 252 , 254 , 256 , 258 ,
260 , 262 , 264 , 266 , 268 , 270 , 272 , 274 , 276 , 278 , 280 , 282 , 284 ,
286 , 288 , 290 , 292 , 294 , 296 , 298 , 300 , 302 , 304 , 306 , 308 , 310 ,
312 , 314 , 316 , 318 , 320 , 322 , 324 , 326 , 328 , 330 , 332 , 334 , 336 ,
338 , 340 , 342 , 344 , 346 , 348 , 350 , 352 , 354 , 356 , 358 , 360 , 362 ,
364 , 366 , 368 , 370 , 372 , 374 , 376 , 378 , 380 , 382 , 384 , 386 , 388 ,
390 , 392 , 394 , 396 , 398 , 400 , 402 , 404 , 406 , 408 , 410 , 412 , 414 ,
416 , 418 , 420 , 422 , 424 , 426 , 428 , 430 , 432 , 434 , 436 , 438 , 440 ,
442 , 444 , 446 , 448 , 450 , 452 , 454 , 456 , 458 , 460 , 462 , 464 , 466 ,
468 , 470 , 472 , 474 , 476 , 478 , 480 , 482 , 484 , 486 , 488 , 490 , 492 ,
494 , 496 , 498 , 500 , 502 , 504 , 506 , 508 , 510 , 512 , 514 , 516 , 518 ,
520 , 522 , 524 , 526 , 528 , 530 , 532 , 534 , 536 , 538 , 540 , 542 , 544 ,
546 , 548 , 550 , 552 , 554 , 556 , 558 , 560 , 562 , 564 , 566 , 568 , 570 ,
572 , 574 , 576 , 578 , 580 , 582 , 584 , 586 , 588 , 590 , 592 , 594 , 596 ,
598 , 600 , 602 , 604 , 606 , 608 , 610 , 612 , 614 , 616 , 618 , 620 , 622 ,
624 , 626 , 628 , 630 , 632 , 634 , 636 , 638 , 640 , 642 , 644 , 646 , 648 ,
650 , 652 , 654 , 656 , 658 , 660 , 662 , 664 , 666 , 668 , 670 , 672 , 674 ,
676 , 678 , 680 , 682 , 684 , 686 , 688 , 690 , 692 , 694 , 696 , 698 , 700 ,
702 , 704 , 706 , 708 , 710 , 712 , 714 , 716 , 718 , 720 , 722 , 724 , 726 ,
728 , 730 , 732 , 734 , 736 , 738 , 740 , 742 , 744 , 746 , 748 , 750 , 752 ,
754 , 756 , 758 , 760 , 762 , 764 , 766 , 768 , 770 , 772 , 774 , 776 , 778 ,
780 , 782 , 784 , 786 , 788 , 790 , 792 , 794 , 796 , 798 , 800 , 802 , 804 ,
806 , 808 , 810 , 812 , 814 , 816 , 818 , 820 , 822 , 824 , 826 , 828 , 830 ,
832 , 834 , 836 , 838 , 840 , 842 , 844 , 846 , 848 , 850 , 852 , 854 , 856 ,
858 , 860 , 862 , 864 , 866 , 868 , 870 , 872 , 874 , 876 , 878 , 880 , 882 ,
884 , 886 , 888 , 890 , 892 , 894 , 896 , 898 , 900 , 902 , 904 , 906 , 908 ,
910 , 912 , 914 , 916 , 918 , 920 , 922 , 924 , 926 , 928 , 930 , 932 , 934 ,
936 , 938 , 940 , 942 , 944 , 946 , 948 , 950 , 952 , 954 , 956 , 958 , 960 ,
962 , 964 , 966 , 968 , 970 , 972 , 974 , 976 , 978 , 980 , 982 , 984 , 986 ,
988 , 990 , 992 , 994 , 996 , 998 , 1000 , 1002 , 1004 , 1006 , 1008 , 1010 ,
1012 , 1014 , 1016 , 1018 , 1020 , 1022 , 1024 , 1026 , 1028 , 1030 , 1032 ,
1034 , 1036 , 1038 , 1040 , 1042 , 1044 , 1046 , 1048 , 1050 , 1052 , 1054 ,
1056 , 1058 , 1060 , 1062 , 1064 , 1066 , 1068 , 1070 , 1072 , 1074 , 1076 ,
1078 , 1080 , 1082 , 1084 , 1086 , 1088 , 1090 , 1092 , 1094 , 1096 , 1098 ,
1100 , 1102 , 1104 , 1106 , 1108 , 1110 , 1112 , 1114 , 1116 , 1118 , 1120 ,
1122 , 1124 , 1126 , 1128 , 1130 , 1132 , 1134 , 1136 , 1138 , 1140 , 1142 ,
1144 , 1146 , 1148 , 1150 , 1152 , 1154 , 1156 , 1158 , 1160 , 1162 , 1164 ,
1166 , 1168 , 1170 , 1172 , 1174 , 1176 , 1178 , 1180 , 1182 , 1184 , 1186 ,
1188 , 1190 , 1192 , 1194 , 1196 , 1198 , 1200 , 1202 , 1204 , 1206 , 1208 ,
1210 , 1212 , 1214 , 1216 , 1218 , 1220 , 1222 , 1224 , 1226 , 1228 , 1230 ,
1232 , 1234 , 1236 , 1238 , 1240 , 1242 , 1244 , 1246 , 1248 , 1250 , 1252 ,
1254 , 1256 , 1258 , 1260 , 1262 , 1264 , 1266 , 1268 , 1270 , 1272 , 1274 ,
1276 , 1278 , 1280 , 1282 , 1284 , 1286 , 1288 , 1290 , 1292 , 1294 , 1296 ,
1298 , 1300 , 1302 , 1304 , 1306 , 1308 , 1310 , 1312 , 1314 , 1316 , 1318 ,
1320 , 1322 , 1324 , 1326 , 1328 , 1330 , 1332 , 1334 , 1336 , 1338 , 1340 ,
1342 , 1344 , 1346 , 1348 , 1350 , 1352 , 1354 , 1356 , 1358 , 1360 , 1362 ,
1364 , 1366 , 1368 , 1370 , 1372 , 1374 , 1376 , 1378 , 1380 , 1382 , 1384 ,
1386 , 1388 , 1390 , 1392 , 1394 , 1396 , 1398 , 1400 , 1402 , 1404 , 1406 ,
1408 , 1410 , 1412 , 1414 , 1416 , 1418 , 1420 , 1422 , 1424 , 1426 , 1428 ,
1430 , 1432 , 1434 , 1436 , 1438 , 1440 , 1442 , 1444 , 1446 , 1448 , 1450 ,
1452 , 1454 , 1456 , 1458 , 1460 , 1462 , 1464 , 1466 , 1468 , 1470 , 1472 ,
1474 , 1476 , 1478 , 1480 , 1482 , 1484 , 1486 , 1488 , 1490 , 1492 , 1494 ,
1496 , 1498 , 1500 , 1502 , 1504 , 1506 , 1508 , 1510 , 1512 , 1514 , 1516 ,
1518 , 1520 , 1522 , 1524 , 1526 , 1528 , 1530 , 1532 , 1534 , 1536 , 1538 ,
1540 , 1542 , 1544 , 1546 , 1548 , 1550 , 1552 , 1554 , 1556 , 1558 , 1560 ,
1562 , 1564 , 1566 , 1568 , 1570 , 1572 , 1574 , 1576 , 1578 , 1580 , 1582 ,
1584 , 1586 , 1588 , 1590 , 1592 , 1594 , 1596 , 1598 , 1600 , 1602 , 1604 ,
1606 , 1608 , 1610 , 1612 , 1614 , 1616 , 1618 , 1620 , 1622 , 1624 , 1626 ,
1628 , 1630 , 1632 , 1634 , 1636 , 1638 , 1640 , 1642 , 1644 , 1646 , 1648 ,
1650 , 1652 , 1654 , 1656 , 1658 , 1660 , 1662 , 1664 , 1666 , 1668 , 1670 ,
1672 , 1674 , 1676 , 1678 , 1680 , 1682 , 1684 , 1686 , 1688 , 1690 , 1692 ,
1694 , 1696 , 1698 , 1700 , 1702 , 1704 , 1706 , 1708 , 1710 , 1712 , 1714 ,
1716 , 1718 , 1720 , 1722 , 1724 , 1726 , 1728 , 1730 , 1732 , 1734 , 1736 ,
1738 , 1740 , 1742 , 1744 , 1746 , 1748 , 1750 , 1752 , 1754 , 1756 , 1758 ,
1760 , 1762 , 1764 , 1766 , 1768 , 1770 , 1772 , 1774 , 1776 , 1778 , 1780 ,
1782 , 1784 , 1786 , 1788 , 1790 , 1792 , 1794 , 1796 , 1798 , 1800 , 1802 ,
1804 , 1806 , 1808 , 1810 , 1812 , 1814 , 1816 , 1818 , 1820 , 1822 , 1824 ,
1826 , 1828 , 1830 , 1832 , 1834 , 1836 , 1838 , 1840 , 1842 , 1844 , 1846 ,
1848 , 1850 , 1852 , 1854 , 1856 , 1858 , 1860 , 1862 , 1864 , 1866 , 1868 ,
1870 , 1872 , 1874 , 1876 , 1878 , 1880 , 1882 , 1884 , 1886 , 1888 , 1890 ,
1892 , 1894 , 1896 , 1898 , 1900 , 1902 , 1904 , 1906 , 1908 , 1910 , 1912 ,
1914 , 1916 , 1918 , 1920 , 1922 , 1924 , 1926 , 1928 , 1930 , 1932 , 1934 ,
1936 , 1938 , 1940 , 1942 , 1944 , 1946 , 1948 , 1950 , 1952 , 1954 , 1956 ,
1958 , 1960 , 1962 , 1964 , 1966 , 1968 , 1970 , 1972 , 1974 , 1976 , 1978 ,
1980 , 1982 , 1984 , 1986 , 1988 , 1990 , 1992 , 1994 , 1996 , 1998 , 2000 ,
2002 , 2004 , 2006 , 2008 , 2010 , 2012 , 2014 , 2016 , 2018 , 2020 , 2022 ,
2024 , 2026 , 2028 , 2030 , 2032 , 2034 , 2036 , 2038 , 2040 , 2042 , 2044 ,
2046 , 1 , 3 , 5 , 7 , 9 , 11 , 13 , 15 , 17 , 19 , 21 , 23 , 25 , 27 , 29 ,
31 , 33 , 35 , 37 , 39 , 41 , 43 , 45 , 47 , 49 , 51 , 53 , 55 , 57 , 59 , 61
, 63 , 65 , 67 , 69 , 71 , 73 , 75 , 77 , 79 , 81 , 83 , 85 , 87 , 89 , 91 ,
93 , 95 , 97 , 99 , 101 , 103 , 105 , 107 , 109 , 111 , 113 , 115 , 117 , 119
, 121 , 123 , 125 , 127 , 129 , 131 , 133 , 135 , 137 , 139 , 141 , 143 , 145
, 147 , 149 , 151 , 153 , 155 , 157 , 159 , 161 , 163 , 165 , 167 , 169 , 171
, 173 , 175 , 177 , 179 , 181 , 183 , 185 , 187 , 189 , 191 , 193 , 195 , 197
, 199 , 201 , 203 , 205 , 207 , 209 , 211 , 213 , 215 , 217 , 219 , 221 , 223
, 225 , 227 , 229 , 231 , 233 , 235 , 237 , 239 , 241 , 243 , 245 , 247 , 249
, 251 , 253 , 255 , 257 , 259 , 261 , 263 , 265 , 267 , 269 , 271 , 273 , 275
, 277 , 279 , 281 , 283 , 285 , 287 , 289 , 291 , 293 , 295 , 297 , 299 , 301
, 303 , 305 , 307 , 309 , 311 , 313 , 315 , 317 , 319 , 321 , 323 , 325 , 327
, 329 , 331 , 333 , 335 , 337 , 339 , 341 , 343 , 345 , 347 , 349 , 351 , 353
, 355 , 357 , 359 , 361 , 363 , 365 , 367 , 369 , 371 , 373 , 375 , 377 , 379
, 381 , 383 , 385 , 387 , 389 , 391 , 393 , 395 , 397 , 399 , 401 , 403 , 405
, 407 , 409 , 411 , 413 , 415 , 417 , 419 , 421 , 423 , 425 , 427 , 429 , 431
, 433 , 435 , 437 , 439 , 441 , 443 , 445 , 447 , 449 , 451 , 453 , 455 , 457
, 459 , 461 , 463 , 465 , 467 , 469 , 471 , 473 , 475 , 477 , 479 , 481 , 483
, 485 , 487 , 489 , 491 , 493 , 495 , 497 , 499 , 501 , 503 , 505 , 507 , 509
, 511 , 513 , 515 , 517 , 519 , 521 , 523 , 525 , 527 , 529 , 531 , 533 , 535
, 537 , 539 , 541 , 543 , 545 , 547 , 549 , 551 , 553 , 555 , 557 , 559 , 561
, 563 , 565 , 567 , 569 , 571 , 573 , 575 , 577 , 579 , 581 , 583 , 585 , 587
, 589 , 591 , 593 , 595 , 597 , 599 , 601 , 603 , 605 , 607 , 609 , 611 , 613
, 615 , 617 , 619 , 621 , 623 , 625 , 627 , 629 , 631 , 633 , 635 , 637 , 639
, 641 , 643 , 645 , 647 , 649 , 651 , 653 , 655 , 657 , 659 , 661 , 663 , 665
, 667 , 669 , 671 , 673 , 675 , 677 , 679 , 681 , 683 , 685 , 687 , 689 , 691
, 693 , 695 , 697 , 699 , 701 , 703 , 705 , 707 , 709 , 711 , 713 , 715 , 717
, 719 , 721 , 723 , 725 , 727 , 729 , 731 , 733 , 735 , 737 , 739 , 741 , 743
, 745 , 747 , 749 , 751 , 753 , 755 , 757 , 759 , 761 , 763 , 765 , 767 , 769
, 771 , 773 , 775 , 777 , 779 , 781 , 783 , 785 , 787 , 789 , 791 , 793 , 795
, 797 , 799 , 801 , 803 , 805 , 807 , 809 , 811 , 813 , 815 , 817 , 819 , 821
, 823 , 825 , 827 , 829 , 831 , 833 , 835 , 837 , 839 , 841 , 843 , 845 , 847
, 849 , 851 , 853 , 855 , 857 , 859 , 861 , 863 , 865 , 867 , 869 , 871 , 873
, 875 , 877 , 879 , 881 , 883 , 885 , 887 , 889 , 891 , 893 , 895 , 897 , 899
, 901 , 903 , 905 , 907 , 909 , 911 , 913 , 915 , 917 , 919 , 921 , 923 , 925
, 927 , 929 , 931 , 933 , 935 , 937 , 939 , 941 , 943 , 945 , 947 , 949 , 951
, 953 , 955 , 957 , 959 , 961 , 963 , 965 , 967 , 969 , 971 , 973 , 975 , 977
, 979 , 981 , 983 , 985 , 987 , 989 , 991 , 993 , 995 , 997 , 999 , 1001 ,
1003 , 1005 , 1007 , 1009 , 1011 , 1013 , 1015 , 1017 , 1019 , 1021 , 1023 ,
1025 , 1027 , 1029 , 1031 , 1033 , 1035 , 1037 , 1039 , 1041 , 1043 , 1045 ,
1047 , 1049 , 1051 , 1053 , 1055 , 1057 , 1059 , 1061 , 1063 , 1065 , 1067 ,
1069 , 1071 , 1073 , 1075 , 1077 , 1079 , 1081 , 1083 , 1085 , 1087 , 1089 ,
1091 , 1093 , 1095 , 1097 , 1099 , 1101 , 1103 , 1105 , 1107 , 1109 , 1111 ,
1113 , 1115 , 1117 , 1119 , 1121 , 1123 , 1125 , 1127 , 1129 , 1131 , 1133 ,
1135 , 1137 , 1139 , 1141 , 1143 , 1145 , 1147 , 1149 , 1151 , 1153 , 1155 ,
1157 , 1159 , 1161 , 1163 , 1165 , 1167 , 1169 , 1171 , 1173 , 1175 , 1177 ,
1179 , 1181 , 1183 , 1185 , 1187 , 1189 , 1191 , 1193 , 1195 , 1197 , 1199 ,
1201 , 1203 , 1205 , 1207 , 1209 , 1211 , 1213 , 1215 , 1217 , 1219 , 1221 ,
1223 , 1225 , 1227 , 1229 , 1231 , 1233 , 1235 , 1237 , 1239 , 1241 , 1243 ,
1245 , 1247 , 1249 , 1251 , 1253 , 1255 , 1257 , 1259 , 1261 , 1263 , 1265 ,
1267 , 1269 , 1271 , 1273 , 1275 , 1277 , 1279 , 1281 , 1283 , 1285 , 1287 ,
1289 , 1291 , 1293 , 1295 , 1297 , 1299 , 1301 , 1303 , 1305 , 1307 , 1309 ,
1311 , 1313 , 1315 , 1317 , 1319 , 1321 , 1323 , 1325 , 1327 , 1329 , 1331 ,
1333 , 1335 , 1337 , 1339 , 1341 , 1343 , 1345 , 1347 , 1349 , 1351 , 1353 ,
1355 , 1357 , 1359 , 1361 , 1363 , 1365 , 1367 , 1369 , 1371 , 1373 , 1375 ,
1377 , 1379 , 1381 , 1383 , 1385 , 1387 , 1389 , 1391 , 1393 , 1395 , 1397 ,
1399 , 1401 , 1403 , 1405 , 1407 , 1409 , 1411 , 1413 , 1415 , 1417 , 1419 ,
1421 , 1423 , 1425 , 1427 , 1429 , 1431 , 1433 , 1435 , 1437 , 1439 , 1441 ,
1443 , 1445 , 1447 , 1449 , 1451 , 1453 , 1455 , 1457 , 1459 , 1461 , 1463 ,
1465 , 1467 , 1469 , 1471 , 1473 , 1475 , 1477 , 1479 , 1481 , 1483 , 1485 ,
1487 , 1489 , 1491 , 1493 , 1495 , 1497 , 1499 , 1501 , 1503 , 1505 , 1507 ,
1509 , 1511 , 1513 , 1515 , 1517 , 1519 , 1521 , 1523 , 1525 , 1527 , 1529 ,
1531 , 1533 , 1535 , 1537 , 1539 , 1541 , 1543 , 1545 , 1547 , 1549 , 1551 ,
1553 , 1555 , 1557 , 1559 , 1561 , 1563 , 1565 , 1567 , 1569 , 1571 , 1573 ,
1575 , 1577 , 1579 , 1581 , 1583 , 1585 , 1587 , 1589 , 1591 , 1593 , 1595 ,
1597 , 1599 , 1601 , 1603 , 1605 , 1607 , 1609 , 1611 , 1613 , 1615 , 1617 ,
1619 , 1621 , 1623 , 1625 , 1627 , 1629 , 1631 , 1633 , 1635 , 1637 , 1639 ,
1641 , 1643 , 1645 , 1647 , 1649 , 1651 , 1653 , 1655 , 1657 , 1659 , 1661 ,
1663 , 1665 , 1667 , 1669 , 1671 , 1673 , 1675 , 1677 , 1679 , 1681 , 1683 ,
1685 , 1687 , 1689 , 1691 , 1693 , 1695 , 1697 , 1699 , 1701 , 1703 , 1705 ,
1707 , 1709 , 1711 , 1713 , 1715 , 1717 , 1719 , 1721 , 1723 , 1725 , 1727 ,
1729 , 1731 , 1733 , 1735 , 1737 , 1739 , 1741 , 1743 , 1745 , 1747 , 1749 ,
1751 , 1753 , 1755 , 1757 , 1759 , 1761 , 1763 , 1765 , 1767 , 1769 , 1771 ,
1773 , 1775 , 1777 , 1779 , 1781 , 1783 , 1785 , 1787 , 1789 , 1791 , 1793 ,
1795 , 1797 , 1799 , 1801 , 1803 , 1805 , 1807 , 1809 , 1811 , 1813 , 1815 ,
1817 , 1819 , 1821 , 1823 , 1825 , 1827 , 1829 , 1831 , 1833 , 1835 , 1837 ,
1839 , 1841 , 1843 , 1845 , 1847 , 1849 , 1851 , 1853 , 1855 , 1857 , 1859 ,
1861 , 1863 , 1865 , 1867 , 1869 , 1871 , 1873 , 1875 , 1877 , 1879 , 1881 ,
1883 , 1885 , 1887 , 1889 , 1891 , 1893 , 1895 , 1897 , 1899 , 1901 , 1903 ,
1905 , 1907 , 1909 , 1911 , 1913 , 1915 , 1917 , 1919 , 1921 , 1923 , 1925 ,
1927 , 1929 , 1931 , 1933 , 1935 , 1937 , 1939 , 1941 , 1943 , 1945 , 1947 ,
1949 , 1951 , 1953 , 1955 , 1957 , 1959 , 1961 , 1963 , 1965 , 1967 , 1969 ,
1971 , 1973 , 1975 , 1977 , 1979 , 1981 , 1983 , 1985 , 1987 , 1989 , 1991 ,
1993 , 1995 , 1997 , 1999 , 2001 , 2003 , 2005 , 2007 , 2009 , 2011 , 2013 ,
2015 , 2017 , 2019 , 2021 , 2023 , 2025 , 2027 , 2029 , 2031 , 2033 , 2035 ,
2037 , 2039 , 2041 , 2043 , 2045 , 2047 } ; cint32_T * twiddleTable_k ;
int32_T sampleIndex_size [ 2 ] ; for ( i = 0 ; i < 2048 ; i ++ ) { wr = tmp [
i ] ; varargin_1 = ( int64_T ) dataIn_re [ wr + 2048 ] << 26 ; varargin_1_p =
( int64_T ) dataIn_im [ wr + 2048 ] << 26 ; x_cast = ( int64_T ) dataIn_re [
wr ] << 26 ; u_cast = ( int64_T ) dataIn_im [ wr ] << 26 ; varargin_1_e =
x_cast + varargin_1 ; varargin_1_i = u_cast + varargin_1_p ; varargin_1 =
x_cast - varargin_1 ; varargin_1_p = u_cast - varargin_1_p ; d4eqi0n2ks ( obj
, varargin_1_e , varargin_1 , varargin_1_i , varargin_1_p , 1.0 ) ; wr = (
int32_T ) ( varargin_1_e >> 26 ) ; if ( ( ( uint32_T ) wr & 134217728U ) !=
0U ) { rtB . dout_re_stage [ i << 1 ] = wr | - 134217728 ; } else { rtB .
dout_re_stage [ i << 1 ] = wr & 134217727 ; } wr = ( int32_T ) ( varargin_1
>> 26 ) ; if ( ( ( uint32_T ) wr & 134217728U ) != 0U ) { rtB . dout_re_stage
[ ( i << 1 ) + 1 ] = wr | - 134217728 ; } else { rtB . dout_re_stage [ ( i <<
1 ) + 1 ] = wr & 134217727 ; } wr = ( int32_T ) ( varargin_1_i >> 26 ) ; if (
( ( uint32_T ) wr & 134217728U ) != 0U ) { rtB . dout_im_stage [ i << 1 ] =
wr | - 134217728 ; } else { rtB . dout_im_stage [ i << 1 ] = wr & 134217727 ;
} wr = ( int32_T ) ( varargin_1_p >> 26 ) ; if ( ( ( uint32_T ) wr &
134217728U ) != 0U ) { rtB . dout_im_stage [ ( i << 1 ) + 1 ] = wr | -
134217728 ; } else { rtB . dout_im_stage [ ( i << 1 ) + 1 ] = wr & 134217727
; } } for ( i = 0 ; i < 4096 ; i ++ ) { rtB . din_re [ i ] = rtB .
dout_re_stage [ i ] ; rtB . din_im [ i ] = rtB . dout_im_stage [ i ] ;
outIndex = - 6.2831853071795862 * ( real_T ) i ; if ( outIndex == 0.0 ) { rtB
. dcv [ i ] . re = - 0.0 ; rtB . dcv [ i ] . im = 0.0 ; } else { rtB . dcv [
i ] . re = 0.0 ; rtB . dcv [ i ] . im = outIndex / 4096.0 ; } } prlcfzcxhj (
rtB . dcv ) ; for ( wr = 0 ; wr < 4096 ; wr ++ ) { outIndex = rtB . dcv [ wr
] . re * 6.7108864E+7 ; if ( muDoubleScalarAbs ( outIndex ) <
4.503599627370496E+15 ) { if ( outIndex > 0.5 ) { if ( ! ( muDoubleScalarRem
( outIndex , 2.0 ) == 0.5 ) ) { outIndex += 0.5 ; } outIndex =
muDoubleScalarFloor ( outIndex ) ; } else if ( outIndex >= - 0.5 ) { outIndex
*= 0.0 ; } else { if ( ! ( muDoubleScalarRem ( outIndex , 2.0 ) == - 0.5 ) )
{ outIndex -= 0.5 ; } outIndex = muDoubleScalarCeil ( outIndex ) ; } } if (
muDoubleScalarIsNaN ( outIndex ) || muDoubleScalarIsInf ( outIndex ) ) {
outIndex = 0.0 ; } else { outIndex = muDoubleScalarRem ( outIndex ,
2.68435456E+8 ) ; } i = ( int32_T ) muDoubleScalarFloor ( outIndex ) ;
outIndex = rtB . dcv [ wr ] . im * 6.7108864E+7 ; if ( muDoubleScalarAbs (
outIndex ) < 4.503599627370496E+15 ) { if ( outIndex > 0.5 ) { if ( ! (
muDoubleScalarRem ( outIndex , 2.0 ) == 0.5 ) ) { outIndex += 0.5 ; }
outIndex = muDoubleScalarFloor ( outIndex ) ; } else if ( outIndex >= - 0.5 )
{ outIndex *= 0.0 ; } else { if ( ! ( muDoubleScalarRem ( outIndex , 2.0 ) ==
- 0.5 ) ) { outIndex -= 0.5 ; } outIndex = muDoubleScalarCeil ( outIndex ) ;
} } if ( muDoubleScalarIsNaN ( outIndex ) || muDoubleScalarIsInf ( outIndex )
) { outIndex = 0.0 ; } else { outIndex = muDoubleScalarRem ( outIndex ,
2.68435456E+8 ) ; } twdlIndex = ( int32_T ) muDoubleScalarFloor ( outIndex )
; if ( ( ( uint32_T ) i & 134217728U ) != 0U ) { rtB . icv [ wr ] . re = i |
- 134217728 ; } else { rtB . icv [ wr ] . re = i & 134217727 ; } if ( ( (
uint32_T ) twdlIndex & 134217728U ) != 0U ) { rtB . icv [ wr ] . im =
twdlIndex | - 134217728 ; } else { rtB . icv [ wr ] . im = twdlIndex &
134217727 ; } } f3k3sm4kfg ( rtB . icv , rtB . icv1 ) ; twiddleTable [ 0 ] =
rtB . icv1 [ 0 ] ; twiddleTable [ 1 ] = rtB . icv1 [ 1024 ] ; twdlIndex = 0 ;
djfqiflzn0 ( rtB . sampleIndex_data , sampleIndex_size ) ; for ( i = 0 ; i <
2048 ; i ++ ) { csvkerezk4 ( obj , twiddleTable , ( real_T ) twdlIndex , & wr
, & wi ) ; outIndex = rtB . sampleIndex_data [ i ] ; varargin_1 = ( int64_T )
rtB . din_re [ ( int32_T ) ( ( outIndex + 1024.0 ) + 1.0 ) - 1 ] * wr - (
int64_T ) rtB . din_im [ ( int32_T ) ( ( outIndex + 1024.0 ) + 1.0 ) - 1 ] *
wi ; varargin_1_p = ( int64_T ) rtB . din_im [ ( int32_T ) ( ( outIndex +
1024.0 ) + 1.0 ) - 1 ] * wr + ( int64_T ) rtB . din_re [ ( int32_T ) ( (
outIndex + 1024.0 ) + 1.0 ) - 1 ] * wi ; x_cast = ( int64_T ) rtB . din_re [
( int32_T ) ( outIndex + 1.0 ) - 1 ] << 26 ; u_cast = ( int64_T ) rtB .
din_im [ ( int32_T ) ( outIndex + 1.0 ) - 1 ] << 26 ; varargin_1_e = x_cast +
varargin_1 ; varargin_1_i = u_cast + varargin_1_p ; varargin_1 = x_cast -
varargin_1 ; varargin_1_p = u_cast - varargin_1_p ; d4eqi0n2ks ( obj ,
varargin_1_e , varargin_1 , varargin_1_i , varargin_1_p , 2.0 ) ; wr = (
int32_T ) ( varargin_1_e >> 26 ) ; if ( ( ( uint32_T ) wr & 134217728U ) !=
0U ) { rtB . dout_re_stage [ i << 1 ] = wr | - 134217728 ; } else { rtB .
dout_re_stage [ i << 1 ] = wr & 134217727 ; } wr = ( int32_T ) ( varargin_1
>> 26 ) ; if ( ( ( uint32_T ) wr & 134217728U ) != 0U ) { rtB . dout_re_stage
[ ( i << 1 ) + 1 ] = wr | - 134217728 ; } else { rtB . dout_re_stage [ ( i <<
1 ) + 1 ] = wr & 134217727 ; } wr = ( int32_T ) ( varargin_1_i >> 26 ) ; if (
( ( uint32_T ) wr & 134217728U ) != 0U ) { rtB . dout_im_stage [ i << 1 ] =
wr | - 134217728 ; } else { rtB . dout_im_stage [ i << 1 ] = wr & 134217727 ;
} wr = ( int32_T ) ( varargin_1_p >> 26 ) ; if ( ( ( uint32_T ) wr &
134217728U ) != 0U ) { rtB . dout_im_stage [ ( i << 1 ) + 1 ] = wr | -
134217728 ; } else { rtB . dout_im_stage [ ( i << 1 ) + 1 ] = wr & 134217727
; } twdlIndex ++ ; } for ( i = 0 ; i < 4096 ; i ++ ) { rtB . din_re [ i ] =
rtB . dout_re_stage [ i ] ; rtB . din_im [ i ] = rtB . dout_im_stage [ i ] ;
outIndex = - 6.2831853071795862 * ( real_T ) i ; if ( outIndex == 0.0 ) { rtB
. dcv [ i ] . re = - 0.0 ; rtB . dcv [ i ] . im = 0.0 ; } else { rtB . dcv [
i ] . re = 0.0 ; rtB . dcv [ i ] . im = outIndex / 4096.0 ; } } prlcfzcxhj (
rtB . dcv ) ; for ( wr = 0 ; wr < 4096 ; wr ++ ) { outIndex = rtB . dcv [ wr
] . re * 6.7108864E+7 ; if ( muDoubleScalarAbs ( outIndex ) <
4.503599627370496E+15 ) { if ( outIndex > 0.5 ) { if ( ! ( muDoubleScalarRem
( outIndex , 2.0 ) == 0.5 ) ) { outIndex += 0.5 ; } outIndex =
muDoubleScalarFloor ( outIndex ) ; } else if ( outIndex >= - 0.5 ) { outIndex
*= 0.0 ; } else { if ( ! ( muDoubleScalarRem ( outIndex , 2.0 ) == - 0.5 ) )
{ outIndex -= 0.5 ; } outIndex = muDoubleScalarCeil ( outIndex ) ; } } if (
muDoubleScalarIsNaN ( outIndex ) || muDoubleScalarIsInf ( outIndex ) ) {
outIndex = 0.0 ; } else { outIndex = muDoubleScalarRem ( outIndex ,
2.68435456E+8 ) ; } i = ( int32_T ) muDoubleScalarFloor ( outIndex ) ;
outIndex = rtB . dcv [ wr ] . im * 6.7108864E+7 ; if ( muDoubleScalarAbs (
outIndex ) < 4.503599627370496E+15 ) { if ( outIndex > 0.5 ) { if ( ! (
muDoubleScalarRem ( outIndex , 2.0 ) == 0.5 ) ) { outIndex += 0.5 ; }
outIndex = muDoubleScalarFloor ( outIndex ) ; } else if ( outIndex >= - 0.5 )
{ outIndex *= 0.0 ; } else { if ( ! ( muDoubleScalarRem ( outIndex , 2.0 ) ==
- 0.5 ) ) { outIndex -= 0.5 ; } outIndex = muDoubleScalarCeil ( outIndex ) ;
} } if ( muDoubleScalarIsNaN ( outIndex ) || muDoubleScalarIsInf ( outIndex )
) { outIndex = 0.0 ; } else { outIndex = muDoubleScalarRem ( outIndex ,
2.68435456E+8 ) ; } twdlIndex = ( int32_T ) muDoubleScalarFloor ( outIndex )
; if ( ( ( uint32_T ) i & 134217728U ) != 0U ) { rtB . icv [ wr ] . re = i |
- 134217728 ; } else { rtB . icv [ wr ] . re = i & 134217727 ; } if ( ( (
uint32_T ) twdlIndex & 134217728U ) != 0U ) { rtB . icv [ wr ] . im =
twdlIndex | - 134217728 ; } else { rtB . icv [ wr ] . im = twdlIndex &
134217727 ; } } f3k3sm4kfg ( rtB . icv , rtB . icv1 ) ; twiddleTable_p [ 0 ]
= rtB . icv1 [ 0 ] ; twiddleTable_p [ 1 ] = rtB . icv1 [ 512 ] ;
twiddleTable_p [ 2 ] = rtB . icv1 [ 1024 ] ; twiddleTable_p [ 3 ] = rtB .
icv1 [ 1536 ] ; twdlIndex = 0 ; djfqiflzn0j ( rtB . sampleIndex_data ,
sampleIndex_size ) ; b = sampleIndex_size [ 1 ] - 1 ; for ( i = 0 ; i <= b ;
i ++ ) { csvkerezk4d ( obj , twiddleTable_p , ( real_T ) twdlIndex , & wr , &
wi ) ; outIndex = rtB . sampleIndex_data [ i ] ; varargin_1 = ( int64_T ) rtB
. din_re [ ( int32_T ) ( ( outIndex + 512.0 ) + 1.0 ) - 1 ] * wr - ( int64_T
) rtB . din_im [ ( int32_T ) ( ( outIndex + 512.0 ) + 1.0 ) - 1 ] * wi ;
varargin_1_p = ( int64_T ) rtB . din_im [ ( int32_T ) ( ( outIndex + 512.0 )
+ 1.0 ) - 1 ] * wr + ( int64_T ) rtB . din_re [ ( int32_T ) ( ( outIndex +
512.0 ) + 1.0 ) - 1 ] * wi ; x_cast = ( int64_T ) rtB . din_re [ ( int32_T )
( outIndex + 1.0 ) - 1 ] << 26 ; u_cast = ( int64_T ) rtB . din_im [ (
int32_T ) ( outIndex + 1.0 ) - 1 ] << 26 ; varargin_1_e = x_cast + varargin_1
; varargin_1_i = u_cast + varargin_1_p ; varargin_1 = x_cast - varargin_1 ;
varargin_1_p = u_cast - varargin_1_p ; d4eqi0n2ks ( obj , varargin_1_e ,
varargin_1 , varargin_1_i , varargin_1_p , 3.0 ) ; wr = ( int32_T ) (
varargin_1_e >> 26 ) ; if ( ( ( uint32_T ) wr & 134217728U ) != 0U ) { rtB .
dout_re_stage [ i << 1 ] = wr | - 134217728 ; } else { rtB . dout_re_stage [
i << 1 ] = wr & 134217727 ; } wr = ( int32_T ) ( varargin_1 >> 26 ) ; if ( (
( uint32_T ) wr & 134217728U ) != 0U ) { rtB . dout_re_stage [ ( i << 1 ) + 1
] = wr | - 134217728 ; } else { rtB . dout_re_stage [ ( i << 1 ) + 1 ] = wr &
134217727 ; } wr = ( int32_T ) ( varargin_1_i >> 26 ) ; if ( ( ( uint32_T )
wr & 134217728U ) != 0U ) { rtB . dout_im_stage [ i << 1 ] = wr | - 134217728
; } else { rtB . dout_im_stage [ i << 1 ] = wr & 134217727 ; } wr = ( int32_T
) ( varargin_1_p >> 26 ) ; if ( ( ( uint32_T ) wr & 134217728U ) != 0U ) {
rtB . dout_im_stage [ ( i << 1 ) + 1 ] = wr | - 134217728 ; } else { rtB .
dout_im_stage [ ( i << 1 ) + 1 ] = wr & 134217727 ; } twdlIndex ++ ; } for (
i = 0 ; i < 4096 ; i ++ ) { rtB . din_re [ i ] = rtB . dout_re_stage [ i ] ;
rtB . din_im [ i ] = rtB . dout_im_stage [ i ] ; outIndex = -
6.2831853071795862 * ( real_T ) i ; if ( outIndex == 0.0 ) { rtB . dcv [ i ]
. re = - 0.0 ; rtB . dcv [ i ] . im = 0.0 ; } else { rtB . dcv [ i ] . re =
0.0 ; rtB . dcv [ i ] . im = outIndex / 4096.0 ; } } prlcfzcxhj ( rtB . dcv )
; for ( wr = 0 ; wr < 4096 ; wr ++ ) { outIndex = rtB . dcv [ wr ] . re *
6.7108864E+7 ; if ( muDoubleScalarAbs ( outIndex ) < 4.503599627370496E+15 )
{ if ( outIndex > 0.5 ) { if ( ! ( muDoubleScalarRem ( outIndex , 2.0 ) ==
0.5 ) ) { outIndex += 0.5 ; } outIndex = muDoubleScalarFloor ( outIndex ) ; }
else if ( outIndex >= - 0.5 ) { outIndex *= 0.0 ; } else { if ( ! (
muDoubleScalarRem ( outIndex , 2.0 ) == - 0.5 ) ) { outIndex -= 0.5 ; }
outIndex = muDoubleScalarCeil ( outIndex ) ; } } if ( muDoubleScalarIsNaN (
outIndex ) || muDoubleScalarIsInf ( outIndex ) ) { outIndex = 0.0 ; } else {
outIndex = muDoubleScalarRem ( outIndex , 2.68435456E+8 ) ; } i = ( int32_T )
muDoubleScalarFloor ( outIndex ) ; outIndex = rtB . dcv [ wr ] . im *
6.7108864E+7 ; if ( muDoubleScalarAbs ( outIndex ) < 4.503599627370496E+15 )
{ if ( outIndex > 0.5 ) { if ( ! ( muDoubleScalarRem ( outIndex , 2.0 ) ==
0.5 ) ) { outIndex += 0.5 ; } outIndex = muDoubleScalarFloor ( outIndex ) ; }
else if ( outIndex >= - 0.5 ) { outIndex *= 0.0 ; } else { if ( ! (
muDoubleScalarRem ( outIndex , 2.0 ) == - 0.5 ) ) { outIndex -= 0.5 ; }
outIndex = muDoubleScalarCeil ( outIndex ) ; } } if ( muDoubleScalarIsNaN (
outIndex ) || muDoubleScalarIsInf ( outIndex ) ) { outIndex = 0.0 ; } else {
outIndex = muDoubleScalarRem ( outIndex , 2.68435456E+8 ) ; } twdlIndex = (
int32_T ) muDoubleScalarFloor ( outIndex ) ; if ( ( ( uint32_T ) i &
134217728U ) != 0U ) { rtB . icv [ wr ] . re = i | - 134217728 ; } else { rtB
. icv [ wr ] . re = i & 134217727 ; } if ( ( ( uint32_T ) twdlIndex &
134217728U ) != 0U ) { rtB . icv [ wr ] . im = twdlIndex | - 134217728 ; }
else { rtB . icv [ wr ] . im = twdlIndex & 134217727 ; } } f3k3sm4kfg ( rtB .
icv , rtB . icv1 ) ; for ( wr = 0 ; wr < 8 ; wr ++ ) { twiddleTable_e [ wr ]
= rtB . icv1 [ wr << 8 ] ; } twdlIndex = 0 ; djfqiflzn0jp ( rtB .
sampleIndex_data , sampleIndex_size ) ; b = sampleIndex_size [ 1 ] - 1 ; for
( i = 0 ; i <= b ; i ++ ) { csvkerezk4d4 ( obj , twiddleTable_e , ( real_T )
twdlIndex , & wr , & wi ) ; outIndex = rtB . sampleIndex_data [ i ] ;
varargin_1 = ( int64_T ) rtB . din_re [ ( int32_T ) ( ( outIndex + 256.0 ) +
1.0 ) - 1 ] * wr - ( int64_T ) rtB . din_im [ ( int32_T ) ( ( outIndex +
256.0 ) + 1.0 ) - 1 ] * wi ; varargin_1_p = ( int64_T ) rtB . din_im [ (
int32_T ) ( ( outIndex + 256.0 ) + 1.0 ) - 1 ] * wr + ( int64_T ) rtB .
din_re [ ( int32_T ) ( ( outIndex + 256.0 ) + 1.0 ) - 1 ] * wi ; x_cast = (
int64_T ) rtB . din_re [ ( int32_T ) ( outIndex + 1.0 ) - 1 ] << 26 ; u_cast
= ( int64_T ) rtB . din_im [ ( int32_T ) ( outIndex + 1.0 ) - 1 ] << 26 ;
varargin_1_e = x_cast + varargin_1 ; varargin_1_i = u_cast + varargin_1_p ;
varargin_1 = x_cast - varargin_1 ; varargin_1_p = u_cast - varargin_1_p ;
d4eqi0n2ks ( obj , varargin_1_e , varargin_1 , varargin_1_i , varargin_1_p ,
4.0 ) ; wr = ( int32_T ) ( varargin_1_e >> 26 ) ; if ( ( ( uint32_T ) wr &
134217728U ) != 0U ) { rtB . dout_re_stage [ i << 1 ] = wr | - 134217728 ; }
else { rtB . dout_re_stage [ i << 1 ] = wr & 134217727 ; } wr = ( int32_T ) (
varargin_1 >> 26 ) ; if ( ( ( uint32_T ) wr & 134217728U ) != 0U ) { rtB .
dout_re_stage [ ( i << 1 ) + 1 ] = wr | - 134217728 ; } else { rtB .
dout_re_stage [ ( i << 1 ) + 1 ] = wr & 134217727 ; } wr = ( int32_T ) (
varargin_1_i >> 26 ) ; if ( ( ( uint32_T ) wr & 134217728U ) != 0U ) { rtB .
dout_im_stage [ i << 1 ] = wr | - 134217728 ; } else { rtB . dout_im_stage [
i << 1 ] = wr & 134217727 ; } wr = ( int32_T ) ( varargin_1_p >> 26 ) ; if (
( ( uint32_T ) wr & 134217728U ) != 0U ) { rtB . dout_im_stage [ ( i << 1 ) +
1 ] = wr | - 134217728 ; } else { rtB . dout_im_stage [ ( i << 1 ) + 1 ] = wr
& 134217727 ; } twdlIndex ++ ; } for ( i = 0 ; i < 4096 ; i ++ ) { rtB .
din_re [ i ] = rtB . dout_re_stage [ i ] ; rtB . din_im [ i ] = rtB .
dout_im_stage [ i ] ; outIndex = - 6.2831853071795862 * ( real_T ) i ; if (
outIndex == 0.0 ) { rtB . dcv [ i ] . re = - 0.0 ; rtB . dcv [ i ] . im = 0.0
; } else { rtB . dcv [ i ] . re = 0.0 ; rtB . dcv [ i ] . im = outIndex /
4096.0 ; } } prlcfzcxhj ( rtB . dcv ) ; for ( wr = 0 ; wr < 4096 ; wr ++ ) {
outIndex = rtB . dcv [ wr ] . re * 6.7108864E+7 ; if ( muDoubleScalarAbs (
outIndex ) < 4.503599627370496E+15 ) { if ( outIndex > 0.5 ) { if ( ! (
muDoubleScalarRem ( outIndex , 2.0 ) == 0.5 ) ) { outIndex += 0.5 ; }
outIndex = muDoubleScalarFloor ( outIndex ) ; } else if ( outIndex >= - 0.5 )
{ outIndex *= 0.0 ; } else { if ( ! ( muDoubleScalarRem ( outIndex , 2.0 ) ==
- 0.5 ) ) { outIndex -= 0.5 ; } outIndex = muDoubleScalarCeil ( outIndex ) ;
} } if ( muDoubleScalarIsNaN ( outIndex ) || muDoubleScalarIsInf ( outIndex )
) { outIndex = 0.0 ; } else { outIndex = muDoubleScalarRem ( outIndex ,
2.68435456E+8 ) ; } i = ( int32_T ) muDoubleScalarFloor ( outIndex ) ;
outIndex = rtB . dcv [ wr ] . im * 6.7108864E+7 ; if ( muDoubleScalarAbs (
outIndex ) < 4.503599627370496E+15 ) { if ( outIndex > 0.5 ) { if ( ! (
muDoubleScalarRem ( outIndex , 2.0 ) == 0.5 ) ) { outIndex += 0.5 ; }
outIndex = muDoubleScalarFloor ( outIndex ) ; } else if ( outIndex >= - 0.5 )
{ outIndex *= 0.0 ; } else { if ( ! ( muDoubleScalarRem ( outIndex , 2.0 ) ==
- 0.5 ) ) { outIndex -= 0.5 ; } outIndex = muDoubleScalarCeil ( outIndex ) ;
} } if ( muDoubleScalarIsNaN ( outIndex ) || muDoubleScalarIsInf ( outIndex )
) { outIndex = 0.0 ; } else { outIndex = muDoubleScalarRem ( outIndex ,
2.68435456E+8 ) ; } twdlIndex = ( int32_T ) muDoubleScalarFloor ( outIndex )
; if ( ( ( uint32_T ) i & 134217728U ) != 0U ) { rtB . icv [ wr ] . re = i |
- 134217728 ; } else { rtB . icv [ wr ] . re = i & 134217727 ; } if ( ( (
uint32_T ) twdlIndex & 134217728U ) != 0U ) { rtB . icv [ wr ] . im =
twdlIndex | - 134217728 ; } else { rtB . icv [ wr ] . im = twdlIndex &
134217727 ; } } f3k3sm4kfg ( rtB . icv , rtB . icv1 ) ; for ( wr = 0 ; wr <
16 ; wr ++ ) { twiddleTable_i [ wr ] = rtB . icv1 [ wr << 7 ] ; } twdlIndex =
0 ; djfqiflzn0jpf ( rtB . sampleIndex_data , sampleIndex_size ) ; b =
sampleIndex_size [ 1 ] - 1 ; for ( i = 0 ; i <= b ; i ++ ) { csvkerezk4d4v (
obj , twiddleTable_i , ( real_T ) twdlIndex , & wr , & wi ) ; outIndex = rtB
. sampleIndex_data [ i ] ; varargin_1 = ( int64_T ) rtB . din_re [ ( int32_T
) ( ( outIndex + 128.0 ) + 1.0 ) - 1 ] * wr - ( int64_T ) rtB . din_im [ (
int32_T ) ( ( outIndex + 128.0 ) + 1.0 ) - 1 ] * wi ; varargin_1_p = (
int64_T ) rtB . din_im [ ( int32_T ) ( ( outIndex + 128.0 ) + 1.0 ) - 1 ] *
wr + ( int64_T ) rtB . din_re [ ( int32_T ) ( ( outIndex + 128.0 ) + 1.0 ) -
1 ] * wi ; x_cast = ( int64_T ) rtB . din_re [ ( int32_T ) ( outIndex + 1.0 )
- 1 ] << 26 ; u_cast = ( int64_T ) rtB . din_im [ ( int32_T ) ( outIndex +
1.0 ) - 1 ] << 26 ; varargin_1_e = x_cast + varargin_1 ; varargin_1_i =
u_cast + varargin_1_p ; varargin_1 = x_cast - varargin_1 ; varargin_1_p =
u_cast - varargin_1_p ; d4eqi0n2ks ( obj , varargin_1_e , varargin_1 ,
varargin_1_i , varargin_1_p , 5.0 ) ; wr = ( int32_T ) ( varargin_1_e >> 26 )
; if ( ( ( uint32_T ) wr & 134217728U ) != 0U ) { rtB . dout_re_stage [ i <<
1 ] = wr | - 134217728 ; } else { rtB . dout_re_stage [ i << 1 ] = wr &
134217727 ; } wr = ( int32_T ) ( varargin_1 >> 26 ) ; if ( ( ( uint32_T ) wr
& 134217728U ) != 0U ) { rtB . dout_re_stage [ ( i << 1 ) + 1 ] = wr | -
134217728 ; } else { rtB . dout_re_stage [ ( i << 1 ) + 1 ] = wr & 134217727
; } wr = ( int32_T ) ( varargin_1_i >> 26 ) ; if ( ( ( uint32_T ) wr &
134217728U ) != 0U ) { rtB . dout_im_stage [ i << 1 ] = wr | - 134217728 ; }
else { rtB . dout_im_stage [ i << 1 ] = wr & 134217727 ; } wr = ( int32_T ) (
varargin_1_p >> 26 ) ; if ( ( ( uint32_T ) wr & 134217728U ) != 0U ) { rtB .
dout_im_stage [ ( i << 1 ) + 1 ] = wr | - 134217728 ; } else { rtB .
dout_im_stage [ ( i << 1 ) + 1 ] = wr & 134217727 ; } twdlIndex ++ ; } for (
i = 0 ; i < 4096 ; i ++ ) { rtB . din_re [ i ] = rtB . dout_re_stage [ i ] ;
rtB . din_im [ i ] = rtB . dout_im_stage [ i ] ; outIndex = -
6.2831853071795862 * ( real_T ) i ; if ( outIndex == 0.0 ) { rtB . dcv [ i ]
. re = - 0.0 ; rtB . dcv [ i ] . im = 0.0 ; } else { rtB . dcv [ i ] . re =
0.0 ; rtB . dcv [ i ] . im = outIndex / 4096.0 ; } } prlcfzcxhj ( rtB . dcv )
; for ( wr = 0 ; wr < 4096 ; wr ++ ) { outIndex = rtB . dcv [ wr ] . re *
6.7108864E+7 ; if ( muDoubleScalarAbs ( outIndex ) < 4.503599627370496E+15 )
{ if ( outIndex > 0.5 ) { if ( ! ( muDoubleScalarRem ( outIndex , 2.0 ) ==
0.5 ) ) { outIndex += 0.5 ; } outIndex = muDoubleScalarFloor ( outIndex ) ; }
else if ( outIndex >= - 0.5 ) { outIndex *= 0.0 ; } else { if ( ! (
muDoubleScalarRem ( outIndex , 2.0 ) == - 0.5 ) ) { outIndex -= 0.5 ; }
outIndex = muDoubleScalarCeil ( outIndex ) ; } } if ( muDoubleScalarIsNaN (
outIndex ) || muDoubleScalarIsInf ( outIndex ) ) { outIndex = 0.0 ; } else {
outIndex = muDoubleScalarRem ( outIndex , 2.68435456E+8 ) ; } i = ( int32_T )
muDoubleScalarFloor ( outIndex ) ; outIndex = rtB . dcv [ wr ] . im *
6.7108864E+7 ; if ( muDoubleScalarAbs ( outIndex ) < 4.503599627370496E+15 )
{ if ( outIndex > 0.5 ) { if ( ! ( muDoubleScalarRem ( outIndex , 2.0 ) ==
0.5 ) ) { outIndex += 0.5 ; } outIndex = muDoubleScalarFloor ( outIndex ) ; }
else if ( outIndex >= - 0.5 ) { outIndex *= 0.0 ; } else { if ( ! (
muDoubleScalarRem ( outIndex , 2.0 ) == - 0.5 ) ) { outIndex -= 0.5 ; }
outIndex = muDoubleScalarCeil ( outIndex ) ; } } if ( muDoubleScalarIsNaN (
outIndex ) || muDoubleScalarIsInf ( outIndex ) ) { outIndex = 0.0 ; } else {
outIndex = muDoubleScalarRem ( outIndex , 2.68435456E+8 ) ; } twdlIndex = (
int32_T ) muDoubleScalarFloor ( outIndex ) ; if ( ( ( uint32_T ) i &
134217728U ) != 0U ) { rtB . icv [ wr ] . re = i | - 134217728 ; } else { rtB
. icv [ wr ] . re = i & 134217727 ; } if ( ( ( uint32_T ) twdlIndex &
134217728U ) != 0U ) { rtB . icv [ wr ] . im = twdlIndex | - 134217728 ; }
else { rtB . icv [ wr ] . im = twdlIndex & 134217727 ; } } f3k3sm4kfg ( rtB .
icv , rtB . icv1 ) ; for ( wr = 0 ; wr < 32 ; wr ++ ) { twiddleTable_m [ wr ]
= rtB . icv1 [ wr << 6 ] ; } twdlIndex = 0 ; djfqiflzn0jpf2 ( rtB .
sampleIndex_data , sampleIndex_size ) ; b = sampleIndex_size [ 1 ] - 1 ; for
( i = 0 ; i <= b ; i ++ ) { csvkerezk4d4vh ( obj , twiddleTable_m , ( real_T
) twdlIndex , & wr , & wi ) ; outIndex = rtB . sampleIndex_data [ i ] ;
varargin_1 = ( int64_T ) rtB . din_re [ ( int32_T ) ( ( outIndex + 64.0 ) +
1.0 ) - 1 ] * wr - ( int64_T ) rtB . din_im [ ( int32_T ) ( ( outIndex + 64.0
) + 1.0 ) - 1 ] * wi ; varargin_1_p = ( int64_T ) rtB . din_im [ ( int32_T )
( ( outIndex + 64.0 ) + 1.0 ) - 1 ] * wr + ( int64_T ) rtB . din_re [ (
int32_T ) ( ( outIndex + 64.0 ) + 1.0 ) - 1 ] * wi ; x_cast = ( int64_T ) rtB
. din_re [ ( int32_T ) ( outIndex + 1.0 ) - 1 ] << 26 ; u_cast = ( int64_T )
rtB . din_im [ ( int32_T ) ( outIndex + 1.0 ) - 1 ] << 26 ; varargin_1_e =
x_cast + varargin_1 ; varargin_1_i = u_cast + varargin_1_p ; varargin_1 =
x_cast - varargin_1 ; varargin_1_p = u_cast - varargin_1_p ; d4eqi0n2ks ( obj
, varargin_1_e , varargin_1 , varargin_1_i , varargin_1_p , 6.0 ) ; wr = (
int32_T ) ( varargin_1_e >> 26 ) ; if ( ( ( uint32_T ) wr & 134217728U ) !=
0U ) { rtB . dout_re_stage [ i << 1 ] = wr | - 134217728 ; } else { rtB .
dout_re_stage [ i << 1 ] = wr & 134217727 ; } wr = ( int32_T ) ( varargin_1
>> 26 ) ; if ( ( ( uint32_T ) wr & 134217728U ) != 0U ) { rtB . dout_re_stage
[ ( i << 1 ) + 1 ] = wr | - 134217728 ; } else { rtB . dout_re_stage [ ( i <<
1 ) + 1 ] = wr & 134217727 ; } wr = ( int32_T ) ( varargin_1_i >> 26 ) ; if (
( ( uint32_T ) wr & 134217728U ) != 0U ) { rtB . dout_im_stage [ i << 1 ] =
wr | - 134217728 ; } else { rtB . dout_im_stage [ i << 1 ] = wr & 134217727 ;
} wr = ( int32_T ) ( varargin_1_p >> 26 ) ; if ( ( ( uint32_T ) wr &
134217728U ) != 0U ) { rtB . dout_im_stage [ ( i << 1 ) + 1 ] = wr | -
134217728 ; } else { rtB . dout_im_stage [ ( i << 1 ) + 1 ] = wr & 134217727
; } twdlIndex ++ ; } for ( i = 0 ; i < 4096 ; i ++ ) { rtB . din_re [ i ] =
rtB . dout_re_stage [ i ] ; rtB . din_im [ i ] = rtB . dout_im_stage [ i ] ;
outIndex = - 6.2831853071795862 * ( real_T ) i ; if ( outIndex == 0.0 ) { rtB
. dcv [ i ] . re = - 0.0 ; rtB . dcv [ i ] . im = 0.0 ; } else { rtB . dcv [
i ] . re = 0.0 ; rtB . dcv [ i ] . im = outIndex / 4096.0 ; } } prlcfzcxhj (
rtB . dcv ) ; for ( wr = 0 ; wr < 4096 ; wr ++ ) { outIndex = rtB . dcv [ wr
] . re * 6.7108864E+7 ; if ( muDoubleScalarAbs ( outIndex ) <
4.503599627370496E+15 ) { if ( outIndex > 0.5 ) { if ( ! ( muDoubleScalarRem
( outIndex , 2.0 ) == 0.5 ) ) { outIndex += 0.5 ; } outIndex =
muDoubleScalarFloor ( outIndex ) ; } else if ( outIndex >= - 0.5 ) { outIndex
*= 0.0 ; } else { if ( ! ( muDoubleScalarRem ( outIndex , 2.0 ) == - 0.5 ) )
{ outIndex -= 0.5 ; } outIndex = muDoubleScalarCeil ( outIndex ) ; } } if (
muDoubleScalarIsNaN ( outIndex ) || muDoubleScalarIsInf ( outIndex ) ) {
outIndex = 0.0 ; } else { outIndex = muDoubleScalarRem ( outIndex ,
2.68435456E+8 ) ; } i = ( int32_T ) muDoubleScalarFloor ( outIndex ) ;
outIndex = rtB . dcv [ wr ] . im * 6.7108864E+7 ; if ( muDoubleScalarAbs (
outIndex ) < 4.503599627370496E+15 ) { if ( outIndex > 0.5 ) { if ( ! (
muDoubleScalarRem ( outIndex , 2.0 ) == 0.5 ) ) { outIndex += 0.5 ; }
outIndex = muDoubleScalarFloor ( outIndex ) ; } else if ( outIndex >= - 0.5 )
{ outIndex *= 0.0 ; } else { if ( ! ( muDoubleScalarRem ( outIndex , 2.0 ) ==
- 0.5 ) ) { outIndex -= 0.5 ; } outIndex = muDoubleScalarCeil ( outIndex ) ;
} } if ( muDoubleScalarIsNaN ( outIndex ) || muDoubleScalarIsInf ( outIndex )
) { outIndex = 0.0 ; } else { outIndex = muDoubleScalarRem ( outIndex ,
2.68435456E+8 ) ; } twdlIndex = ( int32_T ) muDoubleScalarFloor ( outIndex )
; if ( ( ( uint32_T ) i & 134217728U ) != 0U ) { rtB . icv [ wr ] . re = i |
- 134217728 ; } else { rtB . icv [ wr ] . re = i & 134217727 ; } if ( ( (
uint32_T ) twdlIndex & 134217728U ) != 0U ) { rtB . icv [ wr ] . im =
twdlIndex | - 134217728 ; } else { rtB . icv [ wr ] . im = twdlIndex &
134217727 ; } } f3k3sm4kfg ( rtB . icv , rtB . icv1 ) ; for ( wr = 0 ; wr <
64 ; wr ++ ) { twiddleTable_g [ wr ] = rtB . icv1 [ wr << 5 ] ; } twdlIndex =
0 ; djfqiflzn0jpf2e ( rtB . sampleIndex_data , sampleIndex_size ) ; b =
sampleIndex_size [ 1 ] - 1 ; for ( i = 0 ; i <= b ; i ++ ) { csvkerezk4d4vhp
( obj , twiddleTable_g , ( real_T ) twdlIndex , & wr , & wi ) ; outIndex =
rtB . sampleIndex_data [ i ] ; varargin_1 = ( int64_T ) rtB . din_re [ (
int32_T ) ( ( outIndex + 32.0 ) + 1.0 ) - 1 ] * wr - ( int64_T ) rtB . din_im
[ ( int32_T ) ( ( outIndex + 32.0 ) + 1.0 ) - 1 ] * wi ; varargin_1_p = (
int64_T ) rtB . din_im [ ( int32_T ) ( ( outIndex + 32.0 ) + 1.0 ) - 1 ] * wr
+ ( int64_T ) rtB . din_re [ ( int32_T ) ( ( outIndex + 32.0 ) + 1.0 ) - 1 ]
* wi ; x_cast = ( int64_T ) rtB . din_re [ ( int32_T ) ( outIndex + 1.0 ) - 1
] << 26 ; u_cast = ( int64_T ) rtB . din_im [ ( int32_T ) ( outIndex + 1.0 )
- 1 ] << 26 ; varargin_1_e = x_cast + varargin_1 ; varargin_1_i = u_cast +
varargin_1_p ; varargin_1 = x_cast - varargin_1 ; varargin_1_p = u_cast -
varargin_1_p ; d4eqi0n2ks ( obj , varargin_1_e , varargin_1 , varargin_1_i ,
varargin_1_p , 7.0 ) ; wr = ( int32_T ) ( varargin_1_e >> 26 ) ; if ( ( (
uint32_T ) wr & 134217728U ) != 0U ) { rtB . dout_re_stage [ i << 1 ] = wr |
- 134217728 ; } else { rtB . dout_re_stage [ i << 1 ] = wr & 134217727 ; } wr
= ( int32_T ) ( varargin_1 >> 26 ) ; if ( ( ( uint32_T ) wr & 134217728U ) !=
0U ) { rtB . dout_re_stage [ ( i << 1 ) + 1 ] = wr | - 134217728 ; } else {
rtB . dout_re_stage [ ( i << 1 ) + 1 ] = wr & 134217727 ; } wr = ( int32_T )
( varargin_1_i >> 26 ) ; if ( ( ( uint32_T ) wr & 134217728U ) != 0U ) { rtB
. dout_im_stage [ i << 1 ] = wr | - 134217728 ; } else { rtB . dout_im_stage
[ i << 1 ] = wr & 134217727 ; } wr = ( int32_T ) ( varargin_1_p >> 26 ) ; if
( ( ( uint32_T ) wr & 134217728U ) != 0U ) { rtB . dout_im_stage [ ( i << 1 )
+ 1 ] = wr | - 134217728 ; } else { rtB . dout_im_stage [ ( i << 1 ) + 1 ] =
wr & 134217727 ; } twdlIndex ++ ; } for ( i = 0 ; i < 4096 ; i ++ ) { rtB .
din_re [ i ] = rtB . dout_re_stage [ i ] ; rtB . din_im [ i ] = rtB .
dout_im_stage [ i ] ; outIndex = - 6.2831853071795862 * ( real_T ) i ; if (
outIndex == 0.0 ) { rtB . dcv [ i ] . re = - 0.0 ; rtB . dcv [ i ] . im = 0.0
; } else { rtB . dcv [ i ] . re = 0.0 ; rtB . dcv [ i ] . im = outIndex /
4096.0 ; } } prlcfzcxhj ( rtB . dcv ) ; for ( wr = 0 ; wr < 4096 ; wr ++ ) {
outIndex = rtB . dcv [ wr ] . re * 6.7108864E+7 ; if ( muDoubleScalarAbs (
outIndex ) < 4.503599627370496E+15 ) { if ( outIndex > 0.5 ) { if ( ! (
muDoubleScalarRem ( outIndex , 2.0 ) == 0.5 ) ) { outIndex += 0.5 ; }
outIndex = muDoubleScalarFloor ( outIndex ) ; } else if ( outIndex >= - 0.5 )
{ outIndex *= 0.0 ; } else { if ( ! ( muDoubleScalarRem ( outIndex , 2.0 ) ==
- 0.5 ) ) { outIndex -= 0.5 ; } outIndex = muDoubleScalarCeil ( outIndex ) ;
} } if ( muDoubleScalarIsNaN ( outIndex ) || muDoubleScalarIsInf ( outIndex )
) { outIndex = 0.0 ; } else { outIndex = muDoubleScalarRem ( outIndex ,
2.68435456E+8 ) ; } i = ( int32_T ) muDoubleScalarFloor ( outIndex ) ;
outIndex = rtB . dcv [ wr ] . im * 6.7108864E+7 ; if ( muDoubleScalarAbs (
outIndex ) < 4.503599627370496E+15 ) { if ( outIndex > 0.5 ) { if ( ! (
muDoubleScalarRem ( outIndex , 2.0 ) == 0.5 ) ) { outIndex += 0.5 ; }
outIndex = muDoubleScalarFloor ( outIndex ) ; } else if ( outIndex >= - 0.5 )
{ outIndex *= 0.0 ; } else { if ( ! ( muDoubleScalarRem ( outIndex , 2.0 ) ==
- 0.5 ) ) { outIndex -= 0.5 ; } outIndex = muDoubleScalarCeil ( outIndex ) ;
} } if ( muDoubleScalarIsNaN ( outIndex ) || muDoubleScalarIsInf ( outIndex )
) { outIndex = 0.0 ; } else { outIndex = muDoubleScalarRem ( outIndex ,
2.68435456E+8 ) ; } twdlIndex = ( int32_T ) muDoubleScalarFloor ( outIndex )
; if ( ( ( uint32_T ) i & 134217728U ) != 0U ) { rtB . icv [ wr ] . re = i |
- 134217728 ; } else { rtB . icv [ wr ] . re = i & 134217727 ; } if ( ( (
uint32_T ) twdlIndex & 134217728U ) != 0U ) { rtB . icv [ wr ] . im =
twdlIndex | - 134217728 ; } else { rtB . icv [ wr ] . im = twdlIndex &
134217727 ; } } f3k3sm4kfg ( rtB . icv , rtB . icv1 ) ; for ( wr = 0 ; wr <
128 ; wr ++ ) { twiddleTable_j [ wr ] = rtB . icv1 [ wr << 4 ] ; } twdlIndex
= 0 ; ddbkoo3nbt ( rtB . sampleIndex_data , sampleIndex_size ) ; b =
sampleIndex_size [ 1 ] - 1 ; for ( i = 0 ; i <= b ; i ++ ) { n435m4bqg5 ( obj
, twiddleTable_j , ( real_T ) twdlIndex , & wr , & wi ) ; outIndex = rtB .
sampleIndex_data [ i ] ; varargin_1 = ( int64_T ) rtB . din_re [ ( int32_T )
( ( outIndex + 16.0 ) + 1.0 ) - 1 ] * wr - ( int64_T ) rtB . din_im [ (
int32_T ) ( ( outIndex + 16.0 ) + 1.0 ) - 1 ] * wi ; varargin_1_p = ( int64_T
) rtB . din_im [ ( int32_T ) ( ( outIndex + 16.0 ) + 1.0 ) - 1 ] * wr + (
int64_T ) rtB . din_re [ ( int32_T ) ( ( outIndex + 16.0 ) + 1.0 ) - 1 ] * wi
; x_cast = ( int64_T ) rtB . din_re [ ( int32_T ) ( outIndex + 1.0 ) - 1 ] <<
26 ; u_cast = ( int64_T ) rtB . din_im [ ( int32_T ) ( outIndex + 1.0 ) - 1 ]
<< 26 ; varargin_1_e = x_cast + varargin_1 ; varargin_1_i = u_cast +
varargin_1_p ; varargin_1 = x_cast - varargin_1 ; varargin_1_p = u_cast -
varargin_1_p ; d4eqi0n2ks ( obj , varargin_1_e , varargin_1 , varargin_1_i ,
varargin_1_p , 8.0 ) ; wr = ( int32_T ) ( varargin_1_e >> 26 ) ; if ( ( (
uint32_T ) wr & 134217728U ) != 0U ) { rtB . dout_re_stage [ i << 1 ] = wr |
- 134217728 ; } else { rtB . dout_re_stage [ i << 1 ] = wr & 134217727 ; } wr
= ( int32_T ) ( varargin_1 >> 26 ) ; if ( ( ( uint32_T ) wr & 134217728U ) !=
0U ) { rtB . dout_re_stage [ ( i << 1 ) + 1 ] = wr | - 134217728 ; } else {
rtB . dout_re_stage [ ( i << 1 ) + 1 ] = wr & 134217727 ; } wr = ( int32_T )
( varargin_1_i >> 26 ) ; if ( ( ( uint32_T ) wr & 134217728U ) != 0U ) { rtB
. dout_im_stage [ i << 1 ] = wr | - 134217728 ; } else { rtB . dout_im_stage
[ i << 1 ] = wr & 134217727 ; } wr = ( int32_T ) ( varargin_1_p >> 26 ) ; if
( ( ( uint32_T ) wr & 134217728U ) != 0U ) { rtB . dout_im_stage [ ( i << 1 )
+ 1 ] = wr | - 134217728 ; } else { rtB . dout_im_stage [ ( i << 1 ) + 1 ] =
wr & 134217727 ; } twdlIndex ++ ; } for ( i = 0 ; i < 4096 ; i ++ ) { rtB .
din_re [ i ] = rtB . dout_re_stage [ i ] ; rtB . din_im [ i ] = rtB .
dout_im_stage [ i ] ; outIndex = - 6.2831853071795862 * ( real_T ) i ; if (
outIndex == 0.0 ) { rtB . dcv [ i ] . re = - 0.0 ; rtB . dcv [ i ] . im = 0.0
; } else { rtB . dcv [ i ] . re = 0.0 ; rtB . dcv [ i ] . im = outIndex /
4096.0 ; } } prlcfzcxhj ( rtB . dcv ) ; for ( wr = 0 ; wr < 4096 ; wr ++ ) {
outIndex = rtB . dcv [ wr ] . re * 6.7108864E+7 ; if ( muDoubleScalarAbs (
outIndex ) < 4.503599627370496E+15 ) { if ( outIndex > 0.5 ) { if ( ! (
muDoubleScalarRem ( outIndex , 2.0 ) == 0.5 ) ) { outIndex += 0.5 ; }
outIndex = muDoubleScalarFloor ( outIndex ) ; } else if ( outIndex >= - 0.5 )
{ outIndex *= 0.0 ; } else { if ( ! ( muDoubleScalarRem ( outIndex , 2.0 ) ==
- 0.5 ) ) { outIndex -= 0.5 ; } outIndex = muDoubleScalarCeil ( outIndex ) ;
} } if ( muDoubleScalarIsNaN ( outIndex ) || muDoubleScalarIsInf ( outIndex )
) { outIndex = 0.0 ; } else { outIndex = muDoubleScalarRem ( outIndex ,
2.68435456E+8 ) ; } i = ( int32_T ) muDoubleScalarFloor ( outIndex ) ;
outIndex = rtB . dcv [ wr ] . im * 6.7108864E+7 ; if ( muDoubleScalarAbs (
outIndex ) < 4.503599627370496E+15 ) { if ( outIndex > 0.5 ) { if ( ! (
muDoubleScalarRem ( outIndex , 2.0 ) == 0.5 ) ) { outIndex += 0.5 ; }
outIndex = muDoubleScalarFloor ( outIndex ) ; } else if ( outIndex >= - 0.5 )
{ outIndex *= 0.0 ; } else { if ( ! ( muDoubleScalarRem ( outIndex , 2.0 ) ==
- 0.5 ) ) { outIndex -= 0.5 ; } outIndex = muDoubleScalarCeil ( outIndex ) ;
} } if ( muDoubleScalarIsNaN ( outIndex ) || muDoubleScalarIsInf ( outIndex )
) { outIndex = 0.0 ; } else { outIndex = muDoubleScalarRem ( outIndex ,
2.68435456E+8 ) ; } twdlIndex = ( int32_T ) muDoubleScalarFloor ( outIndex )
; if ( ( ( uint32_T ) i & 134217728U ) != 0U ) { rtB . icv [ wr ] . re = i |
- 134217728 ; } else { rtB . icv [ wr ] . re = i & 134217727 ; } if ( ( (
uint32_T ) twdlIndex & 134217728U ) != 0U ) { rtB . icv [ wr ] . im =
twdlIndex | - 134217728 ; } else { rtB . icv [ wr ] . im = twdlIndex &
134217727 ; } } f3k3sm4kfg ( rtB . icv , rtB . icv1 ) ; for ( wr = 0 ; wr <
256 ; wr ++ ) { twiddleTable_f [ wr ] = rtB . icv1 [ wr << 3 ] ; } twdlIndex
= 0 ; gvl5ridc12 ( rtB . sampleIndex_data , sampleIndex_size ) ; b =
sampleIndex_size [ 1 ] - 1 ; for ( i = 0 ; i <= b ; i ++ ) { axcw5y1yb3 ( obj
, twiddleTable_f , ( real_T ) twdlIndex , & wr , & wi ) ; outIndex = rtB .
sampleIndex_data [ i ] ; varargin_1 = ( int64_T ) rtB . din_re [ ( int32_T )
( ( outIndex + 8.0 ) + 1.0 ) - 1 ] * wr - ( int64_T ) rtB . din_im [ (
int32_T ) ( ( outIndex + 8.0 ) + 1.0 ) - 1 ] * wi ; varargin_1_p = ( int64_T
) rtB . din_im [ ( int32_T ) ( ( outIndex + 8.0 ) + 1.0 ) - 1 ] * wr + (
int64_T ) rtB . din_re [ ( int32_T ) ( ( outIndex + 8.0 ) + 1.0 ) - 1 ] * wi
; x_cast = ( int64_T ) rtB . din_re [ ( int32_T ) ( outIndex + 1.0 ) - 1 ] <<
26 ; u_cast = ( int64_T ) rtB . din_im [ ( int32_T ) ( outIndex + 1.0 ) - 1 ]
<< 26 ; varargin_1_e = x_cast + varargin_1 ; varargin_1_i = u_cast +
varargin_1_p ; varargin_1 = x_cast - varargin_1 ; varargin_1_p = u_cast -
varargin_1_p ; d4eqi0n2ks ( obj , varargin_1_e , varargin_1 , varargin_1_i ,
varargin_1_p , 9.0 ) ; wr = ( int32_T ) ( varargin_1_e >> 26 ) ; if ( ( (
uint32_T ) wr & 134217728U ) != 0U ) { rtB . dout_re_stage [ i << 1 ] = wr |
- 134217728 ; } else { rtB . dout_re_stage [ i << 1 ] = wr & 134217727 ; } wr
= ( int32_T ) ( varargin_1 >> 26 ) ; if ( ( ( uint32_T ) wr & 134217728U ) !=
0U ) { rtB . dout_re_stage [ ( i << 1 ) + 1 ] = wr | - 134217728 ; } else {
rtB . dout_re_stage [ ( i << 1 ) + 1 ] = wr & 134217727 ; } wr = ( int32_T )
( varargin_1_i >> 26 ) ; if ( ( ( uint32_T ) wr & 134217728U ) != 0U ) { rtB
. dout_im_stage [ i << 1 ] = wr | - 134217728 ; } else { rtB . dout_im_stage
[ i << 1 ] = wr & 134217727 ; } wr = ( int32_T ) ( varargin_1_p >> 26 ) ; if
( ( ( uint32_T ) wr & 134217728U ) != 0U ) { rtB . dout_im_stage [ ( i << 1 )
+ 1 ] = wr | - 134217728 ; } else { rtB . dout_im_stage [ ( i << 1 ) + 1 ] =
wr & 134217727 ; } twdlIndex ++ ; } for ( i = 0 ; i < 4096 ; i ++ ) { rtB .
din_re [ i ] = rtB . dout_re_stage [ i ] ; rtB . din_im [ i ] = rtB .
dout_im_stage [ i ] ; outIndex = - 6.2831853071795862 * ( real_T ) i ; if (
outIndex == 0.0 ) { rtB . dcv [ i ] . re = - 0.0 ; rtB . dcv [ i ] . im = 0.0
; } else { rtB . dcv [ i ] . re = 0.0 ; rtB . dcv [ i ] . im = outIndex /
4096.0 ; } } prlcfzcxhj ( rtB . dcv ) ; for ( wr = 0 ; wr < 4096 ; wr ++ ) {
outIndex = rtB . dcv [ wr ] . re * 6.7108864E+7 ; if ( muDoubleScalarAbs (
outIndex ) < 4.503599627370496E+15 ) { if ( outIndex > 0.5 ) { if ( ! (
muDoubleScalarRem ( outIndex , 2.0 ) == 0.5 ) ) { outIndex += 0.5 ; }
outIndex = muDoubleScalarFloor ( outIndex ) ; } else if ( outIndex >= - 0.5 )
{ outIndex *= 0.0 ; } else { if ( ! ( muDoubleScalarRem ( outIndex , 2.0 ) ==
- 0.5 ) ) { outIndex -= 0.5 ; } outIndex = muDoubleScalarCeil ( outIndex ) ;
} } if ( muDoubleScalarIsNaN ( outIndex ) || muDoubleScalarIsInf ( outIndex )
) { outIndex = 0.0 ; } else { outIndex = muDoubleScalarRem ( outIndex ,
2.68435456E+8 ) ; } i = ( int32_T ) muDoubleScalarFloor ( outIndex ) ;
outIndex = rtB . dcv [ wr ] . im * 6.7108864E+7 ; if ( muDoubleScalarAbs (
outIndex ) < 4.503599627370496E+15 ) { if ( outIndex > 0.5 ) { if ( ! (
muDoubleScalarRem ( outIndex , 2.0 ) == 0.5 ) ) { outIndex += 0.5 ; }
outIndex = muDoubleScalarFloor ( outIndex ) ; } else if ( outIndex >= - 0.5 )
{ outIndex *= 0.0 ; } else { if ( ! ( muDoubleScalarRem ( outIndex , 2.0 ) ==
- 0.5 ) ) { outIndex -= 0.5 ; } outIndex = muDoubleScalarCeil ( outIndex ) ;
} } if ( muDoubleScalarIsNaN ( outIndex ) || muDoubleScalarIsInf ( outIndex )
) { outIndex = 0.0 ; } else { outIndex = muDoubleScalarRem ( outIndex ,
2.68435456E+8 ) ; } twdlIndex = ( int32_T ) muDoubleScalarFloor ( outIndex )
; if ( ( ( uint32_T ) i & 134217728U ) != 0U ) { rtB . icv [ wr ] . re = i |
- 134217728 ; } else { rtB . icv [ wr ] . re = i & 134217727 ; } if ( ( (
uint32_T ) twdlIndex & 134217728U ) != 0U ) { rtB . icv [ wr ] . im =
twdlIndex | - 134217728 ; } else { rtB . icv [ wr ] . im = twdlIndex &
134217727 ; } } f3k3sm4kfg ( rtB . icv , rtB . icv1 ) ; for ( wr = 0 ; wr <
512 ; wr ++ ) { twiddleTable_c [ wr ] = rtB . icv1 [ wr << 2 ] ; } twdlIndex
= 0 ; m1xs4zed55 ( rtB . sampleIndex_data , sampleIndex_size ) ; b =
sampleIndex_size [ 1 ] - 1 ; for ( i = 0 ; i <= b ; i ++ ) { bv20pcjkch ( obj
, twiddleTable_c , ( real_T ) twdlIndex , & wr , & wi ) ; outIndex = rtB .
sampleIndex_data [ i ] ; varargin_1 = ( int64_T ) rtB . din_re [ ( int32_T )
( ( outIndex + 4.0 ) + 1.0 ) - 1 ] * wr - ( int64_T ) rtB . din_im [ (
int32_T ) ( ( outIndex + 4.0 ) + 1.0 ) - 1 ] * wi ; varargin_1_p = ( int64_T
) rtB . din_im [ ( int32_T ) ( ( outIndex + 4.0 ) + 1.0 ) - 1 ] * wr + (
int64_T ) rtB . din_re [ ( int32_T ) ( ( outIndex + 4.0 ) + 1.0 ) - 1 ] * wi
; x_cast = ( int64_T ) rtB . din_re [ ( int32_T ) ( outIndex + 1.0 ) - 1 ] <<
26 ; u_cast = ( int64_T ) rtB . din_im [ ( int32_T ) ( outIndex + 1.0 ) - 1 ]
<< 26 ; varargin_1_e = x_cast + varargin_1 ; varargin_1_i = u_cast +
varargin_1_p ; varargin_1 = x_cast - varargin_1 ; varargin_1_p = u_cast -
varargin_1_p ; d4eqi0n2ks ( obj , varargin_1_e , varargin_1 , varargin_1_i ,
varargin_1_p , 10.0 ) ; wr = ( int32_T ) ( varargin_1_e >> 26 ) ; if ( ( (
uint32_T ) wr & 134217728U ) != 0U ) { rtB . dout_re_stage [ i << 1 ] = wr |
- 134217728 ; } else { rtB . dout_re_stage [ i << 1 ] = wr & 134217727 ; } wr
= ( int32_T ) ( varargin_1 >> 26 ) ; if ( ( ( uint32_T ) wr & 134217728U ) !=
0U ) { rtB . dout_re_stage [ ( i << 1 ) + 1 ] = wr | - 134217728 ; } else {
rtB . dout_re_stage [ ( i << 1 ) + 1 ] = wr & 134217727 ; } wr = ( int32_T )
( varargin_1_i >> 26 ) ; if ( ( ( uint32_T ) wr & 134217728U ) != 0U ) { rtB
. dout_im_stage [ i << 1 ] = wr | - 134217728 ; } else { rtB . dout_im_stage
[ i << 1 ] = wr & 134217727 ; } wr = ( int32_T ) ( varargin_1_p >> 26 ) ; if
( ( ( uint32_T ) wr & 134217728U ) != 0U ) { rtB . dout_im_stage [ ( i << 1 )
+ 1 ] = wr | - 134217728 ; } else { rtB . dout_im_stage [ ( i << 1 ) + 1 ] =
wr & 134217727 ; } twdlIndex ++ ; } for ( i = 0 ; i < 4096 ; i ++ ) { rtB .
din_re [ i ] = rtB . dout_re_stage [ i ] ; rtB . din_im [ i ] = rtB .
dout_im_stage [ i ] ; outIndex = - 6.2831853071795862 * ( real_T ) i ; if (
outIndex == 0.0 ) { rtB . dcv [ i ] . re = - 0.0 ; rtB . dcv [ i ] . im = 0.0
; } else { rtB . dcv [ i ] . re = 0.0 ; rtB . dcv [ i ] . im = outIndex /
4096.0 ; } } prlcfzcxhj ( rtB . dcv ) ; for ( wr = 0 ; wr < 4096 ; wr ++ ) {
outIndex = rtB . dcv [ wr ] . re * 6.7108864E+7 ; if ( muDoubleScalarAbs (
outIndex ) < 4.503599627370496E+15 ) { if ( outIndex > 0.5 ) { if ( ! (
muDoubleScalarRem ( outIndex , 2.0 ) == 0.5 ) ) { outIndex += 0.5 ; }
outIndex = muDoubleScalarFloor ( outIndex ) ; } else if ( outIndex >= - 0.5 )
{ outIndex *= 0.0 ; } else { if ( ! ( muDoubleScalarRem ( outIndex , 2.0 ) ==
- 0.5 ) ) { outIndex -= 0.5 ; } outIndex = muDoubleScalarCeil ( outIndex ) ;
} } if ( muDoubleScalarIsNaN ( outIndex ) || muDoubleScalarIsInf ( outIndex )
) { outIndex = 0.0 ; } else { outIndex = muDoubleScalarRem ( outIndex ,
2.68435456E+8 ) ; } i = ( int32_T ) muDoubleScalarFloor ( outIndex ) ;
outIndex = rtB . dcv [ wr ] . im * 6.7108864E+7 ; if ( muDoubleScalarAbs (
outIndex ) < 4.503599627370496E+15 ) { if ( outIndex > 0.5 ) { if ( ! (
muDoubleScalarRem ( outIndex , 2.0 ) == 0.5 ) ) { outIndex += 0.5 ; }
outIndex = muDoubleScalarFloor ( outIndex ) ; } else if ( outIndex >= - 0.5 )
{ outIndex *= 0.0 ; } else { if ( ! ( muDoubleScalarRem ( outIndex , 2.0 ) ==
- 0.5 ) ) { outIndex -= 0.5 ; } outIndex = muDoubleScalarCeil ( outIndex ) ;
} } if ( muDoubleScalarIsNaN ( outIndex ) || muDoubleScalarIsInf ( outIndex )
) { outIndex = 0.0 ; } else { outIndex = muDoubleScalarRem ( outIndex ,
2.68435456E+8 ) ; } twdlIndex = ( int32_T ) muDoubleScalarFloor ( outIndex )
; if ( ( ( uint32_T ) i & 134217728U ) != 0U ) { rtB . icv [ wr ] . re = i |
- 134217728 ; } else { rtB . icv [ wr ] . re = i & 134217727 ; } if ( ( (
uint32_T ) twdlIndex & 134217728U ) != 0U ) { rtB . icv [ wr ] . im =
twdlIndex | - 134217728 ; } else { rtB . icv [ wr ] . im = twdlIndex &
134217727 ; } } f3k3sm4kfg ( rtB . icv , rtB . icv1 ) ; for ( wr = 0 ; wr <
1024 ; wr ++ ) { rtB . twiddleTable [ wr ] = rtB . icv1 [ wr << 1 ] ; }
twdlIndex = 0 ; k4wethv1yh ( rtB . sampleIndex_data , sampleIndex_size ) ; b
= sampleIndex_size [ 1 ] - 1 ; for ( i = 0 ; i <= b ; i ++ ) { fsab4sqz11 (
obj , rtB . twiddleTable , ( real_T ) twdlIndex , & wr , & wi ) ; outIndex =
rtB . sampleIndex_data [ i ] ; varargin_1 = ( int64_T ) rtB . din_re [ (
int32_T ) ( ( outIndex + 2.0 ) + 1.0 ) - 1 ] * wr - ( int64_T ) rtB . din_im
[ ( int32_T ) ( ( outIndex + 2.0 ) + 1.0 ) - 1 ] * wi ; varargin_1_p = (
int64_T ) rtB . din_im [ ( int32_T ) ( ( outIndex + 2.0 ) + 1.0 ) - 1 ] * wr
+ ( int64_T ) rtB . din_re [ ( int32_T ) ( ( outIndex + 2.0 ) + 1.0 ) - 1 ] *
wi ; x_cast = ( int64_T ) rtB . din_re [ ( int32_T ) ( outIndex + 1.0 ) - 1 ]
<< 26 ; u_cast = ( int64_T ) rtB . din_im [ ( int32_T ) ( outIndex + 1.0 ) -
1 ] << 26 ; varargin_1_e = x_cast + varargin_1 ; varargin_1_i = u_cast +
varargin_1_p ; varargin_1 = x_cast - varargin_1 ; varargin_1_p = u_cast -
varargin_1_p ; d4eqi0n2ks ( obj , varargin_1_e , varargin_1 , varargin_1_i ,
varargin_1_p , 11.0 ) ; wr = ( int32_T ) ( varargin_1_e >> 26 ) ; if ( ( (
uint32_T ) wr & 134217728U ) != 0U ) { rtB . dout_re_stage [ i << 1 ] = wr |
- 134217728 ; } else { rtB . dout_re_stage [ i << 1 ] = wr & 134217727 ; } wr
= ( int32_T ) ( varargin_1 >> 26 ) ; if ( ( ( uint32_T ) wr & 134217728U ) !=
0U ) { rtB . dout_re_stage [ ( i << 1 ) + 1 ] = wr | - 134217728 ; } else {
rtB . dout_re_stage [ ( i << 1 ) + 1 ] = wr & 134217727 ; } wr = ( int32_T )
( varargin_1_i >> 26 ) ; if ( ( ( uint32_T ) wr & 134217728U ) != 0U ) { rtB
. dout_im_stage [ i << 1 ] = wr | - 134217728 ; } else { rtB . dout_im_stage
[ i << 1 ] = wr & 134217727 ; } wr = ( int32_T ) ( varargin_1_p >> 26 ) ; if
( ( ( uint32_T ) wr & 134217728U ) != 0U ) { rtB . dout_im_stage [ ( i << 1 )
+ 1 ] = wr | - 134217728 ; } else { rtB . dout_im_stage [ ( i << 1 ) + 1 ] =
wr & 134217727 ; } twdlIndex ++ ; } for ( i = 0 ; i < 4096 ; i ++ ) { rtB .
din_re [ i ] = rtB . dout_re_stage [ i ] ; rtB . din_im [ i ] = rtB .
dout_im_stage [ i ] ; outIndex = - 6.2831853071795862 * ( real_T ) i ; if (
outIndex == 0.0 ) { rtB . dcv [ i ] . re = - 0.0 ; rtB . dcv [ i ] . im = 0.0
; } else { rtB . dcv [ i ] . re = 0.0 ; rtB . dcv [ i ] . im = outIndex /
4096.0 ; } } prlcfzcxhj ( rtB . dcv ) ; for ( wr = 0 ; wr < 4096 ; wr ++ ) {
outIndex = rtB . dcv [ wr ] . re * 6.7108864E+7 ; if ( muDoubleScalarAbs (
outIndex ) < 4.503599627370496E+15 ) { if ( outIndex > 0.5 ) { if ( ! (
muDoubleScalarRem ( outIndex , 2.0 ) == 0.5 ) ) { outIndex += 0.5 ; }
outIndex = muDoubleScalarFloor ( outIndex ) ; } else if ( outIndex >= - 0.5 )
{ outIndex *= 0.0 ; } else { if ( ! ( muDoubleScalarRem ( outIndex , 2.0 ) ==
- 0.5 ) ) { outIndex -= 0.5 ; } outIndex = muDoubleScalarCeil ( outIndex ) ;
} } if ( muDoubleScalarIsNaN ( outIndex ) || muDoubleScalarIsInf ( outIndex )
) { outIndex = 0.0 ; } else { outIndex = muDoubleScalarRem ( outIndex ,
2.68435456E+8 ) ; } i = ( int32_T ) muDoubleScalarFloor ( outIndex ) ;
outIndex = rtB . dcv [ wr ] . im * 6.7108864E+7 ; if ( muDoubleScalarAbs (
outIndex ) < 4.503599627370496E+15 ) { if ( outIndex > 0.5 ) { if ( ! (
muDoubleScalarRem ( outIndex , 2.0 ) == 0.5 ) ) { outIndex += 0.5 ; }
outIndex = muDoubleScalarFloor ( outIndex ) ; } else if ( outIndex >= - 0.5 )
{ outIndex *= 0.0 ; } else { if ( ! ( muDoubleScalarRem ( outIndex , 2.0 ) ==
- 0.5 ) ) { outIndex -= 0.5 ; } outIndex = muDoubleScalarCeil ( outIndex ) ;
} } if ( muDoubleScalarIsNaN ( outIndex ) || muDoubleScalarIsInf ( outIndex )
) { outIndex = 0.0 ; } else { outIndex = muDoubleScalarRem ( outIndex ,
2.68435456E+8 ) ; } twdlIndex = ( int32_T ) muDoubleScalarFloor ( outIndex )
; if ( ( ( uint32_T ) i & 134217728U ) != 0U ) { rtB . icv [ wr ] . re = i |
- 134217728 ; } else { rtB . icv [ wr ] . re = i & 134217727 ; } if ( ( (
uint32_T ) twdlIndex & 134217728U ) != 0U ) { rtB . icv [ wr ] . im =
twdlIndex | - 134217728 ; } else { rtB . icv [ wr ] . im = twdlIndex &
134217727 ; } } f3k3sm4kfg ( rtB . icv , rtB . icv1 ) ; twiddleTable_k = &
rtB . icv1 [ 0 ] ; twdlIndex = 0 ; for ( i = 0 ; i < 2048 ; i ++ ) {
jmd542rf2p ( obj , twiddleTable_k , ( real_T ) twdlIndex , & wr , & wi ) ; b
= rtB . din_re [ i + 2048 ] ; din_im = rtB . din_im [ i + 2048 ] ; varargin_1
= ( int64_T ) b * wr - ( int64_T ) din_im * wi ; varargin_1_p = ( int64_T )
din_im * wr + ( int64_T ) b * wi ; x_cast = ( int64_T ) rtB . din_re [ i ] <<
26 ; u_cast = ( int64_T ) rtB . din_im [ i ] << 26 ; varargin_1_e = x_cast +
varargin_1 ; varargin_1_i = u_cast + varargin_1_p ; varargin_1 = x_cast -
varargin_1 ; varargin_1_p = u_cast - varargin_1_p ; d4eqi0n2ks ( obj ,
varargin_1_e , varargin_1 , varargin_1_i , varargin_1_p , 12.0 ) ; wr = (
int32_T ) ( varargin_1_e >> 26 ) ; if ( ( ( uint32_T ) wr & 134217728U ) !=
0U ) { rtB . dout_re_stage [ i << 1 ] = wr | - 134217728 ; } else { rtB .
dout_re_stage [ i << 1 ] = wr & 134217727 ; } wr = ( int32_T ) ( varargin_1
>> 26 ) ; if ( ( ( uint32_T ) wr & 134217728U ) != 0U ) { rtB . dout_re_stage
[ ( i << 1 ) + 1 ] = wr | - 134217728 ; } else { rtB . dout_re_stage [ ( i <<
1 ) + 1 ] = wr & 134217727 ; } wr = ( int32_T ) ( varargin_1_i >> 26 ) ; if (
( ( uint32_T ) wr & 134217728U ) != 0U ) { rtB . dout_im_stage [ i << 1 ] =
wr | - 134217728 ; } else { rtB . dout_im_stage [ i << 1 ] = wr & 134217727 ;
} wr = ( int32_T ) ( varargin_1_p >> 26 ) ; if ( ( ( uint32_T ) wr &
134217728U ) != 0U ) { rtB . dout_im_stage [ ( i << 1 ) + 1 ] = wr | -
134217728 ; } else { rtB . dout_im_stage [ ( i << 1 ) + 1 ] = wr & 134217727
; } twdlIndex ++ ; } bcoqzmpix0 ( obj ) ; memset ( & dout_re [ 0 ] , 0 ,
sizeof ( int32_T ) << 12U ) ; memset ( & dout_im [ 0 ] , 0 , sizeof ( int32_T
) << 12U ) ; for ( i = 0 ; i < 4096 ; i ++ ) { outIndex = hcrh0akgkks ( (
real_T ) i , obj -> pBitReverseTable_F ) ; dout_re [ ( int32_T ) ( outIndex +
1.0 ) - 1 ] = rtB . dout_re_stage [ i ] ; dout_im [ ( int32_T ) ( outIndex +
1.0 ) - 1 ] = rtB . dout_im_stage [ i ] ; } } void MdlInitialize ( void ) {
int32_T i ; for ( i = 0 ; i < 6146 ; i ++ ) { rtDW . jl34i02arl [ i ] = rtP .
Delay5_InitialCondition_e33ntr4hav ; } for ( i = 0 ; i < 12292 ; i ++ ) {
rtDW . mmbeeyt2c3 [ i ] = rtP . Delay2_InitialCondition ; rtDW . ghw5kalbtu [
i ] = rtP . Delay2_InitialCondition_i0y3mptmut ; } rtDW . kwwlxjzdoe = rtP .
Output_InitialCondition ; for ( i = 0 ; i < 16 ; i ++ ) { rtDW . kbijeiibcz [
i ] = rtP . Delay_InitialCondition_bivaejht44 ; } rtDW . dv5jqwdcth = rtP .
Delay_InitialCondition_ir5a5hkcc3 ; rtDW . o2s0qk524e = rtP .
Delay_InitialCondition ; rtDW . bujt1u5ssb = rtP .
Delay_InitialCondition_cuyujzmjja ; rtDW . ch3ulmwkxf = rtP .
Delay_InitialCondition_dwbjteayhm ; rtDW . npnmarbxwp = rtP .
Delay_InitialCondition_avqzrbmyhr ; rtDW . luidyjwywm = rtP .
Delay_InitialCondition_pweepdckj1 ; rtDW . nct4dwsy42 = rtP .
Delay_InitialCondition_dn22fhgklz ; rtDW . m21yi3xe0r = rtP .
Delay_InitialCondition_kmo3owkzp3 ; rtDW . nys12ztjas = rtP .
Delay_InitialCondition_my2m5jb2lf ; rtDW . gxoqfko3zl = rtP .
Delay7_InitialCondition ; rtDW . cozp4vn1gx = rtP .
Delay_InitialCondition_doqmmh3mag ; rtDW . efb0llahxe = rtP .
Delay_InitialCondition_mchznqjyyp ; rtDW . cwc30hkp0p = rtP .
Delay_InitialCondition_kdvlsakntn ; rtDW . kgybnswm2h = rtP .
Delay_InitialCondition_p5cekovndr ; rtDW . nzmtxoifv5 = rtP .
Delay_InitialCondition_ecslmvhicr ; rtDW . pb1zjp11ah = rtP .
Delay2_InitialCondition_nrrrgqzphk ; rtDW . lsrg3b3izb = rtP .
Delay3_InitialCondition_dr2jcrglmp ; rtDW . cm2wzi1df3 = rtP .
sampleOutNum_InitialCondition ; rtDW . e4apruk0cn = rtP .
Delay3_InitialCondition_eshm1um140 ; rtDW . kdeplemgid = rtP .
Delay_InitialCondition_idclbdvyel ; rtDW . oq1rde331u = rtP .
Delay_InitialCondition_oeeytx1otg ; rtDW . dri1oggmq0 = rtP .
Delay_InitialCondition_okmfayw4p2 ; rtDW . nv4uj53r02 = rtP .
Delay_InitialCondition_fezvq3cjhw ; rtDW . bxqyzy02ny = rtP .
Delay_InitialCondition_dxxrsledih ; rtDW . agzzpunc3i = rtP .
Delay_InitialCondition_btesh0rfjj ; rtDW . a2kthhvkup = rtP .
Delay_InitialCondition_mgypbnyrdb ; rtDW . ptf1jyuocm = rtP .
Delay_InitialCondition_omczlhgywm ; rtDW . kk3vqau5j4 = rtP .
Delay_InitialCondition_hdawrdqwez ; rtDW . cczfdi3ydg = rtP .
s_state_out3_InitialCondition ; rtDW . mcbewak1r4 = rtP .
Delay_InitialCondition_puyjqvkpqn ; rtDW . j3spvmunzs = rtP .
s_state_out2_InitialCondition ; rtDW . hzvbnr4bgd = rtP .
Delay_InitialCondition_kbbwvgrobv ; rtDW . huil4csvle = rtP .
s_state_out11_InitialCondition ; rtDW . e0hsphy30b = rtP .
Delay_InitialCondition_obhsrwbvfw ; rtDW . pjspex5iux = rtP .
Delay_InitialCondition_gde2qns1sn ; rtDW . ceruf15djt = rtP .
Delay_InitialCondition_aegja0zge0 ; rtDW . nwj4wrfqti = rtP .
Delay_InitialCondition_cvzwgp3sa3 ; rtDW . cjaep5120g = rtP .
outselect_reg_InitialCondition ; rtDW . dmbtvfs22x = rtP .
out_reg_InitialCondition ; for ( i = 0 ; i < 6145 ; i ++ ) { rtDW .
noznim2iqz [ i ] = rtP . Delay_InitialCondition_polhw3hpqv ; } rtDW .
a1421jzrsu = 0U ; rtDW . etvgfdreuz = rtP . Delay_InitialCondition_avcgvlm545
; rtDW . faabslxst2 = rtP . Delay_InitialCondition_iorjgne1ht ; rtDW .
gumtab5fnv = rtP . Delay_InitialCondition_puizcqh4j5 ; rtDW . d3nvmjf1vd =
rtP . Delay_InitialCondition_na3nsnrfxk ; rtDW . oruuzh4bzs = rtP .
Delay_InitialCondition_edapuq3h54 ; rtDW . ew53tl52et = rtP .
Delay_InitialCondition_hfx2wgqklt ; rtDW . afmamtdg1h = rtP .
Delay_InitialCondition_dew3uen3eg ; rtDW . kmhibglhil = rtP .
Delay_InitialCondition_logxrtj0wp ; rtDW . c0mvgpjrpg = rtP .
Delay_InitialCondition_jaf1sdkjey ; rtDW . oc3xb3ueqi = rtP .
Delay_InitialCondition_hcnksshddy ; rtDW . ggpm4i3hqv = rtP .
Delay_InitialCondition_hqdvrqsp2s ; rtDW . pgw0quxym3 = rtP .
Delay_InitialCondition_jadleeztvh ; rtDW . b3tarjjh2r = rtP .
Delay_InitialCondition_pav2cey3c2 ; rtDW . bjsvnxykzn = rtP .
Delay_InitialCondition_bhsurkdb4i ; rtDW . fn03ogv30b = rtP .
Delay_InitialCondition_fd0343eeir ; rtDW . o0tgjzszlx = rtP .
Delay_InitialCondition_cfsx51swza ; rtDW . jk0pdacxs0 = rtP .
Delay_InitialCondition_apec3wl0fc ; rtDW . hkv3n4pgdt = rtP .
Delay_InitialCondition_bcdpryjn54 ; rtDW . msyvbfgmjp = rtP .
Delay_InitialCondition_jfzedj03bv ; rtDW . i3gumoeyz1 = rtP .
Delay_InitialCondition_evouhamhki ; rtDW . gxbtoq4uog = rtP .
Delay_InitialCondition_fyttkksrr2 ; rtDW . aqfzu2hilm = rtP .
Delay_InitialCondition_csj3wvshlc ; rtDW . do1g134e35 = rtP .
Delay6_InitialCondition ; rtDW . fw4xval30t = rtP .
Delay1_InitialCondition_gbt1zir35l ; rtDW . lqlczeokm5 = rtP .
sampleOutNum_InitialCondition_eroorjfv3a ; for ( i = 0 ; i < 2048 ; i ++ ) {
rtDW . jr11b3ek0i [ i ] = rtP . Delay_InitialCondition_btfuanhu4f ; } rtDW .
gkp23xlorn = 0U ; rtDW . cprxs0oxb4 = rtP .
Delay2_InitialCondition_ggyhhxr33t ; rtDW . i4kbnwgsra = rtP .
Delay3_InitialCondition_eqhsgedjle ; rtDW . ehzhklig5r = rtP .
Output_InitialCondition_ekug4x44vn ; rtDW . g2rlyn1hgy = rtP .
Output_InitialCondition_fn12urbful ; rtDW . ermftxd5xs = rtP .
outselect_reg_InitialCondition_a0ryv310m4 ; rtDW . n2whdu3eol = rtP .
out_reg_InitialCondition_no0vzjg4dg ; rtDW . faksgtgdka = rtP .
dir_reg_InitialCondition ; rtDW . ipzfjakadv = rtP . idx_reg_InitialCondition
; rtDW . jvuxplwco4 = rtP . dir_reg_InitialCondition_cmneiredlf ; rtDW .
gcyq4coupa = rtP . idx_reg_InitialCondition_e2aowmbdn0 ; rtDW . cmvo3isroh =
rtP . Output_InitialCondition_eccgm5k2bp ; for ( i = 0 ; i < 6144 ; i ++ ) {
rtDW . akcvng45tl [ i ] = rtP . tuneback_InitialCondition ; } rtDW .
gkjrmoqlie = 0U ; rtDW . b4hfbet4ba = rtP .
Delay1_InitialCondition_oa0pqhkumw ; for ( i = 0 ; i < 2048 ; i ++ ) { rtDW .
n4iun2fjnn [ i ] = rtP . Delay_InitialCondition_ebqzpimw1a ; } rtDW .
hl3popemla = 0U ; rtDW . fr2u3bfpll = rtP .
Delay2_InitialCondition_ksdgd0umq4 ; rtDW . nc0waz21t1 = rtP .
Output_InitialCondition_hdxkfwgth4 ; rtDW . c0pmhbmlvb = rtP .
Output_InitialCondition_aj0nyevvau ; rtDW . dfsdkk5fjk = rtP .
dir_reg_InitialCondition_ipllv2vckv ; rtDW . b4ujwta3wy = rtP .
idx_reg_InitialCondition_epugt1nf4m ; rtDW . cqvzla0ulg = rtP .
dir_reg_InitialCondition_h1kd1xoks1 ; rtDW . jcvtghq3ig = rtP .
idx_reg_InitialCondition_pbm0is00zu ; rtDW . fx4qkmoomx = rtP .
Output_InitialCondition_h33lfi3to1 ; for ( i = 0 ; i < 6144 ; i ++ ) { rtDW .
bv1ncvrs1o [ i ] = rtP . tuneback_InitialCondition_m3ugpwbhej ; } rtDW .
dgymt0yytj = 0U ; rtDW . dzft24s4wf = rtP . Delay_InitialCondition_hgv3wvl25n
; rtDW . jcwpmucczd = rtP . Delay_InitialCondition_pnqhyj4v2u ; rtDW .
i3cg55zsq5 = rtP . Delay_InitialCondition_cobf1zro4g ; rtDW . duv4e2eeyz =
rtP . Delay_InitialCondition_marlsazlir ; rtDW . cqzpsciwb0 = rtP .
Delay_InitialCondition_k1qtzr5o3x ; rtDW . bgf0isn4m2 = rtP .
Delay_InitialCondition_dwzd2055uf ; rtDW . ceatu2c3ih = rtP .
Delay_InitialCondition_en3fegqurr ; rtDW . mzlkr3j3p5 = rtP .
Delay1_InitialCondition ; rtDW . hr0f0pllzb = rtP .
Delay2_InitialCondition_o3catttqel ; rtDW . lj4qjxl3d5 = rtP .
Delay3_InitialCondition ; rtDW . fwq22fuszr = rtP . Delay4_InitialCondition ;
rtDW . lw2of50kxw = rtP . Delay5_InitialCondition ; rtDW . iooznguwv5 = rtP .
Delay_InitialCondition_ltsnbbjuja ; rtDW . bkmzxq31d1 = rtP .
Delay_InitialCondition_fenfztdbl1 ; rtDW . lrozmwruae = rtP .
Delay_InitialCondition_ly345rzjyx ; rtDW . a33feioxw2 = rtP .
Delay_InitialCondition_jurymom3by ; rtDW . afrmbd0iw3 = rtP .
Delay_InitialCondition_nxaufxtpaa ; rtDW . anfgrndojq = rtP .
Delay_InitialCondition_mhycnbq5nh ; rtDW . hwkvzcsfaz = rtP .
Delay_InitialCondition_jvkfmcsd4p ; rtDW . cuscr1mv1o = rtP .
Delay_InitialCondition_erkb3sdptq ; rtDW . hi5sxdgutv = rtP .
Delay_InitialCondition_aeeyiekbjl ; rtDW . g3mwssejug = rtP .
Delay_InitialCondition_cu5pdxjtwz ; rtDW . ohb2remyso = rtP .
Delay_InitialCondition_gw2gbydoyn ; rtDW . nnehvfm43x = rtP .
Delay_InitialCondition_immn4e5mqy ; rtDW . lqy3n4vuo3 = rtP .
Delay_InitialCondition_isgi0ut24c ; rtDW . noj5hcq43l = rtP .
Delay_InitialCondition_g42qsp0l1h ; rtDW . h4kqpzy0bk = rtP .
Delay_InitialCondition_fl4lytvimx ; rtDW . ehukj5uhzp = rtP .
Delay_InitialCondition_nmfta03ith ; rtDW . lma0feztag = rtP .
Delay_InitialCondition_cllveugtjf ; rtDW . balpcok03t = rtP .
Delay_InitialCondition_idfthqch4t ; rtDW . kbtqs1lj34 = rtP .
Delay_InitialCondition_bixtsv2y4r ; rtDW . pdm2ofpuvs = rtP .
Delay_InitialCondition_defzljbi2w ; rtDW . jgcfuyvz2d = rtP .
Delay_InitialCondition_keoeyta0ek ; rtDW . p1ngo54os1 = rtP .
Delay_InitialCondition_krdphv0gdp ; rtDW . pru2133ish = rtP .
Delay_InitialCondition_ar2r1no5co ; rtDW . kspt2mhisp = rtP .
Delay_InitialCondition_g1g31wc12b ; rtDW . kq5e4yhmjq = rtP .
Delay_InitialCondition_lggifq2rt1 ; rtDW . gr0nnucbwg = rtP .
Delay_InitialCondition_m2obwfcta2 ; rtDW . e4ewwdakkt = rtP .
Delay_InitialCondition_ej1wesyeu5 ; rtDW . pgl0dx24fb = rtP .
Delay_InitialCondition_e434obmerv ; rtDW . kqgzq353ol = rtP .
Delay_InitialCondition_nbba3voxno ; rtDW . fgrwjt4a2w = rtP .
Delay_InitialCondition_ix23afht4e ; rtDW . e4hda03zrh = rtP .
Delay_InitialCondition_hbc4sxxp0p ; rtDW . axrvuq4x5i = rtP .
Delay_InitialCondition_bqwjoax0yj ; rtDW . f3nepfq241 = rtP .
Delay_InitialCondition_flvwnxyeqd ; rtDW . ivftjkcvdy = rtP .
Delay_InitialCondition_dhdb2wz2lb ; rtDW . kt2dvgietw = rtP .
Delay_InitialCondition_ontqyxzrde ; rtDW . f125nvybng = rtP .
Delay_InitialCondition_pp14mxltho ; rtDW . pp1spekrho = rtP .
Delay_InitialCondition_pnzwrhtvfu ; rtDW . lhex3u5h1f = rtP .
Delay_InitialCondition_lmw1y003x5 ; rtDW . fefcdgfhj1 = rtP .
Delay_InitialCondition_aqr0aeocyz ; rtDW . gqs1ppah0r = rtP .
Delay_InitialCondition_nyk53vf0cx ; rtDW . c2jypg20hx = rtP .
Delay_InitialCondition_fdpfscth32 ; rtDW . esgl5mkr2h = rtP .
Delay_InitialCondition_m4u3kg3big ; rtDW . oe1scdkmlv = rtP .
Delay_InitialCondition_pwhpnsimkd ; rtDW . fp3bheq2px = rtP .
Delay_InitialCondition_hl1ecmsivp ; rtDW . nkzaiaa2wi = rtP .
Delay_InitialCondition_es5yq0ap1o ; rtDW . a1gsgrx3gu = rtP .
Delay_InitialCondition_ejzkqs0hpt ; for ( i = 0 ; i < 4032 ; i ++ ) { rtDW .
oapwp3ivnb [ i ] = rtP . Delay3_InitialCondition_cabqrep3hr ; } rtDW .
mukf1zkhlx = 0U ; for ( i = 0 ; i < 63 ; i ++ ) { rtDW . mfhlrzl41r [ i ] =
rtP . Delay1_InitialCondition_m3xsy2wy1v ; } rtDW . bognbsvydi = rtP .
Delay2_InitialCondition_ebhi25mizf ; epf0xslrxm ( & rtDW . gw0bb4lu4k ) ;
heskyuqcqw ( & rtDW . fbu1mofswb ) ; fb24nl3uvc ( & rtDW . chadwwtb33 ) ;
fq1xgvpq5l ( & rtDW . jkhbxjlbpd ) ; dylc5js0a3 ( & rtDW . ph0c5wwhlf ) ;
csr5qvg15m ( & rtDW . hqymuumkk2 ) ; fkownensru ( & rtDW . jnhmigxpfr ) ;
pr1cdqavaj ( & rtDW . ayc1u05z0b ) ; ajy1izpfit ( & rtDW . ctkwb4rte4 ) ;
eymblahprd ( & rtDW . atko2rhysz ) ; h3cnkt4jqz ( & rtDW . jwlq00h0qp ) ;
a0zkjtkodd ( & rtDW . ekp05fi01e ) ; kbagdkq0lj ( & rtDW . eeeqgos433 ) ;
p11kjvhrns ( & rtDW . diaw2yowgl ) ; obaxn2ijaw ( & rtDW . k0pzgqkvwb ) ;
epf0xslrxm ( & rtDW . g2rlwqx2xml ) ; heskyuqcqw ( & rtDW . cqyo42y2ghh ) ;
fb24nl3uvc ( & rtDW . o3izwcublel ) ; fq1xgvpq5l ( & rtDW . gvbyuajj10j ) ;
dylc5js0a3 ( & rtDW . dfgw4kuzso2 ) ; csr5qvg15m ( & rtDW . m2rovdpxpjx ) ;
fkownensru ( & rtDW . gzu0v1k154f ) ; pr1cdqavaj ( & rtDW . bx4q2vjdxxp ) ;
ajy1izpfit ( & rtDW . dmnv2typrkz ) ; eymblahprd ( & rtDW . c45nfqxt1bx ) ;
h3cnkt4jqz ( & rtDW . nv44ttbdg32 ) ; a0zkjtkodd ( & rtDW . am45qhx1eqm ) ;
kbagdkq0lj ( & rtDW . im0j4vockyt ) ; p11kjvhrns ( & rtDW . hexdymfazx2 ) ;
obaxn2ijaw ( & rtDW . pdnjandztac ) ; puvsi2e35k ( & rtDW . mggcxvqcxnx ) ;
ik5qe5e3gn ( & rtDW . k33a52bgwif ) ; lh0vflmbah ( & rtDW . nt3t3nwbzjn ) ;
otgzv3ygco ( & rtDW . aazmv33tcmo ) ; glmksrsft4 ( & rtDW . bstd1u2cpob ) ;
btwb2tza3v ( & rtDW . f2rydg4dp1k ) ; l51dggekdp ( & rtDW . j11vdnbc5b2 ) ;
bluzx5r44q ( & rtDW . m1qiz2ekayi ) ; pa4uou1gdh ( & rtDW . dlafdnj3fgi ) ;
frhugcqjcs ( & rtDW . onrxopzil04 ) ; pdytvdxwzu ( & rtDW . fxuvuc5ilx3 ) ;
lqoiikc5jl ( & rtDW . po54rt51rvx ) ; gbd042go2y ( & rtDW . fzp5yrcmsta ) ;
o1m4iocjmv ( & rtDW . hx2bxym1a4g ) ; b15csreixx ( & rtDW . jtd3j4qmtj3 ) ;
anfmfwncyk ( & rtDW . mtt1ayedixs ) ; ksiqa1jioy ( & rtDW . kum1vfui1c3 ) ;
puvsi2e35k ( & rtDW . pnkexv004t ) ; ik5qe5e3gn ( & rtDW . a1r25vmwrh ) ;
lh0vflmbah ( & rtDW . kkcnk3nues ) ; otgzv3ygco ( & rtDW . crqoduzoa4 ) ;
glmksrsft4 ( & rtDW . liocd5kn1l ) ; btwb2tza3v ( & rtDW . nljvbf4yun ) ;
l51dggekdp ( & rtDW . depkfxt3dl ) ; bluzx5r44q ( & rtDW . e0yth1yr5j ) ;
pa4uou1gdh ( & rtDW . pr5yb11xg2 ) ; frhugcqjcs ( & rtDW . jqkgyvk5wj ) ;
pdytvdxwzu ( & rtDW . c4ex142obk ) ; lqoiikc5jl ( & rtDW . cit10epw2d ) ;
gbd042go2y ( & rtDW . dhqnhtbmwa ) ; o1m4iocjmv ( & rtDW . d3o4x0ovlb ) ;
b15csreixx ( & rtDW . fpel54lr1q ) ; anfmfwncyk ( & rtDW . buqfyhw4zg ) ;
ksiqa1jioy ( & rtDW . il5ne4vyn3 ) ; puvsi2e35k ( & rtDW . lcttqdmfq0 ) ;
ik5qe5e3gn ( & rtDW . p2dpdzhqcw ) ; lh0vflmbah ( & rtDW . dax5mxpt1x ) ;
otgzv3ygco ( & rtDW . okqcrlylqk ) ; glmksrsft4 ( & rtDW . gegc3wkr22 ) ;
btwb2tza3v ( & rtDW . dticnm5yh1 ) ; l51dggekdp ( & rtDW . bc2ak5uvom ) ;
bluzx5r44q ( & rtDW . aj5wkrbghc ) ; pa4uou1gdh ( & rtDW . bu3vpkznrt ) ;
frhugcqjcs ( & rtDW . o3fupwkw3j ) ; pdytvdxwzu ( & rtDW . ob2fx4wpxa ) ;
lqoiikc5jl ( & rtDW . pyfhcpopnq ) ; gbd042go2y ( & rtDW . gkwxar31g1 ) ;
o1m4iocjmv ( & rtDW . gmghl42rva ) ; b15csreixx ( & rtDW . k1pxlisolz ) ;
anfmfwncyk ( & rtDW . dud531lchs ) ; ksiqa1jioy ( & rtDW . bmgxswof1n ) ;
puvsi2e35k ( & rtDW . edsrfmi5oc ) ; ik5qe5e3gn ( & rtDW . o44pc0z3gt ) ;
lh0vflmbah ( & rtDW . dq1vaupevs ) ; otgzv3ygco ( & rtDW . pg2gn3izhv ) ;
glmksrsft4 ( & rtDW . cp2x5swpim ) ; btwb2tza3v ( & rtDW . a5ydisma0n ) ;
l51dggekdp ( & rtDW . fmiwt01ncc ) ; bluzx5r44q ( & rtDW . logcpemxnl ) ;
pa4uou1gdh ( & rtDW . mtb1g0er0c ) ; frhugcqjcs ( & rtDW . mr4jil2nb0 ) ;
pdytvdxwzu ( & rtDW . hhpwfeyxv5 ) ; lqoiikc5jl ( & rtDW . olew5caigs ) ;
gbd042go2y ( & rtDW . kiv2ffdk2i ) ; o1m4iocjmv ( & rtDW . dwkrhy1adj ) ;
b15csreixx ( & rtDW . c0cv1fecmf ) ; anfmfwncyk ( & rtDW . li4w4j22ee ) ;
ksiqa1jioy ( & rtDW . gt31hnr3lf ) ; puvsi2e35k ( & rtDW . opqx3n1jiv ) ;
ik5qe5e3gn ( & rtDW . mw2keyc00d ) ; lh0vflmbah ( & rtDW . lhl4belrft ) ;
otgzv3ygco ( & rtDW . iaybj1yga2 ) ; glmksrsft4 ( & rtDW . p5zpxze4b1 ) ;
btwb2tza3v ( & rtDW . d3bzw5xtsk ) ; l51dggekdp ( & rtDW . bk35bvlqhh ) ;
bluzx5r44q ( & rtDW . ls5eenr2ad ) ; pa4uou1gdh ( & rtDW . mx4jv5qqj4 ) ;
frhugcqjcs ( & rtDW . cnelbzjfhg ) ; pdytvdxwzu ( & rtDW . ludvfohavv ) ;
lqoiikc5jl ( & rtDW . pmc2mjfvx3 ) ; gbd042go2y ( & rtDW . f32lct1du0 ) ;
o1m4iocjmv ( & rtDW . odwyzbzb3q ) ; b15csreixx ( & rtDW . jyf4ywwf11 ) ;
anfmfwncyk ( & rtDW . ok1l4kluje ) ; ksiqa1jioy ( & rtDW . aomefh15n5 ) ;
puvsi2e35k ( & rtDW . mcrnskrou3 ) ; ik5qe5e3gn ( & rtDW . h502wprcm0 ) ;
lh0vflmbah ( & rtDW . psluq53bh5 ) ; otgzv3ygco ( & rtDW . mm0axov05p ) ;
glmksrsft4 ( & rtDW . prjjcc3mxy ) ; btwb2tza3v ( & rtDW . ju3onx0ww2 ) ;
l51dggekdp ( & rtDW . ig3hrn2l24 ) ; bluzx5r44q ( & rtDW . gitl1vogja ) ;
pa4uou1gdh ( & rtDW . nbx3n1zru5 ) ; frhugcqjcs ( & rtDW . bzql1z5sfh ) ;
pdytvdxwzu ( & rtDW . hshupcos05 ) ; lqoiikc5jl ( & rtDW . ec1kk3wac3 ) ;
gbd042go2y ( & rtDW . ppnfsuot4z ) ; o1m4iocjmv ( & rtDW . d50tkbrk2e ) ;
b15csreixx ( & rtDW . djq1we332q ) ; anfmfwncyk ( & rtDW . cqouob3iam ) ;
ksiqa1jioy ( & rtDW . l2dw2tngpy ) ; rtDW . mmptt4byoj = false ; rtDW .
a2uqh3n150 = ixbaqxvld3 ; rtDW . gijlhzozco = false ; rtDW . jhliq0ridw =
ixbaqxvld3 ; rtB . asxbhv2ehl = false ; rtB . ixxnliwmtx = false ; rtB .
b1w5jc32hl = false ; rtB . lnsjuvhsgv = 0U ; rtB . foyanegrzs = false ; rtB .
jggt3auzy3 = false ; rtDW . mxw4mzr0uk = 1U ; rtDW . dppgdzgj0x = ij1x2zh0xt
; rtDW . on3sz2avtq = false ; rtDW . injgvgohva = ixbaqxvld3 ; rtB .
eezqixq4vm = false ; rtB . m5q1do0vmq = false ; rtB . ak2vxsyixd = false ;
rtB . crnx15irxr = 0U ; rtB . i0gsq2riyu = 0U ; rtB . lcedt4qay2 = 0U ; rtB .
oy4lh3ff4g = 0U ; rtB . juszgkuo2c = 0U ; rtB . acn2nfsqnj = 0U ; rtB .
fclpv43io0 = false ; rtB . o3tyeeowqy = false ; rtB . fviw5wizdj = false ;
rtB . ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ; rtB . g5l3a2xe55 = 0U ;
rtB . dqgaqsoxml = false ; rtB . pegi3bwz0d = false ; rtB . kfreac4rr1 =
false ; rtDW . ljw5ghzdsf = 1U ; rtDW . fotv1vmuhj = oofuxnhizy ; rtDW .
b0gd0xwnrv = false ; rtDW . ncoe4ckqww = ixbaqxvld3 ; rtDW . dgivirmjgy = 1U
; rtDW . i5gi0zotho = hfujwvncqw ; rtB . my1rk5yzqh = false ; friwhnxto2 ( &
rtB . p0vbpdtq52 , & rtDW . p0vbpdtq52 ) ; mgrwe21vin ( & rtB . cmiciuw2cg ,
& rtDW . cmiciuw2cg ) ; eipz3ms3lx ( & rtB . baulvd1vdb , & rtDW . baulvd1vdb
) ; friwhnxto2 ( & rtB . edawel13bx , & rtDW . edawel13bx ) ; mgrwe21vin ( &
rtB . ndmardmusd , & rtDW . ndmardmusd ) ; eipz3ms3lx ( & rtB . hv3vc22vuw ,
& rtDW . hv3vc22vuw ) ; rtDW . j43lisdiks = false ; rtDW . fnmb2ixb3q =
ixbaqxvld3 ; rtB . iverpshyww = false ; rtB . byrcscl5ea = false ; rtB .
pfsqkqryqg = 0U ; rtB . hkn30qaypu = false ; rtB . kx5ekbveof = false ; rtDW
. iwbojjhhe5 = 1U ; rtDW . l1cjdkruqq = ij1x2zh0xt ; rtDW . bp0z35htv2 =
false ; rtDW . fopsvccudd = ixbaqxvld3 ; kkvsri4cxy ( & rtDW . faha5qigiv5 )
; kkvsri4cxy ( & rtDW . dk52awvy35 ) ; rtDW . izhelokxhz = false ; rtDW .
bpt15stayd = ixbaqxvld3 ; kkvsri4cxy ( & rtDW . p1cpbmtwa2 ) ; rtDW .
bcvviips3r = false ; rtDW . nqe3ukp1lv = ixbaqxvld3 ; rtDW . dv1fj1e3po =
false ; rtDW . hedkojaly3 = ixbaqxvld3 ; rtDW . j2xbhujzmo = false ; rtDW .
bfiehwtxx0 = ixbaqxvld3 ; rtDW . nip0s141uc = false ; rtDW . jlfxz1mcjj =
ixbaqxvld3 ; rtDW . gdgxtxgf1g = false ; rtDW . ket4u3rbik = ixbaqxvld3 ;
rtDW . gsqnwqajdt = false ; rtDW . bti3xpysb3 = ixbaqxvld3 ; rtDW .
i5j0r2inrh = false ; rtDW . j2lpy04aok = ixbaqxvld3 ; rtDW . ky01ccojr5 =
false ; rtDW . kxxqdtc3fn = ixbaqxvld3 ; rtDW . pvbkyahyj2 = false ; rtDW .
kigfha511a = ixbaqxvld3 ; rtDW . ebphxvnfm5 = false ; rtDW . gajg5igtez =
ixbaqxvld3 ; rtDW . izd0xxaozr = false ; rtDW . jw30qsqu5r = ixbaqxvld3 ;
rtDW . e2av1fijfk = false ; rtDW . kd2cj1lw5i = ixbaqxvld3 ; rtDW .
h3bh4kq3i4 = false ; rtDW . oksgsz1h3g = ixbaqxvld3 ; rtDW . dtq0brtwgy =
false ; rtDW . pxkqzhdtui = ixbaqxvld3 ; rtDW . n3znxzlzoy = false ; rtDW .
gv1yczvurw = ixbaqxvld3 ; rtDW . ndj0iieydo = false ; rtDW . ftnfscrqnz =
ixbaqxvld3 ; rtDW . fan5swni5z = false ; rtDW . mnmtds151j = ixbaqxvld3 ;
rtDW . db0mrltr1f = false ; rtDW . aiobhqac0s = ixbaqxvld3 ; rtDW .
cslkm1fbej = false ; rtDW . ddstw2zt2h = ixbaqxvld3 ; rtDW . obpqvavpfa =
false ; rtDW . neeztgz5mr = ixbaqxvld3 ; rtDW . ehjpkuq40k = false ; rtDW .
p12ie1kq2d = ixbaqxvld3 ; rtDW . g5esa0nd4h = false ; rtDW . iuph25q4on =
ixbaqxvld3 ; rtDW . ofks3kmj3q = false ; rtDW . fbgth0ylvb = ixbaqxvld3 ;
rtDW . bd1ltj1wwf = false ; rtDW . ksdezs50qp = ixbaqxvld3 ; rtDW .
gkvgzinv2s = false ; rtDW . hepne3hpaw = ixbaqxvld3 ; rtDW . l2wdkwq3l3 =
false ; rtDW . ni0bl2pri0 = ixbaqxvld3 ; rtDW . haxmbuhro2 = false ; rtDW .
a3mcja4urs = ixbaqxvld3 ; rtDW . jw2gcekxcn = false ; rtDW . evli1vcywa =
ixbaqxvld3 ; rtDW . nw0ce5ez2e = false ; rtDW . e4acoao20b = ixbaqxvld3 ;
rtDW . litxgdvmkb = false ; rtDW . mfqd1lsjjw = ixbaqxvld3 ; rtDW .
ettbn5njm2 = false ; rtDW . m3zpcv3djg = ixbaqxvld3 ; rtDW . pyfiwzjg3y =
false ; rtDW . nnbiwtqwas = ixbaqxvld3 ; rtDW . hyj4pez02v = false ; rtDW .
eecce0ocvb = ixbaqxvld3 ; rtDW . axi1h1fttd = false ; rtDW . losfu35ozo =
ixbaqxvld3 ; rtDW . d5x0pmmjhx = false ; rtDW . iqssg2wtlr = ixbaqxvld3 ;
rtDW . lq3hiypoc1 = false ; rtDW . nl3wf33p4z = ixbaqxvld3 ; rtDW .
d5o0clolff = false ; rtDW . cc1pquwq52 = ixbaqxvld3 ; rtDW . nq533x3m4z =
false ; rtDW . lqzocersmx = ixbaqxvld3 ; rtDW . dbyjv3m3km = false ; rtDW .
ixn1qplhkp = ixbaqxvld3 ; rtDW . ghat2mvfdb = false ; rtDW . izhxg5z13h =
ixbaqxvld3 ; rtDW . inefucjrpd = false ; rtDW . bql2kbo1mn = ixbaqxvld3 ;
rtDW . pmqufde2h1 = false ; rtDW . a1uugg3z5q = ixbaqxvld3 ; rtDW .
jknbrx32pj = false ; rtDW . d5oxqf3ihc = ixbaqxvld3 ; rtDW . obmn5cmv54 =
false ; rtDW . caj1z5lk13 = ixbaqxvld3 ; rtDW . gd1fmtj3nb = false ; rtDW .
ltvrxrfwqx = ixbaqxvld3 ; rtDW . jhxq5x40uq = false ; rtDW . d3t2v2pyhe =
ixbaqxvld3 ; rtDW . al1pl4kowr = false ; rtDW . p30s42eq1u = ixbaqxvld3 ;
rtDW . arpmjow3zy = false ; rtDW . jwy1yupkgd = ixbaqxvld3 ; rtDW .
jv0nsgafal = false ; rtDW . ht4iqhimgp = ixbaqxvld3 ; rtDW . frqny0vebk =
false ; rtDW . ljys42kk0x = ixbaqxvld3 ; rtDW . bobm2fibnc = false ; rtDW .
m1vo1ryh5y = ixbaqxvld3 ; rtDW . fpmxpxerkf = false ; rtDW . fchfg0xqd2 =
ixbaqxvld3 ; rtDW . m5qcrrh0rz = false ; rtDW . aedtwpb020 = ixbaqxvld3 ;
rtDW . liujvkzp0o = false ; rtDW . kod452jlzj = ixbaqxvld3 ; rtDW .
f22lusxsbw = false ; rtDW . oeoilbr25n = ixbaqxvld3 ; rtDW . dqeonebn4v =
false ; rtDW . gjyzf1p00w = ixbaqxvld3 ; rtDW . g32xdqkvam = false ; rtDW .
hsn4witota = ixbaqxvld3 ; rtDW . j2ygtkmtdt = false ; rtDW . j4xszwnett =
ixbaqxvld3 ; rtDW . bsiifkcwph = false ; rtDW . gysjg2ez2v = ixbaqxvld3 ;
rtDW . a514ztuygm = false ; rtDW . adpqvxr4pq = ixbaqxvld3 ; rtDW .
jg1x0sgptb = false ; rtDW . oacqmm32n4 = ixbaqxvld3 ; rtDW . hmpn3ysews =
false ; rtDW . g4hhato521 = ixbaqxvld3 ; rtDW . hgyegul2br = false ; rtDW .
fbt5g1jmhm = ixbaqxvld3 ; rtDW . lyf5ek2b3d = false ; rtDW . dmci5bmb3h =
ixbaqxvld3 ; if ( rtDW . bpbbz5llcl . isInitialized == 1 ) { ohqoxehyir ( &
rtDW . bpbbz5llcl ) ; } } void MdlStart ( void ) { int32_T i ; { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"DUALportRAMinterface_v3/Dual Port RAM System" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_UINT32 ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 1 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . pptdm11ter . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "8106ebb7-dc0e-41f2-aa9e-28e50ba1a35d" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . pptdm11ter . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . pptdm11ter . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . pptdm11ter . AQHandles , "7.50008e-06"
, 7.5000750007500074E-6 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW
. pptdm11ter . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . pptdm11ter .
AQHandles , ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . pptdm11ter . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . pptdm11ter . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"DUALportRAMinterface_v3/PL/Multiport Switch" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_UINT32 ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . ntilp42igk . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "154787eb-4790-4425-b1ee-6e1e3f04d1a4" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . ntilp42igk . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . ntilp42igk . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . ntilp42igk . AQHandles , "7.50008e-06"
, 7.5000750007500074E-6 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW
. ntilp42igk . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . ntilp42igk .
AQHandles , ssGetTaskTime ( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . ntilp42igk . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . ntilp42igk . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"DUALportRAMinterface_v3/PL/integration_block1/GA_main" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_BOOLEAN ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 1 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. eeuqv20gpy . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"12956767-96fc-4452-85b6-75c22998a309" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . eeuqv20gpy . AQHandles , hDT , & srcInfo ) ; if ( rtDW . eeuqv20gpy .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . eeuqv20gpy . AQHandles ,
"7.50008e-06" , 7.5000750007500074E-6 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( rtDW . eeuqv20gpy . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( rtDW . eeuqv20gpy . AQHandles , ssGetTaskTime ( rtS , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . eeuqv20gpy . AQHandles , 1
, 5000 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . eeuqv20gpy . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"DUALportRAMinterface_v3/PL/integration_block1/accumulator_scorer" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoCreateFixedPointDataType_BinaryPointScaling ( 0 , 1 , 33 , 15 ) ;
{ sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [ 2 ] = { 1 , 1 } ; sigDims . nDims
= 2 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. a4wfo40qlu . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"1f6bd694-a20f-4022-9ccc-09f01bf9df65" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . a4wfo40qlu . AQHandles , hDT , & srcInfo ) ; if ( rtDW . a4wfo40qlu .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . a4wfo40qlu . AQHandles ,
"7.50008e-06" , 7.5000750007500074E-6 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( rtDW . a4wfo40qlu . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( rtDW . a4wfo40qlu . AQHandles , ssGetTaskTime ( rtS , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . a4wfo40qlu . AQHandles , 1
, 100000 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . a4wfo40qlu . AQHandles
, loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/Mux1"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoCreateFixedPointDataType_BinaryPointScaling ( 0 , 1 , 33 , 15 ) ;
{ sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [ 1 ] = { 7 } ; sigDims . nDims = 1
; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. j20steagju . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"b663615a-13c8-497f-a65d-d1ad457fbcd3" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . j20steagju . AQHandles , hDT , & srcInfo ) ; if ( rtDW . j20steagju .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . j20steagju . AQHandles ,
"7.50008e-06" , 7.5000750007500074E-6 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( rtDW . j20steagju . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( rtDW . j20steagju . AQHandles , ssGetTaskTime ( rtS , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . j20steagju . AQHandles , 1
, 100000 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . j20steagju . AQHandles
, loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual1"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoCreateFixedPointDataType_BinaryPointScaling ( 0 , 1 , 33 , 15 ) ;
{ sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1
; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. ehosh5nmvd . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"f562da44-55a7-4571-a9a9-d53e24ec3de2" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . ehosh5nmvd . AQHandles , hDT , & srcInfo ) ; if ( rtDW . ehosh5nmvd .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . ehosh5nmvd . AQHandles ,
"7.50008e-06" , 7.5000750007500074E-6 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( rtDW . ehosh5nmvd . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( rtDW . ehosh5nmvd . AQHandles , ssGetTaskTime ( rtS , 0
) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . ehosh5nmvd . AQHandles , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . ehosh5nmvd . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} rtDW . pjoh3gen5u = true ; rtDW . iry4sotwjo . isInitialized = 1 ; for ( i
= 0 ; i < 8 ; i ++ ) { rtDW . iry4sotwjo . inputVarSize [ 0 ] . f1 [ i ] = 1U
; rtDW . iry4sotwjo . inputVarSize [ 1 ] . f1 [ i ] = 1U ; rtDW . iry4sotwjo
. inputVarSize [ 2 ] . f1 [ i ] = 1U ; rtDW . iry4sotwjo . inputVarSize [ 3 ]
. f1 [ i ] = 1U ; rtDW . iry4sotwjo . inputVarSize [ 4 ] . f1 [ i ] = 1U ;
rtDW . iry4sotwjo . inputVarSize [ 5 ] . f1 [ i ] = 1U ; } rtDW . iry4sotwjo
. pOutWriteData [ 0 ] = 0U ; rtDW . iry4sotwjo . pOutWriteData [ 1 ] = 0U ;
memset ( & rtDW . iry4sotwjo . pRAM [ 0 ] , 0 , sizeof ( uint32_T ) << 16U )
; { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "simin" ; fromwksInfo -> origDataTypeId
= 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo -> origWidth = 1 ;
fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo -> data = ( void
* ) rtP . FromWorkspace1_Data0 ; fromwksInfo -> nDataPoints = 6145 ;
fromwksInfo -> time = ( double * ) rtP . FromWorkspace1_Time0 ; rtDW .
hf3r3q1vp5 . TimePtr = fromwksInfo -> time ; rtDW . hf3r3q1vp5 . DataPtr =
fromwksInfo -> data ; rtDW . hf3r3q1vp5 . RSimInfoPtr = fromwksInfo ; } rtDW
. pqxstp3wgr . PrevIndex = 0 ; } { FWksInfo * fromwksInfo ; if ( (
fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL )
) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "simin2" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 1 ; fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo
-> data = ( void * ) rtP . FromWorkspace2_Data0 ; fromwksInfo -> nDataPoints
= 6145 ; fromwksInfo -> time = ( double * ) rtP . FromWorkspace2_Time0 ; rtDW
. mlstiem1xs . TimePtr = fromwksInfo -> time ; rtDW . mlstiem1xs . DataPtr =
fromwksInfo -> data ; rtDW . mlstiem1xs . RSimInfoPtr = fromwksInfo ; } rtDW
. ablkijkmz5 . PrevIndex = 0 ; } na4ougiori ( & rtDW . itndmcozqm ) ; rtDW .
fda20uvw2n = true ; rtDW . bpbbz5llcl . isInitialized = 1 ; jfd4g2kq55 ( &
rtDW . bpbbz5llcl ) ; na4ougiori ( & rtDW . dcguzoxh2sb ) ; rtB . j3qwka3dz0
= rtP . Constant6_Value ; rtDW . g5332d55t5 . isInitialized = 0 ; rtDW .
g5332d55t5 . matlabCodegenIsDeleted = false ; rtDW . p5x4qrbnra = true ;
ipbyhx4yqv4d ( & rtDW . g5332d55t5 , rtB . miciunji1q ) ; rtDW . hez3ezrpq2 .
isInitialized = 0 ; rtDW . hez3ezrpq2 . matlabCodegenIsDeleted = false ; rtDW
. fl5kdak43c = true ; ipbyhx4yqv4dv ( & rtDW . hez3ezrpq2 , rtB . kekccrspru
) ; rtDW . gxmahoppaw . isInitialized = 0 ; rtDW . gxmahoppaw .
matlabCodegenIsDeleted = false ; rtDW . mbyb3mwghk = true ; ipbyhx4yqv4dvp (
& rtDW . gxmahoppaw , rtB . kmk1xozmep ) ; rtDW . msaff0w3sl . isInitialized
= 0 ; rtDW . msaff0w3sl . matlabCodegenIsDeleted = false ; rtDW . evuw2ur1ju
= true ; ipbyhx4yqv4dvpc ( & rtDW . msaff0w3sl , rtB . dqvaaxkm0c ) ; rtDW .
e1hogwivrq . isInitialized = 0 ; rtDW . e1hogwivrq . matlabCodegenIsDeleted =
false ; rtDW . e2i1vst4ks = true ; ipbyhx4yqv ( & rtDW . e1hogwivrq , rtB .
inppcqltf1 ) ; rtDW . ea4uoiztke . isInitialized = 0 ; rtDW . ea4uoiztke .
matlabCodegenIsDeleted = false ; rtDW . ode0ma3jvt = true ; ipbyhx4yqv4 ( &
rtDW . ea4uoiztke , rtB . hejdym2tei ) ; MdlInitialize ( ) ; } void
MdlOutputs ( int_T tid ) { real_T emlko2u5nr ; real_T eorg405cmo ; int128m_T
tmp_b ; int128m_T tmp_c ; int128m_T tmp_d ; int128m_T tmp_dz ; int128m_T
tmp_e ; int128m_T tmp_f ; int128m_T tmp_g ; int128m_T tmp_i ; int128m_T tmp_j
; int128m_T tmp_k ; int128m_T tmp_l ; int128m_T tmp_m ; int128m_T tmp_n ;
int128m_T tmp_o ; int64_T ax1os5beb5 [ 7 ] ; int64_T ccti0gk5yx [ 7 ] ;
int64_T gmtpbv5pvg [ 7 ] ; int64_T m22nqui1bi [ 7 ] ; int64_T pkbd1la3mm [ 7
] ; int64_T abgny5zyjv ; int64_T amx0onpu1v ; int64_T aqnthyitf4 ; int64_T
bhmoboe03f ; int64_T bl2anjfcfc ; int64_T cbeb1wr0lp ; int64_T cfxfq11zaj ;
int64_T cxa1qe3ugf ; int64_T d3pde30pup ; int64_T dsr1ucmofc ; int64_T
dzaau1c1kq ; int64_T ei3empue34 ; int64_T ekvtaths5r ; int64_T esziabortj ;
int64_T ewpg2u2awi ; int64_T g1mostggzn ; int64_T gcrfrlu2o0 ; int64_T
gdbvugq0pt ; int64_T h2hfyuv101 ; int64_T hmorz21zys ; int64_T hx3vqh14m5 ;
int64_T i1nvm0aluv ; int64_T ingqnu4dzy ; int64_T iywdbx13d5 ; int64_T
j1uusdi4j1 ; int64_T ja4a02iepm ; int64_T jij1wfzbki ; int64_T jyhlxlsoll ;
int64_T kr2pjpgzrf ; int64_T ku3zo4ilzc ; int64_T kukoxaxnav ; int64_T
m0axfycdzu ; int64_T m4k4rtnd54 ; int64_T msvcqpyins ; int64_T nn01cenknv ;
int64_T nt4o3zmoam ; int64_T nwggkm1uex ; int64_T o3r4pmyall ; int64_T
oio3fefqho ; int64_T pbyarjw5ez ; int64_T pdn5a4hgvg ; int64_T pgdei1x1yh ;
int64_T ple1dumubu ; int64_T pmd53unqbg ; real_T dataInOutMem ; real_T
obj_pCurSOF ; uint64_T tmp ; int32_T czd4gkqvqb ; int32_T d2z2mlkhau ;
int32_T dnalu4umge ; int32_T f55qmvntt1 ; int32_T g1p0s0iovv ; int32_T i ;
int32_T m04c3n0yke ; uint32_T tmp_p ; int16_T l3zjtadzzx ; int16_T lxopikmfru
; uint16_T a0tz4rvn4r ; uint16_T elx3nv0dfg ; uint16_T j35xcli0s2 ; int8_T
eeerwixu5w ; int8_T embmejwflu ; int8_T fktn3lagj4 ; int8_T ha3rfpb3e2 ;
int8_T ilu1filn3o ; int8_T oyytl0kyxu ; int8_T p3ub3wtylp ; int8_T ptgibrb03q
; uint8_T fxukkrzowb ; uint8_T gcdfegzolx ; uint8_T i0wgux15t1 ; uint8_T
kcruvnwyqu ; uint8_T ln4xdikysc ; uint8_T mhwetvtb21 ; uint8_T nkvblhrpx2 ;
uint8_T p4p5rnrsvk ; boolean_T abcjncnm3l ; boolean_T aeaq1dg12n ; boolean_T
ak52hc3kla ; boolean_T amxrt3m4lu ; boolean_T ao5kvx5htb ; boolean_T
asxlf1xrdl ; boolean_T bfzpm5h3ib ; boolean_T cfkubkdzyf ; boolean_T
cvinfdydnt ; boolean_T d05i0imjvx ; boolean_T dieh02pbbz ; boolean_T
dnrgtbkacr ; boolean_T drztvx2kd1 ; boolean_T ecbexyd0ph ; boolean_T
egrazjjv2f ; boolean_T eibrss4syk ; boolean_T f3bakvrxam ; boolean_T
fbcqdx30fd ; boolean_T fdsgadmqx2 ; boolean_T grlx3eas12 ; boolean_T
gxdicukpye ; boolean_T hsd3fkb2vr ; boolean_T ia1dtrqdgh ; boolean_T
ia2xzb20oo ; boolean_T inhnbdxcvg ; boolean_T iohvoh3hot ; boolean_T
irvbj4tgny ; boolean_T ita5etr0mm ; boolean_T ittgwn0gal ; boolean_T
iu4w4bqqv1 ; boolean_T j13cb0cety ; boolean_T jctawczzk3 ; boolean_T
kgp5a3mgtp ; boolean_T l0oufvzla1 ; boolean_T l2tg01s4nq ; boolean_T
lngy05heex ; boolean_T lrzouzj3wx ; boolean_T mcmzp2ckvi ; boolean_T
mxwmnlovus ; boolean_T nrvm3tyilv ; boolean_T o55pf3lytg ; boolean_T
om2m42btur ; boolean_T omcbqse5ik ; boolean_T on0cqe0glx ; boolean_T
otarriw4qv ; boolean_T pmhvwvvcq0 ; SimStruct * S ; void * diag ; jreuwb1n0z
( & rtDW . iry4sotwjo , true ) ; rtB . gu0cktaz3m = rtDW . iry4sotwjo .
pOutWriteData [ 0 ] ; rtB . fkc3zxbycu = rtDW . iry4sotwjo . pOutWriteData [
1 ] ; g2rlwqx2xm ( rtDW . jl34i02arl [ 0 ] , & rtB . gw0bb4lu4k , & rtDW .
gw0bb4lu4k ) ; cqyo42y2gh ( rtDW . jl34i02arl [ 0 ] , & rtB . fbu1mofswb , &
rtDW . fbu1mofswb ) ; o3izwcuble ( rtDW . jl34i02arl [ 0 ] , & rtB .
chadwwtb33 , & rtDW . chadwwtb33 ) ; gvbyuajj10 ( rtDW . jl34i02arl [ 0 ] , &
rtB . jkhbxjlbpd , & rtDW . jkhbxjlbpd ) ; dfgw4kuzso ( rtDW . jl34i02arl [ 0
] , & rtB . ph0c5wwhlf , & rtDW . ph0c5wwhlf ) ; m2rovdpxpj ( rtDW .
jl34i02arl [ 0 ] , & rtB . hqymuumkk2 , & rtDW . hqymuumkk2 ) ; gzu0v1k154 (
rtDW . jl34i02arl [ 0 ] , & rtB . jnhmigxpfr , & rtDW . jnhmigxpfr ) ;
bx4q2vjdxx ( rtDW . jl34i02arl [ 0 ] , & rtB . ayc1u05z0b , & rtDW .
ayc1u05z0b ) ; dmnv2typrk ( rtDW . jl34i02arl [ 0 ] , & rtB . ctkwb4rte4 , &
rtDW . ctkwb4rte4 ) ; c45nfqxt1b ( rtDW . jl34i02arl [ 0 ] , & rtB .
atko2rhysz , & rtDW . atko2rhysz ) ; nv44ttbdg3 ( rtDW . jl34i02arl [ 0 ] , &
rtB . jwlq00h0qp , & rtDW . jwlq00h0qp ) ; am45qhx1eq ( rtDW . jl34i02arl [ 0
] , & rtB . ekp05fi01e , & rtDW . ekp05fi01e ) ; im0j4vocky ( rtDW .
jl34i02arl [ 0 ] , & rtB . eeeqgos433 , & rtDW . eeeqgos433 ) ; hexdymfazx (
rtDW . jl34i02arl [ 0 ] , & rtB . diaw2yowgl , & rtDW . diaw2yowgl ) ;
pdnjandzta ( rtDW . jl34i02arl [ 0 ] , & rtB . k0pzgqkvwb , & rtDW .
k0pzgqkvwb ) ; if ( ssGetTaskTime ( rtS , 0 ) < rtP . Ts * 6146.0 ) { rtB .
li4ud3n1ur = rtP . Step1_Y0 ; } else { rtB . li4ud3n1ur = rtP . Step1_YFinal
; } { real_T * pDataValues = ( real_T * ) rtDW . hf3r3q1vp5 . DataPtr ;
real_T * pTimeValues = ( real_T * ) rtDW . hf3r3q1vp5 . TimePtr ; int_T
currTimeIndex = rtDW . pqxstp3wgr . PrevIndex ; real_T t = ssGetTaskTime (
rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo *
) rtDW . hf3r3q1vp5 . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ;
lastPoint = numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0
; } else if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint -
1 ; } else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t <
pTimeValues [ currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >=
pTimeValues [ currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW .
pqxstp3wgr . PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [
currTimeIndex ] ; real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 ==
t2 ) { if ( t < t1 ) { emlko2u5nr = pDataValues [ currTimeIndex ] ; } else {
emlko2u5nr = pDataValues [ currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2
- t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T
TimeIndex = currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues
[ TimeIndex + 1 ] ; emlko2u5nr = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2
) ; pDataValues += numPoints ; } } } obj_pCurSOF = muDoubleScalarFloor (
emlko2u5nr * 16384.0 ) ; if ( muDoubleScalarIsNaN ( obj_pCurSOF ) ||
muDoubleScalarIsInf ( obj_pCurSOF ) ) { obj_pCurSOF = 0.0 ; } else {
obj_pCurSOF = muDoubleScalarRem ( obj_pCurSOF , 65536.0 ) ; } if (
obj_pCurSOF < 0.0 ) { l3zjtadzzx = ( int16_T ) - ( int16_T ) ( uint16_T ) -
obj_pCurSOF ; } else { l3zjtadzzx = ( int16_T ) ( uint16_T ) obj_pCurSOF ; }
g2rlwqx2xm ( l3zjtadzzx , & rtB . g2rlwqx2xml , & rtDW . g2rlwqx2xml ) ;
cqyo42y2gh ( l3zjtadzzx , & rtB . cqyo42y2ghh , & rtDW . cqyo42y2ghh ) ;
o3izwcuble ( l3zjtadzzx , & rtB . o3izwcublel , & rtDW . o3izwcublel ) ;
gvbyuajj10 ( l3zjtadzzx , & rtB . gvbyuajj10j , & rtDW . gvbyuajj10j ) ;
dfgw4kuzso ( l3zjtadzzx , & rtB . dfgw4kuzso2 , & rtDW . dfgw4kuzso2 ) ;
m2rovdpxpj ( l3zjtadzzx , & rtB . m2rovdpxpjx , & rtDW . m2rovdpxpjx ) ;
gzu0v1k154 ( l3zjtadzzx , & rtB . gzu0v1k154f , & rtDW . gzu0v1k154f ) ;
bx4q2vjdxx ( l3zjtadzzx , & rtB . bx4q2vjdxxp , & rtDW . bx4q2vjdxxp ) ;
dmnv2typrk ( l3zjtadzzx , & rtB . dmnv2typrkz , & rtDW . dmnv2typrkz ) ;
c45nfqxt1b ( l3zjtadzzx , & rtB . c45nfqxt1bx , & rtDW . c45nfqxt1bx ) ;
nv44ttbdg3 ( l3zjtadzzx , & rtB . nv44ttbdg32 , & rtDW . nv44ttbdg32 ) ;
am45qhx1eq ( l3zjtadzzx , & rtB . am45qhx1eqm , & rtDW . am45qhx1eqm ) ;
im0j4vocky ( l3zjtadzzx , & rtB . im0j4vockyt , & rtDW . im0j4vockyt ) ;
hexdymfazx ( l3zjtadzzx , & rtB . hexdymfazx2 , & rtDW . hexdymfazx2 ) ;
pdnjandzta ( l3zjtadzzx , & rtB . pdnjandztac , & rtDW . pdnjandztac ) ; if (
( boolean_T ) ( ( rtB . li4ud3n1ur != 0.0 ) ^ ( rtDW . mmbeeyt2c3 [ 0 ] !=
0.0 ) ) ) { i = rtP . Gain_Gain_luguv4skm5 ; } else { i = 0 ; } if ( i != 0 )
{ rtB . m3rzx1y5tc = ( uint32_T ) ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( uint8_T )
( rtB . gw0bb4lu4k . ncs0hoa1j5 >> 14 ) & 1 ) << 1 | ( ( uint8_T ) ( rtDW .
jl34i02arl [ 0 ] >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . fbu1mofswb .
h5i5xy41ea >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . chadwwtb33 .
lavrwzhcrp >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . jkhbxjlbpd .
crugzopkfg >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . ph0c5wwhlf .
ddekw2q1y4 >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . hqymuumkk2 .
agq2cvcyz0 >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . jnhmigxpfr .
awrhkte3yd >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . ayc1u05z0b .
jgambcvtl0 >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . ctkwb4rte4 .
c0n1xa2bz2 >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . atko2rhysz .
eslgbrlmfk >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . jwlq00h0qp .
gnjj4zylsj >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . ekp05fi01e .
jn3vnl0uhn >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . eeeqgos433 .
heoxs0loqa >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . diaw2yowgl .
iqxwhfezhq >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . k0pzgqkvwb .
pljux34q0r >> 14 ) & 1 ) ) ; } else { rtB . m3rzx1y5tc = ( uint32_T ) ( ( ( (
( ( ( ( ( ( ( ( ( ( ( ( ( uint8_T ) ( rtB . g2rlwqx2xml . ncs0hoa1j5 >> 14 )
& 1 ) << 1 | ( ( uint8_T ) ( l3zjtadzzx >> 14 ) & 1 ) ) << 1 | ( ( uint8_T )
( rtB . cqyo42y2ghh . h5i5xy41ea >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
o3izwcublel . lavrwzhcrp >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
gvbyuajj10j . crugzopkfg >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
dfgw4kuzso2 . ddekw2q1y4 >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
m2rovdpxpjx . agq2cvcyz0 >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
gzu0v1k154f . awrhkte3yd >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
bx4q2vjdxxp . jgambcvtl0 >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
dmnv2typrkz . c0n1xa2bz2 >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
c45nfqxt1bx . eslgbrlmfk >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
nv44ttbdg32 . gnjj4zylsj >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
am45qhx1eqm . jn3vnl0uhn >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
im0j4vockyt . heoxs0loqa >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
hexdymfazx2 . iqxwhfezhq >> 14 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
pdnjandztac . pljux34q0r >> 14 ) & 1 ) ) ; } if ( ssGetTaskTime ( rtS , 0 ) <
rtP . Ts * 0.0 ) { rtB . dxib5ld313 = rtP . Step1_Y0_psyct5ihq5 ; } else {
rtB . dxib5ld313 = rtP . Step1_YFinal_k2gsuswhgo ; } if ( ( boolean_T ) ( (
rtB . dxib5ld313 != 0.0 ) ^ ( rtDW . ghw5kalbtu [ 0 ] != 0.0 ) ) ) { i = rtP
. Gain_Gain_hehkc3jgen ; } else { i = 0 ; } rtB . i3ff0r1vbw = ( i != 0 ) ;
if ( rtB . i3ff0r1vbw ) { rtB . hcy5womvyf = rtP . Gain_Gain_mygr3ck4si ; }
else { rtB . hcy5womvyf = 0U ; } rtB . kpbfqapfvb = rtDW . kwwlxjzdoe ; rtB .
iws4xfo1q5 = rtDW . kbijeiibcz [ 0 ] ; { real_T * pDataValues = ( real_T * )
rtDW . mlstiem1xs . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW .
mlstiem1xs . TimePtr ; int_T currTimeIndex = rtDW . ablkijkmz5 . PrevIndex ;
real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . mlstiem1xs . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . ablkijkmz5 . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { eorg405cmo =
pDataValues [ currTimeIndex ] ; } else { eorg405cmo = pDataValues [
currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ;
real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex
+ 1 ] ; eorg405cmo = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ;
pDataValues += numPoints ; } } } obj_pCurSOF = muDoubleScalarFloor (
eorg405cmo * 16384.0 ) ; if ( muDoubleScalarIsNaN ( obj_pCurSOF ) ||
muDoubleScalarIsInf ( obj_pCurSOF ) ) { obj_pCurSOF = 0.0 ; } else {
obj_pCurSOF = muDoubleScalarRem ( obj_pCurSOF , 65536.0 ) ; } if (
obj_pCurSOF < 0.0 ) { rtB . fuqnxov3qi = ( int16_T ) - ( int16_T ) ( uint16_T
) - obj_pCurSOF ; } else { rtB . fuqnxov3qi = ( int16_T ) ( uint16_T )
obj_pCurSOF ; } rtB . p5drb3xhsc = l3zjtadzzx - rtB . fuqnxov3qi ; { if (
rtDW . pptdm11ter . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
rtDW . pptdm11ter . AQHandles , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB
. fkc3zxbycu + 0 ) ; } } a0tz4rvn4r = ( uint16_T ) ( rtDW . kwwlxjzdoe + rtP
. FixPtConstant_Value ) ; if ( a0tz4rvn4r > rtP . WrapToZero_Threshold ) {
rtB . kutvr5wkxy = rtP . Constant_Value_ddc4aulvds ; } else { rtB .
kutvr5wkxy = a0tz4rvn4r ; } rtB . p3plncwt3y = rtDW . dv5jqwdcth ; esziabortj
= rtDW . o2s0qk524e ; ku3zo4ilzc = rtDW . bujt1u5ssb ; mggcxvqcxn ( rtDW .
bujt1u5ssb , & rtB . mggcxvqcxnx , & rtDW . mggcxvqcxnx ) ; k33a52bgwi ( rtDW
. bujt1u5ssb , & rtB . k33a52bgwif , & rtDW . k33a52bgwif ) ; nt3t3nwbzj (
rtDW . bujt1u5ssb , & rtB . nt3t3nwbzjn , & rtDW . nt3t3nwbzjn ) ; aazmv33tcm
( rtDW . bujt1u5ssb , & rtB . aazmv33tcmo , & rtDW . aazmv33tcmo ) ;
bstd1u2cpo ( rtDW . bujt1u5ssb , & rtB . bstd1u2cpob , & rtDW . bstd1u2cpob )
; f2rydg4dp1 ( rtDW . bujt1u5ssb , & rtB . f2rydg4dp1k , & rtDW . f2rydg4dp1k
) ; j11vdnbc5b ( rtDW . bujt1u5ssb , & rtB . j11vdnbc5b2 , & rtDW .
j11vdnbc5b2 ) ; m1qiz2ekay ( rtDW . bujt1u5ssb , & rtB . m1qiz2ekayi , & rtDW
. m1qiz2ekayi ) ; dlafdnj3fg ( rtDW . bujt1u5ssb , & rtB . dlafdnj3fgi , &
rtDW . dlafdnj3fgi ) ; onrxopzil0 ( rtDW . bujt1u5ssb , & rtB . onrxopzil04 ,
& rtDW . onrxopzil04 ) ; fxuvuc5ilx ( rtDW . bujt1u5ssb , & rtB . fxuvuc5ilx3
, & rtDW . fxuvuc5ilx3 ) ; po54rt51rv ( rtDW . bujt1u5ssb , & rtB .
po54rt51rvx , & rtDW . po54rt51rvx ) ; fzp5yrcmst ( rtDW . bujt1u5ssb , & rtB
. fzp5yrcmsta , & rtDW . fzp5yrcmsta ) ; hx2bxym1a4 ( rtDW . bujt1u5ssb , &
rtB . hx2bxym1a4g , & rtDW . hx2bxym1a4g ) ; jtd3j4qmtj ( rtDW . bujt1u5ssb ,
& rtB . jtd3j4qmtj3 , & rtDW . jtd3j4qmtj3 ) ; mtt1ayedix ( rtDW . bujt1u5ssb
, & rtB . mtt1ayedixs , & rtDW . mtt1ayedixs ) ; kum1vfui1c ( rtDW .
bujt1u5ssb , & rtB . kum1vfui1c3 , & rtDW . kum1vfui1c3 ) ; dzaau1c1kq = rtDW
. ch3ulmwkxf ; mggcxvqcxn ( rtDW . ch3ulmwkxf , & rtB . pnkexv004t , & rtDW .
pnkexv004t ) ; k33a52bgwi ( rtDW . ch3ulmwkxf , & rtB . a1r25vmwrh , & rtDW .
a1r25vmwrh ) ; nt3t3nwbzj ( rtDW . ch3ulmwkxf , & rtB . kkcnk3nues , & rtDW .
kkcnk3nues ) ; aazmv33tcm ( rtDW . ch3ulmwkxf , & rtB . crqoduzoa4 , & rtDW .
crqoduzoa4 ) ; bstd1u2cpo ( rtDW . ch3ulmwkxf , & rtB . liocd5kn1l , & rtDW .
liocd5kn1l ) ; f2rydg4dp1 ( rtDW . ch3ulmwkxf , & rtB . nljvbf4yun , & rtDW .
nljvbf4yun ) ; j11vdnbc5b ( rtDW . ch3ulmwkxf , & rtB . depkfxt3dl , & rtDW .
depkfxt3dl ) ; m1qiz2ekay ( rtDW . ch3ulmwkxf , & rtB . e0yth1yr5j , & rtDW .
e0yth1yr5j ) ; dlafdnj3fg ( rtDW . ch3ulmwkxf , & rtB . pr5yb11xg2 , & rtDW .
pr5yb11xg2 ) ; onrxopzil0 ( rtDW . ch3ulmwkxf , & rtB . jqkgyvk5wj , & rtDW .
jqkgyvk5wj ) ; fxuvuc5ilx ( rtDW . ch3ulmwkxf , & rtB . c4ex142obk , & rtDW .
c4ex142obk ) ; po54rt51rv ( rtDW . ch3ulmwkxf , & rtB . cit10epw2d , & rtDW .
cit10epw2d ) ; fzp5yrcmst ( rtDW . ch3ulmwkxf , & rtB . dhqnhtbmwa , & rtDW .
dhqnhtbmwa ) ; hx2bxym1a4 ( rtDW . ch3ulmwkxf , & rtB . d3o4x0ovlb , & rtDW .
d3o4x0ovlb ) ; jtd3j4qmtj ( rtDW . ch3ulmwkxf , & rtB . fpel54lr1q , & rtDW .
fpel54lr1q ) ; mtt1ayedix ( rtDW . ch3ulmwkxf , & rtB . buqfyhw4zg , & rtDW .
buqfyhw4zg ) ; kum1vfui1c ( rtDW . ch3ulmwkxf , & rtB . il5ne4vyn3 , & rtDW .
il5ne4vyn3 ) ; aqnthyitf4 = rtDW . npnmarbxwp ; mggcxvqcxn ( rtDW .
npnmarbxwp , & rtB . lcttqdmfq0 , & rtDW . lcttqdmfq0 ) ; k33a52bgwi ( rtDW .
npnmarbxwp , & rtB . p2dpdzhqcw , & rtDW . p2dpdzhqcw ) ; nt3t3nwbzj ( rtDW .
npnmarbxwp , & rtB . dax5mxpt1x , & rtDW . dax5mxpt1x ) ; aazmv33tcm ( rtDW .
npnmarbxwp , & rtB . okqcrlylqk , & rtDW . okqcrlylqk ) ; bstd1u2cpo ( rtDW .
npnmarbxwp , & rtB . gegc3wkr22 , & rtDW . gegc3wkr22 ) ; f2rydg4dp1 ( rtDW .
npnmarbxwp , & rtB . dticnm5yh1 , & rtDW . dticnm5yh1 ) ; j11vdnbc5b ( rtDW .
npnmarbxwp , & rtB . bc2ak5uvom , & rtDW . bc2ak5uvom ) ; m1qiz2ekay ( rtDW .
npnmarbxwp , & rtB . aj5wkrbghc , & rtDW . aj5wkrbghc ) ; dlafdnj3fg ( rtDW .
npnmarbxwp , & rtB . bu3vpkznrt , & rtDW . bu3vpkznrt ) ; onrxopzil0 ( rtDW .
npnmarbxwp , & rtB . o3fupwkw3j , & rtDW . o3fupwkw3j ) ; fxuvuc5ilx ( rtDW .
npnmarbxwp , & rtB . ob2fx4wpxa , & rtDW . ob2fx4wpxa ) ; po54rt51rv ( rtDW .
npnmarbxwp , & rtB . pyfhcpopnq , & rtDW . pyfhcpopnq ) ; fzp5yrcmst ( rtDW .
npnmarbxwp , & rtB . gkwxar31g1 , & rtDW . gkwxar31g1 ) ; hx2bxym1a4 ( rtDW .
npnmarbxwp , & rtB . gmghl42rva , & rtDW . gmghl42rva ) ; jtd3j4qmtj ( rtDW .
npnmarbxwp , & rtB . k1pxlisolz , & rtDW . k1pxlisolz ) ; mtt1ayedix ( rtDW .
npnmarbxwp , & rtB . dud531lchs , & rtDW . dud531lchs ) ; kum1vfui1c ( rtDW .
npnmarbxwp , & rtB . bmgxswof1n , & rtDW . bmgxswof1n ) ; ewpg2u2awi = rtDW .
luidyjwywm ; mggcxvqcxn ( rtDW . luidyjwywm , & rtB . edsrfmi5oc , & rtDW .
edsrfmi5oc ) ; k33a52bgwi ( rtDW . luidyjwywm , & rtB . o44pc0z3gt , & rtDW .
o44pc0z3gt ) ; nt3t3nwbzj ( rtDW . luidyjwywm , & rtB . dq1vaupevs , & rtDW .
dq1vaupevs ) ; aazmv33tcm ( rtDW . luidyjwywm , & rtB . pg2gn3izhv , & rtDW .
pg2gn3izhv ) ; bstd1u2cpo ( rtDW . luidyjwywm , & rtB . cp2x5swpim , & rtDW .
cp2x5swpim ) ; f2rydg4dp1 ( rtDW . luidyjwywm , & rtB . a5ydisma0n , & rtDW .
a5ydisma0n ) ; j11vdnbc5b ( rtDW . luidyjwywm , & rtB . fmiwt01ncc , & rtDW .
fmiwt01ncc ) ; m1qiz2ekay ( rtDW . luidyjwywm , & rtB . logcpemxnl , & rtDW .
logcpemxnl ) ; dlafdnj3fg ( rtDW . luidyjwywm , & rtB . mtb1g0er0c , & rtDW .
mtb1g0er0c ) ; onrxopzil0 ( rtDW . luidyjwywm , & rtB . mr4jil2nb0 , & rtDW .
mr4jil2nb0 ) ; fxuvuc5ilx ( rtDW . luidyjwywm , & rtB . hhpwfeyxv5 , & rtDW .
hhpwfeyxv5 ) ; po54rt51rv ( rtDW . luidyjwywm , & rtB . olew5caigs , & rtDW .
olew5caigs ) ; fzp5yrcmst ( rtDW . luidyjwywm , & rtB . kiv2ffdk2i , & rtDW .
kiv2ffdk2i ) ; hx2bxym1a4 ( rtDW . luidyjwywm , & rtB . dwkrhy1adj , & rtDW .
dwkrhy1adj ) ; jtd3j4qmtj ( rtDW . luidyjwywm , & rtB . c0cv1fecmf , & rtDW .
c0cv1fecmf ) ; mtt1ayedix ( rtDW . luidyjwywm , & rtB . li4w4j22ee , & rtDW .
li4w4j22ee ) ; kum1vfui1c ( rtDW . luidyjwywm , & rtB . gt31hnr3lf , & rtDW .
gt31hnr3lf ) ; i1nvm0aluv = rtDW . nct4dwsy42 ; mggcxvqcxn ( rtDW .
nct4dwsy42 , & rtB . opqx3n1jiv , & rtDW . opqx3n1jiv ) ; k33a52bgwi ( rtDW .
nct4dwsy42 , & rtB . mw2keyc00d , & rtDW . mw2keyc00d ) ; nt3t3nwbzj ( rtDW .
nct4dwsy42 , & rtB . lhl4belrft , & rtDW . lhl4belrft ) ; aazmv33tcm ( rtDW .
nct4dwsy42 , & rtB . iaybj1yga2 , & rtDW . iaybj1yga2 ) ; bstd1u2cpo ( rtDW .
nct4dwsy42 , & rtB . p5zpxze4b1 , & rtDW . p5zpxze4b1 ) ; f2rydg4dp1 ( rtDW .
nct4dwsy42 , & rtB . d3bzw5xtsk , & rtDW . d3bzw5xtsk ) ; j11vdnbc5b ( rtDW .
nct4dwsy42 , & rtB . bk35bvlqhh , & rtDW . bk35bvlqhh ) ; m1qiz2ekay ( rtDW .
nct4dwsy42 , & rtB . ls5eenr2ad , & rtDW . ls5eenr2ad ) ; dlafdnj3fg ( rtDW .
nct4dwsy42 , & rtB . mx4jv5qqj4 , & rtDW . mx4jv5qqj4 ) ; onrxopzil0 ( rtDW .
nct4dwsy42 , & rtB . cnelbzjfhg , & rtDW . cnelbzjfhg ) ; fxuvuc5ilx ( rtDW .
nct4dwsy42 , & rtB . ludvfohavv , & rtDW . ludvfohavv ) ; po54rt51rv ( rtDW .
nct4dwsy42 , & rtB . pmc2mjfvx3 , & rtDW . pmc2mjfvx3 ) ; fzp5yrcmst ( rtDW .
nct4dwsy42 , & rtB . f32lct1du0 , & rtDW . f32lct1du0 ) ; hx2bxym1a4 ( rtDW .
nct4dwsy42 , & rtB . odwyzbzb3q , & rtDW . odwyzbzb3q ) ; jtd3j4qmtj ( rtDW .
nct4dwsy42 , & rtB . jyf4ywwf11 , & rtDW . jyf4ywwf11 ) ; mtt1ayedix ( rtDW .
nct4dwsy42 , & rtB . ok1l4kluje , & rtDW . ok1l4kluje ) ; kum1vfui1c ( rtDW .
nct4dwsy42 , & rtB . aomefh15n5 , & rtDW . aomefh15n5 ) ; dsr1ucmofc = rtDW .
m21yi3xe0r ; mggcxvqcxn ( rtDW . m21yi3xe0r , & rtB . mcrnskrou3 , & rtDW .
mcrnskrou3 ) ; k33a52bgwi ( rtDW . m21yi3xe0r , & rtB . h502wprcm0 , & rtDW .
h502wprcm0 ) ; nt3t3nwbzj ( rtDW . m21yi3xe0r , & rtB . psluq53bh5 , & rtDW .
psluq53bh5 ) ; aazmv33tcm ( rtDW . m21yi3xe0r , & rtB . mm0axov05p , & rtDW .
mm0axov05p ) ; bstd1u2cpo ( rtDW . m21yi3xe0r , & rtB . prjjcc3mxy , & rtDW .
prjjcc3mxy ) ; f2rydg4dp1 ( rtDW . m21yi3xe0r , & rtB . ju3onx0ww2 , & rtDW .
ju3onx0ww2 ) ; j11vdnbc5b ( rtDW . m21yi3xe0r , & rtB . ig3hrn2l24 , & rtDW .
ig3hrn2l24 ) ; m1qiz2ekay ( rtDW . m21yi3xe0r , & rtB . gitl1vogja , & rtDW .
gitl1vogja ) ; dlafdnj3fg ( rtDW . m21yi3xe0r , & rtB . nbx3n1zru5 , & rtDW .
nbx3n1zru5 ) ; onrxopzil0 ( rtDW . m21yi3xe0r , & rtB . bzql1z5sfh , & rtDW .
bzql1z5sfh ) ; fxuvuc5ilx ( rtDW . m21yi3xe0r , & rtB . hshupcos05 , & rtDW .
hshupcos05 ) ; po54rt51rv ( rtDW . m21yi3xe0r , & rtB . ec1kk3wac3 , & rtDW .
ec1kk3wac3 ) ; fzp5yrcmst ( rtDW . m21yi3xe0r , & rtB . ppnfsuot4z , & rtDW .
ppnfsuot4z ) ; hx2bxym1a4 ( rtDW . m21yi3xe0r , & rtB . d50tkbrk2e , & rtDW .
d50tkbrk2e ) ; jtd3j4qmtj ( rtDW . m21yi3xe0r , & rtB . djq1we332q , & rtDW .
djq1we332q ) ; mtt1ayedix ( rtDW . m21yi3xe0r , & rtB . cqouob3iam , & rtDW .
cqouob3iam ) ; kum1vfui1c ( rtDW . m21yi3xe0r , & rtB . l2dw2tngpy , & rtDW .
l2dw2tngpy ) ; switch ( rtB . p3plncwt3y ) { case 0 : rtB . izq1pj0n5n = (
uint32_T ) ( esziabortj >> 15 ) ; break ; case 1 : rtB . izq1pj0n5n = ( (
uint32_T ) ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( uint8_T ) ( rtB . mggcxvqcxnx .
igjdtuobgr >> 15 ) & 1 ) << 1 | ( ( uint8_T ) ( rtB . k33a52bgwif .
k2dn0g2i22 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtDW . bujt1u5ssb >> 15 ) &
1 ) ) << 1 | ( ( uint8_T ) ( rtB . nt3t3nwbzjn . fpsaqss2rh >> 15 ) & 1 ) )
<< 1 | ( ( uint8_T ) ( rtB . aazmv33tcmo . n5gzqty3ro >> 15 ) & 1 ) ) << 1 |
( ( uint8_T ) ( rtB . bstd1u2cpob . iz5wzxhduw >> 15 ) & 1 ) ) << 1 | ( (
uint8_T ) ( rtB . f2rydg4dp1k . a4bhai3ys3 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T
) ( rtB . j11vdnbc5b2 . idny1f21lj >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB
. m1qiz2ekayi . oozybsfii0 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
dlafdnj3fgi . dnymjzhjl4 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
onrxopzil04 . edk24kfgxw >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
fxuvuc5ilx3 . f3indibbk0 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
po54rt51rvx . ftepdewpox >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
fzp5yrcmsta . k33w3zu5xr >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
hx2bxym1a4g . bokjq0pvqj >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
jtd3j4qmtj3 . egtpphpyd0 >> 15 ) & 1 ) ) << 1 | ( uint32_T ) ( ( uint8_T ) (
rtB . mtt1ayedixs . ar3jokrbaq >> 15 ) & 1 ) ) << 1 | ( uint32_T ) ( (
uint8_T ) ( rtB . kum1vfui1c3 . kqec11mzgl >> 15 ) & 1 ) ; break ; case 2 :
rtB . izq1pj0n5n = ( ( uint32_T ) ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( uint8_T )
( rtB . pnkexv004t . igjdtuobgr >> 15 ) & 1 ) << 1 | ( ( uint8_T ) ( rtB .
a1r25vmwrh . k2dn0g2i22 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtDW .
ch3ulmwkxf >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . kkcnk3nues .
fpsaqss2rh >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . crqoduzoa4 .
n5gzqty3ro >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . liocd5kn1l .
iz5wzxhduw >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . nljvbf4yun .
a4bhai3ys3 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . depkfxt3dl .
idny1f21lj >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . e0yth1yr5j .
oozybsfii0 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . pr5yb11xg2 .
dnymjzhjl4 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . jqkgyvk5wj .
edk24kfgxw >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . c4ex142obk .
f3indibbk0 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . cit10epw2d .
ftepdewpox >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . dhqnhtbmwa .
k33w3zu5xr >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . d3o4x0ovlb .
bokjq0pvqj >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . fpel54lr1q .
egtpphpyd0 >> 15 ) & 1 ) ) << 1 | ( uint32_T ) ( ( uint8_T ) ( rtB .
buqfyhw4zg . ar3jokrbaq >> 15 ) & 1 ) ) << 1 | ( uint32_T ) ( ( uint8_T ) (
rtB . il5ne4vyn3 . kqec11mzgl >> 15 ) & 1 ) ; break ; case 3 : rtB .
izq1pj0n5n = ( ( uint32_T ) ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( uint8_T ) ( rtB
. lcttqdmfq0 . igjdtuobgr >> 15 ) & 1 ) << 1 | ( ( uint8_T ) ( rtB .
p2dpdzhqcw . k2dn0g2i22 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtDW .
npnmarbxwp >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . dax5mxpt1x .
fpsaqss2rh >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . okqcrlylqk .
n5gzqty3ro >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . gegc3wkr22 .
iz5wzxhduw >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . dticnm5yh1 .
a4bhai3ys3 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . bc2ak5uvom .
idny1f21lj >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . aj5wkrbghc .
oozybsfii0 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . bu3vpkznrt .
dnymjzhjl4 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . o3fupwkw3j .
edk24kfgxw >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . ob2fx4wpxa .
f3indibbk0 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . pyfhcpopnq .
ftepdewpox >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . gkwxar31g1 .
k33w3zu5xr >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . gmghl42rva .
bokjq0pvqj >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . k1pxlisolz .
egtpphpyd0 >> 15 ) & 1 ) ) << 1 | ( uint32_T ) ( ( uint8_T ) ( rtB .
dud531lchs . ar3jokrbaq >> 15 ) & 1 ) ) << 1 | ( uint32_T ) ( ( uint8_T ) (
rtB . bmgxswof1n . kqec11mzgl >> 15 ) & 1 ) ; break ; case 4 : rtB .
izq1pj0n5n = ( ( uint32_T ) ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( uint8_T ) ( rtB
. edsrfmi5oc . igjdtuobgr >> 15 ) & 1 ) << 1 | ( ( uint8_T ) ( rtB .
o44pc0z3gt . k2dn0g2i22 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtDW .
luidyjwywm >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . dq1vaupevs .
fpsaqss2rh >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . pg2gn3izhv .
n5gzqty3ro >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . cp2x5swpim .
iz5wzxhduw >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . a5ydisma0n .
a4bhai3ys3 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . fmiwt01ncc .
idny1f21lj >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . logcpemxnl .
oozybsfii0 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . mtb1g0er0c .
dnymjzhjl4 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . mr4jil2nb0 .
edk24kfgxw >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . hhpwfeyxv5 .
f3indibbk0 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . olew5caigs .
ftepdewpox >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . kiv2ffdk2i .
k33w3zu5xr >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . dwkrhy1adj .
bokjq0pvqj >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . c0cv1fecmf .
egtpphpyd0 >> 15 ) & 1 ) ) << 1 | ( uint32_T ) ( ( uint8_T ) ( rtB .
li4w4j22ee . ar3jokrbaq >> 15 ) & 1 ) ) << 1 | ( uint32_T ) ( ( uint8_T ) (
rtB . gt31hnr3lf . kqec11mzgl >> 15 ) & 1 ) ; break ; case 5 : rtB .
izq1pj0n5n = ( ( uint32_T ) ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( ( uint8_T ) ( rtB
. opqx3n1jiv . igjdtuobgr >> 15 ) & 1 ) << 1 | ( ( uint8_T ) ( rtB .
mw2keyc00d . k2dn0g2i22 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtDW .
nct4dwsy42 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . lhl4belrft .
fpsaqss2rh >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . iaybj1yga2 .
n5gzqty3ro >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . p5zpxze4b1 .
iz5wzxhduw >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . d3bzw5xtsk .
a4bhai3ys3 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . bk35bvlqhh .
idny1f21lj >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . ls5eenr2ad .
oozybsfii0 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . mx4jv5qqj4 .
dnymjzhjl4 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . cnelbzjfhg .
edk24kfgxw >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . ludvfohavv .
f3indibbk0 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . pmc2mjfvx3 .
ftepdewpox >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . f32lct1du0 .
k33w3zu5xr >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . odwyzbzb3q .
bokjq0pvqj >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB . jyf4ywwf11 .
egtpphpyd0 >> 15 ) & 1 ) ) << 1 | ( uint32_T ) ( ( uint8_T ) ( rtB .
ok1l4kluje . ar3jokrbaq >> 15 ) & 1 ) ) << 1 | ( uint32_T ) ( ( uint8_T ) (
rtB . aomefh15n5 . kqec11mzgl >> 15 ) & 1 ) ; break ; case 6 : rtB .
izq1pj0n5n = ( ( uint32_T ) ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( (
( ( ( ( ( ( ( ( ( ( ( ( uint8_T ) ( rtB . mcrnskrou3 . igjdtuobgr >> 15 ) & 1
) << 1 | ( ( uint8_T ) ( rtB . h502wprcm0 . k2dn0g2i22 >> 15 ) & 1 ) ) << 1 |
( ( uint8_T ) ( rtDW . m21yi3xe0r >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB
. psluq53bh5 . fpsaqss2rh >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
mm0axov05p . n5gzqty3ro >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
prjjcc3mxy . iz5wzxhduw >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
ju3onx0ww2 . a4bhai3ys3 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
ig3hrn2l24 . idny1f21lj >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
gitl1vogja . oozybsfii0 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
nbx3n1zru5 . dnymjzhjl4 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
bzql1z5sfh . edk24kfgxw >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
hshupcos05 . f3indibbk0 >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
ec1kk3wac3 . ftepdewpox >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
ppnfsuot4z . k33w3zu5xr >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
d50tkbrk2e . bokjq0pvqj >> 15 ) & 1 ) ) << 1 | ( ( uint8_T ) ( rtB .
djq1we332q . egtpphpyd0 >> 15 ) & 1 ) ) << 1 | ( uint32_T ) ( ( uint8_T ) (
rtB . cqouob3iam . ar3jokrbaq >> 15 ) & 1 ) ) << 1 | ( uint32_T ) ( ( uint8_T
) ( rtB . l2dw2tngpy . kqec11mzgl >> 15 ) & 1 ) ; break ; case 7 : rtB .
izq1pj0n5n = ( uint32_T ) ( esziabortj >> 15 ) ; break ; default : rtB .
izq1pj0n5n = ( uint32_T ) ( esziabortj >> 15 ) ; break ; } { if ( rtDW .
ntilp42igk . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW .
ntilp42igk . AQHandles , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB .
izq1pj0n5n + 0 ) ; } } rtDW . a2uqh3n150 = ixbaqxvld3 ; rtB . ixtbqrxark =
rtDW . nys12ztjas ; rtB . powuc0n4v2 = rtDW . gxoqfko3zl ; rtB . jd13hnta5b =
rtDW . cozp4vn1gx ; amx0onpu1v = rtDW . efb0llahxe ; pgdei1x1yh = rtDW .
cwc30hkp0p ; abgny5zyjv = rtDW . kgybnswm2h ; switch ( rtB . ixtbqrxark ) {
case 1 : kr2pjpgzrf = rtDW . efb0llahxe ; break ; case 2 : kr2pjpgzrf = rtDW
. cwc30hkp0p ; break ; case 3 : kr2pjpgzrf = rtDW . kgybnswm2h ; break ;
default : kr2pjpgzrf = rtDW . efb0llahxe ; break ; } cfxfq11zaj = rtDW .
nzmtxoifv5 ; switch ( rtB . ixtbqrxark ) { case 1 : jyhlxlsoll = rtDW .
cwc30hkp0p ; break ; case 2 : jyhlxlsoll = rtDW . kgybnswm2h ; break ; case 3
: jyhlxlsoll = rtDW . nzmtxoifv5 ; break ; default : jyhlxlsoll = rtDW .
cwc30hkp0p ; break ; } rtB . pwumyk4mj5 = ( kr2pjpgzrf > jyhlxlsoll ) ; rtDW
. jhliq0ridw = ixbaqxvld3 ; switch ( rtDW . dppgdzgj0x ) { case fci5xp30ky :
rtDW . dppgdzgj0x = ij1x2zh0xt ; break ; case f5xc3zgh41 : rtB . asxbhv2ehl =
false ; rtDW . dppgdzgj0x = jduobabsvl ; rtB . jggt3auzy3 = false ; rtB .
ixxnliwmtx = false ; break ; case ij1x2zh0xt : if ( rtB . powuc0n4v2 ) { rtDW
. dppgdzgj0x = jduobabsvl ; rtB . jggt3auzy3 = false ; rtB . ixxnliwmtx =
false ; } else { rtB . asxbhv2ehl = false ; rtB . ixxnliwmtx = true ; rtB .
foyanegrzs = false ; rtB . jggt3auzy3 = true ; rtB . b1w5jc32hl = false ; }
break ; case czs520tlml : if ( rtB . ixtbqrxark < 3 ) { rtDW . dppgdzgj0x =
f5xc3zgh41 ; rtB . asxbhv2ehl = true ; } else if ( rtB . jd13hnta5b == 0 ) {
rtDW . dppgdzgj0x = fci5xp30ky ; rtB . b1w5jc32hl = true ; } else if ( rtB .
ixtbqrxark == 3 ) { rtDW . dppgdzgj0x = eh4oiwcenh ; rtB . ixxnliwmtx = true
; rtB . jggt3auzy3 = true ; } break ; case jsvzrv1nlk : if ( rtB . ixtbqrxark
== 3 ) { rtB . lnsjuvhsgv = 0U ; rtB . foyanegrzs = false ; rtDW . dppgdzgj0x
= eh4oiwcenh ; rtB . ixxnliwmtx = true ; rtB . jggt3auzy3 = true ; } else if
( rtB . ixtbqrxark < 3 ) { rtB . lnsjuvhsgv = 0U ; rtB . foyanegrzs = false ;
rtDW . dppgdzgj0x = f5xc3zgh41 ; rtB . asxbhv2ehl = true ; } break ; case
eh4oiwcenh : rtDW . dppgdzgj0x = jduobabsvl ; rtB . jggt3auzy3 = false ; rtB
. ixxnliwmtx = false ; break ; default : if ( ! rtB . pwumyk4mj5 ) { rtDW .
dppgdzgj0x = czs520tlml ; rtB . lnsjuvhsgv = 0U ; } else if ( rtB .
ixtbqrxark == 4 ) { rtDW . dppgdzgj0x = eh4oiwcenh ; rtB . ixxnliwmtx = true
; rtB . jggt3auzy3 = true ; } else if ( rtB . pwumyk4mj5 ) { rtDW .
dppgdzgj0x = jsvzrv1nlk ; rtB . lnsjuvhsgv = rtB . ixtbqrxark ; rtB .
foyanegrzs = true ; } break ; } if ( ssGetTaskTime ( rtS , 0 ) < rtP . Ts *
14000.0 ) { rtB . iho4z3cfly = rtP . Step1_Y0_jaahoyzl40 ; } else { rtB .
iho4z3cfly = rtP . Step1_YFinal_esp4szosrq ; } if ( ( boolean_T ) ( ( rtB .
iho4z3cfly != 0.0 ) ^ ( rtDW . pb1zjp11ah != 0.0 ) ) ) { i = rtP .
Gain_Gain_dwko2h5myg ; } else { i = 0 ; } rtB . lsw4l4smyf = ( i != 0 ) ; rtB
. cde1nzc1wz = rtDW . lsrg3b3izb ; a0tz4rvn4r = rtDW . cm2wzi1df3 ; rtB .
ado5tfrhto = ( rtDW . cm2wzi1df3 == rtP . isFullCheck_const ) ; rtB .
jswhcwepoy = rtB . ado5tfrhto ^ rtDW . e4apruk0cn ; dnrgtbkacr = rtDW .
kdeplemgid ; inhnbdxcvg = rtDW . oq1rde331u ; l0oufvzla1 = rtDW . dri1oggmq0
; o55pf3lytg = rtDW . nv4uj53r02 ; rtB . nhc0fdw3ug = ( uint8_T ) ( ( int32_T
) ( ( uint32_T ) ( ( uint8_T ) ( ( ( uint32_T ) rtDW . kdeplemgid + rtDW .
oq1rde331u ) + rtP . Constant7_Value_kikdqjvaau ) & 7 ) + ( uint8_T ) ( rtDW
. dri1oggmq0 << 1 | rtDW . nv4uj53r02 ) ) & 7 ) ; dieh02pbbz = rtDW .
bxqyzy02ny ; drztvx2kd1 = rtDW . agzzpunc3i ; rtB . o0wzwh53fx = ( uint8_T )
( ( uint8_T ) ( ( uint8_T ) ( rtDW . bxqyzy02ny << 1 | rtDW . agzzpunc3i ) +
rtP . Constant6_Value_elevmgi2no ) & 7 ) ; rtB . j5hwgk53ch = rtDW .
a2kthhvkup ; rtB . oleysdr0yd = rtDW . ptf1jyuocm ; rtDW . injgvgohva =
ixbaqxvld3 ; switch ( rtDW . fotv1vmuhj ) { case pzu23l5q4i : rtDW .
fotv1vmuhj = nqs2xho5j1 ; rtB . fclpv43io0 = false ; rtB . o3tyeeowqy = false
; rtB . fviw5wizdj = false ; rtB . g5l3a2xe55 = 0U ; rtB . dqgaqsoxml = false
; rtB . ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ; rtB . ak2vxsyixd =
true ; rtB . m5q1do0vmq = false ; break ; case dhnrz3p3lc : rtDW . fotv1vmuhj
= nqs2xho5j1 ; rtB . fclpv43io0 = false ; rtB . o3tyeeowqy = false ; rtB .
fviw5wizdj = false ; rtB . g5l3a2xe55 = 0U ; rtB . dqgaqsoxml = false ; rtB .
ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ; rtB . ak2vxsyixd = true ; rtB
. m5q1do0vmq = false ; break ; case ocxblzochp : rtDW . fotv1vmuhj =
nqs2xho5j1 ; rtB . fclpv43io0 = false ; rtB . o3tyeeowqy = false ; rtB .
fviw5wizdj = false ; rtB . g5l3a2xe55 = 0U ; rtB . dqgaqsoxml = false ; rtB .
ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ; rtB . ak2vxsyixd = true ; rtB
. m5q1do0vmq = false ; break ; case megw2qzktw : rtDW . fotv1vmuhj =
nqs2xho5j1 ; rtB . fclpv43io0 = false ; rtB . o3tyeeowqy = false ; rtB .
fviw5wizdj = false ; rtB . g5l3a2xe55 = 0U ; rtB . dqgaqsoxml = false ; rtB .
ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ; rtB . ak2vxsyixd = true ; rtB
. m5q1do0vmq = false ; break ; case n53a5mkeym : rtDW . fotv1vmuhj =
nqs2xho5j1 ; rtB . fclpv43io0 = false ; rtB . o3tyeeowqy = false ; rtB .
fviw5wizdj = false ; rtB . g5l3a2xe55 = 0U ; rtB . dqgaqsoxml = false ; rtB .
ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ; rtB . ak2vxsyixd = true ; rtB
. m5q1do0vmq = false ; break ; case j30nisvtqt : ax24t2w2l3 ( ) ; break ;
case ebf5cvds2x : rtDW . fotv1vmuhj = nqs2xho5j1 ; rtB . fclpv43io0 = false ;
rtB . o3tyeeowqy = false ; rtB . fviw5wizdj = false ; rtB . g5l3a2xe55 = 0U ;
rtB . dqgaqsoxml = false ; rtB . ooqxabrlh0 = false ; rtB . ppe24ahxyy =
false ; rtB . ak2vxsyixd = true ; rtB . m5q1do0vmq = false ; break ; case
eduo52fh1r : rtDW . fotv1vmuhj = pajhb4ygtb ; rtB . kfreac4rr1 = false ;
break ; case kh3hkei35g : rtDW . fotv1vmuhj = oofuxnhizy ; break ; case
g5cwkvlwdn : rtDW . fotv1vmuhj = nqs2xho5j1 ; rtB . fclpv43io0 = false ; rtB
. o3tyeeowqy = false ; rtB . fviw5wizdj = false ; rtB . g5l3a2xe55 = 0U ; rtB
. dqgaqsoxml = false ; rtB . ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ;
rtB . ak2vxsyixd = true ; rtB . m5q1do0vmq = false ; break ; case b3pefdwl4s
: rtDW . fotv1vmuhj = nqs2xho5j1 ; rtB . fclpv43io0 = false ; rtB .
o3tyeeowqy = false ; rtB . fviw5wizdj = false ; rtB . g5l3a2xe55 = 0U ; rtB .
dqgaqsoxml = false ; rtB . ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ;
rtB . ak2vxsyixd = true ; rtB . m5q1do0vmq = false ; break ; case imeuoffcif
: rtDW . fotv1vmuhj = nqs2xho5j1 ; rtB . fclpv43io0 = false ; rtB .
o3tyeeowqy = false ; rtB . fviw5wizdj = false ; rtB . g5l3a2xe55 = 0U ; rtB .
dqgaqsoxml = false ; rtB . ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ;
rtB . ak2vxsyixd = true ; rtB . m5q1do0vmq = false ; break ; case b1hlgybhxi
: rtDW . fotv1vmuhj = nqs2xho5j1 ; rtB . fclpv43io0 = false ; rtB .
o3tyeeowqy = false ; rtB . fviw5wizdj = false ; rtB . g5l3a2xe55 = 0U ; rtB .
dqgaqsoxml = false ; rtB . ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ;
rtB . ak2vxsyixd = true ; rtB . m5q1do0vmq = false ; break ; case li4kekrnna
: rtDW . fotv1vmuhj = nqs2xho5j1 ; rtB . fclpv43io0 = false ; rtB .
o3tyeeowqy = false ; rtB . fviw5wizdj = false ; rtB . g5l3a2xe55 = 0U ; rtB .
dqgaqsoxml = false ; rtB . ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ;
rtB . ak2vxsyixd = true ; rtB . m5q1do0vmq = false ; break ; case e4ml1xds1b
: rtDW . fotv1vmuhj = nqs2xho5j1 ; rtB . fclpv43io0 = false ; rtB .
o3tyeeowqy = false ; rtB . fviw5wizdj = false ; rtB . g5l3a2xe55 = 0U ; rtB .
dqgaqsoxml = false ; rtB . ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ;
rtB . ak2vxsyixd = true ; rtB . m5q1do0vmq = false ; break ; case eisvyocwb5
: rtDW . fotv1vmuhj = nqs2xho5j1 ; rtB . fclpv43io0 = false ; rtB .
o3tyeeowqy = false ; rtB . fviw5wizdj = false ; rtB . g5l3a2xe55 = 0U ; rtB .
dqgaqsoxml = false ; rtB . ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ;
rtB . ak2vxsyixd = true ; rtB . m5q1do0vmq = false ; break ; case bplz1bgu04
: if ( rtB . oleysdr0yd == 50 ) { rtDW . fotv1vmuhj = kh3hkei35g ; rtB .
eezqixq4vm = true ; } else { rtDW . fotv1vmuhj = lwrsi20zvv ; rtB .
m5q1do0vmq = true ; rtB . ak2vxsyixd = true ; rtB . fclpv43io0 = false ; rtB
. ooqxabrlh0 = false ; } break ; case bhhada5sju : rtB . ak2vxsyixd = false ;
rtDW . fotv1vmuhj = jojn2ukp50 ; il1pqidmdp ( ) ; break ; case nqs2xho5j1 :
fd0knrz00s ( ) ; break ; case j2y5ckvher : bteluj4h5m ( ) ; break ; case
oofuxnhizy : isxq4yt2zr ( ) ; break ; case jojn2ukp50 : dcfzm10bmk ( ) ;
break ; case dep4ye2mta : if ( rtB . b1w5jc32hl ) { rtDW . fotv1vmuhj =
nqs2xho5j1 ; rtB . fclpv43io0 = false ; rtB . o3tyeeowqy = false ; rtB .
fviw5wizdj = false ; rtB . g5l3a2xe55 = 0U ; rtB . dqgaqsoxml = false ; rtB .
ooqxabrlh0 = false ; rtB . ppe24ahxyy = false ; rtB . ak2vxsyixd = true ; rtB
. m5q1do0vmq = false ; } break ; case lwrsi20zvv : rtB . ak2vxsyixd = false ;
rtB . m5q1do0vmq = false ; rtDW . fotv1vmuhj = jojn2ukp50 ; il1pqidmdp ( ) ;
break ; default : if ( rtB . jswhcwepoy ) { rtDW . fotv1vmuhj = j2y5ckvher ;
} else { rtB . kfreac4rr1 = false ; } break ; } rtDW . ncoe4ckqww =
ixbaqxvld3 ; switch ( rtDW . i5gi0zotho ) { case eqebeaoewm : j13cb0cety =
true ; nrvm3tyilv = false ; rtB . my1rk5yzqh = false ; if ( rtB . p3plncwt3y
== 12290 ) { rtDW . i5gi0zotho = gezjt1xfty ; j13cb0cety = false ; nrvm3tyilv
= true ; rtB . my1rk5yzqh = false ; } break ; case djirs02oco : j13cb0cety =
true ; nrvm3tyilv = false ; rtB . my1rk5yzqh = true ; if ( rtB . p3plncwt3y
== 8 ) { rtDW . i5gi0zotho = joh0ti2mrg ; j13cb0cety = false ; nrvm3tyilv =
true ; rtB . my1rk5yzqh = false ; } break ; case hfujwvncqw : j13cb0cety =
false ; nrvm3tyilv = true ; rtB . my1rk5yzqh = false ; if ( rtB . lsw4l4smyf
) { rtDW . i5gi0zotho = eqebeaoewm ; j13cb0cety = true ; nrvm3tyilv = false ;
rtB . my1rk5yzqh = false ; } break ; case joh0ti2mrg : rtDW . i5gi0zotho =
hfujwvncqw ; j13cb0cety = false ; nrvm3tyilv = true ; rtB . my1rk5yzqh =
false ; break ; default : j13cb0cety = false ; nrvm3tyilv = true ; rtB .
my1rk5yzqh = false ; if ( rtB . eezqixq4vm ) { rtDW . i5gi0zotho = djirs02oco
; j13cb0cety = true ; nrvm3tyilv = false ; rtB . my1rk5yzqh = true ; } break
; } l3zjtadzzx = ( int16_T ) ( ( rtB . fkc3zxbycu << 14 & 1073741823U ) >> 14
) ; if ( j13cb0cety ) { elx3nv0dfg = rtP . Constant18_Value ; } else {
elx3nv0dfg = rtP . Constant19_Value_kj2e35musi ; } if ( nrvm3tyilv ) {
j35xcli0s2 = rtP . Constant20_Value_eoimjoirva ; } else { j35xcli0s2 = rtB .
p3plncwt3y ; } rtB . c54aceqg1h = ( uint16_T ) ( elx3nv0dfg + j35xcli0s2 ) ;
{ if ( rtDW . eeuqv20gpy . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . eeuqv20gpy . AQHandles , ssGetTaskTime ( rtS , 0 ) ,
( char * ) & rtB . eezqixq4vm + 0 ) ; } } kr2pjpgzrf = rtDW . kk3vqau5j4 ;
jyhlxlsoll = rtDW . kk3vqau5j4 >> 17 ; if ( ( ( uint64_T ) jyhlxlsoll &
4294967296ULL ) != 0ULL ) { jyhlxlsoll |= - 4294967296LL ; } else {
jyhlxlsoll &= 4294967295LL ; } { if ( rtDW . a4wfo40qlu . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . a4wfo40qlu . AQHandles ,
ssGetTaskTime ( rtS , 0 ) , ( char * ) & jyhlxlsoll + 0 ) ; } } rtB .
k3gjcoiaah = rtDW . j3spvmunzs ; rtB . kx4s1bfrve = rtDW . huil4csvle ;
dcguzoxh2s ( & rtB . itndmcozqm , & rtDW . itndmcozqm ) ; if ( rtP .
const_reset_Value ) { if ( rtP . Gain_Gain * rtB . itndmcozqm . bozwbmnpo3 <
0 ) { lxopikmfru = - 1 ; } else { lxopikmfru = 0 ; } } else { lxopikmfru =
rtB . itndmcozqm . bozwbmnpo3 ; } if ( rtDW . cjaep5120g != 0.0 ) { rtB .
mkubyaeqcu = lxopikmfru ; } else { rtB . mkubyaeqcu = rtDW . dmbtvfs22x ; }
rtB . hyhwubxihy = rtB . mkubyaeqcu ; if ( rtDW . noznim2iqz [ rtDW .
a1421jzrsu ] ) { o3r4pmyall = rtP . zero4_Value ; cxa1qe3ugf = rtP .
zero5_Value ; oio3fefqho = rtP . zero6_Value ; } else { o3r4pmyall =
mul_s64_loSR ( rtB . kx4s1bfrve , rtDW . e0hsphy30b , 15ULL ) ; cxa1qe3ugf =
mul_s64_loSR ( rtB . k3gjcoiaah , rtDW . hzvbnr4bgd , 15ULL ) ; oio3fefqho =
mul_s64_loSR ( rtDW . cczfdi3ydg , rtDW . mcbewak1r4 , 15ULL ) ; } rtB .
mzxbve3150 = ( ( ( ( int64_T ) rtB . hyhwubxihy << 18 ) - o3r4pmyall ) -
cxa1qe3ugf ) - oio3fefqho ; if ( rtB . o3tyeeowqy ) { p4p5rnrsvk = rtB .
j5hwgk53ch ; } else { p4p5rnrsvk = rtP . Constant1_Value_oc0x242dem ; } if (
p4p5rnrsvk > rtP . Switch1_Threshold ) { kcruvnwyqu = p4p5rnrsvk ; } else {
kcruvnwyqu = rtP . default_value_Value ; } o3r4pmyall = rtDW . faabslxst2 ;
cxa1qe3ugf = rtDW . gumtab5fnv ; oio3fefqho = rtDW . d3nvmjf1vd ; h2hfyuv101
= rtDW . oruuzh4bzs ; ingqnu4dzy = rtDW . ew53tl52et ; pdn5a4hgvg = rtDW .
afmamtdg1h ; iywdbx13d5 = rtDW . kmhibglhil ; gdbvugq0pt = rtDW . c0mvgpjrpg
; m0axfycdzu = rtDW . oc3xb3ueqi ; bhmoboe03f = rtDW . ggpm4i3hqv ;
jij1wfzbki = rtDW . pgw0quxym3 ; j1uusdi4j1 = rtDW . b3tarjjh2r ; gcrfrlu2o0
= rtDW . bjsvnxykzn ; bl2anjfcfc = rtDW . fn03ogv30b ; pmd53unqbg = rtDW .
o0tgjzszlx ; nwggkm1uex = rtDW . jk0pdacxs0 ; cbeb1wr0lp = rtDW . hkv3n4pgdt
; ple1dumubu = rtDW . msyvbfgmjp ; msvcqpyins = rtDW . i3gumoeyz1 ;
kukoxaxnav = rtDW . gxbtoq4uog ; hmorz21zys = rtDW . aqfzu2hilm ; switch (
kcruvnwyqu ) { case 1 : gmtpbv5pvg [ 0 ] = esziabortj ; gmtpbv5pvg [ 1 ] =
rtDW . bujt1u5ssb ; gmtpbv5pvg [ 2 ] = rtDW . ch3ulmwkxf ; gmtpbv5pvg [ 3 ] =
rtDW . npnmarbxwp ; gmtpbv5pvg [ 4 ] = rtDW . luidyjwywm ; gmtpbv5pvg [ 5 ] =
rtDW . nct4dwsy42 ; gmtpbv5pvg [ 6 ] = rtDW . m21yi3xe0r ; break ; case 2 :
gmtpbv5pvg [ 0 ] = rtDW . faabslxst2 ; gmtpbv5pvg [ 1 ] = rtDW . gumtab5fnv ;
gmtpbv5pvg [ 2 ] = rtDW . d3nvmjf1vd ; gmtpbv5pvg [ 3 ] = rtDW . oruuzh4bzs ;
gmtpbv5pvg [ 4 ] = rtDW . ew53tl52et ; gmtpbv5pvg [ 5 ] = rtDW . afmamtdg1h ;
gmtpbv5pvg [ 6 ] = rtDW . kmhibglhil ; break ; case 3 : gmtpbv5pvg [ 0 ] =
rtDW . c0mvgpjrpg ; gmtpbv5pvg [ 1 ] = rtDW . oc3xb3ueqi ; gmtpbv5pvg [ 2 ] =
rtDW . ggpm4i3hqv ; gmtpbv5pvg [ 3 ] = rtDW . pgw0quxym3 ; gmtpbv5pvg [ 4 ] =
rtDW . b3tarjjh2r ; gmtpbv5pvg [ 5 ] = rtDW . bjsvnxykzn ; gmtpbv5pvg [ 6 ] =
rtDW . fn03ogv30b ; break ; default : gmtpbv5pvg [ 0 ] = rtDW . o0tgjzszlx ;
gmtpbv5pvg [ 1 ] = rtDW . jk0pdacxs0 ; gmtpbv5pvg [ 2 ] = rtDW . hkv3n4pgdt ;
gmtpbv5pvg [ 3 ] = rtDW . msyvbfgmjp ; gmtpbv5pvg [ 4 ] = rtDW . i3gumoeyz1 ;
gmtpbv5pvg [ 5 ] = rtDW . gxbtoq4uog ; gmtpbv5pvg [ 6 ] = rtDW . aqfzu2hilm ;
break ; } for ( i = 0 ; i < 7 ; i ++ ) { if ( p4p5rnrsvk > rtP .
Switch_Threshold ) { ax1os5beb5 [ i ] = gmtpbv5pvg [ i ] ; } else {
ax1os5beb5 [ i ] = ( int64_T ) rtP . ensure_correct_output_Value << 15 ; } }
rtB . ptprh0ewy1 = ( rtDW . do1g134e35 && rtB . pegi3bwz0d ) ^ rtB .
pegi3bwz0d ; if ( rtB . ptprh0ewy1 ) { rtB . e4j4qg1qju = ax1os5beb5 [ 0 ] ;
rtB . igdhiw14ne = ax1os5beb5 [ 1 ] ; rtB . bzrplhmpbv = ax1os5beb5 [ 2 ] ;
rtB . oqxpponqds = ax1os5beb5 [ 3 ] ; rtB . clus3tzhel = ax1os5beb5 [ 4 ] ;
rtB . kb0snyasga = ax1os5beb5 [ 5 ] ; rtB . chlrvyiben = ax1os5beb5 [ 6 ] ; }
else { rtB . e4j4qg1qju = rtDW . etvgfdreuz ; rtB . igdhiw14ne = rtDW .
nwj4wrfqti ; rtB . bzrplhmpbv = rtDW . ceruf15djt ; rtB . oqxpponqds = rtDW .
pjspex5iux ; rtB . clus3tzhel = rtDW . e0hsphy30b ; rtB . kb0snyasga = rtDW .
hzvbnr4bgd ; rtB . chlrvyiben = rtDW . mcbewak1r4 ; } if ( rtDW . noznim2iqz
[ rtDW . a1421jzrsu ] ) { nn01cenknv = rtP . zero_Value ; m4k4rtnd54 = rtP .
zero1_Value ; hx3vqh14m5 = rtP . zero2_Value ; g1mostggzn = rtP . zero3_Value
; } else { nn01cenknv = mul_s64_loSR ( rtB . kx4s1bfrve , rtDW . nwj4wrfqti ,
15ULL ) ; m4k4rtnd54 = mul_s64_loSR ( rtB . k3gjcoiaah , rtDW . ceruf15djt ,
15ULL ) ; hx3vqh14m5 = mul_s64_loSR ( rtDW . cczfdi3ydg , rtDW . pjspex5iux ,
15ULL ) ; g1mostggzn = rtB . mzxbve3150 ; } obj_pCurSOF = rtDW . bpbbz5llcl .
pCurSOF ; if ( rtDW . bpbbz5llcl . pResetStart ) { dataInOutMem = 0.0 ; }
else if ( rtDW . bpbbz5llcl . pRdOutBuffer_roll == rtDW . bpbbz5llcl .
pWrOutBuffer_roll ) { dataInOutMem = rtDW . bpbbz5llcl . pWrOutBuffer_index -
rtDW . bpbbz5llcl . pRdOutBuffer_index ; } else { dataInOutMem = ( 114688.0 -
rtDW . bpbbz5llcl . pRdOutBuffer_index ) + rtDW . bpbbz5llcl .
pWrOutBuffer_index ; } if ( dataInOutMem > 0.0 ) { if ( rtDW . bpbbz5llcl .
pCurSOF == 0.0 ) { obj_pCurSOF = rtDW . bpbbz5llcl . pSOFFifo [ ( int32_T )
rtDW . bpbbz5llcl . pRdFifoAddr - 1 ] ; } else if ( rtDW . bpbbz5llcl .
pSimTime >= rtDW . bpbbz5llcl . pCurSOF + 4096.0 ) { obj_pCurSOF = rtDW .
bpbbz5llcl . pSOFFifo [ ( int32_T ) rtDW . bpbbz5llcl . pRdFifoAddr - 1 ] ; }
if ( ( obj_pCurSOF <= rtDW . bpbbz5llcl . pSimTime ) && ( rtDW . bpbbz5llcl .
pSimTime <= muDoubleScalarCeil ( ( obj_pCurSOF + 4096.0 ) - 1.0 ) ) ) {
g1p0s0iovv = rtDW . bpbbz5llcl . pOutBuffer_cmplx [ ( int32_T ) rtDW .
bpbbz5llcl . pRdOutBuffer_index - 1 ] . re ; f55qmvntt1 = rtDW . bpbbz5llcl .
pOutBuffer_cmplx [ ( int32_T ) rtDW . bpbbz5llcl . pRdOutBuffer_index - 1 ] .
im ; rtB . jcw1xc2cvp = true ; } else { rtB . jcw1xc2cvp = false ; g1p0s0iovv
= rtDW . bpbbz5llcl . pLastData . re ; f55qmvntt1 = rtDW . bpbbz5llcl .
pLastData . im ; } } else { rtB . jcw1xc2cvp = false ; g1p0s0iovv = rtDW .
bpbbz5llcl . pLastData . re ; f55qmvntt1 = rtDW . bpbbz5llcl . pLastData . im
; } rtB . mxxsqcmmd1 = rtDW . fw4xval30t ; mrenxli3mf ( rtB . mxxsqcmmd1 ,
rtB . ptprh0ewy1 , & rtB . p0vbpdtq52 , & rtDW . p0vbpdtq52 ) ; elx3nv0dfg =
rtDW . lqlczeokm5 ; rtB . iibtbmy3js = ( rtDW . lqlczeokm5 == rtP .
isFullCheck_const_dnwpr4ubhl ) ; oe0gcvm3eu ( rtB . kfreac4rr1 , rtB .
iibtbmy3js , & rtB . cmiciuw2cg , & rtDW . cmiciuw2cg ) ; if ( rtB .
p0vbpdtq52 . oxpob150pd ) { rtB . jgpsfkqtlm = ( uint16_T ) ( ( uint16_T ) (
rtB . mxxsqcmmd1 + rtP . Constant3_Value_jicc02cxb2 ) & 8191 ) ; } else { rtB
. jgpsfkqtlm = ( uint16_T ) ( ( uint16_T ) rtP . Constant4_Value_nlo43egwjb &
8191 ) ; } mg2ewwtppa ( rtB . jgpsfkqtlm , & rtB . baulvd1vdb , & rtDW .
baulvd1vdb ) ; nrvm3tyilv = rtDW . jr11b3ek0i [ rtDW . gkp23xlorn ] ;
pmhvwvvcq0 = rtDW . cprxs0oxb4 ; j13cb0cety = rtDW . i4kbnwgsra ; rtB .
pk2gp5ieg3 = rtB . baulvd1vdb . n1wklyyqdj ; p4p5rnrsvk = rtDW . ehzhklig5r ;
if ( rtDW . ehzhklig5r == rtP . CompareToConstant_const_ivoeinhxcp ) {
fbcqdx30fd = rtB . pk2gp5ieg3 ; } else { fbcqdx30fd = ( ( rtP .
Gain_Gain_ml3xtuu02u != 0 ) && rtB . pk2gp5ieg3 ) ; } lrzouzj3wx = ( rtDW .
lqlczeokm5 == rtP . Constant_Value ) ; if ( rtP . AssertionPopEmpty_Enabled
&& ( fbcqdx30fd && lrzouzj3wx ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 ,
 "DUALportRAMinterface_v3/PL/integration_block1/FIFO_system1/HDL FIFO1/Diagnostics/Assertion PopEmpty"
, 2 , ssGetT ( rtS ) ) ; rt_ssReportDiagnosticAsWarning ( S , diag ) ; } rtB
. dqkrpjmrh2 = ( rtB . cmiciuw2cg . ehjybluxrg || rtB . baulvd1vdb .
n1wklyyqdj ) ; kcruvnwyqu = rtDW . g2rlyn1hgy ; if ( rtDW . g2rlyn1hgy == rtP
. CompareToConstant_const_posh5s4xsw ) { irvbj4tgny = rtB . dqkrpjmrh2 ; }
else { irvbj4tgny = ( ( rtP . Gain_Gain_einss3wx2k != 0 ) && rtB . dqkrpjmrh2
) ; } if ( rtP . AssertionPushOntoFull_Enabled && ( irvbj4tgny && ( !
fbcqdx30fd ) && rtB . iibtbmy3js ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 ,
 "DUALportRAMinterface_v3/PL/integration_block1/FIFO_system1/HDL FIFO1/Diagnostics/Assertion PushOntoFull"
, 2 , ssGetT ( rtS ) ) ; rt_ssReportDiagnosticAsWarning ( S , diag ) ; } rtB
. iffclt3o01 = ( irvbj4tgny && ( fbcqdx30fd || ( ! rtB . iibtbmy3js ) ) ) ;
lrzouzj3wx = ( ( ! lrzouzj3wx ) && fbcqdx30fd ) ; if ( ( ! rtB . iffclt3o01 )
&& lrzouzj3wx ) { j35xcli0s2 = ( uint16_T ) ( ( uint16_T ) ( rtP .
NumConstant_Value + elx3nv0dfg ) & rtP . BitwiseOperator_BitMask & 8191 ) ; }
else { j35xcli0s2 = elx3nv0dfg ; } dcguzoxh2s ( & rtB . dcguzoxh2sb , & rtDW
. dcguzoxh2sb ) ; if ( rtP . const_reset_Value_hrlcmymt02 ) { if ( rtP .
Gain_Gain_lrjbfg0ynv * rtB . dcguzoxh2sb . bozwbmnpo3 < 0 ) { lxopikmfru = -
1 ; } else { lxopikmfru = 0 ; } } else { lxopikmfru = rtB . dcguzoxh2sb .
bozwbmnpo3 ; } if ( rtDW . ermftxd5xs != 0.0 ) { rtB . mosxs4b4hc =
lxopikmfru ; } else { rtB . mosxs4b4hc = rtDW . n2whdu3eol ; } rtB .
nbft1phsmy = rtB . mosxs4b4hc ; if ( rtB . iffclt3o01 && ( ! lrzouzj3wx ) ) {
j35xcli0s2 = ( uint16_T ) ( ( uint16_T ) ( rtP . IncrConstant_Value +
j35xcli0s2 ) & rtP . BitwiseOperator_BitMask_pwzdp1p2gi & 8191 ) ; } if ( rtP
. const_reset_Value_hrlcmymt02 ) { rtB . f2g2jifa2y = rtP . reset_val_Value ;
} else { rtB . f2g2jifa2y = j35xcli0s2 ; } rtB . mbj2mutwd5 = rtDW .
ipzfjakadv ; if ( lrzouzj3wx ) { j35xcli0s2 = ( uint16_T ) ( ( uint16_T ) (
rtDW . faksgtgdka + rtB . mbj2mutwd5 ) & rtP .
BitwiseOperator_BitMask_ehalreex2c & 8191 ) ; } else { j35xcli0s2 = rtB .
mbj2mutwd5 ; } if ( rtP . const_reset_Value_hrlcmymt02 ) { rtB . ibkohs1h3z =
rtP . IncrConstant1_Value ; } else { rtB . ibkohs1h3z = j35xcli0s2 ; } if (
rtB . ibkohs1h3z == rtP . CompareToConstant_const ) { rtB . lzl2ffamjt = rtP
. AddrAdjustConstant_Value ; } else { rtB . lzl2ffamjt = rtP .
IncrConstant_Value_ll54klyazt ; } rtB . kmipgkcive = rtDW . gcyq4coupa ; if (
rtB . iffclt3o01 ) { j35xcli0s2 = ( uint16_T ) ( ( uint16_T ) ( rtDW .
jvuxplwco4 + rtB . kmipgkcive ) & rtP . BitwiseOperator_BitMask_n0cbpf4iig &
8191 ) ; } else { j35xcli0s2 = rtB . kmipgkcive ; } if ( rtP .
const_reset_Value_hrlcmymt02 ) { rtB . fp4igtyz5u = rtP .
reset_val_Value_n5pozfaht2 ; } else { rtB . fp4igtyz5u = j35xcli0s2 ; } if (
rtB . fp4igtyz5u == rtP . CompareToConstant_const_jm5v5xzbex ) { rtB .
d1f2rjqdua = rtP . AddrAdjustConstant_Value_a3sw0qx2oy ; } else { rtB .
d1f2rjqdua = rtP . IncrConstant_Value_mzxjl015qf ; } if ( elx3nv0dfg > rtP .
Constant_Value_oll5issp5s ) { rtB . hcderxtk0s = ( ( ! rtP .
const_reset_Value_hrlcmymt02 ) && fbcqdx30fd ) ; } else { rtB . hcderxtk0s =
rtP . noPop_Value ; } mhwetvtb21 = ( uint8_T ) ( rtDW . cmvo3isroh + rtP .
FixPtConstant_Value_okrdpvczwf ) ; if ( mhwetvtb21 > rtP .
WrapToZero_Threshold_ae5l2yn5e5 ) { rtB . hnjhybbatf = rtP .
Constant_Value_pylrfbkr3w ; } else { rtB . hnjhybbatf = mhwetvtb21 ; } if (
rtB . cmiciuw2cg . ehjybluxrg ) { rtB . hq44czkd4s = l3zjtadzzx ; } else {
rtB . hq44czkd4s = rtB . nbft1phsmy ; } if ( rtDW . cmvo3isroh == rtP .
CompareToConstant_const_ki2qdk1tft ) { rtB . e0v0leqg2p = rtB . hq44czkd4s ;
} else if ( rtP . Gain_Gain_kcftg05ccd * rtB . hq44czkd4s < 0 ) { rtB .
e0v0leqg2p = - 1 ; } else { rtB . e0v0leqg2p = 0 ; } kcruvnwyqu += rtP .
FixPtConstant_Value_bhgeu0fpar ; if ( kcruvnwyqu > rtP .
WrapToZero_Threshold_ogbjsdyhzu ) { rtB . ib5sxzeq4h = rtP .
Constant_Value_c2yb2rxu1u ; } else { rtB . ib5sxzeq4h = kcruvnwyqu ; }
p4p5rnrsvk += rtP . FixPtConstant_Value_nuaehx1n4j ; if ( p4p5rnrsvk > rtP .
WrapToZero_Threshold_glw20ldyqo ) { rtB . e5dpgjg4y5 = rtP .
Constant_Value_dyxnhvyys4 ; } else { rtB . e5dpgjg4y5 = p4p5rnrsvk ; } rtB .
n3eede2p1d = ( rtB . baulvd1vdb . n1wklyyqdj && pmhvwvvcq0 ) ; nrvm3tyilv = (
rtB . n3eede2p1d && nrvm3tyilv ) ; rtB . o45kvswdjc = nrvm3tyilv ^ rtB .
n3eede2p1d ; rtB . gesedfh4dk = ( rtB . n3eede2p1d && rtDW . akcvng45tl [
rtDW . gkjrmoqlie ] ) ^ nrvm3tyilv ; rtB . o0u1hreq1x = rtB . iibtbmy3js ^
j13cb0cety ; rtB . lardbdwd5v = rtDW . b4hfbet4ba ; mrenxli3mf ( rtB .
lardbdwd5v , rtB . ptprh0ewy1 , & rtB . edawel13bx , & rtDW . edawel13bx ) ;
oe0gcvm3eu ( rtB . o0u1hreq1x , rtB . ado5tfrhto , & rtB . ndmardmusd , &
rtDW . ndmardmusd ) ; if ( rtB . edawel13bx . oxpob150pd ) { rtB . leazcb1h2j
= ( uint16_T ) ( ( uint16_T ) ( rtB . lardbdwd5v + rtP .
Constant3_Value_hij2fz2nza ) & 8191 ) ; } else { rtB . leazcb1h2j = (
uint16_T ) ( ( uint16_T ) rtP . Constant4_Value_bt4p1vnj5a & 8191 ) ; }
mg2ewwtppa ( rtB . leazcb1h2j , & rtB . hv3vc22vuw , & rtDW . hv3vc22vuw ) ;
j13cb0cety = rtDW . fr2u3bfpll ; rtB . gdzcs5xhqx = rtB . hv3vc22vuw .
n1wklyyqdj ; p4p5rnrsvk = rtDW . nc0waz21t1 ; if ( rtDW . nc0waz21t1 == rtP .
CompareToConstant_const_jl51uhveun ) { nrvm3tyilv = rtB . gdzcs5xhqx ; } else
{ nrvm3tyilv = ( ( rtP . Gain_Gain_anelmwmycq != 0 ) && rtB . gdzcs5xhqx ) ;
} pmhvwvvcq0 = ( a0tz4rvn4r == rtP . Constant_Value_jgols0rxxs ) ; if ( rtP .
AssertionPopEmpty_Enabled_ebr4dv3pcg && ( nrvm3tyilv && pmhvwvvcq0 ) ) { S =
rtS ; diag = CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" ,
2 , 5 ,
 "DUALportRAMinterface_v3/PL/integration_block1/FIFO_system3/HDL FIFO1/Diagnostics/Assertion PopEmpty"
, 2 , ssGetT ( rtS ) ) ; rt_ssReportDiagnosticAsWarning ( S , diag ) ; } rtB
. kyvfywflgu = ( rtB . ndmardmusd . ehjybluxrg || rtB . hv3vc22vuw .
n1wklyyqdj ) ; kcruvnwyqu = rtDW . c0pmhbmlvb ; if ( rtDW . c0pmhbmlvb == rtP
. CompareToConstant_const_mrpnokptev ) { fbcqdx30fd = rtB . kyvfywflgu ; }
else { fbcqdx30fd = ( ( rtP . Gain_Gain_ph1dkuretp != 0 ) && rtB . kyvfywflgu
) ; } if ( rtP . AssertionPushOntoFull_Enabled_gmaggsveqa && ( fbcqdx30fd &&
( ! nrvm3tyilv ) && rtB . ado5tfrhto ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 ,
 "DUALportRAMinterface_v3/PL/integration_block1/FIFO_system3/HDL FIFO1/Diagnostics/Assertion PushOntoFull"
, 2 , ssGetT ( rtS ) ) ; rt_ssReportDiagnosticAsWarning ( S , diag ) ; } rtB
. meb2o0zddj = ( fbcqdx30fd && ( nrvm3tyilv || ( ! rtB . ado5tfrhto ) ) ) ;
pmhvwvvcq0 = ( ( ! pmhvwvvcq0 ) && nrvm3tyilv ) ; if ( ( ! rtB . meb2o0zddj )
&& pmhvwvvcq0 ) { elx3nv0dfg = ( uint16_T ) ( ( uint16_T ) ( rtP .
NumConstant_Value_fq3tfadzbs + a0tz4rvn4r ) & rtP .
BitwiseOperator_BitMask_porvum2fca & 8191 ) ; } else { elx3nv0dfg =
a0tz4rvn4r ; } if ( rtB . meb2o0zddj && ( ! pmhvwvvcq0 ) ) { elx3nv0dfg = (
uint16_T ) ( ( uint16_T ) ( rtP . IncrConstant_Value_cxaok3igbi + elx3nv0dfg
) & rtP . BitwiseOperator_BitMask_czqch3cncq & 8191 ) ; } if ( rtP .
const_reset_Value ) { rtB . mcwekkioni = rtP . reset_val_Value_l1dbjb542c ; }
else { rtB . mcwekkioni = elx3nv0dfg ; } rtB . h1cqgq2mge = rtDW . b4ujwta3wy
; if ( pmhvwvvcq0 ) { elx3nv0dfg = ( uint16_T ) ( ( uint16_T ) ( rtDW .
dfsdkk5fjk + rtB . h1cqgq2mge ) & rtP . BitwiseOperator_BitMask_fecpnjly5b &
8191 ) ; } else { elx3nv0dfg = rtB . h1cqgq2mge ; } if ( rtP .
const_reset_Value ) { rtB . jhop355m1z = rtP . IncrConstant1_Value_kw2v1cyoq2
; } else { rtB . jhop355m1z = elx3nv0dfg ; } if ( rtB . jhop355m1z == rtP .
CompareToConstant_const_lll3g54fhb ) { rtB . ogv1sxnzas = rtP .
AddrAdjustConstant_Value_pdroplg4xo ; } else { rtB . ogv1sxnzas = rtP .
IncrConstant_Value_k3kwic4qgc ; } rtB . en0j55pc4g = rtDW . jcvtghq3ig ; if (
rtB . meb2o0zddj ) { elx3nv0dfg = ( uint16_T ) ( ( uint16_T ) ( rtDW .
cqvzla0ulg + rtB . en0j55pc4g ) & rtP . BitwiseOperator_BitMask_g1o031ib0b &
8191 ) ; } else { elx3nv0dfg = rtB . en0j55pc4g ; } if ( rtP .
const_reset_Value ) { rtB . eshaopbfyp = rtP . reset_val_Value_f5fszdqqtc ; }
else { rtB . eshaopbfyp = elx3nv0dfg ; } if ( rtB . eshaopbfyp == rtP .
CompareToConstant_const_dskpsc1lyx ) { rtB . kux04xr1ty = rtP .
AddrAdjustConstant_Value_ioznfhsvzm ; } else { rtB . kux04xr1ty = rtP .
IncrConstant_Value_lii13my4ix ; } if ( a0tz4rvn4r > rtP .
Constant_Value_ky2ahhvhu0 ) { rtB . la1nmi4wem = ( ( ! rtP .
const_reset_Value ) && nrvm3tyilv ) ; } else { rtB . la1nmi4wem = rtP .
noPop_Value_mjxdhsvlst ; } mhwetvtb21 = ( uint8_T ) ( rtDW . fx4qkmoomx + rtP
. FixPtConstant_Value_ehporg5fvl ) ; if ( mhwetvtb21 > rtP .
WrapToZero_Threshold_bn4w3ibzxo ) { rtB . dot2jgysgh = rtP .
Constant_Value_adi2n2a0cl ; } else { rtB . dot2jgysgh = mhwetvtb21 ; } if (
rtB . ndmardmusd . ehjybluxrg ) { rtB . blm5pegnxq = l3zjtadzzx ; } else {
rtB . blm5pegnxq = rtB . hyhwubxihy ; } if ( rtDW . fx4qkmoomx == rtP .
CompareToConstant_const_fv1a5xrnzm ) { rtB . mgemxwmqco = rtB . blm5pegnxq ;
} else if ( rtP . Gain_Gain_p1g0zps2tu * rtB . blm5pegnxq < 0 ) { rtB .
mgemxwmqco = - 1 ; } else { rtB . mgemxwmqco = 0 ; } kcruvnwyqu += rtP .
FixPtConstant_Value_ei22421lfm ; if ( kcruvnwyqu > rtP .
WrapToZero_Threshold_ccnvtzvkfy ) { rtB . h3pnk0oaza = rtP .
Constant_Value_oligm1bz2g ; } else { rtB . h3pnk0oaza = kcruvnwyqu ; }
p4p5rnrsvk += rtP . FixPtConstant_Value_ce4d11zyxj ; if ( p4p5rnrsvk > rtP .
WrapToZero_Threshold_ishuyoslnw ) { rtB . h3px1sgc3g = rtP .
Constant_Value_kk2xbfbwqa ; } else { rtB . h3px1sgc3g = p4p5rnrsvk ; } rtB .
lkarecbrf1 = ( rtB . hv3vc22vuw . n1wklyyqdj && j13cb0cety ) ; rtB .
j3qwka3dz0 = rtP . Constant6_Value ; tmp = rtDW . g5332d55t5 . pPipeline [ 3
] ; if ( rtDW . dzft24s4wf ) { i = rtP . Constant2_Value - ( int32_T ) ( tmp
>> 42 ) ; if ( ( ( uint32_T ) i & 131072U ) != 0U ) { m04c3n0yke = i | -
131072 ; } else { m04c3n0yke = i & 131071 ; } } else { i = ( int32_T ) ( tmp
>> 42 ) + rtP . Constant2_Value ; if ( ( ( uint32_T ) i & 65536U ) != 0U ) {
m04c3n0yke = i | - 65536 ; } else { m04c3n0yke = i & 65535 ; } } tmp = rtDW .
hez3ezrpq2 . pPipeline [ 3 ] ; if ( rtDW . jcwpmucczd ) { i = rtP .
Constant3_Value - ( int32_T ) ( tmp >> 44 ) ; if ( ( ( uint32_T ) i & 131072U
) != 0U ) { dnalu4umge = i | - 131072 ; } else { dnalu4umge = i & 131071 ; }
} else { i = ( int32_T ) ( tmp >> 44 ) + rtP . Constant3_Value ; if ( ( (
uint32_T ) i & 131072U ) != 0U ) { dnalu4umge = i | - 131072 ; } else {
dnalu4umge = i & 131071 ; } } tmp = rtDW . gxmahoppaw . pPipeline [ 3 ] ; if
( rtDW . i3cg55zsq5 ) { i = rtP . Constant3_Value_mxd540vau4 - ( int32_T ) (
tmp >> 44 ) ; if ( ( ( uint32_T ) i & 131072U ) != 0U ) { d2z2mlkhau = i | -
131072 ; } else { d2z2mlkhau = i & 131071 ; } } else { i = ( int32_T ) ( tmp
>> 44 ) + rtP . Constant3_Value_mxd540vau4 ; if ( ( ( uint32_T ) i & 131072U
) != 0U ) { d2z2mlkhau = i | - 131072 ; } else { d2z2mlkhau = i & 131071 ; }
} tmp = rtDW . msaff0w3sl . pPipeline [ 3 ] ; if ( rtDW . duv4e2eeyz ) { i =
( ( rtP . Constant4_Value << 1 ) - ( int32_T ) ( tmp >> 46 ) ) >> 1 ; if ( (
( uint32_T ) i & 131072U ) != 0U ) { rtB . kome2rjb2j = i | - 131072 ; } else
{ rtB . kome2rjb2j = i & 131071 ; } } else { i = ( int32_T ) ( tmp >> 46 ) +
( rtP . Constant4_Value << 1 ) ; if ( ( ( uint32_T ) i & 131072U ) != 0U ) {
i |= - 131072 ; } else { i &= 131071 ; } rtB . kome2rjb2j = i >> 1 ; } tmp =
rtDW . e1hogwivrq . pPipeline [ 3 ] ; if ( rtDW . cqzpsciwb0 ) { i = rtP .
Constant16_Value - ( int32_T ) ( tmp >> 42 ) ; if ( ( ( uint32_T ) i &
131072U ) != 0U ) { rtB . clc43xnwkh = i | - 131072 ; } else { rtB .
clc43xnwkh = i & 131071 ; } } else { i = ( int32_T ) ( tmp >> 42 ) + rtP .
Constant16_Value ; if ( ( ( uint32_T ) i & 65536U ) != 0U ) { rtB .
clc43xnwkh = i | - 65536 ; } else { rtB . clc43xnwkh = i & 65535 ; } } tmp =
rtDW . ea4uoiztke . pPipeline [ 3 ] ; if ( rtDW . bgf0isn4m2 ) { i = rtP .
Constant3_Value_htxwytgvd0 - ( int32_T ) ( tmp >> 44 ) ; if ( ( ( uint32_T )
i & 131072U ) != 0U ) { czd4gkqvqb = i | - 131072 ; } else { czd4gkqvqb = i &
131071 ; } } else { i = ( int32_T ) ( tmp >> 44 ) + rtP .
Constant3_Value_htxwytgvd0 ; if ( ( ( uint32_T ) i & 131072U ) != 0U ) {
czd4gkqvqb = i | - 131072 ; } else { czd4gkqvqb = i & 131071 ; } } switch (
rtB . g5l3a2xe55 ) { case 1 : mhwetvtb21 = rtB . j5hwgk53ch ; break ; case 2
: mhwetvtb21 = ( uint8_T ) ( ( uint8_T ) ( ( uint8_T ) ( rtDW . iooznguwv5 <<
1 | rtDW . bkmzxq31d1 ) + rtP . Constant5_Value_h5a3mj5l2n ) & 15 ) ; break ;
default : mhwetvtb21 = rtP . Constant4_Value_j042mwjans ; break ; } if (
mhwetvtb21 > rtP . Switch1_Threshold_ke1b2onbxf ) { p4p5rnrsvk = mhwetvtb21 ;
} else { p4p5rnrsvk = rtP . default_value_Value_h5lcckccaz ; } gmtpbv5pvg [ 0
] = amx0onpu1v ; gmtpbv5pvg [ 1 ] = rtDW . lrozmwruae ; gmtpbv5pvg [ 2 ] =
rtDW . a33feioxw2 ; gmtpbv5pvg [ 3 ] = rtDW . afrmbd0iw3 ; gmtpbv5pvg [ 4 ] =
rtDW . anfgrndojq ; gmtpbv5pvg [ 5 ] = rtDW . hwkvzcsfaz ; gmtpbv5pvg [ 6 ] =
rtDW . cuscr1mv1o ; switch ( p4p5rnrsvk ) { case 1 : for ( i = 0 ; i < 7 ; i
++ ) { m22nqui1bi [ i ] = gmtpbv5pvg [ i ] ; } break ; case 2 : m22nqui1bi [
0 ] = pgdei1x1yh ; m22nqui1bi [ 1 ] = rtDW . hi5sxdgutv ; m22nqui1bi [ 2 ] =
rtDW . g3mwssejug ; m22nqui1bi [ 3 ] = rtDW . ohb2remyso ; m22nqui1bi [ 4 ] =
rtDW . nnehvfm43x ; m22nqui1bi [ 5 ] = rtDW . lqy3n4vuo3 ; m22nqui1bi [ 6 ] =
rtDW . noj5hcq43l ; break ; case 3 : m22nqui1bi [ 0 ] = abgny5zyjv ;
m22nqui1bi [ 1 ] = rtDW . h4kqpzy0bk ; m22nqui1bi [ 2 ] = rtDW . ehukj5uhzp ;
m22nqui1bi [ 3 ] = rtDW . lma0feztag ; m22nqui1bi [ 4 ] = rtDW . balpcok03t ;
m22nqui1bi [ 5 ] = rtDW . kbtqs1lj34 ; m22nqui1bi [ 6 ] = rtDW . pdm2ofpuvs ;
break ; default : m22nqui1bi [ 0 ] = cfxfq11zaj ; m22nqui1bi [ 1 ] = rtDW .
jgcfuyvz2d ; m22nqui1bi [ 2 ] = rtDW . p1ngo54os1 ; m22nqui1bi [ 3 ] = rtDW .
pru2133ish ; m22nqui1bi [ 4 ] = rtDW . kspt2mhisp ; m22nqui1bi [ 5 ] = rtDW .
kq5e4yhmjq ; m22nqui1bi [ 6 ] = rtDW . gr0nnucbwg ; break ; } for ( i = 0 ; i
< 7 ; i ++ ) { if ( mhwetvtb21 > rtP . Switch_Threshold_b0engqzvpo ) { rtB .
fffnnm2yt3 [ i ] = m22nqui1bi [ i ] ; } else { rtB . fffnnm2yt3 [ i ] = (
int64_T ) rtP . ensure_correct_output_Value_c34npqfhgr << 15 ; } } switch (
rtB . juszgkuo2c ) { case 1 : ja4a02iepm = dnalu4umge ; break ; case 2 :
ja4a02iepm = rtDW . ceatu2c3ih ; break ; default : ja4a02iepm = rtB .
fffnnm2yt3 [ 1 ] ; break ; } switch ( rtB . acn2nfsqnj ) { case 1 :
ei3empue34 = d2z2mlkhau ; break ; case 2 : ei3empue34 = rtDW . mzlkr3j3p5 ;
break ; default : ei3empue34 = rtB . fffnnm2yt3 [ 2 ] ; break ; } switch (
rtB . oy4lh3ff4g ) { case 1 : d3pde30pup = rtB . kome2rjb2j ; break ; case 2
: d3pde30pup = rtDW . hr0f0pllzb ; break ; default : d3pde30pup = rtB .
fffnnm2yt3 [ 3 ] ; break ; } switch ( rtB . crnx15irxr ) { case 1 :
nt4o3zmoam = rtB . clc43xnwkh ; break ; case 2 : nt4o3zmoam = rtDW .
lj4qjxl3d5 ; break ; default : nt4o3zmoam = rtB . fffnnm2yt3 [ 4 ] ; break ;
} switch ( rtB . i0gsq2riyu ) { case 1 : ekvtaths5r = czd4gkqvqb ; break ;
case 2 : ekvtaths5r = rtDW . fwq22fuszr ; break ; default : ekvtaths5r = rtB
. fffnnm2yt3 [ 5 ] ; break ; } switch ( rtB . lcedt4qay2 ) { case 1 :
pbyarjw5ez = m04c3n0yke ; break ; case 2 : pbyarjw5ez = rtDW . lw2of50kxw ;
break ; default : pbyarjw5ez = rtB . fffnnm2yt3 [ 6 ] ; break ; } if ( rtB .
fclpv43io0 ) { mhwetvtb21 = rtB . j5hwgk53ch ; } else { mhwetvtb21 = rtP .
Constant2_Value_o0aigcm4a0 ; } if ( rtB . fviw5wizdj ) { p4p5rnrsvk = rtB .
j5hwgk53ch ; } else { p4p5rnrsvk = rtP . Constant3_Value_bmnfexfwrt ; } { if
( rtDW . j20steagju . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal
( rtDW . j20steagju . AQHandles , ssGetTaskTime ( rtS , 0 ) , ( char * ) &
gmtpbv5pvg [ 0 ] + 0 ) ; } } j13cb0cety = ( rtB . lnsjuvhsgv == rtP .
Constant9_Value_ja0e5xa3ny ) ; nrvm3tyilv = ( j13cb0cety || ( rtB .
lnsjuvhsgv == rtP . Constant11_Value_e0fehbzcco ) ) ; pmhvwvvcq0 = ( rtB .
lnsjuvhsgv == rtP . Constant10_Value_p2fum2vdhg ) ; fbcqdx30fd = ( pmhvwvvcq0
|| ( rtB . lnsjuvhsgv == rtP . Constant12_Value_g2ldfeqpok ) ) ; lrzouzj3wx =
( rtB . lnsjuvhsgv == rtP . Constant8_Value_lnbgrt5c23 ) ; d05i0imjvx = ( rtB
. lnsjuvhsgv == rtP . Constant13_Value_k510ta45pu ) ; if ( lrzouzj3wx ) {
m22nqui1bi [ 0 ] = pgdei1x1yh ; m22nqui1bi [ 1 ] = rtDW . hi5sxdgutv ;
m22nqui1bi [ 2 ] = rtDW . g3mwssejug ; m22nqui1bi [ 3 ] = rtDW . ohb2remyso ;
m22nqui1bi [ 4 ] = rtDW . nnehvfm43x ; m22nqui1bi [ 5 ] = rtDW . lqy3n4vuo3 ;
m22nqui1bi [ 6 ] = rtDW . noj5hcq43l ; } else { m22nqui1bi [ 0 ] = jyhlxlsoll
; for ( i = 0 ; i < 6 ; i ++ ) { m22nqui1bi [ i + 1 ] = ax1os5beb5 [ i + 1 ]
; } } if ( j13cb0cety ) { pkbd1la3mm [ 0 ] = gmtpbv5pvg [ 0 ] ; pkbd1la3mm [
1 ] = gmtpbv5pvg [ 1 ] ; pkbd1la3mm [ 2 ] = gmtpbv5pvg [ 2 ] ; pkbd1la3mm [ 3
] = gmtpbv5pvg [ 3 ] ; pkbd1la3mm [ 4 ] = gmtpbv5pvg [ 4 ] ; pkbd1la3mm [ 5 ]
= gmtpbv5pvg [ 5 ] ; pkbd1la3mm [ 6 ] = gmtpbv5pvg [ 6 ] ; } else {
pkbd1la3mm [ 0 ] = abgny5zyjv ; pkbd1la3mm [ 1 ] = rtDW . h4kqpzy0bk ;
pkbd1la3mm [ 2 ] = rtDW . ehukj5uhzp ; pkbd1la3mm [ 3 ] = rtDW . lma0feztag ;
pkbd1la3mm [ 4 ] = rtDW . balpcok03t ; pkbd1la3mm [ 5 ] = rtDW . kbtqs1lj34 ;
pkbd1la3mm [ 6 ] = rtDW . pdm2ofpuvs ; } if ( nrvm3tyilv ) { for ( i = 0 ; i
< 7 ; i ++ ) { gmtpbv5pvg [ i ] = pkbd1la3mm [ i ] ; } } else { gmtpbv5pvg [
0 ] = jyhlxlsoll ; for ( i = 0 ; i < 6 ; i ++ ) { gmtpbv5pvg [ i + 1 ] =
ax1os5beb5 [ i + 1 ] ; } } if ( pmhvwvvcq0 ) { pkbd1la3mm [ 0 ] = pgdei1x1yh
; pkbd1la3mm [ 1 ] = rtDW . hi5sxdgutv ; pkbd1la3mm [ 2 ] = rtDW . g3mwssejug
; pkbd1la3mm [ 3 ] = rtDW . ohb2remyso ; pkbd1la3mm [ 4 ] = rtDW . nnehvfm43x
; pkbd1la3mm [ 5 ] = rtDW . lqy3n4vuo3 ; pkbd1la3mm [ 6 ] = rtDW . noj5hcq43l
; } else { pkbd1la3mm [ 0 ] = cfxfq11zaj ; pkbd1la3mm [ 1 ] = rtDW .
jgcfuyvz2d ; pkbd1la3mm [ 2 ] = rtDW . p1ngo54os1 ; pkbd1la3mm [ 3 ] = rtDW .
pru2133ish ; pkbd1la3mm [ 4 ] = rtDW . kspt2mhisp ; pkbd1la3mm [ 5 ] = rtDW .
kq5e4yhmjq ; pkbd1la3mm [ 6 ] = rtDW . gr0nnucbwg ; } if ( fbcqdx30fd ) { for
( i = 0 ; i < 7 ; i ++ ) { ccti0gk5yx [ i ] = pkbd1la3mm [ i ] ; } } else {
ccti0gk5yx [ 0 ] = jyhlxlsoll ; for ( i = 0 ; i < 6 ; i ++ ) { ccti0gk5yx [ i
+ 1 ] = ax1os5beb5 [ i + 1 ] ; } } if ( d05i0imjvx ) { pkbd1la3mm [ 0 ] =
abgny5zyjv ; pkbd1la3mm [ 1 ] = rtDW . h4kqpzy0bk ; pkbd1la3mm [ 2 ] = rtDW .
ehukj5uhzp ; pkbd1la3mm [ 3 ] = rtDW . lma0feztag ; pkbd1la3mm [ 4 ] = rtDW .
balpcok03t ; pkbd1la3mm [ 5 ] = rtDW . kbtqs1lj34 ; pkbd1la3mm [ 6 ] = rtDW .
pdm2ofpuvs ; } else { pkbd1la3mm [ 0 ] = jyhlxlsoll ; for ( i = 0 ; i < 6 ; i
++ ) { pkbd1la3mm [ i + 1 ] = ax1os5beb5 [ i + 1 ] ; } } if ( ( lrzouzj3wx ||
( p4p5rnrsvk == rtP . Constant5_Value_dlnuts02vb ) ) == rtP .
Constant4_Value_jnryy02zo2 ) { rtB . fuyo2snwtu = m22nqui1bi [ 0 ] ; rtB .
ntk5vfoxky = m22nqui1bi [ 1 ] ; rtB . kfk1dxkhxh = m22nqui1bi [ 2 ] ; rtB .
acrqvfod5l = m22nqui1bi [ 3 ] ; rtB . pyqup3sj0a = m22nqui1bi [ 4 ] ; rtB .
bpuwnuufue = m22nqui1bi [ 5 ] ; rtB . khvg4xvbfo = m22nqui1bi [ 6 ] ; } else
{ rtB . fuyo2snwtu = amx0onpu1v ; rtB . ntk5vfoxky = rtDW . lrozmwruae ; rtB
. kfk1dxkhxh = rtDW . a33feioxw2 ; rtB . acrqvfod5l = rtDW . afrmbd0iw3 ; rtB
. pyqup3sj0a = rtDW . anfgrndojq ; rtB . bpuwnuufue = rtDW . hwkvzcsfaz ; rtB
. khvg4xvbfo = rtDW . cuscr1mv1o ; } if ( nrvm3tyilv || ( p4p5rnrsvk == rtP .
Constant6_Value_kvw5idspid ) ) { rtB . dpu2kg04pd = gmtpbv5pvg [ 0 ] ; rtB .
f1fi3ojf3v = gmtpbv5pvg [ 1 ] ; rtB . f5v0boraqs = gmtpbv5pvg [ 2 ] ; rtB .
hycxwpt0q0 = gmtpbv5pvg [ 3 ] ; rtB . ofw2w0azgr = gmtpbv5pvg [ 4 ] ; rtB .
mvrcyqswef = gmtpbv5pvg [ 5 ] ; rtB . ddim5njhme = gmtpbv5pvg [ 6 ] ; } else
{ rtB . dpu2kg04pd = pgdei1x1yh ; rtB . f1fi3ojf3v = rtDW . hi5sxdgutv ; rtB
. f5v0boraqs = rtDW . g3mwssejug ; rtB . hycxwpt0q0 = rtDW . ohb2remyso ; rtB
. ofw2w0azgr = rtDW . nnehvfm43x ; rtB . mvrcyqswef = rtDW . lqy3n4vuo3 ; rtB
. ddim5njhme = rtDW . noj5hcq43l ; } if ( fbcqdx30fd || ( p4p5rnrsvk == rtP .
Constant7_Value_cigoy1sn5w ) ) { rtB . agbei0ngoi = ccti0gk5yx [ 0 ] ; rtB .
li5fcrsk0x = ccti0gk5yx [ 1 ] ; rtB . i0w3o1erar = ccti0gk5yx [ 2 ] ; rtB .
kgt3je5hub = ccti0gk5yx [ 3 ] ; rtB . pjcakqxz0a = ccti0gk5yx [ 4 ] ; rtB .
lzxmplrrdc = ccti0gk5yx [ 5 ] ; rtB . g1jgfrb1co = ccti0gk5yx [ 6 ] ; } else
{ rtB . agbei0ngoi = abgny5zyjv ; rtB . li5fcrsk0x = rtDW . h4kqpzy0bk ; rtB
. i0w3o1erar = rtDW . ehukj5uhzp ; rtB . kgt3je5hub = rtDW . lma0feztag ; rtB
. pjcakqxz0a = rtDW . balpcok03t ; rtB . lzxmplrrdc = rtDW . kbtqs1lj34 ; rtB
. g1jgfrb1co = rtDW . pdm2ofpuvs ; } if ( d05i0imjvx || ( p4p5rnrsvk == rtP .
Constant14_Value_grljbqk2fk ) ) { rtB . ikbuvqafor = pkbd1la3mm [ 0 ] ; rtB .
cnewcvdg4b = pkbd1la3mm [ 1 ] ; rtB . i05rgvkt1z = pkbd1la3mm [ 2 ] ; rtB .
i1k2k4hd5w = pkbd1la3mm [ 3 ] ; rtB . cx3eeakhlh = pkbd1la3mm [ 4 ] ; rtB .
efaxnj5cve = pkbd1la3mm [ 5 ] ; rtB . ld5l1gbrbp = pkbd1la3mm [ 6 ] ; } else
{ rtB . ikbuvqafor = cfxfq11zaj ; rtB . cnewcvdg4b = rtDW . jgcfuyvz2d ; rtB
. i05rgvkt1z = rtDW . p1ngo54os1 ; rtB . i1k2k4hd5w = rtDW . pru2133ish ; rtB
. cx3eeakhlh = rtDW . kspt2mhisp ; rtB . efaxnj5cve = rtDW . kq5e4yhmjq ; rtB
. ld5l1gbrbp = rtDW . gr0nnucbwg ; } if ( rtB . foyanegrzs ) { p4p5rnrsvk =
rtP . Constant18_Value_jpjoa2d5eb ; } else { p4p5rnrsvk = rtP .
Constant19_Value_bkksxahrr0 ; } if ( rtB . jggt3auzy3 ) { kcruvnwyqu = rtP .
Constant20_Value_ejdzugpkve ; } else { kcruvnwyqu = rtB . jd13hnta5b ; } rtB
. b45emcbx3v = ( uint8_T ) ( ( uint8_T ) ( p4p5rnrsvk + kcruvnwyqu ) & 15 ) ;
if ( rtB . asxbhv2ehl ) { p4p5rnrsvk = rtP . Constant18_Value_fb5kuzjvcv ; }
else { p4p5rnrsvk = rtP . Constant19_Value_awtknxhzvr ; } if ( rtB .
ixxnliwmtx ) { kcruvnwyqu = rtP . Constant20_Value_j2bcm3olch ; } else {
kcruvnwyqu = rtB . ixtbqrxark ; } rtB . daoeclpvro = ( uint8_T ) ( ( uint8_T
) ( p4p5rnrsvk + kcruvnwyqu ) & 15 ) ; { if ( rtDW . ehosh5nmvd . AQHandles
&& ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . ehosh5nmvd . AQHandles
, ssGetTaskTime ( rtS , 0 ) , ( char * ) & esziabortj + 0 ) ; } } rtB .
hkkielqecj = rtDW . e4ewwdakkt ; rtB . bqafyprcme = rtDW . pgl0dx24fb ;
switch ( rtB . hkkielqecj ) { case 1 : amx0onpu1v = esziabortj ; break ; case
2 : amx0onpu1v = o3r4pmyall ; break ; case 3 : amx0onpu1v = gdbvugq0pt ;
break ; default : amx0onpu1v = esziabortj ; break ; } switch ( rtB .
hkkielqecj ) { case 1 : pgdei1x1yh = o3r4pmyall ; break ; case 2 : pgdei1x1yh
= gdbvugq0pt ; break ; case 3 : pgdei1x1yh = pmd53unqbg ; break ; default :
pgdei1x1yh = o3r4pmyall ; break ; } rtB . bylp5x3xnw = ( amx0onpu1v >
pgdei1x1yh ) ; rtDW . fnmb2ixb3q = ixbaqxvld3 ; switch ( rtDW . l1cjdkruqq )
{ case fci5xp30ky : rtDW . l1cjdkruqq = ij1x2zh0xt ; break ; case f5xc3zgh41
: rtB . iverpshyww = false ; rtDW . l1cjdkruqq = jduobabsvl ; rtB .
kx5ekbveof = false ; rtB . byrcscl5ea = false ; break ; case ij1x2zh0xt : if
( rtB . j3qwka3dz0 ) { rtDW . l1cjdkruqq = jduobabsvl ; rtB . kx5ekbveof =
false ; rtB . byrcscl5ea = false ; } else { rtB . iverpshyww = false ; rtB .
byrcscl5ea = true ; rtB . hkn30qaypu = false ; rtB . kx5ekbveof = true ; }
break ; case czs520tlml : if ( rtB . hkkielqecj < 3 ) { rtDW . l1cjdkruqq =
f5xc3zgh41 ; rtB . iverpshyww = true ; } else if ( rtB . bqafyprcme == 0 ) {
rtDW . l1cjdkruqq = fci5xp30ky ; } else if ( rtB . hkkielqecj == 3 ) { rtDW .
l1cjdkruqq = eh4oiwcenh ; rtB . byrcscl5ea = true ; rtB . kx5ekbveof = true ;
} break ; case jsvzrv1nlk : if ( rtB . hkkielqecj == 3 ) { rtB . pfsqkqryqg =
0U ; rtB . hkn30qaypu = false ; rtDW . l1cjdkruqq = eh4oiwcenh ; rtB .
byrcscl5ea = true ; rtB . kx5ekbveof = true ; } else if ( rtB . hkkielqecj <
3 ) { rtB . pfsqkqryqg = 0U ; rtB . hkn30qaypu = false ; rtDW . l1cjdkruqq =
f5xc3zgh41 ; rtB . iverpshyww = true ; } break ; case eh4oiwcenh : rtDW .
l1cjdkruqq = jduobabsvl ; rtB . kx5ekbveof = false ; rtB . byrcscl5ea = false
; break ; default : if ( ! rtB . bylp5x3xnw ) { rtDW . l1cjdkruqq =
czs520tlml ; rtB . pfsqkqryqg = 0U ; } else if ( rtB . hkkielqecj == 4 ) {
rtDW . l1cjdkruqq = eh4oiwcenh ; rtB . byrcscl5ea = true ; rtB . kx5ekbveof =
true ; } else if ( rtB . bylp5x3xnw ) { rtDW . l1cjdkruqq = jsvzrv1nlk ; rtB
. pfsqkqryqg = rtB . hkkielqecj ; rtB . hkn30qaypu = true ; } break ; }
j13cb0cety = ( rtB . pfsqkqryqg == rtP . Constant9_Value_cnwrdcmjy0 ) ;
nrvm3tyilv = ( j13cb0cety || ( rtB . pfsqkqryqg == rtP .
Constant11_Value_ny20b2glpq ) ) ; pmhvwvvcq0 = ( rtB . pfsqkqryqg == rtP .
Constant10_Value_jtigejrsqg ) ; fbcqdx30fd = ( pmhvwvvcq0 || ( rtB .
pfsqkqryqg == rtP . Constant12_Value_nrodroa1zq ) ) ; lrzouzj3wx = ( rtB .
pfsqkqryqg == rtP . Constant8_Value_i2ttqb1cfm ) ; d05i0imjvx = ( rtB .
pfsqkqryqg == rtP . Constant13_Value_kreq0wqgss ) ; if ( lrzouzj3wx ) {
ccti0gk5yx [ 0 ] = o3r4pmyall ; ccti0gk5yx [ 1 ] = cxa1qe3ugf ; ccti0gk5yx [
2 ] = oio3fefqho ; ccti0gk5yx [ 3 ] = h2hfyuv101 ; ccti0gk5yx [ 4 ] =
ingqnu4dzy ; ccti0gk5yx [ 5 ] = pdn5a4hgvg ; ccti0gk5yx [ 6 ] = iywdbx13d5 ;
} else { ccti0gk5yx [ 0 ] = rtB . fffnnm2yt3 [ 0 ] ; ccti0gk5yx [ 1 ] =
ja4a02iepm ; ccti0gk5yx [ 2 ] = ei3empue34 ; ccti0gk5yx [ 3 ] = d3pde30pup ;
ccti0gk5yx [ 4 ] = nt4o3zmoam ; ccti0gk5yx [ 5 ] = ekvtaths5r ; ccti0gk5yx [
6 ] = pbyarjw5ez ; } if ( j13cb0cety ) { pkbd1la3mm [ 0 ] = esziabortj ;
pkbd1la3mm [ 1 ] = ku3zo4ilzc ; pkbd1la3mm [ 2 ] = dzaau1c1kq ; pkbd1la3mm [
3 ] = aqnthyitf4 ; pkbd1la3mm [ 4 ] = ewpg2u2awi ; pkbd1la3mm [ 5 ] =
i1nvm0aluv ; pkbd1la3mm [ 6 ] = dsr1ucmofc ; } else { pkbd1la3mm [ 0 ] =
gdbvugq0pt ; pkbd1la3mm [ 1 ] = m0axfycdzu ; pkbd1la3mm [ 2 ] = bhmoboe03f ;
pkbd1la3mm [ 3 ] = jij1wfzbki ; pkbd1la3mm [ 4 ] = j1uusdi4j1 ; pkbd1la3mm [
5 ] = gcrfrlu2o0 ; pkbd1la3mm [ 6 ] = bl2anjfcfc ; } if ( nrvm3tyilv ) {
m22nqui1bi [ 0 ] = pkbd1la3mm [ 0 ] ; m22nqui1bi [ 1 ] = pkbd1la3mm [ 1 ] ;
m22nqui1bi [ 2 ] = pkbd1la3mm [ 2 ] ; m22nqui1bi [ 3 ] = pkbd1la3mm [ 3 ] ;
m22nqui1bi [ 4 ] = pkbd1la3mm [ 4 ] ; m22nqui1bi [ 5 ] = pkbd1la3mm [ 5 ] ;
m22nqui1bi [ 6 ] = pkbd1la3mm [ 6 ] ; } else { m22nqui1bi [ 0 ] = rtB .
fffnnm2yt3 [ 0 ] ; m22nqui1bi [ 1 ] = ja4a02iepm ; m22nqui1bi [ 2 ] =
ei3empue34 ; m22nqui1bi [ 3 ] = d3pde30pup ; m22nqui1bi [ 4 ] = nt4o3zmoam ;
m22nqui1bi [ 5 ] = ekvtaths5r ; m22nqui1bi [ 6 ] = pbyarjw5ez ; } if (
pmhvwvvcq0 ) { pkbd1la3mm [ 0 ] = o3r4pmyall ; pkbd1la3mm [ 1 ] = cxa1qe3ugf
; pkbd1la3mm [ 2 ] = oio3fefqho ; pkbd1la3mm [ 3 ] = h2hfyuv101 ; pkbd1la3mm
[ 4 ] = ingqnu4dzy ; pkbd1la3mm [ 5 ] = pdn5a4hgvg ; pkbd1la3mm [ 6 ] =
iywdbx13d5 ; } else { pkbd1la3mm [ 0 ] = pmd53unqbg ; pkbd1la3mm [ 1 ] =
nwggkm1uex ; pkbd1la3mm [ 2 ] = cbeb1wr0lp ; pkbd1la3mm [ 3 ] = ple1dumubu ;
pkbd1la3mm [ 4 ] = msvcqpyins ; pkbd1la3mm [ 5 ] = kukoxaxnav ; pkbd1la3mm [
6 ] = hmorz21zys ; } if ( fbcqdx30fd ) { ax1os5beb5 [ 0 ] = pkbd1la3mm [ 0 ]
; ax1os5beb5 [ 1 ] = pkbd1la3mm [ 1 ] ; ax1os5beb5 [ 2 ] = pkbd1la3mm [ 2 ] ;
ax1os5beb5 [ 3 ] = pkbd1la3mm [ 3 ] ; ax1os5beb5 [ 4 ] = pkbd1la3mm [ 4 ] ;
ax1os5beb5 [ 5 ] = pkbd1la3mm [ 5 ] ; ax1os5beb5 [ 6 ] = pkbd1la3mm [ 6 ] ; }
else { ax1os5beb5 [ 0 ] = rtB . fffnnm2yt3 [ 0 ] ; ax1os5beb5 [ 1 ] =
ja4a02iepm ; ax1os5beb5 [ 2 ] = ei3empue34 ; ax1os5beb5 [ 3 ] = d3pde30pup ;
ax1os5beb5 [ 4 ] = nt4o3zmoam ; ax1os5beb5 [ 5 ] = ekvtaths5r ; ax1os5beb5 [
6 ] = pbyarjw5ez ; } if ( d05i0imjvx ) { pkbd1la3mm [ 0 ] = gdbvugq0pt ;
pkbd1la3mm [ 1 ] = m0axfycdzu ; pkbd1la3mm [ 2 ] = bhmoboe03f ; pkbd1la3mm [
3 ] = jij1wfzbki ; pkbd1la3mm [ 4 ] = j1uusdi4j1 ; pkbd1la3mm [ 5 ] =
gcrfrlu2o0 ; pkbd1la3mm [ 6 ] = bl2anjfcfc ; } else { pkbd1la3mm [ 0 ] = rtB
. fffnnm2yt3 [ 0 ] ; pkbd1la3mm [ 1 ] = ja4a02iepm ; pkbd1la3mm [ 2 ] =
ei3empue34 ; pkbd1la3mm [ 3 ] = d3pde30pup ; pkbd1la3mm [ 4 ] = nt4o3zmoam ;
pkbd1la3mm [ 5 ] = ekvtaths5r ; pkbd1la3mm [ 6 ] = pbyarjw5ez ; } if ( (
lrzouzj3wx || ( mhwetvtb21 == rtP . Constant5_Value_kww0cgogjk ) ) == rtP .
Constant4_Value_gvc2vx531c ) { rtB . hkq0hwtoyx = ccti0gk5yx [ 0 ] ; rtB .
k1bjk0virl = ccti0gk5yx [ 1 ] ; rtB . d3l4vvyx25 = ccti0gk5yx [ 2 ] ; rtB .
lcf40fba1a = ccti0gk5yx [ 3 ] ; rtB . mg4yfzjodt = ccti0gk5yx [ 4 ] ; rtB .
ob5mrjkqt2 = ccti0gk5yx [ 5 ] ; rtB . jnj1ehlfk2 = ccti0gk5yx [ 6 ] ; } else
{ rtB . hkq0hwtoyx = esziabortj ; rtB . k1bjk0virl = ku3zo4ilzc ; rtB .
d3l4vvyx25 = dzaau1c1kq ; rtB . lcf40fba1a = aqnthyitf4 ; rtB . mg4yfzjodt =
ewpg2u2awi ; rtB . ob5mrjkqt2 = i1nvm0aluv ; rtB . jnj1ehlfk2 = dsr1ucmofc ;
} if ( nrvm3tyilv || ( mhwetvtb21 == rtP . Constant6_Value_ixzmog31so ) ) {
rtB . mz3q3qigkp = m22nqui1bi [ 0 ] ; rtB . a0xfczjjxq = m22nqui1bi [ 1 ] ;
rtB . c0ffvnqlub = m22nqui1bi [ 2 ] ; rtB . d0jeunwwfk = m22nqui1bi [ 3 ] ;
rtB . fuhxi3miys = m22nqui1bi [ 4 ] ; rtB . ks0ab3ncaa = m22nqui1bi [ 5 ] ;
rtB . e2bcu340xv = m22nqui1bi [ 6 ] ; } else { rtB . mz3q3qigkp = o3r4pmyall
; rtB . a0xfczjjxq = cxa1qe3ugf ; rtB . c0ffvnqlub = oio3fefqho ; rtB .
d0jeunwwfk = h2hfyuv101 ; rtB . fuhxi3miys = ingqnu4dzy ; rtB . ks0ab3ncaa =
pdn5a4hgvg ; rtB . e2bcu340xv = iywdbx13d5 ; } if ( fbcqdx30fd || (
mhwetvtb21 == rtP . Constant7_Value_e205pw3i3h ) ) { rtB . bbt312bxcp =
ax1os5beb5 [ 0 ] ; rtB . byapugguel = ax1os5beb5 [ 1 ] ; rtB . d2hwz44h43 =
ax1os5beb5 [ 2 ] ; rtB . fxkd0rxmvf = ax1os5beb5 [ 3 ] ; rtB . a3zc04aozw =
ax1os5beb5 [ 4 ] ; rtB . ipjjcqoavm = ax1os5beb5 [ 5 ] ; rtB . pcorqvo0zh =
ax1os5beb5 [ 6 ] ; } else { rtB . bbt312bxcp = gdbvugq0pt ; rtB . byapugguel
= m0axfycdzu ; rtB . d2hwz44h43 = bhmoboe03f ; rtB . fxkd0rxmvf = jij1wfzbki
; rtB . a3zc04aozw = j1uusdi4j1 ; rtB . ipjjcqoavm = gcrfrlu2o0 ; rtB .
pcorqvo0zh = bl2anjfcfc ; } if ( d05i0imjvx || ( mhwetvtb21 == rtP .
Constant14_Value_bv4nih1ecy ) ) { rtB . fawzgxk22q = pkbd1la3mm [ 0 ] ; rtB .
mmnhy4y2nh = pkbd1la3mm [ 1 ] ; rtB . jqlnks01up = pkbd1la3mm [ 2 ] ; rtB .
koxhgdt2a3 = pkbd1la3mm [ 3 ] ; rtB . gahmmw4bfy = pkbd1la3mm [ 4 ] ; rtB .
gdwsr53yim = pkbd1la3mm [ 5 ] ; rtB . dtghpb1x22 = pkbd1la3mm [ 6 ] ; } else
{ rtB . fawzgxk22q = pmd53unqbg ; rtB . mmnhy4y2nh = nwggkm1uex ; rtB .
jqlnks01up = cbeb1wr0lp ; rtB . koxhgdt2a3 = ple1dumubu ; rtB . gahmmw4bfy =
msvcqpyins ; rtB . gdwsr53yim = kukoxaxnav ; rtB . dtghpb1x22 = hmorz21zys ;
} if ( rtB . hkn30qaypu ) { mhwetvtb21 = rtP . Constant18_Value_b4zwfav5zq ;
} else { mhwetvtb21 = rtP . Constant19_Value_jg3p0vfdf5 ; } if ( rtB .
kx5ekbveof ) { p4p5rnrsvk = rtP . Constant20_Value_dvyltbyzrb ; } else {
p4p5rnrsvk = rtB . bqafyprcme ; } rtB . erecgrjhnx = ( uint8_T ) ( ( uint8_T
) ( mhwetvtb21 + p4p5rnrsvk ) & 15 ) ; if ( rtB . iverpshyww ) { mhwetvtb21 =
rtP . Constant18_Value_hjryrz0cl5 ; } else { mhwetvtb21 = rtP .
Constant19_Value_p1i3pibm4l ; } if ( rtB . byrcscl5ea ) { p4p5rnrsvk = rtP .
Constant20_Value_oii0quqy12 ; } else { p4p5rnrsvk = rtB . hkkielqecj ; } rtB
. dd0occlrt4 = ( uint8_T ) ( ( uint8_T ) ( mhwetvtb21 + p4p5rnrsvk ) & 15 ) ;
if ( rtB . ooqxabrlh0 ) { a0tz4rvn4r = rtP . Constant18_Value_hhhw2aq5ew ; }
else { a0tz4rvn4r = rtP . Constant19_Value_cwj0sd2sk0 ; } if ( rtB .
ppe24ahxyy ) { elx3nv0dfg = rtP . Constant20_Value_pxoluy00ae ; } else {
elx3nv0dfg = rtB . oleysdr0yd ; } rtB . m04obivhlo = ( uint16_T ) (
a0tz4rvn4r + elx3nv0dfg ) ; if ( rtB . ak2vxsyixd ) { mhwetvtb21 = rtP .
Constant18_Value_gq3kqisp45 ; } else { mhwetvtb21 = rtP .
Constant19_Value_edt011ewqc ; } if ( rtB . m5q1do0vmq ) { p4p5rnrsvk = rtP .
Constant20_Value_devcrqcnvf ; } else { p4p5rnrsvk = rtB . j5hwgk53ch ; } rtB
. dhvtuwjn5q = ( uint8_T ) ( ( uint8_T ) ( mhwetvtb21 + p4p5rnrsvk ) & 15 ) ;
if ( rtB . lsw4l4smyf ) { rtB . gsni415fpp = rtP . Constant_Value_ljylfdqaat
; rtB . a2muyqitx4 = rtP . Constant1_Value_h0xkpn4uua ; rtB . dz225sfg5h =
rtP . Constant10_Value ; rtB . izefog1fz2 = rtP . Constant11_Value ; rtB .
poagurat1d = rtP . Constant12_Value ; rtB . aoynz1bdpy = rtP .
Constant13_Value ; rtB . f0efgfgm5a = rtP . Constant14_Value ; rtB .
f4eksl32do = rtP . Constant15_Value ; rtB . d2r1vmsy5h = rtP .
Constant2_Value_bk11cspugg ; rtB . da2jvbm0wn = rtP .
Constant3_Value_aqklou0zqh ; rtB . cfqni2wdkk = rtP .
Constant4_Value_mbqykn1fpr ; rtB . gqvoz5mx4y = rtP . Constant5_Value ; rtB .
iurm3g4vhb = rtP . Constant6_Value_a2pank2zdt ; rtB . hiwdb1uq3q = rtP .
Constant7_Value ; rtB . gj0ilfdg5r = rtP . Constant8_Value ; rtB . ifilsh2dij
= rtP . Constant9_Value ; rtB . mf2j2fg50z = rtP . Constant_Value_dahdo1rqt3
; rtB . cbqgqx5a3h = rtP . Constant1_Value_n5bwfs54ti ; rtB . moxmhpt4za =
rtP . Constant10_Value_krsyxmy3qx ; rtB . ix2rkj1uhp = rtP .
Constant11_Value_osknhrztl5 ; rtB . hfjmgpp40c = rtP .
Constant12_Value_lxjbhjaxif ; rtB . klwgk32xms = rtP .
Constant13_Value_a424saurfu ; rtB . kh2ij2wlwj = rtP .
Constant14_Value_jirjpcthxh ; rtB . au2ielxut1 = rtP .
Constant15_Value_pzxtn1cqrl ; rtB . arfpn4hmtf = rtP .
Constant2_Value_noshgnxgcl ; rtB . i0klwum5up = rtP .
Constant3_Value_lmc4b0eylh ; rtB . lxw5zwa1vx = rtP .
Constant4_Value_pjiqg2wr05 ; rtB . acbvfcyinv = rtP .
Constant5_Value_m3nuixriil ; rtB . oehsivypfq = rtP .
Constant6_Value_butcytfg5p ; rtB . khjd0pwmp2 = rtP .
Constant7_Value_pdapyylnvn ; rtB . m0in21nfjf = rtP .
Constant8_Value_dpu3cgbfp5 ; rtB . bcdg4aqvxx = rtP .
Constant9_Value_kpq1ndhal4 ; } else { rtB . gsni415fpp = ( boolean_T ) ( rtDW
. pp1spekrho ^ rtDW . kt2dvgietw ^ rtDW . lhex3u5h1f ) ^ rtDW . gqs1ppah0r ;
rtB . a2muyqitx4 = rtDW . ivftjkcvdy ; rtB . dz225sfg5h = rtDW . c2jypg20hx ;
rtB . izefog1fz2 = rtDW . gqs1ppah0r ; rtB . poagurat1d = rtDW . fefcdgfhj1 ;
rtB . aoynz1bdpy = rtDW . lhex3u5h1f ; rtB . f0efgfgm5a = rtDW . pp1spekrho ;
rtB . f4eksl32do = rtDW . f125nvybng ; rtB . d2r1vmsy5h = rtDW . f3nepfq241 ;
rtB . da2jvbm0wn = rtDW . axrvuq4x5i ; rtB . cfqni2wdkk = rtDW . e4hda03zrh ;
rtB . gqvoz5mx4y = rtDW . fgrwjt4a2w ; rtB . iurm3g4vhb = rtDW . kqgzq353ol ;
rtB . hiwdb1uq3q = rtDW . fp3bheq2px ; rtB . gj0ilfdg5r = rtDW . oe1scdkmlv ;
rtB . ifilsh2dij = rtDW . esgl5mkr2h ; rtB . mf2j2fg50z = ( boolean_T ) (
dnrgtbkacr ^ rtDW . nkzaiaa2wi ^ rtDW . i3cg55zsq5 ) ^ o55pf3lytg ; rtB .
cbqgqx5a3h = rtDW . cqzpsciwb0 ; rtB . moxmhpt4za = l0oufvzla1 ; rtB .
ix2rkj1uhp = o55pf3lytg ; rtB . hfjmgpp40c = inhnbdxcvg ; rtB . klwgk32xms =
rtDW . i3cg55zsq5 ; rtB . kh2ij2wlwj = dnrgtbkacr ; rtB . au2ielxut1 = rtDW .
a1gsgrx3gu ; rtB . arfpn4hmtf = rtDW . bgf0isn4m2 ; rtB . i0klwum5up = rtDW .
dzft24s4wf ; rtB . lxw5zwa1vx = rtDW . jcwpmucczd ; rtB . acbvfcyinv = rtDW .
duv4e2eeyz ; rtB . oehsivypfq = rtDW . iooznguwv5 ; rtB . khjd0pwmp2 = rtDW .
bkmzxq31d1 ; rtB . m0in21nfjf = dieh02pbbz ; rtB . bcdg4aqvxx = drztvx2kd1 ;
} rtB . hb5ldogfof = ( uint16_T ) ( ( ( ( ( ( ( ( ( uint8_T ) ( ( ( ( ( ( (
rtDW . ivftjkcvdy << 1 | rtDW . f3nepfq241 ) << 1 | rtDW . axrvuq4x5i ) << 1
| rtDW . e4hda03zrh ) << 1 | rtDW . fgrwjt4a2w ) << 1 | rtDW . kqgzq353ol )
<< 1 | rtDW . fp3bheq2px ) << 1 | rtDW . oe1scdkmlv ) << 1 | rtDW .
esgl5mkr2h ) << 1 | rtDW . c2jypg20hx ) << 1 | rtDW . gqs1ppah0r ) << 1 |
rtDW . fefcdgfhj1 ) << 1 | rtDW . lhex3u5h1f ) << 1 | rtDW . pp1spekrho ) <<
1 | rtDW . f125nvybng ) << 1 | rtDW . kt2dvgietw ) ; rtB . cou15al3ok = (
uint32_T ) rtB . hb5ldogfof << 16 ; rtDW . fopsvccudd = ixbaqxvld3 ; rtB .
c5f5d2ckzc = rtB . cou15al3ok >> 21 ; rtB . inppcqltf1 = ( uint16_T ) ( (
uint16_T ) ( rtB . c5f5d2ckzc >> 5 ) & 2047 ) ; rtB . os25pf5rdx = ( uint32_T
) rtB . hb5ldogfof << 16 ; faha5qigiv ( rtB . os25pf5rdx , & rtB .
faha5qigiv5 , & rtDW . faha5qigiv5 ) ; rtB . hejdym2tei = ( uint16_T ) ( (
uint16_T ) ( rtB . faha5qigiv5 . pblcra52ya >> 5 ) & 2047 ) ; rtB .
e12edrxdsc = ( uint32_T ) rtB . hb5ldogfof << 16 ; faha5qigiv ( rtB .
e12edrxdsc , & rtB . dk52awvy35 , & rtDW . dk52awvy35 ) ; rtB . miciunji1q =
( uint16_T ) ( ( uint16_T ) ( rtB . dk52awvy35 . pblcra52ya >> 5 ) & 2047 ) ;
rtDW . bpt15stayd = ixbaqxvld3 ; rtB . kekccrspru = ( uint16_T ) ( ( ( (
uint32_T ) rtB . hb5ldogfof << 16 ) >> 22 ) >> 5 ) ; rtB . j5l1zfu2yz = (
uint32_T ) rtB . hb5ldogfof << 16 ; faha5qigiv ( rtB . j5l1zfu2yz , & rtB .
p1cpbmtwa2 , & rtDW . p1cpbmtwa2 ) ; tmp_p = rtB . p1cpbmtwa2 . pblcra52ya >>
5 ; if ( tmp_p > 2047U ) { tmp_p = 2047U ; } rtB . kmk1xozmep = ( uint16_T )
tmp_p ; rtB . pzzutdzghl = ( uint32_T ) rtB . hb5ldogfof << 16 ; rtDW .
nqe3ukp1lv = ixbaqxvld3 ; rtB . m32prkrct2 = rtB . pzzutdzghl >> 28 ; rtB .
dqvaaxkm0c = ( uint16_T ) ( ( uint16_T ) ( rtB . m32prkrct2 >> 5 ) & 2047 ) ;
sLong2MultiWord ( g1mostggzn , & tmp_o . chunks [ 0U ] , 2 ) ;
MultiWordSignedWrap ( & tmp_o . chunks [ 0U ] , 2 , 63U , & tmp_d . chunks [
0U ] ) ; sLong2MultiWord ( nn01cenknv , & tmp_dz . chunks [ 0U ] , 2 ) ;
MultiWordSignedWrap ( & tmp_dz . chunks [ 0U ] , 2 , 63U , & tmp_o . chunks [
0U ] ) ; MultiWordAdd ( & tmp_d . chunks [ 0U ] , & tmp_o . chunks [ 0U ] , &
tmp_l . chunks [ 0U ] , 2 ) ; MultiWordSignedWrap ( & tmp_l . chunks [ 0U ] ,
2 , 63U , & tmp_n . chunks [ 0U ] ) ; sLong2MultiWord ( MultiWord2sLong ( &
tmp_n . chunks [ 0U ] ) , & tmp_b . chunks [ 0U ] , 2 ) ; MultiWordSignedWrap
( & tmp_b . chunks [ 0U ] , 2 , 63U , & tmp_k . chunks [ 0U ] ) ;
sLong2MultiWord ( m4k4rtnd54 , & tmp_l . chunks [ 0U ] , 2 ) ;
MultiWordSignedWrap ( & tmp_l . chunks [ 0U ] , 2 , 63U , & tmp_b . chunks [
0U ] ) ; MultiWordAdd ( & tmp_k . chunks [ 0U ] , & tmp_b . chunks [ 0U ] , &
tmp_c . chunks [ 0U ] , 2 ) ; MultiWordSignedWrap ( & tmp_c . chunks [ 0U ] ,
2 , 63U , & tmp_f . chunks [ 0U ] ) ; sLong2MultiWord ( MultiWord2sLong ( &
tmp_f . chunks [ 0U ] ) , & tmp_j . chunks [ 0U ] , 2 ) ; MultiWordSignedWrap
( & tmp_j . chunks [ 0U ] , 2 , 63U , & tmp_g . chunks [ 0U ] ) ;
sLong2MultiWord ( hx3vqh14m5 , & tmp_c . chunks [ 0U ] , 2 ) ;
MultiWordSignedWrap ( & tmp_c . chunks [ 0U ] , 2 , 63U , & tmp_j . chunks [
0U ] ) ; MultiWordAdd ( & tmp_g . chunks [ 0U ] , & tmp_j . chunks [ 0U ] , &
tmp_m . chunks [ 0U ] , 2 ) ; MultiWordSignedWrap ( & tmp_m . chunks [ 0U ] ,
2 , 63U , & tmp_i . chunks [ 0U ] ) ; sMultiWordShr ( & tmp_i . chunks [ 0U ]
, 2 , 20U , & tmp_e . chunks [ 0U ] , 2 ) ; l3zjtadzzx = ( int16_T )
MultiWord2sLong ( & tmp_e . chunks [ 0U ] ) ; if ( ( ( uint32_T ) l3zjtadzzx
& 8192U ) != 0U ) { i = l3zjtadzzx | - 8192 ; } else { i = l3zjtadzzx & 8191
; } rtB . aouiix4txh = ( int16_T ) ( rtB . nbft1phsmy - ( i << 2 ) ) ;
l0oufvzla1 = ! rtP . Constant_Value_jgq4yl1a43 ; o55pf3lytg = ! l0oufvzla1 ;
rtB . h25zdcfr3m = ( rtB . jcw1xc2cvp && rtDW . oapwp3ivnb [ rtDW .
mukf1zkhlx ] ) ; if ( ! rtB . h25zdcfr3m ) { g1p0s0iovv = rtP .
Constant19_Value << 2 ; f55qmvntt1 = rtP . Constant1_Value << 2 ; }
esziabortj = ( int64_T ) g1p0s0iovv << 18 ; ku3zo4ilzc = ( int64_T )
f55qmvntt1 << 18 ; esziabortj = mul_s64_loSR_sat_zero ( esziabortj ,
esziabortj , 32ULL ) ; ku3zo4ilzc = mul_s64_loSR_sat_zero ( ku3zo4ilzc ,
ku3zo4ilzc , 32ULL ) ; if ( ( esziabortj < 0LL ) && ( ku3zo4ilzc <
MIN_int64_T - esziabortj ) ) { esziabortj = MIN_int64_T ; } else if ( (
esziabortj > 0LL ) && ( ku3zo4ilzc > MAX_int64_T - esziabortj ) ) {
esziabortj = MAX_int64_T ; } else { esziabortj += ku3zo4ilzc ; } if (
esziabortj < 0LL ) { esziabortj = - esziabortj ; } rtDW . hedkojaly3 =
ixbaqxvld3 ; dieh02pbbz = ( ( ! l0oufvzla1 ) || ( ( ( uint8_T ) ( ( int64_T )
( ( uint64_T ) esziabortj >> 30 ) >> 32 ) & 1U ) == 0U ) ) ; inhnbdxcvg = !
dieh02pbbz ; rtDW . bfiehwtxx0 = ixbaqxvld3 ; drztvx2kd1 = ( ( ! dieh02pbbz )
|| ( ! l0oufvzla1 ) || ( ( ( uint8_T ) ( ( int64_T ) ( ( uint64_T )
esziabortj >> 29 ) >> 32 ) & 1U ) == 0U ) ) ; j13cb0cety = ! drztvx2kd1 ;
rtDW . jlfxz1mcjj = ixbaqxvld3 ; nrvm3tyilv = ( ( ! drztvx2kd1 ) || ( !
dieh02pbbz ) || ( ! l0oufvzla1 ) || ( ( ( uint8_T ) ( ( int64_T ) ( (
uint64_T ) esziabortj >> 28 ) >> 32 ) & 1U ) == 0U ) ) ; dnrgtbkacr = (
o55pf3lytg || inhnbdxcvg || j13cb0cety || ( ! nrvm3tyilv ) ) ; rtDW .
ket4u3rbik = ixbaqxvld3 ; rtDW . bti3xpysb3 = ixbaqxvld3 ; pmhvwvvcq0 = ( ( !
drztvx2kd1 ) || ( ! dieh02pbbz ) || ( ! l0oufvzla1 ) || ( ! nrvm3tyilv ) || (
( ( uint8_T ) ( ( int64_T ) ( ( uint64_T ) esziabortj >> 27 ) >> 32 ) & 1U )
== 0U ) ) ; fbcqdx30fd = ! pmhvwvvcq0 ; rtDW . j2lpy04aok = ixbaqxvld3 ;
lrzouzj3wx = ( ( ! drztvx2kd1 ) || ( ! dieh02pbbz ) || ( ! l0oufvzla1 ) || (
! nrvm3tyilv ) || ( ! pmhvwvvcq0 ) || ( ( ( uint8_T ) ( ( int64_T ) ( (
uint64_T ) esziabortj >> 26 ) >> 32 ) & 1U ) == 0U ) ) ; inhnbdxcvg = (
o55pf3lytg || inhnbdxcvg || fbcqdx30fd || ( ! lrzouzj3wx ) ) ; rtDW .
kxxqdtc3fn = ixbaqxvld3 ; l0oufvzla1 = ( o55pf3lytg || j13cb0cety || (
drztvx2kd1 && dieh02pbbz && l0oufvzla1 && nrvm3tyilv && pmhvwvvcq0 &&
lrzouzj3wx && ( ( ( uint8_T ) ( ( int64_T ) ( ( uint64_T ) esziabortj >> 25 )
>> 32 ) & 1U ) != 0U ) ) || fbcqdx30fd ) ; o55pf3lytg = ( dnrgtbkacr || ( ( (
uint8_T ) ( ( int64_T ) ( ( uint64_T ) esziabortj >> 24 ) >> 32 ) & 1U ) !=
0U ) || inhnbdxcvg || l0oufvzla1 ) ; lrzouzj3wx = ! o55pf3lytg ; irvbj4tgny =
! lrzouzj3wx ; rtDW . kigfha511a = ixbaqxvld3 ; j13cb0cety = ( ( ( uint8_T )
( ( int64_T ) ( ( uint64_T ) esziabortj >> 23 ) >> 32 ) & 1U ) == 0U ) ;
nrvm3tyilv = ! j13cb0cety ; rtDW . gajg5igtez = ixbaqxvld3 ; pmhvwvvcq0 = ( (
! j13cb0cety ) || ( ( ( uint8_T ) ( ( int64_T ) ( ( uint64_T ) esziabortj >>
22 ) >> 32 ) & 1U ) == 0U ) ) ; drztvx2kd1 = ! pmhvwvvcq0 ; rtDW . jw30qsqu5r
= ixbaqxvld3 ; fbcqdx30fd = ( ( ! pmhvwvvcq0 ) || ( ! j13cb0cety ) || ( ( (
uint8_T ) ( ( int64_T ) ( ( uint64_T ) esziabortj >> 21 ) >> 32 ) & 1U ) ==
0U ) ) ; cvinfdydnt = ! fbcqdx30fd ; rtDW . kd2cj1lw5i = ixbaqxvld3 ;
d05i0imjvx = ( ( ! fbcqdx30fd ) || ( ! pmhvwvvcq0 ) || ( ! j13cb0cety ) || (
( ( uint8_T ) ( ( int64_T ) ( ( uint64_T ) esziabortj >> 20 ) >> 32 ) & 1U )
== 0U ) ) ; dieh02pbbz = ( nrvm3tyilv || drztvx2kd1 || cvinfdydnt || ( !
d05i0imjvx ) ) ; rtDW . oksgsz1h3g = ixbaqxvld3 ; rtDW . pxkqzhdtui =
ixbaqxvld3 ; ia1dtrqdgh = ( ( ! fbcqdx30fd ) || ( ! pmhvwvvcq0 ) || ( !
j13cb0cety ) || ( ! d05i0imjvx ) || ( ( ( uint8_T ) ( ( int64_T ) ( (
uint64_T ) esziabortj >> 19 ) >> 32 ) & 1U ) == 0U ) ) ; jctawczzk3 = !
ia1dtrqdgh ; rtDW . gv1yczvurw = ixbaqxvld3 ; iohvoh3hot = ( ( ! fbcqdx30fd )
|| ( ! pmhvwvvcq0 ) || ( ! j13cb0cety ) || ( ! d05i0imjvx ) || ( ! ia1dtrqdgh
) || ( ( ( uint8_T ) ( ( int64_T ) ( ( uint64_T ) esziabortj >> 18 ) >> 32 )
& 1U ) == 0U ) ) ; drztvx2kd1 = ( nrvm3tyilv || drztvx2kd1 || jctawczzk3 || (
! iohvoh3hot ) ) ; rtDW . ftnfscrqnz = ixbaqxvld3 ; j13cb0cety = ( nrvm3tyilv
|| cvinfdydnt || ( fbcqdx30fd && pmhvwvvcq0 && j13cb0cety && d05i0imjvx &&
ia1dtrqdgh && iohvoh3hot && ( ( ( uint8_T ) ( ( int64_T ) ( ( uint64_T )
esziabortj >> 17 ) >> 32 ) & 1U ) != 0U ) ) || jctawczzk3 ) ; nrvm3tyilv = (
dieh02pbbz || ( ( ( uint8_T ) ( ( int64_T ) ( ( uint64_T ) esziabortj >> 16 )
>> 32 ) & 1U ) != 0U ) || drztvx2kd1 || j13cb0cety ) ; iohvoh3hot = ( ( !
lrzouzj3wx ) || ( ! nrvm3tyilv ) ) ; mxwmnlovus = ! iohvoh3hot ; rtDW .
mnmtds151j = ixbaqxvld3 ; cvinfdydnt = ( ( ( uint8_T ) ( ( int64_T ) ( (
uint64_T ) esziabortj >> 15 ) >> 32 ) & 1U ) == 0U ) ; d05i0imjvx = !
cvinfdydnt ; rtDW . aiobhqac0s = ixbaqxvld3 ; ia1dtrqdgh = ( ( ! cvinfdydnt )
|| ( ( ( uint8_T ) ( ( int64_T ) ( ( uint64_T ) esziabortj >> 14 ) >> 32 ) &
1U ) == 0U ) ) ; fbcqdx30fd = ! ia1dtrqdgh ; rtDW . ddstw2zt2h = ixbaqxvld3 ;
jctawczzk3 = ( ( ! ia1dtrqdgh ) || ( ! cvinfdydnt ) || ( ( ( uint8_T ) ( (
int64_T ) ( ( uint64_T ) esziabortj >> 13 ) >> 32 ) & 1U ) == 0U ) ) ;
ita5etr0mm = ! jctawczzk3 ; rtDW . neeztgz5mr = ixbaqxvld3 ; egrazjjv2f = ( (
! jctawczzk3 ) || ( ! ia1dtrqdgh ) || ( ! cvinfdydnt ) || ( ( ( uint8_T ) ( (
int64_T ) ( ( uint64_T ) esziabortj >> 12 ) >> 32 ) & 1U ) == 0U ) ) ;
pmhvwvvcq0 = ( d05i0imjvx || fbcqdx30fd || ita5etr0mm || ( ! egrazjjv2f ) ) ;
rtDW . p12ie1kq2d = ixbaqxvld3 ; rtDW . iuph25q4on = ixbaqxvld3 ; hsd3fkb2vr
= ( ( ! jctawczzk3 ) || ( ! ia1dtrqdgh ) || ( ! cvinfdydnt ) || ( !
egrazjjv2f ) || ( ( ( uint8_T ) ( ( int64_T ) ( ( uint64_T ) esziabortj >> 11
) >> 32 ) & 1U ) == 0U ) ) ; mcmzp2ckvi = ! hsd3fkb2vr ; rtDW . fbgth0ylvb =
ixbaqxvld3 ; grlx3eas12 = ( ( ! jctawczzk3 ) || ( ! ia1dtrqdgh ) || ( !
cvinfdydnt ) || ( ! egrazjjv2f ) || ( ! hsd3fkb2vr ) || ( ( ( uint8_T ) ( (
int64_T ) ( ( uint64_T ) esziabortj >> 10 ) >> 32 ) & 1U ) == 0U ) ) ;
fbcqdx30fd = ( d05i0imjvx || fbcqdx30fd || mcmzp2ckvi || ( ! grlx3eas12 ) ) ;
rtDW . ksdezs50qp = ixbaqxvld3 ; cvinfdydnt = ( d05i0imjvx || ita5etr0mm || (
jctawczzk3 && ia1dtrqdgh && cvinfdydnt && egrazjjv2f && hsd3fkb2vr &&
grlx3eas12 && ( ( ( uint8_T ) ( ( int64_T ) ( ( uint64_T ) esziabortj >> 9 )
>> 32 ) & 1U ) != 0U ) ) || mcmzp2ckvi ) ; d05i0imjvx = ( pmhvwvvcq0 || ( ( (
uint8_T ) ( ( int64_T ) ( ( uint64_T ) esziabortj >> 8 ) >> 32 ) & 1U ) != 0U
) || fbcqdx30fd || cvinfdydnt ) ; fdsgadmqx2 = ( ( ! iohvoh3hot ) || ( !
lrzouzj3wx ) || ( ! d05i0imjvx ) ) ; bfzpm5h3ib = ! fdsgadmqx2 ; rtDW .
hepne3hpaw = ixbaqxvld3 ; ita5etr0mm = ( ( ( uint8_T ) ( ( int64_T ) ( (
uint64_T ) esziabortj >> 7 ) >> 32 ) & 1U ) == 0U ) ; egrazjjv2f = !
ita5etr0mm ; rtDW . ni0bl2pri0 = ixbaqxvld3 ; hsd3fkb2vr = ( ( ! ita5etr0mm )
|| ( ( ( uint8_T ) ( ( int64_T ) ( ( uint64_T ) esziabortj >> 6 ) >> 32 ) &
1U ) == 0U ) ) ; jctawczzk3 = ! hsd3fkb2vr ; rtDW . a3mcja4urs = ixbaqxvld3 ;
mcmzp2ckvi = ( ( ! hsd3fkb2vr ) || ( ! ita5etr0mm ) || ( ( ( uint8_T ) ( (
int64_T ) ( ( uint64_T ) esziabortj >> 5 ) >> 32 ) & 1U ) == 0U ) ) ;
grlx3eas12 = ! mcmzp2ckvi ; rtDW . evli1vcywa = ixbaqxvld3 ; ao5kvx5htb = ( (
! mcmzp2ckvi ) || ( ! hsd3fkb2vr ) || ( ! ita5etr0mm ) || ( ( ( uint8_T ) ( (
int64_T ) ( ( uint64_T ) esziabortj >> 4 ) >> 32 ) & 1U ) == 0U ) ) ;
ia1dtrqdgh = ( egrazjjv2f || jctawczzk3 || grlx3eas12 || ( ! ao5kvx5htb ) ) ;
rtDW . e4acoao20b = ixbaqxvld3 ; rtDW . mfqd1lsjjw = ixbaqxvld3 ; cfkubkdzyf
= ( ( ! mcmzp2ckvi ) || ( ! hsd3fkb2vr ) || ( ! ita5etr0mm ) || ( !
ao5kvx5htb ) || ( ( ( uint8_T ) ( ( int64_T ) ( ( uint64_T ) esziabortj >> 3
) >> 32 ) & 1U ) == 0U ) ) ; gxdicukpye = ! cfkubkdzyf ; rtDW . m3zpcv3djg =
ixbaqxvld3 ; ak52hc3kla = ( ( ! mcmzp2ckvi ) || ( ! hsd3fkb2vr ) || ( !
ita5etr0mm ) || ( ! ao5kvx5htb ) || ( ! cfkubkdzyf ) || ( ( ( uint8_T ) ( (
int64_T ) ( ( uint64_T ) esziabortj >> 2 ) >> 32 ) & 1U ) == 0U ) ) ;
jctawczzk3 = ( egrazjjv2f || jctawczzk3 || gxdicukpye || ( ! ak52hc3kla ) ) ;
rtDW . nnbiwtqwas = ixbaqxvld3 ; ita5etr0mm = ( egrazjjv2f || grlx3eas12 || (
mcmzp2ckvi && hsd3fkb2vr && ita5etr0mm && ao5kvx5htb && cfkubkdzyf &&
ak52hc3kla && ( ( ( uint8_T ) ( ( int64_T ) ( ( uint64_T ) esziabortj >> 1 )
>> 32 ) & 1U ) != 0U ) ) || gxdicukpye ) ; egrazjjv2f = ( ia1dtrqdgh || ( ( (
uint8_T ) ( esziabortj >> 32 ) & 1U ) != 0U ) || jctawczzk3 || ita5etr0mm ) ;
asxlf1xrdl = ( ( ! fdsgadmqx2 ) || ( ! iohvoh3hot ) || ( ! lrzouzj3wx ) || (
! egrazjjv2f ) ) ; hsd3fkb2vr = ( irvbj4tgny || mxwmnlovus || bfzpm5h3ib || (
! asxlf1xrdl ) ) ; rtDW . eecce0ocvb = ixbaqxvld3 ; ao5kvx5htb = ( ( (
uint8_T ) ( ( esziabortj << 1 ) >> 32 ) & 1U ) == 0U ) ; cfkubkdzyf = !
ao5kvx5htb ; rtDW . losfu35ozo = ixbaqxvld3 ; gxdicukpye = ( ( ! ao5kvx5htb )
|| ( ( ( uint8_T ) ( ( esziabortj << 2 ) >> 32 ) & 1U ) == 0U ) ) ;
grlx3eas12 = ! gxdicukpye ; rtDW . iqssg2wtlr = ixbaqxvld3 ; ak52hc3kla = ( (
! gxdicukpye ) || ( ! ao5kvx5htb ) || ( ( ( uint8_T ) ( ( esziabortj << 3 )
>> 32 ) & 1U ) == 0U ) ) ; ittgwn0gal = ! ak52hc3kla ; rtDW . nl3wf33p4z =
ixbaqxvld3 ; iu4w4bqqv1 = ( ( ! ak52hc3kla ) || ( ! gxdicukpye ) || ( !
ao5kvx5htb ) || ( ( ( uint8_T ) ( ( esziabortj << 4 ) >> 32 ) & 1U ) == 0U )
) ; mcmzp2ckvi = ( cfkubkdzyf || grlx3eas12 || ittgwn0gal || ( ! iu4w4bqqv1 )
) ; rtDW . cc1pquwq52 = ixbaqxvld3 ; rtDW . lqzocersmx = ixbaqxvld3 ;
otarriw4qv = ( ( ! ak52hc3kla ) || ( ! gxdicukpye ) || ( ! ao5kvx5htb ) || (
! iu4w4bqqv1 ) || ( ( ( uint8_T ) ( ( esziabortj << 5 ) >> 32 ) & 1U ) == 0U
) ) ; ia2xzb20oo = ! otarriw4qv ; rtDW . ixn1qplhkp = ixbaqxvld3 ; abcjncnm3l
= ( ( ! ak52hc3kla ) || ( ! gxdicukpye ) || ( ! ao5kvx5htb ) || ( !
iu4w4bqqv1 ) || ( ! otarriw4qv ) || ( ( ( uint8_T ) ( ( esziabortj << 6 ) >>
32 ) & 1U ) == 0U ) ) ; grlx3eas12 = ( cfkubkdzyf || grlx3eas12 || ia2xzb20oo
|| ( ! abcjncnm3l ) ) ; rtDW . izhxg5z13h = ixbaqxvld3 ; ao5kvx5htb = (
cfkubkdzyf || ittgwn0gal || ( ak52hc3kla && gxdicukpye && ao5kvx5htb &&
iu4w4bqqv1 && otarriw4qv && abcjncnm3l && ( ( ( uint8_T ) ( ( esziabortj << 7
) >> 32 ) & 1U ) != 0U ) ) || ia2xzb20oo ) ; cfkubkdzyf = ( mcmzp2ckvi || ( (
( uint8_T ) ( ( esziabortj << 8 ) >> 32 ) & 1U ) != 0U ) || grlx3eas12 ||
ao5kvx5htb ) ; abcjncnm3l = ( ( ! fdsgadmqx2 ) || ( ! iohvoh3hot ) || ( !
lrzouzj3wx ) || ( ! asxlf1xrdl ) || ( ! cfkubkdzyf ) ) ; ecbexyd0ph = !
abcjncnm3l ; rtDW . bql2kbo1mn = ixbaqxvld3 ; ittgwn0gal = ( ( ( uint8_T ) (
( esziabortj << 9 ) >> 32 ) & 1U ) == 0U ) ; iu4w4bqqv1 = ! ittgwn0gal ; rtDW
. a1uugg3z5q = ixbaqxvld3 ; otarriw4qv = ( ( ! ittgwn0gal ) || ( ( ( uint8_T
) ( ( esziabortj << 10 ) >> 32 ) & 1U ) == 0U ) ) ; ak52hc3kla = ! otarriw4qv
; rtDW . d5oxqf3ihc = ixbaqxvld3 ; ia2xzb20oo = ( ( ! otarriw4qv ) || ( !
ittgwn0gal ) || ( ( ( uint8_T ) ( ( esziabortj << 11 ) >> 32 ) & 1U ) == 0U )
) ; l2tg01s4nq = ! ia2xzb20oo ; rtDW . caj1z5lk13 = ixbaqxvld3 ; lngy05heex =
( ( ! ia2xzb20oo ) || ( ! otarriw4qv ) || ( ! ittgwn0gal ) || ( ( ( uint8_T )
( ( esziabortj << 12 ) >> 32 ) & 1U ) == 0U ) ) ; gxdicukpye = ( iu4w4bqqv1
|| ak52hc3kla || l2tg01s4nq || ( ! lngy05heex ) ) ; rtDW . ltvrxrfwqx =
ixbaqxvld3 ; rtDW . d3t2v2pyhe = ixbaqxvld3 ; kgp5a3mgtp = ( ( ! ia2xzb20oo )
|| ( ! otarriw4qv ) || ( ! ittgwn0gal ) || ( ! lngy05heex ) || ( ( ( uint8_T
) ( ( esziabortj << 13 ) >> 32 ) & 1U ) == 0U ) ) ; omcbqse5ik = ! kgp5a3mgtp
; rtDW . p30s42eq1u = ixbaqxvld3 ; amxrt3m4lu = ( ( ! ia2xzb20oo ) || ( !
otarriw4qv ) || ( ! ittgwn0gal ) || ( ! lngy05heex ) || ( ! kgp5a3mgtp ) || (
( ( uint8_T ) ( ( esziabortj << 14 ) >> 32 ) & 1U ) == 0U ) ) ; ak52hc3kla =
( iu4w4bqqv1 || ak52hc3kla || omcbqse5ik || ( ! amxrt3m4lu ) ) ; rtDW .
jwy1yupkgd = ixbaqxvld3 ; ittgwn0gal = ( iu4w4bqqv1 || l2tg01s4nq || (
ia2xzb20oo && otarriw4qv && ittgwn0gal && lngy05heex && kgp5a3mgtp &&
amxrt3m4lu && ( ( ( uint8_T ) ( ( esziabortj << 15 ) >> 32 ) & 1U ) != 0U ) )
|| omcbqse5ik ) ; iu4w4bqqv1 = ( gxdicukpye || ( ( ( uint8_T ) ( ( esziabortj
<< 16 ) >> 32 ) & 1U ) != 0U ) || ak52hc3kla || ittgwn0gal ) ; kgp5a3mgtp = (
( ! fdsgadmqx2 ) || ( ! iohvoh3hot ) || ( ! lrzouzj3wx ) || ( ! asxlf1xrdl )
|| ( ! abcjncnm3l ) || ( ! iu4w4bqqv1 ) ) ; mxwmnlovus = ( irvbj4tgny ||
mxwmnlovus || ecbexyd0ph || ( ! kgp5a3mgtp ) ) ; rtDW . ht4iqhimgp =
ixbaqxvld3 ; l2tg01s4nq = ( ( ( uint8_T ) ( ( esziabortj << 17 ) >> 32 ) & 1U
) == 0U ) ; lngy05heex = ! l2tg01s4nq ; rtDW . ljys42kk0x = ixbaqxvld3 ;
omcbqse5ik = ( ( ! l2tg01s4nq ) || ( ( ( uint8_T ) ( ( esziabortj << 18 ) >>
32 ) & 1U ) == 0U ) ) ; ia2xzb20oo = ! omcbqse5ik ; rtDW . m1vo1ryh5y =
ixbaqxvld3 ; amxrt3m4lu = ( ( ! omcbqse5ik ) || ( ! l2tg01s4nq ) || ( ( (
uint8_T ) ( ( esziabortj << 19 ) >> 32 ) & 1U ) == 0U ) ) ; on0cqe0glx = !
amxrt3m4lu ; rtDW . fchfg0xqd2 = ixbaqxvld3 ; eibrss4syk = ( ( ! amxrt3m4lu )
|| ( ! omcbqse5ik ) || ( ! l2tg01s4nq ) || ( ( ( uint8_T ) ( ( esziabortj <<
20 ) >> 32 ) & 1U ) == 0U ) ) ; otarriw4qv = ( lngy05heex || ia2xzb20oo ||
on0cqe0glx || ( ! eibrss4syk ) ) ; rtDW . aedtwpb020 = ixbaqxvld3 ; rtDW .
kod452jlzj = ixbaqxvld3 ; f3bakvrxam = ( ( ! amxrt3m4lu ) || ( ! omcbqse5ik )
|| ( ! l2tg01s4nq ) || ( ! eibrss4syk ) || ( ( ( uint8_T ) ( ( esziabortj <<
21 ) >> 32 ) & 1U ) == 0U ) ) ; aeaq1dg12n = ! f3bakvrxam ; rtDW . oeoilbr25n
= ixbaqxvld3 ; om2m42btur = ( ( ! amxrt3m4lu ) || ( ! omcbqse5ik ) || ( !
l2tg01s4nq ) || ( ! eibrss4syk ) || ( ! f3bakvrxam ) || ( ( ( uint8_T ) ( (
esziabortj << 22 ) >> 32 ) & 1U ) == 0U ) ) ; ia2xzb20oo = ( lngy05heex ||
ia2xzb20oo || aeaq1dg12n || ( ! om2m42btur ) ) ; rtDW . gjyzf1p00w =
ixbaqxvld3 ; l2tg01s4nq = ( lngy05heex || on0cqe0glx || ( amxrt3m4lu &&
omcbqse5ik && l2tg01s4nq && eibrss4syk && f3bakvrxam && om2m42btur && ( ( (
uint8_T ) ( ( esziabortj << 23 ) >> 32 ) & 1U ) != 0U ) ) || aeaq1dg12n ) ;
lngy05heex = ( otarriw4qv || ( ( ( uint8_T ) ( ( esziabortj << 24 ) >> 32 ) &
1U ) != 0U ) || ia2xzb20oo || l2tg01s4nq ) ; lrzouzj3wx = ( irvbj4tgny ||
bfzpm5h3ib || ( fdsgadmqx2 && iohvoh3hot && lrzouzj3wx && asxlf1xrdl &&
abcjncnm3l && kgp5a3mgtp && lngy05heex ) || ecbexyd0ph ) ; rtDW . hsn4witota
= ixbaqxvld3 ; fdsgadmqx2 = ( ( ( uint8_T ) ( ( esziabortj << 25 ) >> 32 ) &
1U ) == 0U ) ; bfzpm5h3ib = ! fdsgadmqx2 ; rtDW . j4xszwnett = ixbaqxvld3 ;
asxlf1xrdl = ( ( ! fdsgadmqx2 ) || ( ( ( uint8_T ) ( ( esziabortj << 26 ) >>
32 ) & 1U ) == 0U ) ) ; iohvoh3hot = ! asxlf1xrdl ; rtDW . gysjg2ez2v =
ixbaqxvld3 ; abcjncnm3l = ( ( ! asxlf1xrdl ) || ( ! fdsgadmqx2 ) || ( ( (
uint8_T ) ( ( esziabortj << 27 ) >> 32 ) & 1U ) == 0U ) ) ; ecbexyd0ph = !
abcjncnm3l ; rtDW . adpqvxr4pq = ixbaqxvld3 ; kgp5a3mgtp = ( ( ! abcjncnm3l )
|| ( ! asxlf1xrdl ) || ( ! fdsgadmqx2 ) || ( ( ( uint8_T ) ( ( esziabortj <<
28 ) >> 32 ) & 1U ) == 0U ) ) ; irvbj4tgny = ( bfzpm5h3ib || iohvoh3hot ||
ecbexyd0ph || ( ! kgp5a3mgtp ) ) ; rtDW . oacqmm32n4 = ixbaqxvld3 ; rtDW .
g4hhato521 = ixbaqxvld3 ; omcbqse5ik = ( ( ! abcjncnm3l ) || ( ! asxlf1xrdl )
|| ( ! fdsgadmqx2 ) || ( ! kgp5a3mgtp ) || ( ( ( uint8_T ) ( ( esziabortj <<
29 ) >> 32 ) & 1U ) == 0U ) ) ; amxrt3m4lu = ! omcbqse5ik ; rtDW . fbt5g1jmhm
= ixbaqxvld3 ; on0cqe0glx = ( ( ! abcjncnm3l ) || ( ! asxlf1xrdl ) || ( !
fdsgadmqx2 ) || ( ! kgp5a3mgtp ) || ( ! omcbqse5ik ) || ( ( ( uint8_T ) ( (
esziabortj << 30 ) >> 32 ) & 1U ) == 0U ) ) ; iohvoh3hot = ( bfzpm5h3ib ||
iohvoh3hot || amxrt3m4lu || ( ! on0cqe0glx ) ) ; rtDW . dmci5bmb3h =
ixbaqxvld3 ; fdsgadmqx2 = ( bfzpm5h3ib || ecbexyd0ph || ( abcjncnm3l &&
asxlf1xrdl && fdsgadmqx2 && kgp5a3mgtp && omcbqse5ik && on0cqe0glx && ( ( (
uint8_T ) ( ( esziabortj << 31 ) >> 32 ) & 1U ) != 0U ) ) || amxrt3m4lu ) ;
bfzpm5h3ib = ( irvbj4tgny || ( ( ( uint8_T ) ( ( esziabortj << 32 ) >> 32 ) &
1U ) != 0U ) || iohvoh3hot || fdsgadmqx2 ) ; if ( ( ( ! hsd3fkb2vr ) || ( !
mxwmnlovus ) || ( ! lrzouzj3wx ) ) && ( ( ! hsd3fkb2vr ) && ( ! bfzpm5h3ib )
&& ( ! mxwmnlovus ) && ( ! lrzouzj3wx ) ) ) { p4p5rnrsvk = rtP .
Constant3_Value_lbirtd1onz ; } else { p4p5rnrsvk = rtP .
Constant2_Value_ohixjzkukx ; } rtB . a3iwhtvldk = ( uint8_T ) ( ( uint8_T ) (
( hsd3fkb2vr << 1 | mxwmnlovus ) << 1 | lrzouzj3wx ) + p4p5rnrsvk ) ; if ( (
( ! dnrgtbkacr ) || ( ! inhnbdxcvg ) || ( ! l0oufvzla1 ) ) && ( ! o55pf3lytg
) ) { p4p5rnrsvk = rtP . Constant3_Value_ct1ssw2iai ; } else { p4p5rnrsvk =
rtP . Constant2_Value_i2ixkscr0n ; } if ( ( ( ! dieh02pbbz ) || ( !
drztvx2kd1 ) || ( ! j13cb0cety ) ) && ( ! nrvm3tyilv ) ) { kcruvnwyqu = rtP .
Constant3_Value_el30fn1msq ; } else { kcruvnwyqu = rtP .
Constant2_Value_dwodbc2r1a ; } if ( ( ( ! pmhvwvvcq0 ) || ( ! fbcqdx30fd ) ||
( ! cvinfdydnt ) ) && ( ! d05i0imjvx ) ) { mhwetvtb21 = rtP .
Constant3_Value_onbgsrj0rx ; } else { mhwetvtb21 = rtP .
Constant2_Value_a1dspjkqzh ; } if ( ( ( ! ia1dtrqdgh ) || ( ! jctawczzk3 ) ||
( ! ita5etr0mm ) ) && ( ! egrazjjv2f ) ) { i0wgux15t1 = rtP .
Constant3_Value_alolzh5ywf ; } else { i0wgux15t1 = rtP .
Constant2_Value_kqu1tfwt4n ; } if ( ( ( ! mcmzp2ckvi ) || ( ! grlx3eas12 ) ||
( ! ao5kvx5htb ) ) && ( ! cfkubkdzyf ) ) { fxukkrzowb = rtP .
Constant3_Value_oso0vxioei ; } else { fxukkrzowb = rtP .
Constant2_Value_ec5rke41be ; } if ( ( ( ! gxdicukpye ) || ( ! ak52hc3kla ) ||
( ! ittgwn0gal ) ) && ( ! iu4w4bqqv1 ) ) { nkvblhrpx2 = rtP .
Constant3_Value_dexrkkh4c4 ; } else { nkvblhrpx2 = rtP .
Constant2_Value_nc5s2wb0rh ; } if ( ( ( ! otarriw4qv ) || ( ! ia2xzb20oo ) ||
( ! l2tg01s4nq ) ) && ( ! lngy05heex ) ) { gcdfegzolx = rtP .
Constant3_Value_pg0qfh0cbj ; } else { gcdfegzolx = rtP .
Constant2_Value_dkvarshrqp ; } if ( ( ( ! irvbj4tgny ) || ( ! iohvoh3hot ) ||
( ! fdsgadmqx2 ) ) && ( ! bfzpm5h3ib ) ) { ln4xdikysc = rtP .
Constant3_Value_boeuttnvpz ; } else { ln4xdikysc = rtP .
Constant2_Value_ouiku3bmk1 ; } switch ( ( uint8_T ) ( ( uint8_T ) ( ( uint8_T
) ( pmhvwvvcq0 << 1 | fbcqdx30fd ) << 1 | cvinfdydnt ) + mhwetvtb21 ) ) {
case 8 : p3ub3wtylp = rtP . Constant1_Value_n4judegzvj ; break ; case 7 :
p3ub3wtylp = rtP . Constant2_Value_k0ktdbocz4 ; break ; case 6 : p3ub3wtylp =
rtP . Constant3_Value_lbel4dw0dv ; break ; case 5 : p3ub3wtylp = rtP .
Constant4_Value_escejwutik ; break ; case 4 : p3ub3wtylp = rtP .
Constant5_Value_mpdnsmcfyz ; break ; case 3 : p3ub3wtylp = rtP .
Constant6_Value_erkzozkfy5 ; break ; case 2 : p3ub3wtylp = rtP .
Constant7_Value_aolhk02asu ; break ; case 1 : p3ub3wtylp = rtP .
Constant8_Value_gabmu1pjqx ; break ; default : p3ub3wtylp = rtP .
Constant9_Value_ldfh10xgii ; break ; } switch ( ( uint8_T ) ( ( uint8_T ) ( (
uint8_T ) ( dieh02pbbz << 1 | drztvx2kd1 ) << 1 | j13cb0cety ) + kcruvnwyqu )
) { case 8 : fktn3lagj4 = rtP . Constant10_Value_f44uzjlu5d ; break ; case 7
: fktn3lagj4 = rtP . Constant11_Value_jpqb1dtsfx ; break ; case 6 :
fktn3lagj4 = rtP . Constant12_Value_f22rvio1nc ; break ; case 5 : fktn3lagj4
= rtP . Constant13_Value_aw3o5jhccx ; break ; case 4 : fktn3lagj4 = rtP .
Constant14_Value_guv12q5ri5 ; break ; case 3 : fktn3lagj4 = rtP .
Constant15_Value_j3mvhrt40a ; break ; case 2 : fktn3lagj4 = rtP .
Constant16_Value_fevyvvg53b ; break ; case 1 : fktn3lagj4 = rtP .
Constant17_Value ; break ; default : fktn3lagj4 = rtP .
Constant18_Value_bg2u2iviem ; break ; } switch ( ( uint8_T ) ( ( uint8_T ) (
( uint8_T ) ( dnrgtbkacr << 1 | inhnbdxcvg ) << 1 | l0oufvzla1 ) + p4p5rnrsvk
) ) { case 7 : oyytl0kyxu = rtP . Constant20_Value_fu0rekofhy ; break ; case
6 : oyytl0kyxu = rtP . Constant21_Value ; break ; case 5 : oyytl0kyxu = rtP .
Constant22_Value ; break ; case 4 : oyytl0kyxu = rtP . Constant23_Value ;
break ; case 3 : oyytl0kyxu = rtP . Constant24_Value ; break ; case 2 :
oyytl0kyxu = rtP . Constant25_Value ; break ; case 1 : oyytl0kyxu = rtP .
Constant26_Value ; break ; default : oyytl0kyxu = rtP . Constant27_Value ;
break ; } switch ( ( uint8_T ) ( ( uint8_T ) ( ( uint8_T ) ( ia1dtrqdgh << 1
| jctawczzk3 ) << 1 | ita5etr0mm ) + i0wgux15t1 ) ) { case 8 : ha3rfpb3e2 =
rtP . Constant19_Value_dvedfx4umz ; break ; case 7 : ha3rfpb3e2 = rtP .
Constant65_Value ; break ; case 6 : ha3rfpb3e2 = rtP . Constant66_Value ;
break ; case 5 : ha3rfpb3e2 = rtP . Constant67_Value ; break ; case 4 :
ha3rfpb3e2 = rtP . Constant68_Value ; break ; case 3 : ha3rfpb3e2 = rtP .
Constant69_Value ; break ; case 2 : ha3rfpb3e2 = rtP . Constant70_Value ;
break ; case 1 : ha3rfpb3e2 = rtP . Constant71_Value ; break ; default :
ha3rfpb3e2 = rtP . Constant72_Value ; break ; } switch ( ( uint8_T ) ( (
uint8_T ) ( ( uint8_T ) ( mcmzp2ckvi << 1 | grlx3eas12 ) << 1 | ao5kvx5htb )
+ fxukkrzowb ) ) { case 8 : ptgibrb03q = rtP . Constant28_Value ; break ;
case 7 : ptgibrb03q = rtP . Constant29_Value ; break ; case 6 : ptgibrb03q =
rtP . Constant30_Value ; break ; case 5 : ptgibrb03q = rtP . Constant31_Value
; break ; case 4 : ptgibrb03q = rtP . Constant32_Value ; break ; case 3 :
ptgibrb03q = rtP . Constant33_Value ; break ; case 2 : ptgibrb03q = rtP .
Constant34_Value ; break ; case 1 : ptgibrb03q = rtP . Constant35_Value ;
break ; default : ptgibrb03q = rtP . Constant36_Value ; break ; } switch ( (
uint8_T ) ( ( uint8_T ) ( ( uint8_T ) ( gxdicukpye << 1 | ak52hc3kla ) << 1 |
ittgwn0gal ) + nkvblhrpx2 ) ) { case 8 : eeerwixu5w = rtP . Constant37_Value
; break ; case 7 : eeerwixu5w = rtP . Constant38_Value ; break ; case 6 :
eeerwixu5w = rtP . Constant39_Value ; break ; case 5 : eeerwixu5w = rtP .
Constant40_Value ; break ; case 4 : eeerwixu5w = rtP . Constant41_Value ;
break ; case 3 : eeerwixu5w = rtP . Constant42_Value ; break ; case 2 :
eeerwixu5w = rtP . Constant43_Value ; break ; case 1 : eeerwixu5w = rtP .
Constant44_Value ; break ; default : eeerwixu5w = rtP . Constant45_Value ;
break ; } switch ( ( uint8_T ) ( ( uint8_T ) ( ( uint8_T ) ( otarriw4qv << 1
| ia2xzb20oo ) << 1 | l2tg01s4nq ) + gcdfegzolx ) ) { case 8 : embmejwflu =
rtP . Constant46_Value ; break ; case 7 : embmejwflu = rtP . Constant47_Value
; break ; case 6 : embmejwflu = rtP . Constant48_Value ; break ; case 5 :
embmejwflu = rtP . Constant49_Value ; break ; case 4 : embmejwflu = rtP .
Constant50_Value ; break ; case 3 : embmejwflu = rtP . Constant51_Value ;
break ; case 2 : embmejwflu = rtP . Constant52_Value ; break ; case 1 :
embmejwflu = rtP . Constant53_Value ; break ; default : embmejwflu = rtP .
Constant54_Value ; break ; } switch ( ( uint8_T ) ( ( uint32_T ) ( (
irvbj4tgny << 1 | iohvoh3hot ) << 1 | fdsgadmqx2 ) + ln4xdikysc ) ) { case 8
: ilu1filn3o = rtP . Constant55_Value ; break ; case 7 : ilu1filn3o = rtP .
Constant56_Value ; break ; case 6 : ilu1filn3o = rtP . Constant57_Value ;
break ; case 5 : ilu1filn3o = rtP . Constant58_Value ; break ; case 4 :
ilu1filn3o = rtP . Constant59_Value ; break ; case 3 : ilu1filn3o = rtP .
Constant60_Value ; break ; case 2 : ilu1filn3o = rtP . Constant61_Value ;
break ; case 1 : ilu1filn3o = rtP . Constant62_Value ; break ; default :
ilu1filn3o = rtP . Constant63_Value ; break ; } switch ( rtB . a3iwhtvldk ) {
case 8 : break ; case 7 : oyytl0kyxu = fktn3lagj4 ; break ; case 6 :
oyytl0kyxu = p3ub3wtylp ; break ; case 5 : oyytl0kyxu = ha3rfpb3e2 ; break ;
case 4 : oyytl0kyxu = ptgibrb03q ; break ; case 3 : oyytl0kyxu = eeerwixu5w ;
break ; case 2 : oyytl0kyxu = embmejwflu ; break ; case 1 : oyytl0kyxu =
ilu1filn3o ; break ; default : oyytl0kyxu = rtP . Constant64_Value ; break ;
} if ( ! rtB . h25zdcfr3m ) { kr2pjpgzrf = rtP . Constant20_Value ; }
esziabortj = ( int64_T ) oyytl0kyxu << 32 ; if ( ( esziabortj < 0LL ) && (
kr2pjpgzrf < MIN_int64_T - esziabortj ) ) { rtB . ia1w4ytogn = MIN_int64_T ;
} else if ( ( esziabortj > 0LL ) && ( kr2pjpgzrf > MAX_int64_T - esziabortj )
) { rtB . ia1w4ytogn = MAX_int64_T ; } else { rtB . ia1w4ytogn = esziabortj +
kr2pjpgzrf ; } rtB . jger4u35mr = rtDW . bognbsvydi ; rtB . okkaymlkwy = (
rtDW . mfhlrzl41r [ 0 ] && rtB . h25zdcfr3m ) ; UNUSED_PARAMETER ( tid ) ; }
void MdlOutputsTID1 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlUpdate ( int_T tid ) { o0tlycgbd5 * obj_i ; o0tlycgbd5h * obj_p ;
o0tlycgbd5hp * obj ; o0tlycgbd5hph * obj_e ; real_T dataInOutMem ; real_T
obj_pCurSOF ; int32_T data_im ; int32_T data_re ; int8_T b_index_data [ 4096
] ; boolean_T tmp [ 4096 ] ; boolean_T obj_pRdOutBuffer_roll ; if ( rtDW .
iry4sotwjo . isInitialized != 1 ) { illrhjptmh ( & rtDW . iry4sotwjo ) ; }
else { jreuwb1n0z ( & rtDW . iry4sotwjo , false ) ; } if ( rtB . i3ff0r1vbw )
{ rtDW . iry4sotwjo . pRAM [ rtB . kpbfqapfvb ] = rtB . m3rzx1y5tc ; } if (
rtB . my1rk5yzqh ) { rtDW . iry4sotwjo . pRAM [ rtB . p3plncwt3y ] = rtB .
izq1pj0n5n ; } rtDW . iry4sotwjo . pOutWriteData [ 0 ] = rtDW . iry4sotwjo .
pRAM [ rtB . kpbfqapfvb ] ; rtDW . iry4sotwjo . pOutWriteData [ 1 ] = rtDW .
iry4sotwjo . pRAM [ rtB . p3plncwt3y ] ; for ( data_re = 0 ; data_re < 6145 ;
data_re ++ ) { rtDW . jl34i02arl [ ( uint32_T ) data_re ] = rtDW . jl34i02arl
[ ( uint32_T ) data_re + 1U ] ; } rtDW . jl34i02arl [ 6145 ] = rtB .
fuqnxov3qi ; for ( data_re = 0 ; data_re < 12291 ; data_re ++ ) { rtDW .
mmbeeyt2c3 [ ( uint32_T ) data_re ] = rtDW . mmbeeyt2c3 [ ( uint32_T )
data_re + 1U ] ; rtDW . ghw5kalbtu [ ( uint32_T ) data_re ] = rtDW .
ghw5kalbtu [ ( uint32_T ) data_re + 1U ] ; } rtDW . mmbeeyt2c3 [ 12291 ] =
rtB . li4ud3n1ur ; rtDW . ghw5kalbtu [ 12291 ] = rtB . dxib5ld313 ; rtDW .
kwwlxjzdoe = rtB . kutvr5wkxy ; for ( data_re = 0 ; data_re < 15 ; data_re ++
) { rtDW . kbijeiibcz [ ( uint32_T ) data_re ] = rtDW . kbijeiibcz [ (
uint32_T ) data_re + 1U ] ; } rtDW . kbijeiibcz [ 15 ] = rtB . eezqixq4vm ;
rtDW . dv5jqwdcth = rtB . c54aceqg1h ; rtDW . o2s0qk524e = rtB . hkq0hwtoyx ;
rtDW . bujt1u5ssb = rtB . k1bjk0virl ; rtDW . ch3ulmwkxf = rtB . d3l4vvyx25 ;
rtDW . npnmarbxwp = rtB . lcf40fba1a ; rtDW . luidyjwywm = rtB . mg4yfzjodt ;
rtDW . nct4dwsy42 = rtB . ob5mrjkqt2 ; rtDW . m21yi3xe0r = rtB . jnj1ehlfk2 ;
rtDW . nys12ztjas = rtB . daoeclpvro ; rtDW . gxoqfko3zl = rtB . dqgaqsoxml ;
rtDW . cozp4vn1gx = rtB . b45emcbx3v ; rtDW . efb0llahxe = rtB . fuyo2snwtu ;
rtDW . cwc30hkp0p = rtB . dpu2kg04pd ; rtDW . kgybnswm2h = rtB . agbei0ngoi ;
rtDW . nzmtxoifv5 = rtB . ikbuvqafor ; rtDW . pb1zjp11ah = rtB . iho4z3cfly ;
rtDW . lsrg3b3izb = rtB . jger4u35mr ; rtDW . cm2wzi1df3 = rtB . mcwekkioni ;
rtDW . e4apruk0cn = rtB . ado5tfrhto ; rtDW . kdeplemgid = rtB . klwgk32xms ;
rtDW . oq1rde331u = rtB . ix2rkj1uhp ; rtDW . dri1oggmq0 = rtB . bcdg4aqvxx ;
rtDW . nv4uj53r02 = rtB . moxmhpt4za ; rtDW . bxqyzy02ny = rtB . khjd0pwmp2 ;
rtDW . agzzpunc3i = rtB . m0in21nfjf ; rtDW . a2kthhvkup = rtB . dhvtuwjn5q ;
rtDW . ptf1jyuocm = rtB . m04obivhlo ; rtDW . kk3vqau5j4 = rtB . ia1w4ytogn ;
rtDW . cczfdi3ydg = rtB . k3gjcoiaah ; rtDW . mcbewak1r4 = rtB . chlrvyiben ;
rtDW . j3spvmunzs = rtB . kx4s1bfrve ; rtDW . hzvbnr4bgd = rtB . kb0snyasga ;
rtDW . huil4csvle = rtB . mzxbve3150 ; rtDW . e0hsphy30b = rtB . clus3tzhel ;
rtDW . pjspex5iux = rtB . oqxpponqds ; rtDW . ceruf15djt = rtB . bzrplhmpbv ;
rtDW . nwj4wrfqti = rtB . igdhiw14ne ; el33ttatyo ( rtB . mgemxwmqco , rtB .
en0j55pc4g , rtB . meb2o0zddj , rtB . h1cqgq2mge , & rtDW . itndmcozqm ) ;
rtDW . cjaep5120g = rtB . la1nmi4wem ; rtDW . dmbtvfs22x = rtB . mkubyaeqcu ;
rtDW . noznim2iqz [ rtDW . a1421jzrsu ] = rtB . o45kvswdjc ; if ( rtDW .
a1421jzrsu < 6144 ) { rtDW . a1421jzrsu ++ ; } else { rtDW . a1421jzrsu = 0U
; } rtDW . etvgfdreuz = rtB . e4j4qg1qju ; rtDW . faabslxst2 = rtB .
mz3q3qigkp ; rtDW . gumtab5fnv = rtB . a0xfczjjxq ; rtDW . d3nvmjf1vd = rtB .
c0ffvnqlub ; rtDW . oruuzh4bzs = rtB . d0jeunwwfk ; rtDW . ew53tl52et = rtB .
fuhxi3miys ; rtDW . afmamtdg1h = rtB . ks0ab3ncaa ; rtDW . kmhibglhil = rtB .
e2bcu340xv ; rtDW . c0mvgpjrpg = rtB . bbt312bxcp ; rtDW . oc3xb3ueqi = rtB .
byapugguel ; rtDW . ggpm4i3hqv = rtB . d2hwz44h43 ; rtDW . pgw0quxym3 = rtB .
fxkd0rxmvf ; rtDW . b3tarjjh2r = rtB . a3zc04aozw ; rtDW . bjsvnxykzn = rtB .
ipjjcqoavm ; rtDW . fn03ogv30b = rtB . pcorqvo0zh ; rtDW . o0tgjzszlx = rtB .
fawzgxk22q ; rtDW . jk0pdacxs0 = rtB . mmnhy4y2nh ; rtDW . hkv3n4pgdt = rtB .
jqlnks01up ; rtDW . msyvbfgmjp = rtB . koxhgdt2a3 ; rtDW . i3gumoeyz1 = rtB .
gahmmw4bfy ; rtDW . gxbtoq4uog = rtB . gdwsr53yim ; rtDW . aqfzu2hilm = rtB .
dtghpb1x22 ; rtDW . do1g134e35 = rtB . pegi3bwz0d ; if ( rtDW . bpbbz5llcl .
isInitialized != 1 ) { rtDW . bpbbz5llcl . isInitialized = 1 ; jfd4g2kq55 ( &
rtDW . bpbbz5llcl ) ; ohqoxehyir ( & rtDW . bpbbz5llcl ) ; } obj_pCurSOF =
rtDW . bpbbz5llcl . pCurSOF ; if ( rtDW . bpbbz5llcl . pResetStart ) {
dataInOutMem = 0.0 ; } else if ( rtDW . bpbbz5llcl . pRdOutBuffer_roll ==
rtDW . bpbbz5llcl . pWrOutBuffer_roll ) { dataInOutMem = rtDW . bpbbz5llcl .
pWrOutBuffer_index - rtDW . bpbbz5llcl . pRdOutBuffer_index ; } else {
dataInOutMem = ( 114688.0 - rtDW . bpbbz5llcl . pRdOutBuffer_index ) + rtDW .
bpbbz5llcl . pWrOutBuffer_index ; } if ( dataInOutMem > 0.0 ) { if ( rtDW .
bpbbz5llcl . pCurSOF == 0.0 ) { obj_pCurSOF = rtDW . bpbbz5llcl . pSOFFifo [
( int32_T ) rtDW . bpbbz5llcl . pRdFifoAddr - 1 ] ; if ( rtDW . bpbbz5llcl .
pSOFFifo [ ( int32_T ) rtDW . bpbbz5llcl . pRdFifoAddr - 1 ] > 0.0 ) { if (
rtDW . bpbbz5llcl . pRdFifoAddr == 1024.0 ) { rtDW . bpbbz5llcl . pRdFifoAddr
= 1.0 ; } else { rtDW . bpbbz5llcl . pRdFifoAddr ++ ; } } } else if ( rtDW .
bpbbz5llcl . pSimTime >= rtDW . bpbbz5llcl . pCurSOF + 4096.0 ) { obj_pCurSOF
= rtDW . bpbbz5llcl . pSOFFifo [ ( int32_T ) rtDW . bpbbz5llcl . pRdFifoAddr
- 1 ] ; if ( rtDW . bpbbz5llcl . pSOFFifo [ ( int32_T ) rtDW . bpbbz5llcl .
pRdFifoAddr - 1 ] > 0.0 ) { if ( rtDW . bpbbz5llcl . pRdFifoAddr == 1024.0 )
{ rtDW . bpbbz5llcl . pRdFifoAddr = 1.0 ; } else { rtDW . bpbbz5llcl .
pRdFifoAddr ++ ; } } } if ( ( obj_pCurSOF <= rtDW . bpbbz5llcl . pSimTime )
&& ( rtDW . bpbbz5llcl . pSimTime <= muDoubleScalarCeil ( ( obj_pCurSOF +
4096.0 ) - 1.0 ) ) ) { obj_pRdOutBuffer_roll = rtDW . bpbbz5llcl .
pRdOutBuffer_roll ; data_re = rtDW . bpbbz5llcl . pOutBuffer_cmplx [ (
int32_T ) rtDW . bpbbz5llcl . pRdOutBuffer_index - 1 ] . re ; data_im = rtDW
. bpbbz5llcl . pOutBuffer_cmplx [ ( int32_T ) rtDW . bpbbz5llcl .
pRdOutBuffer_index - 1 ] . im ; if ( rtDW . bpbbz5llcl . pRdOutBuffer_index
== 114688.0 ) { dataInOutMem = 1.0 ; obj_pRdOutBuffer_roll = ! rtDW .
bpbbz5llcl . pRdOutBuffer_roll ; } else { dataInOutMem = rtDW . bpbbz5llcl .
pRdOutBuffer_index + 1.0 ; } rtDW . bpbbz5llcl . pRdOutBuffer_index =
dataInOutMem ; rtDW . bpbbz5llcl . pRdOutBuffer_roll = obj_pRdOutBuffer_roll
; rtDW . bpbbz5llcl . pLastData . re = data_re ; rtDW . bpbbz5llcl .
pLastData . im = data_im ; tmp [ 0 ] = rtDW . bpbbz5llcl . pStartOutputPort [
4095 ] ; memcpy ( & tmp [ 1 ] , & rtDW . bpbbz5llcl . pStartOutputPort [ 0 ]
, 4095U * sizeof ( boolean_T ) ) ; memcpy ( & rtDW . bpbbz5llcl .
pStartOutputPort [ 0 ] , & tmp [ 0 ] , sizeof ( boolean_T ) << 12U ) ; tmp [
0 ] = rtDW . bpbbz5llcl . pEndOutputPort [ 4095 ] ; memcpy ( & tmp [ 1 ] , &
rtDW . bpbbz5llcl . pEndOutputPort [ 0 ] , 4095U * sizeof ( boolean_T ) ) ;
memcpy ( & rtDW . bpbbz5llcl . pEndOutputPort [ 0 ] , & tmp [ 0 ] , sizeof (
boolean_T ) << 12U ) ; } } rtDW . bpbbz5llcl . pCurSOF = obj_pCurSOF ; if (
rtDW . bpbbz5llcl . pResetStart ) { rtDW . bpbbz5llcl . pResetStart = false ;
} if ( rtB . o45kvswdjc ) { rtDW . bpbbz5llcl . pResetStart = true ; } if (
rtDW . bpbbz5llcl . pResetStart ) { ohqoxehyir ( & rtDW . bpbbz5llcl ) ; } if
( ! rtB . o45kvswdjc ) { switch ( ( int32_T ) rtDW . bpbbz5llcl . pState ) {
case 0 : rtDW . bpbbz5llcl . pState = 0.0 ; rtDW . bpbbz5llcl . pRdyReg =
true ; rtDW . bpbbz5llcl . pOutCnt = 0.0 ; rtDW . bpbbz5llcl . pWrEnb = false
; if ( rtB . gesedfh4dk ) { rtDW . bpbbz5llcl . pWrEnb = true ; rtDW .
bpbbz5llcl . pSampleCnt ++ ; rtDW . bpbbz5llcl . pState = 1.0 ; } break ;
case 1 : rtDW . bpbbz5llcl . pState = 1.0 ; if ( rtB . gesedfh4dk ) { if (
rtDW . bpbbz5llcl . pSampleCnt == 4095.0 ) { rtDW . bpbbz5llcl . pRdyReg =
false ; rtDW . bpbbz5llcl . pWrEnb = true ; rtDW . bpbbz5llcl . pSampleCnt =
0.0 ; rtDW . bpbbz5llcl . pState = 2.0 ; } else { rtDW . bpbbz5llcl .
pSampleCnt ++ ; rtDW . bpbbz5llcl . pWrEnb = true ; rtDW . bpbbz5llcl .
pRdyReg = true ; } } break ; case 2 : rtDW . bpbbz5llcl . pState = 3.0 ; rtDW
. bpbbz5llcl . pSampleCnt = 0.0 ; rtDW . bpbbz5llcl . pWrEnb = false ; if (
rtB . gesedfh4dk ) { rtDW . bpbbz5llcl . pWrEnb = true ; rtDW . bpbbz5llcl .
pSampleCnt = 1.0 ; } break ; case 3 : rtDW . bpbbz5llcl . pState = 3.0 ; rtDW
. bpbbz5llcl . pWrEnb = false ; if ( rtDW . bpbbz5llcl . pStartOutputPort [ 1
] ) { rtDW . bpbbz5llcl . pOutCnt ++ ; rtDW . bpbbz5llcl . pState = 4.0 ; }
break ; case 4 : if ( rtDW . bpbbz5llcl . pOutCnt == 2045.0 ) { rtDW .
bpbbz5llcl . pOutCnt = 0.0 ; rtDW . bpbbz5llcl . pRdyReg = true ; rtDW .
bpbbz5llcl . pState = 0.0 ; } else { rtDW . bpbbz5llcl . pOutCnt ++ ; } break
; default : rtDW . bpbbz5llcl . pState = 0.0 ; rtDW . bpbbz5llcl . pRdyReg =
true ; rtDW . bpbbz5llcl . pSampleCnt = 0.0 ; rtDW . bpbbz5llcl . pOutCnt =
0.0 ; rtDW . bpbbz5llcl . pWrEnb = false ; break ; } } else { rtDW .
bpbbz5llcl . pState = 0.0 ; rtDW . bpbbz5llcl . pRdyReg = false ; rtDW .
bpbbz5llcl . pSampleCnt = 0.0 ; rtDW . bpbbz5llcl . pOutCnt = 0.0 ; rtDW .
bpbbz5llcl . pWrEnb = false ; } obj_pRdOutBuffer_roll = oczff0h2ub ( & rtDW .
bpbbz5llcl , rtB . o45kvswdjc ) ; data_im = 0 ; if ( rtB . gesedfh4dk && ( !
obj_pRdOutBuffer_roll ) ) { for ( data_re = 0 ; data_re < 1 ; data_re ++ ) {
data_im ++ ; } } if ( ( rtDW . bpbbz5llcl . pInBufferIndex + ( real_T )
data_im ) - 1.0 >= 4096.0 ) { memset ( & b_index_data [ 0 ] , 0 , sizeof (
int8_T ) << 12U ) ; if ( rtB . gesedfh4dk ) { b_index_data [ 0 ] = 1 ; } if (
( 4096.0 - rtDW . bpbbz5llcl . pInBufferIndex ) + 1.0 > 0.0 ) { data_im = 0 ;
for ( data_re = 0 ; data_re < 4096 ; data_re ++ ) { if ( b_index_data [
data_re ] > 0 ) { data_im ++ ; } } if ( data_im != 0 ) { data_im = 0 ; for (
data_re = 0 ; data_re < 4096 ; data_re ++ ) { if ( b_index_data [ data_re ] >
0 ) { rtB . tmp_data [ data_im ] = ( int16_T ) data_re ; data_im ++ ; } }
obj_pCurSOF = ( real_T ) b_index_data [ rtB . tmp_data [ ( int32_T ) ( (
4096.0 - rtDW . bpbbz5llcl . pInBufferIndex ) + 1.0 ) - 1 ] ] + rtDW .
bpbbz5llcl . pSimTime ; } else { obj_pCurSOF = rtDW . bpbbz5llcl . pSimTime ;
} } else { obj_pCurSOF = rtDW . bpbbz5llcl . pSimTime ; } rtDW . bpbbz5llcl .
pSOFFifo [ ( int32_T ) rtDW . bpbbz5llcl . pWrFifoAddr - 1 ] = ( obj_pCurSOF
+ 26839.0 ) - 4096.0 ; if ( rtDW . bpbbz5llcl . pWrFifoAddr == 1024.0 ) {
rtDW . bpbbz5llcl . pWrFifoAddr = 1.0 ; } else { rtDW . bpbbz5llcl .
pWrFifoAddr ++ ; } } obj_pRdOutBuffer_roll = ! oczff0h2ub ( & rtDW .
bpbbz5llcl , rtB . o45kvswdjc ) ; data_im = 0 ; if ( rtB . gesedfh4dk &&
obj_pRdOutBuffer_roll && rtDW . bpbbz5llcl . pWrEnb ) { for ( data_re = 0 ;
data_re < 1 ; data_re ++ ) { data_im ++ ; } } if ( data_im != 0 ) { if ( rtDW
. bpbbz5llcl . pInBufferIndex > ( rtDW . bpbbz5llcl . pInBufferIndex + 1.0 )
- 1.0 ) { data_im = 0 ; } else { data_im = ( int32_T ) rtDW . bpbbz5llcl .
pInBufferIndex - 1 ; } rtDW . bpbbz5llcl . pInBuffer_re [ data_im ] = rtB .
aouiix4txh ; if ( rtDW . bpbbz5llcl . pInBufferIndex > ( rtDW . bpbbz5llcl .
pInBufferIndex + 1.0 ) - 1.0 ) { data_im = 0 ; data_re = 0 ; } else { data_im
= ( int32_T ) rtDW . bpbbz5llcl . pInBufferIndex - 1 ; data_re = ( int32_T )
( ( rtDW . bpbbz5llcl . pInBufferIndex + 1.0 ) - 1.0 ) ; } data_re -= data_im
; if ( data_re - 1 >= 0 ) { memset ( & rtDW . bpbbz5llcl . pInBuffer_im [
data_im ] , 0 , ( uint32_T ) ( ( data_re + data_im ) - data_im ) * sizeof (
int32_T ) ) ; } rtDW . bpbbz5llcl . pInBufferIndex ++ ; if ( rtDW .
bpbbz5llcl . pInBufferIndex - 1.0 >= 4096.0 ) { lglgu5bh2x ( & rtDW .
bpbbz5llcl , & rtDW . bpbbz5llcl . pInBuffer_re [ 0 ] , & rtDW . bpbbz5llcl .
pInBuffer_im [ 0 ] , rtB . pOutBuffer_re , rtB . pOutBuffer_im ) ; for (
data_re = 0 ; data_re < 4096 ; data_re ++ ) { rtDW . bpbbz5llcl .
pOutBuffer_cmplx [ ( int32_T ) rtDW . bpbbz5llcl . pWrOutBuffer_index - 1 ] .
re = rtB . pOutBuffer_re [ data_re ] ; rtDW . bpbbz5llcl . pOutBuffer_cmplx [
( int32_T ) rtDW . bpbbz5llcl . pWrOutBuffer_index - 1 ] . im = rtB .
pOutBuffer_im [ data_re ] ; if ( rtDW . bpbbz5llcl . pWrOutBuffer_index <
114688.0 ) { rtDW . bpbbz5llcl . pWrOutBuffer_index ++ ; } else { rtDW .
bpbbz5llcl . pWrOutBuffer_index = 1.0 ; rtDW . bpbbz5llcl . pWrOutBuffer_roll
= ! rtDW . bpbbz5llcl . pWrOutBuffer_roll ; } } rtDW . bpbbz5llcl .
pInBufferIndex -= 4096.0 ; for ( data_re = 0 ; data_re < 53248 ; data_re ++ )
{ rtDW . bpbbz5llcl . pInBuffer_re [ data_re ] = rtDW . bpbbz5llcl .
pInBuffer_re [ data_re + 4096 ] ; } memset ( & rtDW . bpbbz5llcl .
pInBuffer_re [ 53248 ] , 0 , sizeof ( int32_T ) << 12U ) ; for ( data_re = 0
; data_re < 53248 ; data_re ++ ) { rtDW . bpbbz5llcl . pInBuffer_im [ data_re
] = rtDW . bpbbz5llcl . pInBuffer_im [ data_re + 4096 ] ; } memset ( & rtDW .
bpbbz5llcl . pInBuffer_im [ 53248 ] , 0 , sizeof ( int32_T ) << 12U ) ; } }
rtDW . bpbbz5llcl . pSimTime ++ ; rtDW . fw4xval30t = rtB . jgpsfkqtlm ; rtDW
. lqlczeokm5 = rtB . f2g2jifa2y ; rtDW . jr11b3ek0i [ rtDW . gkp23xlorn ] =
rtB . n3eede2p1d ; if ( rtDW . gkp23xlorn < 2047 ) { rtDW . gkp23xlorn ++ ; }
else { rtDW . gkp23xlorn = 0U ; } rtDW . cprxs0oxb4 = rtB . baulvd1vdb .
n1wklyyqdj ; rtDW . i4kbnwgsra = rtB . iibtbmy3js ; rtDW . ehzhklig5r = rtB .
e5dpgjg4y5 ; rtDW . g2rlyn1hgy = rtB . ib5sxzeq4h ; el33ttatyo ( rtB .
e0v0leqg2p , rtB . kmipgkcive , rtB . iffclt3o01 , rtB . mbj2mutwd5 , & rtDW
. dcguzoxh2sb ) ; rtDW . ermftxd5xs = rtB . hcderxtk0s ; rtDW . n2whdu3eol =
rtB . mosxs4b4hc ; rtDW . faksgtgdka = rtB . lzl2ffamjt ; rtDW . ipzfjakadv =
rtB . ibkohs1h3z ; rtDW . jvuxplwco4 = rtB . d1f2rjqdua ; rtDW . gcyq4coupa =
rtB . fp4igtyz5u ; rtDW . cmvo3isroh = rtB . hnjhybbatf ; rtDW . akcvng45tl [
rtDW . gkjrmoqlie ] = rtB . n3eede2p1d ; if ( rtDW . gkjrmoqlie < 6143 ) {
rtDW . gkjrmoqlie ++ ; } else { rtDW . gkjrmoqlie = 0U ; } rtDW . b4hfbet4ba
= rtB . leazcb1h2j ; rtDW . n4iun2fjnn [ rtDW . hl3popemla ] = rtB .
lkarecbrf1 ; if ( rtDW . hl3popemla < 2047 ) { rtDW . hl3popemla ++ ; } else
{ rtDW . hl3popemla = 0U ; } rtDW . fr2u3bfpll = rtB . hv3vc22vuw .
n1wklyyqdj ; rtDW . nc0waz21t1 = rtB . h3px1sgc3g ; rtDW . c0pmhbmlvb = rtB .
h3pnk0oaza ; rtDW . dfsdkk5fjk = rtB . ogv1sxnzas ; rtDW . b4ujwta3wy = rtB .
jhop355m1z ; rtDW . cqvzla0ulg = rtB . kux04xr1ty ; rtDW . jcvtghq3ig = rtB .
eshaopbfyp ; rtDW . fx4qkmoomx = rtB . dot2jgysgh ; rtDW . bv1ncvrs1o [ rtDW
. dgymt0yytj ] = rtB . lkarecbrf1 ; if ( rtDW . dgymt0yytj < 6143 ) { rtDW .
dgymt0yytj ++ ; } else { rtDW . dgymt0yytj = 0U ; } obj = & rtDW . g5332d55t5
; obj_pRdOutBuffer_roll = ( rtDW . g5332d55t5 . isInitialized == 1 ) ; if ( !
obj_pRdOutBuffer_roll ) { ipbyhx4yqv4d ( & rtDW . g5332d55t5 , rtB .
miciunji1q ) ; } rtDW . g5332d55t5 . pPipeline [ 3 ] = rtDW . g5332d55t5 .
pPipeline [ 2 ] ; rtDW . g5332d55t5 . pValidPipeline [ 3 ] = rtDW .
g5332d55t5 . pValidPipeline [ 2 ] ; rtDW . g5332d55t5 . pPipeline [ 2 ] =
rtDW . g5332d55t5 . pPipeline [ 1 ] ; rtDW . g5332d55t5 . pValidPipeline [ 2
] = rtDW . g5332d55t5 . pValidPipeline [ 1 ] ; rtDW . g5332d55t5 . pPipeline
[ 1 ] = rtDW . g5332d55t5 . pPipeline [ 0 ] ; rtDW . g5332d55t5 .
pValidPipeline [ 1 ] = rtDW . g5332d55t5 . pValidPipeline [ 0 ] ; obj ->
pPipeline [ 0 ] = kswswbzqb5hz ( & rtDW . g5332d55t5 . pSystemImpl , rtB .
miciunji1q ) ; rtDW . g5332d55t5 . pValidPipeline [ 0 ] = rtP .
Constant_Value_gsvbkw5nar ; rtDW . dzft24s4wf = rtB . arfpn4hmtf ; obj_p = &
rtDW . hez3ezrpq2 ; obj_pRdOutBuffer_roll = ( rtDW . hez3ezrpq2 .
isInitialized == 1 ) ; if ( ! obj_pRdOutBuffer_roll ) { ipbyhx4yqv4dv ( &
rtDW . hez3ezrpq2 , rtB . kekccrspru ) ; } rtDW . hez3ezrpq2 . pPipeline [ 3
] = rtDW . hez3ezrpq2 . pPipeline [ 2 ] ; rtDW . hez3ezrpq2 . pValidPipeline
[ 3 ] = rtDW . hez3ezrpq2 . pValidPipeline [ 2 ] ; rtDW . hez3ezrpq2 .
pPipeline [ 2 ] = rtDW . hez3ezrpq2 . pPipeline [ 1 ] ; rtDW . hez3ezrpq2 .
pValidPipeline [ 2 ] = rtDW . hez3ezrpq2 . pValidPipeline [ 1 ] ; rtDW .
hez3ezrpq2 . pPipeline [ 1 ] = rtDW . hez3ezrpq2 . pPipeline [ 0 ] ; rtDW .
hez3ezrpq2 . pValidPipeline [ 1 ] = rtDW . hez3ezrpq2 . pValidPipeline [ 0 ]
; obj_p -> pPipeline [ 0 ] = kswswbzqb5hzc ( & rtDW . hez3ezrpq2 .
pSystemImpl , rtB . kekccrspru ) ; rtDW . hez3ezrpq2 . pValidPipeline [ 0 ] =
rtP . Constant_Value_lnkchkaqmw ; rtDW . jcwpmucczd = rtB . i0klwum5up ;
obj_p = & rtDW . gxmahoppaw ; obj_pRdOutBuffer_roll = ( rtDW . gxmahoppaw .
isInitialized == 1 ) ; if ( ! obj_pRdOutBuffer_roll ) { ipbyhx4yqv4dvp ( &
rtDW . gxmahoppaw , rtB . kmk1xozmep ) ; } rtDW . gxmahoppaw . pPipeline [ 3
] = rtDW . gxmahoppaw . pPipeline [ 2 ] ; rtDW . gxmahoppaw . pValidPipeline
[ 3 ] = rtDW . gxmahoppaw . pValidPipeline [ 2 ] ; rtDW . gxmahoppaw .
pPipeline [ 2 ] = rtDW . gxmahoppaw . pPipeline [ 1 ] ; rtDW . gxmahoppaw .
pValidPipeline [ 2 ] = rtDW . gxmahoppaw . pValidPipeline [ 1 ] ; rtDW .
gxmahoppaw . pPipeline [ 1 ] = rtDW . gxmahoppaw . pPipeline [ 0 ] ; rtDW .
gxmahoppaw . pValidPipeline [ 1 ] = rtDW . gxmahoppaw . pValidPipeline [ 0 ]
; obj_p -> pPipeline [ 0 ] = kswswbzqb5hzcf ( & rtDW . gxmahoppaw .
pSystemImpl , rtB . kmk1xozmep ) ; rtDW . gxmahoppaw . pValidPipeline [ 0 ] =
rtP . Constant_Value_drm5f1rfh3 ; rtDW . i3cg55zsq5 = rtB . hfjmgpp40c ;
obj_e = & rtDW . msaff0w3sl ; obj_pRdOutBuffer_roll = ( rtDW . msaff0w3sl .
isInitialized == 1 ) ; if ( ! obj_pRdOutBuffer_roll ) { ipbyhx4yqv4dvpc ( &
rtDW . msaff0w3sl , rtB . dqvaaxkm0c ) ; } rtDW . msaff0w3sl . pPipeline [ 3
] = rtDW . msaff0w3sl . pPipeline [ 2 ] ; rtDW . msaff0w3sl . pValidPipeline
[ 3 ] = rtDW . msaff0w3sl . pValidPipeline [ 2 ] ; rtDW . msaff0w3sl .
pPipeline [ 2 ] = rtDW . msaff0w3sl . pPipeline [ 1 ] ; rtDW . msaff0w3sl .
pValidPipeline [ 2 ] = rtDW . msaff0w3sl . pValidPipeline [ 1 ] ; rtDW .
msaff0w3sl . pPipeline [ 1 ] = rtDW . msaff0w3sl . pPipeline [ 0 ] ; rtDW .
msaff0w3sl . pValidPipeline [ 1 ] = rtDW . msaff0w3sl . pValidPipeline [ 0 ]
; obj_e -> pPipeline [ 0 ] = kswswbzqb5hzcfs ( & rtDW . msaff0w3sl .
pSystemImpl , rtB . dqvaaxkm0c ) ; rtDW . msaff0w3sl . pValidPipeline [ 0 ] =
rtP . Constant_Value_dluxsxpxfo ; rtDW . duv4e2eeyz = rtB . lxw5zwa1vx ;
obj_i = & rtDW . e1hogwivrq ; obj_pRdOutBuffer_roll = ( rtDW . e1hogwivrq .
isInitialized == 1 ) ; if ( ! obj_pRdOutBuffer_roll ) { ipbyhx4yqv ( & rtDW .
e1hogwivrq , rtB . inppcqltf1 ) ; } rtDW . e1hogwivrq . pPipeline [ 3 ] =
rtDW . e1hogwivrq . pPipeline [ 2 ] ; rtDW . e1hogwivrq . pValidPipeline [ 3
] = rtDW . e1hogwivrq . pValidPipeline [ 2 ] ; rtDW . e1hogwivrq . pPipeline
[ 2 ] = rtDW . e1hogwivrq . pPipeline [ 1 ] ; rtDW . e1hogwivrq .
pValidPipeline [ 2 ] = rtDW . e1hogwivrq . pValidPipeline [ 1 ] ; rtDW .
e1hogwivrq . pPipeline [ 1 ] = rtDW . e1hogwivrq . pPipeline [ 0 ] ; rtDW .
e1hogwivrq . pValidPipeline [ 1 ] = rtDW . e1hogwivrq . pValidPipeline [ 0 ]
; obj_i -> pPipeline [ 0 ] = kswswbzqb5 ( & rtDW . e1hogwivrq . pSystemImpl ,
rtB . inppcqltf1 ) ; rtDW . e1hogwivrq . pValidPipeline [ 0 ] = rtP .
Constant_Value_kxpe3qtzdk ; rtDW . cqzpsciwb0 = rtB . mf2j2fg50z ; obj_p = &
rtDW . ea4uoiztke ; obj_pRdOutBuffer_roll = ( rtDW . ea4uoiztke .
isInitialized == 1 ) ; if ( ! obj_pRdOutBuffer_roll ) { ipbyhx4yqv4 ( & rtDW
. ea4uoiztke , rtB . hejdym2tei ) ; } rtDW . ea4uoiztke . pPipeline [ 3 ] =
rtDW . ea4uoiztke . pPipeline [ 2 ] ; rtDW . ea4uoiztke . pValidPipeline [ 3
] = rtDW . ea4uoiztke . pValidPipeline [ 2 ] ; rtDW . ea4uoiztke . pPipeline
[ 2 ] = rtDW . ea4uoiztke . pPipeline [ 1 ] ; rtDW . ea4uoiztke .
pValidPipeline [ 2 ] = rtDW . ea4uoiztke . pValidPipeline [ 1 ] ; rtDW .
ea4uoiztke . pPipeline [ 1 ] = rtDW . ea4uoiztke . pPipeline [ 0 ] ; rtDW .
ea4uoiztke . pValidPipeline [ 1 ] = rtDW . ea4uoiztke . pValidPipeline [ 0 ]
; obj_p -> pPipeline [ 0 ] = kswswbzqb5h ( & rtDW . ea4uoiztke . pSystemImpl
, rtB . hejdym2tei ) ; rtDW . ea4uoiztke . pValidPipeline [ 0 ] = rtP .
Constant_Value_obmncw1c02 ; rtDW . bgf0isn4m2 = rtB . cbqgqx5a3h ; rtDW .
ceatu2c3ih = rtB . fffnnm2yt3 [ 1 ] ; rtDW . mzlkr3j3p5 = rtB . fffnnm2yt3 [
2 ] ; rtDW . hr0f0pllzb = rtB . fffnnm2yt3 [ 3 ] ; rtDW . lj4qjxl3d5 = rtB .
fffnnm2yt3 [ 4 ] ; rtDW . fwq22fuszr = rtB . fffnnm2yt3 [ 5 ] ; rtDW .
lw2of50kxw = rtB . fffnnm2yt3 [ 6 ] ; rtDW . iooznguwv5 = rtB . acbvfcyinv ;
rtDW . bkmzxq31d1 = rtB . oehsivypfq ; rtDW . lrozmwruae = rtB . ntk5vfoxky ;
rtDW . a33feioxw2 = rtB . kfk1dxkhxh ; rtDW . afrmbd0iw3 = rtB . acrqvfod5l ;
rtDW . anfgrndojq = rtB . pyqup3sj0a ; rtDW . hwkvzcsfaz = rtB . bpuwnuufue ;
rtDW . cuscr1mv1o = rtB . khvg4xvbfo ; rtDW . hi5sxdgutv = rtB . f1fi3ojf3v ;
rtDW . g3mwssejug = rtB . f5v0boraqs ; rtDW . ohb2remyso = rtB . hycxwpt0q0 ;
rtDW . nnehvfm43x = rtB . ofw2w0azgr ; rtDW . lqy3n4vuo3 = rtB . mvrcyqswef ;
rtDW . noj5hcq43l = rtB . ddim5njhme ; rtDW . h4kqpzy0bk = rtB . li5fcrsk0x ;
rtDW . ehukj5uhzp = rtB . i0w3o1erar ; rtDW . lma0feztag = rtB . kgt3je5hub ;
rtDW . balpcok03t = rtB . pjcakqxz0a ; rtDW . kbtqs1lj34 = rtB . lzxmplrrdc ;
rtDW . pdm2ofpuvs = rtB . g1jgfrb1co ; rtDW . jgcfuyvz2d = rtB . cnewcvdg4b ;
rtDW . p1ngo54os1 = rtB . i05rgvkt1z ; rtDW . pru2133ish = rtB . i1k2k4hd5w ;
rtDW . kspt2mhisp = rtB . cx3eeakhlh ; rtDW . kq5e4yhmjq = rtB . efaxnj5cve ;
rtDW . gr0nnucbwg = rtB . ld5l1gbrbp ; rtDW . e4ewwdakkt = rtB . dd0occlrt4 ;
rtDW . pgl0dx24fb = rtB . erecgrjhnx ; rtDW . kqgzq353ol = rtB . gqvoz5mx4y ;
rtDW . fgrwjt4a2w = rtB . cfqni2wdkk ; rtDW . e4hda03zrh = rtB . da2jvbm0wn ;
rtDW . axrvuq4x5i = rtB . d2r1vmsy5h ; rtDW . f3nepfq241 = rtB . a2muyqitx4 ;
rtDW . ivftjkcvdy = rtB . gsni415fpp ; rtDW . kt2dvgietw = rtB . f4eksl32do ;
rtDW . f125nvybng = rtB . f0efgfgm5a ; rtDW . pp1spekrho = rtB . aoynz1bdpy ;
rtDW . lhex3u5h1f = rtB . poagurat1d ; rtDW . fefcdgfhj1 = rtB . izefog1fz2 ;
rtDW . gqs1ppah0r = rtB . dz225sfg5h ; rtDW . c2jypg20hx = rtB . ifilsh2dij ;
rtDW . esgl5mkr2h = rtB . gj0ilfdg5r ; rtDW . oe1scdkmlv = rtB . hiwdb1uq3q ;
rtDW . fp3bheq2px = rtB . iurm3g4vhb ; rtDW . nkzaiaa2wi = rtB . au2ielxut1 ;
rtDW . a1gsgrx3gu = rtB . kh2ij2wlwj ; rtDW . oapwp3ivnb [ rtDW . mukf1zkhlx
] = rtB . jcw1xc2cvp ; if ( rtDW . mukf1zkhlx < 4031 ) { rtDW . mukf1zkhlx ++
; } else { rtDW . mukf1zkhlx = 0U ; } for ( data_re = 0 ; data_re < 62 ;
data_re ++ ) { rtDW . mfhlrzl41r [ ( uint32_T ) data_re ] = rtDW . mfhlrzl41r
[ ( uint32_T ) data_re + 1U ] ; } rtDW . mfhlrzl41r [ 62 ] = rtB . h25zdcfr3m
; rtDW . bognbsvydi = rtB . okkaymlkwy ; UNUSED_PARAMETER ( tid ) ; } void
MdlUpdateTID1 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlTerminate
( void ) { rt_FREE ( rtDW . hf3r3q1vp5 . RSimInfoPtr ) ; rt_FREE ( rtDW .
mlstiem1xs . RSimInfoPtr ) ; if ( ! rtDW . g5332d55t5 .
matlabCodegenIsDeleted ) { rtDW . g5332d55t5 . matlabCodegenIsDeleted = true
; if ( ( rtDW . g5332d55t5 . isInitialized == 1 ) && rtDW . g5332d55t5 .
isSetupComplete && ( rtDW . g5332d55t5 . pSystemImpl . isInitialized == 1 ) )
{ rtDW . g5332d55t5 . pSystemImpl . isInitialized = 2 ; } } if ( ! rtDW .
hez3ezrpq2 . matlabCodegenIsDeleted ) { rtDW . hez3ezrpq2 .
matlabCodegenIsDeleted = true ; if ( ( rtDW . hez3ezrpq2 . isInitialized == 1
) && rtDW . hez3ezrpq2 . isSetupComplete && ( rtDW . hez3ezrpq2 . pSystemImpl
. isInitialized == 1 ) ) { rtDW . hez3ezrpq2 . pSystemImpl . isInitialized =
2 ; } } if ( ! rtDW . gxmahoppaw . matlabCodegenIsDeleted ) { rtDW .
gxmahoppaw . matlabCodegenIsDeleted = true ; if ( ( rtDW . gxmahoppaw .
isInitialized == 1 ) && rtDW . gxmahoppaw . isSetupComplete && ( rtDW .
gxmahoppaw . pSystemImpl . isInitialized == 1 ) ) { rtDW . gxmahoppaw .
pSystemImpl . isInitialized = 2 ; } } if ( ! rtDW . msaff0w3sl .
matlabCodegenIsDeleted ) { rtDW . msaff0w3sl . matlabCodegenIsDeleted = true
; if ( ( rtDW . msaff0w3sl . isInitialized == 1 ) && rtDW . msaff0w3sl .
isSetupComplete && ( rtDW . msaff0w3sl . pSystemImpl . isInitialized == 1 ) )
{ rtDW . msaff0w3sl . pSystemImpl . isInitialized = 2 ; } } if ( ! rtDW .
e1hogwivrq . matlabCodegenIsDeleted ) { rtDW . e1hogwivrq .
matlabCodegenIsDeleted = true ; if ( ( rtDW . e1hogwivrq . isInitialized == 1
) && rtDW . e1hogwivrq . isSetupComplete && ( rtDW . e1hogwivrq . pSystemImpl
. isInitialized == 1 ) ) { rtDW . e1hogwivrq . pSystemImpl . isInitialized =
2 ; } } if ( ! rtDW . ea4uoiztke . matlabCodegenIsDeleted ) { rtDW .
ea4uoiztke . matlabCodegenIsDeleted = true ; if ( ( rtDW . ea4uoiztke .
isInitialized == 1 ) && rtDW . ea4uoiztke . isSetupComplete && ( rtDW .
ea4uoiztke . pSystemImpl . isInitialized == 1 ) ) { rtDW . ea4uoiztke .
pSystemImpl . isInitialized = 2 ; } } { if ( rtDW . pptdm11ter . AQHandles )
{ sdiTerminateStreaming ( & rtDW . pptdm11ter . AQHandles ) ; } } { if ( rtDW
. ntilp42igk . AQHandles ) { sdiTerminateStreaming ( & rtDW . ntilp42igk .
AQHandles ) ; } } { if ( rtDW . eeuqv20gpy . AQHandles ) {
sdiTerminateStreaming ( & rtDW . eeuqv20gpy . AQHandles ) ; } } { if ( rtDW .
a4wfo40qlu . AQHandles ) { sdiTerminateStreaming ( & rtDW . a4wfo40qlu .
AQHandles ) ; } } { if ( rtDW . j20steagju . AQHandles ) {
sdiTerminateStreaming ( & rtDW . j20steagju . AQHandles ) ; } } { if ( rtDW .
ehosh5nmvd . AQHandles ) { sdiTerminateStreaming ( & rtDW . ehosh5nmvd .
AQHandles ) ; } } } static void mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( mxArray * destArray , mwIndex i , int j , const void * srcData , size_t
numBytes ) ; static void mr_DUALportRAMinterface_v3_cacheDataAsMxArray (
mxArray * destArray , mwIndex i , int j , const void * srcData , size_t
numBytes ) { mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1
, numBytes , mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData (
newArray ) , ( const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber (
destArray , i , j , newArray ) ; } static void
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_DUALportRAMinterface_v3_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_DUALportRAMinterface_v3_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_DUALportRAMinterface_v3_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_DUALportRAMinterface_v3_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_DUALportRAMinterface_v3_cacheDataToMxArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes
) ; static void mr_DUALportRAMinterface_v3_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_DUALportRAMinterface_v3_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_DUALportRAMinterface_v3_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_DUALportRAMinterface_v3_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_DUALportRAMinterface_v3_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_DUALportRAMinterface_v3_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_DUALportRAMinterface_v3_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_DUALportRAMinterface_v3_GetDWork ( )
{ static const char_T * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" ,
"NULL_PrevZCX" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( ssDW , 0 ,
0 , ( const void * ) & ( rtB ) , sizeof ( rtB ) ) ; { static const char_T *
rtdwDataFieldNames [ 627 ] = { "rtDW.bpbbz5llcl" , "rtDW.iry4sotwjo" ,
"rtDW.e1hogwivrq" , "rtDW.gxmahoppaw" , "rtDW.hez3ezrpq2" , "rtDW.ea4uoiztke"
, "rtDW.g5332d55t5" , "rtDW.msaff0w3sl" , "rtDW.mmbeeyt2c3" ,
"rtDW.ghw5kalbtu" , "rtDW.pb1zjp11ah" , "rtDW.cjaep5120g" , "rtDW.ermftxd5xs"
, "rtDW.kk3vqau5j4" , "rtDW.cczfdi3ydg" , "rtDW.j3spvmunzs" ,
"rtDW.huil4csvle" , "rtDW.o2s0qk524e" , "rtDW.bujt1u5ssb" , "rtDW.ch3ulmwkxf"
, "rtDW.npnmarbxwp" , "rtDW.luidyjwywm" , "rtDW.nct4dwsy42" ,
"rtDW.m21yi3xe0r" , "rtDW.efb0llahxe" , "rtDW.cwc30hkp0p" , "rtDW.kgybnswm2h"
, "rtDW.nzmtxoifv5" , "rtDW.mcbewak1r4" , "rtDW.hzvbnr4bgd" ,
"rtDW.e0hsphy30b" , "rtDW.pjspex5iux" , "rtDW.ceruf15djt" , "rtDW.nwj4wrfqti"
, "rtDW.etvgfdreuz" , "rtDW.faabslxst2" , "rtDW.gumtab5fnv" ,
"rtDW.d3nvmjf1vd" , "rtDW.oruuzh4bzs" , "rtDW.ew53tl52et" , "rtDW.afmamtdg1h"
, "rtDW.kmhibglhil" , "rtDW.c0mvgpjrpg" , "rtDW.oc3xb3ueqi" ,
"rtDW.ggpm4i3hqv" , "rtDW.pgw0quxym3" , "rtDW.b3tarjjh2r" , "rtDW.bjsvnxykzn"
, "rtDW.fn03ogv30b" , "rtDW.o0tgjzszlx" , "rtDW.jk0pdacxs0" ,
"rtDW.hkv3n4pgdt" , "rtDW.msyvbfgmjp" , "rtDW.i3gumoeyz1" , "rtDW.gxbtoq4uog"
, "rtDW.aqfzu2hilm" , "rtDW.ceatu2c3ih" , "rtDW.mzlkr3j3p5" ,
"rtDW.hr0f0pllzb" , "rtDW.lj4qjxl3d5" , "rtDW.fwq22fuszr" , "rtDW.lw2of50kxw"
, "rtDW.lrozmwruae" , "rtDW.a33feioxw2" , "rtDW.afrmbd0iw3" ,
"rtDW.anfgrndojq" , "rtDW.hwkvzcsfaz" , "rtDW.cuscr1mv1o" , "rtDW.hi5sxdgutv"
, "rtDW.g3mwssejug" , "rtDW.ohb2remyso" , "rtDW.nnehvfm43x" ,
"rtDW.lqy3n4vuo3" , "rtDW.noj5hcq43l" , "rtDW.h4kqpzy0bk" , "rtDW.ehukj5uhzp"
, "rtDW.lma0feztag" , "rtDW.balpcok03t" , "rtDW.kbtqs1lj34" ,
"rtDW.pdm2ofpuvs" , "rtDW.jgcfuyvz2d" , "rtDW.p1ngo54os1" , "rtDW.pru2133ish"
, "rtDW.kspt2mhisp" , "rtDW.kq5e4yhmjq" , "rtDW.gr0nnucbwg" ,
"rtDW.p12ie1kq2d" , "rtDW.ksdezs50qp" , "rtDW.fbgth0ylvb" , "rtDW.oacqmm32n4"
, "rtDW.dmci5bmb3h" , "rtDW.fbt5g1jmhm" , "rtDW.g4hhato521" ,
"rtDW.iuph25q4on" , "rtDW.adpqvxr4pq" , "rtDW.gysjg2ez2v" , "rtDW.j4xszwnett"
, "rtDW.hsn4witota" , "rtDW.aedtwpb020" , "rtDW.gjyzf1p00w" ,
"rtDW.oeoilbr25n" , "rtDW.kod452jlzj" , "rtDW.fchfg0xqd2" , "rtDW.m1vo1ryh5y"
, "rtDW.neeztgz5mr" , "rtDW.ljys42kk0x" , "rtDW.ht4iqhimgp" ,
"rtDW.ltvrxrfwqx" , "rtDW.jwy1yupkgd" , "rtDW.p30s42eq1u" , "rtDW.d3t2v2pyhe"
, "rtDW.caj1z5lk13" , "rtDW.d5oxqf3ihc" , "rtDW.a1uugg3z5q" ,
"rtDW.bql2kbo1mn" , "rtDW.ddstw2zt2h" , "rtDW.ket4u3rbik" , "rtDW.kxxqdtc3fn"
, "rtDW.j2lpy04aok" , "rtDW.bti3xpysb3" , "rtDW.jlfxz1mcjj" ,
"rtDW.bfiehwtxx0" , "rtDW.hedkojaly3" , "rtDW.cc1pquwq52" , "rtDW.oksgsz1h3g"
, "rtDW.ftnfscrqnz" , "rtDW.aiobhqac0s" , "rtDW.izhxg5z13h" ,
"rtDW.ixn1qplhkp" , "rtDW.lqzocersmx" , "rtDW.nl3wf33p4z" , "rtDW.iqssg2wtlr"
, "rtDW.losfu35ozo" , "rtDW.gv1yczvurw" , "rtDW.pxkqzhdtui" ,
"rtDW.kd2cj1lw5i" , "rtDW.jw30qsqu5r" , "rtDW.mnmtds151j" , "rtDW.gajg5igtez"
, "rtDW.kigfha511a" , "rtDW.e4acoao20b" , "rtDW.nnbiwtqwas" ,
"rtDW.m3zpcv3djg" , "rtDW.mfqd1lsjjw" , "rtDW.evli1vcywa" , "rtDW.a3mcja4urs"
, "rtDW.ni0bl2pri0" , "rtDW.hepne3hpaw" , "rtDW.eecce0ocvb" ,
"rtDW.nqe3ukp1lv" , "rtDW.bpt15stayd" , "rtDW.fopsvccudd" , "rtDW.fnmb2ixb3q"
, "rtDW.jhliq0ridw" , "rtDW.injgvgohva" , "rtDW.ncoe4ckqww" ,
"rtDW.a2uqh3n150" , "rtDW.l1cjdkruqq" , "rtDW.dppgdzgj0x" , "rtDW.fotv1vmuhj"
, "rtDW.i5gi0zotho" , "rtDW.pqxstp3wgr" , "rtDW.ablkijkmz5" ,
"rtDW.kwwlxjzdoe" , "rtDW.dv5jqwdcth" , "rtDW.ptf1jyuocm" , "rtDW.cm2wzi1df3"
, "rtDW.fw4xval30t" , "rtDW.lqlczeokm5" , "rtDW.faksgtgdka" ,
"rtDW.ipzfjakadv" , "rtDW.jvuxplwco4" , "rtDW.gcyq4coupa" , "rtDW.b4hfbet4ba"
, "rtDW.dfsdkk5fjk" , "rtDW.b4ujwta3wy" , "rtDW.cqvzla0ulg" ,
"rtDW.jcvtghq3ig" , "rtDW.jl34i02arl" , "rtDW.dmbtvfs22x" , "rtDW.n2whdu3eol"
, "rtDW.a1421jzrsu" , "rtDW.gkjrmoqlie" , "rtDW.dgymt0yytj" ,
"rtDW.gkp23xlorn" , "rtDW.hl3popemla" , "rtDW.mukf1zkhlx" , "rtDW.ehzhklig5r"
, "rtDW.g2rlyn1hgy" , "rtDW.cmvo3isroh" , "rtDW.nc0waz21t1" ,
"rtDW.c0pmhbmlvb" , "rtDW.fx4qkmoomx" , "rtDW.kbijeiibcz" , "rtDW.gxoqfko3zl"
, "rtDW.lsrg3b3izb" , "rtDW.e4apruk0cn" , "rtDW.kdeplemgid" ,
"rtDW.oq1rde331u" , "rtDW.dri1oggmq0" , "rtDW.nv4uj53r02" , "rtDW.bxqyzy02ny"
, "rtDW.agzzpunc3i" , "rtDW.noznim2iqz" , "rtDW.do1g134e35" ,
"rtDW.jr11b3ek0i" , "rtDW.cprxs0oxb4" , "rtDW.i4kbnwgsra" , "rtDW.akcvng45tl"
, "rtDW.n4iun2fjnn" , "rtDW.fr2u3bfpll" , "rtDW.bv1ncvrs1o" ,
"rtDW.dzft24s4wf" , "rtDW.jcwpmucczd" , "rtDW.i3cg55zsq5" , "rtDW.duv4e2eeyz"
, "rtDW.cqzpsciwb0" , "rtDW.bgf0isn4m2" , "rtDW.iooznguwv5" ,
"rtDW.bkmzxq31d1" , "rtDW.kqgzq353ol" , "rtDW.fgrwjt4a2w" , "rtDW.e4hda03zrh"
, "rtDW.axrvuq4x5i" , "rtDW.f3nepfq241" , "rtDW.ivftjkcvdy" ,
"rtDW.kt2dvgietw" , "rtDW.f125nvybng" , "rtDW.pp1spekrho" , "rtDW.lhex3u5h1f"
, "rtDW.fefcdgfhj1" , "rtDW.gqs1ppah0r" , "rtDW.c2jypg20hx" ,
"rtDW.esgl5mkr2h" , "rtDW.oe1scdkmlv" , "rtDW.fp3bheq2px" , "rtDW.nkzaiaa2wi"
, "rtDW.a1gsgrx3gu" , "rtDW.oapwp3ivnb" , "rtDW.mfhlrzl41r" ,
"rtDW.bognbsvydi" , "rtDW.nys12ztjas" , "rtDW.cozp4vn1gx" , "rtDW.a2kthhvkup"
, "rtDW.e4ewwdakkt" , "rtDW.pgl0dx24fb" , "rtDW.iwbojjhhe5" ,
"rtDW.mxw4mzr0uk" , "rtDW.ljw5ghzdsf" , "rtDW.dgivirmjgy" , "rtDW.ehjpkuq40k"
, "rtDW.bd1ltj1wwf" , "rtDW.ofks3kmj3q" , "rtDW.jg1x0sgptb" ,
"rtDW.lyf5ek2b3d" , "rtDW.hgyegul2br" , "rtDW.hmpn3ysews" , "rtDW.g5esa0nd4h"
, "rtDW.a514ztuygm" , "rtDW.bsiifkcwph" , "rtDW.j2ygtkmtdt" ,
"rtDW.g32xdqkvam" , "rtDW.m5qcrrh0rz" , "rtDW.dqeonebn4v" , "rtDW.f22lusxsbw"
, "rtDW.liujvkzp0o" , "rtDW.fpmxpxerkf" , "rtDW.bobm2fibnc" ,
"rtDW.obpqvavpfa" , "rtDW.frqny0vebk" , "rtDW.jv0nsgafal" , "rtDW.gd1fmtj3nb"
, "rtDW.arpmjow3zy" , "rtDW.al1pl4kowr" , "rtDW.jhxq5x40uq" ,
"rtDW.obmn5cmv54" , "rtDW.jknbrx32pj" , "rtDW.pmqufde2h1" , "rtDW.inefucjrpd"
, "rtDW.cslkm1fbej" , "rtDW.gdgxtxgf1g" , "rtDW.ky01ccojr5" ,
"rtDW.i5j0r2inrh" , "rtDW.gsqnwqajdt" , "rtDW.nip0s141uc" , "rtDW.j2xbhujzmo"
, "rtDW.dv1fj1e3po" , "rtDW.d5o0clolff" , "rtDW.h3bh4kq3i4" ,
"rtDW.ndj0iieydo" , "rtDW.db0mrltr1f" , "rtDW.ghat2mvfdb" , "rtDW.dbyjv3m3km"
, "rtDW.nq533x3m4z" , "rtDW.lq3hiypoc1" , "rtDW.d5x0pmmjhx" ,
"rtDW.axi1h1fttd" , "rtDW.n3znxzlzoy" , "rtDW.dtq0brtwgy" , "rtDW.e2av1fijfk"
, "rtDW.izd0xxaozr" , "rtDW.fan5swni5z" , "rtDW.ebphxvnfm5" ,
"rtDW.pvbkyahyj2" , "rtDW.nw0ce5ez2e" , "rtDW.pyfiwzjg3y" , "rtDW.ettbn5njm2"
, "rtDW.litxgdvmkb" , "rtDW.jw2gcekxcn" , "rtDW.haxmbuhro2" ,
"rtDW.l2wdkwq3l3" , "rtDW.gkvgzinv2s" , "rtDW.hyj4pez02v" , "rtDW.evuw2ur1ju"
, "rtDW.bcvviips3r" , "rtDW.mbyb3mwghk" , "rtDW.fl5kdak43c" ,
"rtDW.izhelokxhz" , "rtDW.p5x4qrbnra" , "rtDW.ode0ma3jvt" , "rtDW.e2i1vst4ks"
, "rtDW.bp0z35htv2" , "rtDW.j43lisdiks" , "rtDW.gijlhzozco" ,
"rtDW.on3sz2avtq" , "rtDW.fda20uvw2n" , "rtDW.b0gd0xwnrv" , "rtDW.mmptt4byoj"
, "rtDW.pjoh3gen5u" , "rtDW.atko2rhysz.ivbbwftzhv" ,
"rtDW.atko2rhysz.i24gbolf04" , "rtDW.ctkwb4rte4.hnsu34ocdv" ,
"rtDW.ctkwb4rte4.aczjakmt3z" , "rtDW.ayc1u05z0b.eakynmnk00" ,
"rtDW.ayc1u05z0b.ap1t1grbei" , "rtDW.jnhmigxpfr.cexaqfpgul" ,
"rtDW.jnhmigxpfr.b2wniulodl" , "rtDW.hqymuumkk2.e2wpdf03fq" ,
"rtDW.hqymuumkk2.ab3ipnlkse" , "rtDW.ph0c5wwhlf.izussz2j2f" ,
"rtDW.ph0c5wwhlf.fleyftrufo" , "rtDW.jkhbxjlbpd.eziun3lwqz" ,
"rtDW.jkhbxjlbpd.hbw4kaxbof" , "rtDW.chadwwtb33.nf2byzbqdw" ,
"rtDW.chadwwtb33.c0hodwtoi4" , "rtDW.k0pzgqkvwb.j30rgfm2jv" ,
"rtDW.k0pzgqkvwb.hgh0tt5vqy" , "rtDW.diaw2yowgl.m5k3zxa1u1" ,
"rtDW.diaw2yowgl.mcqwmlgcq0" , "rtDW.eeeqgos433.emb3do3f0r" ,
"rtDW.eeeqgos433.kltuftdkui" , "rtDW.ekp05fi01e.pk5rrxppux" ,
"rtDW.ekp05fi01e.eqtir0gumq" , "rtDW.gw0bb4lu4k.i5moiltmws" ,
"rtDW.gw0bb4lu4k.jfuok3z43s" , "rtDW.jwlq00h0qp.kac4x3wvla" ,
"rtDW.jwlq00h0qp.cade0e5uxu" , "rtDW.fbu1mofswb.kbd34gxwbo" ,
"rtDW.fbu1mofswb.m5l4tdev1b" , "rtDW.c45nfqxt1bx.ivbbwftzhv" ,
"rtDW.c45nfqxt1bx.i24gbolf04" , "rtDW.dmnv2typrkz.hnsu34ocdv" ,
"rtDW.dmnv2typrkz.aczjakmt3z" , "rtDW.bx4q2vjdxxp.eakynmnk00" ,
"rtDW.bx4q2vjdxxp.ap1t1grbei" , "rtDW.gzu0v1k154f.cexaqfpgul" ,
"rtDW.gzu0v1k154f.b2wniulodl" , "rtDW.m2rovdpxpjx.e2wpdf03fq" ,
"rtDW.m2rovdpxpjx.ab3ipnlkse" , "rtDW.dfgw4kuzso2.izussz2j2f" ,
"rtDW.dfgw4kuzso2.fleyftrufo" , "rtDW.gvbyuajj10j.eziun3lwqz" ,
"rtDW.gvbyuajj10j.hbw4kaxbof" , "rtDW.o3izwcublel.nf2byzbqdw" ,
"rtDW.o3izwcublel.c0hodwtoi4" , "rtDW.pdnjandztac.j30rgfm2jv" ,
"rtDW.pdnjandztac.hgh0tt5vqy" , "rtDW.hexdymfazx2.m5k3zxa1u1" ,
"rtDW.hexdymfazx2.mcqwmlgcq0" , "rtDW.im0j4vockyt.emb3do3f0r" ,
"rtDW.im0j4vockyt.kltuftdkui" , "rtDW.am45qhx1eqm.pk5rrxppux" ,
"rtDW.am45qhx1eqm.eqtir0gumq" , "rtDW.g2rlwqx2xml.i5moiltmws" ,
"rtDW.g2rlwqx2xml.jfuok3z43s" , "rtDW.nv44ttbdg32.kac4x3wvla" ,
"rtDW.nv44ttbdg32.cade0e5uxu" , "rtDW.cqyo42y2ghh.kbd34gxwbo" ,
"rtDW.cqyo42y2ghh.m5l4tdev1b" , "rtDW.hshupcos05.ofrvdmgnuh" ,
"rtDW.hshupcos05.jq1v3dabca" , "rtDW.bzql1z5sfh.dxojn2xddw" ,
"rtDW.bzql1z5sfh.bko3b1m5jh" , "rtDW.nbx3n1zru5.arfpsuibu4" ,
"rtDW.nbx3n1zru5.gzbdyuemgc" , "rtDW.gitl1vogja.d0r4pg3qpe" ,
"rtDW.gitl1vogja.mpmtoteyyz" , "rtDW.ig3hrn2l24.o2cwobb3pj" ,
"rtDW.ig3hrn2l24.om1xuzw1eo" , "rtDW.ju3onx0ww2.ak5b20glzq" ,
"rtDW.ju3onx0ww2.eq21cdu2ve" , "rtDW.prjjcc3mxy.ottkqopm4f" ,
"rtDW.prjjcc3mxy.eohabhj4xn" , "rtDW.mm0axov05p.e4ft35rk43" ,
"rtDW.mm0axov05p.dess21gzas" , "rtDW.cqouob3iam.iua2aul0k5" ,
"rtDW.cqouob3iam.bzq3ui1czr" , "rtDW.djq1we332q.kj0js5y43a" ,
"rtDW.djq1we332q.dj53101tjo" , "rtDW.d50tkbrk2e.abs01yeupq" ,
"rtDW.d50tkbrk2e.llq5zg0hho" , "rtDW.ppnfsuot4z.h4dsuebilz" ,
"rtDW.ppnfsuot4z.kyqlsdxb1f" , "rtDW.h502wprcm0.cdjbjgd1xc" ,
"rtDW.h502wprcm0.l0e4fwians" , "rtDW.ec1kk3wac3.kmvjqif1vx" ,
"rtDW.ec1kk3wac3.leoynkr3q5" , "rtDW.mcrnskrou3.ihbdkradn2" ,
"rtDW.mcrnskrou3.kfwk41aocj" , "rtDW.psluq53bh5.bhhrytpig4" ,
"rtDW.psluq53bh5.e5djmff4ey" , "rtDW.l2dw2tngpy.j2wb0heh5r" ,
"rtDW.l2dw2tngpy.inqavurpq2" , "rtDW.ludvfohavv.ofrvdmgnuh" ,
"rtDW.ludvfohavv.jq1v3dabca" , "rtDW.cnelbzjfhg.dxojn2xddw" ,
"rtDW.cnelbzjfhg.bko3b1m5jh" , "rtDW.mx4jv5qqj4.arfpsuibu4" ,
"rtDW.mx4jv5qqj4.gzbdyuemgc" , "rtDW.ls5eenr2ad.d0r4pg3qpe" ,
"rtDW.ls5eenr2ad.mpmtoteyyz" , "rtDW.bk35bvlqhh.o2cwobb3pj" ,
"rtDW.bk35bvlqhh.om1xuzw1eo" , "rtDW.d3bzw5xtsk.ak5b20glzq" ,
"rtDW.d3bzw5xtsk.eq21cdu2ve" , "rtDW.p5zpxze4b1.ottkqopm4f" ,
"rtDW.p5zpxze4b1.eohabhj4xn" , "rtDW.iaybj1yga2.e4ft35rk43" ,
"rtDW.iaybj1yga2.dess21gzas" , "rtDW.ok1l4kluje.iua2aul0k5" ,
"rtDW.ok1l4kluje.bzq3ui1czr" , "rtDW.jyf4ywwf11.kj0js5y43a" ,
"rtDW.jyf4ywwf11.dj53101tjo" , "rtDW.odwyzbzb3q.abs01yeupq" ,
"rtDW.odwyzbzb3q.llq5zg0hho" , "rtDW.f32lct1du0.h4dsuebilz" ,
"rtDW.f32lct1du0.kyqlsdxb1f" , "rtDW.mw2keyc00d.cdjbjgd1xc" ,
"rtDW.mw2keyc00d.l0e4fwians" , "rtDW.pmc2mjfvx3.kmvjqif1vx" ,
"rtDW.pmc2mjfvx3.leoynkr3q5" , "rtDW.opqx3n1jiv.ihbdkradn2" ,
"rtDW.opqx3n1jiv.kfwk41aocj" , "rtDW.lhl4belrft.bhhrytpig4" ,
"rtDW.lhl4belrft.e5djmff4ey" , "rtDW.aomefh15n5.j2wb0heh5r" ,
"rtDW.aomefh15n5.inqavurpq2" , "rtDW.hhpwfeyxv5.ofrvdmgnuh" ,
"rtDW.hhpwfeyxv5.jq1v3dabca" , "rtDW.mr4jil2nb0.dxojn2xddw" ,
"rtDW.mr4jil2nb0.bko3b1m5jh" , "rtDW.mtb1g0er0c.arfpsuibu4" ,
"rtDW.mtb1g0er0c.gzbdyuemgc" , "rtDW.logcpemxnl.d0r4pg3qpe" ,
"rtDW.logcpemxnl.mpmtoteyyz" , "rtDW.fmiwt01ncc.o2cwobb3pj" ,
"rtDW.fmiwt01ncc.om1xuzw1eo" , "rtDW.a5ydisma0n.ak5b20glzq" ,
"rtDW.a5ydisma0n.eq21cdu2ve" , "rtDW.cp2x5swpim.ottkqopm4f" ,
"rtDW.cp2x5swpim.eohabhj4xn" , "rtDW.pg2gn3izhv.e4ft35rk43" ,
"rtDW.pg2gn3izhv.dess21gzas" , "rtDW.li4w4j22ee.iua2aul0k5" ,
"rtDW.li4w4j22ee.bzq3ui1czr" , "rtDW.c0cv1fecmf.kj0js5y43a" ,
"rtDW.c0cv1fecmf.dj53101tjo" , "rtDW.dwkrhy1adj.abs01yeupq" ,
"rtDW.dwkrhy1adj.llq5zg0hho" , "rtDW.kiv2ffdk2i.h4dsuebilz" ,
"rtDW.kiv2ffdk2i.kyqlsdxb1f" , "rtDW.o44pc0z3gt.cdjbjgd1xc" ,
"rtDW.o44pc0z3gt.l0e4fwians" , "rtDW.olew5caigs.kmvjqif1vx" ,
"rtDW.olew5caigs.leoynkr3q5" , "rtDW.edsrfmi5oc.ihbdkradn2" ,
"rtDW.edsrfmi5oc.kfwk41aocj" , "rtDW.dq1vaupevs.bhhrytpig4" ,
"rtDW.dq1vaupevs.e5djmff4ey" , "rtDW.gt31hnr3lf.j2wb0heh5r" ,
"rtDW.gt31hnr3lf.inqavurpq2" , "rtDW.ob2fx4wpxa.ofrvdmgnuh" ,
"rtDW.ob2fx4wpxa.jq1v3dabca" , "rtDW.o3fupwkw3j.dxojn2xddw" ,
"rtDW.o3fupwkw3j.bko3b1m5jh" , "rtDW.bu3vpkznrt.arfpsuibu4" ,
"rtDW.bu3vpkznrt.gzbdyuemgc" , "rtDW.aj5wkrbghc.d0r4pg3qpe" ,
"rtDW.aj5wkrbghc.mpmtoteyyz" , "rtDW.bc2ak5uvom.o2cwobb3pj" ,
"rtDW.bc2ak5uvom.om1xuzw1eo" , "rtDW.dticnm5yh1.ak5b20glzq" ,
"rtDW.dticnm5yh1.eq21cdu2ve" , "rtDW.gegc3wkr22.ottkqopm4f" ,
"rtDW.gegc3wkr22.eohabhj4xn" , "rtDW.okqcrlylqk.e4ft35rk43" ,
"rtDW.okqcrlylqk.dess21gzas" , "rtDW.dud531lchs.iua2aul0k5" ,
"rtDW.dud531lchs.bzq3ui1czr" , "rtDW.k1pxlisolz.kj0js5y43a" ,
"rtDW.k1pxlisolz.dj53101tjo" , "rtDW.gmghl42rva.abs01yeupq" ,
"rtDW.gmghl42rva.llq5zg0hho" , "rtDW.gkwxar31g1.h4dsuebilz" ,
"rtDW.gkwxar31g1.kyqlsdxb1f" , "rtDW.p2dpdzhqcw.cdjbjgd1xc" ,
"rtDW.p2dpdzhqcw.l0e4fwians" , "rtDW.pyfhcpopnq.kmvjqif1vx" ,
"rtDW.pyfhcpopnq.leoynkr3q5" , "rtDW.lcttqdmfq0.ihbdkradn2" ,
"rtDW.lcttqdmfq0.kfwk41aocj" , "rtDW.dax5mxpt1x.bhhrytpig4" ,
"rtDW.dax5mxpt1x.e5djmff4ey" , "rtDW.bmgxswof1n.j2wb0heh5r" ,
"rtDW.bmgxswof1n.inqavurpq2" , "rtDW.c4ex142obk.ofrvdmgnuh" ,
"rtDW.c4ex142obk.jq1v3dabca" , "rtDW.jqkgyvk5wj.dxojn2xddw" ,
"rtDW.jqkgyvk5wj.bko3b1m5jh" , "rtDW.pr5yb11xg2.arfpsuibu4" ,
"rtDW.pr5yb11xg2.gzbdyuemgc" , "rtDW.e0yth1yr5j.d0r4pg3qpe" ,
"rtDW.e0yth1yr5j.mpmtoteyyz" , "rtDW.depkfxt3dl.o2cwobb3pj" ,
"rtDW.depkfxt3dl.om1xuzw1eo" , "rtDW.nljvbf4yun.ak5b20glzq" ,
"rtDW.nljvbf4yun.eq21cdu2ve" , "rtDW.liocd5kn1l.ottkqopm4f" ,
"rtDW.liocd5kn1l.eohabhj4xn" , "rtDW.crqoduzoa4.e4ft35rk43" ,
"rtDW.crqoduzoa4.dess21gzas" , "rtDW.buqfyhw4zg.iua2aul0k5" ,
"rtDW.buqfyhw4zg.bzq3ui1czr" , "rtDW.fpel54lr1q.kj0js5y43a" ,
"rtDW.fpel54lr1q.dj53101tjo" , "rtDW.d3o4x0ovlb.abs01yeupq" ,
"rtDW.d3o4x0ovlb.llq5zg0hho" , "rtDW.dhqnhtbmwa.h4dsuebilz" ,
"rtDW.dhqnhtbmwa.kyqlsdxb1f" , "rtDW.a1r25vmwrh.cdjbjgd1xc" ,
"rtDW.a1r25vmwrh.l0e4fwians" , "rtDW.cit10epw2d.kmvjqif1vx" ,
"rtDW.cit10epw2d.leoynkr3q5" , "rtDW.pnkexv004t.ihbdkradn2" ,
"rtDW.pnkexv004t.kfwk41aocj" , "rtDW.kkcnk3nues.bhhrytpig4" ,
"rtDW.kkcnk3nues.e5djmff4ey" , "rtDW.il5ne4vyn3.j2wb0heh5r" ,
"rtDW.il5ne4vyn3.inqavurpq2" , "rtDW.fxuvuc5ilx3.ofrvdmgnuh" ,
"rtDW.fxuvuc5ilx3.jq1v3dabca" , "rtDW.onrxopzil04.dxojn2xddw" ,
"rtDW.onrxopzil04.bko3b1m5jh" , "rtDW.dlafdnj3fgi.arfpsuibu4" ,
"rtDW.dlafdnj3fgi.gzbdyuemgc" , "rtDW.m1qiz2ekayi.d0r4pg3qpe" ,
"rtDW.m1qiz2ekayi.mpmtoteyyz" , "rtDW.j11vdnbc5b2.o2cwobb3pj" ,
"rtDW.j11vdnbc5b2.om1xuzw1eo" , "rtDW.f2rydg4dp1k.ak5b20glzq" ,
"rtDW.f2rydg4dp1k.eq21cdu2ve" , "rtDW.bstd1u2cpob.ottkqopm4f" ,
"rtDW.bstd1u2cpob.eohabhj4xn" , "rtDW.aazmv33tcmo.e4ft35rk43" ,
"rtDW.aazmv33tcmo.dess21gzas" , "rtDW.mtt1ayedixs.iua2aul0k5" ,
"rtDW.mtt1ayedixs.bzq3ui1czr" , "rtDW.jtd3j4qmtj3.kj0js5y43a" ,
"rtDW.jtd3j4qmtj3.dj53101tjo" , "rtDW.hx2bxym1a4g.abs01yeupq" ,
"rtDW.hx2bxym1a4g.llq5zg0hho" , "rtDW.fzp5yrcmsta.h4dsuebilz" ,
"rtDW.fzp5yrcmsta.kyqlsdxb1f" , "rtDW.k33a52bgwif.cdjbjgd1xc" ,
"rtDW.k33a52bgwif.l0e4fwians" , "rtDW.po54rt51rvx.kmvjqif1vx" ,
"rtDW.po54rt51rvx.leoynkr3q5" , "rtDW.mggcxvqcxnx.ihbdkradn2" ,
"rtDW.mggcxvqcxnx.kfwk41aocj" , "rtDW.nt3t3nwbzjn.bhhrytpig4" ,
"rtDW.nt3t3nwbzjn.e5djmff4ey" , "rtDW.kum1vfui1c3.j2wb0heh5r" ,
"rtDW.kum1vfui1c3.inqavurpq2" , "rtDW.p1cpbmtwa2.dzegpmyi00" ,
"rtDW.p1cpbmtwa2.aati4n1exl" , "rtDW.dk52awvy35.dzegpmyi00" ,
"rtDW.dk52awvy35.aati4n1exl" , "rtDW.faha5qigiv5.dzegpmyi00" ,
"rtDW.faha5qigiv5.aati4n1exl" , "rtDW.itndmcozqm.akkfyrovb0" ,
"rtDW.itndmcozqm.oozywslmnt" , "rtDW.hv3vc22vuw.pf0eocqu32" ,
"rtDW.hv3vc22vuw.ptznzx2qmi" , "rtDW.hv3vc22vuw.dsczn1cz1s" ,
"rtDW.hv3vc22vuw.pqjrcy3mks" , "rtDW.ndmardmusd.lvbeuc3sjb" ,
"rtDW.ndmardmusd.mr2pswpsef" , "rtDW.ndmardmusd.dpphodfkey" ,
"rtDW.ndmardmusd.c3ky5ehk3m" , "rtDW.edawel13bx.jr12xlibrl" ,
"rtDW.edawel13bx.gm2p0wwtvc" , "rtDW.edawel13bx.mtvokfg2km" ,
"rtDW.edawel13bx.dgqdsbadmt" , "rtDW.dcguzoxh2sb.akkfyrovb0" ,
"rtDW.dcguzoxh2sb.oozywslmnt" , "rtDW.baulvd1vdb.pf0eocqu32" ,
"rtDW.baulvd1vdb.ptznzx2qmi" , "rtDW.baulvd1vdb.dsczn1cz1s" ,
"rtDW.baulvd1vdb.pqjrcy3mks" , "rtDW.cmiciuw2cg.lvbeuc3sjb" ,
"rtDW.cmiciuw2cg.mr2pswpsef" , "rtDW.cmiciuw2cg.dpphodfkey" ,
"rtDW.cmiciuw2cg.c3ky5ehk3m" , "rtDW.p0vbpdtq52.jr12xlibrl" ,
"rtDW.p0vbpdtq52.gm2p0wwtvc" , "rtDW.p0vbpdtq52.mtvokfg2km" ,
"rtDW.p0vbpdtq52.dgqdsbadmt" , } ; mxArray * rtdwData = mxCreateStructMatrix
( 1 , 1 , 627 , rtdwDataFieldNames ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const
void * ) & ( rtDW . bpbbz5llcl ) , sizeof ( rtDW . bpbbz5llcl ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const
void * ) & ( rtDW . iry4sotwjo ) , sizeof ( rtDW . iry4sotwjo ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const
void * ) & ( rtDW . e1hogwivrq ) , sizeof ( rtDW . e1hogwivrq ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const
void * ) & ( rtDW . gxmahoppaw ) , sizeof ( rtDW . gxmahoppaw ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const
void * ) & ( rtDW . hez3ezrpq2 ) , sizeof ( rtDW . hez3ezrpq2 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const
void * ) & ( rtDW . ea4uoiztke ) , sizeof ( rtDW . ea4uoiztke ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const
void * ) & ( rtDW . g5332d55t5 ) , sizeof ( rtDW . g5332d55t5 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const
void * ) & ( rtDW . msaff0w3sl ) , sizeof ( rtDW . msaff0w3sl ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const
void * ) & ( rtDW . mmbeeyt2c3 ) , sizeof ( rtDW . mmbeeyt2c3 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const
void * ) & ( rtDW . ghw5kalbtu ) , sizeof ( rtDW . ghw5kalbtu ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const
void * ) & ( rtDW . pb1zjp11ah ) , sizeof ( rtDW . pb1zjp11ah ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const
void * ) & ( rtDW . cjaep5120g ) , sizeof ( rtDW . cjaep5120g ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const
void * ) & ( rtDW . ermftxd5xs ) , sizeof ( rtDW . ermftxd5xs ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const
void * ) & ( rtDW . kk3vqau5j4 ) , sizeof ( rtDW . kk3vqau5j4 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const
void * ) & ( rtDW . cczfdi3ydg ) , sizeof ( rtDW . cczfdi3ydg ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const
void * ) & ( rtDW . j3spvmunzs ) , sizeof ( rtDW . j3spvmunzs ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const
void * ) & ( rtDW . huil4csvle ) , sizeof ( rtDW . huil4csvle ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const
void * ) & ( rtDW . o2s0qk524e ) , sizeof ( rtDW . o2s0qk524e ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const
void * ) & ( rtDW . bujt1u5ssb ) , sizeof ( rtDW . bujt1u5ssb ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const
void * ) & ( rtDW . ch3ulmwkxf ) , sizeof ( rtDW . ch3ulmwkxf ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const
void * ) & ( rtDW . npnmarbxwp ) , sizeof ( rtDW . npnmarbxwp ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const
void * ) & ( rtDW . luidyjwywm ) , sizeof ( rtDW . luidyjwywm ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const
void * ) & ( rtDW . nct4dwsy42 ) , sizeof ( rtDW . nct4dwsy42 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const
void * ) & ( rtDW . m21yi3xe0r ) , sizeof ( rtDW . m21yi3xe0r ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const
void * ) & ( rtDW . efb0llahxe ) , sizeof ( rtDW . efb0llahxe ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const
void * ) & ( rtDW . cwc30hkp0p ) , sizeof ( rtDW . cwc30hkp0p ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const
void * ) & ( rtDW . kgybnswm2h ) , sizeof ( rtDW . kgybnswm2h ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const
void * ) & ( rtDW . nzmtxoifv5 ) , sizeof ( rtDW . nzmtxoifv5 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const
void * ) & ( rtDW . mcbewak1r4 ) , sizeof ( rtDW . mcbewak1r4 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const
void * ) & ( rtDW . hzvbnr4bgd ) , sizeof ( rtDW . hzvbnr4bgd ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const
void * ) & ( rtDW . e0hsphy30b ) , sizeof ( rtDW . e0hsphy30b ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const
void * ) & ( rtDW . pjspex5iux ) , sizeof ( rtDW . pjspex5iux ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 32 , ( const
void * ) & ( rtDW . ceruf15djt ) , sizeof ( rtDW . ceruf15djt ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const
void * ) & ( rtDW . nwj4wrfqti ) , sizeof ( rtDW . nwj4wrfqti ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const
void * ) & ( rtDW . etvgfdreuz ) , sizeof ( rtDW . etvgfdreuz ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 35 , ( const
void * ) & ( rtDW . faabslxst2 ) , sizeof ( rtDW . faabslxst2 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 36 , ( const
void * ) & ( rtDW . gumtab5fnv ) , sizeof ( rtDW . gumtab5fnv ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const
void * ) & ( rtDW . d3nvmjf1vd ) , sizeof ( rtDW . d3nvmjf1vd ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 38 , ( const
void * ) & ( rtDW . oruuzh4bzs ) , sizeof ( rtDW . oruuzh4bzs ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 39 , ( const
void * ) & ( rtDW . ew53tl52et ) , sizeof ( rtDW . ew53tl52et ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 40 , ( const
void * ) & ( rtDW . afmamtdg1h ) , sizeof ( rtDW . afmamtdg1h ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 41 , ( const
void * ) & ( rtDW . kmhibglhil ) , sizeof ( rtDW . kmhibglhil ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 42 , ( const
void * ) & ( rtDW . c0mvgpjrpg ) , sizeof ( rtDW . c0mvgpjrpg ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 43 , ( const
void * ) & ( rtDW . oc3xb3ueqi ) , sizeof ( rtDW . oc3xb3ueqi ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 44 , ( const
void * ) & ( rtDW . ggpm4i3hqv ) , sizeof ( rtDW . ggpm4i3hqv ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 45 , ( const
void * ) & ( rtDW . pgw0quxym3 ) , sizeof ( rtDW . pgw0quxym3 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 46 , ( const
void * ) & ( rtDW . b3tarjjh2r ) , sizeof ( rtDW . b3tarjjh2r ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 47 , ( const
void * ) & ( rtDW . bjsvnxykzn ) , sizeof ( rtDW . bjsvnxykzn ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 48 , ( const
void * ) & ( rtDW . fn03ogv30b ) , sizeof ( rtDW . fn03ogv30b ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 49 , ( const
void * ) & ( rtDW . o0tgjzszlx ) , sizeof ( rtDW . o0tgjzszlx ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 50 , ( const
void * ) & ( rtDW . jk0pdacxs0 ) , sizeof ( rtDW . jk0pdacxs0 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 51 , ( const
void * ) & ( rtDW . hkv3n4pgdt ) , sizeof ( rtDW . hkv3n4pgdt ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 52 , ( const
void * ) & ( rtDW . msyvbfgmjp ) , sizeof ( rtDW . msyvbfgmjp ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 53 , ( const
void * ) & ( rtDW . i3gumoeyz1 ) , sizeof ( rtDW . i3gumoeyz1 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 54 , ( const
void * ) & ( rtDW . gxbtoq4uog ) , sizeof ( rtDW . gxbtoq4uog ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 55 , ( const
void * ) & ( rtDW . aqfzu2hilm ) , sizeof ( rtDW . aqfzu2hilm ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 56 , ( const
void * ) & ( rtDW . ceatu2c3ih ) , sizeof ( rtDW . ceatu2c3ih ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 57 , ( const
void * ) & ( rtDW . mzlkr3j3p5 ) , sizeof ( rtDW . mzlkr3j3p5 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 58 , ( const
void * ) & ( rtDW . hr0f0pllzb ) , sizeof ( rtDW . hr0f0pllzb ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 59 , ( const
void * ) & ( rtDW . lj4qjxl3d5 ) , sizeof ( rtDW . lj4qjxl3d5 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 60 , ( const
void * ) & ( rtDW . fwq22fuszr ) , sizeof ( rtDW . fwq22fuszr ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 61 , ( const
void * ) & ( rtDW . lw2of50kxw ) , sizeof ( rtDW . lw2of50kxw ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 62 , ( const
void * ) & ( rtDW . lrozmwruae ) , sizeof ( rtDW . lrozmwruae ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 63 , ( const
void * ) & ( rtDW . a33feioxw2 ) , sizeof ( rtDW . a33feioxw2 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 64 , ( const
void * ) & ( rtDW . afrmbd0iw3 ) , sizeof ( rtDW . afrmbd0iw3 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 65 , ( const
void * ) & ( rtDW . anfgrndojq ) , sizeof ( rtDW . anfgrndojq ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 66 , ( const
void * ) & ( rtDW . hwkvzcsfaz ) , sizeof ( rtDW . hwkvzcsfaz ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 67 , ( const
void * ) & ( rtDW . cuscr1mv1o ) , sizeof ( rtDW . cuscr1mv1o ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 68 , ( const
void * ) & ( rtDW . hi5sxdgutv ) , sizeof ( rtDW . hi5sxdgutv ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 69 , ( const
void * ) & ( rtDW . g3mwssejug ) , sizeof ( rtDW . g3mwssejug ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 70 , ( const
void * ) & ( rtDW . ohb2remyso ) , sizeof ( rtDW . ohb2remyso ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 71 , ( const
void * ) & ( rtDW . nnehvfm43x ) , sizeof ( rtDW . nnehvfm43x ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 72 , ( const
void * ) & ( rtDW . lqy3n4vuo3 ) , sizeof ( rtDW . lqy3n4vuo3 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 73 , ( const
void * ) & ( rtDW . noj5hcq43l ) , sizeof ( rtDW . noj5hcq43l ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 74 , ( const
void * ) & ( rtDW . h4kqpzy0bk ) , sizeof ( rtDW . h4kqpzy0bk ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 75 , ( const
void * ) & ( rtDW . ehukj5uhzp ) , sizeof ( rtDW . ehukj5uhzp ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 76 , ( const
void * ) & ( rtDW . lma0feztag ) , sizeof ( rtDW . lma0feztag ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 77 , ( const
void * ) & ( rtDW . balpcok03t ) , sizeof ( rtDW . balpcok03t ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 78 , ( const
void * ) & ( rtDW . kbtqs1lj34 ) , sizeof ( rtDW . kbtqs1lj34 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 79 , ( const
void * ) & ( rtDW . pdm2ofpuvs ) , sizeof ( rtDW . pdm2ofpuvs ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 80 , ( const
void * ) & ( rtDW . jgcfuyvz2d ) , sizeof ( rtDW . jgcfuyvz2d ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 81 , ( const
void * ) & ( rtDW . p1ngo54os1 ) , sizeof ( rtDW . p1ngo54os1 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 82 , ( const
void * ) & ( rtDW . pru2133ish ) , sizeof ( rtDW . pru2133ish ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 83 , ( const
void * ) & ( rtDW . kspt2mhisp ) , sizeof ( rtDW . kspt2mhisp ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 84 , ( const
void * ) & ( rtDW . kq5e4yhmjq ) , sizeof ( rtDW . kq5e4yhmjq ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 85 , ( const
void * ) & ( rtDW . gr0nnucbwg ) , sizeof ( rtDW . gr0nnucbwg ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 86 , ( const
void * ) & ( rtDW . p12ie1kq2d ) , sizeof ( rtDW . p12ie1kq2d ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 87 , ( const
void * ) & ( rtDW . ksdezs50qp ) , sizeof ( rtDW . ksdezs50qp ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 88 , ( const
void * ) & ( rtDW . fbgth0ylvb ) , sizeof ( rtDW . fbgth0ylvb ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 89 , ( const
void * ) & ( rtDW . oacqmm32n4 ) , sizeof ( rtDW . oacqmm32n4 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 90 , ( const
void * ) & ( rtDW . dmci5bmb3h ) , sizeof ( rtDW . dmci5bmb3h ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 91 , ( const
void * ) & ( rtDW . fbt5g1jmhm ) , sizeof ( rtDW . fbt5g1jmhm ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 92 , ( const
void * ) & ( rtDW . g4hhato521 ) , sizeof ( rtDW . g4hhato521 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 93 , ( const
void * ) & ( rtDW . iuph25q4on ) , sizeof ( rtDW . iuph25q4on ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 94 , ( const
void * ) & ( rtDW . adpqvxr4pq ) , sizeof ( rtDW . adpqvxr4pq ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 95 , ( const
void * ) & ( rtDW . gysjg2ez2v ) , sizeof ( rtDW . gysjg2ez2v ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 96 , ( const
void * ) & ( rtDW . j4xszwnett ) , sizeof ( rtDW . j4xszwnett ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 97 , ( const
void * ) & ( rtDW . hsn4witota ) , sizeof ( rtDW . hsn4witota ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 98 , ( const
void * ) & ( rtDW . aedtwpb020 ) , sizeof ( rtDW . aedtwpb020 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 99 , ( const
void * ) & ( rtDW . gjyzf1p00w ) , sizeof ( rtDW . gjyzf1p00w ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 100 , ( const
void * ) & ( rtDW . oeoilbr25n ) , sizeof ( rtDW . oeoilbr25n ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 101 , ( const
void * ) & ( rtDW . kod452jlzj ) , sizeof ( rtDW . kod452jlzj ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 102 , ( const
void * ) & ( rtDW . fchfg0xqd2 ) , sizeof ( rtDW . fchfg0xqd2 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 103 , ( const
void * ) & ( rtDW . m1vo1ryh5y ) , sizeof ( rtDW . m1vo1ryh5y ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 104 , ( const
void * ) & ( rtDW . neeztgz5mr ) , sizeof ( rtDW . neeztgz5mr ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 105 , ( const
void * ) & ( rtDW . ljys42kk0x ) , sizeof ( rtDW . ljys42kk0x ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 106 , ( const
void * ) & ( rtDW . ht4iqhimgp ) , sizeof ( rtDW . ht4iqhimgp ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 107 , ( const
void * ) & ( rtDW . ltvrxrfwqx ) , sizeof ( rtDW . ltvrxrfwqx ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 108 , ( const
void * ) & ( rtDW . jwy1yupkgd ) , sizeof ( rtDW . jwy1yupkgd ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 109 , ( const
void * ) & ( rtDW . p30s42eq1u ) , sizeof ( rtDW . p30s42eq1u ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 110 , ( const
void * ) & ( rtDW . d3t2v2pyhe ) , sizeof ( rtDW . d3t2v2pyhe ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 111 , ( const
void * ) & ( rtDW . caj1z5lk13 ) , sizeof ( rtDW . caj1z5lk13 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 112 , ( const
void * ) & ( rtDW . d5oxqf3ihc ) , sizeof ( rtDW . d5oxqf3ihc ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 113 , ( const
void * ) & ( rtDW . a1uugg3z5q ) , sizeof ( rtDW . a1uugg3z5q ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 114 , ( const
void * ) & ( rtDW . bql2kbo1mn ) , sizeof ( rtDW . bql2kbo1mn ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 115 , ( const
void * ) & ( rtDW . ddstw2zt2h ) , sizeof ( rtDW . ddstw2zt2h ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 116 , ( const
void * ) & ( rtDW . ket4u3rbik ) , sizeof ( rtDW . ket4u3rbik ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 117 , ( const
void * ) & ( rtDW . kxxqdtc3fn ) , sizeof ( rtDW . kxxqdtc3fn ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 118 , ( const
void * ) & ( rtDW . j2lpy04aok ) , sizeof ( rtDW . j2lpy04aok ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 119 , ( const
void * ) & ( rtDW . bti3xpysb3 ) , sizeof ( rtDW . bti3xpysb3 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 120 , ( const
void * ) & ( rtDW . jlfxz1mcjj ) , sizeof ( rtDW . jlfxz1mcjj ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 121 , ( const
void * ) & ( rtDW . bfiehwtxx0 ) , sizeof ( rtDW . bfiehwtxx0 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 122 , ( const
void * ) & ( rtDW . hedkojaly3 ) , sizeof ( rtDW . hedkojaly3 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 123 , ( const
void * ) & ( rtDW . cc1pquwq52 ) , sizeof ( rtDW . cc1pquwq52 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 124 , ( const
void * ) & ( rtDW . oksgsz1h3g ) , sizeof ( rtDW . oksgsz1h3g ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 125 , ( const
void * ) & ( rtDW . ftnfscrqnz ) , sizeof ( rtDW . ftnfscrqnz ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 126 , ( const
void * ) & ( rtDW . aiobhqac0s ) , sizeof ( rtDW . aiobhqac0s ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 127 , ( const
void * ) & ( rtDW . izhxg5z13h ) , sizeof ( rtDW . izhxg5z13h ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 128 , ( const
void * ) & ( rtDW . ixn1qplhkp ) , sizeof ( rtDW . ixn1qplhkp ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 129 , ( const
void * ) & ( rtDW . lqzocersmx ) , sizeof ( rtDW . lqzocersmx ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 130 , ( const
void * ) & ( rtDW . nl3wf33p4z ) , sizeof ( rtDW . nl3wf33p4z ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 131 , ( const
void * ) & ( rtDW . iqssg2wtlr ) , sizeof ( rtDW . iqssg2wtlr ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 132 , ( const
void * ) & ( rtDW . losfu35ozo ) , sizeof ( rtDW . losfu35ozo ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 133 , ( const
void * ) & ( rtDW . gv1yczvurw ) , sizeof ( rtDW . gv1yczvurw ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 134 , ( const
void * ) & ( rtDW . pxkqzhdtui ) , sizeof ( rtDW . pxkqzhdtui ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 135 , ( const
void * ) & ( rtDW . kd2cj1lw5i ) , sizeof ( rtDW . kd2cj1lw5i ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 136 , ( const
void * ) & ( rtDW . jw30qsqu5r ) , sizeof ( rtDW . jw30qsqu5r ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 137 , ( const
void * ) & ( rtDW . mnmtds151j ) , sizeof ( rtDW . mnmtds151j ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 138 , ( const
void * ) & ( rtDW . gajg5igtez ) , sizeof ( rtDW . gajg5igtez ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 139 , ( const
void * ) & ( rtDW . kigfha511a ) , sizeof ( rtDW . kigfha511a ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 140 , ( const
void * ) & ( rtDW . e4acoao20b ) , sizeof ( rtDW . e4acoao20b ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 141 , ( const
void * ) & ( rtDW . nnbiwtqwas ) , sizeof ( rtDW . nnbiwtqwas ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 142 , ( const
void * ) & ( rtDW . m3zpcv3djg ) , sizeof ( rtDW . m3zpcv3djg ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 143 , ( const
void * ) & ( rtDW . mfqd1lsjjw ) , sizeof ( rtDW . mfqd1lsjjw ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 144 , ( const
void * ) & ( rtDW . evli1vcywa ) , sizeof ( rtDW . evli1vcywa ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 145 , ( const
void * ) & ( rtDW . a3mcja4urs ) , sizeof ( rtDW . a3mcja4urs ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 146 , ( const
void * ) & ( rtDW . ni0bl2pri0 ) , sizeof ( rtDW . ni0bl2pri0 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 147 , ( const
void * ) & ( rtDW . hepne3hpaw ) , sizeof ( rtDW . hepne3hpaw ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 148 , ( const
void * ) & ( rtDW . eecce0ocvb ) , sizeof ( rtDW . eecce0ocvb ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 149 , ( const
void * ) & ( rtDW . nqe3ukp1lv ) , sizeof ( rtDW . nqe3ukp1lv ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 150 , ( const
void * ) & ( rtDW . bpt15stayd ) , sizeof ( rtDW . bpt15stayd ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 151 , ( const
void * ) & ( rtDW . fopsvccudd ) , sizeof ( rtDW . fopsvccudd ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 152 , ( const
void * ) & ( rtDW . fnmb2ixb3q ) , sizeof ( rtDW . fnmb2ixb3q ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 153 , ( const
void * ) & ( rtDW . jhliq0ridw ) , sizeof ( rtDW . jhliq0ridw ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 154 , ( const
void * ) & ( rtDW . injgvgohva ) , sizeof ( rtDW . injgvgohva ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 155 , ( const
void * ) & ( rtDW . ncoe4ckqww ) , sizeof ( rtDW . ncoe4ckqww ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 156 , ( const
void * ) & ( rtDW . a2uqh3n150 ) , sizeof ( rtDW . a2uqh3n150 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 157 , ( const
void * ) & ( rtDW . l1cjdkruqq ) , sizeof ( rtDW . l1cjdkruqq ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 158 , ( const
void * ) & ( rtDW . dppgdzgj0x ) , sizeof ( rtDW . dppgdzgj0x ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 159 , ( const
void * ) & ( rtDW . fotv1vmuhj ) , sizeof ( rtDW . fotv1vmuhj ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 160 , ( const
void * ) & ( rtDW . i5gi0zotho ) , sizeof ( rtDW . i5gi0zotho ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 161 , ( const
void * ) & ( rtDW . pqxstp3wgr ) , sizeof ( rtDW . pqxstp3wgr ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 162 , ( const
void * ) & ( rtDW . ablkijkmz5 ) , sizeof ( rtDW . ablkijkmz5 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 163 , ( const
void * ) & ( rtDW . kwwlxjzdoe ) , sizeof ( rtDW . kwwlxjzdoe ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 164 , ( const
void * ) & ( rtDW . dv5jqwdcth ) , sizeof ( rtDW . dv5jqwdcth ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 165 , ( const
void * ) & ( rtDW . ptf1jyuocm ) , sizeof ( rtDW . ptf1jyuocm ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 166 , ( const
void * ) & ( rtDW . cm2wzi1df3 ) , sizeof ( rtDW . cm2wzi1df3 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 167 , ( const
void * ) & ( rtDW . fw4xval30t ) , sizeof ( rtDW . fw4xval30t ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 168 , ( const
void * ) & ( rtDW . lqlczeokm5 ) , sizeof ( rtDW . lqlczeokm5 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 169 , ( const
void * ) & ( rtDW . faksgtgdka ) , sizeof ( rtDW . faksgtgdka ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 170 , ( const
void * ) & ( rtDW . ipzfjakadv ) , sizeof ( rtDW . ipzfjakadv ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 171 , ( const
void * ) & ( rtDW . jvuxplwco4 ) , sizeof ( rtDW . jvuxplwco4 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 172 , ( const
void * ) & ( rtDW . gcyq4coupa ) , sizeof ( rtDW . gcyq4coupa ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 173 , ( const
void * ) & ( rtDW . b4hfbet4ba ) , sizeof ( rtDW . b4hfbet4ba ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 174 , ( const
void * ) & ( rtDW . dfsdkk5fjk ) , sizeof ( rtDW . dfsdkk5fjk ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 175 , ( const
void * ) & ( rtDW . b4ujwta3wy ) , sizeof ( rtDW . b4ujwta3wy ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 176 , ( const
void * ) & ( rtDW . cqvzla0ulg ) , sizeof ( rtDW . cqvzla0ulg ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 177 , ( const
void * ) & ( rtDW . jcvtghq3ig ) , sizeof ( rtDW . jcvtghq3ig ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 178 , ( const
void * ) & ( rtDW . jl34i02arl ) , sizeof ( rtDW . jl34i02arl ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 179 , ( const
void * ) & ( rtDW . dmbtvfs22x ) , sizeof ( rtDW . dmbtvfs22x ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 180 , ( const
void * ) & ( rtDW . n2whdu3eol ) , sizeof ( rtDW . n2whdu3eol ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 181 , ( const
void * ) & ( rtDW . a1421jzrsu ) , sizeof ( rtDW . a1421jzrsu ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 182 , ( const
void * ) & ( rtDW . gkjrmoqlie ) , sizeof ( rtDW . gkjrmoqlie ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 183 , ( const
void * ) & ( rtDW . dgymt0yytj ) , sizeof ( rtDW . dgymt0yytj ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 184 , ( const
void * ) & ( rtDW . gkp23xlorn ) , sizeof ( rtDW . gkp23xlorn ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 185 , ( const
void * ) & ( rtDW . hl3popemla ) , sizeof ( rtDW . hl3popemla ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 186 , ( const
void * ) & ( rtDW . mukf1zkhlx ) , sizeof ( rtDW . mukf1zkhlx ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 187 , ( const
void * ) & ( rtDW . ehzhklig5r ) , sizeof ( rtDW . ehzhklig5r ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 188 , ( const
void * ) & ( rtDW . g2rlyn1hgy ) , sizeof ( rtDW . g2rlyn1hgy ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 189 , ( const
void * ) & ( rtDW . cmvo3isroh ) , sizeof ( rtDW . cmvo3isroh ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 190 , ( const
void * ) & ( rtDW . nc0waz21t1 ) , sizeof ( rtDW . nc0waz21t1 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 191 , ( const
void * ) & ( rtDW . c0pmhbmlvb ) , sizeof ( rtDW . c0pmhbmlvb ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 192 , ( const
void * ) & ( rtDW . fx4qkmoomx ) , sizeof ( rtDW . fx4qkmoomx ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 193 , ( const
void * ) & ( rtDW . kbijeiibcz ) , sizeof ( rtDW . kbijeiibcz ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 194 , ( const
void * ) & ( rtDW . gxoqfko3zl ) , sizeof ( rtDW . gxoqfko3zl ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 195 , ( const
void * ) & ( rtDW . lsrg3b3izb ) , sizeof ( rtDW . lsrg3b3izb ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 196 , ( const
void * ) & ( rtDW . e4apruk0cn ) , sizeof ( rtDW . e4apruk0cn ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 197 , ( const
void * ) & ( rtDW . kdeplemgid ) , sizeof ( rtDW . kdeplemgid ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 198 , ( const
void * ) & ( rtDW . oq1rde331u ) , sizeof ( rtDW . oq1rde331u ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 199 , ( const
void * ) & ( rtDW . dri1oggmq0 ) , sizeof ( rtDW . dri1oggmq0 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 200 , ( const
void * ) & ( rtDW . nv4uj53r02 ) , sizeof ( rtDW . nv4uj53r02 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 201 , ( const
void * ) & ( rtDW . bxqyzy02ny ) , sizeof ( rtDW . bxqyzy02ny ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 202 , ( const
void * ) & ( rtDW . agzzpunc3i ) , sizeof ( rtDW . agzzpunc3i ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 203 , ( const
void * ) & ( rtDW . noznim2iqz ) , sizeof ( rtDW . noznim2iqz ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 204 , ( const
void * ) & ( rtDW . do1g134e35 ) , sizeof ( rtDW . do1g134e35 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 205 , ( const
void * ) & ( rtDW . jr11b3ek0i ) , sizeof ( rtDW . jr11b3ek0i ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 206 , ( const
void * ) & ( rtDW . cprxs0oxb4 ) , sizeof ( rtDW . cprxs0oxb4 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 207 , ( const
void * ) & ( rtDW . i4kbnwgsra ) , sizeof ( rtDW . i4kbnwgsra ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 208 , ( const
void * ) & ( rtDW . akcvng45tl ) , sizeof ( rtDW . akcvng45tl ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 209 , ( const
void * ) & ( rtDW . n4iun2fjnn ) , sizeof ( rtDW . n4iun2fjnn ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 210 , ( const
void * ) & ( rtDW . fr2u3bfpll ) , sizeof ( rtDW . fr2u3bfpll ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 211 , ( const
void * ) & ( rtDW . bv1ncvrs1o ) , sizeof ( rtDW . bv1ncvrs1o ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 212 , ( const
void * ) & ( rtDW . dzft24s4wf ) , sizeof ( rtDW . dzft24s4wf ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 213 , ( const
void * ) & ( rtDW . jcwpmucczd ) , sizeof ( rtDW . jcwpmucczd ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 214 , ( const
void * ) & ( rtDW . i3cg55zsq5 ) , sizeof ( rtDW . i3cg55zsq5 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 215 , ( const
void * ) & ( rtDW . duv4e2eeyz ) , sizeof ( rtDW . duv4e2eeyz ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 216 , ( const
void * ) & ( rtDW . cqzpsciwb0 ) , sizeof ( rtDW . cqzpsciwb0 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 217 , ( const
void * ) & ( rtDW . bgf0isn4m2 ) , sizeof ( rtDW . bgf0isn4m2 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 218 , ( const
void * ) & ( rtDW . iooznguwv5 ) , sizeof ( rtDW . iooznguwv5 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 219 , ( const
void * ) & ( rtDW . bkmzxq31d1 ) , sizeof ( rtDW . bkmzxq31d1 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 220 , ( const
void * ) & ( rtDW . kqgzq353ol ) , sizeof ( rtDW . kqgzq353ol ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 221 , ( const
void * ) & ( rtDW . fgrwjt4a2w ) , sizeof ( rtDW . fgrwjt4a2w ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 222 , ( const
void * ) & ( rtDW . e4hda03zrh ) , sizeof ( rtDW . e4hda03zrh ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 223 , ( const
void * ) & ( rtDW . axrvuq4x5i ) , sizeof ( rtDW . axrvuq4x5i ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 224 , ( const
void * ) & ( rtDW . f3nepfq241 ) , sizeof ( rtDW . f3nepfq241 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 225 , ( const
void * ) & ( rtDW . ivftjkcvdy ) , sizeof ( rtDW . ivftjkcvdy ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 226 , ( const
void * ) & ( rtDW . kt2dvgietw ) , sizeof ( rtDW . kt2dvgietw ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 227 , ( const
void * ) & ( rtDW . f125nvybng ) , sizeof ( rtDW . f125nvybng ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 228 , ( const
void * ) & ( rtDW . pp1spekrho ) , sizeof ( rtDW . pp1spekrho ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 229 , ( const
void * ) & ( rtDW . lhex3u5h1f ) , sizeof ( rtDW . lhex3u5h1f ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 230 , ( const
void * ) & ( rtDW . fefcdgfhj1 ) , sizeof ( rtDW . fefcdgfhj1 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 231 , ( const
void * ) & ( rtDW . gqs1ppah0r ) , sizeof ( rtDW . gqs1ppah0r ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 232 , ( const
void * ) & ( rtDW . c2jypg20hx ) , sizeof ( rtDW . c2jypg20hx ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 233 , ( const
void * ) & ( rtDW . esgl5mkr2h ) , sizeof ( rtDW . esgl5mkr2h ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 234 , ( const
void * ) & ( rtDW . oe1scdkmlv ) , sizeof ( rtDW . oe1scdkmlv ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 235 , ( const
void * ) & ( rtDW . fp3bheq2px ) , sizeof ( rtDW . fp3bheq2px ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 236 , ( const
void * ) & ( rtDW . nkzaiaa2wi ) , sizeof ( rtDW . nkzaiaa2wi ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 237 , ( const
void * ) & ( rtDW . a1gsgrx3gu ) , sizeof ( rtDW . a1gsgrx3gu ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 238 , ( const
void * ) & ( rtDW . oapwp3ivnb ) , sizeof ( rtDW . oapwp3ivnb ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 239 , ( const
void * ) & ( rtDW . mfhlrzl41r ) , sizeof ( rtDW . mfhlrzl41r ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 240 , ( const
void * ) & ( rtDW . bognbsvydi ) , sizeof ( rtDW . bognbsvydi ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 241 , ( const
void * ) & ( rtDW . nys12ztjas ) , sizeof ( rtDW . nys12ztjas ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 242 , ( const
void * ) & ( rtDW . cozp4vn1gx ) , sizeof ( rtDW . cozp4vn1gx ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 243 , ( const
void * ) & ( rtDW . a2kthhvkup ) , sizeof ( rtDW . a2kthhvkup ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 244 , ( const
void * ) & ( rtDW . e4ewwdakkt ) , sizeof ( rtDW . e4ewwdakkt ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 245 , ( const
void * ) & ( rtDW . pgl0dx24fb ) , sizeof ( rtDW . pgl0dx24fb ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 246 , ( const
void * ) & ( rtDW . iwbojjhhe5 ) , sizeof ( rtDW . iwbojjhhe5 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 247 , ( const
void * ) & ( rtDW . mxw4mzr0uk ) , sizeof ( rtDW . mxw4mzr0uk ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 248 , ( const
void * ) & ( rtDW . ljw5ghzdsf ) , sizeof ( rtDW . ljw5ghzdsf ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 249 , ( const
void * ) & ( rtDW . dgivirmjgy ) , sizeof ( rtDW . dgivirmjgy ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 250 , ( const
void * ) & ( rtDW . ehjpkuq40k ) , sizeof ( rtDW . ehjpkuq40k ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 251 , ( const
void * ) & ( rtDW . bd1ltj1wwf ) , sizeof ( rtDW . bd1ltj1wwf ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 252 , ( const
void * ) & ( rtDW . ofks3kmj3q ) , sizeof ( rtDW . ofks3kmj3q ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 253 , ( const
void * ) & ( rtDW . jg1x0sgptb ) , sizeof ( rtDW . jg1x0sgptb ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 254 , ( const
void * ) & ( rtDW . lyf5ek2b3d ) , sizeof ( rtDW . lyf5ek2b3d ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 255 , ( const
void * ) & ( rtDW . hgyegul2br ) , sizeof ( rtDW . hgyegul2br ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 256 , ( const
void * ) & ( rtDW . hmpn3ysews ) , sizeof ( rtDW . hmpn3ysews ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 257 , ( const
void * ) & ( rtDW . g5esa0nd4h ) , sizeof ( rtDW . g5esa0nd4h ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 258 , ( const
void * ) & ( rtDW . a514ztuygm ) , sizeof ( rtDW . a514ztuygm ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 259 , ( const
void * ) & ( rtDW . bsiifkcwph ) , sizeof ( rtDW . bsiifkcwph ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 260 , ( const
void * ) & ( rtDW . j2ygtkmtdt ) , sizeof ( rtDW . j2ygtkmtdt ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 261 , ( const
void * ) & ( rtDW . g32xdqkvam ) , sizeof ( rtDW . g32xdqkvam ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 262 , ( const
void * ) & ( rtDW . m5qcrrh0rz ) , sizeof ( rtDW . m5qcrrh0rz ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 263 , ( const
void * ) & ( rtDW . dqeonebn4v ) , sizeof ( rtDW . dqeonebn4v ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 264 , ( const
void * ) & ( rtDW . f22lusxsbw ) , sizeof ( rtDW . f22lusxsbw ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 265 , ( const
void * ) & ( rtDW . liujvkzp0o ) , sizeof ( rtDW . liujvkzp0o ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 266 , ( const
void * ) & ( rtDW . fpmxpxerkf ) , sizeof ( rtDW . fpmxpxerkf ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 267 , ( const
void * ) & ( rtDW . bobm2fibnc ) , sizeof ( rtDW . bobm2fibnc ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 268 , ( const
void * ) & ( rtDW . obpqvavpfa ) , sizeof ( rtDW . obpqvavpfa ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 269 , ( const
void * ) & ( rtDW . frqny0vebk ) , sizeof ( rtDW . frqny0vebk ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 270 , ( const
void * ) & ( rtDW . jv0nsgafal ) , sizeof ( rtDW . jv0nsgafal ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 271 , ( const
void * ) & ( rtDW . gd1fmtj3nb ) , sizeof ( rtDW . gd1fmtj3nb ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 272 , ( const
void * ) & ( rtDW . arpmjow3zy ) , sizeof ( rtDW . arpmjow3zy ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 273 , ( const
void * ) & ( rtDW . al1pl4kowr ) , sizeof ( rtDW . al1pl4kowr ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 274 , ( const
void * ) & ( rtDW . jhxq5x40uq ) , sizeof ( rtDW . jhxq5x40uq ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 275 , ( const
void * ) & ( rtDW . obmn5cmv54 ) , sizeof ( rtDW . obmn5cmv54 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 276 , ( const
void * ) & ( rtDW . jknbrx32pj ) , sizeof ( rtDW . jknbrx32pj ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 277 , ( const
void * ) & ( rtDW . pmqufde2h1 ) , sizeof ( rtDW . pmqufde2h1 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 278 , ( const
void * ) & ( rtDW . inefucjrpd ) , sizeof ( rtDW . inefucjrpd ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 279 , ( const
void * ) & ( rtDW . cslkm1fbej ) , sizeof ( rtDW . cslkm1fbej ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 280 , ( const
void * ) & ( rtDW . gdgxtxgf1g ) , sizeof ( rtDW . gdgxtxgf1g ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 281 , ( const
void * ) & ( rtDW . ky01ccojr5 ) , sizeof ( rtDW . ky01ccojr5 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 282 , ( const
void * ) & ( rtDW . i5j0r2inrh ) , sizeof ( rtDW . i5j0r2inrh ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 283 , ( const
void * ) & ( rtDW . gsqnwqajdt ) , sizeof ( rtDW . gsqnwqajdt ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 284 , ( const
void * ) & ( rtDW . nip0s141uc ) , sizeof ( rtDW . nip0s141uc ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 285 , ( const
void * ) & ( rtDW . j2xbhujzmo ) , sizeof ( rtDW . j2xbhujzmo ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 286 , ( const
void * ) & ( rtDW . dv1fj1e3po ) , sizeof ( rtDW . dv1fj1e3po ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 287 , ( const
void * ) & ( rtDW . d5o0clolff ) , sizeof ( rtDW . d5o0clolff ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 288 , ( const
void * ) & ( rtDW . h3bh4kq3i4 ) , sizeof ( rtDW . h3bh4kq3i4 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 289 , ( const
void * ) & ( rtDW . ndj0iieydo ) , sizeof ( rtDW . ndj0iieydo ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 290 , ( const
void * ) & ( rtDW . db0mrltr1f ) , sizeof ( rtDW . db0mrltr1f ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 291 , ( const
void * ) & ( rtDW . ghat2mvfdb ) , sizeof ( rtDW . ghat2mvfdb ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 292 , ( const
void * ) & ( rtDW . dbyjv3m3km ) , sizeof ( rtDW . dbyjv3m3km ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 293 , ( const
void * ) & ( rtDW . nq533x3m4z ) , sizeof ( rtDW . nq533x3m4z ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 294 , ( const
void * ) & ( rtDW . lq3hiypoc1 ) , sizeof ( rtDW . lq3hiypoc1 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 295 , ( const
void * ) & ( rtDW . d5x0pmmjhx ) , sizeof ( rtDW . d5x0pmmjhx ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 296 , ( const
void * ) & ( rtDW . axi1h1fttd ) , sizeof ( rtDW . axi1h1fttd ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 297 , ( const
void * ) & ( rtDW . n3znxzlzoy ) , sizeof ( rtDW . n3znxzlzoy ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 298 , ( const
void * ) & ( rtDW . dtq0brtwgy ) , sizeof ( rtDW . dtq0brtwgy ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 299 , ( const
void * ) & ( rtDW . e2av1fijfk ) , sizeof ( rtDW . e2av1fijfk ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 300 , ( const
void * ) & ( rtDW . izd0xxaozr ) , sizeof ( rtDW . izd0xxaozr ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 301 , ( const
void * ) & ( rtDW . fan5swni5z ) , sizeof ( rtDW . fan5swni5z ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 302 , ( const
void * ) & ( rtDW . ebphxvnfm5 ) , sizeof ( rtDW . ebphxvnfm5 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 303 , ( const
void * ) & ( rtDW . pvbkyahyj2 ) , sizeof ( rtDW . pvbkyahyj2 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 304 , ( const
void * ) & ( rtDW . nw0ce5ez2e ) , sizeof ( rtDW . nw0ce5ez2e ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 305 , ( const
void * ) & ( rtDW . pyfiwzjg3y ) , sizeof ( rtDW . pyfiwzjg3y ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 306 , ( const
void * ) & ( rtDW . ettbn5njm2 ) , sizeof ( rtDW . ettbn5njm2 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 307 , ( const
void * ) & ( rtDW . litxgdvmkb ) , sizeof ( rtDW . litxgdvmkb ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 308 , ( const
void * ) & ( rtDW . jw2gcekxcn ) , sizeof ( rtDW . jw2gcekxcn ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 309 , ( const
void * ) & ( rtDW . haxmbuhro2 ) , sizeof ( rtDW . haxmbuhro2 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 310 , ( const
void * ) & ( rtDW . l2wdkwq3l3 ) , sizeof ( rtDW . l2wdkwq3l3 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 311 , ( const
void * ) & ( rtDW . gkvgzinv2s ) , sizeof ( rtDW . gkvgzinv2s ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 312 , ( const
void * ) & ( rtDW . hyj4pez02v ) , sizeof ( rtDW . hyj4pez02v ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 313 , ( const
void * ) & ( rtDW . evuw2ur1ju ) , sizeof ( rtDW . evuw2ur1ju ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 314 , ( const
void * ) & ( rtDW . bcvviips3r ) , sizeof ( rtDW . bcvviips3r ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 315 , ( const
void * ) & ( rtDW . mbyb3mwghk ) , sizeof ( rtDW . mbyb3mwghk ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 316 , ( const
void * ) & ( rtDW . fl5kdak43c ) , sizeof ( rtDW . fl5kdak43c ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 317 , ( const
void * ) & ( rtDW . izhelokxhz ) , sizeof ( rtDW . izhelokxhz ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 318 , ( const
void * ) & ( rtDW . p5x4qrbnra ) , sizeof ( rtDW . p5x4qrbnra ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 319 , ( const
void * ) & ( rtDW . ode0ma3jvt ) , sizeof ( rtDW . ode0ma3jvt ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 320 , ( const
void * ) & ( rtDW . e2i1vst4ks ) , sizeof ( rtDW . e2i1vst4ks ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 321 , ( const
void * ) & ( rtDW . bp0z35htv2 ) , sizeof ( rtDW . bp0z35htv2 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 322 , ( const
void * ) & ( rtDW . j43lisdiks ) , sizeof ( rtDW . j43lisdiks ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 323 , ( const
void * ) & ( rtDW . gijlhzozco ) , sizeof ( rtDW . gijlhzozco ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 324 , ( const
void * ) & ( rtDW . on3sz2avtq ) , sizeof ( rtDW . on3sz2avtq ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 325 , ( const
void * ) & ( rtDW . fda20uvw2n ) , sizeof ( rtDW . fda20uvw2n ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 326 , ( const
void * ) & ( rtDW . b0gd0xwnrv ) , sizeof ( rtDW . b0gd0xwnrv ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 327 , ( const
void * ) & ( rtDW . mmptt4byoj ) , sizeof ( rtDW . mmptt4byoj ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 328 , ( const
void * ) & ( rtDW . pjoh3gen5u ) , sizeof ( rtDW . pjoh3gen5u ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 329 , ( const
void * ) & ( rtDW . atko2rhysz . ivbbwftzhv ) , sizeof ( rtDW . atko2rhysz .
ivbbwftzhv ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 330 , ( const void * ) & ( rtDW . atko2rhysz . i24gbolf04 ) , sizeof ( rtDW
. atko2rhysz . i24gbolf04 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 331 , ( const void * ) & ( rtDW . ctkwb4rte4 . hnsu34ocdv )
, sizeof ( rtDW . ctkwb4rte4 . hnsu34ocdv ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 332 , ( const
void * ) & ( rtDW . ctkwb4rte4 . aczjakmt3z ) , sizeof ( rtDW . ctkwb4rte4 .
aczjakmt3z ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 333 , ( const void * ) & ( rtDW . ayc1u05z0b . eakynmnk00 ) , sizeof ( rtDW
. ayc1u05z0b . eakynmnk00 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 334 , ( const void * ) & ( rtDW . ayc1u05z0b . ap1t1grbei )
, sizeof ( rtDW . ayc1u05z0b . ap1t1grbei ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 335 , ( const
void * ) & ( rtDW . jnhmigxpfr . cexaqfpgul ) , sizeof ( rtDW . jnhmigxpfr .
cexaqfpgul ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 336 , ( const void * ) & ( rtDW . jnhmigxpfr . b2wniulodl ) , sizeof ( rtDW
. jnhmigxpfr . b2wniulodl ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 337 , ( const void * ) & ( rtDW . hqymuumkk2 . e2wpdf03fq )
, sizeof ( rtDW . hqymuumkk2 . e2wpdf03fq ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 338 , ( const
void * ) & ( rtDW . hqymuumkk2 . ab3ipnlkse ) , sizeof ( rtDW . hqymuumkk2 .
ab3ipnlkse ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 339 , ( const void * ) & ( rtDW . ph0c5wwhlf . izussz2j2f ) , sizeof ( rtDW
. ph0c5wwhlf . izussz2j2f ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 340 , ( const void * ) & ( rtDW . ph0c5wwhlf . fleyftrufo )
, sizeof ( rtDW . ph0c5wwhlf . fleyftrufo ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 341 , ( const
void * ) & ( rtDW . jkhbxjlbpd . eziun3lwqz ) , sizeof ( rtDW . jkhbxjlbpd .
eziun3lwqz ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 342 , ( const void * ) & ( rtDW . jkhbxjlbpd . hbw4kaxbof ) , sizeof ( rtDW
. jkhbxjlbpd . hbw4kaxbof ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 343 , ( const void * ) & ( rtDW . chadwwtb33 . nf2byzbqdw )
, sizeof ( rtDW . chadwwtb33 . nf2byzbqdw ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 344 , ( const
void * ) & ( rtDW . chadwwtb33 . c0hodwtoi4 ) , sizeof ( rtDW . chadwwtb33 .
c0hodwtoi4 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 345 , ( const void * ) & ( rtDW . k0pzgqkvwb . j30rgfm2jv ) , sizeof ( rtDW
. k0pzgqkvwb . j30rgfm2jv ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 346 , ( const void * ) & ( rtDW . k0pzgqkvwb . hgh0tt5vqy )
, sizeof ( rtDW . k0pzgqkvwb . hgh0tt5vqy ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 347 , ( const
void * ) & ( rtDW . diaw2yowgl . m5k3zxa1u1 ) , sizeof ( rtDW . diaw2yowgl .
m5k3zxa1u1 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 348 , ( const void * ) & ( rtDW . diaw2yowgl . mcqwmlgcq0 ) , sizeof ( rtDW
. diaw2yowgl . mcqwmlgcq0 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 349 , ( const void * ) & ( rtDW . eeeqgos433 . emb3do3f0r )
, sizeof ( rtDW . eeeqgos433 . emb3do3f0r ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 350 , ( const
void * ) & ( rtDW . eeeqgos433 . kltuftdkui ) , sizeof ( rtDW . eeeqgos433 .
kltuftdkui ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 351 , ( const void * ) & ( rtDW . ekp05fi01e . pk5rrxppux ) , sizeof ( rtDW
. ekp05fi01e . pk5rrxppux ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 352 , ( const void * ) & ( rtDW . ekp05fi01e . eqtir0gumq )
, sizeof ( rtDW . ekp05fi01e . eqtir0gumq ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 353 , ( const
void * ) & ( rtDW . gw0bb4lu4k . i5moiltmws ) , sizeof ( rtDW . gw0bb4lu4k .
i5moiltmws ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 354 , ( const void * ) & ( rtDW . gw0bb4lu4k . jfuok3z43s ) , sizeof ( rtDW
. gw0bb4lu4k . jfuok3z43s ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 355 , ( const void * ) & ( rtDW . jwlq00h0qp . kac4x3wvla )
, sizeof ( rtDW . jwlq00h0qp . kac4x3wvla ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 356 , ( const
void * ) & ( rtDW . jwlq00h0qp . cade0e5uxu ) , sizeof ( rtDW . jwlq00h0qp .
cade0e5uxu ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 357 , ( const void * ) & ( rtDW . fbu1mofswb . kbd34gxwbo ) , sizeof ( rtDW
. fbu1mofswb . kbd34gxwbo ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 358 , ( const void * ) & ( rtDW . fbu1mofswb . m5l4tdev1b )
, sizeof ( rtDW . fbu1mofswb . m5l4tdev1b ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 359 , ( const
void * ) & ( rtDW . c45nfqxt1bx . ivbbwftzhv ) , sizeof ( rtDW . c45nfqxt1bx
. ivbbwftzhv ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 360 , ( const void * ) & ( rtDW . c45nfqxt1bx . i24gbolf04 ) , sizeof (
rtDW . c45nfqxt1bx . i24gbolf04 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 361 , ( const
void * ) & ( rtDW . dmnv2typrkz . hnsu34ocdv ) , sizeof ( rtDW . dmnv2typrkz
. hnsu34ocdv ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 362 , ( const void * ) & ( rtDW . dmnv2typrkz . aczjakmt3z ) , sizeof (
rtDW . dmnv2typrkz . aczjakmt3z ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 363 , ( const
void * ) & ( rtDW . bx4q2vjdxxp . eakynmnk00 ) , sizeof ( rtDW . bx4q2vjdxxp
. eakynmnk00 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 364 , ( const void * ) & ( rtDW . bx4q2vjdxxp . ap1t1grbei ) , sizeof (
rtDW . bx4q2vjdxxp . ap1t1grbei ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 365 , ( const
void * ) & ( rtDW . gzu0v1k154f . cexaqfpgul ) , sizeof ( rtDW . gzu0v1k154f
. cexaqfpgul ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 366 , ( const void * ) & ( rtDW . gzu0v1k154f . b2wniulodl ) , sizeof (
rtDW . gzu0v1k154f . b2wniulodl ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 367 , ( const
void * ) & ( rtDW . m2rovdpxpjx . e2wpdf03fq ) , sizeof ( rtDW . m2rovdpxpjx
. e2wpdf03fq ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 368 , ( const void * ) & ( rtDW . m2rovdpxpjx . ab3ipnlkse ) , sizeof (
rtDW . m2rovdpxpjx . ab3ipnlkse ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 369 , ( const
void * ) & ( rtDW . dfgw4kuzso2 . izussz2j2f ) , sizeof ( rtDW . dfgw4kuzso2
. izussz2j2f ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 370 , ( const void * ) & ( rtDW . dfgw4kuzso2 . fleyftrufo ) , sizeof (
rtDW . dfgw4kuzso2 . fleyftrufo ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 371 , ( const
void * ) & ( rtDW . gvbyuajj10j . eziun3lwqz ) , sizeof ( rtDW . gvbyuajj10j
. eziun3lwqz ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 372 , ( const void * ) & ( rtDW . gvbyuajj10j . hbw4kaxbof ) , sizeof (
rtDW . gvbyuajj10j . hbw4kaxbof ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 373 , ( const
void * ) & ( rtDW . o3izwcublel . nf2byzbqdw ) , sizeof ( rtDW . o3izwcublel
. nf2byzbqdw ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 374 , ( const void * ) & ( rtDW . o3izwcublel . c0hodwtoi4 ) , sizeof (
rtDW . o3izwcublel . c0hodwtoi4 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 375 , ( const
void * ) & ( rtDW . pdnjandztac . j30rgfm2jv ) , sizeof ( rtDW . pdnjandztac
. j30rgfm2jv ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 376 , ( const void * ) & ( rtDW . pdnjandztac . hgh0tt5vqy ) , sizeof (
rtDW . pdnjandztac . hgh0tt5vqy ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 377 , ( const
void * ) & ( rtDW . hexdymfazx2 . m5k3zxa1u1 ) , sizeof ( rtDW . hexdymfazx2
. m5k3zxa1u1 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 378 , ( const void * ) & ( rtDW . hexdymfazx2 . mcqwmlgcq0 ) , sizeof (
rtDW . hexdymfazx2 . mcqwmlgcq0 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 379 , ( const
void * ) & ( rtDW . im0j4vockyt . emb3do3f0r ) , sizeof ( rtDW . im0j4vockyt
. emb3do3f0r ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 380 , ( const void * ) & ( rtDW . im0j4vockyt . kltuftdkui ) , sizeof (
rtDW . im0j4vockyt . kltuftdkui ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 381 , ( const
void * ) & ( rtDW . am45qhx1eqm . pk5rrxppux ) , sizeof ( rtDW . am45qhx1eqm
. pk5rrxppux ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 382 , ( const void * ) & ( rtDW . am45qhx1eqm . eqtir0gumq ) , sizeof (
rtDW . am45qhx1eqm . eqtir0gumq ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 383 , ( const
void * ) & ( rtDW . g2rlwqx2xml . i5moiltmws ) , sizeof ( rtDW . g2rlwqx2xml
. i5moiltmws ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 384 , ( const void * ) & ( rtDW . g2rlwqx2xml . jfuok3z43s ) , sizeof (
rtDW . g2rlwqx2xml . jfuok3z43s ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 385 , ( const
void * ) & ( rtDW . nv44ttbdg32 . kac4x3wvla ) , sizeof ( rtDW . nv44ttbdg32
. kac4x3wvla ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 386 , ( const void * ) & ( rtDW . nv44ttbdg32 . cade0e5uxu ) , sizeof (
rtDW . nv44ttbdg32 . cade0e5uxu ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 387 , ( const
void * ) & ( rtDW . cqyo42y2ghh . kbd34gxwbo ) , sizeof ( rtDW . cqyo42y2ghh
. kbd34gxwbo ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 388 , ( const void * ) & ( rtDW . cqyo42y2ghh . m5l4tdev1b ) , sizeof (
rtDW . cqyo42y2ghh . m5l4tdev1b ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 389 , ( const
void * ) & ( rtDW . hshupcos05 . ofrvdmgnuh ) , sizeof ( rtDW . hshupcos05 .
ofrvdmgnuh ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 390 , ( const void * ) & ( rtDW . hshupcos05 . jq1v3dabca ) , sizeof ( rtDW
. hshupcos05 . jq1v3dabca ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 391 , ( const void * ) & ( rtDW . bzql1z5sfh . dxojn2xddw )
, sizeof ( rtDW . bzql1z5sfh . dxojn2xddw ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 392 , ( const
void * ) & ( rtDW . bzql1z5sfh . bko3b1m5jh ) , sizeof ( rtDW . bzql1z5sfh .
bko3b1m5jh ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 393 , ( const void * ) & ( rtDW . nbx3n1zru5 . arfpsuibu4 ) , sizeof ( rtDW
. nbx3n1zru5 . arfpsuibu4 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 394 , ( const void * ) & ( rtDW . nbx3n1zru5 . gzbdyuemgc )
, sizeof ( rtDW . nbx3n1zru5 . gzbdyuemgc ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 395 , ( const
void * ) & ( rtDW . gitl1vogja . d0r4pg3qpe ) , sizeof ( rtDW . gitl1vogja .
d0r4pg3qpe ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 396 , ( const void * ) & ( rtDW . gitl1vogja . mpmtoteyyz ) , sizeof ( rtDW
. gitl1vogja . mpmtoteyyz ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 397 , ( const void * ) & ( rtDW . ig3hrn2l24 . o2cwobb3pj )
, sizeof ( rtDW . ig3hrn2l24 . o2cwobb3pj ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 398 , ( const
void * ) & ( rtDW . ig3hrn2l24 . om1xuzw1eo ) , sizeof ( rtDW . ig3hrn2l24 .
om1xuzw1eo ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 399 , ( const void * ) & ( rtDW . ju3onx0ww2 . ak5b20glzq ) , sizeof ( rtDW
. ju3onx0ww2 . ak5b20glzq ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 400 , ( const void * ) & ( rtDW . ju3onx0ww2 . eq21cdu2ve )
, sizeof ( rtDW . ju3onx0ww2 . eq21cdu2ve ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 401 , ( const
void * ) & ( rtDW . prjjcc3mxy . ottkqopm4f ) , sizeof ( rtDW . prjjcc3mxy .
ottkqopm4f ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 402 , ( const void * ) & ( rtDW . prjjcc3mxy . eohabhj4xn ) , sizeof ( rtDW
. prjjcc3mxy . eohabhj4xn ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 403 , ( const void * ) & ( rtDW . mm0axov05p . e4ft35rk43 )
, sizeof ( rtDW . mm0axov05p . e4ft35rk43 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 404 , ( const
void * ) & ( rtDW . mm0axov05p . dess21gzas ) , sizeof ( rtDW . mm0axov05p .
dess21gzas ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 405 , ( const void * ) & ( rtDW . cqouob3iam . iua2aul0k5 ) , sizeof ( rtDW
. cqouob3iam . iua2aul0k5 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 406 , ( const void * ) & ( rtDW . cqouob3iam . bzq3ui1czr )
, sizeof ( rtDW . cqouob3iam . bzq3ui1czr ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 407 , ( const
void * ) & ( rtDW . djq1we332q . kj0js5y43a ) , sizeof ( rtDW . djq1we332q .
kj0js5y43a ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 408 , ( const void * ) & ( rtDW . djq1we332q . dj53101tjo ) , sizeof ( rtDW
. djq1we332q . dj53101tjo ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 409 , ( const void * ) & ( rtDW . d50tkbrk2e . abs01yeupq )
, sizeof ( rtDW . d50tkbrk2e . abs01yeupq ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 410 , ( const
void * ) & ( rtDW . d50tkbrk2e . llq5zg0hho ) , sizeof ( rtDW . d50tkbrk2e .
llq5zg0hho ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 411 , ( const void * ) & ( rtDW . ppnfsuot4z . h4dsuebilz ) , sizeof ( rtDW
. ppnfsuot4z . h4dsuebilz ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 412 , ( const void * ) & ( rtDW . ppnfsuot4z . kyqlsdxb1f )
, sizeof ( rtDW . ppnfsuot4z . kyqlsdxb1f ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 413 , ( const
void * ) & ( rtDW . h502wprcm0 . cdjbjgd1xc ) , sizeof ( rtDW . h502wprcm0 .
cdjbjgd1xc ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 414 , ( const void * ) & ( rtDW . h502wprcm0 . l0e4fwians ) , sizeof ( rtDW
. h502wprcm0 . l0e4fwians ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 415 , ( const void * ) & ( rtDW . ec1kk3wac3 . kmvjqif1vx )
, sizeof ( rtDW . ec1kk3wac3 . kmvjqif1vx ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 416 , ( const
void * ) & ( rtDW . ec1kk3wac3 . leoynkr3q5 ) , sizeof ( rtDW . ec1kk3wac3 .
leoynkr3q5 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 417 , ( const void * ) & ( rtDW . mcrnskrou3 . ihbdkradn2 ) , sizeof ( rtDW
. mcrnskrou3 . ihbdkradn2 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 418 , ( const void * ) & ( rtDW . mcrnskrou3 . kfwk41aocj )
, sizeof ( rtDW . mcrnskrou3 . kfwk41aocj ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 419 , ( const
void * ) & ( rtDW . psluq53bh5 . bhhrytpig4 ) , sizeof ( rtDW . psluq53bh5 .
bhhrytpig4 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 420 , ( const void * ) & ( rtDW . psluq53bh5 . e5djmff4ey ) , sizeof ( rtDW
. psluq53bh5 . e5djmff4ey ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 421 , ( const void * ) & ( rtDW . l2dw2tngpy . j2wb0heh5r )
, sizeof ( rtDW . l2dw2tngpy . j2wb0heh5r ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 422 , ( const
void * ) & ( rtDW . l2dw2tngpy . inqavurpq2 ) , sizeof ( rtDW . l2dw2tngpy .
inqavurpq2 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 423 , ( const void * ) & ( rtDW . ludvfohavv . ofrvdmgnuh ) , sizeof ( rtDW
. ludvfohavv . ofrvdmgnuh ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 424 , ( const void * ) & ( rtDW . ludvfohavv . jq1v3dabca )
, sizeof ( rtDW . ludvfohavv . jq1v3dabca ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 425 , ( const
void * ) & ( rtDW . cnelbzjfhg . dxojn2xddw ) , sizeof ( rtDW . cnelbzjfhg .
dxojn2xddw ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 426 , ( const void * ) & ( rtDW . cnelbzjfhg . bko3b1m5jh ) , sizeof ( rtDW
. cnelbzjfhg . bko3b1m5jh ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 427 , ( const void * ) & ( rtDW . mx4jv5qqj4 . arfpsuibu4 )
, sizeof ( rtDW . mx4jv5qqj4 . arfpsuibu4 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 428 , ( const
void * ) & ( rtDW . mx4jv5qqj4 . gzbdyuemgc ) , sizeof ( rtDW . mx4jv5qqj4 .
gzbdyuemgc ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 429 , ( const void * ) & ( rtDW . ls5eenr2ad . d0r4pg3qpe ) , sizeof ( rtDW
. ls5eenr2ad . d0r4pg3qpe ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 430 , ( const void * ) & ( rtDW . ls5eenr2ad . mpmtoteyyz )
, sizeof ( rtDW . ls5eenr2ad . mpmtoteyyz ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 431 , ( const
void * ) & ( rtDW . bk35bvlqhh . o2cwobb3pj ) , sizeof ( rtDW . bk35bvlqhh .
o2cwobb3pj ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 432 , ( const void * ) & ( rtDW . bk35bvlqhh . om1xuzw1eo ) , sizeof ( rtDW
. bk35bvlqhh . om1xuzw1eo ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 433 , ( const void * ) & ( rtDW . d3bzw5xtsk . ak5b20glzq )
, sizeof ( rtDW . d3bzw5xtsk . ak5b20glzq ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 434 , ( const
void * ) & ( rtDW . d3bzw5xtsk . eq21cdu2ve ) , sizeof ( rtDW . d3bzw5xtsk .
eq21cdu2ve ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 435 , ( const void * ) & ( rtDW . p5zpxze4b1 . ottkqopm4f ) , sizeof ( rtDW
. p5zpxze4b1 . ottkqopm4f ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 436 , ( const void * ) & ( rtDW . p5zpxze4b1 . eohabhj4xn )
, sizeof ( rtDW . p5zpxze4b1 . eohabhj4xn ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 437 , ( const
void * ) & ( rtDW . iaybj1yga2 . e4ft35rk43 ) , sizeof ( rtDW . iaybj1yga2 .
e4ft35rk43 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 438 , ( const void * ) & ( rtDW . iaybj1yga2 . dess21gzas ) , sizeof ( rtDW
. iaybj1yga2 . dess21gzas ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 439 , ( const void * ) & ( rtDW . ok1l4kluje . iua2aul0k5 )
, sizeof ( rtDW . ok1l4kluje . iua2aul0k5 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 440 , ( const
void * ) & ( rtDW . ok1l4kluje . bzq3ui1czr ) , sizeof ( rtDW . ok1l4kluje .
bzq3ui1czr ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 441 , ( const void * ) & ( rtDW . jyf4ywwf11 . kj0js5y43a ) , sizeof ( rtDW
. jyf4ywwf11 . kj0js5y43a ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 442 , ( const void * ) & ( rtDW . jyf4ywwf11 . dj53101tjo )
, sizeof ( rtDW . jyf4ywwf11 . dj53101tjo ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 443 , ( const
void * ) & ( rtDW . odwyzbzb3q . abs01yeupq ) , sizeof ( rtDW . odwyzbzb3q .
abs01yeupq ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 444 , ( const void * ) & ( rtDW . odwyzbzb3q . llq5zg0hho ) , sizeof ( rtDW
. odwyzbzb3q . llq5zg0hho ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 445 , ( const void * ) & ( rtDW . f32lct1du0 . h4dsuebilz )
, sizeof ( rtDW . f32lct1du0 . h4dsuebilz ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 446 , ( const
void * ) & ( rtDW . f32lct1du0 . kyqlsdxb1f ) , sizeof ( rtDW . f32lct1du0 .
kyqlsdxb1f ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 447 , ( const void * ) & ( rtDW . mw2keyc00d . cdjbjgd1xc ) , sizeof ( rtDW
. mw2keyc00d . cdjbjgd1xc ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 448 , ( const void * ) & ( rtDW . mw2keyc00d . l0e4fwians )
, sizeof ( rtDW . mw2keyc00d . l0e4fwians ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 449 , ( const
void * ) & ( rtDW . pmc2mjfvx3 . kmvjqif1vx ) , sizeof ( rtDW . pmc2mjfvx3 .
kmvjqif1vx ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 450 , ( const void * ) & ( rtDW . pmc2mjfvx3 . leoynkr3q5 ) , sizeof ( rtDW
. pmc2mjfvx3 . leoynkr3q5 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 451 , ( const void * ) & ( rtDW . opqx3n1jiv . ihbdkradn2 )
, sizeof ( rtDW . opqx3n1jiv . ihbdkradn2 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 452 , ( const
void * ) & ( rtDW . opqx3n1jiv . kfwk41aocj ) , sizeof ( rtDW . opqx3n1jiv .
kfwk41aocj ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 453 , ( const void * ) & ( rtDW . lhl4belrft . bhhrytpig4 ) , sizeof ( rtDW
. lhl4belrft . bhhrytpig4 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 454 , ( const void * ) & ( rtDW . lhl4belrft . e5djmff4ey )
, sizeof ( rtDW . lhl4belrft . e5djmff4ey ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 455 , ( const
void * ) & ( rtDW . aomefh15n5 . j2wb0heh5r ) , sizeof ( rtDW . aomefh15n5 .
j2wb0heh5r ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 456 , ( const void * ) & ( rtDW . aomefh15n5 . inqavurpq2 ) , sizeof ( rtDW
. aomefh15n5 . inqavurpq2 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 457 , ( const void * ) & ( rtDW . hhpwfeyxv5 . ofrvdmgnuh )
, sizeof ( rtDW . hhpwfeyxv5 . ofrvdmgnuh ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 458 , ( const
void * ) & ( rtDW . hhpwfeyxv5 . jq1v3dabca ) , sizeof ( rtDW . hhpwfeyxv5 .
jq1v3dabca ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 459 , ( const void * ) & ( rtDW . mr4jil2nb0 . dxojn2xddw ) , sizeof ( rtDW
. mr4jil2nb0 . dxojn2xddw ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 460 , ( const void * ) & ( rtDW . mr4jil2nb0 . bko3b1m5jh )
, sizeof ( rtDW . mr4jil2nb0 . bko3b1m5jh ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 461 , ( const
void * ) & ( rtDW . mtb1g0er0c . arfpsuibu4 ) , sizeof ( rtDW . mtb1g0er0c .
arfpsuibu4 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 462 , ( const void * ) & ( rtDW . mtb1g0er0c . gzbdyuemgc ) , sizeof ( rtDW
. mtb1g0er0c . gzbdyuemgc ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 463 , ( const void * ) & ( rtDW . logcpemxnl . d0r4pg3qpe )
, sizeof ( rtDW . logcpemxnl . d0r4pg3qpe ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 464 , ( const
void * ) & ( rtDW . logcpemxnl . mpmtoteyyz ) , sizeof ( rtDW . logcpemxnl .
mpmtoteyyz ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 465 , ( const void * ) & ( rtDW . fmiwt01ncc . o2cwobb3pj ) , sizeof ( rtDW
. fmiwt01ncc . o2cwobb3pj ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 466 , ( const void * ) & ( rtDW . fmiwt01ncc . om1xuzw1eo )
, sizeof ( rtDW . fmiwt01ncc . om1xuzw1eo ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 467 , ( const
void * ) & ( rtDW . a5ydisma0n . ak5b20glzq ) , sizeof ( rtDW . a5ydisma0n .
ak5b20glzq ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 468 , ( const void * ) & ( rtDW . a5ydisma0n . eq21cdu2ve ) , sizeof ( rtDW
. a5ydisma0n . eq21cdu2ve ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 469 , ( const void * ) & ( rtDW . cp2x5swpim . ottkqopm4f )
, sizeof ( rtDW . cp2x5swpim . ottkqopm4f ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 470 , ( const
void * ) & ( rtDW . cp2x5swpim . eohabhj4xn ) , sizeof ( rtDW . cp2x5swpim .
eohabhj4xn ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 471 , ( const void * ) & ( rtDW . pg2gn3izhv . e4ft35rk43 ) , sizeof ( rtDW
. pg2gn3izhv . e4ft35rk43 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 472 , ( const void * ) & ( rtDW . pg2gn3izhv . dess21gzas )
, sizeof ( rtDW . pg2gn3izhv . dess21gzas ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 473 , ( const
void * ) & ( rtDW . li4w4j22ee . iua2aul0k5 ) , sizeof ( rtDW . li4w4j22ee .
iua2aul0k5 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 474 , ( const void * ) & ( rtDW . li4w4j22ee . bzq3ui1czr ) , sizeof ( rtDW
. li4w4j22ee . bzq3ui1czr ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 475 , ( const void * ) & ( rtDW . c0cv1fecmf . kj0js5y43a )
, sizeof ( rtDW . c0cv1fecmf . kj0js5y43a ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 476 , ( const
void * ) & ( rtDW . c0cv1fecmf . dj53101tjo ) , sizeof ( rtDW . c0cv1fecmf .
dj53101tjo ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 477 , ( const void * ) & ( rtDW . dwkrhy1adj . abs01yeupq ) , sizeof ( rtDW
. dwkrhy1adj . abs01yeupq ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 478 , ( const void * ) & ( rtDW . dwkrhy1adj . llq5zg0hho )
, sizeof ( rtDW . dwkrhy1adj . llq5zg0hho ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 479 , ( const
void * ) & ( rtDW . kiv2ffdk2i . h4dsuebilz ) , sizeof ( rtDW . kiv2ffdk2i .
h4dsuebilz ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 480 , ( const void * ) & ( rtDW . kiv2ffdk2i . kyqlsdxb1f ) , sizeof ( rtDW
. kiv2ffdk2i . kyqlsdxb1f ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 481 , ( const void * ) & ( rtDW . o44pc0z3gt . cdjbjgd1xc )
, sizeof ( rtDW . o44pc0z3gt . cdjbjgd1xc ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 482 , ( const
void * ) & ( rtDW . o44pc0z3gt . l0e4fwians ) , sizeof ( rtDW . o44pc0z3gt .
l0e4fwians ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 483 , ( const void * ) & ( rtDW . olew5caigs . kmvjqif1vx ) , sizeof ( rtDW
. olew5caigs . kmvjqif1vx ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 484 , ( const void * ) & ( rtDW . olew5caigs . leoynkr3q5 )
, sizeof ( rtDW . olew5caigs . leoynkr3q5 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 485 , ( const
void * ) & ( rtDW . edsrfmi5oc . ihbdkradn2 ) , sizeof ( rtDW . edsrfmi5oc .
ihbdkradn2 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 486 , ( const void * ) & ( rtDW . edsrfmi5oc . kfwk41aocj ) , sizeof ( rtDW
. edsrfmi5oc . kfwk41aocj ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 487 , ( const void * ) & ( rtDW . dq1vaupevs . bhhrytpig4 )
, sizeof ( rtDW . dq1vaupevs . bhhrytpig4 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 488 , ( const
void * ) & ( rtDW . dq1vaupevs . e5djmff4ey ) , sizeof ( rtDW . dq1vaupevs .
e5djmff4ey ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 489 , ( const void * ) & ( rtDW . gt31hnr3lf . j2wb0heh5r ) , sizeof ( rtDW
. gt31hnr3lf . j2wb0heh5r ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 490 , ( const void * ) & ( rtDW . gt31hnr3lf . inqavurpq2 )
, sizeof ( rtDW . gt31hnr3lf . inqavurpq2 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 491 , ( const
void * ) & ( rtDW . ob2fx4wpxa . ofrvdmgnuh ) , sizeof ( rtDW . ob2fx4wpxa .
ofrvdmgnuh ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 492 , ( const void * ) & ( rtDW . ob2fx4wpxa . jq1v3dabca ) , sizeof ( rtDW
. ob2fx4wpxa . jq1v3dabca ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 493 , ( const void * ) & ( rtDW . o3fupwkw3j . dxojn2xddw )
, sizeof ( rtDW . o3fupwkw3j . dxojn2xddw ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 494 , ( const
void * ) & ( rtDW . o3fupwkw3j . bko3b1m5jh ) , sizeof ( rtDW . o3fupwkw3j .
bko3b1m5jh ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 495 , ( const void * ) & ( rtDW . bu3vpkznrt . arfpsuibu4 ) , sizeof ( rtDW
. bu3vpkznrt . arfpsuibu4 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 496 , ( const void * ) & ( rtDW . bu3vpkznrt . gzbdyuemgc )
, sizeof ( rtDW . bu3vpkznrt . gzbdyuemgc ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 497 , ( const
void * ) & ( rtDW . aj5wkrbghc . d0r4pg3qpe ) , sizeof ( rtDW . aj5wkrbghc .
d0r4pg3qpe ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 498 , ( const void * ) & ( rtDW . aj5wkrbghc . mpmtoteyyz ) , sizeof ( rtDW
. aj5wkrbghc . mpmtoteyyz ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 499 , ( const void * ) & ( rtDW . bc2ak5uvom . o2cwobb3pj )
, sizeof ( rtDW . bc2ak5uvom . o2cwobb3pj ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 500 , ( const
void * ) & ( rtDW . bc2ak5uvom . om1xuzw1eo ) , sizeof ( rtDW . bc2ak5uvom .
om1xuzw1eo ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 501 , ( const void * ) & ( rtDW . dticnm5yh1 . ak5b20glzq ) , sizeof ( rtDW
. dticnm5yh1 . ak5b20glzq ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 502 , ( const void * ) & ( rtDW . dticnm5yh1 . eq21cdu2ve )
, sizeof ( rtDW . dticnm5yh1 . eq21cdu2ve ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 503 , ( const
void * ) & ( rtDW . gegc3wkr22 . ottkqopm4f ) , sizeof ( rtDW . gegc3wkr22 .
ottkqopm4f ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 504 , ( const void * ) & ( rtDW . gegc3wkr22 . eohabhj4xn ) , sizeof ( rtDW
. gegc3wkr22 . eohabhj4xn ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 505 , ( const void * ) & ( rtDW . okqcrlylqk . e4ft35rk43 )
, sizeof ( rtDW . okqcrlylqk . e4ft35rk43 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 506 , ( const
void * ) & ( rtDW . okqcrlylqk . dess21gzas ) , sizeof ( rtDW . okqcrlylqk .
dess21gzas ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 507 , ( const void * ) & ( rtDW . dud531lchs . iua2aul0k5 ) , sizeof ( rtDW
. dud531lchs . iua2aul0k5 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 508 , ( const void * ) & ( rtDW . dud531lchs . bzq3ui1czr )
, sizeof ( rtDW . dud531lchs . bzq3ui1czr ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 509 , ( const
void * ) & ( rtDW . k1pxlisolz . kj0js5y43a ) , sizeof ( rtDW . k1pxlisolz .
kj0js5y43a ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 510 , ( const void * ) & ( rtDW . k1pxlisolz . dj53101tjo ) , sizeof ( rtDW
. k1pxlisolz . dj53101tjo ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 511 , ( const void * ) & ( rtDW . gmghl42rva . abs01yeupq )
, sizeof ( rtDW . gmghl42rva . abs01yeupq ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 512 , ( const
void * ) & ( rtDW . gmghl42rva . llq5zg0hho ) , sizeof ( rtDW . gmghl42rva .
llq5zg0hho ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 513 , ( const void * ) & ( rtDW . gkwxar31g1 . h4dsuebilz ) , sizeof ( rtDW
. gkwxar31g1 . h4dsuebilz ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 514 , ( const void * ) & ( rtDW . gkwxar31g1 . kyqlsdxb1f )
, sizeof ( rtDW . gkwxar31g1 . kyqlsdxb1f ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 515 , ( const
void * ) & ( rtDW . p2dpdzhqcw . cdjbjgd1xc ) , sizeof ( rtDW . p2dpdzhqcw .
cdjbjgd1xc ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 516 , ( const void * ) & ( rtDW . p2dpdzhqcw . l0e4fwians ) , sizeof ( rtDW
. p2dpdzhqcw . l0e4fwians ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 517 , ( const void * ) & ( rtDW . pyfhcpopnq . kmvjqif1vx )
, sizeof ( rtDW . pyfhcpopnq . kmvjqif1vx ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 518 , ( const
void * ) & ( rtDW . pyfhcpopnq . leoynkr3q5 ) , sizeof ( rtDW . pyfhcpopnq .
leoynkr3q5 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 519 , ( const void * ) & ( rtDW . lcttqdmfq0 . ihbdkradn2 ) , sizeof ( rtDW
. lcttqdmfq0 . ihbdkradn2 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 520 , ( const void * ) & ( rtDW . lcttqdmfq0 . kfwk41aocj )
, sizeof ( rtDW . lcttqdmfq0 . kfwk41aocj ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 521 , ( const
void * ) & ( rtDW . dax5mxpt1x . bhhrytpig4 ) , sizeof ( rtDW . dax5mxpt1x .
bhhrytpig4 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 522 , ( const void * ) & ( rtDW . dax5mxpt1x . e5djmff4ey ) , sizeof ( rtDW
. dax5mxpt1x . e5djmff4ey ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 523 , ( const void * ) & ( rtDW . bmgxswof1n . j2wb0heh5r )
, sizeof ( rtDW . bmgxswof1n . j2wb0heh5r ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 524 , ( const
void * ) & ( rtDW . bmgxswof1n . inqavurpq2 ) , sizeof ( rtDW . bmgxswof1n .
inqavurpq2 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 525 , ( const void * ) & ( rtDW . c4ex142obk . ofrvdmgnuh ) , sizeof ( rtDW
. c4ex142obk . ofrvdmgnuh ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 526 , ( const void * ) & ( rtDW . c4ex142obk . jq1v3dabca )
, sizeof ( rtDW . c4ex142obk . jq1v3dabca ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 527 , ( const
void * ) & ( rtDW . jqkgyvk5wj . dxojn2xddw ) , sizeof ( rtDW . jqkgyvk5wj .
dxojn2xddw ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 528 , ( const void * ) & ( rtDW . jqkgyvk5wj . bko3b1m5jh ) , sizeof ( rtDW
. jqkgyvk5wj . bko3b1m5jh ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 529 , ( const void * ) & ( rtDW . pr5yb11xg2 . arfpsuibu4 )
, sizeof ( rtDW . pr5yb11xg2 . arfpsuibu4 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 530 , ( const
void * ) & ( rtDW . pr5yb11xg2 . gzbdyuemgc ) , sizeof ( rtDW . pr5yb11xg2 .
gzbdyuemgc ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 531 , ( const void * ) & ( rtDW . e0yth1yr5j . d0r4pg3qpe ) , sizeof ( rtDW
. e0yth1yr5j . d0r4pg3qpe ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 532 , ( const void * ) & ( rtDW . e0yth1yr5j . mpmtoteyyz )
, sizeof ( rtDW . e0yth1yr5j . mpmtoteyyz ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 533 , ( const
void * ) & ( rtDW . depkfxt3dl . o2cwobb3pj ) , sizeof ( rtDW . depkfxt3dl .
o2cwobb3pj ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 534 , ( const void * ) & ( rtDW . depkfxt3dl . om1xuzw1eo ) , sizeof ( rtDW
. depkfxt3dl . om1xuzw1eo ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 535 , ( const void * ) & ( rtDW . nljvbf4yun . ak5b20glzq )
, sizeof ( rtDW . nljvbf4yun . ak5b20glzq ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 536 , ( const
void * ) & ( rtDW . nljvbf4yun . eq21cdu2ve ) , sizeof ( rtDW . nljvbf4yun .
eq21cdu2ve ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 537 , ( const void * ) & ( rtDW . liocd5kn1l . ottkqopm4f ) , sizeof ( rtDW
. liocd5kn1l . ottkqopm4f ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 538 , ( const void * ) & ( rtDW . liocd5kn1l . eohabhj4xn )
, sizeof ( rtDW . liocd5kn1l . eohabhj4xn ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 539 , ( const
void * ) & ( rtDW . crqoduzoa4 . e4ft35rk43 ) , sizeof ( rtDW . crqoduzoa4 .
e4ft35rk43 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 540 , ( const void * ) & ( rtDW . crqoduzoa4 . dess21gzas ) , sizeof ( rtDW
. crqoduzoa4 . dess21gzas ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 541 , ( const void * ) & ( rtDW . buqfyhw4zg . iua2aul0k5 )
, sizeof ( rtDW . buqfyhw4zg . iua2aul0k5 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 542 , ( const
void * ) & ( rtDW . buqfyhw4zg . bzq3ui1czr ) , sizeof ( rtDW . buqfyhw4zg .
bzq3ui1czr ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 543 , ( const void * ) & ( rtDW . fpel54lr1q . kj0js5y43a ) , sizeof ( rtDW
. fpel54lr1q . kj0js5y43a ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 544 , ( const void * ) & ( rtDW . fpel54lr1q . dj53101tjo )
, sizeof ( rtDW . fpel54lr1q . dj53101tjo ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 545 , ( const
void * ) & ( rtDW . d3o4x0ovlb . abs01yeupq ) , sizeof ( rtDW . d3o4x0ovlb .
abs01yeupq ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 546 , ( const void * ) & ( rtDW . d3o4x0ovlb . llq5zg0hho ) , sizeof ( rtDW
. d3o4x0ovlb . llq5zg0hho ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 547 , ( const void * ) & ( rtDW . dhqnhtbmwa . h4dsuebilz )
, sizeof ( rtDW . dhqnhtbmwa . h4dsuebilz ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 548 , ( const
void * ) & ( rtDW . dhqnhtbmwa . kyqlsdxb1f ) , sizeof ( rtDW . dhqnhtbmwa .
kyqlsdxb1f ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 549 , ( const void * ) & ( rtDW . a1r25vmwrh . cdjbjgd1xc ) , sizeof ( rtDW
. a1r25vmwrh . cdjbjgd1xc ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 550 , ( const void * ) & ( rtDW . a1r25vmwrh . l0e4fwians )
, sizeof ( rtDW . a1r25vmwrh . l0e4fwians ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 551 , ( const
void * ) & ( rtDW . cit10epw2d . kmvjqif1vx ) , sizeof ( rtDW . cit10epw2d .
kmvjqif1vx ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 552 , ( const void * ) & ( rtDW . cit10epw2d . leoynkr3q5 ) , sizeof ( rtDW
. cit10epw2d . leoynkr3q5 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 553 , ( const void * ) & ( rtDW . pnkexv004t . ihbdkradn2 )
, sizeof ( rtDW . pnkexv004t . ihbdkradn2 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 554 , ( const
void * ) & ( rtDW . pnkexv004t . kfwk41aocj ) , sizeof ( rtDW . pnkexv004t .
kfwk41aocj ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 555 , ( const void * ) & ( rtDW . kkcnk3nues . bhhrytpig4 ) , sizeof ( rtDW
. kkcnk3nues . bhhrytpig4 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 556 , ( const void * ) & ( rtDW . kkcnk3nues . e5djmff4ey )
, sizeof ( rtDW . kkcnk3nues . e5djmff4ey ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 557 , ( const
void * ) & ( rtDW . il5ne4vyn3 . j2wb0heh5r ) , sizeof ( rtDW . il5ne4vyn3 .
j2wb0heh5r ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 558 , ( const void * ) & ( rtDW . il5ne4vyn3 . inqavurpq2 ) , sizeof ( rtDW
. il5ne4vyn3 . inqavurpq2 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 559 , ( const void * ) & ( rtDW . fxuvuc5ilx3 . ofrvdmgnuh )
, sizeof ( rtDW . fxuvuc5ilx3 . ofrvdmgnuh ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 560 , ( const
void * ) & ( rtDW . fxuvuc5ilx3 . jq1v3dabca ) , sizeof ( rtDW . fxuvuc5ilx3
. jq1v3dabca ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 561 , ( const void * ) & ( rtDW . onrxopzil04 . dxojn2xddw ) , sizeof (
rtDW . onrxopzil04 . dxojn2xddw ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 562 , ( const
void * ) & ( rtDW . onrxopzil04 . bko3b1m5jh ) , sizeof ( rtDW . onrxopzil04
. bko3b1m5jh ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 563 , ( const void * ) & ( rtDW . dlafdnj3fgi . arfpsuibu4 ) , sizeof (
rtDW . dlafdnj3fgi . arfpsuibu4 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 564 , ( const
void * ) & ( rtDW . dlafdnj3fgi . gzbdyuemgc ) , sizeof ( rtDW . dlafdnj3fgi
. gzbdyuemgc ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 565 , ( const void * ) & ( rtDW . m1qiz2ekayi . d0r4pg3qpe ) , sizeof (
rtDW . m1qiz2ekayi . d0r4pg3qpe ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 566 , ( const
void * ) & ( rtDW . m1qiz2ekayi . mpmtoteyyz ) , sizeof ( rtDW . m1qiz2ekayi
. mpmtoteyyz ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 567 , ( const void * ) & ( rtDW . j11vdnbc5b2 . o2cwobb3pj ) , sizeof (
rtDW . j11vdnbc5b2 . o2cwobb3pj ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 568 , ( const
void * ) & ( rtDW . j11vdnbc5b2 . om1xuzw1eo ) , sizeof ( rtDW . j11vdnbc5b2
. om1xuzw1eo ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 569 , ( const void * ) & ( rtDW . f2rydg4dp1k . ak5b20glzq ) , sizeof (
rtDW . f2rydg4dp1k . ak5b20glzq ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 570 , ( const
void * ) & ( rtDW . f2rydg4dp1k . eq21cdu2ve ) , sizeof ( rtDW . f2rydg4dp1k
. eq21cdu2ve ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 571 , ( const void * ) & ( rtDW . bstd1u2cpob . ottkqopm4f ) , sizeof (
rtDW . bstd1u2cpob . ottkqopm4f ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 572 , ( const
void * ) & ( rtDW . bstd1u2cpob . eohabhj4xn ) , sizeof ( rtDW . bstd1u2cpob
. eohabhj4xn ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 573 , ( const void * ) & ( rtDW . aazmv33tcmo . e4ft35rk43 ) , sizeof (
rtDW . aazmv33tcmo . e4ft35rk43 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 574 , ( const
void * ) & ( rtDW . aazmv33tcmo . dess21gzas ) , sizeof ( rtDW . aazmv33tcmo
. dess21gzas ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 575 , ( const void * ) & ( rtDW . mtt1ayedixs . iua2aul0k5 ) , sizeof (
rtDW . mtt1ayedixs . iua2aul0k5 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 576 , ( const
void * ) & ( rtDW . mtt1ayedixs . bzq3ui1czr ) , sizeof ( rtDW . mtt1ayedixs
. bzq3ui1czr ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 577 , ( const void * ) & ( rtDW . jtd3j4qmtj3 . kj0js5y43a ) , sizeof (
rtDW . jtd3j4qmtj3 . kj0js5y43a ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 578 , ( const
void * ) & ( rtDW . jtd3j4qmtj3 . dj53101tjo ) , sizeof ( rtDW . jtd3j4qmtj3
. dj53101tjo ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 579 , ( const void * ) & ( rtDW . hx2bxym1a4g . abs01yeupq ) , sizeof (
rtDW . hx2bxym1a4g . abs01yeupq ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 580 , ( const
void * ) & ( rtDW . hx2bxym1a4g . llq5zg0hho ) , sizeof ( rtDW . hx2bxym1a4g
. llq5zg0hho ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 581 , ( const void * ) & ( rtDW . fzp5yrcmsta . h4dsuebilz ) , sizeof (
rtDW . fzp5yrcmsta . h4dsuebilz ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 582 , ( const
void * ) & ( rtDW . fzp5yrcmsta . kyqlsdxb1f ) , sizeof ( rtDW . fzp5yrcmsta
. kyqlsdxb1f ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 583 , ( const void * ) & ( rtDW . k33a52bgwif . cdjbjgd1xc ) , sizeof (
rtDW . k33a52bgwif . cdjbjgd1xc ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 584 , ( const
void * ) & ( rtDW . k33a52bgwif . l0e4fwians ) , sizeof ( rtDW . k33a52bgwif
. l0e4fwians ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 585 , ( const void * ) & ( rtDW . po54rt51rvx . kmvjqif1vx ) , sizeof (
rtDW . po54rt51rvx . kmvjqif1vx ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 586 , ( const
void * ) & ( rtDW . po54rt51rvx . leoynkr3q5 ) , sizeof ( rtDW . po54rt51rvx
. leoynkr3q5 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 587 , ( const void * ) & ( rtDW . mggcxvqcxnx . ihbdkradn2 ) , sizeof (
rtDW . mggcxvqcxnx . ihbdkradn2 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 588 , ( const
void * ) & ( rtDW . mggcxvqcxnx . kfwk41aocj ) , sizeof ( rtDW . mggcxvqcxnx
. kfwk41aocj ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 589 , ( const void * ) & ( rtDW . nt3t3nwbzjn . bhhrytpig4 ) , sizeof (
rtDW . nt3t3nwbzjn . bhhrytpig4 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 590 , ( const
void * ) & ( rtDW . nt3t3nwbzjn . e5djmff4ey ) , sizeof ( rtDW . nt3t3nwbzjn
. e5djmff4ey ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 591 , ( const void * ) & ( rtDW . kum1vfui1c3 . j2wb0heh5r ) , sizeof (
rtDW . kum1vfui1c3 . j2wb0heh5r ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 592 , ( const
void * ) & ( rtDW . kum1vfui1c3 . inqavurpq2 ) , sizeof ( rtDW . kum1vfui1c3
. inqavurpq2 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 593 , ( const void * ) & ( rtDW . p1cpbmtwa2 . dzegpmyi00 ) , sizeof (
rtDW . p1cpbmtwa2 . dzegpmyi00 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 594 , ( const
void * ) & ( rtDW . p1cpbmtwa2 . aati4n1exl ) , sizeof ( rtDW . p1cpbmtwa2 .
aati4n1exl ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 595 , ( const void * ) & ( rtDW . dk52awvy35 . dzegpmyi00 ) , sizeof ( rtDW
. dk52awvy35 . dzegpmyi00 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 596 , ( const void * ) & ( rtDW . dk52awvy35 . aati4n1exl )
, sizeof ( rtDW . dk52awvy35 . aati4n1exl ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 597 , ( const
void * ) & ( rtDW . faha5qigiv5 . dzegpmyi00 ) , sizeof ( rtDW . faha5qigiv5
. dzegpmyi00 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 598 , ( const void * ) & ( rtDW . faha5qigiv5 . aati4n1exl ) , sizeof (
rtDW . faha5qigiv5 . aati4n1exl ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 599 , ( const
void * ) & ( rtDW . itndmcozqm . akkfyrovb0 ) , sizeof ( rtDW . itndmcozqm .
akkfyrovb0 ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 600 , ( const void * ) & ( rtDW . itndmcozqm . oozywslmnt ) , sizeof ( rtDW
. itndmcozqm . oozywslmnt ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 601 , ( const void * ) & ( rtDW . hv3vc22vuw . pf0eocqu32 )
, sizeof ( rtDW . hv3vc22vuw . pf0eocqu32 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 602 , ( const
void * ) & ( rtDW . hv3vc22vuw . ptznzx2qmi ) , sizeof ( rtDW . hv3vc22vuw .
ptznzx2qmi ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 603 , ( const void * ) & ( rtDW . hv3vc22vuw . dsczn1cz1s ) , sizeof ( rtDW
. hv3vc22vuw . dsczn1cz1s ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 604 , ( const void * ) & ( rtDW . hv3vc22vuw . pqjrcy3mks )
, sizeof ( rtDW . hv3vc22vuw . pqjrcy3mks ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 605 , ( const
void * ) & ( rtDW . ndmardmusd . lvbeuc3sjb ) , sizeof ( rtDW . ndmardmusd .
lvbeuc3sjb ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 606 , ( const void * ) & ( rtDW . ndmardmusd . mr2pswpsef ) , sizeof ( rtDW
. ndmardmusd . mr2pswpsef ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 607 , ( const void * ) & ( rtDW . ndmardmusd . dpphodfkey )
, sizeof ( rtDW . ndmardmusd . dpphodfkey ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 608 , ( const
void * ) & ( rtDW . ndmardmusd . c3ky5ehk3m ) , sizeof ( rtDW . ndmardmusd .
c3ky5ehk3m ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 609 , ( const void * ) & ( rtDW . edawel13bx . jr12xlibrl ) , sizeof ( rtDW
. edawel13bx . jr12xlibrl ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 610 , ( const void * ) & ( rtDW . edawel13bx . gm2p0wwtvc )
, sizeof ( rtDW . edawel13bx . gm2p0wwtvc ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 611 , ( const
void * ) & ( rtDW . edawel13bx . mtvokfg2km ) , sizeof ( rtDW . edawel13bx .
mtvokfg2km ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 612 , ( const void * ) & ( rtDW . edawel13bx . dgqdsbadmt ) , sizeof ( rtDW
. edawel13bx . dgqdsbadmt ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 613 , ( const void * ) & ( rtDW . dcguzoxh2sb . akkfyrovb0 )
, sizeof ( rtDW . dcguzoxh2sb . akkfyrovb0 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 614 , ( const
void * ) & ( rtDW . dcguzoxh2sb . oozywslmnt ) , sizeof ( rtDW . dcguzoxh2sb
. oozywslmnt ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData ,
0 , 615 , ( const void * ) & ( rtDW . baulvd1vdb . pf0eocqu32 ) , sizeof (
rtDW . baulvd1vdb . pf0eocqu32 ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 616 , ( const
void * ) & ( rtDW . baulvd1vdb . ptznzx2qmi ) , sizeof ( rtDW . baulvd1vdb .
ptznzx2qmi ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 617 , ( const void * ) & ( rtDW . baulvd1vdb . dsczn1cz1s ) , sizeof ( rtDW
. baulvd1vdb . dsczn1cz1s ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 618 , ( const void * ) & ( rtDW . baulvd1vdb . pqjrcy3mks )
, sizeof ( rtDW . baulvd1vdb . pqjrcy3mks ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 619 , ( const
void * ) & ( rtDW . cmiciuw2cg . lvbeuc3sjb ) , sizeof ( rtDW . cmiciuw2cg .
lvbeuc3sjb ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 620 , ( const void * ) & ( rtDW . cmiciuw2cg . mr2pswpsef ) , sizeof ( rtDW
. cmiciuw2cg . mr2pswpsef ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 621 , ( const void * ) & ( rtDW . cmiciuw2cg . dpphodfkey )
, sizeof ( rtDW . cmiciuw2cg . dpphodfkey ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 622 , ( const
void * ) & ( rtDW . cmiciuw2cg . c3ky5ehk3m ) , sizeof ( rtDW . cmiciuw2cg .
c3ky5ehk3m ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 623 , ( const void * ) & ( rtDW . p0vbpdtq52 . jr12xlibrl ) , sizeof ( rtDW
. p0vbpdtq52 . jr12xlibrl ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray
( rtdwData , 0 , 624 , ( const void * ) & ( rtDW . p0vbpdtq52 . gm2p0wwtvc )
, sizeof ( rtDW . p0vbpdtq52 . gm2p0wwtvc ) ) ;
mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0 , 625 , ( const
void * ) & ( rtDW . p0vbpdtq52 . mtvokfg2km ) , sizeof ( rtDW . p0vbpdtq52 .
mtvokfg2km ) ) ; mr_DUALportRAMinterface_v3_cacheDataAsMxArray ( rtdwData , 0
, 626 , ( const void * ) & ( rtDW . p0vbpdtq52 . dgqdsbadmt ) , sizeof ( rtDW
. p0vbpdtq52 . dgqdsbadmt ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData
) ; } return ssDW ; } void mr_DUALportRAMinterface_v3_SetDWork ( const
mxArray * ssDW ) { ( void ) ssDW ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtB ) ,
ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bpbbz5llcl ) , rtdwData , 0 , 0 , sizeof ( rtDW . bpbbz5llcl ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
iry4sotwjo ) , rtdwData , 0 , 1 , sizeof ( rtDW . iry4sotwjo ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
e1hogwivrq ) , rtdwData , 0 , 2 , sizeof ( rtDW . e1hogwivrq ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gxmahoppaw ) , rtdwData , 0 , 3 , sizeof ( rtDW . gxmahoppaw ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hez3ezrpq2 ) , rtdwData , 0 , 4 , sizeof ( rtDW . hez3ezrpq2 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ea4uoiztke ) , rtdwData , 0 , 5 , sizeof ( rtDW . ea4uoiztke ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
g5332d55t5 ) , rtdwData , 0 , 6 , sizeof ( rtDW . g5332d55t5 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
msaff0w3sl ) , rtdwData , 0 , 7 , sizeof ( rtDW . msaff0w3sl ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mmbeeyt2c3 ) , rtdwData , 0 , 8 , sizeof ( rtDW . mmbeeyt2c3 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ghw5kalbtu ) , rtdwData , 0 , 9 , sizeof ( rtDW . ghw5kalbtu ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pb1zjp11ah ) , rtdwData , 0 , 10 , sizeof ( rtDW . pb1zjp11ah ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cjaep5120g ) , rtdwData , 0 , 11 , sizeof ( rtDW . cjaep5120g ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ermftxd5xs ) , rtdwData , 0 , 12 , sizeof ( rtDW . ermftxd5xs ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kk3vqau5j4 ) , rtdwData , 0 , 13 , sizeof ( rtDW . kk3vqau5j4 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cczfdi3ydg ) , rtdwData , 0 , 14 , sizeof ( rtDW . cczfdi3ydg ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
j3spvmunzs ) , rtdwData , 0 , 15 , sizeof ( rtDW . j3spvmunzs ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
huil4csvle ) , rtdwData , 0 , 16 , sizeof ( rtDW . huil4csvle ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
o2s0qk524e ) , rtdwData , 0 , 17 , sizeof ( rtDW . o2s0qk524e ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bujt1u5ssb ) , rtdwData , 0 , 18 , sizeof ( rtDW . bujt1u5ssb ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ch3ulmwkxf ) , rtdwData , 0 , 19 , sizeof ( rtDW . ch3ulmwkxf ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
npnmarbxwp ) , rtdwData , 0 , 20 , sizeof ( rtDW . npnmarbxwp ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
luidyjwywm ) , rtdwData , 0 , 21 , sizeof ( rtDW . luidyjwywm ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nct4dwsy42 ) , rtdwData , 0 , 22 , sizeof ( rtDW . nct4dwsy42 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
m21yi3xe0r ) , rtdwData , 0 , 23 , sizeof ( rtDW . m21yi3xe0r ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
efb0llahxe ) , rtdwData , 0 , 24 , sizeof ( rtDW . efb0llahxe ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cwc30hkp0p ) , rtdwData , 0 , 25 , sizeof ( rtDW . cwc30hkp0p ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kgybnswm2h ) , rtdwData , 0 , 26 , sizeof ( rtDW . kgybnswm2h ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nzmtxoifv5 ) , rtdwData , 0 , 27 , sizeof ( rtDW . nzmtxoifv5 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mcbewak1r4 ) , rtdwData , 0 , 28 , sizeof ( rtDW . mcbewak1r4 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hzvbnr4bgd ) , rtdwData , 0 , 29 , sizeof ( rtDW . hzvbnr4bgd ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
e0hsphy30b ) , rtdwData , 0 , 30 , sizeof ( rtDW . e0hsphy30b ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pjspex5iux ) , rtdwData , 0 , 31 , sizeof ( rtDW . pjspex5iux ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ceruf15djt ) , rtdwData , 0 , 32 , sizeof ( rtDW . ceruf15djt ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nwj4wrfqti ) , rtdwData , 0 , 33 , sizeof ( rtDW . nwj4wrfqti ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
etvgfdreuz ) , rtdwData , 0 , 34 , sizeof ( rtDW . etvgfdreuz ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
faabslxst2 ) , rtdwData , 0 , 35 , sizeof ( rtDW . faabslxst2 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gumtab5fnv ) , rtdwData , 0 , 36 , sizeof ( rtDW . gumtab5fnv ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
d3nvmjf1vd ) , rtdwData , 0 , 37 , sizeof ( rtDW . d3nvmjf1vd ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
oruuzh4bzs ) , rtdwData , 0 , 38 , sizeof ( rtDW . oruuzh4bzs ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ew53tl52et ) , rtdwData , 0 , 39 , sizeof ( rtDW . ew53tl52et ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
afmamtdg1h ) , rtdwData , 0 , 40 , sizeof ( rtDW . afmamtdg1h ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kmhibglhil ) , rtdwData , 0 , 41 , sizeof ( rtDW . kmhibglhil ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
c0mvgpjrpg ) , rtdwData , 0 , 42 , sizeof ( rtDW . c0mvgpjrpg ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
oc3xb3ueqi ) , rtdwData , 0 , 43 , sizeof ( rtDW . oc3xb3ueqi ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ggpm4i3hqv ) , rtdwData , 0 , 44 , sizeof ( rtDW . ggpm4i3hqv ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pgw0quxym3 ) , rtdwData , 0 , 45 , sizeof ( rtDW . pgw0quxym3 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
b3tarjjh2r ) , rtdwData , 0 , 46 , sizeof ( rtDW . b3tarjjh2r ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bjsvnxykzn ) , rtdwData , 0 , 47 , sizeof ( rtDW . bjsvnxykzn ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fn03ogv30b ) , rtdwData , 0 , 48 , sizeof ( rtDW . fn03ogv30b ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
o0tgjzszlx ) , rtdwData , 0 , 49 , sizeof ( rtDW . o0tgjzszlx ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jk0pdacxs0 ) , rtdwData , 0 , 50 , sizeof ( rtDW . jk0pdacxs0 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hkv3n4pgdt ) , rtdwData , 0 , 51 , sizeof ( rtDW . hkv3n4pgdt ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
msyvbfgmjp ) , rtdwData , 0 , 52 , sizeof ( rtDW . msyvbfgmjp ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
i3gumoeyz1 ) , rtdwData , 0 , 53 , sizeof ( rtDW . i3gumoeyz1 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gxbtoq4uog ) , rtdwData , 0 , 54 , sizeof ( rtDW . gxbtoq4uog ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
aqfzu2hilm ) , rtdwData , 0 , 55 , sizeof ( rtDW . aqfzu2hilm ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ceatu2c3ih ) , rtdwData , 0 , 56 , sizeof ( rtDW . ceatu2c3ih ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mzlkr3j3p5 ) , rtdwData , 0 , 57 , sizeof ( rtDW . mzlkr3j3p5 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hr0f0pllzb ) , rtdwData , 0 , 58 , sizeof ( rtDW . hr0f0pllzb ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lj4qjxl3d5 ) , rtdwData , 0 , 59 , sizeof ( rtDW . lj4qjxl3d5 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fwq22fuszr ) , rtdwData , 0 , 60 , sizeof ( rtDW . fwq22fuszr ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lw2of50kxw ) , rtdwData , 0 , 61 , sizeof ( rtDW . lw2of50kxw ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lrozmwruae ) , rtdwData , 0 , 62 , sizeof ( rtDW . lrozmwruae ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
a33feioxw2 ) , rtdwData , 0 , 63 , sizeof ( rtDW . a33feioxw2 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
afrmbd0iw3 ) , rtdwData , 0 , 64 , sizeof ( rtDW . afrmbd0iw3 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
anfgrndojq ) , rtdwData , 0 , 65 , sizeof ( rtDW . anfgrndojq ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hwkvzcsfaz ) , rtdwData , 0 , 66 , sizeof ( rtDW . hwkvzcsfaz ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cuscr1mv1o ) , rtdwData , 0 , 67 , sizeof ( rtDW . cuscr1mv1o ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hi5sxdgutv ) , rtdwData , 0 , 68 , sizeof ( rtDW . hi5sxdgutv ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
g3mwssejug ) , rtdwData , 0 , 69 , sizeof ( rtDW . g3mwssejug ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ohb2remyso ) , rtdwData , 0 , 70 , sizeof ( rtDW . ohb2remyso ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nnehvfm43x ) , rtdwData , 0 , 71 , sizeof ( rtDW . nnehvfm43x ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lqy3n4vuo3 ) , rtdwData , 0 , 72 , sizeof ( rtDW . lqy3n4vuo3 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
noj5hcq43l ) , rtdwData , 0 , 73 , sizeof ( rtDW . noj5hcq43l ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
h4kqpzy0bk ) , rtdwData , 0 , 74 , sizeof ( rtDW . h4kqpzy0bk ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ehukj5uhzp ) , rtdwData , 0 , 75 , sizeof ( rtDW . ehukj5uhzp ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lma0feztag ) , rtdwData , 0 , 76 , sizeof ( rtDW . lma0feztag ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
balpcok03t ) , rtdwData , 0 , 77 , sizeof ( rtDW . balpcok03t ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kbtqs1lj34 ) , rtdwData , 0 , 78 , sizeof ( rtDW . kbtqs1lj34 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pdm2ofpuvs ) , rtdwData , 0 , 79 , sizeof ( rtDW . pdm2ofpuvs ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jgcfuyvz2d ) , rtdwData , 0 , 80 , sizeof ( rtDW . jgcfuyvz2d ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
p1ngo54os1 ) , rtdwData , 0 , 81 , sizeof ( rtDW . p1ngo54os1 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pru2133ish ) , rtdwData , 0 , 82 , sizeof ( rtDW . pru2133ish ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kspt2mhisp ) , rtdwData , 0 , 83 , sizeof ( rtDW . kspt2mhisp ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kq5e4yhmjq ) , rtdwData , 0 , 84 , sizeof ( rtDW . kq5e4yhmjq ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gr0nnucbwg ) , rtdwData , 0 , 85 , sizeof ( rtDW . gr0nnucbwg ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
p12ie1kq2d ) , rtdwData , 0 , 86 , sizeof ( rtDW . p12ie1kq2d ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ksdezs50qp ) , rtdwData , 0 , 87 , sizeof ( rtDW . ksdezs50qp ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fbgth0ylvb ) , rtdwData , 0 , 88 , sizeof ( rtDW . fbgth0ylvb ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
oacqmm32n4 ) , rtdwData , 0 , 89 , sizeof ( rtDW . oacqmm32n4 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dmci5bmb3h ) , rtdwData , 0 , 90 , sizeof ( rtDW . dmci5bmb3h ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fbt5g1jmhm ) , rtdwData , 0 , 91 , sizeof ( rtDW . fbt5g1jmhm ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
g4hhato521 ) , rtdwData , 0 , 92 , sizeof ( rtDW . g4hhato521 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
iuph25q4on ) , rtdwData , 0 , 93 , sizeof ( rtDW . iuph25q4on ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
adpqvxr4pq ) , rtdwData , 0 , 94 , sizeof ( rtDW . adpqvxr4pq ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gysjg2ez2v ) , rtdwData , 0 , 95 , sizeof ( rtDW . gysjg2ez2v ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
j4xszwnett ) , rtdwData , 0 , 96 , sizeof ( rtDW . j4xszwnett ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hsn4witota ) , rtdwData , 0 , 97 , sizeof ( rtDW . hsn4witota ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
aedtwpb020 ) , rtdwData , 0 , 98 , sizeof ( rtDW . aedtwpb020 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gjyzf1p00w ) , rtdwData , 0 , 99 , sizeof ( rtDW . gjyzf1p00w ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
oeoilbr25n ) , rtdwData , 0 , 100 , sizeof ( rtDW . oeoilbr25n ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kod452jlzj ) , rtdwData , 0 , 101 , sizeof ( rtDW . kod452jlzj ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fchfg0xqd2 ) , rtdwData , 0 , 102 , sizeof ( rtDW . fchfg0xqd2 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
m1vo1ryh5y ) , rtdwData , 0 , 103 , sizeof ( rtDW . m1vo1ryh5y ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
neeztgz5mr ) , rtdwData , 0 , 104 , sizeof ( rtDW . neeztgz5mr ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ljys42kk0x ) , rtdwData , 0 , 105 , sizeof ( rtDW . ljys42kk0x ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ht4iqhimgp ) , rtdwData , 0 , 106 , sizeof ( rtDW . ht4iqhimgp ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ltvrxrfwqx ) , rtdwData , 0 , 107 , sizeof ( rtDW . ltvrxrfwqx ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jwy1yupkgd ) , rtdwData , 0 , 108 , sizeof ( rtDW . jwy1yupkgd ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
p30s42eq1u ) , rtdwData , 0 , 109 , sizeof ( rtDW . p30s42eq1u ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
d3t2v2pyhe ) , rtdwData , 0 , 110 , sizeof ( rtDW . d3t2v2pyhe ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
caj1z5lk13 ) , rtdwData , 0 , 111 , sizeof ( rtDW . caj1z5lk13 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
d5oxqf3ihc ) , rtdwData , 0 , 112 , sizeof ( rtDW . d5oxqf3ihc ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
a1uugg3z5q ) , rtdwData , 0 , 113 , sizeof ( rtDW . a1uugg3z5q ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bql2kbo1mn ) , rtdwData , 0 , 114 , sizeof ( rtDW . bql2kbo1mn ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ddstw2zt2h ) , rtdwData , 0 , 115 , sizeof ( rtDW . ddstw2zt2h ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ket4u3rbik ) , rtdwData , 0 , 116 , sizeof ( rtDW . ket4u3rbik ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kxxqdtc3fn ) , rtdwData , 0 , 117 , sizeof ( rtDW . kxxqdtc3fn ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
j2lpy04aok ) , rtdwData , 0 , 118 , sizeof ( rtDW . j2lpy04aok ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bti3xpysb3 ) , rtdwData , 0 , 119 , sizeof ( rtDW . bti3xpysb3 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jlfxz1mcjj ) , rtdwData , 0 , 120 , sizeof ( rtDW . jlfxz1mcjj ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bfiehwtxx0 ) , rtdwData , 0 , 121 , sizeof ( rtDW . bfiehwtxx0 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hedkojaly3 ) , rtdwData , 0 , 122 , sizeof ( rtDW . hedkojaly3 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cc1pquwq52 ) , rtdwData , 0 , 123 , sizeof ( rtDW . cc1pquwq52 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
oksgsz1h3g ) , rtdwData , 0 , 124 , sizeof ( rtDW . oksgsz1h3g ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ftnfscrqnz ) , rtdwData , 0 , 125 , sizeof ( rtDW . ftnfscrqnz ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
aiobhqac0s ) , rtdwData , 0 , 126 , sizeof ( rtDW . aiobhqac0s ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
izhxg5z13h ) , rtdwData , 0 , 127 , sizeof ( rtDW . izhxg5z13h ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ixn1qplhkp ) , rtdwData , 0 , 128 , sizeof ( rtDW . ixn1qplhkp ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lqzocersmx ) , rtdwData , 0 , 129 , sizeof ( rtDW . lqzocersmx ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nl3wf33p4z ) , rtdwData , 0 , 130 , sizeof ( rtDW . nl3wf33p4z ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
iqssg2wtlr ) , rtdwData , 0 , 131 , sizeof ( rtDW . iqssg2wtlr ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
losfu35ozo ) , rtdwData , 0 , 132 , sizeof ( rtDW . losfu35ozo ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gv1yczvurw ) , rtdwData , 0 , 133 , sizeof ( rtDW . gv1yczvurw ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pxkqzhdtui ) , rtdwData , 0 , 134 , sizeof ( rtDW . pxkqzhdtui ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kd2cj1lw5i ) , rtdwData , 0 , 135 , sizeof ( rtDW . kd2cj1lw5i ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jw30qsqu5r ) , rtdwData , 0 , 136 , sizeof ( rtDW . jw30qsqu5r ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mnmtds151j ) , rtdwData , 0 , 137 , sizeof ( rtDW . mnmtds151j ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gajg5igtez ) , rtdwData , 0 , 138 , sizeof ( rtDW . gajg5igtez ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kigfha511a ) , rtdwData , 0 , 139 , sizeof ( rtDW . kigfha511a ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
e4acoao20b ) , rtdwData , 0 , 140 , sizeof ( rtDW . e4acoao20b ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nnbiwtqwas ) , rtdwData , 0 , 141 , sizeof ( rtDW . nnbiwtqwas ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
m3zpcv3djg ) , rtdwData , 0 , 142 , sizeof ( rtDW . m3zpcv3djg ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mfqd1lsjjw ) , rtdwData , 0 , 143 , sizeof ( rtDW . mfqd1lsjjw ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
evli1vcywa ) , rtdwData , 0 , 144 , sizeof ( rtDW . evli1vcywa ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
a3mcja4urs ) , rtdwData , 0 , 145 , sizeof ( rtDW . a3mcja4urs ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ni0bl2pri0 ) , rtdwData , 0 , 146 , sizeof ( rtDW . ni0bl2pri0 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hepne3hpaw ) , rtdwData , 0 , 147 , sizeof ( rtDW . hepne3hpaw ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
eecce0ocvb ) , rtdwData , 0 , 148 , sizeof ( rtDW . eecce0ocvb ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nqe3ukp1lv ) , rtdwData , 0 , 149 , sizeof ( rtDW . nqe3ukp1lv ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bpt15stayd ) , rtdwData , 0 , 150 , sizeof ( rtDW . bpt15stayd ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fopsvccudd ) , rtdwData , 0 , 151 , sizeof ( rtDW . fopsvccudd ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fnmb2ixb3q ) , rtdwData , 0 , 152 , sizeof ( rtDW . fnmb2ixb3q ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jhliq0ridw ) , rtdwData , 0 , 153 , sizeof ( rtDW . jhliq0ridw ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
injgvgohva ) , rtdwData , 0 , 154 , sizeof ( rtDW . injgvgohva ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ncoe4ckqww ) , rtdwData , 0 , 155 , sizeof ( rtDW . ncoe4ckqww ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
a2uqh3n150 ) , rtdwData , 0 , 156 , sizeof ( rtDW . a2uqh3n150 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
l1cjdkruqq ) , rtdwData , 0 , 157 , sizeof ( rtDW . l1cjdkruqq ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dppgdzgj0x ) , rtdwData , 0 , 158 , sizeof ( rtDW . dppgdzgj0x ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fotv1vmuhj ) , rtdwData , 0 , 159 , sizeof ( rtDW . fotv1vmuhj ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
i5gi0zotho ) , rtdwData , 0 , 160 , sizeof ( rtDW . i5gi0zotho ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pqxstp3wgr ) , rtdwData , 0 , 161 , sizeof ( rtDW . pqxstp3wgr ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ablkijkmz5 ) , rtdwData , 0 , 162 , sizeof ( rtDW . ablkijkmz5 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kwwlxjzdoe ) , rtdwData , 0 , 163 , sizeof ( rtDW . kwwlxjzdoe ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dv5jqwdcth ) , rtdwData , 0 , 164 , sizeof ( rtDW . dv5jqwdcth ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ptf1jyuocm ) , rtdwData , 0 , 165 , sizeof ( rtDW . ptf1jyuocm ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cm2wzi1df3 ) , rtdwData , 0 , 166 , sizeof ( rtDW . cm2wzi1df3 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fw4xval30t ) , rtdwData , 0 , 167 , sizeof ( rtDW . fw4xval30t ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lqlczeokm5 ) , rtdwData , 0 , 168 , sizeof ( rtDW . lqlczeokm5 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
faksgtgdka ) , rtdwData , 0 , 169 , sizeof ( rtDW . faksgtgdka ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ipzfjakadv ) , rtdwData , 0 , 170 , sizeof ( rtDW . ipzfjakadv ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jvuxplwco4 ) , rtdwData , 0 , 171 , sizeof ( rtDW . jvuxplwco4 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gcyq4coupa ) , rtdwData , 0 , 172 , sizeof ( rtDW . gcyq4coupa ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
b4hfbet4ba ) , rtdwData , 0 , 173 , sizeof ( rtDW . b4hfbet4ba ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dfsdkk5fjk ) , rtdwData , 0 , 174 , sizeof ( rtDW . dfsdkk5fjk ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
b4ujwta3wy ) , rtdwData , 0 , 175 , sizeof ( rtDW . b4ujwta3wy ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cqvzla0ulg ) , rtdwData , 0 , 176 , sizeof ( rtDW . cqvzla0ulg ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jcvtghq3ig ) , rtdwData , 0 , 177 , sizeof ( rtDW . jcvtghq3ig ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jl34i02arl ) , rtdwData , 0 , 178 , sizeof ( rtDW . jl34i02arl ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dmbtvfs22x ) , rtdwData , 0 , 179 , sizeof ( rtDW . dmbtvfs22x ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
n2whdu3eol ) , rtdwData , 0 , 180 , sizeof ( rtDW . n2whdu3eol ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
a1421jzrsu ) , rtdwData , 0 , 181 , sizeof ( rtDW . a1421jzrsu ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gkjrmoqlie ) , rtdwData , 0 , 182 , sizeof ( rtDW . gkjrmoqlie ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dgymt0yytj ) , rtdwData , 0 , 183 , sizeof ( rtDW . dgymt0yytj ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gkp23xlorn ) , rtdwData , 0 , 184 , sizeof ( rtDW . gkp23xlorn ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hl3popemla ) , rtdwData , 0 , 185 , sizeof ( rtDW . hl3popemla ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mukf1zkhlx ) , rtdwData , 0 , 186 , sizeof ( rtDW . mukf1zkhlx ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ehzhklig5r ) , rtdwData , 0 , 187 , sizeof ( rtDW . ehzhklig5r ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
g2rlyn1hgy ) , rtdwData , 0 , 188 , sizeof ( rtDW . g2rlyn1hgy ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cmvo3isroh ) , rtdwData , 0 , 189 , sizeof ( rtDW . cmvo3isroh ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nc0waz21t1 ) , rtdwData , 0 , 190 , sizeof ( rtDW . nc0waz21t1 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
c0pmhbmlvb ) , rtdwData , 0 , 191 , sizeof ( rtDW . c0pmhbmlvb ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fx4qkmoomx ) , rtdwData , 0 , 192 , sizeof ( rtDW . fx4qkmoomx ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kbijeiibcz ) , rtdwData , 0 , 193 , sizeof ( rtDW . kbijeiibcz ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gxoqfko3zl ) , rtdwData , 0 , 194 , sizeof ( rtDW . gxoqfko3zl ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lsrg3b3izb ) , rtdwData , 0 , 195 , sizeof ( rtDW . lsrg3b3izb ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
e4apruk0cn ) , rtdwData , 0 , 196 , sizeof ( rtDW . e4apruk0cn ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kdeplemgid ) , rtdwData , 0 , 197 , sizeof ( rtDW . kdeplemgid ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
oq1rde331u ) , rtdwData , 0 , 198 , sizeof ( rtDW . oq1rde331u ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dri1oggmq0 ) , rtdwData , 0 , 199 , sizeof ( rtDW . dri1oggmq0 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nv4uj53r02 ) , rtdwData , 0 , 200 , sizeof ( rtDW . nv4uj53r02 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bxqyzy02ny ) , rtdwData , 0 , 201 , sizeof ( rtDW . bxqyzy02ny ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
agzzpunc3i ) , rtdwData , 0 , 202 , sizeof ( rtDW . agzzpunc3i ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
noznim2iqz ) , rtdwData , 0 , 203 , sizeof ( rtDW . noznim2iqz ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
do1g134e35 ) , rtdwData , 0 , 204 , sizeof ( rtDW . do1g134e35 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jr11b3ek0i ) , rtdwData , 0 , 205 , sizeof ( rtDW . jr11b3ek0i ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cprxs0oxb4 ) , rtdwData , 0 , 206 , sizeof ( rtDW . cprxs0oxb4 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
i4kbnwgsra ) , rtdwData , 0 , 207 , sizeof ( rtDW . i4kbnwgsra ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
akcvng45tl ) , rtdwData , 0 , 208 , sizeof ( rtDW . akcvng45tl ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
n4iun2fjnn ) , rtdwData , 0 , 209 , sizeof ( rtDW . n4iun2fjnn ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fr2u3bfpll ) , rtdwData , 0 , 210 , sizeof ( rtDW . fr2u3bfpll ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bv1ncvrs1o ) , rtdwData , 0 , 211 , sizeof ( rtDW . bv1ncvrs1o ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dzft24s4wf ) , rtdwData , 0 , 212 , sizeof ( rtDW . dzft24s4wf ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jcwpmucczd ) , rtdwData , 0 , 213 , sizeof ( rtDW . jcwpmucczd ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
i3cg55zsq5 ) , rtdwData , 0 , 214 , sizeof ( rtDW . i3cg55zsq5 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
duv4e2eeyz ) , rtdwData , 0 , 215 , sizeof ( rtDW . duv4e2eeyz ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cqzpsciwb0 ) , rtdwData , 0 , 216 , sizeof ( rtDW . cqzpsciwb0 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bgf0isn4m2 ) , rtdwData , 0 , 217 , sizeof ( rtDW . bgf0isn4m2 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
iooznguwv5 ) , rtdwData , 0 , 218 , sizeof ( rtDW . iooznguwv5 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bkmzxq31d1 ) , rtdwData , 0 , 219 , sizeof ( rtDW . bkmzxq31d1 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kqgzq353ol ) , rtdwData , 0 , 220 , sizeof ( rtDW . kqgzq353ol ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fgrwjt4a2w ) , rtdwData , 0 , 221 , sizeof ( rtDW . fgrwjt4a2w ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
e4hda03zrh ) , rtdwData , 0 , 222 , sizeof ( rtDW . e4hda03zrh ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
axrvuq4x5i ) , rtdwData , 0 , 223 , sizeof ( rtDW . axrvuq4x5i ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
f3nepfq241 ) , rtdwData , 0 , 224 , sizeof ( rtDW . f3nepfq241 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ivftjkcvdy ) , rtdwData , 0 , 225 , sizeof ( rtDW . ivftjkcvdy ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kt2dvgietw ) , rtdwData , 0 , 226 , sizeof ( rtDW . kt2dvgietw ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
f125nvybng ) , rtdwData , 0 , 227 , sizeof ( rtDW . f125nvybng ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pp1spekrho ) , rtdwData , 0 , 228 , sizeof ( rtDW . pp1spekrho ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lhex3u5h1f ) , rtdwData , 0 , 229 , sizeof ( rtDW . lhex3u5h1f ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fefcdgfhj1 ) , rtdwData , 0 , 230 , sizeof ( rtDW . fefcdgfhj1 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gqs1ppah0r ) , rtdwData , 0 , 231 , sizeof ( rtDW . gqs1ppah0r ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
c2jypg20hx ) , rtdwData , 0 , 232 , sizeof ( rtDW . c2jypg20hx ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
esgl5mkr2h ) , rtdwData , 0 , 233 , sizeof ( rtDW . esgl5mkr2h ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
oe1scdkmlv ) , rtdwData , 0 , 234 , sizeof ( rtDW . oe1scdkmlv ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fp3bheq2px ) , rtdwData , 0 , 235 , sizeof ( rtDW . fp3bheq2px ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nkzaiaa2wi ) , rtdwData , 0 , 236 , sizeof ( rtDW . nkzaiaa2wi ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
a1gsgrx3gu ) , rtdwData , 0 , 237 , sizeof ( rtDW . a1gsgrx3gu ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
oapwp3ivnb ) , rtdwData , 0 , 238 , sizeof ( rtDW . oapwp3ivnb ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mfhlrzl41r ) , rtdwData , 0 , 239 , sizeof ( rtDW . mfhlrzl41r ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bognbsvydi ) , rtdwData , 0 , 240 , sizeof ( rtDW . bognbsvydi ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nys12ztjas ) , rtdwData , 0 , 241 , sizeof ( rtDW . nys12ztjas ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cozp4vn1gx ) , rtdwData , 0 , 242 , sizeof ( rtDW . cozp4vn1gx ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
a2kthhvkup ) , rtdwData , 0 , 243 , sizeof ( rtDW . a2kthhvkup ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
e4ewwdakkt ) , rtdwData , 0 , 244 , sizeof ( rtDW . e4ewwdakkt ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pgl0dx24fb ) , rtdwData , 0 , 245 , sizeof ( rtDW . pgl0dx24fb ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
iwbojjhhe5 ) , rtdwData , 0 , 246 , sizeof ( rtDW . iwbojjhhe5 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mxw4mzr0uk ) , rtdwData , 0 , 247 , sizeof ( rtDW . mxw4mzr0uk ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ljw5ghzdsf ) , rtdwData , 0 , 248 , sizeof ( rtDW . ljw5ghzdsf ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dgivirmjgy ) , rtdwData , 0 , 249 , sizeof ( rtDW . dgivirmjgy ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ehjpkuq40k ) , rtdwData , 0 , 250 , sizeof ( rtDW . ehjpkuq40k ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bd1ltj1wwf ) , rtdwData , 0 , 251 , sizeof ( rtDW . bd1ltj1wwf ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ofks3kmj3q ) , rtdwData , 0 , 252 , sizeof ( rtDW . ofks3kmj3q ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jg1x0sgptb ) , rtdwData , 0 , 253 , sizeof ( rtDW . jg1x0sgptb ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lyf5ek2b3d ) , rtdwData , 0 , 254 , sizeof ( rtDW . lyf5ek2b3d ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hgyegul2br ) , rtdwData , 0 , 255 , sizeof ( rtDW . hgyegul2br ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hmpn3ysews ) , rtdwData , 0 , 256 , sizeof ( rtDW . hmpn3ysews ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
g5esa0nd4h ) , rtdwData , 0 , 257 , sizeof ( rtDW . g5esa0nd4h ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
a514ztuygm ) , rtdwData , 0 , 258 , sizeof ( rtDW . a514ztuygm ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bsiifkcwph ) , rtdwData , 0 , 259 , sizeof ( rtDW . bsiifkcwph ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
j2ygtkmtdt ) , rtdwData , 0 , 260 , sizeof ( rtDW . j2ygtkmtdt ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
g32xdqkvam ) , rtdwData , 0 , 261 , sizeof ( rtDW . g32xdqkvam ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
m5qcrrh0rz ) , rtdwData , 0 , 262 , sizeof ( rtDW . m5qcrrh0rz ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dqeonebn4v ) , rtdwData , 0 , 263 , sizeof ( rtDW . dqeonebn4v ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
f22lusxsbw ) , rtdwData , 0 , 264 , sizeof ( rtDW . f22lusxsbw ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
liujvkzp0o ) , rtdwData , 0 , 265 , sizeof ( rtDW . liujvkzp0o ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fpmxpxerkf ) , rtdwData , 0 , 266 , sizeof ( rtDW . fpmxpxerkf ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bobm2fibnc ) , rtdwData , 0 , 267 , sizeof ( rtDW . bobm2fibnc ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
obpqvavpfa ) , rtdwData , 0 , 268 , sizeof ( rtDW . obpqvavpfa ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
frqny0vebk ) , rtdwData , 0 , 269 , sizeof ( rtDW . frqny0vebk ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jv0nsgafal ) , rtdwData , 0 , 270 , sizeof ( rtDW . jv0nsgafal ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gd1fmtj3nb ) , rtdwData , 0 , 271 , sizeof ( rtDW . gd1fmtj3nb ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
arpmjow3zy ) , rtdwData , 0 , 272 , sizeof ( rtDW . arpmjow3zy ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
al1pl4kowr ) , rtdwData , 0 , 273 , sizeof ( rtDW . al1pl4kowr ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jhxq5x40uq ) , rtdwData , 0 , 274 , sizeof ( rtDW . jhxq5x40uq ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
obmn5cmv54 ) , rtdwData , 0 , 275 , sizeof ( rtDW . obmn5cmv54 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jknbrx32pj ) , rtdwData , 0 , 276 , sizeof ( rtDW . jknbrx32pj ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pmqufde2h1 ) , rtdwData , 0 , 277 , sizeof ( rtDW . pmqufde2h1 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
inefucjrpd ) , rtdwData , 0 , 278 , sizeof ( rtDW . inefucjrpd ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cslkm1fbej ) , rtdwData , 0 , 279 , sizeof ( rtDW . cslkm1fbej ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gdgxtxgf1g ) , rtdwData , 0 , 280 , sizeof ( rtDW . gdgxtxgf1g ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ky01ccojr5 ) , rtdwData , 0 , 281 , sizeof ( rtDW . ky01ccojr5 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
i5j0r2inrh ) , rtdwData , 0 , 282 , sizeof ( rtDW . i5j0r2inrh ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gsqnwqajdt ) , rtdwData , 0 , 283 , sizeof ( rtDW . gsqnwqajdt ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nip0s141uc ) , rtdwData , 0 , 284 , sizeof ( rtDW . nip0s141uc ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
j2xbhujzmo ) , rtdwData , 0 , 285 , sizeof ( rtDW . j2xbhujzmo ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dv1fj1e3po ) , rtdwData , 0 , 286 , sizeof ( rtDW . dv1fj1e3po ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
d5o0clolff ) , rtdwData , 0 , 287 , sizeof ( rtDW . d5o0clolff ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
h3bh4kq3i4 ) , rtdwData , 0 , 288 , sizeof ( rtDW . h3bh4kq3i4 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ndj0iieydo ) , rtdwData , 0 , 289 , sizeof ( rtDW . ndj0iieydo ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
db0mrltr1f ) , rtdwData , 0 , 290 , sizeof ( rtDW . db0mrltr1f ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ghat2mvfdb ) , rtdwData , 0 , 291 , sizeof ( rtDW . ghat2mvfdb ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dbyjv3m3km ) , rtdwData , 0 , 292 , sizeof ( rtDW . dbyjv3m3km ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nq533x3m4z ) , rtdwData , 0 , 293 , sizeof ( rtDW . nq533x3m4z ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lq3hiypoc1 ) , rtdwData , 0 , 294 , sizeof ( rtDW . lq3hiypoc1 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
d5x0pmmjhx ) , rtdwData , 0 , 295 , sizeof ( rtDW . d5x0pmmjhx ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
axi1h1fttd ) , rtdwData , 0 , 296 , sizeof ( rtDW . axi1h1fttd ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
n3znxzlzoy ) , rtdwData , 0 , 297 , sizeof ( rtDW . n3znxzlzoy ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dtq0brtwgy ) , rtdwData , 0 , 298 , sizeof ( rtDW . dtq0brtwgy ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
e2av1fijfk ) , rtdwData , 0 , 299 , sizeof ( rtDW . e2av1fijfk ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
izd0xxaozr ) , rtdwData , 0 , 300 , sizeof ( rtDW . izd0xxaozr ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fan5swni5z ) , rtdwData , 0 , 301 , sizeof ( rtDW . fan5swni5z ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ebphxvnfm5 ) , rtdwData , 0 , 302 , sizeof ( rtDW . ebphxvnfm5 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pvbkyahyj2 ) , rtdwData , 0 , 303 , sizeof ( rtDW . pvbkyahyj2 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nw0ce5ez2e ) , rtdwData , 0 , 304 , sizeof ( rtDW . nw0ce5ez2e ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pyfiwzjg3y ) , rtdwData , 0 , 305 , sizeof ( rtDW . pyfiwzjg3y ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ettbn5njm2 ) , rtdwData , 0 , 306 , sizeof ( rtDW . ettbn5njm2 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
litxgdvmkb ) , rtdwData , 0 , 307 , sizeof ( rtDW . litxgdvmkb ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jw2gcekxcn ) , rtdwData , 0 , 308 , sizeof ( rtDW . jw2gcekxcn ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
haxmbuhro2 ) , rtdwData , 0 , 309 , sizeof ( rtDW . haxmbuhro2 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
l2wdkwq3l3 ) , rtdwData , 0 , 310 , sizeof ( rtDW . l2wdkwq3l3 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gkvgzinv2s ) , rtdwData , 0 , 311 , sizeof ( rtDW . gkvgzinv2s ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hyj4pez02v ) , rtdwData , 0 , 312 , sizeof ( rtDW . hyj4pez02v ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
evuw2ur1ju ) , rtdwData , 0 , 313 , sizeof ( rtDW . evuw2ur1ju ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bcvviips3r ) , rtdwData , 0 , 314 , sizeof ( rtDW . bcvviips3r ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mbyb3mwghk ) , rtdwData , 0 , 315 , sizeof ( rtDW . mbyb3mwghk ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fl5kdak43c ) , rtdwData , 0 , 316 , sizeof ( rtDW . fl5kdak43c ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
izhelokxhz ) , rtdwData , 0 , 317 , sizeof ( rtDW . izhelokxhz ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
p5x4qrbnra ) , rtdwData , 0 , 318 , sizeof ( rtDW . p5x4qrbnra ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ode0ma3jvt ) , rtdwData , 0 , 319 , sizeof ( rtDW . ode0ma3jvt ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
e2i1vst4ks ) , rtdwData , 0 , 320 , sizeof ( rtDW . e2i1vst4ks ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bp0z35htv2 ) , rtdwData , 0 , 321 , sizeof ( rtDW . bp0z35htv2 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
j43lisdiks ) , rtdwData , 0 , 322 , sizeof ( rtDW . j43lisdiks ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gijlhzozco ) , rtdwData , 0 , 323 , sizeof ( rtDW . gijlhzozco ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
on3sz2avtq ) , rtdwData , 0 , 324 , sizeof ( rtDW . on3sz2avtq ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fda20uvw2n ) , rtdwData , 0 , 325 , sizeof ( rtDW . fda20uvw2n ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
b0gd0xwnrv ) , rtdwData , 0 , 326 , sizeof ( rtDW . b0gd0xwnrv ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mmptt4byoj ) , rtdwData , 0 , 327 , sizeof ( rtDW . mmptt4byoj ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pjoh3gen5u ) , rtdwData , 0 , 328 , sizeof ( rtDW . pjoh3gen5u ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
atko2rhysz . ivbbwftzhv ) , rtdwData , 0 , 329 , sizeof ( rtDW . atko2rhysz .
ivbbwftzhv ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . atko2rhysz . i24gbolf04 ) , rtdwData , 0 , 330 , sizeof ( rtDW .
atko2rhysz . i24gbolf04 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ctkwb4rte4 . hnsu34ocdv ) , rtdwData , 0 , 331 , sizeof ( rtDW . ctkwb4rte4 .
hnsu34ocdv ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . ctkwb4rte4 . aczjakmt3z ) , rtdwData , 0 , 332 , sizeof ( rtDW .
ctkwb4rte4 . aczjakmt3z ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ayc1u05z0b . eakynmnk00 ) , rtdwData , 0 , 333 , sizeof ( rtDW . ayc1u05z0b .
eakynmnk00 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . ayc1u05z0b . ap1t1grbei ) , rtdwData , 0 , 334 , sizeof ( rtDW .
ayc1u05z0b . ap1t1grbei ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jnhmigxpfr . cexaqfpgul ) , rtdwData , 0 , 335 , sizeof ( rtDW . jnhmigxpfr .
cexaqfpgul ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . jnhmigxpfr . b2wniulodl ) , rtdwData , 0 , 336 , sizeof ( rtDW .
jnhmigxpfr . b2wniulodl ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hqymuumkk2 . e2wpdf03fq ) , rtdwData , 0 , 337 , sizeof ( rtDW . hqymuumkk2 .
e2wpdf03fq ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . hqymuumkk2 . ab3ipnlkse ) , rtdwData , 0 , 338 , sizeof ( rtDW .
hqymuumkk2 . ab3ipnlkse ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ph0c5wwhlf . izussz2j2f ) , rtdwData , 0 , 339 , sizeof ( rtDW . ph0c5wwhlf .
izussz2j2f ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . ph0c5wwhlf . fleyftrufo ) , rtdwData , 0 , 340 , sizeof ( rtDW .
ph0c5wwhlf . fleyftrufo ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jkhbxjlbpd . eziun3lwqz ) , rtdwData , 0 , 341 , sizeof ( rtDW . jkhbxjlbpd .
eziun3lwqz ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . jkhbxjlbpd . hbw4kaxbof ) , rtdwData , 0 , 342 , sizeof ( rtDW .
jkhbxjlbpd . hbw4kaxbof ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
chadwwtb33 . nf2byzbqdw ) , rtdwData , 0 , 343 , sizeof ( rtDW . chadwwtb33 .
nf2byzbqdw ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . chadwwtb33 . c0hodwtoi4 ) , rtdwData , 0 , 344 , sizeof ( rtDW .
chadwwtb33 . c0hodwtoi4 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
k0pzgqkvwb . j30rgfm2jv ) , rtdwData , 0 , 345 , sizeof ( rtDW . k0pzgqkvwb .
j30rgfm2jv ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . k0pzgqkvwb . hgh0tt5vqy ) , rtdwData , 0 , 346 , sizeof ( rtDW .
k0pzgqkvwb . hgh0tt5vqy ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
diaw2yowgl . m5k3zxa1u1 ) , rtdwData , 0 , 347 , sizeof ( rtDW . diaw2yowgl .
m5k3zxa1u1 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . diaw2yowgl . mcqwmlgcq0 ) , rtdwData , 0 , 348 , sizeof ( rtDW .
diaw2yowgl . mcqwmlgcq0 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
eeeqgos433 . emb3do3f0r ) , rtdwData , 0 , 349 , sizeof ( rtDW . eeeqgos433 .
emb3do3f0r ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . eeeqgos433 . kltuftdkui ) , rtdwData , 0 , 350 , sizeof ( rtDW .
eeeqgos433 . kltuftdkui ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ekp05fi01e . pk5rrxppux ) , rtdwData , 0 , 351 , sizeof ( rtDW . ekp05fi01e .
pk5rrxppux ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . ekp05fi01e . eqtir0gumq ) , rtdwData , 0 , 352 , sizeof ( rtDW .
ekp05fi01e . eqtir0gumq ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gw0bb4lu4k . i5moiltmws ) , rtdwData , 0 , 353 , sizeof ( rtDW . gw0bb4lu4k .
i5moiltmws ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . gw0bb4lu4k . jfuok3z43s ) , rtdwData , 0 , 354 , sizeof ( rtDW .
gw0bb4lu4k . jfuok3z43s ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jwlq00h0qp . kac4x3wvla ) , rtdwData , 0 , 355 , sizeof ( rtDW . jwlq00h0qp .
kac4x3wvla ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . jwlq00h0qp . cade0e5uxu ) , rtdwData , 0 , 356 , sizeof ( rtDW .
jwlq00h0qp . cade0e5uxu ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fbu1mofswb . kbd34gxwbo ) , rtdwData , 0 , 357 , sizeof ( rtDW . fbu1mofswb .
kbd34gxwbo ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . fbu1mofswb . m5l4tdev1b ) , rtdwData , 0 , 358 , sizeof ( rtDW .
fbu1mofswb . m5l4tdev1b ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
c45nfqxt1bx . ivbbwftzhv ) , rtdwData , 0 , 359 , sizeof ( rtDW . c45nfqxt1bx
. ivbbwftzhv ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . c45nfqxt1bx . i24gbolf04 ) , rtdwData , 0 , 360 , sizeof (
rtDW . c45nfqxt1bx . i24gbolf04 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dmnv2typrkz . hnsu34ocdv ) , rtdwData , 0 , 361 , sizeof ( rtDW . dmnv2typrkz
. hnsu34ocdv ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . dmnv2typrkz . aczjakmt3z ) , rtdwData , 0 , 362 , sizeof (
rtDW . dmnv2typrkz . aczjakmt3z ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bx4q2vjdxxp . eakynmnk00 ) , rtdwData , 0 , 363 , sizeof ( rtDW . bx4q2vjdxxp
. eakynmnk00 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . bx4q2vjdxxp . ap1t1grbei ) , rtdwData , 0 , 364 , sizeof (
rtDW . bx4q2vjdxxp . ap1t1grbei ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gzu0v1k154f . cexaqfpgul ) , rtdwData , 0 , 365 , sizeof ( rtDW . gzu0v1k154f
. cexaqfpgul ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . gzu0v1k154f . b2wniulodl ) , rtdwData , 0 , 366 , sizeof (
rtDW . gzu0v1k154f . b2wniulodl ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
m2rovdpxpjx . e2wpdf03fq ) , rtdwData , 0 , 367 , sizeof ( rtDW . m2rovdpxpjx
. e2wpdf03fq ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . m2rovdpxpjx . ab3ipnlkse ) , rtdwData , 0 , 368 , sizeof (
rtDW . m2rovdpxpjx . ab3ipnlkse ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dfgw4kuzso2 . izussz2j2f ) , rtdwData , 0 , 369 , sizeof ( rtDW . dfgw4kuzso2
. izussz2j2f ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . dfgw4kuzso2 . fleyftrufo ) , rtdwData , 0 , 370 , sizeof (
rtDW . dfgw4kuzso2 . fleyftrufo ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gvbyuajj10j . eziun3lwqz ) , rtdwData , 0 , 371 , sizeof ( rtDW . gvbyuajj10j
. eziun3lwqz ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . gvbyuajj10j . hbw4kaxbof ) , rtdwData , 0 , 372 , sizeof (
rtDW . gvbyuajj10j . hbw4kaxbof ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
o3izwcublel . nf2byzbqdw ) , rtdwData , 0 , 373 , sizeof ( rtDW . o3izwcublel
. nf2byzbqdw ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . o3izwcublel . c0hodwtoi4 ) , rtdwData , 0 , 374 , sizeof (
rtDW . o3izwcublel . c0hodwtoi4 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pdnjandztac . j30rgfm2jv ) , rtdwData , 0 , 375 , sizeof ( rtDW . pdnjandztac
. j30rgfm2jv ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . pdnjandztac . hgh0tt5vqy ) , rtdwData , 0 , 376 , sizeof (
rtDW . pdnjandztac . hgh0tt5vqy ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hexdymfazx2 . m5k3zxa1u1 ) , rtdwData , 0 , 377 , sizeof ( rtDW . hexdymfazx2
. m5k3zxa1u1 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . hexdymfazx2 . mcqwmlgcq0 ) , rtdwData , 0 , 378 , sizeof (
rtDW . hexdymfazx2 . mcqwmlgcq0 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
im0j4vockyt . emb3do3f0r ) , rtdwData , 0 , 379 , sizeof ( rtDW . im0j4vockyt
. emb3do3f0r ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . im0j4vockyt . kltuftdkui ) , rtdwData , 0 , 380 , sizeof (
rtDW . im0j4vockyt . kltuftdkui ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
am45qhx1eqm . pk5rrxppux ) , rtdwData , 0 , 381 , sizeof ( rtDW . am45qhx1eqm
. pk5rrxppux ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . am45qhx1eqm . eqtir0gumq ) , rtdwData , 0 , 382 , sizeof (
rtDW . am45qhx1eqm . eqtir0gumq ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
g2rlwqx2xml . i5moiltmws ) , rtdwData , 0 , 383 , sizeof ( rtDW . g2rlwqx2xml
. i5moiltmws ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . g2rlwqx2xml . jfuok3z43s ) , rtdwData , 0 , 384 , sizeof (
rtDW . g2rlwqx2xml . jfuok3z43s ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nv44ttbdg32 . kac4x3wvla ) , rtdwData , 0 , 385 , sizeof ( rtDW . nv44ttbdg32
. kac4x3wvla ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . nv44ttbdg32 . cade0e5uxu ) , rtdwData , 0 , 386 , sizeof (
rtDW . nv44ttbdg32 . cade0e5uxu ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cqyo42y2ghh . kbd34gxwbo ) , rtdwData , 0 , 387 , sizeof ( rtDW . cqyo42y2ghh
. kbd34gxwbo ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . cqyo42y2ghh . m5l4tdev1b ) , rtdwData , 0 , 388 , sizeof (
rtDW . cqyo42y2ghh . m5l4tdev1b ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hshupcos05 . ofrvdmgnuh ) , rtdwData , 0 , 389 , sizeof ( rtDW . hshupcos05 .
ofrvdmgnuh ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . hshupcos05 . jq1v3dabca ) , rtdwData , 0 , 390 , sizeof ( rtDW .
hshupcos05 . jq1v3dabca ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bzql1z5sfh . dxojn2xddw ) , rtdwData , 0 , 391 , sizeof ( rtDW . bzql1z5sfh .
dxojn2xddw ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . bzql1z5sfh . bko3b1m5jh ) , rtdwData , 0 , 392 , sizeof ( rtDW .
bzql1z5sfh . bko3b1m5jh ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nbx3n1zru5 . arfpsuibu4 ) , rtdwData , 0 , 393 , sizeof ( rtDW . nbx3n1zru5 .
arfpsuibu4 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . nbx3n1zru5 . gzbdyuemgc ) , rtdwData , 0 , 394 , sizeof ( rtDW .
nbx3n1zru5 . gzbdyuemgc ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gitl1vogja . d0r4pg3qpe ) , rtdwData , 0 , 395 , sizeof ( rtDW . gitl1vogja .
d0r4pg3qpe ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . gitl1vogja . mpmtoteyyz ) , rtdwData , 0 , 396 , sizeof ( rtDW .
gitl1vogja . mpmtoteyyz ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ig3hrn2l24 . o2cwobb3pj ) , rtdwData , 0 , 397 , sizeof ( rtDW . ig3hrn2l24 .
o2cwobb3pj ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . ig3hrn2l24 . om1xuzw1eo ) , rtdwData , 0 , 398 , sizeof ( rtDW .
ig3hrn2l24 . om1xuzw1eo ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ju3onx0ww2 . ak5b20glzq ) , rtdwData , 0 , 399 , sizeof ( rtDW . ju3onx0ww2 .
ak5b20glzq ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . ju3onx0ww2 . eq21cdu2ve ) , rtdwData , 0 , 400 , sizeof ( rtDW .
ju3onx0ww2 . eq21cdu2ve ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
prjjcc3mxy . ottkqopm4f ) , rtdwData , 0 , 401 , sizeof ( rtDW . prjjcc3mxy .
ottkqopm4f ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . prjjcc3mxy . eohabhj4xn ) , rtdwData , 0 , 402 , sizeof ( rtDW .
prjjcc3mxy . eohabhj4xn ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mm0axov05p . e4ft35rk43 ) , rtdwData , 0 , 403 , sizeof ( rtDW . mm0axov05p .
e4ft35rk43 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . mm0axov05p . dess21gzas ) , rtdwData , 0 , 404 , sizeof ( rtDW .
mm0axov05p . dess21gzas ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cqouob3iam . iua2aul0k5 ) , rtdwData , 0 , 405 , sizeof ( rtDW . cqouob3iam .
iua2aul0k5 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . cqouob3iam . bzq3ui1czr ) , rtdwData , 0 , 406 , sizeof ( rtDW .
cqouob3iam . bzq3ui1czr ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
djq1we332q . kj0js5y43a ) , rtdwData , 0 , 407 , sizeof ( rtDW . djq1we332q .
kj0js5y43a ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . djq1we332q . dj53101tjo ) , rtdwData , 0 , 408 , sizeof ( rtDW .
djq1we332q . dj53101tjo ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
d50tkbrk2e . abs01yeupq ) , rtdwData , 0 , 409 , sizeof ( rtDW . d50tkbrk2e .
abs01yeupq ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . d50tkbrk2e . llq5zg0hho ) , rtdwData , 0 , 410 , sizeof ( rtDW .
d50tkbrk2e . llq5zg0hho ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ppnfsuot4z . h4dsuebilz ) , rtdwData , 0 , 411 , sizeof ( rtDW . ppnfsuot4z .
h4dsuebilz ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . ppnfsuot4z . kyqlsdxb1f ) , rtdwData , 0 , 412 , sizeof ( rtDW .
ppnfsuot4z . kyqlsdxb1f ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
h502wprcm0 . cdjbjgd1xc ) , rtdwData , 0 , 413 , sizeof ( rtDW . h502wprcm0 .
cdjbjgd1xc ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . h502wprcm0 . l0e4fwians ) , rtdwData , 0 , 414 , sizeof ( rtDW .
h502wprcm0 . l0e4fwians ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ec1kk3wac3 . kmvjqif1vx ) , rtdwData , 0 , 415 , sizeof ( rtDW . ec1kk3wac3 .
kmvjqif1vx ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . ec1kk3wac3 . leoynkr3q5 ) , rtdwData , 0 , 416 , sizeof ( rtDW .
ec1kk3wac3 . leoynkr3q5 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mcrnskrou3 . ihbdkradn2 ) , rtdwData , 0 , 417 , sizeof ( rtDW . mcrnskrou3 .
ihbdkradn2 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . mcrnskrou3 . kfwk41aocj ) , rtdwData , 0 , 418 , sizeof ( rtDW .
mcrnskrou3 . kfwk41aocj ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
psluq53bh5 . bhhrytpig4 ) , rtdwData , 0 , 419 , sizeof ( rtDW . psluq53bh5 .
bhhrytpig4 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . psluq53bh5 . e5djmff4ey ) , rtdwData , 0 , 420 , sizeof ( rtDW .
psluq53bh5 . e5djmff4ey ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
l2dw2tngpy . j2wb0heh5r ) , rtdwData , 0 , 421 , sizeof ( rtDW . l2dw2tngpy .
j2wb0heh5r ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . l2dw2tngpy . inqavurpq2 ) , rtdwData , 0 , 422 , sizeof ( rtDW .
l2dw2tngpy . inqavurpq2 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ludvfohavv . ofrvdmgnuh ) , rtdwData , 0 , 423 , sizeof ( rtDW . ludvfohavv .
ofrvdmgnuh ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . ludvfohavv . jq1v3dabca ) , rtdwData , 0 , 424 , sizeof ( rtDW .
ludvfohavv . jq1v3dabca ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cnelbzjfhg . dxojn2xddw ) , rtdwData , 0 , 425 , sizeof ( rtDW . cnelbzjfhg .
dxojn2xddw ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . cnelbzjfhg . bko3b1m5jh ) , rtdwData , 0 , 426 , sizeof ( rtDW .
cnelbzjfhg . bko3b1m5jh ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mx4jv5qqj4 . arfpsuibu4 ) , rtdwData , 0 , 427 , sizeof ( rtDW . mx4jv5qqj4 .
arfpsuibu4 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . mx4jv5qqj4 . gzbdyuemgc ) , rtdwData , 0 , 428 , sizeof ( rtDW .
mx4jv5qqj4 . gzbdyuemgc ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ls5eenr2ad . d0r4pg3qpe ) , rtdwData , 0 , 429 , sizeof ( rtDW . ls5eenr2ad .
d0r4pg3qpe ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . ls5eenr2ad . mpmtoteyyz ) , rtdwData , 0 , 430 , sizeof ( rtDW .
ls5eenr2ad . mpmtoteyyz ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bk35bvlqhh . o2cwobb3pj ) , rtdwData , 0 , 431 , sizeof ( rtDW . bk35bvlqhh .
o2cwobb3pj ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . bk35bvlqhh . om1xuzw1eo ) , rtdwData , 0 , 432 , sizeof ( rtDW .
bk35bvlqhh . om1xuzw1eo ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
d3bzw5xtsk . ak5b20glzq ) , rtdwData , 0 , 433 , sizeof ( rtDW . d3bzw5xtsk .
ak5b20glzq ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . d3bzw5xtsk . eq21cdu2ve ) , rtdwData , 0 , 434 , sizeof ( rtDW .
d3bzw5xtsk . eq21cdu2ve ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
p5zpxze4b1 . ottkqopm4f ) , rtdwData , 0 , 435 , sizeof ( rtDW . p5zpxze4b1 .
ottkqopm4f ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . p5zpxze4b1 . eohabhj4xn ) , rtdwData , 0 , 436 , sizeof ( rtDW .
p5zpxze4b1 . eohabhj4xn ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
iaybj1yga2 . e4ft35rk43 ) , rtdwData , 0 , 437 , sizeof ( rtDW . iaybj1yga2 .
e4ft35rk43 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . iaybj1yga2 . dess21gzas ) , rtdwData , 0 , 438 , sizeof ( rtDW .
iaybj1yga2 . dess21gzas ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ok1l4kluje . iua2aul0k5 ) , rtdwData , 0 , 439 , sizeof ( rtDW . ok1l4kluje .
iua2aul0k5 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . ok1l4kluje . bzq3ui1czr ) , rtdwData , 0 , 440 , sizeof ( rtDW .
ok1l4kluje . bzq3ui1czr ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jyf4ywwf11 . kj0js5y43a ) , rtdwData , 0 , 441 , sizeof ( rtDW . jyf4ywwf11 .
kj0js5y43a ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . jyf4ywwf11 . dj53101tjo ) , rtdwData , 0 , 442 , sizeof ( rtDW .
jyf4ywwf11 . dj53101tjo ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
odwyzbzb3q . abs01yeupq ) , rtdwData , 0 , 443 , sizeof ( rtDW . odwyzbzb3q .
abs01yeupq ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . odwyzbzb3q . llq5zg0hho ) , rtdwData , 0 , 444 , sizeof ( rtDW .
odwyzbzb3q . llq5zg0hho ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
f32lct1du0 . h4dsuebilz ) , rtdwData , 0 , 445 , sizeof ( rtDW . f32lct1du0 .
h4dsuebilz ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . f32lct1du0 . kyqlsdxb1f ) , rtdwData , 0 , 446 , sizeof ( rtDW .
f32lct1du0 . kyqlsdxb1f ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mw2keyc00d . cdjbjgd1xc ) , rtdwData , 0 , 447 , sizeof ( rtDW . mw2keyc00d .
cdjbjgd1xc ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . mw2keyc00d . l0e4fwians ) , rtdwData , 0 , 448 , sizeof ( rtDW .
mw2keyc00d . l0e4fwians ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pmc2mjfvx3 . kmvjqif1vx ) , rtdwData , 0 , 449 , sizeof ( rtDW . pmc2mjfvx3 .
kmvjqif1vx ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . pmc2mjfvx3 . leoynkr3q5 ) , rtdwData , 0 , 450 , sizeof ( rtDW .
pmc2mjfvx3 . leoynkr3q5 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
opqx3n1jiv . ihbdkradn2 ) , rtdwData , 0 , 451 , sizeof ( rtDW . opqx3n1jiv .
ihbdkradn2 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . opqx3n1jiv . kfwk41aocj ) , rtdwData , 0 , 452 , sizeof ( rtDW .
opqx3n1jiv . kfwk41aocj ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lhl4belrft . bhhrytpig4 ) , rtdwData , 0 , 453 , sizeof ( rtDW . lhl4belrft .
bhhrytpig4 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . lhl4belrft . e5djmff4ey ) , rtdwData , 0 , 454 , sizeof ( rtDW .
lhl4belrft . e5djmff4ey ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
aomefh15n5 . j2wb0heh5r ) , rtdwData , 0 , 455 , sizeof ( rtDW . aomefh15n5 .
j2wb0heh5r ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . aomefh15n5 . inqavurpq2 ) , rtdwData , 0 , 456 , sizeof ( rtDW .
aomefh15n5 . inqavurpq2 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hhpwfeyxv5 . ofrvdmgnuh ) , rtdwData , 0 , 457 , sizeof ( rtDW . hhpwfeyxv5 .
ofrvdmgnuh ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . hhpwfeyxv5 . jq1v3dabca ) , rtdwData , 0 , 458 , sizeof ( rtDW .
hhpwfeyxv5 . jq1v3dabca ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mr4jil2nb0 . dxojn2xddw ) , rtdwData , 0 , 459 , sizeof ( rtDW . mr4jil2nb0 .
dxojn2xddw ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . mr4jil2nb0 . bko3b1m5jh ) , rtdwData , 0 , 460 , sizeof ( rtDW .
mr4jil2nb0 . bko3b1m5jh ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mtb1g0er0c . arfpsuibu4 ) , rtdwData , 0 , 461 , sizeof ( rtDW . mtb1g0er0c .
arfpsuibu4 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . mtb1g0er0c . gzbdyuemgc ) , rtdwData , 0 , 462 , sizeof ( rtDW .
mtb1g0er0c . gzbdyuemgc ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
logcpemxnl . d0r4pg3qpe ) , rtdwData , 0 , 463 , sizeof ( rtDW . logcpemxnl .
d0r4pg3qpe ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . logcpemxnl . mpmtoteyyz ) , rtdwData , 0 , 464 , sizeof ( rtDW .
logcpemxnl . mpmtoteyyz ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fmiwt01ncc . o2cwobb3pj ) , rtdwData , 0 , 465 , sizeof ( rtDW . fmiwt01ncc .
o2cwobb3pj ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . fmiwt01ncc . om1xuzw1eo ) , rtdwData , 0 , 466 , sizeof ( rtDW .
fmiwt01ncc . om1xuzw1eo ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
a5ydisma0n . ak5b20glzq ) , rtdwData , 0 , 467 , sizeof ( rtDW . a5ydisma0n .
ak5b20glzq ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . a5ydisma0n . eq21cdu2ve ) , rtdwData , 0 , 468 , sizeof ( rtDW .
a5ydisma0n . eq21cdu2ve ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cp2x5swpim . ottkqopm4f ) , rtdwData , 0 , 469 , sizeof ( rtDW . cp2x5swpim .
ottkqopm4f ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . cp2x5swpim . eohabhj4xn ) , rtdwData , 0 , 470 , sizeof ( rtDW .
cp2x5swpim . eohabhj4xn ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pg2gn3izhv . e4ft35rk43 ) , rtdwData , 0 , 471 , sizeof ( rtDW . pg2gn3izhv .
e4ft35rk43 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . pg2gn3izhv . dess21gzas ) , rtdwData , 0 , 472 , sizeof ( rtDW .
pg2gn3izhv . dess21gzas ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
li4w4j22ee . iua2aul0k5 ) , rtdwData , 0 , 473 , sizeof ( rtDW . li4w4j22ee .
iua2aul0k5 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . li4w4j22ee . bzq3ui1czr ) , rtdwData , 0 , 474 , sizeof ( rtDW .
li4w4j22ee . bzq3ui1czr ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
c0cv1fecmf . kj0js5y43a ) , rtdwData , 0 , 475 , sizeof ( rtDW . c0cv1fecmf .
kj0js5y43a ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . c0cv1fecmf . dj53101tjo ) , rtdwData , 0 , 476 , sizeof ( rtDW .
c0cv1fecmf . dj53101tjo ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dwkrhy1adj . abs01yeupq ) , rtdwData , 0 , 477 , sizeof ( rtDW . dwkrhy1adj .
abs01yeupq ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . dwkrhy1adj . llq5zg0hho ) , rtdwData , 0 , 478 , sizeof ( rtDW .
dwkrhy1adj . llq5zg0hho ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kiv2ffdk2i . h4dsuebilz ) , rtdwData , 0 , 479 , sizeof ( rtDW . kiv2ffdk2i .
h4dsuebilz ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . kiv2ffdk2i . kyqlsdxb1f ) , rtdwData , 0 , 480 , sizeof ( rtDW .
kiv2ffdk2i . kyqlsdxb1f ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
o44pc0z3gt . cdjbjgd1xc ) , rtdwData , 0 , 481 , sizeof ( rtDW . o44pc0z3gt .
cdjbjgd1xc ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . o44pc0z3gt . l0e4fwians ) , rtdwData , 0 , 482 , sizeof ( rtDW .
o44pc0z3gt . l0e4fwians ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
olew5caigs . kmvjqif1vx ) , rtdwData , 0 , 483 , sizeof ( rtDW . olew5caigs .
kmvjqif1vx ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . olew5caigs . leoynkr3q5 ) , rtdwData , 0 , 484 , sizeof ( rtDW .
olew5caigs . leoynkr3q5 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
edsrfmi5oc . ihbdkradn2 ) , rtdwData , 0 , 485 , sizeof ( rtDW . edsrfmi5oc .
ihbdkradn2 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . edsrfmi5oc . kfwk41aocj ) , rtdwData , 0 , 486 , sizeof ( rtDW .
edsrfmi5oc . kfwk41aocj ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dq1vaupevs . bhhrytpig4 ) , rtdwData , 0 , 487 , sizeof ( rtDW . dq1vaupevs .
bhhrytpig4 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . dq1vaupevs . e5djmff4ey ) , rtdwData , 0 , 488 , sizeof ( rtDW .
dq1vaupevs . e5djmff4ey ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gt31hnr3lf . j2wb0heh5r ) , rtdwData , 0 , 489 , sizeof ( rtDW . gt31hnr3lf .
j2wb0heh5r ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . gt31hnr3lf . inqavurpq2 ) , rtdwData , 0 , 490 , sizeof ( rtDW .
gt31hnr3lf . inqavurpq2 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ob2fx4wpxa . ofrvdmgnuh ) , rtdwData , 0 , 491 , sizeof ( rtDW . ob2fx4wpxa .
ofrvdmgnuh ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . ob2fx4wpxa . jq1v3dabca ) , rtdwData , 0 , 492 , sizeof ( rtDW .
ob2fx4wpxa . jq1v3dabca ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
o3fupwkw3j . dxojn2xddw ) , rtdwData , 0 , 493 , sizeof ( rtDW . o3fupwkw3j .
dxojn2xddw ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . o3fupwkw3j . bko3b1m5jh ) , rtdwData , 0 , 494 , sizeof ( rtDW .
o3fupwkw3j . bko3b1m5jh ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bu3vpkznrt . arfpsuibu4 ) , rtdwData , 0 , 495 , sizeof ( rtDW . bu3vpkznrt .
arfpsuibu4 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . bu3vpkznrt . gzbdyuemgc ) , rtdwData , 0 , 496 , sizeof ( rtDW .
bu3vpkznrt . gzbdyuemgc ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
aj5wkrbghc . d0r4pg3qpe ) , rtdwData , 0 , 497 , sizeof ( rtDW . aj5wkrbghc .
d0r4pg3qpe ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . aj5wkrbghc . mpmtoteyyz ) , rtdwData , 0 , 498 , sizeof ( rtDW .
aj5wkrbghc . mpmtoteyyz ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bc2ak5uvom . o2cwobb3pj ) , rtdwData , 0 , 499 , sizeof ( rtDW . bc2ak5uvom .
o2cwobb3pj ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . bc2ak5uvom . om1xuzw1eo ) , rtdwData , 0 , 500 , sizeof ( rtDW .
bc2ak5uvom . om1xuzw1eo ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dticnm5yh1 . ak5b20glzq ) , rtdwData , 0 , 501 , sizeof ( rtDW . dticnm5yh1 .
ak5b20glzq ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . dticnm5yh1 . eq21cdu2ve ) , rtdwData , 0 , 502 , sizeof ( rtDW .
dticnm5yh1 . eq21cdu2ve ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gegc3wkr22 . ottkqopm4f ) , rtdwData , 0 , 503 , sizeof ( rtDW . gegc3wkr22 .
ottkqopm4f ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . gegc3wkr22 . eohabhj4xn ) , rtdwData , 0 , 504 , sizeof ( rtDW .
gegc3wkr22 . eohabhj4xn ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
okqcrlylqk . e4ft35rk43 ) , rtdwData , 0 , 505 , sizeof ( rtDW . okqcrlylqk .
e4ft35rk43 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . okqcrlylqk . dess21gzas ) , rtdwData , 0 , 506 , sizeof ( rtDW .
okqcrlylqk . dess21gzas ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dud531lchs . iua2aul0k5 ) , rtdwData , 0 , 507 , sizeof ( rtDW . dud531lchs .
iua2aul0k5 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . dud531lchs . bzq3ui1czr ) , rtdwData , 0 , 508 , sizeof ( rtDW .
dud531lchs . bzq3ui1czr ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
k1pxlisolz . kj0js5y43a ) , rtdwData , 0 , 509 , sizeof ( rtDW . k1pxlisolz .
kj0js5y43a ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . k1pxlisolz . dj53101tjo ) , rtdwData , 0 , 510 , sizeof ( rtDW .
k1pxlisolz . dj53101tjo ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gmghl42rva . abs01yeupq ) , rtdwData , 0 , 511 , sizeof ( rtDW . gmghl42rva .
abs01yeupq ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . gmghl42rva . llq5zg0hho ) , rtdwData , 0 , 512 , sizeof ( rtDW .
gmghl42rva . llq5zg0hho ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gkwxar31g1 . h4dsuebilz ) , rtdwData , 0 , 513 , sizeof ( rtDW . gkwxar31g1 .
h4dsuebilz ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . gkwxar31g1 . kyqlsdxb1f ) , rtdwData , 0 , 514 , sizeof ( rtDW .
gkwxar31g1 . kyqlsdxb1f ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
p2dpdzhqcw . cdjbjgd1xc ) , rtdwData , 0 , 515 , sizeof ( rtDW . p2dpdzhqcw .
cdjbjgd1xc ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . p2dpdzhqcw . l0e4fwians ) , rtdwData , 0 , 516 , sizeof ( rtDW .
p2dpdzhqcw . l0e4fwians ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pyfhcpopnq . kmvjqif1vx ) , rtdwData , 0 , 517 , sizeof ( rtDW . pyfhcpopnq .
kmvjqif1vx ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . pyfhcpopnq . leoynkr3q5 ) , rtdwData , 0 , 518 , sizeof ( rtDW .
pyfhcpopnq . leoynkr3q5 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lcttqdmfq0 . ihbdkradn2 ) , rtdwData , 0 , 519 , sizeof ( rtDW . lcttqdmfq0 .
ihbdkradn2 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . lcttqdmfq0 . kfwk41aocj ) , rtdwData , 0 , 520 , sizeof ( rtDW .
lcttqdmfq0 . kfwk41aocj ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dax5mxpt1x . bhhrytpig4 ) , rtdwData , 0 , 521 , sizeof ( rtDW . dax5mxpt1x .
bhhrytpig4 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . dax5mxpt1x . e5djmff4ey ) , rtdwData , 0 , 522 , sizeof ( rtDW .
dax5mxpt1x . e5djmff4ey ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bmgxswof1n . j2wb0heh5r ) , rtdwData , 0 , 523 , sizeof ( rtDW . bmgxswof1n .
j2wb0heh5r ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . bmgxswof1n . inqavurpq2 ) , rtdwData , 0 , 524 , sizeof ( rtDW .
bmgxswof1n . inqavurpq2 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
c4ex142obk . ofrvdmgnuh ) , rtdwData , 0 , 525 , sizeof ( rtDW . c4ex142obk .
ofrvdmgnuh ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . c4ex142obk . jq1v3dabca ) , rtdwData , 0 , 526 , sizeof ( rtDW .
c4ex142obk . jq1v3dabca ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jqkgyvk5wj . dxojn2xddw ) , rtdwData , 0 , 527 , sizeof ( rtDW . jqkgyvk5wj .
dxojn2xddw ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . jqkgyvk5wj . bko3b1m5jh ) , rtdwData , 0 , 528 , sizeof ( rtDW .
jqkgyvk5wj . bko3b1m5jh ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pr5yb11xg2 . arfpsuibu4 ) , rtdwData , 0 , 529 , sizeof ( rtDW . pr5yb11xg2 .
arfpsuibu4 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . pr5yb11xg2 . gzbdyuemgc ) , rtdwData , 0 , 530 , sizeof ( rtDW .
pr5yb11xg2 . gzbdyuemgc ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
e0yth1yr5j . d0r4pg3qpe ) , rtdwData , 0 , 531 , sizeof ( rtDW . e0yth1yr5j .
d0r4pg3qpe ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . e0yth1yr5j . mpmtoteyyz ) , rtdwData , 0 , 532 , sizeof ( rtDW .
e0yth1yr5j . mpmtoteyyz ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
depkfxt3dl . o2cwobb3pj ) , rtdwData , 0 , 533 , sizeof ( rtDW . depkfxt3dl .
o2cwobb3pj ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . depkfxt3dl . om1xuzw1eo ) , rtdwData , 0 , 534 , sizeof ( rtDW .
depkfxt3dl . om1xuzw1eo ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nljvbf4yun . ak5b20glzq ) , rtdwData , 0 , 535 , sizeof ( rtDW . nljvbf4yun .
ak5b20glzq ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . nljvbf4yun . eq21cdu2ve ) , rtdwData , 0 , 536 , sizeof ( rtDW .
nljvbf4yun . eq21cdu2ve ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
liocd5kn1l . ottkqopm4f ) , rtdwData , 0 , 537 , sizeof ( rtDW . liocd5kn1l .
ottkqopm4f ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . liocd5kn1l . eohabhj4xn ) , rtdwData , 0 , 538 , sizeof ( rtDW .
liocd5kn1l . eohabhj4xn ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
crqoduzoa4 . e4ft35rk43 ) , rtdwData , 0 , 539 , sizeof ( rtDW . crqoduzoa4 .
e4ft35rk43 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . crqoduzoa4 . dess21gzas ) , rtdwData , 0 , 540 , sizeof ( rtDW .
crqoduzoa4 . dess21gzas ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
buqfyhw4zg . iua2aul0k5 ) , rtdwData , 0 , 541 , sizeof ( rtDW . buqfyhw4zg .
iua2aul0k5 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . buqfyhw4zg . bzq3ui1czr ) , rtdwData , 0 , 542 , sizeof ( rtDW .
buqfyhw4zg . bzq3ui1czr ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fpel54lr1q . kj0js5y43a ) , rtdwData , 0 , 543 , sizeof ( rtDW . fpel54lr1q .
kj0js5y43a ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . fpel54lr1q . dj53101tjo ) , rtdwData , 0 , 544 , sizeof ( rtDW .
fpel54lr1q . dj53101tjo ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
d3o4x0ovlb . abs01yeupq ) , rtdwData , 0 , 545 , sizeof ( rtDW . d3o4x0ovlb .
abs01yeupq ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . d3o4x0ovlb . llq5zg0hho ) , rtdwData , 0 , 546 , sizeof ( rtDW .
d3o4x0ovlb . llq5zg0hho ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dhqnhtbmwa . h4dsuebilz ) , rtdwData , 0 , 547 , sizeof ( rtDW . dhqnhtbmwa .
h4dsuebilz ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . dhqnhtbmwa . kyqlsdxb1f ) , rtdwData , 0 , 548 , sizeof ( rtDW .
dhqnhtbmwa . kyqlsdxb1f ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
a1r25vmwrh . cdjbjgd1xc ) , rtdwData , 0 , 549 , sizeof ( rtDW . a1r25vmwrh .
cdjbjgd1xc ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . a1r25vmwrh . l0e4fwians ) , rtdwData , 0 , 550 , sizeof ( rtDW .
a1r25vmwrh . l0e4fwians ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cit10epw2d . kmvjqif1vx ) , rtdwData , 0 , 551 , sizeof ( rtDW . cit10epw2d .
kmvjqif1vx ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . cit10epw2d . leoynkr3q5 ) , rtdwData , 0 , 552 , sizeof ( rtDW .
cit10epw2d . leoynkr3q5 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pnkexv004t . ihbdkradn2 ) , rtdwData , 0 , 553 , sizeof ( rtDW . pnkexv004t .
ihbdkradn2 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . pnkexv004t . kfwk41aocj ) , rtdwData , 0 , 554 , sizeof ( rtDW .
pnkexv004t . kfwk41aocj ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kkcnk3nues . bhhrytpig4 ) , rtdwData , 0 , 555 , sizeof ( rtDW . kkcnk3nues .
bhhrytpig4 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . kkcnk3nues . e5djmff4ey ) , rtdwData , 0 , 556 , sizeof ( rtDW .
kkcnk3nues . e5djmff4ey ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
il5ne4vyn3 . j2wb0heh5r ) , rtdwData , 0 , 557 , sizeof ( rtDW . il5ne4vyn3 .
j2wb0heh5r ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . il5ne4vyn3 . inqavurpq2 ) , rtdwData , 0 , 558 , sizeof ( rtDW .
il5ne4vyn3 . inqavurpq2 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fxuvuc5ilx3 . ofrvdmgnuh ) , rtdwData , 0 , 559 , sizeof ( rtDW . fxuvuc5ilx3
. ofrvdmgnuh ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . fxuvuc5ilx3 . jq1v3dabca ) , rtdwData , 0 , 560 , sizeof (
rtDW . fxuvuc5ilx3 . jq1v3dabca ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
onrxopzil04 . dxojn2xddw ) , rtdwData , 0 , 561 , sizeof ( rtDW . onrxopzil04
. dxojn2xddw ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . onrxopzil04 . bko3b1m5jh ) , rtdwData , 0 , 562 , sizeof (
rtDW . onrxopzil04 . bko3b1m5jh ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dlafdnj3fgi . arfpsuibu4 ) , rtdwData , 0 , 563 , sizeof ( rtDW . dlafdnj3fgi
. arfpsuibu4 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . dlafdnj3fgi . gzbdyuemgc ) , rtdwData , 0 , 564 , sizeof (
rtDW . dlafdnj3fgi . gzbdyuemgc ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
m1qiz2ekayi . d0r4pg3qpe ) , rtdwData , 0 , 565 , sizeof ( rtDW . m1qiz2ekayi
. d0r4pg3qpe ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . m1qiz2ekayi . mpmtoteyyz ) , rtdwData , 0 , 566 , sizeof (
rtDW . m1qiz2ekayi . mpmtoteyyz ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
j11vdnbc5b2 . o2cwobb3pj ) , rtdwData , 0 , 567 , sizeof ( rtDW . j11vdnbc5b2
. o2cwobb3pj ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . j11vdnbc5b2 . om1xuzw1eo ) , rtdwData , 0 , 568 , sizeof (
rtDW . j11vdnbc5b2 . om1xuzw1eo ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
f2rydg4dp1k . ak5b20glzq ) , rtdwData , 0 , 569 , sizeof ( rtDW . f2rydg4dp1k
. ak5b20glzq ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . f2rydg4dp1k . eq21cdu2ve ) , rtdwData , 0 , 570 , sizeof (
rtDW . f2rydg4dp1k . eq21cdu2ve ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bstd1u2cpob . ottkqopm4f ) , rtdwData , 0 , 571 , sizeof ( rtDW . bstd1u2cpob
. ottkqopm4f ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . bstd1u2cpob . eohabhj4xn ) , rtdwData , 0 , 572 , sizeof (
rtDW . bstd1u2cpob . eohabhj4xn ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
aazmv33tcmo . e4ft35rk43 ) , rtdwData , 0 , 573 , sizeof ( rtDW . aazmv33tcmo
. e4ft35rk43 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . aazmv33tcmo . dess21gzas ) , rtdwData , 0 , 574 , sizeof (
rtDW . aazmv33tcmo . dess21gzas ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mtt1ayedixs . iua2aul0k5 ) , rtdwData , 0 , 575 , sizeof ( rtDW . mtt1ayedixs
. iua2aul0k5 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . mtt1ayedixs . bzq3ui1czr ) , rtdwData , 0 , 576 , sizeof (
rtDW . mtt1ayedixs . bzq3ui1czr ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jtd3j4qmtj3 . kj0js5y43a ) , rtdwData , 0 , 577 , sizeof ( rtDW . jtd3j4qmtj3
. kj0js5y43a ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . jtd3j4qmtj3 . dj53101tjo ) , rtdwData , 0 , 578 , sizeof (
rtDW . jtd3j4qmtj3 . dj53101tjo ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hx2bxym1a4g . abs01yeupq ) , rtdwData , 0 , 579 , sizeof ( rtDW . hx2bxym1a4g
. abs01yeupq ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . hx2bxym1a4g . llq5zg0hho ) , rtdwData , 0 , 580 , sizeof (
rtDW . hx2bxym1a4g . llq5zg0hho ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fzp5yrcmsta . h4dsuebilz ) , rtdwData , 0 , 581 , sizeof ( rtDW . fzp5yrcmsta
. h4dsuebilz ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . fzp5yrcmsta . kyqlsdxb1f ) , rtdwData , 0 , 582 , sizeof (
rtDW . fzp5yrcmsta . kyqlsdxb1f ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
k33a52bgwif . cdjbjgd1xc ) , rtdwData , 0 , 583 , sizeof ( rtDW . k33a52bgwif
. cdjbjgd1xc ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . k33a52bgwif . l0e4fwians ) , rtdwData , 0 , 584 , sizeof (
rtDW . k33a52bgwif . l0e4fwians ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
po54rt51rvx . kmvjqif1vx ) , rtdwData , 0 , 585 , sizeof ( rtDW . po54rt51rvx
. kmvjqif1vx ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . po54rt51rvx . leoynkr3q5 ) , rtdwData , 0 , 586 , sizeof (
rtDW . po54rt51rvx . leoynkr3q5 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mggcxvqcxnx . ihbdkradn2 ) , rtdwData , 0 , 587 , sizeof ( rtDW . mggcxvqcxnx
. ihbdkradn2 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . mggcxvqcxnx . kfwk41aocj ) , rtdwData , 0 , 588 , sizeof (
rtDW . mggcxvqcxnx . kfwk41aocj ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nt3t3nwbzjn . bhhrytpig4 ) , rtdwData , 0 , 589 , sizeof ( rtDW . nt3t3nwbzjn
. bhhrytpig4 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . nt3t3nwbzjn . e5djmff4ey ) , rtdwData , 0 , 590 , sizeof (
rtDW . nt3t3nwbzjn . e5djmff4ey ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kum1vfui1c3 . j2wb0heh5r ) , rtdwData , 0 , 591 , sizeof ( rtDW . kum1vfui1c3
. j2wb0heh5r ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . kum1vfui1c3 . inqavurpq2 ) , rtdwData , 0 , 592 , sizeof (
rtDW . kum1vfui1c3 . inqavurpq2 ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
p1cpbmtwa2 . dzegpmyi00 ) , rtdwData , 0 , 593 , sizeof ( rtDW . p1cpbmtwa2 .
dzegpmyi00 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . p1cpbmtwa2 . aati4n1exl ) , rtdwData , 0 , 594 , sizeof ( rtDW .
p1cpbmtwa2 . aati4n1exl ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dk52awvy35 . dzegpmyi00 ) , rtdwData , 0 , 595 , sizeof ( rtDW . dk52awvy35 .
dzegpmyi00 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . dk52awvy35 . aati4n1exl ) , rtdwData , 0 , 596 , sizeof ( rtDW .
dk52awvy35 . aati4n1exl ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
faha5qigiv5 . dzegpmyi00 ) , rtdwData , 0 , 597 , sizeof ( rtDW . faha5qigiv5
. dzegpmyi00 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . faha5qigiv5 . aati4n1exl ) , rtdwData , 0 , 598 , sizeof (
rtDW . faha5qigiv5 . aati4n1exl ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
itndmcozqm . akkfyrovb0 ) , rtdwData , 0 , 599 , sizeof ( rtDW . itndmcozqm .
akkfyrovb0 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . itndmcozqm . oozywslmnt ) , rtdwData , 0 , 600 , sizeof ( rtDW .
itndmcozqm . oozywslmnt ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hv3vc22vuw . pf0eocqu32 ) , rtdwData , 0 , 601 , sizeof ( rtDW . hv3vc22vuw .
pf0eocqu32 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . hv3vc22vuw . ptznzx2qmi ) , rtdwData , 0 , 602 , sizeof ( rtDW .
hv3vc22vuw . ptznzx2qmi ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hv3vc22vuw . dsczn1cz1s ) , rtdwData , 0 , 603 , sizeof ( rtDW . hv3vc22vuw .
dsczn1cz1s ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . hv3vc22vuw . pqjrcy3mks ) , rtdwData , 0 , 604 , sizeof ( rtDW .
hv3vc22vuw . pqjrcy3mks ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ndmardmusd . lvbeuc3sjb ) , rtdwData , 0 , 605 , sizeof ( rtDW . ndmardmusd .
lvbeuc3sjb ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . ndmardmusd . mr2pswpsef ) , rtdwData , 0 , 606 , sizeof ( rtDW .
ndmardmusd . mr2pswpsef ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ndmardmusd . dpphodfkey ) , rtdwData , 0 , 607 , sizeof ( rtDW . ndmardmusd .
dpphodfkey ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . ndmardmusd . c3ky5ehk3m ) , rtdwData , 0 , 608 , sizeof ( rtDW .
ndmardmusd . c3ky5ehk3m ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
edawel13bx . jr12xlibrl ) , rtdwData , 0 , 609 , sizeof ( rtDW . edawel13bx .
jr12xlibrl ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . edawel13bx . gm2p0wwtvc ) , rtdwData , 0 , 610 , sizeof ( rtDW .
edawel13bx . gm2p0wwtvc ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
edawel13bx . mtvokfg2km ) , rtdwData , 0 , 611 , sizeof ( rtDW . edawel13bx .
mtvokfg2km ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . edawel13bx . dgqdsbadmt ) , rtdwData , 0 , 612 , sizeof ( rtDW .
edawel13bx . dgqdsbadmt ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dcguzoxh2sb . akkfyrovb0 ) , rtdwData , 0 , 613 , sizeof ( rtDW . dcguzoxh2sb
. akkfyrovb0 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void
* ) & ( rtDW . dcguzoxh2sb . oozywslmnt ) , rtdwData , 0 , 614 , sizeof (
rtDW . dcguzoxh2sb . oozywslmnt ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
baulvd1vdb . pf0eocqu32 ) , rtdwData , 0 , 615 , sizeof ( rtDW . baulvd1vdb .
pf0eocqu32 ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . baulvd1vdb . ptznzx2qmi ) , rtdwData , 0 , 616 , sizeof ( rtDW .
baulvd1vdb . ptznzx2qmi ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
baulvd1vdb . dsczn1cz1s ) , rtdwData , 0 , 617 , sizeof ( rtDW . baulvd1vdb .
dsczn1cz1s ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . baulvd1vdb . pqjrcy3mks ) , rtdwData , 0 , 618 , sizeof ( rtDW .
baulvd1vdb . pqjrcy3mks ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cmiciuw2cg . lvbeuc3sjb ) , rtdwData , 0 , 619 , sizeof ( rtDW . cmiciuw2cg .
lvbeuc3sjb ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . cmiciuw2cg . mr2pswpsef ) , rtdwData , 0 , 620 , sizeof ( rtDW .
cmiciuw2cg . mr2pswpsef ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cmiciuw2cg . dpphodfkey ) , rtdwData , 0 , 621 , sizeof ( rtDW . cmiciuw2cg .
dpphodfkey ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . cmiciuw2cg . c3ky5ehk3m ) , rtdwData , 0 , 622 , sizeof ( rtDW .
cmiciuw2cg . c3ky5ehk3m ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
p0vbpdtq52 . jr12xlibrl ) , rtdwData , 0 , 623 , sizeof ( rtDW . p0vbpdtq52 .
jr12xlibrl ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . p0vbpdtq52 . gm2p0wwtvc ) , rtdwData , 0 , 624 , sizeof ( rtDW .
p0vbpdtq52 . gm2p0wwtvc ) ) ;
mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
p0vbpdtq52 . mtvokfg2km ) , rtdwData , 0 , 625 , sizeof ( rtDW . p0vbpdtq52 .
mtvokfg2km ) ) ; mr_DUALportRAMinterface_v3_restoreDataFromMxArray ( ( void *
) & ( rtDW . p0vbpdtq52 . dgqdsbadmt ) , rtdwData , 0 , 626 , sizeof ( rtDW .
p0vbpdtq52 . dgqdsbadmt ) ) ; } } mxArray *
mr_DUALportRAMinterface_v3_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 10 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char_T * blockType [ 10 ] = { "Scope" , "Scope" , "Scope" , "Scope" , "Scope"
, "Scope" , "Scope" , "Scope" , "Scope" , "Scope" , } ; static const char_T *
blockPath [ 10 ] = { "DUALportRAMinterface_v3/Scope" ,
"DUALportRAMinterface_v3/Scope1" , "DUALportRAMinterface_v3/Scope2" ,
"DUALportRAMinterface_v3/Scope3" , "DUALportRAMinterface_v3/Scope9" ,
"DUALportRAMinterface_v3/PL/integration_block1/Subsystem/a2_random/Scope1" ,
"DUALportRAMinterface_v3/PL/integration_block1/Subsystem/a2_random/Scope2" ,
"DUALportRAMinterface_v3/PL/integration_block1/Subsystem/a2_random/Scope3" ,
"DUALportRAMinterface_v3/PL/integration_block1/Subsystem/a2_random/Scope4" ,
"DUALportRAMinterface_v3/PL/integration_block1/Subsystem/a2_random/Scope5" ,
} ; static const int reason [ 10 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] < 10 ; ++ ( subs [ 0 ] ) ) { subs [ 1
] = 0 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data
, offset , mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateDoubleScalar ( ( real_T ) reason [ subs [ 0 ] ] ) ) ; } }
return data ; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS ,
0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough
( rtS , 0 ) ; ssSetNumSampleTimes ( rtS , 1 ) ; ssSetNumBlocks ( rtS , 1993 )
; ssSetNumBlockIO ( rtS , 462 ) ; ssSetNumBlockParams ( rtS , 25033 ) ; }
void MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 ,
7.5000750007500074E-6 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ; } void
raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 2084735353U ) ;
ssSetChecksumVal ( rtS , 1 , 3922637197U ) ; ssSetChecksumVal ( rtS , 2 ,
527225216U ) ; ssSetChecksumVal ( rtS , 3 , 1086068622U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; executionInfo -> gblObjects_ . numToFiles = 0 ;
executionInfo -> gblObjects_ . numFrFiles = 0 ; executionInfo -> gblObjects_
. numFrWksBlocks = 2 ; executionInfo -> gblObjects_ . numModelInputs = 0 ;
executionInfo -> gblObjects_ . numRootInportBlks = 0 ; executionInfo ->
gblObjects_ . inportDataTypeIdx = NULL ; executionInfo -> gblObjects_ .
inportDims = NULL ; executionInfo -> gblObjects_ . inportComplex = NULL ;
executionInfo -> gblObjects_ . inportInterpoFlag = NULL ; executionInfo ->
gblObjects_ . inportContinuous = NULL ; ( void ) memset ( ( char_T * ) rtS ,
0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char_T * ) & mdlInfo , 0 ,
sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char_T * ) & blkInfo2 ,
0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char_T * ) &
blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ; ssSetBlkInfo2Ptr (
rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , & blkInfoSLSize ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo ( rtS ,
executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { void * dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork
) ; ( void ) memset ( dwork , 0 , sizeof ( DW ) ) ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 132 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ;
dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
DUALportRAMinterface_v3_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"DUALportRAMinterface_v3" ) ; ssSetPath ( rtS , "DUALportRAMinterface_v3" ) ;
ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 200.0 ) ; ssSetStepSize ( rtS
, 7.5000750007500074E-6 ) ; ssSetFixedStepSize ( rtS , 7.5000750007500074E-6
) ; { static RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo .
loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ;
} { { static int_T rt_LoggedStateWidths [ ] = { 12292 , 12292 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 6146 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
16 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 6145 , 1 , 2048 , 1 , 1 , 6144 ,
2048 , 1 , 6144 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 4032 , 63 , 1 , 1 , 1 , 1 , 1 , 1
} ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 12292 , 12292 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 6146 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 16 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 6145 , 1 , 2048 , 1 , 1 , 6144 , 2048 , 1 , 6144 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 4032 , 63 , 1 , 1 , 1 , 1 , 1 , 1 } ; static
boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_UINT16 , SS_UINT16 , SS_UINT16 ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_UINT8 , SS_UINT8 , SS_UINT8 , SS_UINT8
, SS_UINT8 , SS_UINT8 , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN ,
SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN ,
SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN ,
SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN ,
SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN ,
SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN ,
SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN ,
SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN , SS_BOOLEAN ,
SS_BOOLEAN , SS_BOOLEAN , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE } ; static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) }
; static const char_T * rt_LoggedStateLabels [ ] = { "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" } ; static
const char_T * rt_LoggedStateBlockNames [ ] = {
"DUALportRAMinterface_v3/start_signal2/Delay2" ,
"DUALportRAMinterface_v3/start_signal1/Delay2" ,
"DUALportRAMinterface_v3/read_data/Delay2" ,
 "DUALportRAMinterface_v3/PL/integration_block1/FIFO_system3/HDL FIFO1/outselect_reg"
,
 "DUALportRAMinterface_v3/PL/integration_block1/FIFO_system1/HDL FIFO1/outselect_reg"
, "DUALportRAMinterface_v3/PL/integration_block1/accumulator_scorer/Delay" ,
"DUALportRAMinterface_v3/PL/integration_block1/D2/s_state_out3" ,
"DUALportRAMinterface_v3/PL/integration_block1/D2/s_state_out2" ,
"DUALportRAMinterface_v3/PL/integration_block1/D2/s_state_out11" ,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual1/Subsystem/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual1/Subsystem1/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual1/Subsystem2/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual1/Subsystem3/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual1/Subsystem4/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual1/Subsystem5/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual1/Subsystem6/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual1/Subsystem/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual2/Subsystem/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual3/Subsystem/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual4/Subsystem/Delay"
,
"DUALportRAMinterface_v3/PL/integration_block1/D2/individual1/Subsystem6/Delay"
,
"DUALportRAMinterface_v3/PL/integration_block1/D2/individual1/Subsystem5/Delay"
,
"DUALportRAMinterface_v3/PL/integration_block1/D2/individual1/Subsystem4/Delay"
,
"DUALportRAMinterface_v3/PL/integration_block1/D2/individual1/Subsystem3/Delay"
,
"DUALportRAMinterface_v3/PL/integration_block1/D2/individual1/Subsystem2/Delay"
,
"DUALportRAMinterface_v3/PL/integration_block1/D2/individual1/Subsystem1/Delay"
,
"DUALportRAMinterface_v3/PL/integration_block1/D2/individual1/Subsystem/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual2/Subsystem/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual2/Subsystem1/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual2/Subsystem2/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual2/Subsystem3/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual2/Subsystem4/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual2/Subsystem5/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual2/Subsystem6/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual3/Subsystem/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual3/Subsystem1/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual3/Subsystem2/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual3/Subsystem3/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual3/Subsystem4/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual3/Subsystem5/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual3/Subsystem6/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual4/Subsystem/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual4/Subsystem1/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual4/Subsystem2/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual4/Subsystem3/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual4/Subsystem4/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual4/Subsystem5/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/individual4/Subsystem6/Delay"
, "DUALportRAMinterface_v3/PL/integration_block1/GA_main/Delay" ,
"DUALportRAMinterface_v3/PL/integration_block1/GA_main/Delay1" ,
"DUALportRAMinterface_v3/PL/integration_block1/GA_main/Delay2" ,
"DUALportRAMinterface_v3/PL/integration_block1/GA_main/Delay3" ,
"DUALportRAMinterface_v3/PL/integration_block1/GA_main/Delay4" ,
"DUALportRAMinterface_v3/PL/integration_block1/GA_main/Delay5" ,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual1/Subsystem1/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual1/Subsystem2/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual1/Subsystem3/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual1/Subsystem4/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual1/Subsystem5/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual1/Subsystem6/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual2/Subsystem1/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual2/Subsystem2/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual2/Subsystem3/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual2/Subsystem4/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual2/Subsystem5/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual2/Subsystem6/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual3/Subsystem1/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual3/Subsystem2/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual3/Subsystem3/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual3/Subsystem4/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual3/Subsystem5/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual3/Subsystem6/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual4/Subsystem1/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual4/Subsystem2/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual4/Subsystem3/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual4/Subsystem4/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual4/Subsystem5/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual4/Subsystem6/Delay"
, "DUALportRAMinterface_v3/Counter\nLimited1/Output" ,
"DUALportRAMinterface_v3/PL/index_counter/Delay" ,
"DUALportRAMinterface_v3/PL/integration_block1/GA_main/generation_counter/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/FIFO_system3/HDL FIFO1/sampleOutNum"
, "DUALportRAMinterface_v3/PL/integration_block1/FIFO_system1/Delay1" ,
 "DUALportRAMinterface_v3/PL/integration_block1/FIFO_system1/HDL FIFO1/sampleOutNum"
,
 "DUALportRAMinterface_v3/PL/integration_block1/FIFO_system1/HDL FIFO1/PopIdx/dir_reg"
,
 "DUALportRAMinterface_v3/PL/integration_block1/FIFO_system1/HDL FIFO1/PopIdx/idx_reg"
,
 "DUALportRAMinterface_v3/PL/integration_block1/FIFO_system1/HDL FIFO1/PushIdx/dir_reg"
,
 "DUALportRAMinterface_v3/PL/integration_block1/FIFO_system1/HDL FIFO1/PushIdx/idx_reg"
, "DUALportRAMinterface_v3/PL/integration_block1/FIFO_system3/Delay1" ,
 "DUALportRAMinterface_v3/PL/integration_block1/FIFO_system3/HDL FIFO1/PopIdx/dir_reg"
,
 "DUALportRAMinterface_v3/PL/integration_block1/FIFO_system3/HDL FIFO1/PopIdx/idx_reg"
,
 "DUALportRAMinterface_v3/PL/integration_block1/FIFO_system3/HDL FIFO1/PushIdx/dir_reg"
,
 "DUALportRAMinterface_v3/PL/integration_block1/FIFO_system3/HDL FIFO1/PushIdx/idx_reg"
, "DUALportRAMinterface_v3/Delay5" ,
"DUALportRAMinterface_v3/PL/integration_block1/FIFO_system3/HDL FIFO1/out_reg"
,
"DUALportRAMinterface_v3/PL/integration_block1/FIFO_system1/HDL FIFO1/out_reg"
,
 "DUALportRAMinterface_v3/PL/integration_block1/FIFO_system1/HDL FIFO1/Upsample2/Counter/Output"
,
 "DUALportRAMinterface_v3/PL/integration_block1/FIFO_system1/HDL FIFO1/Upsample1/Counter/Output"
,
 "DUALportRAMinterface_v3/PL/integration_block1/FIFO_system1/HDL FIFO1/Upsample/Counter/Output"
,
 "DUALportRAMinterface_v3/PL/integration_block1/FIFO_system3/HDL FIFO1/Upsample2/Counter/Output"
,
 "DUALportRAMinterface_v3/PL/integration_block1/FIFO_system3/HDL FIFO1/Upsample1/Counter/Output"
,
 "DUALportRAMinterface_v3/PL/integration_block1/FIFO_system3/HDL FIFO1/Upsample/Counter/Output"
, "DUALportRAMinterface_v3/PL/Delay" ,
"DUALportRAMinterface_v3/PL/integration_block1/GA_main/Delay7" ,
"DUALportRAMinterface_v3/PL/integration_block1/Delay3" ,
"DUALportRAMinterface_v3/PL/integration_block1/FIFO_system3/Delay3" ,
"DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR1/2_ss/Delay"
,
"DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR1/4_ss/Delay"
,
"DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR1/6_ss/Delay"
,
"DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR1/5_ss/Delay"
,
"DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR1/8_ss/Delay"
,
"DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR1/7_ss/Delay"
, "DUALportRAMinterface_v3/PL/integration_block1/Delay" ,
"DUALportRAMinterface_v3/PL/integration_block1/GA_main/Delay6" ,
"DUALportRAMinterface_v3/PL/integration_block1/FIFO_system1/Delay" ,
"DUALportRAMinterface_v3/PL/integration_block1/FIFO_system1/Delay2" ,
"DUALportRAMinterface_v3/PL/integration_block1/FIFO_system1/Delay3" ,
"DUALportRAMinterface_v3/PL/integration_block1/FIFO_system1/tuneback" ,
"DUALportRAMinterface_v3/PL/integration_block1/FIFO_system3/Delay" ,
"DUALportRAMinterface_v3/PL/integration_block1/FIFO_system3/Delay2" ,
"DUALportRAMinterface_v3/PL/integration_block1/FIFO_system3/tuneback" ,
"DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR1/13/Delay" ,
"DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR1/12/Delay" ,
"DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR1/3_ss/Delay"
, "DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR1/11/Delay"
, "DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR1/15/Delay"
, "DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR1/14/Delay"
, "DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR1/10/Delay"
,
"DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR1/9_ss/Delay"
, "DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR/10/Delay"
, "DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR/11/Delay"
, "DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR/12/Delay"
, "DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR/13/Delay"
, "DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR/14/Delay"
, "DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR/15/Delay"
, "DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR/16/Delay"
,
"DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR/1_ss/Delay"
,
"DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR/2_ss/Delay"
,
"DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR/3_ss/Delay"
,
"DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR/4_ss/Delay"
,
"DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR/5_ss/Delay"
,
"DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR/6_ss/Delay"
,
"DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR/7_ss/Delay"
,
"DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR/8_ss/Delay"
,
"DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR/9_ss/Delay"
, "DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR1/16/Delay"
,
"DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR1/1_ss/Delay"
, "DUALportRAMinterface_v3/PL/integration_block1/accumulator_scorer/Delay3" ,
"DUALportRAMinterface_v3/PL/integration_block1/accumulator_scorer/Delay1" ,
"DUALportRAMinterface_v3/PL/integration_block1/accumulator_scorer/Delay2" ,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/swap_counter1/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/swap_counter/Delay"
, "DUALportRAMinterface_v3/PL/integration_block1/GA_main/index_counter/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/swap_counter1/Delay"
,
 "DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array1/swap_counter/Delay"
} ; static const char_T * rt_LoggedStateNames [ ] = { "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" } ; static
boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWLogDataTypeConvert
rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 ,
1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } ,
{ 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 32
, 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 32 , 0.0 } , { 1
, SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 32 , 0.0 } , { 1 , SS_DOUBLE ,
SS_INT64 , 64 , 1 , 1 , 1.0 , - 32 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64
, 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0
, - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 }
, { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 ,
SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE ,
SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64
, 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0
, - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 }
, { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 ,
SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE ,
SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64
, 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0
, - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 }
, { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 ,
SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE ,
SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64
, 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0
, - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 }
, { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 ,
SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE ,
SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64
, 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0
, - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 }
, { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 ,
SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE ,
SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64
, 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0
, - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 }
, { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 ,
SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE ,
SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64
, 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0
, - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 }
, { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 ,
SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE ,
SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64
, 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0
, - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 }
, { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 ,
SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE ,
SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64
, 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0
, - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 }
, { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 ,
SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE ,
SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64
, 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0
, - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 }
, { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 ,
SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE ,
SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64
, 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0
, - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 }
, { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 ,
SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE ,
SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64
, 1 , 1 , 1.0 , - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0
, - 15 , 0.0 } , { 1 , SS_DOUBLE , SS_INT64 , 64 , 1 , 1 , 1.0 , - 15 , 0.0 }
, { 0 , SS_UINT16 , SS_UINT16 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_UINT16
, SS_UINT16 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_UINT16 , SS_UINT16 , 0 ,
0 , 0 , 1.0 , 0 , 0.0 } , { 1 , SS_DOUBLE , SS_UINT16 , 64 , 1 , 0 , 1.0 , 0
, 0.0 } , { 1 , SS_DOUBLE , SS_UINT16 , 64 , 1 , 0 , 1.0 , 0 , 0.0 } , { 1 ,
SS_DOUBLE , SS_UINT16 , 64 , 1 , 0 , 1.0 , 0 , 0.0 } , { 1 , SS_DOUBLE ,
SS_UINT16 , 64 , 1 , 0 , 1.0 , 0 , 0.0 } , { 1 , SS_DOUBLE , SS_UINT16 , 64 ,
1 , 0 , 1.0 , 0 , 0.0 } , { 1 , SS_DOUBLE , SS_UINT16 , 64 , 1 , 0 , 1.0 , 0
, 0.0 } , { 1 , SS_DOUBLE , SS_UINT16 , 64 , 1 , 0 , 1.0 , 0 , 0.0 } , { 1 ,
SS_DOUBLE , SS_UINT16 , 64 , 1 , 0 , 1.0 , 0 , 0.0 } , { 1 , SS_DOUBLE ,
SS_UINT16 , 64 , 1 , 0 , 1.0 , 0 , 0.0 } , { 1 , SS_DOUBLE , SS_UINT16 , 64 ,
1 , 0 , 1.0 , 0 , 0.0 } , { 1 , SS_DOUBLE , SS_UINT16 , 64 , 1 , 0 , 1.0 , 0
, 0.0 } , { 1 , SS_DOUBLE , SS_UINT16 , 64 , 1 , 0 , 1.0 , 0 , 0.0 } , { 1 ,
SS_DOUBLE , SS_INT16 , 64 , 1 , 1 , 1.0 , - 14 , 0.0 } , { 1 , SS_DOUBLE ,
SS_INT16 , 64 , 1 , 1 , 1.0 , - 14 , 0.0 } , { 1 , SS_DOUBLE , SS_INT16 , 64
, 1 , 1 , 1.0 , - 14 , 0.0 } , { 0 , SS_UINT8 , SS_UINT8 , 0 , 0 , 0 , 1.0 ,
0 , 0.0 } , { 0 , SS_UINT8 , SS_UINT8 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_UINT8 , SS_UINT8 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_UINT8 , SS_UINT8
, 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_UINT8 , SS_UINT8 , 0 , 0 , 0 , 1.0 ,
0 , 0.0 } , { 0 , SS_UINT8 , SS_UINT8 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN ,
SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0
, 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 ,
0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0
, SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN ,
SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0
, 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 ,
0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0
, SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN ,
SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0
, 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 ,
0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0
, SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN ,
SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0
, 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 ,
0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0
, SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN ,
SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0
, 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 ,
0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0
, SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN ,
SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0
, 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 ,
0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0
, SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN ,
SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0
, 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 ,
0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0
, SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN ,
SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0
, 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 ,
0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0
, SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN ,
SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0
, 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 ,
0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0
, SS_BOOLEAN , SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN ,
SS_BOOLEAN , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_BOOLEAN , SS_BOOLEAN , 0
, 0 , 0 , 1.0 , 0 , 0.0 } , { 1 , SS_DOUBLE , SS_UINT8 , 64 , 1 , 0 , 1.0 , 0
, 0.0 } , { 1 , SS_DOUBLE , SS_UINT8 , 64 , 1 , 0 , 1.0 , 0 , 0.0 } , { 1 ,
SS_DOUBLE , SS_UINT8 , 64 , 1 , 0 , 1.0 , 0 , 0.0 } , { 1 , SS_DOUBLE ,
SS_UINT8 , 64 , 1 , 0 , 1.0 , 0 , 0.0 } , { 1 , SS_DOUBLE , SS_UINT8 , 64 , 1
, 0 , 1.0 , 0 , 0.0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 8 , 9 ,
10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 24 , 25
, 26 , 27 , 28 , 29 , 30 , 31 , 32 , 33 , 34 , 35 , 36 , 37 , 38 , 39 , 40 ,
41 , 42 , 43 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51 , 52 , 53 , 54 , 55 , 56
, 57 , 58 , 59 , 60 , 61 , 62 , 63 , 64 , 65 , 66 , 67 , 68 , 69 , 70 , 71 ,
72 , 73 , 74 , 75 , 76 , 77 , 78 , 79 , 80 , 81 , 82 , 83 , 84 , 85 , 199 ,
200 , 201 , 202 , 203 , 204 , 205 , 206 , 207 , 208 , 209 , 210 , 211 , 212 ,
213 , 214 , 215 , 216 , 223 , 224 , 225 , 226 , 227 , 228 , 229 , 230 , 231 ,
232 , 233 , 234 , 235 , 236 , 237 , 238 , 239 , 240 , 241 , 242 , 243 , 244 ,
245 , 246 , 247 , 248 , 249 , 250 , 251 , 252 , 253 , 254 , 255 , 256 , 257 ,
258 , 259 , 260 , 261 , 262 , 263 , 264 , 265 , 266 , 267 , 268 , 269 , 270 ,
271 , 272 , 273 , 274 , 275 , 276 , 277 , 278 , 279 , 280 , 281 } ; static
RTWLogSignalInfo rt_LoggedStateSignalInfo = { 155 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 155 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) rtDW . mmbeeyt2c3 ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) rtDW . ghw5kalbtu ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtDW . pb1zjp11ah ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtDW . cjaep5120g ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtDW . ermftxd5xs ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtDW . kk3vqau5j4 ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtDW . cczfdi3ydg ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtDW . j3spvmunzs ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtDW . huil4csvle ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtDW . o2s0qk524e ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtDW . bujt1u5ssb ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtDW . ch3ulmwkxf ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtDW . npnmarbxwp ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtDW . luidyjwywm ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtDW . nct4dwsy42 ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtDW . m21yi3xe0r ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtDW . efb0llahxe ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtDW . cwc30hkp0p ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtDW . kgybnswm2h ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtDW . nzmtxoifv5 ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtDW . mcbewak1r4 ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtDW . hzvbnr4bgd ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtDW . e0hsphy30b ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtDW . pjspex5iux ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtDW . ceruf15djt ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtDW . nwj4wrfqti ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtDW . etvgfdreuz ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtDW . faabslxst2 ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) & rtDW . gumtab5fnv ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) & rtDW . d3nvmjf1vd ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) & rtDW . oruuzh4bzs ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) & rtDW . ew53tl52et ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) & rtDW . afmamtdg1h ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) & rtDW . kmhibglhil ;
rt_LoggedStateSignalPtrs [ 34 ] = ( void * ) & rtDW . c0mvgpjrpg ;
rt_LoggedStateSignalPtrs [ 35 ] = ( void * ) & rtDW . oc3xb3ueqi ;
rt_LoggedStateSignalPtrs [ 36 ] = ( void * ) & rtDW . ggpm4i3hqv ;
rt_LoggedStateSignalPtrs [ 37 ] = ( void * ) & rtDW . pgw0quxym3 ;
rt_LoggedStateSignalPtrs [ 38 ] = ( void * ) & rtDW . b3tarjjh2r ;
rt_LoggedStateSignalPtrs [ 39 ] = ( void * ) & rtDW . bjsvnxykzn ;
rt_LoggedStateSignalPtrs [ 40 ] = ( void * ) & rtDW . fn03ogv30b ;
rt_LoggedStateSignalPtrs [ 41 ] = ( void * ) & rtDW . o0tgjzszlx ;
rt_LoggedStateSignalPtrs [ 42 ] = ( void * ) & rtDW . jk0pdacxs0 ;
rt_LoggedStateSignalPtrs [ 43 ] = ( void * ) & rtDW . hkv3n4pgdt ;
rt_LoggedStateSignalPtrs [ 44 ] = ( void * ) & rtDW . msyvbfgmjp ;
rt_LoggedStateSignalPtrs [ 45 ] = ( void * ) & rtDW . i3gumoeyz1 ;
rt_LoggedStateSignalPtrs [ 46 ] = ( void * ) & rtDW . gxbtoq4uog ;
rt_LoggedStateSignalPtrs [ 47 ] = ( void * ) & rtDW . aqfzu2hilm ;
rt_LoggedStateSignalPtrs [ 48 ] = ( void * ) & rtDW . ceatu2c3ih ;
rt_LoggedStateSignalPtrs [ 49 ] = ( void * ) & rtDW . mzlkr3j3p5 ;
rt_LoggedStateSignalPtrs [ 50 ] = ( void * ) & rtDW . hr0f0pllzb ;
rt_LoggedStateSignalPtrs [ 51 ] = ( void * ) & rtDW . lj4qjxl3d5 ;
rt_LoggedStateSignalPtrs [ 52 ] = ( void * ) & rtDW . fwq22fuszr ;
rt_LoggedStateSignalPtrs [ 53 ] = ( void * ) & rtDW . lw2of50kxw ;
rt_LoggedStateSignalPtrs [ 54 ] = ( void * ) & rtDW . lrozmwruae ;
rt_LoggedStateSignalPtrs [ 55 ] = ( void * ) & rtDW . a33feioxw2 ;
rt_LoggedStateSignalPtrs [ 56 ] = ( void * ) & rtDW . afrmbd0iw3 ;
rt_LoggedStateSignalPtrs [ 57 ] = ( void * ) & rtDW . anfgrndojq ;
rt_LoggedStateSignalPtrs [ 58 ] = ( void * ) & rtDW . hwkvzcsfaz ;
rt_LoggedStateSignalPtrs [ 59 ] = ( void * ) & rtDW . cuscr1mv1o ;
rt_LoggedStateSignalPtrs [ 60 ] = ( void * ) & rtDW . hi5sxdgutv ;
rt_LoggedStateSignalPtrs [ 61 ] = ( void * ) & rtDW . g3mwssejug ;
rt_LoggedStateSignalPtrs [ 62 ] = ( void * ) & rtDW . ohb2remyso ;
rt_LoggedStateSignalPtrs [ 63 ] = ( void * ) & rtDW . nnehvfm43x ;
rt_LoggedStateSignalPtrs [ 64 ] = ( void * ) & rtDW . lqy3n4vuo3 ;
rt_LoggedStateSignalPtrs [ 65 ] = ( void * ) & rtDW . noj5hcq43l ;
rt_LoggedStateSignalPtrs [ 66 ] = ( void * ) & rtDW . h4kqpzy0bk ;
rt_LoggedStateSignalPtrs [ 67 ] = ( void * ) & rtDW . ehukj5uhzp ;
rt_LoggedStateSignalPtrs [ 68 ] = ( void * ) & rtDW . lma0feztag ;
rt_LoggedStateSignalPtrs [ 69 ] = ( void * ) & rtDW . balpcok03t ;
rt_LoggedStateSignalPtrs [ 70 ] = ( void * ) & rtDW . kbtqs1lj34 ;
rt_LoggedStateSignalPtrs [ 71 ] = ( void * ) & rtDW . pdm2ofpuvs ;
rt_LoggedStateSignalPtrs [ 72 ] = ( void * ) & rtDW . jgcfuyvz2d ;
rt_LoggedStateSignalPtrs [ 73 ] = ( void * ) & rtDW . p1ngo54os1 ;
rt_LoggedStateSignalPtrs [ 74 ] = ( void * ) & rtDW . pru2133ish ;
rt_LoggedStateSignalPtrs [ 75 ] = ( void * ) & rtDW . kspt2mhisp ;
rt_LoggedStateSignalPtrs [ 76 ] = ( void * ) & rtDW . kq5e4yhmjq ;
rt_LoggedStateSignalPtrs [ 77 ] = ( void * ) & rtDW . gr0nnucbwg ;
rt_LoggedStateSignalPtrs [ 78 ] = ( void * ) & rtDW . kwwlxjzdoe ;
rt_LoggedStateSignalPtrs [ 79 ] = ( void * ) & rtDW . dv5jqwdcth ;
rt_LoggedStateSignalPtrs [ 80 ] = ( void * ) & rtDW . ptf1jyuocm ;
rt_LoggedStateSignalPtrs [ 81 ] = ( void * ) & rtDW . cm2wzi1df3 ;
rt_LoggedStateSignalPtrs [ 82 ] = ( void * ) & rtDW . fw4xval30t ;
rt_LoggedStateSignalPtrs [ 83 ] = ( void * ) & rtDW . lqlczeokm5 ;
rt_LoggedStateSignalPtrs [ 84 ] = ( void * ) & rtDW . faksgtgdka ;
rt_LoggedStateSignalPtrs [ 85 ] = ( void * ) & rtDW . ipzfjakadv ;
rt_LoggedStateSignalPtrs [ 86 ] = ( void * ) & rtDW . jvuxplwco4 ;
rt_LoggedStateSignalPtrs [ 87 ] = ( void * ) & rtDW . gcyq4coupa ;
rt_LoggedStateSignalPtrs [ 88 ] = ( void * ) & rtDW . b4hfbet4ba ;
rt_LoggedStateSignalPtrs [ 89 ] = ( void * ) & rtDW . dfsdkk5fjk ;
rt_LoggedStateSignalPtrs [ 90 ] = ( void * ) & rtDW . b4ujwta3wy ;
rt_LoggedStateSignalPtrs [ 91 ] = ( void * ) & rtDW . cqvzla0ulg ;
rt_LoggedStateSignalPtrs [ 92 ] = ( void * ) & rtDW . jcvtghq3ig ;
rt_LoggedStateSignalPtrs [ 93 ] = ( void * ) rtDW . jl34i02arl ;
rt_LoggedStateSignalPtrs [ 94 ] = ( void * ) & rtDW . dmbtvfs22x ;
rt_LoggedStateSignalPtrs [ 95 ] = ( void * ) & rtDW . n2whdu3eol ;
rt_LoggedStateSignalPtrs [ 96 ] = ( void * ) & rtDW . ehzhklig5r ;
rt_LoggedStateSignalPtrs [ 97 ] = ( void * ) & rtDW . g2rlyn1hgy ;
rt_LoggedStateSignalPtrs [ 98 ] = ( void * ) & rtDW . cmvo3isroh ;
rt_LoggedStateSignalPtrs [ 99 ] = ( void * ) & rtDW . nc0waz21t1 ;
rt_LoggedStateSignalPtrs [ 100 ] = ( void * ) & rtDW . c0pmhbmlvb ;
rt_LoggedStateSignalPtrs [ 101 ] = ( void * ) & rtDW . fx4qkmoomx ;
rt_LoggedStateSignalPtrs [ 102 ] = ( void * ) rtDW . kbijeiibcz ;
rt_LoggedStateSignalPtrs [ 103 ] = ( void * ) & rtDW . gxoqfko3zl ;
rt_LoggedStateSignalPtrs [ 104 ] = ( void * ) & rtDW . lsrg3b3izb ;
rt_LoggedStateSignalPtrs [ 105 ] = ( void * ) & rtDW . e4apruk0cn ;
rt_LoggedStateSignalPtrs [ 106 ] = ( void * ) & rtDW . kdeplemgid ;
rt_LoggedStateSignalPtrs [ 107 ] = ( void * ) & rtDW . oq1rde331u ;
rt_LoggedStateSignalPtrs [ 108 ] = ( void * ) & rtDW . dri1oggmq0 ;
rt_LoggedStateSignalPtrs [ 109 ] = ( void * ) & rtDW . nv4uj53r02 ;
rt_LoggedStateSignalPtrs [ 110 ] = ( void * ) & rtDW . bxqyzy02ny ;
rt_LoggedStateSignalPtrs [ 111 ] = ( void * ) & rtDW . agzzpunc3i ;
rt_LoggedStateSignalPtrs [ 112 ] = ( void * ) rtDW . noznim2iqz ;
rt_LoggedStateSignalPtrs [ 113 ] = ( void * ) & rtDW . do1g134e35 ;
rt_LoggedStateSignalPtrs [ 114 ] = ( void * ) rtDW . jr11b3ek0i ;
rt_LoggedStateSignalPtrs [ 115 ] = ( void * ) & rtDW . cprxs0oxb4 ;
rt_LoggedStateSignalPtrs [ 116 ] = ( void * ) & rtDW . i4kbnwgsra ;
rt_LoggedStateSignalPtrs [ 117 ] = ( void * ) rtDW . akcvng45tl ;
rt_LoggedStateSignalPtrs [ 118 ] = ( void * ) rtDW . n4iun2fjnn ;
rt_LoggedStateSignalPtrs [ 119 ] = ( void * ) & rtDW . fr2u3bfpll ;
rt_LoggedStateSignalPtrs [ 120 ] = ( void * ) rtDW . bv1ncvrs1o ;
rt_LoggedStateSignalPtrs [ 121 ] = ( void * ) & rtDW . dzft24s4wf ;
rt_LoggedStateSignalPtrs [ 122 ] = ( void * ) & rtDW . jcwpmucczd ;
rt_LoggedStateSignalPtrs [ 123 ] = ( void * ) & rtDW . i3cg55zsq5 ;
rt_LoggedStateSignalPtrs [ 124 ] = ( void * ) & rtDW . duv4e2eeyz ;
rt_LoggedStateSignalPtrs [ 125 ] = ( void * ) & rtDW . cqzpsciwb0 ;
rt_LoggedStateSignalPtrs [ 126 ] = ( void * ) & rtDW . bgf0isn4m2 ;
rt_LoggedStateSignalPtrs [ 127 ] = ( void * ) & rtDW . iooznguwv5 ;
rt_LoggedStateSignalPtrs [ 128 ] = ( void * ) & rtDW . bkmzxq31d1 ;
rt_LoggedStateSignalPtrs [ 129 ] = ( void * ) & rtDW . kqgzq353ol ;
rt_LoggedStateSignalPtrs [ 130 ] = ( void * ) & rtDW . fgrwjt4a2w ;
rt_LoggedStateSignalPtrs [ 131 ] = ( void * ) & rtDW . e4hda03zrh ;
rt_LoggedStateSignalPtrs [ 132 ] = ( void * ) & rtDW . axrvuq4x5i ;
rt_LoggedStateSignalPtrs [ 133 ] = ( void * ) & rtDW . f3nepfq241 ;
rt_LoggedStateSignalPtrs [ 134 ] = ( void * ) & rtDW . ivftjkcvdy ;
rt_LoggedStateSignalPtrs [ 135 ] = ( void * ) & rtDW . kt2dvgietw ;
rt_LoggedStateSignalPtrs [ 136 ] = ( void * ) & rtDW . f125nvybng ;
rt_LoggedStateSignalPtrs [ 137 ] = ( void * ) & rtDW . pp1spekrho ;
rt_LoggedStateSignalPtrs [ 138 ] = ( void * ) & rtDW . lhex3u5h1f ;
rt_LoggedStateSignalPtrs [ 139 ] = ( void * ) & rtDW . fefcdgfhj1 ;
rt_LoggedStateSignalPtrs [ 140 ] = ( void * ) & rtDW . gqs1ppah0r ;
rt_LoggedStateSignalPtrs [ 141 ] = ( void * ) & rtDW . c2jypg20hx ;
rt_LoggedStateSignalPtrs [ 142 ] = ( void * ) & rtDW . esgl5mkr2h ;
rt_LoggedStateSignalPtrs [ 143 ] = ( void * ) & rtDW . oe1scdkmlv ;
rt_LoggedStateSignalPtrs [ 144 ] = ( void * ) & rtDW . fp3bheq2px ;
rt_LoggedStateSignalPtrs [ 145 ] = ( void * ) & rtDW . nkzaiaa2wi ;
rt_LoggedStateSignalPtrs [ 146 ] = ( void * ) & rtDW . a1gsgrx3gu ;
rt_LoggedStateSignalPtrs [ 147 ] = ( void * ) rtDW . oapwp3ivnb ;
rt_LoggedStateSignalPtrs [ 148 ] = ( void * ) rtDW . mfhlrzl41r ;
rt_LoggedStateSignalPtrs [ 149 ] = ( void * ) & rtDW . bognbsvydi ;
rt_LoggedStateSignalPtrs [ 150 ] = ( void * ) & rtDW . nys12ztjas ;
rt_LoggedStateSignalPtrs [ 151 ] = ( void * ) & rtDW . cozp4vn1gx ;
rt_LoggedStateSignalPtrs [ 152 ] = ( void * ) & rtDW . a2kthhvkup ;
rt_LoggedStateSignalPtrs [ 153 ] = ( void * ) & rtDW . e4ewwdakkt ;
rt_LoggedStateSignalPtrs [ 154 ] = ( void * ) & rtDW . pgl0dx24fb ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
ssSolverInfo slvrInfo ; ssSetNumNonContDerivSigInfos ( rtS , 0 ) ;
ssSetNonContDerivSigInfos ( rtS , ( NULL ) ) ; ssSetSolverInfo ( rtS , &
slvrInfo ) ; ssSetSolverName ( rtS , "FixedStepDiscrete" ) ;
ssSetVariableStepSolver ( rtS , 0 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetSolverStateProjection ( rtS ,
0 ) ; ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetTNextTid ( rtS , INT_MIN ) ;
ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; } ssSetChecksumVal ( rtS , 0 ,
2084735353U ) ; ssSetChecksumVal ( rtS , 1 , 3922637197U ) ; ssSetChecksumVal
( rtS , 2 , 527225216U ) ; ssSetChecksumVal ( rtS , 3 , 1086068622U ) ; {
static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static
RTWExtModeInfo rt_ExtModeInfo ; static const sysRanDType * systemRan [ 425 ]
; gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = &
rtAlwaysEnabled ; systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = &
rtAlwaysEnabled ; systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = &
rtAlwaysEnabled ; systemRan [ 8 ] = & rtAlwaysEnabled ; systemRan [ 9 ] = &
rtAlwaysEnabled ; systemRan [ 10 ] = & rtAlwaysEnabled ; systemRan [ 11 ] = &
rtAlwaysEnabled ; systemRan [ 12 ] = & rtAlwaysEnabled ; systemRan [ 13 ] = &
rtAlwaysEnabled ; systemRan [ 14 ] = & rtAlwaysEnabled ; systemRan [ 15 ] = &
rtAlwaysEnabled ; systemRan [ 16 ] = & rtAlwaysEnabled ; systemRan [ 17 ] = &
rtAlwaysEnabled ; systemRan [ 18 ] = & rtAlwaysEnabled ; systemRan [ 19 ] = &
rtAlwaysEnabled ; systemRan [ 20 ] = & rtAlwaysEnabled ; systemRan [ 21 ] = &
rtAlwaysEnabled ; systemRan [ 22 ] = & rtAlwaysEnabled ; systemRan [ 23 ] = &
rtAlwaysEnabled ; systemRan [ 24 ] = & rtAlwaysEnabled ; systemRan [ 25 ] = &
rtAlwaysEnabled ; systemRan [ 26 ] = & rtAlwaysEnabled ; systemRan [ 27 ] = &
rtAlwaysEnabled ; systemRan [ 28 ] = & rtAlwaysEnabled ; systemRan [ 29 ] = &
rtAlwaysEnabled ; systemRan [ 30 ] = & rtAlwaysEnabled ; systemRan [ 31 ] = &
rtAlwaysEnabled ; systemRan [ 32 ] = & rtAlwaysEnabled ; systemRan [ 33 ] = &
rtAlwaysEnabled ; systemRan [ 34 ] = & rtAlwaysEnabled ; systemRan [ 35 ] = &
rtAlwaysEnabled ; systemRan [ 36 ] = & rtAlwaysEnabled ; systemRan [ 37 ] = &
rtAlwaysEnabled ; systemRan [ 38 ] = & rtAlwaysEnabled ; systemRan [ 39 ] = &
rtAlwaysEnabled ; systemRan [ 40 ] = & rtAlwaysEnabled ; systemRan [ 41 ] = &
rtAlwaysEnabled ; systemRan [ 42 ] = & rtAlwaysEnabled ; systemRan [ 43 ] = &
rtAlwaysEnabled ; systemRan [ 44 ] = & rtAlwaysEnabled ; systemRan [ 45 ] = &
rtAlwaysEnabled ; systemRan [ 46 ] = & rtAlwaysEnabled ; systemRan [ 47 ] = &
rtAlwaysEnabled ; systemRan [ 48 ] = & rtAlwaysEnabled ; systemRan [ 49 ] = &
rtAlwaysEnabled ; systemRan [ 50 ] = & rtAlwaysEnabled ; systemRan [ 51 ] = &
rtAlwaysEnabled ; systemRan [ 52 ] = & rtAlwaysEnabled ; systemRan [ 53 ] = &
rtAlwaysEnabled ; systemRan [ 54 ] = & rtAlwaysEnabled ; systemRan [ 55 ] = &
rtAlwaysEnabled ; systemRan [ 56 ] = & rtAlwaysEnabled ; systemRan [ 57 ] = &
rtAlwaysEnabled ; systemRan [ 58 ] = & rtAlwaysEnabled ; systemRan [ 59 ] = &
rtAlwaysEnabled ; systemRan [ 60 ] = & rtAlwaysEnabled ; systemRan [ 61 ] = &
rtAlwaysEnabled ; systemRan [ 62 ] = & rtAlwaysEnabled ; systemRan [ 63 ] = &
rtAlwaysEnabled ; systemRan [ 64 ] = & rtAlwaysEnabled ; systemRan [ 65 ] = &
rtAlwaysEnabled ; systemRan [ 66 ] = & rtAlwaysEnabled ; systemRan [ 67 ] = &
rtAlwaysEnabled ; systemRan [ 68 ] = & rtAlwaysEnabled ; systemRan [ 69 ] = &
rtAlwaysEnabled ; systemRan [ 70 ] = & rtAlwaysEnabled ; systemRan [ 71 ] = &
rtAlwaysEnabled ; systemRan [ 72 ] = & rtAlwaysEnabled ; systemRan [ 73 ] = &
rtAlwaysEnabled ; systemRan [ 74 ] = & rtAlwaysEnabled ; systemRan [ 75 ] = &
rtAlwaysEnabled ; systemRan [ 76 ] = & rtAlwaysEnabled ; systemRan [ 77 ] = &
rtAlwaysEnabled ; systemRan [ 78 ] = & rtAlwaysEnabled ; systemRan [ 79 ] = &
rtAlwaysEnabled ; systemRan [ 80 ] = & rtAlwaysEnabled ; systemRan [ 81 ] = &
rtAlwaysEnabled ; systemRan [ 82 ] = & rtAlwaysEnabled ; systemRan [ 83 ] = &
rtAlwaysEnabled ; systemRan [ 84 ] = & rtAlwaysEnabled ; systemRan [ 85 ] = &
rtAlwaysEnabled ; systemRan [ 86 ] = & rtAlwaysEnabled ; systemRan [ 87 ] = &
rtAlwaysEnabled ; systemRan [ 88 ] = & rtAlwaysEnabled ; systemRan [ 89 ] = &
rtAlwaysEnabled ; systemRan [ 90 ] = & rtAlwaysEnabled ; systemRan [ 91 ] = &
rtAlwaysEnabled ; systemRan [ 92 ] = & rtAlwaysEnabled ; systemRan [ 93 ] = &
rtAlwaysEnabled ; systemRan [ 94 ] = & rtAlwaysEnabled ; systemRan [ 95 ] = &
rtAlwaysEnabled ; systemRan [ 96 ] = & rtAlwaysEnabled ; systemRan [ 97 ] = &
rtAlwaysEnabled ; systemRan [ 98 ] = & rtAlwaysEnabled ; systemRan [ 99 ] = &
rtAlwaysEnabled ; systemRan [ 100 ] = & rtAlwaysEnabled ; systemRan [ 101 ] =
& rtAlwaysEnabled ; systemRan [ 102 ] = & rtAlwaysEnabled ; systemRan [ 103 ]
= & rtAlwaysEnabled ; systemRan [ 104 ] = & rtAlwaysEnabled ; systemRan [ 105
] = & rtAlwaysEnabled ; systemRan [ 106 ] = & rtAlwaysEnabled ; systemRan [
107 ] = & rtAlwaysEnabled ; systemRan [ 108 ] = & rtAlwaysEnabled ; systemRan
[ 109 ] = & rtAlwaysEnabled ; systemRan [ 110 ] = & rtAlwaysEnabled ;
systemRan [ 111 ] = & rtAlwaysEnabled ; systemRan [ 112 ] = & rtAlwaysEnabled
; systemRan [ 113 ] = & rtAlwaysEnabled ; systemRan [ 114 ] = &
rtAlwaysEnabled ; systemRan [ 115 ] = & rtAlwaysEnabled ; systemRan [ 116 ] =
& rtAlwaysEnabled ; systemRan [ 117 ] = & rtAlwaysEnabled ; systemRan [ 118 ]
= & rtAlwaysEnabled ; systemRan [ 119 ] = & rtAlwaysEnabled ; systemRan [ 120
] = & rtAlwaysEnabled ; systemRan [ 121 ] = & rtAlwaysEnabled ; systemRan [
122 ] = & rtAlwaysEnabled ; systemRan [ 123 ] = & rtAlwaysEnabled ; systemRan
[ 124 ] = & rtAlwaysEnabled ; systemRan [ 125 ] = & rtAlwaysEnabled ;
systemRan [ 126 ] = & rtAlwaysEnabled ; systemRan [ 127 ] = & rtAlwaysEnabled
; systemRan [ 128 ] = & rtAlwaysEnabled ; systemRan [ 129 ] = &
rtAlwaysEnabled ; systemRan [ 130 ] = & rtAlwaysEnabled ; systemRan [ 131 ] =
& rtAlwaysEnabled ; systemRan [ 132 ] = & rtAlwaysEnabled ; systemRan [ 133 ]
= & rtAlwaysEnabled ; systemRan [ 134 ] = & rtAlwaysEnabled ; systemRan [ 135
] = & rtAlwaysEnabled ; systemRan [ 136 ] = & rtAlwaysEnabled ; systemRan [
137 ] = & rtAlwaysEnabled ; systemRan [ 138 ] = & rtAlwaysEnabled ; systemRan
[ 139 ] = & rtAlwaysEnabled ; systemRan [ 140 ] = & rtAlwaysEnabled ;
systemRan [ 141 ] = & rtAlwaysEnabled ; systemRan [ 142 ] = & rtAlwaysEnabled
; systemRan [ 143 ] = & rtAlwaysEnabled ; systemRan [ 144 ] = &
rtAlwaysEnabled ; systemRan [ 145 ] = & rtAlwaysEnabled ; systemRan [ 146 ] =
& rtAlwaysEnabled ; systemRan [ 147 ] = & rtAlwaysEnabled ; systemRan [ 148 ]
= & rtAlwaysEnabled ; systemRan [ 149 ] = & rtAlwaysEnabled ; systemRan [ 150
] = & rtAlwaysEnabled ; systemRan [ 151 ] = & rtAlwaysEnabled ; systemRan [
152 ] = & rtAlwaysEnabled ; systemRan [ 153 ] = & rtAlwaysEnabled ; systemRan
[ 154 ] = & rtAlwaysEnabled ; systemRan [ 155 ] = & rtAlwaysEnabled ;
systemRan [ 156 ] = & rtAlwaysEnabled ; systemRan [ 157 ] = & rtAlwaysEnabled
; systemRan [ 158 ] = & rtAlwaysEnabled ; systemRan [ 159 ] = &
rtAlwaysEnabled ; systemRan [ 160 ] = & rtAlwaysEnabled ; systemRan [ 161 ] =
& rtAlwaysEnabled ; systemRan [ 162 ] = & rtAlwaysEnabled ; systemRan [ 163 ]
= & rtAlwaysEnabled ; systemRan [ 164 ] = & rtAlwaysEnabled ; systemRan [ 165
] = & rtAlwaysEnabled ; systemRan [ 166 ] = & rtAlwaysEnabled ; systemRan [
167 ] = & rtAlwaysEnabled ; systemRan [ 168 ] = & rtAlwaysEnabled ; systemRan
[ 169 ] = & rtAlwaysEnabled ; systemRan [ 170 ] = & rtAlwaysEnabled ;
systemRan [ 171 ] = & rtAlwaysEnabled ; systemRan [ 172 ] = & rtAlwaysEnabled
; systemRan [ 173 ] = & rtAlwaysEnabled ; systemRan [ 174 ] = &
rtAlwaysEnabled ; systemRan [ 175 ] = & rtAlwaysEnabled ; systemRan [ 176 ] =
& rtAlwaysEnabled ; systemRan [ 177 ] = & rtAlwaysEnabled ; systemRan [ 178 ]
= & rtAlwaysEnabled ; systemRan [ 179 ] = & rtAlwaysEnabled ; systemRan [ 180
] = & rtAlwaysEnabled ; systemRan [ 181 ] = & rtAlwaysEnabled ; systemRan [
182 ] = & rtAlwaysEnabled ; systemRan [ 183 ] = & rtAlwaysEnabled ; systemRan
[ 184 ] = & rtAlwaysEnabled ; systemRan [ 185 ] = & rtAlwaysEnabled ;
systemRan [ 186 ] = & rtAlwaysEnabled ; systemRan [ 187 ] = & rtAlwaysEnabled
; systemRan [ 188 ] = & rtAlwaysEnabled ; systemRan [ 189 ] = &
rtAlwaysEnabled ; systemRan [ 190 ] = & rtAlwaysEnabled ; systemRan [ 191 ] =
& rtAlwaysEnabled ; systemRan [ 192 ] = & rtAlwaysEnabled ; systemRan [ 193 ]
= & rtAlwaysEnabled ; systemRan [ 194 ] = & rtAlwaysEnabled ; systemRan [ 195
] = & rtAlwaysEnabled ; systemRan [ 196 ] = & rtAlwaysEnabled ; systemRan [
197 ] = & rtAlwaysEnabled ; systemRan [ 198 ] = & rtAlwaysEnabled ; systemRan
[ 199 ] = & rtAlwaysEnabled ; systemRan [ 200 ] = & rtAlwaysEnabled ;
systemRan [ 201 ] = & rtAlwaysEnabled ; systemRan [ 202 ] = & rtAlwaysEnabled
; systemRan [ 203 ] = & rtAlwaysEnabled ; systemRan [ 204 ] = &
rtAlwaysEnabled ; systemRan [ 205 ] = & rtAlwaysEnabled ; systemRan [ 206 ] =
& rtAlwaysEnabled ; systemRan [ 207 ] = & rtAlwaysEnabled ; systemRan [ 208 ]
= & rtAlwaysEnabled ; systemRan [ 209 ] = & rtAlwaysEnabled ; systemRan [ 210
] = & rtAlwaysEnabled ; systemRan [ 211 ] = & rtAlwaysEnabled ; systemRan [
212 ] = & rtAlwaysEnabled ; systemRan [ 213 ] = & rtAlwaysEnabled ; systemRan
[ 214 ] = & rtAlwaysEnabled ; systemRan [ 215 ] = & rtAlwaysEnabled ;
systemRan [ 216 ] = & rtAlwaysEnabled ; systemRan [ 217 ] = & rtAlwaysEnabled
; systemRan [ 218 ] = & rtAlwaysEnabled ; systemRan [ 219 ] = &
rtAlwaysEnabled ; systemRan [ 220 ] = & rtAlwaysEnabled ; systemRan [ 221 ] =
& rtAlwaysEnabled ; systemRan [ 222 ] = & rtAlwaysEnabled ; systemRan [ 223 ]
= & rtAlwaysEnabled ; systemRan [ 224 ] = & rtAlwaysEnabled ; systemRan [ 225
] = & rtAlwaysEnabled ; systemRan [ 226 ] = & rtAlwaysEnabled ; systemRan [
227 ] = & rtAlwaysEnabled ; systemRan [ 228 ] = & rtAlwaysEnabled ; systemRan
[ 229 ] = & rtAlwaysEnabled ; systemRan [ 230 ] = & rtAlwaysEnabled ;
systemRan [ 231 ] = & rtAlwaysEnabled ; systemRan [ 232 ] = & rtAlwaysEnabled
; systemRan [ 233 ] = & rtAlwaysEnabled ; systemRan [ 234 ] = &
rtAlwaysEnabled ; systemRan [ 235 ] = & rtAlwaysEnabled ; systemRan [ 236 ] =
& rtAlwaysEnabled ; systemRan [ 237 ] = & rtAlwaysEnabled ; systemRan [ 238 ]
= & rtAlwaysEnabled ; systemRan [ 239 ] = & rtAlwaysEnabled ; systemRan [ 240
] = & rtAlwaysEnabled ; systemRan [ 241 ] = & rtAlwaysEnabled ; systemRan [
242 ] = & rtAlwaysEnabled ; systemRan [ 243 ] = & rtAlwaysEnabled ; systemRan
[ 244 ] = & rtAlwaysEnabled ; systemRan [ 245 ] = & rtAlwaysEnabled ;
systemRan [ 246 ] = & rtAlwaysEnabled ; systemRan [ 247 ] = & rtAlwaysEnabled
; systemRan [ 248 ] = & rtAlwaysEnabled ; systemRan [ 249 ] = &
rtAlwaysEnabled ; systemRan [ 250 ] = & rtAlwaysEnabled ; systemRan [ 251 ] =
& rtAlwaysEnabled ; systemRan [ 252 ] = & rtAlwaysEnabled ; systemRan [ 253 ]
= & rtAlwaysEnabled ; systemRan [ 254 ] = & rtAlwaysEnabled ; systemRan [ 255
] = & rtAlwaysEnabled ; systemRan [ 256 ] = & rtAlwaysEnabled ; systemRan [
257 ] = & rtAlwaysEnabled ; systemRan [ 258 ] = & rtAlwaysEnabled ; systemRan
[ 259 ] = & rtAlwaysEnabled ; systemRan [ 260 ] = & rtAlwaysEnabled ;
systemRan [ 261 ] = & rtAlwaysEnabled ; systemRan [ 262 ] = & rtAlwaysEnabled
; systemRan [ 263 ] = & rtAlwaysEnabled ; systemRan [ 264 ] = &
rtAlwaysEnabled ; systemRan [ 265 ] = & rtAlwaysEnabled ; systemRan [ 266 ] =
& rtAlwaysEnabled ; systemRan [ 267 ] = & rtAlwaysEnabled ; systemRan [ 268 ]
= & rtAlwaysEnabled ; systemRan [ 269 ] = & rtAlwaysEnabled ; systemRan [ 270
] = & rtAlwaysEnabled ; systemRan [ 271 ] = & rtAlwaysEnabled ; systemRan [
272 ] = & rtAlwaysEnabled ; systemRan [ 273 ] = & rtAlwaysEnabled ; systemRan
[ 274 ] = & rtAlwaysEnabled ; systemRan [ 275 ] = & rtAlwaysEnabled ;
systemRan [ 276 ] = & rtAlwaysEnabled ; systemRan [ 277 ] = & rtAlwaysEnabled
; systemRan [ 278 ] = & rtAlwaysEnabled ; systemRan [ 279 ] = &
rtAlwaysEnabled ; systemRan [ 280 ] = & rtAlwaysEnabled ; systemRan [ 281 ] =
& rtAlwaysEnabled ; systemRan [ 282 ] = & rtAlwaysEnabled ; systemRan [ 283 ]
= & rtAlwaysEnabled ; systemRan [ 284 ] = & rtAlwaysEnabled ; systemRan [ 285
] = & rtAlwaysEnabled ; systemRan [ 286 ] = & rtAlwaysEnabled ; systemRan [
287 ] = & rtAlwaysEnabled ; systemRan [ 288 ] = & rtAlwaysEnabled ; systemRan
[ 289 ] = & rtAlwaysEnabled ; systemRan [ 290 ] = & rtAlwaysEnabled ;
systemRan [ 291 ] = & rtAlwaysEnabled ; systemRan [ 292 ] = & rtAlwaysEnabled
; systemRan [ 293 ] = & rtAlwaysEnabled ; systemRan [ 294 ] = &
rtAlwaysEnabled ; systemRan [ 295 ] = & rtAlwaysEnabled ; systemRan [ 296 ] =
& rtAlwaysEnabled ; systemRan [ 297 ] = & rtAlwaysEnabled ; systemRan [ 298 ]
= & rtAlwaysEnabled ; systemRan [ 299 ] = & rtAlwaysEnabled ; systemRan [ 300
] = & rtAlwaysEnabled ; systemRan [ 301 ] = & rtAlwaysEnabled ; systemRan [
302 ] = & rtAlwaysEnabled ; systemRan [ 303 ] = & rtAlwaysEnabled ; systemRan
[ 304 ] = & rtAlwaysEnabled ; systemRan [ 305 ] = & rtAlwaysEnabled ;
systemRan [ 306 ] = & rtAlwaysEnabled ; systemRan [ 307 ] = & rtAlwaysEnabled
; systemRan [ 308 ] = & rtAlwaysEnabled ; systemRan [ 309 ] = &
rtAlwaysEnabled ; systemRan [ 310 ] = & rtAlwaysEnabled ; systemRan [ 311 ] =
& rtAlwaysEnabled ; systemRan [ 312 ] = & rtAlwaysEnabled ; systemRan [ 313 ]
= & rtAlwaysEnabled ; systemRan [ 314 ] = & rtAlwaysEnabled ; systemRan [ 315
] = & rtAlwaysEnabled ; systemRan [ 316 ] = & rtAlwaysEnabled ; systemRan [
317 ] = & rtAlwaysEnabled ; systemRan [ 318 ] = & rtAlwaysEnabled ; systemRan
[ 319 ] = & rtAlwaysEnabled ; systemRan [ 320 ] = & rtAlwaysEnabled ;
systemRan [ 321 ] = & rtAlwaysEnabled ; systemRan [ 322 ] = & rtAlwaysEnabled
; systemRan [ 323 ] = & rtAlwaysEnabled ; systemRan [ 324 ] = &
rtAlwaysEnabled ; systemRan [ 325 ] = & rtAlwaysEnabled ; systemRan [ 326 ] =
& rtAlwaysEnabled ; systemRan [ 327 ] = & rtAlwaysEnabled ; systemRan [ 328 ]
= & rtAlwaysEnabled ; systemRan [ 329 ] = & rtAlwaysEnabled ; systemRan [ 330
] = & rtAlwaysEnabled ; systemRan [ 331 ] = & rtAlwaysEnabled ; systemRan [
332 ] = & rtAlwaysEnabled ; systemRan [ 333 ] = & rtAlwaysEnabled ; systemRan
[ 334 ] = & rtAlwaysEnabled ; systemRan [ 335 ] = & rtAlwaysEnabled ;
systemRan [ 336 ] = & rtAlwaysEnabled ; systemRan [ 337 ] = & rtAlwaysEnabled
; systemRan [ 338 ] = & rtAlwaysEnabled ; systemRan [ 339 ] = &
rtAlwaysEnabled ; systemRan [ 340 ] = & rtAlwaysEnabled ; systemRan [ 341 ] =
& rtAlwaysEnabled ; systemRan [ 342 ] = & rtAlwaysEnabled ; systemRan [ 343 ]
= & rtAlwaysEnabled ; systemRan [ 344 ] = & rtAlwaysEnabled ; systemRan [ 345
] = & rtAlwaysEnabled ; systemRan [ 346 ] = & rtAlwaysEnabled ; systemRan [
347 ] = & rtAlwaysEnabled ; systemRan [ 348 ] = & rtAlwaysEnabled ; systemRan
[ 349 ] = & rtAlwaysEnabled ; systemRan [ 350 ] = & rtAlwaysEnabled ;
systemRan [ 351 ] = & rtAlwaysEnabled ; systemRan [ 352 ] = & rtAlwaysEnabled
; systemRan [ 353 ] = & rtAlwaysEnabled ; systemRan [ 354 ] = &
rtAlwaysEnabled ; systemRan [ 355 ] = & rtAlwaysEnabled ; systemRan [ 356 ] =
& rtAlwaysEnabled ; systemRan [ 357 ] = & rtAlwaysEnabled ; systemRan [ 358 ]
= & rtAlwaysEnabled ; systemRan [ 359 ] = & rtAlwaysEnabled ; systemRan [ 360
] = & rtAlwaysEnabled ; systemRan [ 361 ] = & rtAlwaysEnabled ; systemRan [
362 ] = & rtAlwaysEnabled ; systemRan [ 363 ] = & rtAlwaysEnabled ; systemRan
[ 364 ] = & rtAlwaysEnabled ; systemRan [ 365 ] = & rtAlwaysEnabled ;
systemRan [ 366 ] = & rtAlwaysEnabled ; systemRan [ 367 ] = & rtAlwaysEnabled
; systemRan [ 368 ] = & rtAlwaysEnabled ; systemRan [ 369 ] = &
rtAlwaysEnabled ; systemRan [ 370 ] = & rtAlwaysEnabled ; systemRan [ 371 ] =
& rtAlwaysEnabled ; systemRan [ 372 ] = & rtAlwaysEnabled ; systemRan [ 373 ]
= & rtAlwaysEnabled ; systemRan [ 374 ] = & rtAlwaysEnabled ; systemRan [ 375
] = & rtAlwaysEnabled ; systemRan [ 376 ] = & rtAlwaysEnabled ; systemRan [
377 ] = & rtAlwaysEnabled ; systemRan [ 378 ] = & rtAlwaysEnabled ; systemRan
[ 379 ] = & rtAlwaysEnabled ; systemRan [ 380 ] = & rtAlwaysEnabled ;
systemRan [ 381 ] = & rtAlwaysEnabled ; systemRan [ 382 ] = & rtAlwaysEnabled
; systemRan [ 383 ] = & rtAlwaysEnabled ; systemRan [ 384 ] = &
rtAlwaysEnabled ; systemRan [ 385 ] = & rtAlwaysEnabled ; systemRan [ 386 ] =
& rtAlwaysEnabled ; systemRan [ 387 ] = & rtAlwaysEnabled ; systemRan [ 388 ]
= & rtAlwaysEnabled ; systemRan [ 389 ] = & rtAlwaysEnabled ; systemRan [ 390
] = & rtAlwaysEnabled ; systemRan [ 391 ] = & rtAlwaysEnabled ; systemRan [
392 ] = & rtAlwaysEnabled ; systemRan [ 393 ] = & rtAlwaysEnabled ; systemRan
[ 394 ] = & rtAlwaysEnabled ; systemRan [ 395 ] = & rtAlwaysEnabled ;
systemRan [ 396 ] = & rtAlwaysEnabled ; systemRan [ 397 ] = & rtAlwaysEnabled
; systemRan [ 398 ] = & rtAlwaysEnabled ; systemRan [ 399 ] = &
rtAlwaysEnabled ; systemRan [ 400 ] = & rtAlwaysEnabled ; systemRan [ 401 ] =
& rtAlwaysEnabled ; systemRan [ 402 ] = & rtAlwaysEnabled ; systemRan [ 403 ]
= & rtAlwaysEnabled ; systemRan [ 404 ] = & rtAlwaysEnabled ; systemRan [ 405
] = & rtAlwaysEnabled ; systemRan [ 406 ] = & rtAlwaysEnabled ; systemRan [
407 ] = & rtAlwaysEnabled ; systemRan [ 408 ] = & rtAlwaysEnabled ; systemRan
[ 409 ] = & rtAlwaysEnabled ; systemRan [ 410 ] = & rtAlwaysEnabled ;
systemRan [ 411 ] = & rtAlwaysEnabled ; systemRan [ 412 ] = & rtAlwaysEnabled
; systemRan [ 413 ] = & rtAlwaysEnabled ; systemRan [ 414 ] = &
rtAlwaysEnabled ; systemRan [ 415 ] = & rtAlwaysEnabled ; systemRan [ 416 ] =
& rtAlwaysEnabled ; systemRan [ 417 ] = & rtAlwaysEnabled ; systemRan [ 418 ]
= & rtAlwaysEnabled ; systemRan [ 419 ] = & rtAlwaysEnabled ; systemRan [ 420
] = & rtAlwaysEnabled ; systemRan [ 421 ] = & rtAlwaysEnabled ; systemRan [
422 ] = & rtAlwaysEnabled ; systemRan [ 423 ] = & rtAlwaysEnabled ; systemRan
[ 424 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; }
slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_DUALportRAMinterface_v3_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_DUALportRAMinterface_v3_GetDWork ) ;
slsaSetWorkFcnForSimTargetOP ( rtS , mr_DUALportRAMinterface_v3_SetDWork ) ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } executionInfo -> simulationOptions_ . stateSaveName_ =
rtliGetLogX ( ssGetRTWLogInfo ( rtS ) ) ; executionInfo -> simulationOptions_
. finalStateName_ = rtliGetLogXFinal ( ssGetRTWLogInfo ( rtS ) ) ;
executionInfo -> simulationOptions_ . outputSaveName_ = rtliGetLogY (
ssGetRTWLogInfo ( rtS ) ) ; return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
void MdlOutputsParameterSampleTime ( int_T tid ) { MdlOutputsTID1 ( tid ) ; }
