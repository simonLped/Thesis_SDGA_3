#ifndef DUALportRAMinterface_v3_h_
#define DUALportRAMinterface_v3_h_
#ifndef DUALportRAMinterface_v3_COMMON_INCLUDES_
#define DUALportRAMinterface_v3_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "DUALportRAMinterface_v3_types.h"
#include "mwmathutil.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#define MODEL_NAME DUALportRAMinterface_v3
#define NSAMPLE_TIMES (2) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (462) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { boolean_T oxpob150pd ; } fhg0fbz5a3 ; typedef struct {
int32_T jr12xlibrl ; uint32_T gm2p0wwtvc ; uint8_T mtvokfg2km ; boolean_T
dgqdsbadmt ; } l1pszmkfnd ; typedef struct { boolean_T ehjybluxrg ; }
jk5p3pxbq5 ; typedef struct { int32_T lvbeuc3sjb ; uint32_T mr2pswpsef ;
uint8_T dpphodfkey ; boolean_T c3ky5ehk3m ; } ouvmkwvpjn ; typedef struct {
boolean_T n1wklyyqdj ; } cb0i5b0jtx ; typedef struct { int32_T pf0eocqu32 ;
uint32_T ptznzx2qmi ; uint8_T dsczn1cz1s ; boolean_T pqjrcy3mks ; }
dhrlki4cje ; typedef struct { int16_T bozwbmnpo3 ; } fzts3qvofq ; typedef
struct { jhe2xtdg5h akkfyrovb0 ; boolean_T oozywslmnt ; } dtrl0ddrd1 ;
typedef struct { uint32_T pblcra52ya ; } nx5t3hqgms ; typedef struct {
int32_T dzegpmyi00 ; boolean_T aati4n1exl ; } lf4dq10l1d ; typedef struct {
int64_T kqec11mzgl ; } gtfqflwlxp ; typedef struct { int32_T j2wb0heh5r ;
boolean_T inqavurpq2 ; } d4apjfx232 ; typedef struct { int64_T fpsaqss2rh ; }
kio0ovttqn ; typedef struct { int32_T bhhrytpig4 ; boolean_T e5djmff4ey ; }
kb425lama0 ; typedef struct { int64_T igjdtuobgr ; } hop5irsf4t ; typedef
struct { int32_T ihbdkradn2 ; boolean_T kfwk41aocj ; } n2vzy4fgqb ; typedef
struct { int64_T ftepdewpox ; } k1d03myt2o ; typedef struct { int32_T
kmvjqif1vx ; boolean_T leoynkr3q5 ; } ck15sjqlzy ; typedef struct { int64_T
k2dn0g2i22 ; } owwwkgvypq ; typedef struct { int32_T cdjbjgd1xc ; boolean_T
l0e4fwians ; } jw05mhjete ; typedef struct { int64_T k33w3zu5xr ; }
p0crb3fek4 ; typedef struct { int32_T h4dsuebilz ; boolean_T kyqlsdxb1f ; }
joga05kjsz ; typedef struct { int64_T bokjq0pvqj ; } fhdgvbqydk ; typedef
struct { int32_T abs01yeupq ; boolean_T llq5zg0hho ; } ecl5qgk2gm ; typedef
struct { int64_T egtpphpyd0 ; } fkmh5btb03 ; typedef struct { int32_T
kj0js5y43a ; boolean_T dj53101tjo ; } dyycn05pta ; typedef struct { int64_T
ar3jokrbaq ; } mf1xdrxcmt ; typedef struct { int32_T iua2aul0k5 ; boolean_T
bzq3ui1czr ; } dlkubice4t ; typedef struct { int64_T n5gzqty3ro ; }
cgfgwzt53e ; typedef struct { int32_T e4ft35rk43 ; boolean_T dess21gzas ; }
besxczw1nh ; typedef struct { int64_T iz5wzxhduw ; } jheo1cew5n ; typedef
struct { int32_T ottkqopm4f ; boolean_T eohabhj4xn ; } licusx5ity ; typedef
struct { int64_T a4bhai3ys3 ; } dvalvdwvpq ; typedef struct { int32_T
ak5b20glzq ; boolean_T eq21cdu2ve ; } eoa0ko2nnm ; typedef struct { int64_T
idny1f21lj ; } o0vix3xnem ; typedef struct { int32_T o2cwobb3pj ; boolean_T
om1xuzw1eo ; } cnkyxsdrei ; typedef struct { int64_T oozybsfii0 ; }
em14v3o2ve ; typedef struct { int32_T d0r4pg3qpe ; boolean_T mpmtoteyyz ; }
nqfwsiobzc ; typedef struct { int64_T dnymjzhjl4 ; } lquylgmosg ; typedef
struct { int32_T arfpsuibu4 ; boolean_T gzbdyuemgc ; } eg3ij1foh1 ; typedef
struct { int64_T edk24kfgxw ; } fymwnt1mkg ; typedef struct { int32_T
dxojn2xddw ; boolean_T bko3b1m5jh ; } isvwrqfyng ; typedef struct { int64_T
f3indibbk0 ; } at25yzukvm ; typedef struct { int32_T ofrvdmgnuh ; boolean_T
jq1v3dabca ; } gfn2ks10r2 ; typedef struct { int16_T h5i5xy41ea ; }
m0s5ocgs3w ; typedef struct { int32_T kbd34gxwbo ; boolean_T m5l4tdev1b ; }
arzkv2ko5t ; typedef struct { int16_T gnjj4zylsj ; } hgkotmg3qo ; typedef
struct { int32_T kac4x3wvla ; boolean_T cade0e5uxu ; } ek02ioxskj ; typedef
struct { int16_T ncs0hoa1j5 ; } lcy0vyxdfd ; typedef struct { int32_T
i5moiltmws ; boolean_T jfuok3z43s ; } lddk4cji3u ; typedef struct { int16_T
jn3vnl0uhn ; } hdpijtc4eu ; typedef struct { int32_T pk5rrxppux ; boolean_T
eqtir0gumq ; } npw2jnyxb4 ; typedef struct { int16_T heoxs0loqa ; }
gy53ka401k ; typedef struct { int32_T emb3do3f0r ; boolean_T kltuftdkui ; }
jaqxwmxome ; typedef struct { int16_T iqxwhfezhq ; } ez0anp1fc1 ; typedef
struct { int32_T m5k3zxa1u1 ; boolean_T mcqwmlgcq0 ; } pozkxb0in3 ; typedef
struct { int16_T pljux34q0r ; } asnllkoefk ; typedef struct { int32_T
j30rgfm2jv ; boolean_T hgh0tt5vqy ; } fosyfoanqd ; typedef struct { int16_T
lavrwzhcrp ; } o3y4cazffn ; typedef struct { int32_T nf2byzbqdw ; boolean_T
c0hodwtoi4 ; } oyzryugtpv ; typedef struct { int16_T crugzopkfg ; }
bxvz3mkxdp ; typedef struct { int32_T eziun3lwqz ; boolean_T hbw4kaxbof ; }
gfwf1bb5ur ; typedef struct { int16_T ddekw2q1y4 ; } nlimw3bnjm ; typedef
struct { int32_T izussz2j2f ; boolean_T fleyftrufo ; } nn2t3endfk ; typedef
struct { int16_T agq2cvcyz0 ; } poq0z42cby ; typedef struct { int32_T
e2wpdf03fq ; boolean_T ab3ipnlkse ; } jnloryplhv ; typedef struct { int16_T
awrhkte3yd ; } cvjcj1ixfm ; typedef struct { int32_T cexaqfpgul ; boolean_T
b2wniulodl ; } k0xrm5jzxo ; typedef struct { int16_T jgambcvtl0 ; }
for2zaeh5b ; typedef struct { int32_T eakynmnk00 ; boolean_T ap1t1grbei ; }
gz3y5krne4 ; typedef struct { int16_T c0n1xa2bz2 ; } kphtmprvxz ; typedef
struct { int32_T hnsu34ocdv ; boolean_T aczjakmt3z ; } p0cxfzutxs ; typedef
struct { int16_T eslgbrlmfk ; } hxizgndrjv ; typedef struct { int32_T
ivbbwftzhv ; boolean_T i24gbolf04 ; } butccgvrps ; typedef struct { creal_T
dcv [ 4096 ] ; cint32_T icv [ 4096 ] ; cint32_T icv1 [ 4096 ] ; real_T
sampleIndex_data [ 2048 ] ; int32_T pOutBuffer_re [ 4096 ] ; int32_T
pOutBuffer_im [ 4096 ] ; int32_T din_re [ 4096 ] ; int32_T din_im [ 4096 ] ;
int32_T dout_re_stage [ 4096 ] ; int32_T dout_im_stage [ 4096 ] ; int16_T
tmp_data [ 4096 ] ; int16_T tmp_data_mbvzarwird [ 4096 ] ; int16_T
tmp_data_cl54gopm0x [ 4096 ] ; cint32_T twiddleTable [ 1024 ] ; int64_T
k3gjcoiaah ; int64_T kx4s1bfrve ; int64_T mzxbve3150 ; int64_T ia1w4ytogn ;
int64_T e4j4qg1qju ; int64_T igdhiw14ne ; int64_T bzrplhmpbv ; int64_T
oqxpponqds ; int64_T clus3tzhel ; int64_T kb0snyasga ; int64_T chlrvyiben ;
int64_T fffnnm2yt3 [ 7 ] ; int64_T fuyo2snwtu ; int64_T ntk5vfoxky ; int64_T
kfk1dxkhxh ; int64_T acrqvfod5l ; int64_T pyqup3sj0a ; int64_T bpuwnuufue ;
int64_T khvg4xvbfo ; int64_T dpu2kg04pd ; int64_T f1fi3ojf3v ; int64_T
f5v0boraqs ; int64_T hycxwpt0q0 ; int64_T ofw2w0azgr ; int64_T mvrcyqswef ;
int64_T ddim5njhme ; int64_T agbei0ngoi ; int64_T li5fcrsk0x ; int64_T
i0w3o1erar ; int64_T kgt3je5hub ; int64_T pjcakqxz0a ; int64_T lzxmplrrdc ;
int64_T g1jgfrb1co ; int64_T ikbuvqafor ; int64_T cnewcvdg4b ; int64_T
i05rgvkt1z ; int64_T i1k2k4hd5w ; int64_T cx3eeakhlh ; int64_T efaxnj5cve ;
int64_T ld5l1gbrbp ; int64_T hkq0hwtoyx ; int64_T k1bjk0virl ; int64_T
d3l4vvyx25 ; int64_T lcf40fba1a ; int64_T mg4yfzjodt ; int64_T ob5mrjkqt2 ;
int64_T jnj1ehlfk2 ; int64_T mz3q3qigkp ; int64_T a0xfczjjxq ; int64_T
c0ffvnqlub ; int64_T d0jeunwwfk ; int64_T fuhxi3miys ; int64_T ks0ab3ncaa ;
int64_T e2bcu340xv ; int64_T bbt312bxcp ; int64_T byapugguel ; int64_T
d2hwz44h43 ; int64_T fxkd0rxmvf ; int64_T a3zc04aozw ; int64_T ipjjcqoavm ;
int64_T pcorqvo0zh ; int64_T fawzgxk22q ; int64_T mmnhy4y2nh ; int64_T
jqlnks01up ; int64_T koxhgdt2a3 ; int64_T gahmmw4bfy ; int64_T gdwsr53yim ;
int64_T dtghpb1x22 ; real_T li4ud3n1ur ; real_T dxib5ld313 ; real_T
iho4z3cfly ; real_T hcderxtk0s ; real_T la1nmi4wem ; uint32_T m3rzx1y5tc ;
uint32_T izq1pj0n5n ; uint32_T gu0cktaz3m ; uint32_T fkc3zxbycu ; uint32_T
cou15al3ok ; uint32_T os25pf5rdx ; uint32_T e12edrxdsc ; uint32_T j5l1zfu2yz
; uint32_T pzzutdzghl ; uint32_T m32prkrct2 ; uint32_T c5f5d2ckzc ; int32_T
kome2rjb2j ; int32_T clc43xnwkh ; int32_T p5drb3xhsc ; uint16_T kpbfqapfvb ;
uint16_T kutvr5wkxy ; uint16_T p3plncwt3y ; uint16_T oleysdr0yd ; uint16_T
c54aceqg1h ; uint16_T m04obivhlo ; uint16_T hb5ldogfof ; uint16_T mxxsqcmmd1
; uint16_T jgpsfkqtlm ; uint16_T f2g2jifa2y ; uint16_T mbj2mutwd5 ; uint16_T
ibkohs1h3z ; uint16_T lzl2ffamjt ; uint16_T kmipgkcive ; uint16_T fp4igtyz5u
; uint16_T d1f2rjqdua ; uint16_T lardbdwd5v ; uint16_T leazcb1h2j ; uint16_T
mcwekkioni ; uint16_T h1cqgq2mge ; uint16_T jhop355m1z ; uint16_T ogv1sxnzas
; uint16_T en0j55pc4g ; uint16_T eshaopbfyp ; uint16_T kux04xr1ty ; uint16_T
inppcqltf1 ; uint16_T hejdym2tei ; uint16_T miciunji1q ; uint16_T kekccrspru
; uint16_T kmk1xozmep ; uint16_T dqvaaxkm0c ; uint16_T hcy5womvyf ; int16_T
fuqnxov3qi ; int16_T mkubyaeqcu ; int16_T hyhwubxihy ; int16_T mosxs4b4hc ;
int16_T nbft1phsmy ; int16_T hq44czkd4s ; int16_T e0v0leqg2p ; int16_T
blm5pegnxq ; int16_T mgemxwmqco ; int16_T aouiix4txh ; uint8_T hnjhybbatf ;
uint8_T ib5sxzeq4h ; uint8_T e5dpgjg4y5 ; uint8_T dot2jgysgh ; uint8_T
h3pnk0oaza ; uint8_T h3px1sgc3g ; uint8_T a3iwhtvldk ; uint8_T ixtbqrxark ;
uint8_T jd13hnta5b ; uint8_T j5hwgk53ch ; uint8_T b45emcbx3v ; uint8_T
daoeclpvro ; uint8_T hkkielqecj ; uint8_T bqafyprcme ; uint8_T erecgrjhnx ;
uint8_T dd0occlrt4 ; uint8_T dhvtuwjn5q ; uint8_T pfsqkqryqg ; uint8_T
lnsjuvhsgv ; uint8_T nhc0fdw3ug ; uint8_T o0wzwh53fx ; uint8_T crnx15irxr ;
uint8_T i0gsq2riyu ; uint8_T lcedt4qay2 ; uint8_T oy4lh3ff4g ; uint8_T
juszgkuo2c ; uint8_T acn2nfsqnj ; uint8_T g5l3a2xe55 ; boolean_T i3ff0r1vbw ;
boolean_T iws4xfo1q5 ; boolean_T powuc0n4v2 ; boolean_T pwumyk4mj5 ;
boolean_T lsw4l4smyf ; boolean_T cde1nzc1wz ; boolean_T ado5tfrhto ;
boolean_T jswhcwepoy ; boolean_T ptprh0ewy1 ; boolean_T iibtbmy3js ;
boolean_T pk2gp5ieg3 ; boolean_T dqkrpjmrh2 ; boolean_T iffclt3o01 ;
boolean_T n3eede2p1d ; boolean_T o45kvswdjc ; boolean_T gesedfh4dk ;
boolean_T o0u1hreq1x ; boolean_T gdzcs5xhqx ; boolean_T kyvfywflgu ;
boolean_T meb2o0zddj ; boolean_T lkarecbrf1 ; boolean_T j3qwka3dz0 ;
boolean_T bylp5x3xnw ; boolean_T gsni415fpp ; boolean_T a2muyqitx4 ;
boolean_T dz225sfg5h ; boolean_T izefog1fz2 ; boolean_T poagurat1d ;
boolean_T aoynz1bdpy ; boolean_T f0efgfgm5a ; boolean_T f4eksl32do ;
boolean_T d2r1vmsy5h ; boolean_T da2jvbm0wn ; boolean_T cfqni2wdkk ;
boolean_T gqvoz5mx4y ; boolean_T iurm3g4vhb ; boolean_T hiwdb1uq3q ;
boolean_T gj0ilfdg5r ; boolean_T ifilsh2dij ; boolean_T mf2j2fg50z ;
boolean_T cbqgqx5a3h ; boolean_T moxmhpt4za ; boolean_T ix2rkj1uhp ;
boolean_T hfjmgpp40c ; boolean_T klwgk32xms ; boolean_T kh2ij2wlwj ;
boolean_T au2ielxut1 ; boolean_T arfpn4hmtf ; boolean_T i0klwum5up ;
boolean_T lxw5zwa1vx ; boolean_T acbvfcyinv ; boolean_T oehsivypfq ;
boolean_T khjd0pwmp2 ; boolean_T m0in21nfjf ; boolean_T bcdg4aqvxx ;
boolean_T h25zdcfr3m ; boolean_T jger4u35mr ; boolean_T okkaymlkwy ;
boolean_T iverpshyww ; boolean_T byrcscl5ea ; boolean_T hkn30qaypu ;
boolean_T kx5ekbveof ; boolean_T asxbhv2ehl ; boolean_T ixxnliwmtx ;
boolean_T b1w5jc32hl ; boolean_T foyanegrzs ; boolean_T jggt3auzy3 ;
boolean_T eezqixq4vm ; boolean_T m5q1do0vmq ; boolean_T ak2vxsyixd ;
boolean_T fclpv43io0 ; boolean_T o3tyeeowqy ; boolean_T fviw5wizdj ;
boolean_T ooqxabrlh0 ; boolean_T ppe24ahxyy ; boolean_T dqgaqsoxml ;
boolean_T pegi3bwz0d ; boolean_T kfreac4rr1 ; boolean_T jcw1xc2cvp ;
boolean_T my1rk5yzqh ; hxizgndrjv atko2rhysz ; kphtmprvxz ctkwb4rte4 ;
for2zaeh5b ayc1u05z0b ; cvjcj1ixfm jnhmigxpfr ; poq0z42cby hqymuumkk2 ;
nlimw3bnjm ph0c5wwhlf ; bxvz3mkxdp jkhbxjlbpd ; o3y4cazffn chadwwtb33 ;
asnllkoefk k0pzgqkvwb ; ez0anp1fc1 diaw2yowgl ; gy53ka401k eeeqgos433 ;
hdpijtc4eu ekp05fi01e ; lcy0vyxdfd gw0bb4lu4k ; hgkotmg3qo jwlq00h0qp ;
m0s5ocgs3w fbu1mofswb ; hxizgndrjv c45nfqxt1bx ; kphtmprvxz dmnv2typrkz ;
for2zaeh5b bx4q2vjdxxp ; cvjcj1ixfm gzu0v1k154f ; poq0z42cby m2rovdpxpjx ;
nlimw3bnjm dfgw4kuzso2 ; bxvz3mkxdp gvbyuajj10j ; o3y4cazffn o3izwcublel ;
asnllkoefk pdnjandztac ; ez0anp1fc1 hexdymfazx2 ; gy53ka401k im0j4vockyt ;
hdpijtc4eu am45qhx1eqm ; lcy0vyxdfd g2rlwqx2xml ; hgkotmg3qo nv44ttbdg32 ;
m0s5ocgs3w cqyo42y2ghh ; at25yzukvm hshupcos05 ; fymwnt1mkg bzql1z5sfh ;
lquylgmosg nbx3n1zru5 ; em14v3o2ve gitl1vogja ; o0vix3xnem ig3hrn2l24 ;
dvalvdwvpq ju3onx0ww2 ; jheo1cew5n prjjcc3mxy ; cgfgwzt53e mm0axov05p ;
mf1xdrxcmt cqouob3iam ; fkmh5btb03 djq1we332q ; fhdgvbqydk d50tkbrk2e ;
p0crb3fek4 ppnfsuot4z ; owwwkgvypq h502wprcm0 ; k1d03myt2o ec1kk3wac3 ;
hop5irsf4t mcrnskrou3 ; kio0ovttqn psluq53bh5 ; gtfqflwlxp l2dw2tngpy ;
at25yzukvm ludvfohavv ; fymwnt1mkg cnelbzjfhg ; lquylgmosg mx4jv5qqj4 ;
em14v3o2ve ls5eenr2ad ; o0vix3xnem bk35bvlqhh ; dvalvdwvpq d3bzw5xtsk ;
jheo1cew5n p5zpxze4b1 ; cgfgwzt53e iaybj1yga2 ; mf1xdrxcmt ok1l4kluje ;
fkmh5btb03 jyf4ywwf11 ; fhdgvbqydk odwyzbzb3q ; p0crb3fek4 f32lct1du0 ;
owwwkgvypq mw2keyc00d ; k1d03myt2o pmc2mjfvx3 ; hop5irsf4t opqx3n1jiv ;
kio0ovttqn lhl4belrft ; gtfqflwlxp aomefh15n5 ; at25yzukvm hhpwfeyxv5 ;
fymwnt1mkg mr4jil2nb0 ; lquylgmosg mtb1g0er0c ; em14v3o2ve logcpemxnl ;
o0vix3xnem fmiwt01ncc ; dvalvdwvpq a5ydisma0n ; jheo1cew5n cp2x5swpim ;
cgfgwzt53e pg2gn3izhv ; mf1xdrxcmt li4w4j22ee ; fkmh5btb03 c0cv1fecmf ;
fhdgvbqydk dwkrhy1adj ; p0crb3fek4 kiv2ffdk2i ; owwwkgvypq o44pc0z3gt ;
k1d03myt2o olew5caigs ; hop5irsf4t edsrfmi5oc ; kio0ovttqn dq1vaupevs ;
gtfqflwlxp gt31hnr3lf ; at25yzukvm ob2fx4wpxa ; fymwnt1mkg o3fupwkw3j ;
lquylgmosg bu3vpkznrt ; em14v3o2ve aj5wkrbghc ; o0vix3xnem bc2ak5uvom ;
dvalvdwvpq dticnm5yh1 ; jheo1cew5n gegc3wkr22 ; cgfgwzt53e okqcrlylqk ;
mf1xdrxcmt dud531lchs ; fkmh5btb03 k1pxlisolz ; fhdgvbqydk gmghl42rva ;
p0crb3fek4 gkwxar31g1 ; owwwkgvypq p2dpdzhqcw ; k1d03myt2o pyfhcpopnq ;
hop5irsf4t lcttqdmfq0 ; kio0ovttqn dax5mxpt1x ; gtfqflwlxp bmgxswof1n ;
at25yzukvm c4ex142obk ; fymwnt1mkg jqkgyvk5wj ; lquylgmosg pr5yb11xg2 ;
em14v3o2ve e0yth1yr5j ; o0vix3xnem depkfxt3dl ; dvalvdwvpq nljvbf4yun ;
jheo1cew5n liocd5kn1l ; cgfgwzt53e crqoduzoa4 ; mf1xdrxcmt buqfyhw4zg ;
fkmh5btb03 fpel54lr1q ; fhdgvbqydk d3o4x0ovlb ; p0crb3fek4 dhqnhtbmwa ;
owwwkgvypq a1r25vmwrh ; k1d03myt2o cit10epw2d ; hop5irsf4t pnkexv004t ;
kio0ovttqn kkcnk3nues ; gtfqflwlxp il5ne4vyn3 ; at25yzukvm fxuvuc5ilx3 ;
fymwnt1mkg onrxopzil04 ; lquylgmosg dlafdnj3fgi ; em14v3o2ve m1qiz2ekayi ;
o0vix3xnem j11vdnbc5b2 ; dvalvdwvpq f2rydg4dp1k ; jheo1cew5n bstd1u2cpob ;
cgfgwzt53e aazmv33tcmo ; mf1xdrxcmt mtt1ayedixs ; fkmh5btb03 jtd3j4qmtj3 ;
fhdgvbqydk hx2bxym1a4g ; p0crb3fek4 fzp5yrcmsta ; owwwkgvypq k33a52bgwif ;
k1d03myt2o po54rt51rvx ; hop5irsf4t mggcxvqcxnx ; kio0ovttqn nt3t3nwbzjn ;
gtfqflwlxp kum1vfui1c3 ; nx5t3hqgms p1cpbmtwa2 ; nx5t3hqgms dk52awvy35 ;
nx5t3hqgms faha5qigiv5 ; fzts3qvofq itndmcozqm ; cb0i5b0jtx hv3vc22vuw ;
jk5p3pxbq5 ndmardmusd ; fhg0fbz5a3 edawel13bx ; fzts3qvofq dcguzoxh2sb ;
cb0i5b0jtx baulvd1vdb ; jk5p3pxbq5 cmiciuw2cg ; fhg0fbz5a3 p0vbpdtq52 ; } B ;
typedef struct { lgw3dwnp03 bpbbz5llcl ; gf3a2t0gs5 iry4sotwjo ; o0tlycgbd5
e1hogwivrq ; o0tlycgbd5h gxmahoppaw ; o0tlycgbd5h hez3ezrpq2 ; o0tlycgbd5h
ea4uoiztke ; o0tlycgbd5hp g5332d55t5 ; o0tlycgbd5hph msaff0w3sl ; real_T
mmbeeyt2c3 [ 12292 ] ; real_T ghw5kalbtu [ 12292 ] ; real_T pb1zjp11ah ;
real_T cjaep5120g ; real_T ermftxd5xs ; int64_T kk3vqau5j4 ; int64_T
cczfdi3ydg ; int64_T j3spvmunzs ; int64_T huil4csvle ; int64_T o2s0qk524e ;
int64_T bujt1u5ssb ; int64_T ch3ulmwkxf ; int64_T npnmarbxwp ; int64_T
luidyjwywm ; int64_T nct4dwsy42 ; int64_T m21yi3xe0r ; int64_T efb0llahxe ;
int64_T cwc30hkp0p ; int64_T kgybnswm2h ; int64_T nzmtxoifv5 ; int64_T
mcbewak1r4 ; int64_T hzvbnr4bgd ; int64_T e0hsphy30b ; int64_T pjspex5iux ;
int64_T ceruf15djt ; int64_T nwj4wrfqti ; int64_T etvgfdreuz ; int64_T
faabslxst2 ; int64_T gumtab5fnv ; int64_T d3nvmjf1vd ; int64_T oruuzh4bzs ;
int64_T ew53tl52et ; int64_T afmamtdg1h ; int64_T kmhibglhil ; int64_T
c0mvgpjrpg ; int64_T oc3xb3ueqi ; int64_T ggpm4i3hqv ; int64_T pgw0quxym3 ;
int64_T b3tarjjh2r ; int64_T bjsvnxykzn ; int64_T fn03ogv30b ; int64_T
o0tgjzszlx ; int64_T jk0pdacxs0 ; int64_T hkv3n4pgdt ; int64_T msyvbfgmjp ;
int64_T i3gumoeyz1 ; int64_T gxbtoq4uog ; int64_T aqfzu2hilm ; int64_T
ceatu2c3ih ; int64_T mzlkr3j3p5 ; int64_T hr0f0pllzb ; int64_T lj4qjxl3d5 ;
int64_T fwq22fuszr ; int64_T lw2of50kxw ; int64_T lrozmwruae ; int64_T
a33feioxw2 ; int64_T afrmbd0iw3 ; int64_T anfgrndojq ; int64_T hwkvzcsfaz ;
int64_T cuscr1mv1o ; int64_T hi5sxdgutv ; int64_T g3mwssejug ; int64_T
ohb2remyso ; int64_T nnehvfm43x ; int64_T lqy3n4vuo3 ; int64_T noj5hcq43l ;
int64_T h4kqpzy0bk ; int64_T ehukj5uhzp ; int64_T lma0feztag ; int64_T
balpcok03t ; int64_T kbtqs1lj34 ; int64_T pdm2ofpuvs ; int64_T jgcfuyvz2d ;
int64_T p1ngo54os1 ; int64_T pru2133ish ; int64_T kspt2mhisp ; int64_T
kq5e4yhmjq ; int64_T gr0nnucbwg ; struct { void * LoggedData ; } jby0giim23 ;
struct { void * LoggedData ; } ftyotfy013 ; struct { void * TimePtr ; void *
DataPtr ; void * RSimInfoPtr ; } hf3r3q1vp5 ; struct { void * LoggedData [ 3
] ; } chgts4bb3h ; struct { void * LoggedData ; } ihmcm1jpxi ; struct { void
* TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } mlstiem1xs ; struct {
void * LoggedData ; } inf3hkpkhu ; struct { void * AQHandles ; } pptdm11ter ;
struct { void * AQHandles ; } ntilp42igk ; struct { void * AQHandles ; }
eeuqv20gpy ; struct { void * AQHandles ; } a4wfo40qlu ; struct { void *
AQHandles ; } j20steagju ; struct { void * AQHandles ; } ehosh5nmvd ; struct
{ void * LoggedData ; } psatxhgogh ; struct { void * LoggedData ; }
fxvj2la20t ; struct { void * LoggedData ; } dus3j1nzuy ; struct { void *
LoggedData ; } gqyz14ld5f ; struct { void * LoggedData ; } dxepujoi4u ;
struct { void * LoggedData ; } ceijmo2ad5 ; struct { void * LoggedData ; }
eznw2gqugb ; struct { void * LoggedData ; } mwgxjrzk3i ; struct { void *
LoggedData ; } fguxw0kthm ; struct { void * LoggedData ; } du0w2mjnpp ;
struct { void * LoggedData ; } mu4rrsgtwq ; struct { void * LoggedData ; }
knrdy3zy55 ; struct { void * LoggedData ; } adj2u2mfb3 ; struct { void *
LoggedData ; } e2seeikbhp ; struct { void * LoggedData ; } ho0c1labpx ;
struct { void * LoggedData ; } k5wjqao4ph ; struct { void * LoggedData ; }
kq4yoqbwh4 ; struct { void * LoggedData ; } fdarm3g0kf ; struct { void *
LoggedData ; } dx5ud32qj1 ; struct { void * LoggedData ; } ltksyzrdev ;
struct { void * LoggedData ; } pjfgihwtsd ; struct { void * LoggedData ; }
aoeqqi5hqn ; struct { void * LoggedData ; } mvue45pvxg ; int32_T p12ie1kq2d ;
int32_T ksdezs50qp ; int32_T fbgth0ylvb ; int32_T oacqmm32n4 ; int32_T
dmci5bmb3h ; int32_T fbt5g1jmhm ; int32_T g4hhato521 ; int32_T iuph25q4on ;
int32_T adpqvxr4pq ; int32_T gysjg2ez2v ; int32_T j4xszwnett ; int32_T
hsn4witota ; int32_T aedtwpb020 ; int32_T gjyzf1p00w ; int32_T oeoilbr25n ;
int32_T kod452jlzj ; int32_T fchfg0xqd2 ; int32_T m1vo1ryh5y ; int32_T
neeztgz5mr ; int32_T ljys42kk0x ; int32_T ht4iqhimgp ; int32_T ltvrxrfwqx ;
int32_T jwy1yupkgd ; int32_T p30s42eq1u ; int32_T d3t2v2pyhe ; int32_T
caj1z5lk13 ; int32_T d5oxqf3ihc ; int32_T a1uugg3z5q ; int32_T bql2kbo1mn ;
int32_T ddstw2zt2h ; int32_T ket4u3rbik ; int32_T kxxqdtc3fn ; int32_T
j2lpy04aok ; int32_T bti3xpysb3 ; int32_T jlfxz1mcjj ; int32_T bfiehwtxx0 ;
int32_T hedkojaly3 ; int32_T cc1pquwq52 ; int32_T oksgsz1h3g ; int32_T
ftnfscrqnz ; int32_T aiobhqac0s ; int32_T izhxg5z13h ; int32_T ixn1qplhkp ;
int32_T lqzocersmx ; int32_T nl3wf33p4z ; int32_T iqssg2wtlr ; int32_T
losfu35ozo ; int32_T gv1yczvurw ; int32_T pxkqzhdtui ; int32_T kd2cj1lw5i ;
int32_T jw30qsqu5r ; int32_T mnmtds151j ; int32_T gajg5igtez ; int32_T
kigfha511a ; int32_T e4acoao20b ; int32_T nnbiwtqwas ; int32_T m3zpcv3djg ;
int32_T mfqd1lsjjw ; int32_T evli1vcywa ; int32_T a3mcja4urs ; int32_T
ni0bl2pri0 ; int32_T hepne3hpaw ; int32_T eecce0ocvb ; int32_T nqe3ukp1lv ;
int32_T bpt15stayd ; int32_T fopsvccudd ; int32_T fnmb2ixb3q ; int32_T
jhliq0ridw ; int32_T injgvgohva ; int32_T ncoe4ckqww ; int32_T a2uqh3n150 ;
uint32_T l1cjdkruqq ; uint32_T dppgdzgj0x ; uint32_T fotv1vmuhj ; uint32_T
i5gi0zotho ; struct { int_T PrevIndex ; } pqxstp3wgr ; struct { int_T
PrevIndex ; } ablkijkmz5 ; uint16_T kwwlxjzdoe ; uint16_T dv5jqwdcth ;
uint16_T ptf1jyuocm ; uint16_T cm2wzi1df3 ; uint16_T fw4xval30t ; uint16_T
lqlczeokm5 ; uint16_T faksgtgdka ; uint16_T ipzfjakadv ; uint16_T jvuxplwco4
; uint16_T gcyq4coupa ; uint16_T b4hfbet4ba ; uint16_T dfsdkk5fjk ; uint16_T
b4ujwta3wy ; uint16_T cqvzla0ulg ; uint16_T jcvtghq3ig ; int16_T jl34i02arl [
6146 ] ; int16_T dmbtvfs22x ; int16_T n2whdu3eol ; uint16_T a1421jzrsu ;
uint16_T gkjrmoqlie ; uint16_T dgymt0yytj ; uint16_T gkp23xlorn ; uint16_T
hl3popemla ; uint16_T mukf1zkhlx ; uint8_T ehzhklig5r ; uint8_T g2rlyn1hgy ;
uint8_T cmvo3isroh ; uint8_T nc0waz21t1 ; uint8_T c0pmhbmlvb ; uint8_T
fx4qkmoomx ; boolean_T kbijeiibcz [ 16 ] ; boolean_T gxoqfko3zl ; boolean_T
lsrg3b3izb ; boolean_T e4apruk0cn ; boolean_T kdeplemgid ; boolean_T
oq1rde331u ; boolean_T dri1oggmq0 ; boolean_T nv4uj53r02 ; boolean_T
bxqyzy02ny ; boolean_T agzzpunc3i ; boolean_T noznim2iqz [ 6145 ] ; boolean_T
do1g134e35 ; boolean_T jr11b3ek0i [ 2048 ] ; boolean_T cprxs0oxb4 ; boolean_T
i4kbnwgsra ; boolean_T akcvng45tl [ 6144 ] ; boolean_T n4iun2fjnn [ 2048 ] ;
boolean_T fr2u3bfpll ; boolean_T bv1ncvrs1o [ 6144 ] ; boolean_T dzft24s4wf ;
boolean_T jcwpmucczd ; boolean_T i3cg55zsq5 ; boolean_T duv4e2eeyz ;
boolean_T cqzpsciwb0 ; boolean_T bgf0isn4m2 ; boolean_T iooznguwv5 ;
boolean_T bkmzxq31d1 ; boolean_T kqgzq353ol ; boolean_T fgrwjt4a2w ;
boolean_T e4hda03zrh ; boolean_T axrvuq4x5i ; boolean_T f3nepfq241 ;
boolean_T ivftjkcvdy ; boolean_T kt2dvgietw ; boolean_T f125nvybng ;
boolean_T pp1spekrho ; boolean_T lhex3u5h1f ; boolean_T fefcdgfhj1 ;
boolean_T gqs1ppah0r ; boolean_T c2jypg20hx ; boolean_T esgl5mkr2h ;
boolean_T oe1scdkmlv ; boolean_T fp3bheq2px ; boolean_T nkzaiaa2wi ;
boolean_T a1gsgrx3gu ; boolean_T oapwp3ivnb [ 4032 ] ; boolean_T mfhlrzl41r [
63 ] ; boolean_T bognbsvydi ; uint8_T nys12ztjas ; uint8_T cozp4vn1gx ;
uint8_T a2kthhvkup ; uint8_T e4ewwdakkt ; uint8_T pgl0dx24fb ; uint8_T
iwbojjhhe5 ; uint8_T mxw4mzr0uk ; uint8_T ljw5ghzdsf ; uint8_T dgivirmjgy ;
boolean_T ehjpkuq40k ; boolean_T bd1ltj1wwf ; boolean_T ofks3kmj3q ;
boolean_T jg1x0sgptb ; boolean_T lyf5ek2b3d ; boolean_T hgyegul2br ;
boolean_T hmpn3ysews ; boolean_T g5esa0nd4h ; boolean_T a514ztuygm ;
boolean_T bsiifkcwph ; boolean_T j2ygtkmtdt ; boolean_T g32xdqkvam ;
boolean_T m5qcrrh0rz ; boolean_T dqeonebn4v ; boolean_T f22lusxsbw ;
boolean_T liujvkzp0o ; boolean_T fpmxpxerkf ; boolean_T bobm2fibnc ;
boolean_T obpqvavpfa ; boolean_T frqny0vebk ; boolean_T jv0nsgafal ;
boolean_T gd1fmtj3nb ; boolean_T arpmjow3zy ; boolean_T al1pl4kowr ;
boolean_T jhxq5x40uq ; boolean_T obmn5cmv54 ; boolean_T jknbrx32pj ;
boolean_T pmqufde2h1 ; boolean_T inefucjrpd ; boolean_T cslkm1fbej ;
boolean_T gdgxtxgf1g ; boolean_T ky01ccojr5 ; boolean_T i5j0r2inrh ;
boolean_T gsqnwqajdt ; boolean_T nip0s141uc ; boolean_T j2xbhujzmo ;
boolean_T dv1fj1e3po ; boolean_T d5o0clolff ; boolean_T h3bh4kq3i4 ;
boolean_T ndj0iieydo ; boolean_T db0mrltr1f ; boolean_T ghat2mvfdb ;
boolean_T dbyjv3m3km ; boolean_T nq533x3m4z ; boolean_T lq3hiypoc1 ;
boolean_T d5x0pmmjhx ; boolean_T axi1h1fttd ; boolean_T n3znxzlzoy ;
boolean_T dtq0brtwgy ; boolean_T e2av1fijfk ; boolean_T izd0xxaozr ;
boolean_T fan5swni5z ; boolean_T ebphxvnfm5 ; boolean_T pvbkyahyj2 ;
boolean_T nw0ce5ez2e ; boolean_T pyfiwzjg3y ; boolean_T ettbn5njm2 ;
boolean_T litxgdvmkb ; boolean_T jw2gcekxcn ; boolean_T haxmbuhro2 ;
boolean_T l2wdkwq3l3 ; boolean_T gkvgzinv2s ; boolean_T hyj4pez02v ;
boolean_T evuw2ur1ju ; boolean_T bcvviips3r ; boolean_T mbyb3mwghk ;
boolean_T fl5kdak43c ; boolean_T izhelokxhz ; boolean_T p5x4qrbnra ;
boolean_T ode0ma3jvt ; boolean_T e2i1vst4ks ; boolean_T bp0z35htv2 ;
boolean_T j43lisdiks ; boolean_T gijlhzozco ; boolean_T on3sz2avtq ;
boolean_T fda20uvw2n ; boolean_T b0gd0xwnrv ; boolean_T mmptt4byoj ;
boolean_T pjoh3gen5u ; butccgvrps atko2rhysz ; p0cxfzutxs ctkwb4rte4 ;
gz3y5krne4 ayc1u05z0b ; k0xrm5jzxo jnhmigxpfr ; jnloryplhv hqymuumkk2 ;
nn2t3endfk ph0c5wwhlf ; gfwf1bb5ur jkhbxjlbpd ; oyzryugtpv chadwwtb33 ;
fosyfoanqd k0pzgqkvwb ; pozkxb0in3 diaw2yowgl ; jaqxwmxome eeeqgos433 ;
npw2jnyxb4 ekp05fi01e ; lddk4cji3u gw0bb4lu4k ; ek02ioxskj jwlq00h0qp ;
arzkv2ko5t fbu1mofswb ; butccgvrps c45nfqxt1bx ; p0cxfzutxs dmnv2typrkz ;
gz3y5krne4 bx4q2vjdxxp ; k0xrm5jzxo gzu0v1k154f ; jnloryplhv m2rovdpxpjx ;
nn2t3endfk dfgw4kuzso2 ; gfwf1bb5ur gvbyuajj10j ; oyzryugtpv o3izwcublel ;
fosyfoanqd pdnjandztac ; pozkxb0in3 hexdymfazx2 ; jaqxwmxome im0j4vockyt ;
npw2jnyxb4 am45qhx1eqm ; lddk4cji3u g2rlwqx2xml ; ek02ioxskj nv44ttbdg32 ;
arzkv2ko5t cqyo42y2ghh ; gfn2ks10r2 hshupcos05 ; isvwrqfyng bzql1z5sfh ;
eg3ij1foh1 nbx3n1zru5 ; nqfwsiobzc gitl1vogja ; cnkyxsdrei ig3hrn2l24 ;
eoa0ko2nnm ju3onx0ww2 ; licusx5ity prjjcc3mxy ; besxczw1nh mm0axov05p ;
dlkubice4t cqouob3iam ; dyycn05pta djq1we332q ; ecl5qgk2gm d50tkbrk2e ;
joga05kjsz ppnfsuot4z ; jw05mhjete h502wprcm0 ; ck15sjqlzy ec1kk3wac3 ;
n2vzy4fgqb mcrnskrou3 ; kb425lama0 psluq53bh5 ; d4apjfx232 l2dw2tngpy ;
gfn2ks10r2 ludvfohavv ; isvwrqfyng cnelbzjfhg ; eg3ij1foh1 mx4jv5qqj4 ;
nqfwsiobzc ls5eenr2ad ; cnkyxsdrei bk35bvlqhh ; eoa0ko2nnm d3bzw5xtsk ;
licusx5ity p5zpxze4b1 ; besxczw1nh iaybj1yga2 ; dlkubice4t ok1l4kluje ;
dyycn05pta jyf4ywwf11 ; ecl5qgk2gm odwyzbzb3q ; joga05kjsz f32lct1du0 ;
jw05mhjete mw2keyc00d ; ck15sjqlzy pmc2mjfvx3 ; n2vzy4fgqb opqx3n1jiv ;
kb425lama0 lhl4belrft ; d4apjfx232 aomefh15n5 ; gfn2ks10r2 hhpwfeyxv5 ;
isvwrqfyng mr4jil2nb0 ; eg3ij1foh1 mtb1g0er0c ; nqfwsiobzc logcpemxnl ;
cnkyxsdrei fmiwt01ncc ; eoa0ko2nnm a5ydisma0n ; licusx5ity cp2x5swpim ;
besxczw1nh pg2gn3izhv ; dlkubice4t li4w4j22ee ; dyycn05pta c0cv1fecmf ;
ecl5qgk2gm dwkrhy1adj ; joga05kjsz kiv2ffdk2i ; jw05mhjete o44pc0z3gt ;
ck15sjqlzy olew5caigs ; n2vzy4fgqb edsrfmi5oc ; kb425lama0 dq1vaupevs ;
d4apjfx232 gt31hnr3lf ; gfn2ks10r2 ob2fx4wpxa ; isvwrqfyng o3fupwkw3j ;
eg3ij1foh1 bu3vpkznrt ; nqfwsiobzc aj5wkrbghc ; cnkyxsdrei bc2ak5uvom ;
eoa0ko2nnm dticnm5yh1 ; licusx5ity gegc3wkr22 ; besxczw1nh okqcrlylqk ;
dlkubice4t dud531lchs ; dyycn05pta k1pxlisolz ; ecl5qgk2gm gmghl42rva ;
joga05kjsz gkwxar31g1 ; jw05mhjete p2dpdzhqcw ; ck15sjqlzy pyfhcpopnq ;
n2vzy4fgqb lcttqdmfq0 ; kb425lama0 dax5mxpt1x ; d4apjfx232 bmgxswof1n ;
gfn2ks10r2 c4ex142obk ; isvwrqfyng jqkgyvk5wj ; eg3ij1foh1 pr5yb11xg2 ;
nqfwsiobzc e0yth1yr5j ; cnkyxsdrei depkfxt3dl ; eoa0ko2nnm nljvbf4yun ;
licusx5ity liocd5kn1l ; besxczw1nh crqoduzoa4 ; dlkubice4t buqfyhw4zg ;
dyycn05pta fpel54lr1q ; ecl5qgk2gm d3o4x0ovlb ; joga05kjsz dhqnhtbmwa ;
jw05mhjete a1r25vmwrh ; ck15sjqlzy cit10epw2d ; n2vzy4fgqb pnkexv004t ;
kb425lama0 kkcnk3nues ; d4apjfx232 il5ne4vyn3 ; gfn2ks10r2 fxuvuc5ilx3 ;
isvwrqfyng onrxopzil04 ; eg3ij1foh1 dlafdnj3fgi ; nqfwsiobzc m1qiz2ekayi ;
cnkyxsdrei j11vdnbc5b2 ; eoa0ko2nnm f2rydg4dp1k ; licusx5ity bstd1u2cpob ;
besxczw1nh aazmv33tcmo ; dlkubice4t mtt1ayedixs ; dyycn05pta jtd3j4qmtj3 ;
ecl5qgk2gm hx2bxym1a4g ; joga05kjsz fzp5yrcmsta ; jw05mhjete k33a52bgwif ;
ck15sjqlzy po54rt51rvx ; n2vzy4fgqb mggcxvqcxnx ; kb425lama0 nt3t3nwbzjn ;
d4apjfx232 kum1vfui1c3 ; lf4dq10l1d p1cpbmtwa2 ; lf4dq10l1d dk52awvy35 ;
lf4dq10l1d faha5qigiv5 ; dtrl0ddrd1 itndmcozqm ; dhrlki4cje hv3vc22vuw ;
ouvmkwvpjn ndmardmusd ; l1pszmkfnd edawel13bx ; dtrl0ddrd1 dcguzoxh2sb ;
dhrlki4cje baulvd1vdb ; ouvmkwvpjn cmiciuw2cg ; l1pszmkfnd p0vbpdtq52 ; } DW
; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ {
real_T Ts ; uint16_T isFullCheck_const ; uint16_T
isFullCheck_const_dnwpr4ubhl ; uint16_T CompareToConstant_const ; uint16_T
CompareToConstant_const_jm5v5xzbex ; uint16_T
CompareToConstant_const_lll3g54fhb ; uint16_T
CompareToConstant_const_dskpsc1lyx ; uint16_T BitwiseOperator_BitMask ;
uint16_T BitwiseOperator_BitMask_pwzdp1p2gi ; uint16_T
BitwiseOperator_BitMask_ehalreex2c ; uint16_T
BitwiseOperator_BitMask_n0cbpf4iig ; uint16_T
BitwiseOperator_BitMask_porvum2fca ; uint16_T
BitwiseOperator_BitMask_czqch3cncq ; uint16_T
BitwiseOperator_BitMask_fecpnjly5b ; uint16_T
BitwiseOperator_BitMask_g1o031ib0b ; uint16_T WrapToZero_Threshold ; uint8_T
WrapToZero_Threshold_ae5l2yn5e5 ; uint8_T WrapToZero_Threshold_ogbjsdyhzu ;
uint8_T WrapToZero_Threshold_glw20ldyqo ; uint8_T
WrapToZero_Threshold_bn4w3ibzxo ; uint8_T WrapToZero_Threshold_ccnvtzvkfy ;
uint8_T WrapToZero_Threshold_ishuyoslnw ; uint8_T
CompareToConstant_const_ki2qdk1tft ; uint8_T
CompareToConstant_const_posh5s4xsw ; uint8_T
CompareToConstant_const_ivoeinhxcp ; uint8_T
CompareToConstant_const_fv1a5xrnzm ; uint8_T
CompareToConstant_const_mrpnokptev ; uint8_T
CompareToConstant_const_jl51uhveun ; real_T Step1_Y0 ; real_T Step1_YFinal ;
real_T Delay2_InitialCondition ; real_T FromWorkspace1_Time0 [ 6145 ] ;
real_T FromWorkspace1_Data0 [ 6145 ] ; real_T Step1_Y0_psyct5ihq5 ; real_T
Step1_YFinal_k2gsuswhgo ; real_T Delay2_InitialCondition_i0y3mptmut ; real_T
FromWorkspace2_Time0 [ 6145 ] ; real_T FromWorkspace2_Data0 [ 6145 ] ; real_T
Step1_Y0_jaahoyzl40 ; real_T Step1_YFinal_esp4szosrq ; real_T
Delay2_InitialCondition_nrrrgqzphk ; real_T outselect_reg_InitialCondition ;
real_T outselect_reg_InitialCondition_a0ryv310m4 ; real_T noPop_Value ;
real_T noPop_Value_mjxdhsvlst ; int64_T Delay_InitialCondition ; int64_T
Delay_InitialCondition_cuyujzmjja ; int64_T Delay_InitialCondition_dwbjteayhm
; int64_T Delay_InitialCondition_avqzrbmyhr ; int64_T
Delay_InitialCondition_pweepdckj1 ; int64_T Delay_InitialCondition_dn22fhgklz
; int64_T Delay_InitialCondition_kmo3owkzp3 ; int64_T
Delay_InitialCondition_mchznqjyyp ; int64_T Delay_InitialCondition_kdvlsakntn
; int64_T Delay_InitialCondition_p5cekovndr ; int64_T
Delay_InitialCondition_ecslmvhicr ; int64_T Delay_InitialCondition_puyjqvkpqn
; int64_T Delay_InitialCondition_kbbwvgrobv ; int64_T
Delay_InitialCondition_obhsrwbvfw ; int64_T Delay_InitialCondition_gde2qns1sn
; int64_T Delay_InitialCondition_aegja0zge0 ; int64_T
Delay_InitialCondition_cvzwgp3sa3 ; int64_T Delay_InitialCondition_avcgvlm545
; int64_T Delay_InitialCondition_iorjgne1ht ; int64_T
Delay_InitialCondition_puizcqh4j5 ; int64_T Delay_InitialCondition_na3nsnrfxk
; int64_T Delay_InitialCondition_edapuq3h54 ; int64_T
Delay_InitialCondition_hfx2wgqklt ; int64_T Delay_InitialCondition_dew3uen3eg
; int64_T Delay_InitialCondition_logxrtj0wp ; int64_T
Delay_InitialCondition_jaf1sdkjey ; int64_T Delay_InitialCondition_hcnksshddy
; int64_T Delay_InitialCondition_hqdvrqsp2s ; int64_T
Delay_InitialCondition_jadleeztvh ; int64_T Delay_InitialCondition_pav2cey3c2
; int64_T Delay_InitialCondition_bhsurkdb4i ; int64_T
Delay_InitialCondition_fd0343eeir ; int64_T Delay_InitialCondition_cfsx51swza
; int64_T Delay_InitialCondition_apec3wl0fc ; int64_T
Delay_InitialCondition_bcdpryjn54 ; int64_T Delay_InitialCondition_jfzedj03bv
; int64_T Delay_InitialCondition_evouhamhki ; int64_T
Delay_InitialCondition_fyttkksrr2 ; int64_T Delay_InitialCondition_csj3wvshlc
; int64_T Delay_InitialCondition_en3fegqurr ; int64_T Delay1_InitialCondition
; int64_T Delay2_InitialCondition_o3catttqel ; int64_T
Delay3_InitialCondition ; int64_T Delay4_InitialCondition ; int64_T
Delay5_InitialCondition ; int64_T Delay_InitialCondition_ly345rzjyx ; int64_T
Delay_InitialCondition_jurymom3by ; int64_T Delay_InitialCondition_nxaufxtpaa
; int64_T Delay_InitialCondition_mhycnbq5nh ; int64_T
Delay_InitialCondition_jvkfmcsd4p ; int64_T Delay_InitialCondition_erkb3sdptq
; int64_T Delay_InitialCondition_aeeyiekbjl ; int64_T
Delay_InitialCondition_cu5pdxjtwz ; int64_T Delay_InitialCondition_gw2gbydoyn
; int64_T Delay_InitialCondition_immn4e5mqy ; int64_T
Delay_InitialCondition_isgi0ut24c ; int64_T Delay_InitialCondition_g42qsp0l1h
; int64_T Delay_InitialCondition_fl4lytvimx ; int64_T
Delay_InitialCondition_nmfta03ith ; int64_T Delay_InitialCondition_cllveugtjf
; int64_T Delay_InitialCondition_idfthqch4t ; int64_T
Delay_InitialCondition_bixtsv2y4r ; int64_T Delay_InitialCondition_defzljbi2w
; int64_T Delay_InitialCondition_keoeyta0ek ; int64_T
Delay_InitialCondition_krdphv0gdp ; int64_T Delay_InitialCondition_ar2r1no5co
; int64_T Delay_InitialCondition_g1g31wc12b ; int64_T
Delay_InitialCondition_lggifq2rt1 ; int64_T Delay_InitialCondition_m2obwfcta2
; int64_T Delay_InitialCondition_hdawrdqwez ; int64_T
s_state_out3_InitialCondition ; int64_T s_state_out2_InitialCondition ;
int64_T s_state_out11_InitialCondition ; int64_T zero4_Value ; int64_T
zero5_Value ; int64_T zero6_Value ; int64_T zero_Value ; int64_T zero1_Value
; int64_T zero2_Value ; int64_T zero3_Value ; int64_T Constant20_Value ;
int32_T Constant2_Value ; int32_T Constant3_Value ; int32_T
Constant3_Value_mxd540vau4 ; int32_T Constant4_Value ; int32_T
Constant16_Value ; int32_T Constant3_Value_htxwytgvd0 ; int32_T
Constant19_Value ; int32_T Constant1_Value ; int16_T
Constant4_Value_nlo43egwjb ; int16_T Constant4_Value_bt4p1vnj5a ; int16_T
Gain_Gain ; int16_T Gain_Gain_lrjbfg0ynv ; int16_T Gain_Gain_kcftg05ccd ;
int16_T Gain_Gain_p1g0zps2tu ; int16_T Delay5_InitialCondition_e33ntr4hav ;
int16_T out_reg_InitialCondition ; int16_T
out_reg_InitialCondition_no0vzjg4dg ; uint16_T Gain_Gain_mygr3ck4si ;
uint16_T Constant3_Value_jicc02cxb2 ; uint16_T Constant3_Value_hij2fz2nza ;
uint16_T sampleOutNum_InitialCondition ; uint16_T
Delay1_InitialCondition_gbt1zir35l ; uint16_T
sampleOutNum_InitialCondition_eroorjfv3a ; uint16_T Constant_Value ; uint16_T
NumConstant_Value ; uint16_T Constant_Value_oll5issp5s ; uint16_T
IncrConstant_Value ; uint16_T reset_val_Value ; uint16_T
dir_reg_InitialCondition ; uint16_T idx_reg_InitialCondition ; uint16_T
AddrAdjustConstant_Value ; uint16_T IncrConstant1_Value ; uint16_T
IncrConstant_Value_ll54klyazt ; uint16_T dir_reg_InitialCondition_cmneiredlf
; uint16_T idx_reg_InitialCondition_e2aowmbdn0 ; uint16_T
AddrAdjustConstant_Value_a3sw0qx2oy ; uint16_T reset_val_Value_n5pozfaht2 ;
uint16_T IncrConstant_Value_mzxjl015qf ; uint16_T
Delay1_InitialCondition_oa0pqhkumw ; uint16_T Constant_Value_jgols0rxxs ;
uint16_T NumConstant_Value_fq3tfadzbs ; uint16_T Constant_Value_ky2ahhvhu0 ;
uint16_T IncrConstant_Value_cxaok3igbi ; uint16_T reset_val_Value_l1dbjb542c
; uint16_T dir_reg_InitialCondition_ipllv2vckv ; uint16_T
idx_reg_InitialCondition_epugt1nf4m ; uint16_T
AddrAdjustConstant_Value_pdroplg4xo ; uint16_T IncrConstant1_Value_kw2v1cyoq2
; uint16_T IncrConstant_Value_k3kwic4qgc ; uint16_T
dir_reg_InitialCondition_h1kd1xoks1 ; uint16_T
idx_reg_InitialCondition_pbm0is00zu ; uint16_T
AddrAdjustConstant_Value_ioznfhsvzm ; uint16_T reset_val_Value_f5fszdqqtc ;
uint16_T IncrConstant_Value_lii13my4ix ; uint16_T Output_InitialCondition ;
uint16_T Delay_InitialCondition_ir5a5hkcc3 ; uint16_T
Delay_InitialCondition_omczlhgywm ; uint16_T Constant18_Value ; uint16_T
Constant19_Value_kj2e35musi ; uint16_T Constant20_Value_eoimjoirva ; uint16_T
Constant18_Value_hhhw2aq5ew ; uint16_T Constant19_Value_cwj0sd2sk0 ; uint16_T
Constant20_Value_pxoluy00ae ; uint16_T FixPtConstant_Value ; uint16_T
Constant_Value_ddc4aulvds ; boolean_T Delay_InitialCondition_bivaejht44 ;
boolean_T Delay7_InitialCondition ; boolean_T
Delay3_InitialCondition_dr2jcrglmp ; boolean_T
Delay3_InitialCondition_eshm1um140 ; boolean_T
Delay_InitialCondition_idclbdvyel ; boolean_T
Delay_InitialCondition_oeeytx1otg ; boolean_T
Delay_InitialCondition_okmfayw4p2 ; boolean_T
Delay_InitialCondition_fezvq3cjhw ; boolean_T
Delay_InitialCondition_dxxrsledih ; boolean_T
Delay_InitialCondition_btesh0rfjj ; boolean_T const_reset_Value ; boolean_T
Delay_InitialCondition_polhw3hpqv ; boolean_T Delay6_InitialCondition ;
boolean_T Delay_InitialCondition_btfuanhu4f ; boolean_T
Delay2_InitialCondition_ggyhhxr33t ; boolean_T
Delay3_InitialCondition_eqhsgedjle ; boolean_T AssertionPopEmpty_Enabled ;
boolean_T AssertionPushOntoFull_Enabled ; boolean_T
const_reset_Value_hrlcmymt02 ; boolean_T tuneback_InitialCondition ;
boolean_T Delay_InitialCondition_ebqzpimw1a ; boolean_T
Delay2_InitialCondition_ksdgd0umq4 ; boolean_T
AssertionPopEmpty_Enabled_ebr4dv3pcg ; boolean_T
AssertionPushOntoFull_Enabled_gmaggsveqa ; boolean_T
tuneback_InitialCondition_m3ugpwbhej ; boolean_T Constant6_Value ; boolean_T
Delay_InitialCondition_hgv3wvl25n ; boolean_T
Delay_InitialCondition_pnqhyj4v2u ; boolean_T
Delay_InitialCondition_cobf1zro4g ; boolean_T
Delay_InitialCondition_marlsazlir ; boolean_T
Delay_InitialCondition_k1qtzr5o3x ; boolean_T
Delay_InitialCondition_dwzd2055uf ; boolean_T
Delay_InitialCondition_ltsnbbjuja ; boolean_T
Delay_InitialCondition_fenfztdbl1 ; boolean_T
Delay_InitialCondition_nbba3voxno ; boolean_T
Delay_InitialCondition_ix23afht4e ; boolean_T
Delay_InitialCondition_hbc4sxxp0p ; boolean_T
Delay_InitialCondition_bqwjoax0yj ; boolean_T
Delay_InitialCondition_flvwnxyeqd ; boolean_T
Delay_InitialCondition_dhdb2wz2lb ; boolean_T
Delay_InitialCondition_ontqyxzrde ; boolean_T
Delay_InitialCondition_pp14mxltho ; boolean_T
Delay_InitialCondition_pnzwrhtvfu ; boolean_T
Delay_InitialCondition_lmw1y003x5 ; boolean_T
Delay_InitialCondition_aqr0aeocyz ; boolean_T
Delay_InitialCondition_nyk53vf0cx ; boolean_T
Delay_InitialCondition_fdpfscth32 ; boolean_T
Delay_InitialCondition_m4u3kg3big ; boolean_T
Delay_InitialCondition_pwhpnsimkd ; boolean_T
Delay_InitialCondition_hl1ecmsivp ; boolean_T Constant_Value_ljylfdqaat ;
boolean_T Constant1_Value_h0xkpn4uua ; boolean_T Constant10_Value ; boolean_T
Constant11_Value ; boolean_T Constant12_Value ; boolean_T Constant13_Value ;
boolean_T Constant14_Value ; boolean_T Constant15_Value ; boolean_T
Constant2_Value_bk11cspugg ; boolean_T Constant3_Value_aqklou0zqh ; boolean_T
Constant4_Value_mbqykn1fpr ; boolean_T Constant5_Value ; boolean_T
Constant6_Value_a2pank2zdt ; boolean_T Constant7_Value ; boolean_T
Constant8_Value ; boolean_T Constant9_Value ; boolean_T
Delay_InitialCondition_es5yq0ap1o ; boolean_T
Delay_InitialCondition_ejzkqs0hpt ; boolean_T Constant_Value_dahdo1rqt3 ;
boolean_T Constant1_Value_n5bwfs54ti ; boolean_T Constant10_Value_krsyxmy3qx
; boolean_T Constant11_Value_osknhrztl5 ; boolean_T
Constant12_Value_lxjbhjaxif ; boolean_T Constant13_Value_a424saurfu ;
boolean_T Constant14_Value_jirjpcthxh ; boolean_T Constant15_Value_pzxtn1cqrl
; boolean_T Constant2_Value_noshgnxgcl ; boolean_T Constant3_Value_lmc4b0eylh
; boolean_T Constant4_Value_pjiqg2wr05 ; boolean_T Constant5_Value_m3nuixriil
; boolean_T Constant6_Value_butcytfg5p ; boolean_T Constant7_Value_pdapyylnvn
; boolean_T Constant8_Value_dpu3cgbfp5 ; boolean_T Constant9_Value_kpq1ndhal4
; boolean_T Constant_Value_kxpe3qtzdk ; boolean_T Constant_Value_obmncw1c02 ;
boolean_T Constant_Value_gsvbkw5nar ; boolean_T Constant_Value_lnkchkaqmw ;
boolean_T Constant_Value_drm5f1rfh3 ; boolean_T Constant_Value_dluxsxpxfo ;
boolean_T Constant_Value_jgq4yl1a43 ; boolean_T
Delay3_InitialCondition_cabqrep3hr ; boolean_T
Delay1_InitialCondition_m3xsy2wy1v ; boolean_T
Delay2_InitialCondition_ebhi25mizf ; int8_T Constant1_Value_n4judegzvj ;
int8_T Constant10_Value_f44uzjlu5d ; int8_T Constant11_Value_jpqb1dtsfx ;
int8_T Constant12_Value_f22rvio1nc ; int8_T Constant13_Value_aw3o5jhccx ;
int8_T Constant14_Value_guv12q5ri5 ; int8_T Constant15_Value_j3mvhrt40a ;
int8_T Constant16_Value_fevyvvg53b ; int8_T Constant17_Value ; int8_T
Constant18_Value_bg2u2iviem ; int8_T Constant19_Value_dvedfx4umz ; int8_T
Constant2_Value_k0ktdbocz4 ; int8_T Constant20_Value_fu0rekofhy ; int8_T
Constant21_Value ; int8_T Constant22_Value ; int8_T Constant23_Value ; int8_T
Constant24_Value ; int8_T Constant25_Value ; int8_T Constant26_Value ; int8_T
Constant27_Value ; int8_T Constant28_Value ; int8_T Constant29_Value ; int8_T
Constant3_Value_lbel4dw0dv ; int8_T Constant30_Value ; int8_T
Constant31_Value ; int8_T Constant32_Value ; int8_T Constant33_Value ; int8_T
Constant34_Value ; int8_T Constant35_Value ; int8_T Constant36_Value ; int8_T
Constant37_Value ; int8_T Constant38_Value ; int8_T Constant39_Value ; int8_T
Constant4_Value_escejwutik ; int8_T Constant40_Value ; int8_T
Constant41_Value ; int8_T Constant42_Value ; int8_T Constant43_Value ; int8_T
Constant44_Value ; int8_T Constant45_Value ; int8_T Constant46_Value ; int8_T
Constant47_Value ; int8_T Constant48_Value ; int8_T Constant49_Value ; int8_T
Constant5_Value_mpdnsmcfyz ; int8_T Constant50_Value ; int8_T
Constant51_Value ; int8_T Constant52_Value ; int8_T Constant53_Value ; int8_T
Constant54_Value ; int8_T Constant55_Value ; int8_T Constant56_Value ; int8_T
Constant57_Value ; int8_T Constant58_Value ; int8_T Constant59_Value ; int8_T
Constant6_Value_erkzozkfy5 ; int8_T Constant60_Value ; int8_T
Constant61_Value ; int8_T Constant62_Value ; int8_T Constant63_Value ; int8_T
Constant64_Value ; int8_T Constant65_Value ; int8_T Constant66_Value ; int8_T
Constant67_Value ; int8_T Constant68_Value ; int8_T Constant69_Value ; int8_T
Constant7_Value_aolhk02asu ; int8_T Constant70_Value ; int8_T
Constant71_Value ; int8_T Constant72_Value ; int8_T
Constant8_Value_gabmu1pjqx ; int8_T Constant9_Value_ldfh10xgii ; uint8_T
Gain_Gain_luguv4skm5 ; uint8_T Gain_Gain_hehkc3jgen ; uint8_T
Gain_Gain_dwko2h5myg ; uint8_T ensure_correct_output_Value ; uint8_T
Gain_Gain_ml3xtuu02u ; uint8_T Gain_Gain_einss3wx2k ; uint8_T
Gain_Gain_anelmwmycq ; uint8_T Gain_Gain_ph1dkuretp ; uint8_T
ensure_correct_output_Value_c34npqfhgr ; uint8_T Constant7_Value_kikdqjvaau ;
uint8_T Constant6_Value_elevmgi2no ; uint8_T
Delay_InitialCondition_my2m5jb2lf ; uint8_T Delay_InitialCondition_doqmmh3mag
; uint8_T Delay_InitialCondition_mgypbnyrdb ; uint8_T
Constant1_Value_oc0x242dem ; uint8_T default_value_Value ; uint8_T
Switch1_Threshold ; uint8_T Switch_Threshold ; uint8_T
Constant2_Value_o0aigcm4a0 ; uint8_T Constant3_Value_bmnfexfwrt ; uint8_T
Constant4_Value_j042mwjans ; uint8_T Constant5_Value_h5a3mj5l2n ; uint8_T
default_value_Value_h5lcckccaz ; uint8_T Switch1_Threshold_ke1b2onbxf ;
uint8_T Switch_Threshold_b0engqzvpo ; uint8_T Constant10_Value_p2fum2vdhg ;
uint8_T Constant11_Value_e0fehbzcco ; uint8_T Constant12_Value_g2ldfeqpok ;
uint8_T Constant13_Value_k510ta45pu ; uint8_T Constant14_Value_grljbqk2fk ;
uint8_T Constant4_Value_jnryy02zo2 ; uint8_T Constant5_Value_dlnuts02vb ;
uint8_T Constant6_Value_kvw5idspid ; uint8_T Constant7_Value_cigoy1sn5w ;
uint8_T Constant8_Value_lnbgrt5c23 ; uint8_T Constant9_Value_ja0e5xa3ny ;
uint8_T Constant18_Value_jpjoa2d5eb ; uint8_T Constant19_Value_bkksxahrr0 ;
uint8_T Constant20_Value_ejdzugpkve ; uint8_T Constant18_Value_fb5kuzjvcv ;
uint8_T Constant19_Value_awtknxhzvr ; uint8_T Constant20_Value_j2bcm3olch ;
uint8_T Delay_InitialCondition_ej1wesyeu5 ; uint8_T
Delay_InitialCondition_e434obmerv ; uint8_T Constant10_Value_jtigejrsqg ;
uint8_T Constant11_Value_ny20b2glpq ; uint8_T Constant12_Value_nrodroa1zq ;
uint8_T Constant13_Value_kreq0wqgss ; uint8_T Constant14_Value_bv4nih1ecy ;
uint8_T Constant4_Value_gvc2vx531c ; uint8_T Constant5_Value_kww0cgogjk ;
uint8_T Constant6_Value_ixzmog31so ; uint8_T Constant7_Value_e205pw3i3h ;
uint8_T Constant8_Value_i2ttqb1cfm ; uint8_T Constant9_Value_cnwrdcmjy0 ;
uint8_T Constant18_Value_b4zwfav5zq ; uint8_T Constant19_Value_jg3p0vfdf5 ;
uint8_T Constant20_Value_dvyltbyzrb ; uint8_T Constant18_Value_hjryrz0cl5 ;
uint8_T Constant19_Value_p1i3pibm4l ; uint8_T Constant20_Value_oii0quqy12 ;
uint8_T Constant18_Value_gq3kqisp45 ; uint8_T Constant19_Value_edt011ewqc ;
uint8_T Constant20_Value_devcrqcnvf ; uint8_T Constant3_Value_lbirtd1onz ;
uint8_T Constant2_Value_ohixjzkukx ; uint8_T Constant3_Value_ct1ssw2iai ;
uint8_T Constant2_Value_i2ixkscr0n ; uint8_T Constant3_Value_el30fn1msq ;
uint8_T Constant2_Value_dwodbc2r1a ; uint8_T Constant3_Value_onbgsrj0rx ;
uint8_T Constant2_Value_a1dspjkqzh ; uint8_T Constant3_Value_alolzh5ywf ;
uint8_T Constant2_Value_kqu1tfwt4n ; uint8_T Constant3_Value_oso0vxioei ;
uint8_T Constant2_Value_ec5rke41be ; uint8_T Constant3_Value_dexrkkh4c4 ;
uint8_T Constant2_Value_nc5s2wb0rh ; uint8_T Constant3_Value_pg0qfh0cbj ;
uint8_T Constant2_Value_dkvarshrqp ; uint8_T Constant3_Value_boeuttnvpz ;
uint8_T Constant2_Value_ouiku3bmk1 ; uint8_T
Output_InitialCondition_ekug4x44vn ; uint8_T
Output_InitialCondition_fn12urbful ; uint8_T
Output_InitialCondition_eccgm5k2bp ; uint8_T
Output_InitialCondition_hdxkfwgth4 ; uint8_T
Output_InitialCondition_aj0nyevvau ; uint8_T
Output_InitialCondition_h33lfi3to1 ; uint8_T FixPtConstant_Value_okrdpvczwf ;
uint8_T Constant_Value_pylrfbkr3w ; uint8_T FixPtConstant_Value_bhgeu0fpar ;
uint8_T Constant_Value_c2yb2rxu1u ; uint8_T FixPtConstant_Value_nuaehx1n4j ;
uint8_T Constant_Value_dyxnhvyys4 ; uint8_T FixPtConstant_Value_ehporg5fvl ;
uint8_T Constant_Value_adi2n2a0cl ; uint8_T FixPtConstant_Value_ei22421lfm ;
uint8_T Constant_Value_oligm1bz2g ; uint8_T FixPtConstant_Value_ce4d11zyxj ;
uint8_T Constant_Value_kk2xbfbwqa ; } ; extern const char_T *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ; extern P rtP ;
extern mxArray * mr_DUALportRAMinterface_v3_GetDWork ( ) ; extern void
mr_DUALportRAMinterface_v3_SetDWork ( const mxArray * ssDW ) ; extern mxArray
* mr_DUALportRAMinterface_v3_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * DUALportRAMinterface_v3_GetCAPIStaticMap (
void ) ; extern SimStruct * const rtS ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
