#ifndef DUALportRAMinterface_v3_types_h_
#define DUALportRAMinterface_v3_types_h_
#include "rtwtypes.h"
#ifndef struct_tag_BlgwLpgj2bjudmbmVKWwDE
#define struct_tag_BlgwLpgj2bjudmbmVKWwDE
struct tag_BlgwLpgj2bjudmbmVKWwDE { uint32_T f1 [ 8 ] ; } ;
#endif
#ifndef typedef_ki0thiwua4
#define typedef_ki0thiwua4
typedef struct tag_BlgwLpgj2bjudmbmVKWwDE ki0thiwua4 ;
#endif
#ifndef struct_tag_Ljb7PMsDTeFyYuk11TAfWD
#define struct_tag_Ljb7PMsDTeFyYuk11TAfWD
struct tag_Ljb7PMsDTeFyYuk11TAfWD { int32_T isInitialized ; ki0thiwua4
inputVarSize [ 4 ] ; int16_T pRAM [ 8192 ] ; int16_T pOutReadData ; } ;
#endif
#ifndef typedef_jhe2xtdg5h
#define typedef_jhe2xtdg5h
typedef struct tag_Ljb7PMsDTeFyYuk11TAfWD jhe2xtdg5h ;
#endif
#ifndef struct_tag_b6yyYF6FOfuMpvgNDkv2RE
#define struct_tag_b6yyYF6FOfuMpvgNDkv2RE
struct tag_b6yyYF6FOfuMpvgNDkv2RE { int32_T isInitialized ; real_T
pWrOutBuffer_index ; real_T pRdOutBuffer_index ; real_T pInBufferIndex ;
int32_T pInBuffer_re [ 57344 ] ; int32_T pInBuffer_im [ 57344 ] ; real_T
pInBuffer_valid [ 57344 ] ; cint32_T pOutBuffer_cmplx [ 114688 ] ; real_T
pBitReverseTable_H [ 2048 ] ; real_T pBitReverseTable_F [ 4096 ] ; boolean_T
pStartOutputPort [ 4096 ] ; boolean_T pEndOutputPort [ 4096 ] ; real_T
pOverflowStage [ 12 ] ; real_T pSimTime ; real_T pCurSOF ; real_T pSOFFifo [
1024 ] ; real_T pWrFifoAddr ; real_T pRdFifoAddr ; cint32_T pLastData ;
cint32_T pInitialValue ; boolean_T pWrOutBuffer_roll ; boolean_T
pRdOutBuffer_roll ; boolean_T pResetStart ; boolean_T pOverflowFlag ; real_T
pState ; real_T pSampleCnt ; real_T pOutCnt ; boolean_T pWrEnb ; boolean_T
pRdyReg ; boolean_T pInitialize ; } ;
#endif
#ifndef typedef_lgw3dwnp03
#define typedef_lgw3dwnp03
typedef struct tag_b6yyYF6FOfuMpvgNDkv2RE lgw3dwnp03 ;
#endif
#ifndef struct_tag_zO12211hbIjhbN6UwMyYDC
#define struct_tag_zO12211hbIjhbN6UwMyYDC
struct tag_zO12211hbIjhbN6UwMyYDC { int32_T isInitialized ; ki0thiwua4
inputVarSize [ 6 ] ; uint32_T pRAM [ 65536 ] ; uint32_T pOutWriteData [ 2 ] ;
} ;
#endif
#ifndef typedef_gf3a2t0gs5
#define typedef_gf3a2t0gs5
typedef struct tag_zO12211hbIjhbN6UwMyYDC gf3a2t0gs5 ;
#endif
#ifndef struct_tag_qJToXxQ9dcJs9yF4qmf7QD
#define struct_tag_qJToXxQ9dcJs9yF4qmf7QD
struct tag_qJToXxQ9dcJs9yF4qmf7QD { int32_T isInitialized ; boolean_T
isSetupComplete ; ki0thiwua4 inputVarSize ; } ;
#endif
#ifndef typedef_gsamlxo1wb
#define typedef_gsamlxo1wb
typedef struct tag_qJToXxQ9dcJs9yF4qmf7QD gsamlxo1wb ;
#endif
#ifndef struct_tag_Y0PxvvgfNmYyNs9VvAeE6D
#define struct_tag_Y0PxvvgfNmYyNs9VvAeE6D
struct tag_Y0PxvvgfNmYyNs9VvAeE6D { boolean_T matlabCodegenIsDeleted ;
int32_T isInitialized ; boolean_T isSetupComplete ; gsamlxo1wb pSystemImpl ;
uint64_T pPipeline [ 4 ] ; boolean_T pValidPipeline [ 4 ] ; } ;
#endif
#ifndef typedef_o0tlycgbd5
#define typedef_o0tlycgbd5
typedef struct tag_Y0PxvvgfNmYyNs9VvAeE6D o0tlycgbd5 ;
#endif
#ifndef struct_tag_ptiFdEjcxXm30dBzVlNXTB
#define struct_tag_ptiFdEjcxXm30dBzVlNXTB
struct tag_ptiFdEjcxXm30dBzVlNXTB { boolean_T matlabCodegenIsDeleted ;
int32_T isInitialized ; boolean_T isSetupComplete ; gsamlxo1wb pSystemImpl ;
uint64_T pPipeline [ 4 ] ; boolean_T pValidPipeline [ 4 ] ; } ;
#endif
#ifndef typedef_o0tlycgbd5h
#define typedef_o0tlycgbd5h
typedef struct tag_ptiFdEjcxXm30dBzVlNXTB o0tlycgbd5h ;
#endif
#ifndef struct_tag_d2mL8o1CwpVq6FJbLiiR8F
#define struct_tag_d2mL8o1CwpVq6FJbLiiR8F
struct tag_d2mL8o1CwpVq6FJbLiiR8F { boolean_T matlabCodegenIsDeleted ;
int32_T isInitialized ; boolean_T isSetupComplete ; gsamlxo1wb pSystemImpl ;
uint64_T pPipeline [ 4 ] ; boolean_T pValidPipeline [ 4 ] ; } ;
#endif
#ifndef typedef_o0tlycgbd5hp
#define typedef_o0tlycgbd5hp
typedef struct tag_d2mL8o1CwpVq6FJbLiiR8F o0tlycgbd5hp ;
#endif
#ifndef struct_tag_6BcskISwL4PIhI1Qnune3G
#define struct_tag_6BcskISwL4PIhI1Qnune3G
struct tag_6BcskISwL4PIhI1Qnune3G { boolean_T matlabCodegenIsDeleted ;
int32_T isInitialized ; boolean_T isSetupComplete ; gsamlxo1wb pSystemImpl ;
uint64_T pPipeline [ 4 ] ; boolean_T pValidPipeline [ 4 ] ; } ;
#endif
#ifndef typedef_o0tlycgbd5hph
#define typedef_o0tlycgbd5hph
typedef struct tag_6BcskISwL4PIhI1Qnune3G o0tlycgbd5hph ;
#endif
#ifndef SS_UINT64
#define SS_UINT64 64
#endif
#ifndef SS_INT64
#define SS_INT64 65
#endif
typedef struct P_ P ;
#endif
