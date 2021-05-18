/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define WCGR0 96
#define DOM_CC_X_AND_Y 0
#define WCGR1 97
#define SP_REGNUM 13
#define APSRGE_REGNUM 105
#define VFPCC_REGNUM 101
#define CMP_CMN 2
#define CMP_CMP 0
#define NUM_OF_COND_CMP 4
#define R0_REGNUM 0
#define VPR_REGNUM 106
#define DOM_CC_X_OR_Y 2
#define APSRQ_REGNUM 104
#define CMN_CMN 3
#define CMN_CMP 1
#define FDPIC_REGNUM 9
#define CC_REGNUM 100
#define LAST_ARM_REGNUM 15
#define PC_REGNUM 15
#define R4_REGNUM 4
#define LR_REGNUM 14
#define R1_REGNUM 1
#define DOM_CC_NX_OR_Y 1
#define IP_REGNUM 12
#define WCGR2 98
#define WCGR3 99

enum unspec {
  UNSPEC_PUSH_MULT = 0,
  UNSPEC_PIC_SYM = 1,
  UNSPEC_PIC_BASE = 2,
  UNSPEC_PRLG_STK = 3,
  UNSPEC_REGISTER_USE = 4,
  UNSPEC_CHECK_ARCH = 5,
  UNSPEC_WSHUFH = 6,
  UNSPEC_WACC = 7,
  UNSPEC_TMOVMSK = 8,
  UNSPEC_WSAD = 9,
  UNSPEC_WSADZ = 10,
  UNSPEC_WMACS = 11,
  UNSPEC_WMACU = 12,
  UNSPEC_WMACSZ = 13,
  UNSPEC_WMACUZ = 14,
  UNSPEC_CLRDI = 15,
  UNSPEC_WALIGNI = 16,
  UNSPEC_TLS = 17,
  UNSPEC_PIC_LABEL = 18,
  UNSPEC_PIC_OFFSET = 19,
  UNSPEC_GOTSYM_OFF = 20,
  UNSPEC_THUMB1_CASESI = 21,
  UNSPEC_RBIT = 22,
  UNSPEC_SYMBOL_OFFSET = 23,
  UNSPEC_MEMORY_BARRIER = 24,
  UNSPEC_UNALIGNED_LOAD = 25,
  UNSPEC_UNALIGNED_STORE = 26,
  UNSPEC_PIC_UNIFIED = 27,
  UNSPEC_Q_SET = 28,
  UNSPEC_GE_SET = 29,
  UNSPEC_APSR_READ = 30,
  UNSPEC_LL = 31,
  UNSPEC_VRINTZ = 32,
  UNSPEC_VRINTP = 33,
  UNSPEC_VRINTM = 34,
  UNSPEC_VRINTR = 35,
  UNSPEC_VRINTX = 36,
  UNSPEC_VRINTA = 37,
  UNSPEC_PROBE_STACK = 38,
  UNSPEC_NONSECURE_MEM = 39,
  UNSPEC_SP_SET = 40,
  UNSPEC_SP_TEST = 41,
  UNSPEC_PIC_RESTORE = 42,
  UNSPEC_SXTAB16 = 43,
  UNSPEC_UXTAB16 = 44,
  UNSPEC_SXTB16 = 45,
  UNSPEC_UXTB16 = 46,
  UNSPEC_QADD8 = 47,
  UNSPEC_QSUB8 = 48,
  UNSPEC_SHADD8 = 49,
  UNSPEC_SHSUB8 = 50,
  UNSPEC_UHADD8 = 51,
  UNSPEC_UHSUB8 = 52,
  UNSPEC_UQADD8 = 53,
  UNSPEC_UQSUB8 = 54,
  UNSPEC_QADD16 = 55,
  UNSPEC_QASX = 56,
  UNSPEC_QSAX = 57,
  UNSPEC_QSUB16 = 58,
  UNSPEC_SHADD16 = 59,
  UNSPEC_SHASX = 60,
  UNSPEC_SHSAX = 61,
  UNSPEC_SHSUB16 = 62,
  UNSPEC_UHADD16 = 63,
  UNSPEC_UHASX = 64,
  UNSPEC_UHSAX = 65,
  UNSPEC_UHSUB16 = 66,
  UNSPEC_UQADD16 = 67,
  UNSPEC_UQASX = 68,
  UNSPEC_UQSAX = 69,
  UNSPEC_UQSUB16 = 70,
  UNSPEC_SMUSD = 71,
  UNSPEC_SMUSDX = 72,
  UNSPEC_USAD8 = 73,
  UNSPEC_USADA8 = 74,
  UNSPEC_SMLALD = 75,
  UNSPEC_SMLALDX = 76,
  UNSPEC_SMLSLD = 77,
  UNSPEC_SMLSLDX = 78,
  UNSPEC_SMLAWB = 79,
  UNSPEC_SMLAWT = 80,
  UNSPEC_SEL = 81,
  UNSPEC_SADD8 = 82,
  UNSPEC_SSUB8 = 83,
  UNSPEC_UADD8 = 84,
  UNSPEC_USUB8 = 85,
  UNSPEC_SADD16 = 86,
  UNSPEC_SASX = 87,
  UNSPEC_SSAX = 88,
  UNSPEC_SSUB16 = 89,
  UNSPEC_UADD16 = 90,
  UNSPEC_UASX = 91,
  UNSPEC_USAX = 92,
  UNSPEC_USUB16 = 93,
  UNSPEC_SMLAD = 94,
  UNSPEC_SMLADX = 95,
  UNSPEC_SMLSD = 96,
  UNSPEC_SMLSDX = 97,
  UNSPEC_SMUAD = 98,
  UNSPEC_SMUADX = 99,
  UNSPEC_SSAT16 = 100,
  UNSPEC_USAT16 = 101,
  UNSPEC_CDE = 102,
  UNSPEC_CDEA = 103,
  UNSPEC_VCDE = 104,
  UNSPEC_VCDEA = 105,
  UNSPEC_DLS = 106,
  UNSPEC_WADDC = 107,
  UNSPEC_WABS = 108,
  UNSPEC_WQMULWMR = 109,
  UNSPEC_WQMULMR = 110,
  UNSPEC_WQMULWM = 111,
  UNSPEC_WQMULM = 112,
  UNSPEC_WQMIAxyn = 113,
  UNSPEC_WQMIAxy = 114,
  UNSPEC_TANDC = 115,
  UNSPEC_TORC = 116,
  UNSPEC_TORVSC = 117,
  UNSPEC_TEXTRC = 118,
  UNSPEC_GET_FPSCR_NZCVQC = 119,
  UNSPEC_ASHIFT_SIGNED = 120,
  UNSPEC_ASHIFT_UNSIGNED = 121,
  UNSPEC_CRC32B = 122,
  UNSPEC_CRC32H = 123,
  UNSPEC_CRC32W = 124,
  UNSPEC_CRC32CB = 125,
  UNSPEC_CRC32CH = 126,
  UNSPEC_CRC32CW = 127,
  UNSPEC_AESD = 128,
  UNSPEC_AESE = 129,
  UNSPEC_AESIMC = 130,
  UNSPEC_AESMC = 131,
  UNSPEC_SHA1C = 132,
  UNSPEC_SHA1M = 133,
  UNSPEC_SHA1P = 134,
  UNSPEC_SHA1H = 135,
  UNSPEC_SHA1SU0 = 136,
  UNSPEC_SHA1SU1 = 137,
  UNSPEC_SHA256H = 138,
  UNSPEC_SHA256H2 = 139,
  UNSPEC_SHA256SU0 = 140,
  UNSPEC_SHA256SU1 = 141,
  UNSPEC_VMULLP64 = 142,
  UNSPEC_LOAD_COUNT = 143,
  UNSPEC_VABAL_S = 144,
  UNSPEC_VABAL_U = 145,
  UNSPEC_VABD_F = 146,
  UNSPEC_VABD_S = 147,
  UNSPEC_VABD_U = 148,
  UNSPEC_VABDL_S = 149,
  UNSPEC_VABDL_U = 150,
  UNSPEC_VADD = 151,
  UNSPEC_VADDHN = 152,
  UNSPEC_VRADDHN = 153,
  UNSPEC_VADDL_S = 154,
  UNSPEC_VADDL_U = 155,
  UNSPEC_VADDW_S = 156,
  UNSPEC_VADDW_U = 157,
  UNSPEC_VBSL = 158,
  UNSPEC_VCAGE = 159,
  UNSPEC_VCAGT = 160,
  UNSPEC_VCALE = 161,
  UNSPEC_VCALT = 162,
  UNSPEC_VCEQ = 163,
  UNSPEC_VCGE = 164,
  UNSPEC_VCGEU = 165,
  UNSPEC_VCGT = 166,
  UNSPEC_VCGTU = 167,
  UNSPEC_VCLS = 168,
  UNSPEC_VCONCAT = 169,
  UNSPEC_VCVT = 170,
  UNSPEC_VCVT_S = 171,
  UNSPEC_VCVT_U = 172,
  UNSPEC_VCVT_S_N = 173,
  UNSPEC_VCVT_U_N = 174,
  UNSPEC_VCVT_HF_S_N = 175,
  UNSPEC_VCVT_HF_U_N = 176,
  UNSPEC_VCVT_SI_S_N = 177,
  UNSPEC_VCVT_SI_U_N = 178,
  UNSPEC_VCVTH_S = 179,
  UNSPEC_VCVTH_U = 180,
  UNSPEC_VCVTA_S = 181,
  UNSPEC_VCVTA_U = 182,
  UNSPEC_VCVTM_S = 183,
  UNSPEC_VCVTM_U = 184,
  UNSPEC_VCVTN_S = 185,
  UNSPEC_VCVTN_U = 186,
  UNSPEC_VCVTP_S = 187,
  UNSPEC_VCVTP_U = 188,
  UNSPEC_VEXT = 189,
  UNSPEC_VHADD_S = 190,
  UNSPEC_VHADD_U = 191,
  UNSPEC_VRHADD_S = 192,
  UNSPEC_VRHADD_U = 193,
  UNSPEC_VHSUB_S = 194,
  UNSPEC_VHSUB_U = 195,
  UNSPEC_VLD1 = 196,
  UNSPEC_VLD1_LANE = 197,
  UNSPEC_VLD2 = 198,
  UNSPEC_VLD2_DUP = 199,
  UNSPEC_VLD2_LANE = 200,
  UNSPEC_VLD3 = 201,
  UNSPEC_VLD3A = 202,
  UNSPEC_VLD3B = 203,
  UNSPEC_VLD3_DUP = 204,
  UNSPEC_VLD3_LANE = 205,
  UNSPEC_VLD4 = 206,
  UNSPEC_VLD4A = 207,
  UNSPEC_VLD4B = 208,
  UNSPEC_VLD4_DUP = 209,
  UNSPEC_VLD4_LANE = 210,
  UNSPEC_VMAX = 211,
  UNSPEC_VMAX_U = 212,
  UNSPEC_VMAXNM = 213,
  UNSPEC_VMIN = 214,
  UNSPEC_VMIN_U = 215,
  UNSPEC_VMINNM = 216,
  UNSPEC_VMLA = 217,
  UNSPEC_VMLA_LANE = 218,
  UNSPEC_VMLAL_S = 219,
  UNSPEC_VMLAL_U = 220,
  UNSPEC_VMLAL_S_LANE = 221,
  UNSPEC_VMLAL_U_LANE = 222,
  UNSPEC_VMLS = 223,
  UNSPEC_VMLS_LANE = 224,
  UNSPEC_VMLSL_S = 225,
  UNSPEC_VMLSL_U = 226,
  UNSPEC_VMLSL_S_LANE = 227,
  UNSPEC_VMLSL_U_LANE = 228,
  UNSPEC_VMLSL_LANE = 229,
  UNSPEC_VFMA_LANE = 230,
  UNSPEC_VFMS_LANE = 231,
  UNSPEC_VMOVL_S = 232,
  UNSPEC_VMOVL_U = 233,
  UNSPEC_VMOVN = 234,
  UNSPEC_VMUL = 235,
  UNSPEC_VMULL_P = 236,
  UNSPEC_VMULL_S = 237,
  UNSPEC_VMULL_U = 238,
  UNSPEC_VMUL_LANE = 239,
  UNSPEC_VMULL_S_LANE = 240,
  UNSPEC_VMULL_U_LANE = 241,
  UNSPEC_VPADAL_S = 242,
  UNSPEC_VPADAL_U = 243,
  UNSPEC_VPADD = 244,
  UNSPEC_VPADDL_S = 245,
  UNSPEC_VPADDL_U = 246,
  UNSPEC_VPMAX = 247,
  UNSPEC_VPMAX_U = 248,
  UNSPEC_VPMIN = 249,
  UNSPEC_VPMIN_U = 250,
  UNSPEC_VPSMAX = 251,
  UNSPEC_VPSMIN = 252,
  UNSPEC_VPUMAX = 253,
  UNSPEC_VPUMIN = 254,
  UNSPEC_VQABS = 255,
  UNSPEC_VQADD_S = 256,
  UNSPEC_VQADD_U = 257,
  UNSPEC_VQDMLAL = 258,
  UNSPEC_VQDMLAL_LANE = 259,
  UNSPEC_VQDMLSL = 260,
  UNSPEC_VQDMLSL_LANE = 261,
  UNSPEC_VQDMULH = 262,
  UNSPEC_VQDMULH_LANE = 263,
  UNSPEC_VQRDMULH = 264,
  UNSPEC_VQRDMULH_LANE = 265,
  UNSPEC_VQDMULL = 266,
  UNSPEC_VQDMULL_LANE = 267,
  UNSPEC_VQMOVN_S = 268,
  UNSPEC_VQMOVN_U = 269,
  UNSPEC_VQMOVUN = 270,
  UNSPEC_VQNEG = 271,
  UNSPEC_VQSHL_S = 272,
  UNSPEC_VQSHL_U = 273,
  UNSPEC_VQRSHL_S = 274,
  UNSPEC_VQRSHL_U = 275,
  UNSPEC_VQSHL_S_N = 276,
  UNSPEC_VQSHL_U_N = 277,
  UNSPEC_VQSHLU_N = 278,
  UNSPEC_VQSHRN_S_N = 279,
  UNSPEC_VQSHRN_U_N = 280,
  UNSPEC_VQRSHRN_S_N = 281,
  UNSPEC_VQRSHRN_U_N = 282,
  UNSPEC_VQSHRUN_N = 283,
  UNSPEC_VQRSHRUN_N = 284,
  UNSPEC_VQSUB_S = 285,
  UNSPEC_VQSUB_U = 286,
  UNSPEC_VRECPE = 287,
  UNSPEC_VRECPS = 288,
  UNSPEC_VREV16 = 289,
  UNSPEC_VREV32 = 290,
  UNSPEC_VREV64 = 291,
  UNSPEC_VRSQRTE = 292,
  UNSPEC_VRSQRTS = 293,
  UNSPEC_VSHL_S = 294,
  UNSPEC_VSHL_U = 295,
  UNSPEC_VRSHL_S = 296,
  UNSPEC_VRSHL_U = 297,
  UNSPEC_VSHLL_S_N = 298,
  UNSPEC_VSHLL_U_N = 299,
  UNSPEC_VSHL_N = 300,
  UNSPEC_VSHR_S_N = 301,
  UNSPEC_VSHR_U_N = 302,
  UNSPEC_VRSHR_S_N = 303,
  UNSPEC_VRSHR_U_N = 304,
  UNSPEC_VSHRN_N = 305,
  UNSPEC_VRSHRN_N = 306,
  UNSPEC_VSLI = 307,
  UNSPEC_VSRA_S_N = 308,
  UNSPEC_VSRA_U_N = 309,
  UNSPEC_VRSRA_S_N = 310,
  UNSPEC_VRSRA_U_N = 311,
  UNSPEC_VSRI = 312,
  UNSPEC_VST1 = 313,
  UNSPEC_VST1_LANE = 314,
  UNSPEC_VST2 = 315,
  UNSPEC_VST2_LANE = 316,
  UNSPEC_VST3 = 317,
  UNSPEC_VST3A = 318,
  UNSPEC_VST3B = 319,
  UNSPEC_VST3_LANE = 320,
  UNSPEC_VST4 = 321,
  UNSPEC_VST4A = 322,
  UNSPEC_VST4B = 323,
  UNSPEC_VST4_LANE = 324,
  UNSPEC_VSTRUCTDUMMY = 325,
  UNSPEC_VSUB = 326,
  UNSPEC_VSUBHN = 327,
  UNSPEC_VRSUBHN = 328,
  UNSPEC_VSUBL_S = 329,
  UNSPEC_VSUBL_U = 330,
  UNSPEC_VSUBW_S = 331,
  UNSPEC_VSUBW_U = 332,
  UNSPEC_VTBL = 333,
  UNSPEC_VTBX = 334,
  UNSPEC_VTRN1 = 335,
  UNSPEC_VTRN2 = 336,
  UNSPEC_VTST = 337,
  UNSPEC_VUZP1 = 338,
  UNSPEC_VUZP2 = 339,
  UNSPEC_VZIP1 = 340,
  UNSPEC_VZIP2 = 341,
  UNSPEC_MISALIGNED_ACCESS = 342,
  UNSPEC_VCLE = 343,
  UNSPEC_VCLT = 344,
  UNSPEC_NVRINTZ = 345,
  UNSPEC_NVRINTP = 346,
  UNSPEC_NVRINTM = 347,
  UNSPEC_NVRINTX = 348,
  UNSPEC_NVRINTA = 349,
  UNSPEC_NVRINTN = 350,
  UNSPEC_VQRDMLAH = 351,
  UNSPEC_VQRDMLSH = 352,
  UNSPEC_VRND = 353,
  UNSPEC_VRNDA = 354,
  UNSPEC_VRNDI = 355,
  UNSPEC_VRNDM = 356,
  UNSPEC_VRNDN = 357,
  UNSPEC_VRNDP = 358,
  UNSPEC_VRNDX = 359,
  UNSPEC_DOT_S = 360,
  UNSPEC_DOT_U = 361,
  UNSPEC_DOT_US = 362,
  UNSPEC_DOT_SU = 363,
  UNSPEC_VFML_LO = 364,
  UNSPEC_VFML_HI = 365,
  UNSPEC_VCADD90 = 366,
  UNSPEC_VCADD270 = 367,
  UNSPEC_VCMLA = 368,
  UNSPEC_VCMLA90 = 369,
  UNSPEC_VCMLA180 = 370,
  UNSPEC_VCMLA270 = 371,
  UNSPEC_VCMLA_CONJ = 372,
  UNSPEC_VCMLA180_CONJ = 373,
  UNSPEC_VCMUL = 374,
  UNSPEC_VCMUL90 = 375,
  UNSPEC_VCMUL180 = 376,
  UNSPEC_VCMUL270 = 377,
  UNSPEC_VCMUL_CONJ = 378,
  UNSPEC_MATMUL_S = 379,
  UNSPEC_MATMUL_U = 380,
  UNSPEC_MATMUL_US = 381,
  UNSPEC_BFCVT = 382,
  UNSPEC_BFCVT_HIGH = 383,
  UNSPEC_BFMMLA = 384,
  UNSPEC_BFMAB = 385,
  UNSPEC_BFMAT = 386,
  VST4Q = 387,
  VRNDXQ_F = 388,
  VRNDQ_F = 389,
  VRNDPQ_F = 390,
  VRNDNQ_F = 391,
  VRNDMQ_F = 392,
  VRNDAQ_F = 393,
  VREV64Q_F = 394,
  VDUPQ_N_F = 395,
  VABSQ_F = 396,
  VREV32Q_F = 397,
  VCVTTQ_F32_F16 = 398,
  VCVTBQ_F32_F16 = 399,
  VCVTQ_TO_F_S = 400,
  VQNEGQ_S = 401,
  VCVTQ_TO_F_U = 402,
  VREV16Q_S = 403,
  VREV16Q_U = 404,
  VADDLVQ_S = 405,
  VMVNQ_N_S = 406,
  VMVNQ_N_U = 407,
  VCVTAQ_S = 408,
  VCVTAQ_U = 409,
  VREV64Q_S = 410,
  VREV64Q_U = 411,
  VQABSQ_S = 412,
  VDUPQ_N_U = 413,
  VDUPQ_N_S = 414,
  VCLZQ_U = 415,
  VCLZQ_S = 416,
  VCLSQ_S = 417,
  VADDVQ_S = 418,
  VADDVQ_U = 419,
  VABSQ_S = 420,
  VREV32Q_U = 421,
  VREV32Q_S = 422,
  VMOVLTQ_U = 423,
  VMOVLTQ_S = 424,
  VMOVLBQ_S = 425,
  VMOVLBQ_U = 426,
  VCVTQ_FROM_F_S = 427,
  VCVTQ_FROM_F_U = 428,
  VCVTPQ_S = 429,
  VCVTPQ_U = 430,
  VCVTNQ_S = 431,
  VCVTNQ_U = 432,
  VCVTMQ_S = 433,
  VCVTMQ_U = 434,
  VADDLVQ_U = 435,
  VCTP8Q = 436,
  VCTP16Q = 437,
  VCTP32Q = 438,
  VCTP64Q = 439,
  VPNOT = 440,
  VCREATEQ_F = 441,
  VCVTQ_N_TO_F_S = 442,
  VCVTQ_N_TO_F_U = 443,
  VBRSRQ_N_F = 444,
  VSUBQ_N_F = 445,
  VCREATEQ_U = 446,
  VCREATEQ_S = 447,
  VSHRQ_N_S = 448,
  VSHRQ_N_U = 449,
  VCVTQ_N_FROM_F_S = 450,
  VCVTQ_N_FROM_F_U = 451,
  VADDLVQ_P_S = 452,
  VADDLVQ_P_U = 453,
  VSHLQ_S = 454,
  VSHLQ_U = 455,
  VABDQ_S = 456,
  VADDQ_N_S = 457,
  VADDVAQ_S = 458,
  VADDVQ_P_S = 459,
  VBRSRQ_N_S = 460,
  VHADDQ_S = 461,
  VHADDQ_N_S = 462,
  VHSUBQ_S = 463,
  VHSUBQ_N_S = 464,
  VMAXQ_S = 465,
  VMAXVQ_S = 466,
  VMINQ_S = 467,
  VMINVQ_S = 468,
  VMLADAVQ_S = 469,
  VMULHQ_S = 470,
  VMULLBQ_INT_S = 471,
  VMULLTQ_INT_S = 472,
  VMULQ_S = 473,
  VMULQ_N_S = 474,
  VQADDQ_S = 475,
  VQADDQ_N_S = 476,
  VQRSHLQ_S = 477,
  VQRSHLQ_N_S = 478,
  VQSHLQ_S = 479,
  VQSHLQ_N_S = 480,
  VQSHLQ_R_S = 481,
  VQSUBQ_S = 482,
  VQSUBQ_N_S = 483,
  VRHADDQ_S = 484,
  VRMULHQ_S = 485,
  VRSHLQ_S = 486,
  VRSHLQ_N_S = 487,
  VRSHRQ_N_S = 488,
  VSHLQ_N_S = 489,
  VSHLQ_R_S = 490,
  VSUBQ_S = 491,
  VSUBQ_N_S = 492,
  VABDQ_U = 493,
  VADDQ_N_U = 494,
  VADDVAQ_U = 495,
  VADDVQ_P_U = 496,
  VBRSRQ_N_U = 497,
  VHADDQ_U = 498,
  VHADDQ_N_U = 499,
  VHSUBQ_U = 500,
  VHSUBQ_N_U = 501,
  VMAXQ_U = 502,
  VMAXVQ_U = 503,
  VMINQ_U = 504,
  VMINVQ_U = 505,
  VMLADAVQ_U = 506,
  VMULHQ_U = 507,
  VMULLBQ_INT_U = 508,
  VMULLTQ_INT_U = 509,
  VMULQ_U = 510,
  VMULQ_N_U = 511,
  VQADDQ_U = 512,
  VQADDQ_N_U = 513,
  VQRSHLQ_U = 514,
  VQRSHLQ_N_U = 515,
  VQSHLQ_U = 516,
  VQSHLQ_N_U = 517,
  VQSHLQ_R_U = 518,
  VQSUBQ_U = 519,
  VQSUBQ_N_U = 520,
  VRHADDQ_U = 521,
  VRMULHQ_U = 522,
  VRSHLQ_U = 523,
  VRSHLQ_N_U = 524,
  VRSHRQ_N_U = 525,
  VSHLQ_N_U = 526,
  VSHLQ_R_U = 527,
  VSUBQ_U = 528,
  VSUBQ_N_U = 529,
  VHCADDQ_ROT270_S = 530,
  VHCADDQ_ROT90_S = 531,
  VMAXAQ_S = 532,
  VMAXAVQ_S = 533,
  VMINAQ_S = 534,
  VMINAVQ_S = 535,
  VMLADAVXQ_S = 536,
  VMLSDAVQ_S = 537,
  VMLSDAVXQ_S = 538,
  VQDMULHQ_N_S = 539,
  VQDMULHQ_S = 540,
  VQRDMULHQ_N_S = 541,
  VQRDMULHQ_S = 542,
  VQSHLUQ_N_S = 543,
  VABDQ_M_S = 544,
  VABDQ_M_U = 545,
  VABDQ_F = 546,
  VADDQ_N_F = 547,
  VMAXNMAQ_F = 548,
  VMAXNMAVQ_F = 549,
  VMAXNMQ_F = 550,
  VMAXNMVQ_F = 551,
  VMINNMAQ_F = 552,
  VMINNMAVQ_F = 553,
  VMINNMQ_F = 554,
  VMINNMVQ_F = 555,
  VMULQ_F = 556,
  VMULQ_N_F = 557,
  VSUBQ_F = 558,
  VADDLVAQ_U = 559,
  VADDLVAQ_S = 560,
  VBICQ_N_U = 561,
  VBICQ_N_S = 562,
  VCTP8Q_M = 563,
  VCTP16Q_M = 564,
  VCTP32Q_M = 565,
  VCTP64Q_M = 566,
  VCVTBQ_F16_F32 = 567,
  VCVTTQ_F16_F32 = 568,
  VMLALDAVQ_U = 569,
  VMLALDAVXQ_U = 570,
  VMLALDAVXQ_S = 571,
  VMLALDAVQ_S = 572,
  VMLSLDAVQ_S = 573,
  VMLSLDAVXQ_S = 574,
  VMOVNBQ_U = 575,
  VMOVNBQ_S = 576,
  VMOVNTQ_U = 577,
  VMOVNTQ_S = 578,
  VORRQ_N_S = 579,
  VORRQ_N_U = 580,
  VQDMULLBQ_N_S = 581,
  VQDMULLBQ_S = 582,
  VQDMULLTQ_N_S = 583,
  VQDMULLTQ_S = 584,
  VQMOVNBQ_U = 585,
  VQMOVNBQ_S = 586,
  VQMOVUNBQ_S = 587,
  VQMOVUNTQ_S = 588,
  VRMLALDAVHXQ_S = 589,
  VRMLSLDAVHQ_S = 590,
  VRMLSLDAVHXQ_S = 591,
  VSHLLBQ_S = 592,
  VSHLLBQ_U = 593,
  VSHLLTQ_U = 594,
  VSHLLTQ_S = 595,
  VQMOVNTQ_U = 596,
  VQMOVNTQ_S = 597,
  VSHLLBQ_N_S = 598,
  VSHLLBQ_N_U = 599,
  VSHLLTQ_N_U = 600,
  VSHLLTQ_N_S = 601,
  VRMLALDAVHQ_U = 602,
  VRMLALDAVHQ_S = 603,
  VMULLTQ_POLY_P = 604,
  VMULLBQ_POLY_P = 605,
  VBICQ_M_N_S = 606,
  VBICQ_M_N_U = 607,
  VCMPEQQ_M_F = 608,
  VCVTAQ_M_S = 609,
  VCVTAQ_M_U = 610,
  VCVTQ_M_TO_F_S = 611,
  VCVTQ_M_TO_F_U = 612,
  VQRSHRNBQ_N_U = 613,
  VQRSHRNBQ_N_S = 614,
  VQRSHRUNBQ_N_S = 615,
  VRMLALDAVHAQ_S = 616,
  VABAVQ_S = 617,
  VABAVQ_U = 618,
  VSHLCQ_S = 619,
  VSHLCQ_U = 620,
  VRMLALDAVHAQ_U = 621,
  VABSQ_M_S = 622,
  VADDVAQ_P_S = 623,
  VADDVAQ_P_U = 624,
  VCLSQ_M_S = 625,
  VCLZQ_M_S = 626,
  VCLZQ_M_U = 627,
  VCMPCSQ_M_N_U = 628,
  VCMPCSQ_M_U = 629,
  VCMPEQQ_M_N_S = 630,
  VCMPEQQ_M_N_U = 631,
  VCMPEQQ_M_S = 632,
  VCMPEQQ_M_U = 633,
  VCMPGEQ_M_N_S = 634,
  VCMPGEQ_M_S = 635,
  VCMPGTQ_M_N_S = 636,
  VCMPGTQ_M_S = 637,
  VCMPHIQ_M_N_U = 638,
  VCMPHIQ_M_U = 639,
  VCMPLEQ_M_N_S = 640,
  VCMPLEQ_M_S = 641,
  VCMPLTQ_M_N_S = 642,
  VCMPLTQ_M_S = 643,
  VCMPNEQ_M_N_S = 644,
  VCMPNEQ_M_N_U = 645,
  VCMPNEQ_M_S = 646,
  VCMPNEQ_M_U = 647,
  VDUPQ_M_N_S = 648,
  VDUPQ_M_N_U = 649,
  VDWDUPQ_N_U = 650,
  VDWDUPQ_WB_U = 651,
  VIWDUPQ_N_U = 652,
  VIWDUPQ_WB_U = 653,
  VMAXAQ_M_S = 654,
  VMAXAVQ_P_S = 655,
  VMAXVQ_P_S = 656,
  VMAXVQ_P_U = 657,
  VMINAQ_M_S = 658,
  VMINAVQ_P_S = 659,
  VMINVQ_P_S = 660,
  VMINVQ_P_U = 661,
  VMLADAVAQ_S = 662,
  VMLADAVAQ_U = 663,
  VMLADAVQ_P_S = 664,
  VMLADAVQ_P_U = 665,
  VMLADAVXQ_P_S = 666,
  VMLAQ_N_S = 667,
  VMLAQ_N_U = 668,
  VMLASQ_N_S = 669,
  VMLASQ_N_U = 670,
  VMLSDAVQ_P_S = 671,
  VMLSDAVXQ_P_S = 672,
  VMVNQ_M_S = 673,
  VMVNQ_M_U = 674,
  VNEGQ_M_S = 675,
  VPSELQ_S = 676,
  VPSELQ_U = 677,
  VQABSQ_M_S = 678,
  VQDMLAHQ_N_S = 679,
  VQDMLASHQ_N_S = 680,
  VQNEGQ_M_S = 681,
  VQRDMLADHQ_S = 682,
  VQRDMLADHXQ_S = 683,
  VQRDMLAHQ_N_S = 684,
  VQRDMLASHQ_N_S = 685,
  VQRDMLSDHQ_S = 686,
  VQRDMLSDHXQ_S = 687,
  VQRSHLQ_M_N_S = 688,
  VQRSHLQ_M_N_U = 689,
  VQSHLQ_M_R_S = 690,
  VQSHLQ_M_R_U = 691,
  VREV64Q_M_S = 692,
  VREV64Q_M_U = 693,
  VRSHLQ_M_N_S = 694,
  VRSHLQ_M_N_U = 695,
  VSHLQ_M_R_S = 696,
  VSHLQ_M_R_U = 697,
  VSLIQ_N_S = 698,
  VSLIQ_N_U = 699,
  VSRIQ_N_S = 700,
  VSRIQ_N_U = 701,
  VQDMLSDHXQ_S = 702,
  VQDMLSDHQ_S = 703,
  VQDMLADHXQ_S = 704,
  VQDMLADHQ_S = 705,
  VMLSDAVAXQ_S = 706,
  VMLSDAVAQ_S = 707,
  VMLADAVAXQ_S = 708,
  VCMPGEQ_M_F = 709,
  VCMPGTQ_M_N_F = 710,
  VMLSLDAVQ_P_S = 711,
  VRMLALDAVHAXQ_S = 712,
  VMLSLDAVXQ_P_S = 713,
  VFMAQ_F = 714,
  VMLSLDAVAQ_S = 715,
  VQSHRUNBQ_N_S = 716,
  VQRSHRUNTQ_N_S = 717,
  VMINNMAQ_M_F = 718,
  VFMASQ_N_F = 719,
  VDUPQ_M_N_F = 720,
  VCMPGTQ_M_F = 721,
  VCMPLTQ_M_F = 722,
  VRMLSLDAVHQ_P_S = 723,
  VQSHRUNTQ_N_S = 724,
  VABSQ_M_F = 725,
  VMAXNMAVQ_P_F = 726,
  VFMAQ_N_F = 727,
  VRMLSLDAVHXQ_P_S = 728,
  VREV32Q_M_F = 729,
  VRMLSLDAVHAQ_S = 730,
  VRMLSLDAVHAXQ_S = 731,
  VCMPLTQ_M_N_F = 732,
  VCMPNEQ_M_F = 733,
  VRNDAQ_M_F = 734,
  VRNDPQ_M_F = 735,
  VADDLVAQ_P_S = 736,
  VQMOVUNBQ_M_S = 737,
  VCMPLEQ_M_F = 738,
  VMLSLDAVAXQ_S = 739,
  VRNDXQ_M_F = 740,
  VFMSQ_F = 741,
  VMINNMVQ_P_F = 742,
  VMAXNMVQ_P_F = 743,
  VPSELQ_F = 744,
  VQMOVUNTQ_M_S = 745,
  VREV64Q_M_F = 746,
  VNEGQ_M_F = 747,
  VRNDMQ_M_F = 748,
  VCMPLEQ_M_N_F = 749,
  VCMPGEQ_M_N_F = 750,
  VRNDNQ_M_F = 751,
  VMINNMAVQ_P_F = 752,
  VCMPNEQ_M_N_F = 753,
  VRMLALDAVHQ_P_S = 754,
  VRMLALDAVHXQ_P_S = 755,
  VCMPEQQ_M_N_F = 756,
  VMAXNMAQ_M_F = 757,
  VRNDQ_M_F = 758,
  VMLALDAVQ_P_U = 759,
  VMLALDAVQ_P_S = 760,
  VQMOVNBQ_M_S = 761,
  VQMOVNBQ_M_U = 762,
  VMOVLTQ_M_U = 763,
  VMOVLTQ_M_S = 764,
  VMOVNBQ_M_U = 765,
  VMOVNBQ_M_S = 766,
  VRSHRNTQ_N_U = 767,
  VRSHRNTQ_N_S = 768,
  VORRQ_M_N_S = 769,
  VORRQ_M_N_U = 770,
  VREV32Q_M_S = 771,
  VREV32Q_M_U = 772,
  VQRSHRNTQ_N_U = 773,
  VQRSHRNTQ_N_S = 774,
  VMOVNTQ_M_U = 775,
  VMOVNTQ_M_S = 776,
  VMOVLBQ_M_U = 777,
  VMOVLBQ_M_S = 778,
  VMLALDAVAQ_S = 779,
  VMLALDAVAQ_U = 780,
  VQSHRNBQ_N_U = 781,
  VQSHRNBQ_N_S = 782,
  VSHRNBQ_N_U = 783,
  VSHRNBQ_N_S = 784,
  VRSHRNBQ_N_S = 785,
  VRSHRNBQ_N_U = 786,
  VMLALDAVXQ_P_U = 787,
  VMLALDAVXQ_P_S = 788,
  VQMOVNTQ_M_U = 789,
  VQMOVNTQ_M_S = 790,
  VMVNQ_M_N_U = 791,
  VMVNQ_M_N_S = 792,
  VQSHRNTQ_N_U = 793,
  VQSHRNTQ_N_S = 794,
  VMLALDAVAXQ_S = 795,
  VMLALDAVAXQ_U = 796,
  VSHRNTQ_N_S = 797,
  VSHRNTQ_N_U = 798,
  VCVTBQ_M_F16_F32 = 799,
  VCVTBQ_M_F32_F16 = 800,
  VCVTTQ_M_F16_F32 = 801,
  VCVTTQ_M_F32_F16 = 802,
  VCVTMQ_M_S = 803,
  VCVTMQ_M_U = 804,
  VCVTNQ_M_S = 805,
  VCVTPQ_M_S = 806,
  VCVTPQ_M_U = 807,
  VCVTQ_M_N_FROM_F_S = 808,
  VCVTNQ_M_U = 809,
  VREV16Q_M_S = 810,
  VREV16Q_M_U = 811,
  VREV32Q_M = 812,
  VCVTQ_M_FROM_F_U = 813,
  VCVTQ_M_FROM_F_S = 814,
  VRMLALDAVHQ_P_U = 815,
  VADDLVAQ_P_U = 816,
  VCVTQ_M_N_FROM_F_U = 817,
  VQSHLUQ_M_N_S = 818,
  VABAVQ_P_S = 819,
  VABAVQ_P_U = 820,
  VSHLQ_M_S = 821,
  VSHLQ_M_U = 822,
  VSRIQ_M_N_S = 823,
  VSRIQ_M_N_U = 824,
  VSUBQ_M_U = 825,
  VSUBQ_M_S = 826,
  VCVTQ_M_N_TO_F_U = 827,
  VCVTQ_M_N_TO_F_S = 828,
  VQADDQ_M_U = 829,
  VQADDQ_M_S = 830,
  VRSHRQ_M_N_S = 831,
  VSUBQ_M_N_S = 832,
  VSUBQ_M_N_U = 833,
  VBRSRQ_M_N_S = 834,
  VSUBQ_M_N_F = 835,
  VBICQ_M_F = 836,
  VHADDQ_M_U = 837,
  VBICQ_M_U = 838,
  VBICQ_M_S = 839,
  VMULQ_M_N_U = 840,
  VHADDQ_M_S = 841,
  VORNQ_M_F = 842,
  VMLAQ_M_N_S = 843,
  VQSUBQ_M_U = 844,
  VQSUBQ_M_S = 845,
  VMLAQ_M_N_U = 846,
  VQSUBQ_M_N_U = 847,
  VQSUBQ_M_N_S = 848,
  VMULLTQ_INT_M_S = 849,
  VMULLTQ_INT_M_U = 850,
  VMULQ_M_N_S = 851,
  VMULQ_M_N_F = 852,
  VMLASQ_M_N_U = 853,
  VMLASQ_M_N_S = 854,
  VMAXQ_M_U = 855,
  VQRDMLAHQ_M_N_U = 856,
  VCADDQ_ROT270_M_F = 857,
  VCADDQ_ROT270_M_U = 858,
  VCADDQ_ROT270_M_S = 859,
  VQRSHLQ_M_S = 860,
  VMULQ_M_F = 861,
  VRHADDQ_M_U = 862,
  VSHRQ_M_N_U = 863,
  VRHADDQ_M_S = 864,
  VMULQ_M_S = 865,
  VMULQ_M_U = 866,
  VQDMLASHQ_M_N_S = 867,
  VQRDMLASHQ_M_N_S = 868,
  VRSHLQ_M_S = 869,
  VRSHLQ_M_U = 870,
  VRSHRQ_M_N_U = 871,
  VADDQ_M_N_F = 872,
  VADDQ_M_N_S = 873,
  VADDQ_M_N_U = 874,
  VQRDMLASHQ_M_N_U = 875,
  VMAXQ_M_S = 876,
  VQRDMLAHQ_M_N_S = 877,
  VORRQ_M_S = 878,
  VORRQ_M_U = 879,
  VORRQ_M_F = 880,
  VQRSHLQ_M_U = 881,
  VRMULHQ_M_U = 882,
  VRMULHQ_M_S = 883,
  VMINQ_M_S = 884,
  VMINQ_M_U = 885,
  VANDQ_M_F = 886,
  VANDQ_M_U = 887,
  VANDQ_M_S = 888,
  VHSUBQ_M_N_S = 889,
  VHSUBQ_M_N_U = 890,
  VMULHQ_M_S = 891,
  VMULHQ_M_U = 892,
  VMULLBQ_INT_M_U = 893,
  VMULLBQ_INT_M_S = 894,
  VCADDQ_ROT90_M_F = 895,
  VSHRQ_M_N_S = 896,
  VADDQ_M_U = 897,
  VSLIQ_M_N_U = 898,
  VQADDQ_M_N_S = 899,
  VBRSRQ_M_N_F = 900,
  VABDQ_M_F = 901,
  VBRSRQ_M_N_U = 902,
  VEORQ_M_F = 903,
  VSHLQ_M_N_S = 904,
  VQDMLAHQ_M_N_U = 905,
  VQDMLAHQ_M_N_S = 906,
  VSHLQ_M_N_U = 907,
  VMLADAVAQ_P_U = 908,
  VMLADAVAQ_P_S = 909,
  VSLIQ_M_N_S = 910,
  VQSHLQ_M_U = 911,
  VQSHLQ_M_S = 912,
  VCADDQ_ROT90_M_U = 913,
  VCADDQ_ROT90_M_S = 914,
  VORNQ_M_U = 915,
  VORNQ_M_S = 916,
  VQSHLQ_M_N_S = 917,
  VQSHLQ_M_N_U = 918,
  VADDQ_M_S = 919,
  VHADDQ_M_N_S = 920,
  VADDQ_M_F = 921,
  VQADDQ_M_N_U = 922,
  VEORQ_M_S = 923,
  VEORQ_M_U = 924,
  VHSUBQ_M_S = 925,
  VHSUBQ_M_U = 926,
  VHADDQ_M_N_U = 927,
  VHCADDQ_ROT90_M_S = 928,
  VQRDMLSDHQ_M_S = 929,
  VQRDMLSDHXQ_M_S = 930,
  VQRDMLADHXQ_M_S = 931,
  VQDMULHQ_M_S = 932,
  VMLADAVAXQ_P_S = 933,
  VQDMLADHXQ_M_S = 934,
  VQRDMULHQ_M_S = 935,
  VMLSDAVAXQ_P_S = 936,
  VQDMULHQ_M_N_S = 937,
  VHCADDQ_ROT270_M_S = 938,
  VQDMLSDHQ_M_S = 939,
  VQDMLSDHXQ_M_S = 940,
  VMLSDAVAQ_P_S = 941,
  VQRDMLADHQ_M_S = 942,
  VQDMLADHQ_M_S = 943,
  VMLALDAVAQ_P_U = 944,
  VMLALDAVAQ_P_S = 945,
  VQRSHRNBQ_M_N_U = 946,
  VQRSHRNBQ_M_N_S = 947,
  VQRSHRNTQ_M_N_S = 948,
  VQSHRNBQ_M_N_U = 949,
  VQSHRNBQ_M_N_S = 950,
  VQSHRNTQ_M_N_S = 951,
  VRSHRNBQ_M_N_U = 952,
  VRSHRNBQ_M_N_S = 953,
  VRSHRNTQ_M_N_U = 954,
  VSHLLBQ_M_N_U = 955,
  VSHLLBQ_M_N_S = 956,
  VSHLLTQ_M_N_U = 957,
  VSHLLTQ_M_N_S = 958,
  VSHRNBQ_M_N_S = 959,
  VSHRNBQ_M_N_U = 960,
  VSHRNTQ_M_N_S = 961,
  VSHRNTQ_M_N_U = 962,
  VMLALDAVAXQ_P_S = 963,
  VQRSHRNTQ_M_N_U = 964,
  VQSHRNTQ_M_N_U = 965,
  VRSHRNTQ_M_N_S = 966,
  VQRDMULHQ_M_N_S = 967,
  VRMLALDAVHAQ_P_S = 968,
  VMLSLDAVAQ_P_S = 969,
  VMLSLDAVAXQ_P_S = 970,
  VMULLBQ_POLY_M_P = 971,
  VMULLTQ_POLY_M_P = 972,
  VQDMULLBQ_M_N_S = 973,
  VQDMULLBQ_M_S = 974,
  VQDMULLTQ_M_N_S = 975,
  VQDMULLTQ_M_S = 976,
  VQRSHRUNBQ_M_N_S = 977,
  VQSHRUNBQ_M_N_S = 978,
  VQSHRUNTQ_M_N_S = 979,
  VRMLALDAVHAQ_P_U = 980,
  VRMLALDAVHAXQ_P_S = 981,
  VRMLSLDAVHAQ_P_S = 982,
  VRMLSLDAVHAXQ_P_S = 983,
  VQRSHRUNTQ_M_N_S = 984,
  VCMLAQ_M_F = 985,
  VCMLAQ_ROT180_M_F = 986,
  VCMLAQ_ROT270_M_F = 987,
  VCMLAQ_ROT90_M_F = 988,
  VCMULQ_M_F = 989,
  VCMULQ_ROT180_M_F = 990,
  VCMULQ_ROT270_M_F = 991,
  VCMULQ_ROT90_M_F = 992,
  VFMAQ_M_F = 993,
  VFMAQ_M_N_F = 994,
  VFMASQ_M_N_F = 995,
  VFMSQ_M_F = 996,
  VMAXNMQ_M_F = 997,
  VMINNMQ_M_F = 998,
  VSUBQ_M_F = 999,
  VSTRWQSB_S = 1000,
  VSTRWQSB_U = 1001,
  VSTRBQSO_S = 1002,
  VSTRBQSO_U = 1003,
  VSTRBQ_S = 1004,
  VSTRBQ_U = 1005,
  VLDRBQGO_S = 1006,
  VLDRBQGO_U = 1007,
  VLDRBQ_S = 1008,
  VLDRBQ_U = 1009,
  VLDRWQGB_S = 1010,
  VLDRWQGB_U = 1011,
  VLD1Q_F = 1012,
  VLD1Q_S = 1013,
  VLD1Q_U = 1014,
  VLDRHQ_F = 1015,
  VLDRHQGO_S = 1016,
  VLDRHQGO_U = 1017,
  VLDRHQGSO_S = 1018,
  VLDRHQGSO_U = 1019,
  VLDRHQ_S = 1020,
  VLDRHQ_U = 1021,
  VLDRWQ_F = 1022,
  VLDRWQ_S = 1023,
  VLDRWQ_U = 1024,
  VLDRDQGB_S = 1025,
  VLDRDQGB_U = 1026,
  VLDRDQGO_S = 1027,
  VLDRDQGO_U = 1028,
  VLDRDQGSO_S = 1029,
  VLDRDQGSO_U = 1030,
  VLDRHQGO_F = 1031,
  VLDRHQGSO_F = 1032,
  VLDRWQGB_F = 1033,
  VLDRWQGO_F = 1034,
  VLDRWQGO_S = 1035,
  VLDRWQGO_U = 1036,
  VLDRWQGSO_F = 1037,
  VLDRWQGSO_S = 1038,
  VLDRWQGSO_U = 1039,
  VSTRHQ_F = 1040,
  VST1Q_S = 1041,
  VST1Q_U = 1042,
  VSTRHQSO_S = 1043,
  VSTRHQ_U = 1044,
  VSTRWQ_S = 1045,
  VSTRWQ_U = 1046,
  VSTRWQ_F = 1047,
  VST1Q_F = 1048,
  VSTRDQSB_S = 1049,
  VSTRDQSB_U = 1050,
  VSTRDQSO_S = 1051,
  VSTRDQSO_U = 1052,
  VSTRDQSSO_S = 1053,
  VSTRDQSSO_U = 1054,
  VSTRWQSO_S = 1055,
  VSTRWQSO_U = 1056,
  VSTRWQSSO_S = 1057,
  VSTRWQSSO_U = 1058,
  VSTRHQSO_F = 1059,
  VSTRHQSSO_F = 1060,
  VSTRWQSB_F = 1061,
  VSTRWQSO_F = 1062,
  VSTRWQSSO_F = 1063,
  VDDUPQ = 1064,
  VDDUPQ_M = 1065,
  VDWDUPQ = 1066,
  VDWDUPQ_M = 1067,
  VIDUPQ = 1068,
  VIDUPQ_M = 1069,
  VIWDUPQ = 1070,
  VIWDUPQ_M = 1071,
  VSTRWQSBWB_S = 1072,
  VSTRWQSBWB_U = 1073,
  VLDRWQGBWB_S = 1074,
  VLDRWQGBWB_U = 1075,
  VSTRWQSBWB_F = 1076,
  VLDRWQGBWB_F = 1077,
  VSTRDQSBWB_S = 1078,
  VSTRDQSBWB_U = 1079,
  VLDRDQGBWB_S = 1080,
  VLDRDQGBWB_U = 1081,
  VADCQ_U = 1082,
  VADCQ_M_U = 1083,
  VADCQ_S = 1084,
  VADCQ_M_S = 1085,
  VSBCIQ_U = 1086,
  VSBCIQ_S = 1087,
  VSBCIQ_M_U = 1088,
  VSBCIQ_M_S = 1089,
  VSBCQ_U = 1090,
  VSBCQ_S = 1091,
  VSBCQ_M_U = 1092,
  VSBCQ_M_S = 1093,
  VADCIQ_U = 1094,
  VADCIQ_M_U = 1095,
  VADCIQ_S = 1096,
  VADCIQ_M_S = 1097,
  VLD2Q = 1098,
  VLD4Q = 1099,
  VST2Q = 1100,
  VSHLCQ_M_U = 1101,
  VSHLCQ_M_S = 1102,
  VSTRHQSO_U = 1103,
  VSTRHQSSO_S = 1104,
  VSTRHQSSO_U = 1105,
  VSTRHQ_S = 1106,
  SRSHRL = 1107,
  SRSHR = 1108,
  URSHR = 1109,
  URSHRL = 1110,
  SQRSHR = 1111,
  UQRSHL = 1112,
  UQRSHLL_64 = 1113,
  UQRSHLL_48 = 1114,
  SQRSHRL_64 = 1115,
  SQRSHRL_48 = 1116,
  VSHLCQ_M_ = 1117
};
#define NUM_UNSPEC_VALUES 1118
extern const char *const unspec_strings[];

