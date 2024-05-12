#ifndef DUALportRAMinterface_v3_private_h_
#define DUALportRAMinterface_v3_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "DUALportRAMinterface_v3.h"
#include "DUALportRAMinterface_v3_types.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
    ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
    }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((ptr));\
    (ptr) = (NULL);\
    }
#else
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((void *)(ptr));\
    (ptr) = (NULL);\
    }
#endif
#endif
#ifndef rtInterpolate
#define rtInterpolate(v1,v2,f1,f2)     (((v1)==(v2))?((double)(v1)):    (((f1)*((double)(v1)))+((f2)*((double)(v2)))))
#endif
#ifndef rtRound
#define rtRound(v) ( ((v) >= 0) ?     muDoubleScalarFloor((v) + 0.5) :     muDoubleScalarCeil((v) - 0.5) )
#endif
#ifndef UCHAR_MAX
#include <limits.h>
#endif
#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \Consider adjusting Test hardware word size settings on the \Hardware Implementation pane to match your compiler word sizes as \defined in limits.h of the compiler. Alternatively, you can \select the Test hardware is the same as production hardware option and \select the Enable portable word sizes option on the Code Generation > \Verification pane for ERT based targets, which will disable the \preprocessor word size checks.
#endif
#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \Consider adjusting Test hardware word size settings on the \Hardware Implementation pane to match your compiler word sizes as \defined in limits.h of the compiler. Alternatively, you can \select the Test hardware is the same as production hardware option and \select the Enable portable word sizes option on the Code Generation > \Verification pane for ERT based targets, which will disable the \preprocessor word size checks.
#endif
#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \Consider adjusting Test hardware word size settings on the \Hardware Implementation pane to match your compiler word sizes as \defined in limits.h of the compiler. Alternatively, you can \select the Test hardware is the same as production hardware option and \select the Enable portable word sizes option on the Code Generation > \Verification pane for ERT based targets, which will disable the \preprocessor word size checks.
#endif
#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \Consider adjusting Test hardware word size settings on the \Hardware Implementation pane to match your compiler word sizes as \defined in limits.h of the compiler. Alternatively, you can \select the Test hardware is the same as production hardware option and \select the Enable portable word sizes option on the Code Generation > \Verification pane for ERT based targets, which will disable the \preprocessor word size checks.
#endif
extern int64_T MultiWord2sLong ( const uint64_T u [ ] ) ; extern void
sMultiWordShr ( const uint64_T u1 [ ] , int32_T n1 , uint32_T n2 , uint64_T y
[ ] , int32_T n ) ; extern void MultiWordSignedWrap ( const uint64_T u1 [ ] ,
int32_T n1 , uint32_T n2 , uint64_T y [ ] ) ; extern void MultiWordAdd (
const uint64_T u1 [ ] , const uint64_T u2 [ ] , uint64_T y [ ] , int32_T n )
; extern void sLong2MultiWord ( int64_T u , uint64_T y [ ] , int32_T n ) ;
extern uint64_T MultiWord2uLong ( const uint64_T u [ ] ) ; extern void
uMultiWordShr ( const uint64_T u1 [ ] , int32_T n1 , uint32_T n2 , uint64_T y
[ ] , int32_T n ) ; extern void uMultiWordMul ( const uint64_T u1 [ ] ,
int32_T n1 , const uint64_T u2 [ ] , int32_T n2 , uint64_T y [ ] , int32_T n
) ; extern void MultiWordUnsignedWrap ( const uint64_T u1 [ ] , int32_T n1 ,
uint32_T n2 , uint64_T y [ ] ) ; extern void mul_wide_s64 ( int64_T in0 ,
int64_T in1 , uint64_T * ptrOutBitsHi , uint64_T * ptrOutBitsLo ) ; extern
int64_T mul_s64_loSR_sat_zero ( int64_T a , int64_T b , uint64_T aShift ) ;
extern int64_T mul_s64_loSR ( int64_T a , int64_T b , uint64_T aShift ) ;
extern void friwhnxto2 ( fhg0fbz5a3 * localB , l1pszmkfnd * localDW ) ;
extern void mrenxli3mf ( uint16_T gutsda4akm , boolean_T cvnjyywqyw ,
fhg0fbz5a3 * localB , l1pszmkfnd * localDW ) ; extern void mgrwe21vin (
jk5p3pxbq5 * localB , ouvmkwvpjn * localDW ) ; extern void oe0gcvm3eu (
boolean_T lrmcdmwvb1 , boolean_T nxnjdu3fix , jk5p3pxbq5 * localB ,
ouvmkwvpjn * localDW ) ; extern void eipz3ms3lx ( cb0i5b0jtx * localB ,
dhrlki4cje * localDW ) ; extern void mg2ewwtppa ( uint16_T dbwjqdldrq ,
cb0i5b0jtx * localB , dhrlki4cje * localDW ) ; extern void na4ougiori (
dtrl0ddrd1 * localDW ) ; extern void el33ttatyo ( int16_T ag4rkkodum ,
uint16_T dsxtwtdcem , boolean_T oexwni10zi , uint16_T jm0kbawfn5 , dtrl0ddrd1
* localDW ) ; extern void dcguzoxh2s ( fzts3qvofq * localB , dtrl0ddrd1 *
localDW ) ; extern void kkvsri4cxy ( lf4dq10l1d * localDW ) ; extern void
faha5qigiv ( uint32_T dxm0n0plnh , nx5t3hqgms * localB , lf4dq10l1d * localDW
) ; extern void ksiqa1jioy ( d4apjfx232 * localDW ) ; extern void kum1vfui1c
( int64_T gaqzpcm5jh , gtfqflwlxp * localB , d4apjfx232 * localDW ) ; extern
void lh0vflmbah ( kb425lama0 * localDW ) ; extern void nt3t3nwbzj ( int64_T
d0lgsdj01w , kio0ovttqn * localB , kb425lama0 * localDW ) ; extern void
puvsi2e35k ( n2vzy4fgqb * localDW ) ; extern void mggcxvqcxn ( int64_T
nijnzrzrgb , hop5irsf4t * localB , n2vzy4fgqb * localDW ) ; extern void
lqoiikc5jl ( ck15sjqlzy * localDW ) ; extern void po54rt51rv ( int64_T
bi10c2vihi , k1d03myt2o * localB , ck15sjqlzy * localDW ) ; extern void
ik5qe5e3gn ( jw05mhjete * localDW ) ; extern void k33a52bgwi ( int64_T
bscvmq55l0 , owwwkgvypq * localB , jw05mhjete * localDW ) ; extern void
gbd042go2y ( joga05kjsz * localDW ) ; extern void fzp5yrcmst ( int64_T
kqjnjzwl5l , p0crb3fek4 * localB , joga05kjsz * localDW ) ; extern void
o1m4iocjmv ( ecl5qgk2gm * localDW ) ; extern void hx2bxym1a4 ( int64_T
hhojmhfaxh , fhdgvbqydk * localB , ecl5qgk2gm * localDW ) ; extern void
b15csreixx ( dyycn05pta * localDW ) ; extern void jtd3j4qmtj ( int64_T
hwrrxbunbl , fkmh5btb03 * localB , dyycn05pta * localDW ) ; extern void
anfmfwncyk ( dlkubice4t * localDW ) ; extern void mtt1ayedix ( int64_T
frp0gn0i4a , mf1xdrxcmt * localB , dlkubice4t * localDW ) ; extern void
otgzv3ygco ( besxczw1nh * localDW ) ; extern void aazmv33tcm ( int64_T
bie3kafnrj , cgfgwzt53e * localB , besxczw1nh * localDW ) ; extern void
glmksrsft4 ( licusx5ity * localDW ) ; extern void bstd1u2cpo ( int64_T
h3faudxz0l , jheo1cew5n * localB , licusx5ity * localDW ) ; extern void
btwb2tza3v ( eoa0ko2nnm * localDW ) ; extern void f2rydg4dp1 ( int64_T
i514xyvogp , dvalvdwvpq * localB , eoa0ko2nnm * localDW ) ; extern void
l51dggekdp ( cnkyxsdrei * localDW ) ; extern void j11vdnbc5b ( int64_T
d4mrk135mm , o0vix3xnem * localB , cnkyxsdrei * localDW ) ; extern void
bluzx5r44q ( nqfwsiobzc * localDW ) ; extern void m1qiz2ekay ( int64_T
jjojeubedm , em14v3o2ve * localB , nqfwsiobzc * localDW ) ; extern void
pa4uou1gdh ( eg3ij1foh1 * localDW ) ; extern void dlafdnj3fg ( int64_T
i4qlj4pkyo , lquylgmosg * localB , eg3ij1foh1 * localDW ) ; extern void
frhugcqjcs ( isvwrqfyng * localDW ) ; extern void onrxopzil0 ( int64_T
pszeuy1o1q , fymwnt1mkg * localB , isvwrqfyng * localDW ) ; extern void
pdytvdxwzu ( gfn2ks10r2 * localDW ) ; extern void fxuvuc5ilx ( int64_T
jvzqnl5ndi , at25yzukvm * localB , gfn2ks10r2 * localDW ) ; extern void
heskyuqcqw ( arzkv2ko5t * localDW ) ; extern void cqyo42y2gh ( int16_T
l4qomuvbc5 , m0s5ocgs3w * localB , arzkv2ko5t * localDW ) ; extern void
h3cnkt4jqz ( ek02ioxskj * localDW ) ; extern void nv44ttbdg3 ( int16_T
h1y3b1f34l , hgkotmg3qo * localB , ek02ioxskj * localDW ) ; extern void
epf0xslrxm ( lddk4cji3u * localDW ) ; extern void g2rlwqx2xm ( int16_T
hyaboxmpnz , lcy0vyxdfd * localB , lddk4cji3u * localDW ) ; extern void
a0zkjtkodd ( npw2jnyxb4 * localDW ) ; extern void am45qhx1eq ( int16_T
ozkjvqpaqk , hdpijtc4eu * localB , npw2jnyxb4 * localDW ) ; extern void
kbagdkq0lj ( jaqxwmxome * localDW ) ; extern void im0j4vocky ( int16_T
myxuy5wkkj , gy53ka401k * localB , jaqxwmxome * localDW ) ; extern void
p11kjvhrns ( pozkxb0in3 * localDW ) ; extern void hexdymfazx ( int16_T
jr0yhlpt5r , ez0anp1fc1 * localB , pozkxb0in3 * localDW ) ; extern void
obaxn2ijaw ( fosyfoanqd * localDW ) ; extern void pdnjandzta ( int16_T
akbwbe1i2v , asnllkoefk * localB , fosyfoanqd * localDW ) ; extern void
fb24nl3uvc ( oyzryugtpv * localDW ) ; extern void o3izwcuble ( int16_T
pq2bpcrpxv , o3y4cazffn * localB , oyzryugtpv * localDW ) ; extern void
fq1xgvpq5l ( gfwf1bb5ur * localDW ) ; extern void gvbyuajj10 ( int16_T
d0bu1fubnt , bxvz3mkxdp * localB , gfwf1bb5ur * localDW ) ; extern void
dylc5js0a3 ( nn2t3endfk * localDW ) ; extern void dfgw4kuzso ( int16_T
pqcvvtywoy , nlimw3bnjm * localB , nn2t3endfk * localDW ) ; extern void
csr5qvg15m ( jnloryplhv * localDW ) ; extern void m2rovdpxpj ( int16_T
j4tjf1oyg2 , poq0z42cby * localB , jnloryplhv * localDW ) ; extern void
fkownensru ( k0xrm5jzxo * localDW ) ; extern void gzu0v1k154 ( int16_T
gzvx0f25j4 , cvjcj1ixfm * localB , k0xrm5jzxo * localDW ) ; extern void
pr1cdqavaj ( gz3y5krne4 * localDW ) ; extern void bx4q2vjdxx ( int16_T
hz5cklwcx5 , for2zaeh5b * localB , gz3y5krne4 * localDW ) ; extern void
ajy1izpfit ( p0cxfzutxs * localDW ) ; extern void dmnv2typrk ( int16_T
i4lj3cjsfo , kphtmprvxz * localB , p0cxfzutxs * localDW ) ; extern void
eymblahprd ( butccgvrps * localDW ) ; extern void c45nfqxt1b ( int16_T
n4trvkcgks , hxizgndrjv * localB , butccgvrps * localDW ) ;
#if defined(MULTITASKING)
#error Model (DUALportRAMinterface_v3) was built in \SingleTasking solver mode, however the MULTITASKING define is \present. If you have multitasking (e.g. -DMT or -DMULTITASKING) \defined on the Code Generation page of Simulation parameter dialog, please \remove it and on the Solver page, select solver mode \MultiTasking. If the Simulation parameter dialog is configured \correctly, please verify that your template makefile is \configured correctly.
#endif
#endif