enum unspecv {
  VUNSPEC_BLOCKAGE = 0,
  VUNSPEC_EPILOGUE = 1,
  VUNSPEC_THUMB1_INTERWORK = 2,
  VUNSPEC_ALIGN = 3,
  VUNSPEC_POOL_END = 4,
  VUNSPEC_POOL_1 = 5,
  VUNSPEC_POOL_2 = 6,
  VUNSPEC_POOL_4 = 7,
  VUNSPEC_POOL_8 = 8,
  VUNSPEC_POOL_16 = 9,
  VUNSPEC_TMRC = 10,
  VUNSPEC_TMCR = 11,
  VUNSPEC_ALIGN8 = 12,
  VUNSPEC_WCMP_EQ = 13,
  VUNSPEC_WCMP_GTU = 14,
  VUNSPEC_WCMP_GT = 15,
  VUNSPEC_EH_RETURN = 16,
  VUNSPEC_ATOMIC_CAS = 17,
  VUNSPEC_ATOMIC_XCHG = 18,
  VUNSPEC_ATOMIC_OP = 19,
  VUNSPEC_LL = 20,
  VUNSPEC_LDRD_ATOMIC = 21,
  VUNSPEC_SC = 22,
  VUNSPEC_LAX = 23,
  VUNSPEC_SLX = 24,
  VUNSPEC_LDA = 25,
  VUNSPEC_STL = 26,
  VUNSPEC_GET_FPSCR = 27,
  VUNSPEC_SET_FPSCR = 28,
  VUNSPEC_SET_FPSCR_NZCVQC = 29,
  VUNSPEC_PROBE_STACK_RANGE = 30,
  VUNSPEC_CDP = 31,
  VUNSPEC_CDP2 = 32,
  VUNSPEC_LDC = 33,
  VUNSPEC_LDC2 = 34,
  VUNSPEC_LDCL = 35,
  VUNSPEC_LDC2L = 36,
  VUNSPEC_STC = 37,
  VUNSPEC_STC2 = 38,
  VUNSPEC_STCL = 39,
  VUNSPEC_STC2L = 40,
  VUNSPEC_MCR = 41,
  VUNSPEC_MCR2 = 42,
  VUNSPEC_MRC = 43,
  VUNSPEC_MRC2 = 44,
  VUNSPEC_MCRR = 45,
  VUNSPEC_MCRR2 = 46,
  VUNSPEC_MRRC = 47,
  VUNSPEC_MRRC2 = 48,
  VUNSPEC_SPECULATION_BARRIER = 49,
  VUNSPEC_APSR_WRITE = 50,
  VUNSPEC_VSTR_VLDR = 51,
  VUNSPEC_CLRM_APSR = 52,
  VUNSPEC_VSCCLRM_VPR = 53,
  VUNSPEC_VLSTM = 54,
  VUNSPEC_VLLDM = 55
};
#define NUM_UNSPECV_VALUES 56
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */
