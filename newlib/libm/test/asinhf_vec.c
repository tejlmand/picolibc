#include "test.h"
 one_line_type asinhf_vec[] = {
{36, 0,123,__LINE__, 0xbff0416d, 0x13c06b28, 0xbff33333, 0x33333333},	/* -1.01597=f(-1.2)*/
{35, 0,123,__LINE__, 0xbff02723, 0xb8b59cc2, 0xbff30a3d, 0x70a3d70a},	/* -1.00956=f(-1.19)*/
{36, 0,123,__LINE__, 0xbff00cb9, 0x0f36ee94, 0xbff2e147, 0xae147ae1},	/* -1.00311=f(-1.18)*/
{35, 0,123,__LINE__, 0xbfefe45a, 0x14c34c56, 0xbff2b851, 0xeb851eb8},	/* -0.996625=f(-1.17)*/
{40, 0,123,__LINE__, 0xbfefaefe, 0xbf1e3f71, 0xbff28f5c, 0x28f5c28f},	/* -0.990112=f(-1.16)*/
{35, 0,123,__LINE__, 0xbfef795f, 0xb19bdf1f, 0xbff26666, 0x66666666},	/* -0.983566=f(-1.15)*/
{40, 0,123,__LINE__, 0xbfef437c, 0x80a424e6, 0xbff23d70, 0xa3d70a3d},	/* -0.976988=f(-1.14)*/
{40, 0,123,__LINE__, 0xbfef0d54, 0xc0f74ccb, 0xbff2147a, 0xe147ae14},	/* -0.970377=f(-1.13)*/
{37, 0,123,__LINE__, 0xbfeed6e8, 0x07bbd3cb, 0xbff1eb85, 0x1eb851eb},	/* -0.963734=f(-1.12)*/
{36, 0,123,__LINE__, 0xbfeea035, 0xea8d0735, 0xbff1c28f, 0x5c28f5c2},	/* -0.957057=f(-1.11)*/
{35, 0,123,__LINE__, 0xbfee693d, 0xff8a28bc, 0xbff19999, 0x99999999},	/* -0.950347=f(-1.1)*/
{38, 0,123,__LINE__, 0xbfee31ff, 0xdd662b42, 0xbff170a3, 0xd70a3d70},	/* -0.943603=f(-1.09)*/
{37, 0,123,__LINE__, 0xbfedfa7b, 0x1b780c4f, 0xbff147ae, 0x147ae147},	/* -0.936826=f(-1.08)*/
{35, 0,123,__LINE__, 0xbfedc2af, 0x51cbce33, 0xbff11eb8, 0x51eb851e},	/* -0.930015=f(-1.07)*/
{36, 0,123,__LINE__, 0xbfed8a9b, 0xed490da7, 0xbff0f5c2, 0x8f5c28f5},	/* -0.92317=f(-1.06)*/
{40, 0,123,__LINE__, 0xbfed5240, 0xdf392713, 0xbff0cccc, 0xcccccccc},	/* -0.916291=f(-1.05)*/
{36, 0,123,__LINE__, 0xbfed199d, 0x96807812, 0xbff0a3d7, 0x0a3d70a3},	/* -0.909377=f(-1.04)*/
{36, 0,123,__LINE__, 0xbfece0b1, 0xaeb5f35d, 0xbff07ae1, 0x47ae147a},	/* -0.902428=f(-1.03)*/
{37, 0,123,__LINE__, 0xbfeca77c, 0xc48466df, 0xbff051eb, 0x851eb851},	/* -0.895445=f(-1.02)*/
{35, 0,123,__LINE__, 0xbfec6dfe, 0x75bf8c15, 0xbff028f5, 0xc28f5c28},	/* -0.888427=f(-1.01)*/
{39, 0,123,__LINE__, 0xbfec3436, 0x6179d427, 0xbfefffff, 0xfffffffe},	/* -0.881374=f(-1)*/
{36, 0,123,__LINE__, 0xbfebfa24, 0x281af354, 0xbfefae14, 0x7ae147ac},	/* -0.874285=f(-0.99)*/
{35, 0,123,__LINE__, 0xbfebbfc7, 0x6b772f34, 0xbfef5c28, 0xf5c28f5a},	/* -0.867161=f(-0.98)*/
{36, 0,123,__LINE__, 0xbfeb851f, 0xcee7732b, 0xbfef0a3d, 0x70a3d708},	/* -0.860001=f(-0.97)*/
{41, 0,123,__LINE__, 0xbfeb4a2c, 0xe04c9383, 0xbfeeb851, 0xeb851eb6},	/* -0.852805=f(-0.96)*/
{35, 0,123,__LINE__, 0xbfeb0eee, 0x7461cc2e, 0xbfee6666, 0x66666664},	/* -0.845573=f(-0.95)*/
{35, 0,123,__LINE__, 0xbfead364, 0x1cae3d2c, 0xbfee147a, 0xe147ae12},	/* -0.838305=f(-0.94)*/
{38, 0,123,__LINE__, 0xbfea978d, 0x839e2110, 0xbfedc28f, 0x5c28f5c0},	/* -0.831=f(-0.93)*/
{35, 0,123,__LINE__, 0xbfea5b6a, 0x55a6c76e, 0xbfed70a3, 0xd70a3d6e},	/* -0.823659=f(-0.92)*/
{39, 0,123,__LINE__, 0xbfea1efa, 0x41638c74, 0xbfed1eb8, 0x51eb851c},	/* -0.816281=f(-0.91)*/
{43, 0,123,__LINE__, 0xbfe9e23c, 0xdfea9881, 0xbfeccccc, 0xccccccca},	/* -0.808867=f(-0.9)*/
{36, 0,123,__LINE__, 0xbfe9a532, 0x13f178a4, 0xbfec7ae1, 0x47ae1478},	/* -0.801415=f(-0.89)*/
{37, 0,123,__LINE__, 0xbfe967d9, 0x7b912488, 0xbfec28f5, 0xc28f5c26},	/* -0.793927=f(-0.88)*/
{35, 0,123,__LINE__, 0xbfe92a32, 0xcf2fde75, 0xbfebd70a, 0x3d70a3d4},	/* -0.786401=f(-0.87)*/
{36, 0,123,__LINE__, 0xbfe8ec3d, 0xc9f79b39, 0xbfeb851e, 0xb851eb82},	/* -0.778838=f(-0.86)*/
{36, 0,123,__LINE__, 0xbfe8adfa, 0x29f82046, 0xbfeb3333, 0x33333330},	/* -0.771237=f(-0.85)*/
{36, 0,123,__LINE__, 0xbfe86f67, 0x97c95781, 0xbfeae147, 0xae147ade},	/* -0.763599=f(-0.84)*/
{36, 0,123,__LINE__, 0xbfe83086, 0x0892d53c, 0xbfea8f5c, 0x28f5c28c},	/* -0.755923=f(-0.83)*/
{35, 0,123,__LINE__, 0xbfe7f155, 0x2b895778, 0xbfea3d70, 0xa3d70a3a},	/* -0.74821=f(-0.82)*/
{36, 0,123,__LINE__, 0xbfe7b1d4, 0xcbba4d04, 0xbfe9eb85, 0x1eb851e8},	/* -0.740458=f(-0.81)*/
{35, 0,123,__LINE__, 0xbfe77204, 0xb7d0697d, 0xbfe99999, 0x99999996},	/* -0.732668=f(-0.8)*/
{38, 0,123,__LINE__, 0xbfe731e4, 0xc23adb83, 0xbfe947ae, 0x147ae144},	/* -0.724841=f(-0.79)*/
{36, 0,123,__LINE__, 0xbfe6f174, 0xa819e98a, 0xbfe8f5c2, 0x8f5c28f2},	/* -0.716975=f(-0.78)*/
{36, 0,123,__LINE__, 0xbfe6b0b4, 0x76360e0b, 0xbfe8a3d7, 0x0a3d70a0},	/* -0.70907=f(-0.77)*/
{35, 0,123,__LINE__, 0xbfe66fa3, 0xf223194a, 0xbfe851eb, 0x851eb84e},	/* -0.701128=f(-0.76)*/
{39, 0,123,__LINE__, 0xbfe62e42, 0xfefa39ef, 0xbfe7ffff, 0xfffffffc},	/* -0.693147=f(-0.75)*/
{37, 0,123,__LINE__, 0xbfe5ec91, 0x8468f074, 0xbfe7ae14, 0x7ae147aa},	/* -0.685128=f(-0.74)*/
{36, 0,123,__LINE__, 0xbfe5aa8f, 0x6edcd114, 0xbfe75c28, 0xf5c28f58},	/* -0.67707=f(-0.73)*/
{36, 0,123,__LINE__, 0xbfe5683c, 0xafafee77, 0xbfe70a3d, 0x70a3d706},	/* -0.668974=f(-0.72)*/
{38, 0,123,__LINE__, 0xbfe52599, 0x233e4558, 0xbfe6b851, 0xeb851eb4},	/* -0.66084=f(-0.71)*/
{37, 0,123,__LINE__, 0xbfe4e2a4, 0xf9524b18, 0xbfe66666, 0x66666662},	/* -0.652667=f(-0.7)*/
{37, 0,123,__LINE__, 0xbfe49f60, 0x1923f93c, 0xbfe6147a, 0xe147ae10},	/* -0.644455=f(-0.69)*/
{36, 0,123,__LINE__, 0xbfe45bca, 0x89875047, 0xbfe5c28f, 0x5c28f5be},	/* -0.636205=f(-0.68)*/
{36, 0,123,__LINE__, 0xbfe417e4, 0x572351d9, 0xbfe570a3, 0xd70a3d6c},	/* -0.627916=f(-0.67)*/
{36, 0,123,__LINE__, 0xbfe3d3ad, 0x94a170cf, 0xbfe51eb8, 0x51eb851a},	/* -0.61959=f(-0.66)*/
{44, 0,123,__LINE__, 0xbfe38f26, 0x4008c897, 0xbfe4cccc, 0xccccccc8},	/* -0.611224=f(-0.65)*/
{36, 0,123,__LINE__, 0xbfe34a4e, 0xae20dd1a, 0xbfe47ae1, 0x47ae1476},	/* -0.602821=f(-0.64)*/
{36, 0,123,__LINE__, 0xbfe30526, 0xea04b65f, 0xbfe428f5, 0xc28f5c24},	/* -0.594379=f(-0.63)*/
{41, 0,123,__LINE__, 0xbfe2bfaf, 0x20470df3, 0xbfe3d70a, 0x3d70a3d2},	/* -0.585899=f(-0.62)*/
{37, 0,123,__LINE__, 0xbfe279e7, 0x846d7062, 0xbfe3851e, 0xb851eb80},	/* -0.577381=f(-0.61)*/
{35, 0,123,__LINE__, 0xbfe233d0, 0x512068c7, 0xbfe33333, 0x3333332e},	/* -0.568825=f(-0.6)*/
{36, 0,123,__LINE__, 0xbfe1ed69, 0xaccbfb70, 0xbfe2e147, 0xae147adc},	/* -0.560231=f(-0.59)*/
{36, 0,123,__LINE__, 0xbfe1a6b4, 0x17eea06a, 0xbfe28f5c, 0x28f5c28a},	/* -0.5516=f(-0.58)*/
{36, 0,123,__LINE__, 0xbfe15faf, 0xc8481752, 0xbfe23d70, 0xa3d70a38},	/* -0.54293=f(-0.57)*/
{35, 0,123,__LINE__, 0xbfe1185d, 0x16e9a478, 0xbfe1eb85, 0x1eb851e6},	/* -0.534224=f(-0.56)*/
{37, 0,123,__LINE__, 0xbfe0d0bc, 0x64f3c1bc, 0xbfe19999, 0x99999994},	/* -0.52548=f(-0.55)*/
{37, 0,123,__LINE__, 0xbfe088ce, 0x1bc3adc2, 0xbfe147ae, 0x147ae142},	/* -0.5167=f(-0.54)*/
{36, 0,123,__LINE__, 0xbfe04092, 0x90d9ea64, 0xbfe0f5c2, 0x8f5c28f0},	/* -0.507882=f(-0.53)*/
{36, 0,123,__LINE__, 0xbfdff014, 0xee021ffc, 0xbfe0a3d7, 0x0a3d709e},	/* -0.499028=f(-0.52)*/
{35, 0,123,__LINE__, 0xbfdf5e6c, 0x6a59b369, 0xbfe051eb, 0x851eb84c},	/* -0.490138=f(-0.51)*/
{35, 0,123,__LINE__, 0xbfdecc2c, 0xaec5160a, 0xbfdfffff, 0xfffffff4},	/* -0.481212=f(-0.5)*/
{34, 0,123,__LINE__, 0xbfde3956, 0xe5719fd3, 0xbfdf5c28, 0xf5c28f50},	/* -0.47225=f(-0.49)*/
{36, 0,123,__LINE__, 0xbfdda5ec, 0x2e234a04, 0xbfdeb851, 0xeb851eac},	/* -0.463252=f(-0.48)*/
{35, 0,123,__LINE__, 0xbfdd11ee, 0x11c6e15e, 0xbfde147a, 0xe147ae08},	/* -0.454219=f(-0.47)*/
{36, 0,123,__LINE__, 0xbfdc7d5d, 0xd5f6d046, 0xbfdd70a3, 0xd70a3d64},	/* -0.445152=f(-0.46)*/
{36, 0,123,__LINE__, 0xbfdbe83c, 0xd31d6807, 0xbfdccccc, 0xccccccc0},	/* -0.43605=f(-0.45)*/
{36, 0,123,__LINE__, 0xbfdb528c, 0xcc948f36, 0xbfdc28f5, 0xc28f5c1c},	/* -0.426913=f(-0.44)*/
{38, 0,123,__LINE__, 0xbfdabc4f, 0x421c22d0, 0xbfdb851e, 0xb851eb78},	/* -0.417744=f(-0.43)*/
{37, 0,123,__LINE__, 0xbfda2585, 0xc6f37551, 0xbfdae147, 0xae147ad4},	/* -0.40854=f(-0.42)*/
{37, 0,123,__LINE__, 0xbfd98e32, 0x5adf0eb9, 0xbfda3d70, 0xa3d70a30},	/* -0.399304=f(-0.41)*/
{37, 0,123,__LINE__, 0xbfd8f656, 0xb99e0630, 0xbfd99999, 0x9999998c},	/* -0.390035=f(-0.4)*/
{36, 0,123,__LINE__, 0xbfd85df4, 0xb2f067d2, 0xbfd8f5c2, 0x8f5c28e8},	/* -0.380735=f(-0.39)*/
{35, 0,123,__LINE__, 0xbfd7c50e, 0x8476428b, 0xbfd851eb, 0x851eb844},	/* -0.371402=f(-0.38)*/
{37, 0,123,__LINE__, 0xbfd72ba6, 0x2733d664, 0xbfd7ae14, 0x7ae147a0},	/* -0.362039=f(-0.37)*/
{37, 0,123,__LINE__, 0xbfd691bd, 0xc695285b, 0xbfd70a3d, 0x70a3d6fc},	/* -0.352645=f(-0.36)*/
{37, 0,123,__LINE__, 0xbfd5f757, 0x848dabea, 0xbfd66666, 0x66666658},	/* -0.343222=f(-0.35)*/
{36, 0,123,__LINE__, 0xbfd55c75, 0xf25348d8, 0xbfd5c28f, 0x5c28f5b4},	/* -0.333768=f(-0.34)*/
{37, 0,123,__LINE__, 0xbfd4c11b, 0x5b68ed77, 0xbfd51eb8, 0x51eb8510},	/* -0.324286=f(-0.33)*/
{41, 0,123,__LINE__, 0xbfd4254a, 0x1f9f44f4, 0xbfd47ae1, 0x47ae146c},	/* -0.314776=f(-0.32)*/
{35, 0,123,__LINE__, 0xbfd38905, 0x0eb6bfe6, 0xbfd3d70a, 0x3d70a3c8},	/* -0.305238=f(-0.31)*/
{36, 0,123,__LINE__, 0xbfd2ec4e, 0xb1a897ad, 0xbfd33333, 0x33333324},	/* -0.295673=f(-0.3)*/
{37, 0,123,__LINE__, 0xbfd24f29, 0xa56a30cb, 0xbfd28f5c, 0x28f5c280},	/* -0.286082=f(-0.29)*/
{36, 0,123,__LINE__, 0xbfd1b198, 0xf7360e56, 0xbfd1eb85, 0x1eb851dc},	/* -0.276465=f(-0.28)*/
{36, 0,123,__LINE__, 0xbfd1139f, 0x6c2c963b, 0xbfd147ae, 0x147ae138},	/* -0.266823=f(-0.27)*/
{38, 0,123,__LINE__, 0xbfd0753f, 0xdccb87dc, 0xbfd0a3d7, 0x0a3d7094},	/* -0.257156=f(-0.26)*/
{38, 0,123,__LINE__, 0xbfcfacfb, 0x2399e637, 0xbfcfffff, 0xffffffe0},	/* -0.247466=f(-0.25)*/
{35, 0,123,__LINE__, 0xbfce6eb6, 0xf55a83a3, 0xbfceb851, 0xeb851e98},	/* -0.237754=f(-0.24)*/
{36, 0,123,__LINE__, 0xbfcd2fb9, 0xce539acd, 0xbfcd70a3, 0xd70a3d50},	/* -0.228019=f(-0.23)*/
{35, 0,123,__LINE__, 0xbfcbf009, 0xf6311eb6, 0xbfcc28f5, 0xc28f5c08},	/* -0.218263=f(-0.22)*/
{36, 0,123,__LINE__, 0xbfcaafae, 0x35d60116, 0xbfcae147, 0xae147ac0},	/* -0.208486=f(-0.21)*/
{35, 0,123,__LINE__, 0xbfc96ead, 0x7945208b, 0xbfc99999, 0x99999978},	/* -0.19869=f(-0.2)*/
{36, 0,123,__LINE__, 0xbfc82d0e, 0x7049d27f, 0xbfc851eb, 0x851eb830},	/* -0.188875=f(-0.19)*/
{36, 0,123,__LINE__, 0xbfc6ead8, 0x68fb0882, 0xbfc70a3d, 0x70a3d6e8},	/* -0.179042=f(-0.18)*/
{35, 0,123,__LINE__, 0xbfc5a812, 0x5355bb34, 0xbfc5c28f, 0x5c28f5a0},	/* -0.169192=f(-0.17)*/
{38, 0,123,__LINE__, 0xbfc464c3, 0x9c24bd6f, 0xbfc47ae1, 0x47ae1458},	/* -0.159325=f(-0.16)*/
{36, 0,123,__LINE__, 0xbfc320f3, 0xcd8fca4d, 0xbfc33333, 0x33333310},	/* -0.149443=f(-0.15)*/
{35, 0,123,__LINE__, 0xbfc1dcaa, 0x2ea9e197, 0xbfc1eb85, 0x1eb851c8},	/* -0.139547=f(-0.14)*/
{42, 0,123,__LINE__, 0xbfc097ee, 0x7fc672e2, 0xbfc0a3d7, 0x0a3d7080},	/* -0.129637=f(-0.13)*/
{35, 0,123,__LINE__, 0xbfbea591, 0x14e72de8, 0xbfbeb851, 0xeb851e71},	/* -0.119714=f(-0.12)*/
{42, 0,123,__LINE__, 0xbfbc1a80, 0x1fdc1549, 0xbfbc28f5, 0xc28f5be2},	/* -0.109779=f(-0.11)*/
{36, 0,123,__LINE__, 0xbfb98eb9, 0xee444117, 0xbfb99999, 0x99999953},	/* -0.0998341=f(-0.1)*/
{36, 0,123,__LINE__, 0xbfb7024e, 0x76647d8e, 0xbfb70a3d, 0x70a3d6c4},	/* -0.0898789=f(-0.09)*/
{36, 0,123,__LINE__, 0xbfb4754d, 0xb3ad120e, 0xbfb47ae1, 0x47ae1435},	/* -0.0799149=f(-0.08)*/
{38, 0,123,__LINE__, 0xbfb1e7c8, 0x22d9c5ce, 0xbfb1eb85, 0x1eb851a6},	/* -0.069943=f(-0.07)*/
{39, 0,123,__LINE__, 0xbfaeb39b, 0xde44fca9, 0xbfaeb851, 0xeb851e2d},	/* -0.0599641=f(-0.06)*/
{38, 0,123,__LINE__, 0xbfa996df, 0x5c0c81d3, 0xbfa99999, 0x9999990e},	/* -0.0499792=f(-0.05)*/
{36, 0,123,__LINE__, 0xbfa4797b, 0x97f1f18e, 0xbfa47ae1, 0x47ae13ef},	/* -0.0399893=f(-0.04)*/
{39, 0,123,__LINE__, 0xbf9eb724, 0x01e32cb6, 0xbf9eb851, 0xeb851da0},	/* -0.0299955=f(-0.03)*/
{36, 0,123,__LINE__, 0xbf947a87, 0xc9a1a880, 0xbf947ae1, 0x47ae1362},	/* -0.0199987=f(-0.02)*/
{39, 0,123,__LINE__, 0xbf847aca, 0xe1a28fb6, 0xbf847ae1, 0x47ae1249},	/* -0.00999983=f(-0.01)*/
{64, 0,123,__LINE__, 0x3cd19000, 0x00000000, 0x3cd19000, 0x00000000},	/* 9.74915e-16=f(9.74915e-16)*/
{39, 0,123,__LINE__, 0x3f847aca, 0xe1a28fb6, 0x3f847ae1, 0x47ae16ad},	/* 0.00999983=f(0.01)*/
{36, 0,123,__LINE__, 0x3f947a87, 0xc9a1a880, 0x3f947ae1, 0x47ae1594},	/* 0.0199987=f(0.02)*/
{39, 0,123,__LINE__, 0x3f9eb724, 0x01e32cb6, 0x3f9eb851, 0xeb851fd2},	/* 0.0299955=f(0.03)*/
{36, 0,123,__LINE__, 0x3fa4797b, 0x97f1f18e, 0x3fa47ae1, 0x47ae1508},	/* 0.0399893=f(0.04)*/
{38, 0,123,__LINE__, 0x3fa996df, 0x5c0c81d3, 0x3fa99999, 0x99999a27},	/* 0.0499792=f(0.05)*/
{39, 0,123,__LINE__, 0x3faeb39b, 0xde44fca9, 0x3faeb851, 0xeb851f46},	/* 0.0599641=f(0.06)*/
{38, 0,123,__LINE__, 0x3fb1e7c8, 0x22d9c5ce, 0x3fb1eb85, 0x1eb85232},	/* 0.069943=f(0.07)*/
{36, 0,123,__LINE__, 0x3fb4754d, 0xb3ad120e, 0x3fb47ae1, 0x47ae14c1},	/* 0.0799149=f(0.08)*/
{36, 0,123,__LINE__, 0x3fb7024e, 0x76647d8e, 0x3fb70a3d, 0x70a3d750},	/* 0.0898789=f(0.09)*/
{36, 0,123,__LINE__, 0x3fb98eb9, 0xee444117, 0x3fb99999, 0x999999df},	/* 0.0998341=f(0.1)*/
{42, 0,123,__LINE__, 0x3fbc1a80, 0x1fdc1549, 0x3fbc28f5, 0xc28f5c6e},	/* 0.109779=f(0.11)*/
{35, 0,123,__LINE__, 0x3fbea591, 0x14e72de8, 0x3fbeb851, 0xeb851efd},	/* 0.119714=f(0.12)*/
{42, 0,123,__LINE__, 0x3fc097ee, 0x7fc672e2, 0x3fc0a3d7, 0x0a3d70c6},	/* 0.129637=f(0.13)*/
{35, 0,123,__LINE__, 0x3fc1dcaa, 0x2ea9e197, 0x3fc1eb85, 0x1eb8520e},	/* 0.139547=f(0.14)*/
{36, 0,123,__LINE__, 0x3fc320f3, 0xcd8fca4d, 0x3fc33333, 0x33333356},	/* 0.149443=f(0.15)*/
{38, 0,123,__LINE__, 0x3fc464c3, 0x9c24bd6f, 0x3fc47ae1, 0x47ae149e},	/* 0.159325=f(0.16)*/
{35, 0,123,__LINE__, 0x3fc5a812, 0x5355bb34, 0x3fc5c28f, 0x5c28f5e6},	/* 0.169192=f(0.17)*/
{36, 0,123,__LINE__, 0x3fc6ead8, 0x68fb0882, 0x3fc70a3d, 0x70a3d72e},	/* 0.179042=f(0.18)*/
{36, 0,123,__LINE__, 0x3fc82d0e, 0x7049d27f, 0x3fc851eb, 0x851eb876},	/* 0.188875=f(0.19)*/
{35, 0,123,__LINE__, 0x3fc96ead, 0x7945208b, 0x3fc99999, 0x999999be},	/* 0.19869=f(0.2)*/
{36, 0,123,__LINE__, 0x3fcaafae, 0x35d60116, 0x3fcae147, 0xae147b06},	/* 0.208486=f(0.21)*/
{35, 0,123,__LINE__, 0x3fcbf009, 0xf6311eb6, 0x3fcc28f5, 0xc28f5c4e},	/* 0.218263=f(0.22)*/
{36, 0,123,__LINE__, 0x3fcd2fb9, 0xce539acd, 0x3fcd70a3, 0xd70a3d96},	/* 0.228019=f(0.23)*/
{35, 0,123,__LINE__, 0x3fce6eb6, 0xf55a83a3, 0x3fceb851, 0xeb851ede},	/* 0.237754=f(0.24)*/
{38, 0,123,__LINE__, 0x3fcfacfb, 0x2399e637, 0x3fd00000, 0x00000013},	/* 0.247466=f(0.25)*/
{38, 0,123,__LINE__, 0x3fd0753f, 0xdccb87dc, 0x3fd0a3d7, 0x0a3d70b7},	/* 0.257156=f(0.26)*/
{36, 0,123,__LINE__, 0x3fd1139f, 0x6c2c963b, 0x3fd147ae, 0x147ae15b},	/* 0.266823=f(0.27)*/
{36, 0,123,__LINE__, 0x3fd1b198, 0xf7360e56, 0x3fd1eb85, 0x1eb851ff},	/* 0.276465=f(0.28)*/
{37, 0,123,__LINE__, 0x3fd24f29, 0xa56a30cb, 0x3fd28f5c, 0x28f5c2a3},	/* 0.286082=f(0.29)*/
{36, 0,123,__LINE__, 0x3fd2ec4e, 0xb1a897ad, 0x3fd33333, 0x33333347},	/* 0.295673=f(0.3)*/
{35, 0,123,__LINE__, 0x3fd38905, 0x0eb6bfe6, 0x3fd3d70a, 0x3d70a3eb},	/* 0.305238=f(0.31)*/
{41, 0,123,__LINE__, 0x3fd4254a, 0x1f9f44f4, 0x3fd47ae1, 0x47ae148f},	/* 0.314776=f(0.32)*/
{37, 0,123,__LINE__, 0x3fd4c11b, 0x5b68ed77, 0x3fd51eb8, 0x51eb8533},	/* 0.324286=f(0.33)*/
{36, 0,123,__LINE__, 0x3fd55c75, 0xf25348d8, 0x3fd5c28f, 0x5c28f5d7},	/* 0.333768=f(0.34)*/
{37, 0,123,__LINE__, 0x3fd5f757, 0x848dabea, 0x3fd66666, 0x6666667b},	/* 0.343222=f(0.35)*/
{37, 0,123,__LINE__, 0x3fd691bd, 0xc695285b, 0x3fd70a3d, 0x70a3d71f},	/* 0.352645=f(0.36)*/
{37, 0,123,__LINE__, 0x3fd72ba6, 0x2733d664, 0x3fd7ae14, 0x7ae147c3},	/* 0.362039=f(0.37)*/
{35, 0,123,__LINE__, 0x3fd7c50e, 0x8476428b, 0x3fd851eb, 0x851eb867},	/* 0.371402=f(0.38)*/
{36, 0,123,__LINE__, 0x3fd85df4, 0xb2f067d2, 0x3fd8f5c2, 0x8f5c290b},	/* 0.380735=f(0.39)*/
{37, 0,123,__LINE__, 0x3fd8f656, 0xb99e0630, 0x3fd99999, 0x999999af},	/* 0.390035=f(0.4)*/
{37, 0,123,__LINE__, 0x3fd98e32, 0x5adf0eb9, 0x3fda3d70, 0xa3d70a53},	/* 0.399304=f(0.41)*/
{37, 0,123,__LINE__, 0x3fda2585, 0xc6f37551, 0x3fdae147, 0xae147af7},	/* 0.40854=f(0.42)*/
{38, 0,123,__LINE__, 0x3fdabc4f, 0x421c22d0, 0x3fdb851e, 0xb851eb9b},	/* 0.417744=f(0.43)*/
{36, 0,123,__LINE__, 0x3fdb528c, 0xcc948f36, 0x3fdc28f5, 0xc28f5c3f},	/* 0.426913=f(0.44)*/
{36, 0,123,__LINE__, 0x3fdbe83c, 0xd31d6807, 0x3fdccccc, 0xcccccce3},	/* 0.43605=f(0.45)*/
{36, 0,123,__LINE__, 0x3fdc7d5d, 0xd5f6d046, 0x3fdd70a3, 0xd70a3d87},	/* 0.445152=f(0.46)*/
{35, 0,123,__LINE__, 0x3fdd11ee, 0x11c6e15e, 0x3fde147a, 0xe147ae2b},	/* 0.454219=f(0.47)*/
{36, 0,123,__LINE__, 0x3fdda5ec, 0x2e234a04, 0x3fdeb851, 0xeb851ecf},	/* 0.463252=f(0.48)*/
{34, 0,123,__LINE__, 0x3fde3956, 0xe5719fd3, 0x3fdf5c28, 0xf5c28f73},	/* 0.47225=f(0.49)*/
{35, 0,123,__LINE__, 0x3fdecc2c, 0xaec5160a, 0x3fe00000, 0x0000000b},	/* 0.481212=f(0.5)*/
{35, 0,123,__LINE__, 0x3fdf5e6c, 0x6a59b369, 0x3fe051eb, 0x851eb85d},	/* 0.490138=f(0.51)*/
{36, 0,123,__LINE__, 0x3fdff014, 0xee021ffc, 0x3fe0a3d7, 0x0a3d70af},	/* 0.499028=f(0.52)*/
{36, 0,123,__LINE__, 0x3fe04092, 0x90d9ea64, 0x3fe0f5c2, 0x8f5c2901},	/* 0.507882=f(0.53)*/
{37, 0,123,__LINE__, 0x3fe088ce, 0x1bc3adc2, 0x3fe147ae, 0x147ae153},	/* 0.5167=f(0.54)*/
{37, 0,123,__LINE__, 0x3fe0d0bc, 0x64f3c1bc, 0x3fe19999, 0x999999a5},	/* 0.52548=f(0.55)*/
{35, 0,123,__LINE__, 0x3fe1185d, 0x16e9a478, 0x3fe1eb85, 0x1eb851f7},	/* 0.534224=f(0.56)*/
{36, 0,123,__LINE__, 0x3fe15faf, 0xc8481752, 0x3fe23d70, 0xa3d70a49},	/* 0.54293=f(0.57)*/
{36, 0,123,__LINE__, 0x3fe1a6b4, 0x17eea06a, 0x3fe28f5c, 0x28f5c29b},	/* 0.5516=f(0.58)*/
{36, 0,123,__LINE__, 0x3fe1ed69, 0xaccbfb70, 0x3fe2e147, 0xae147aed},	/* 0.560231=f(0.59)*/
{35, 0,123,__LINE__, 0x3fe233d0, 0x512068c7, 0x3fe33333, 0x3333333f},	/* 0.568825=f(0.6)*/
{37, 0,123,__LINE__, 0x3fe279e7, 0x846d7062, 0x3fe3851e, 0xb851eb91},	/* 0.577381=f(0.61)*/
{41, 0,123,__LINE__, 0x3fe2bfaf, 0x20470df3, 0x3fe3d70a, 0x3d70a3e3},	/* 0.585899=f(0.62)*/
{36, 0,123,__LINE__, 0x3fe30526, 0xea04b65f, 0x3fe428f5, 0xc28f5c35},	/* 0.594379=f(0.63)*/
{36, 0,123,__LINE__, 0x3fe34a4e, 0xae20dd1a, 0x3fe47ae1, 0x47ae1487},	/* 0.602821=f(0.64)*/
{44, 0,123,__LINE__, 0x3fe38f26, 0x4008c897, 0x3fe4cccc, 0xccccccd9},	/* 0.611224=f(0.65)*/
{36, 0,123,__LINE__, 0x3fe3d3ad, 0x94a170cf, 0x3fe51eb8, 0x51eb852b},	/* 0.61959=f(0.66)*/
{36, 0,123,__LINE__, 0x3fe417e4, 0x572351d9, 0x3fe570a3, 0xd70a3d7d},	/* 0.627916=f(0.67)*/
{36, 0,123,__LINE__, 0x3fe45bca, 0x89875047, 0x3fe5c28f, 0x5c28f5cf},	/* 0.636205=f(0.68)*/
{37, 0,123,__LINE__, 0x3fe49f60, 0x1923f93c, 0x3fe6147a, 0xe147ae21},	/* 0.644455=f(0.69)*/
{37, 0,123,__LINE__, 0x3fe4e2a4, 0xf9524b18, 0x3fe66666, 0x66666673},	/* 0.652667=f(0.7)*/
{38, 0,123,__LINE__, 0x3fe52599, 0x233e4558, 0x3fe6b851, 0xeb851ec5},	/* 0.66084=f(0.71)*/
{36, 0,123,__LINE__, 0x3fe5683c, 0xafafee77, 0x3fe70a3d, 0x70a3d717},	/* 0.668974=f(0.72)*/
{36, 0,123,__LINE__, 0x3fe5aa8f, 0x6edcd114, 0x3fe75c28, 0xf5c28f69},	/* 0.67707=f(0.73)*/
{37, 0,123,__LINE__, 0x3fe5ec91, 0x8468f074, 0x3fe7ae14, 0x7ae147bb},	/* 0.685128=f(0.74)*/
{39, 0,123,__LINE__, 0x3fe62e42, 0xfefa39ef, 0x3fe80000, 0x0000000d},	/* 0.693147=f(0.75)*/
{35, 0,123,__LINE__, 0x3fe66fa3, 0xf223194a, 0x3fe851eb, 0x851eb85f},	/* 0.701128=f(0.76)*/
{36, 0,123,__LINE__, 0x3fe6b0b4, 0x76360e0b, 0x3fe8a3d7, 0x0a3d70b1},	/* 0.70907=f(0.77)*/
{36, 0,123,__LINE__, 0x3fe6f174, 0xa819e98a, 0x3fe8f5c2, 0x8f5c2903},	/* 0.716975=f(0.78)*/
{38, 0,123,__LINE__, 0x3fe731e4, 0xc23adb83, 0x3fe947ae, 0x147ae155},	/* 0.724841=f(0.79)*/
{35, 0,123,__LINE__, 0x3fe77204, 0xb7d0697d, 0x3fe99999, 0x999999a7},	/* 0.732668=f(0.8)*/
{36, 0,123,__LINE__, 0x3fe7b1d4, 0xcbba4d04, 0x3fe9eb85, 0x1eb851f9},	/* 0.740458=f(0.81)*/
{35, 0,123,__LINE__, 0x3fe7f155, 0x2b895778, 0x3fea3d70, 0xa3d70a4b},	/* 0.74821=f(0.82)*/
{36, 0,123,__LINE__, 0x3fe83086, 0x0892d53c, 0x3fea8f5c, 0x28f5c29d},	/* 0.755923=f(0.83)*/
{36, 0,123,__LINE__, 0x3fe86f67, 0x97c95781, 0x3feae147, 0xae147aef},	/* 0.763599=f(0.84)*/
{36, 0,123,__LINE__, 0x3fe8adfa, 0x29f82046, 0x3feb3333, 0x33333341},	/* 0.771237=f(0.85)*/
{36, 0,123,__LINE__, 0x3fe8ec3d, 0xc9f79b39, 0x3feb851e, 0xb851eb93},	/* 0.778838=f(0.86)*/
{35, 0,123,__LINE__, 0x3fe92a32, 0xcf2fde75, 0x3febd70a, 0x3d70a3e5},	/* 0.786401=f(0.87)*/
{37, 0,123,__LINE__, 0x3fe967d9, 0x7b912488, 0x3fec28f5, 0xc28f5c37},	/* 0.793927=f(0.88)*/
{36, 0,123,__LINE__, 0x3fe9a532, 0x13f178a4, 0x3fec7ae1, 0x47ae1489},	/* 0.801415=f(0.89)*/
{43, 0,123,__LINE__, 0x3fe9e23c, 0xdfea9881, 0x3feccccc, 0xccccccdb},	/* 0.808867=f(0.9)*/
{39, 0,123,__LINE__, 0x3fea1efa, 0x41638c74, 0x3fed1eb8, 0x51eb852d},	/* 0.816281=f(0.91)*/
{35, 0,123,__LINE__, 0x3fea5b6a, 0x55a6c76e, 0x3fed70a3, 0xd70a3d7f},	/* 0.823659=f(0.92)*/
{38, 0,123,__LINE__, 0x3fea978d, 0x839e2110, 0x3fedc28f, 0x5c28f5d1},	/* 0.831=f(0.93)*/
{35, 0,123,__LINE__, 0x3fead364, 0x1cae3d2c, 0x3fee147a, 0xe147ae23},	/* 0.838305=f(0.94)*/
{35, 0,123,__LINE__, 0x3feb0eee, 0x7461cc2e, 0x3fee6666, 0x66666675},	/* 0.845573=f(0.95)*/
{41, 0,123,__LINE__, 0x3feb4a2c, 0xe04c9383, 0x3feeb851, 0xeb851ec7},	/* 0.852805=f(0.96)*/
{36, 0,123,__LINE__, 0x3feb851f, 0xcee7732b, 0x3fef0a3d, 0x70a3d719},	/* 0.860001=f(0.97)*/
{35, 0,123,__LINE__, 0x3febbfc7, 0x6b772f34, 0x3fef5c28, 0xf5c28f6b},	/* 0.867161=f(0.98)*/
{36, 0,123,__LINE__, 0x3febfa24, 0x281af354, 0x3fefae14, 0x7ae147bd},	/* 0.874285=f(0.99)*/
{39, 0,123,__LINE__, 0x3fec3436, 0x6179d427, 0x3ff00000, 0x00000007},	/* 0.881374=f(1)*/
{35, 0,123,__LINE__, 0x3fec6dfe, 0x75bf8c15, 0x3ff028f5, 0xc28f5c30},	/* 0.888427=f(1.01)*/
{37, 0,123,__LINE__, 0x3feca77c, 0xc48466df, 0x3ff051eb, 0x851eb859},	/* 0.895445=f(1.02)*/
{36, 0,123,__LINE__, 0x3fece0b1, 0xaeb5f35d, 0x3ff07ae1, 0x47ae1482},	/* 0.902428=f(1.03)*/
{36, 0,123,__LINE__, 0x3fed199d, 0x96807812, 0x3ff0a3d7, 0x0a3d70ab},	/* 0.909377=f(1.04)*/
{40, 0,123,__LINE__, 0x3fed5240, 0xdf392713, 0x3ff0cccc, 0xccccccd4},	/* 0.916291=f(1.05)*/
{36, 0,123,__LINE__, 0x3fed8a9b, 0xed490da7, 0x3ff0f5c2, 0x8f5c28fd},	/* 0.92317=f(1.06)*/
{35, 0,123,__LINE__, 0x3fedc2af, 0x51cbce33, 0x3ff11eb8, 0x51eb8526},	/* 0.930015=f(1.07)*/
{37, 0,123,__LINE__, 0x3fedfa7b, 0x1b780c4f, 0x3ff147ae, 0x147ae14f},	/* 0.936826=f(1.08)*/
{38, 0,123,__LINE__, 0x3fee31ff, 0xdd662b42, 0x3ff170a3, 0xd70a3d78},	/* 0.943603=f(1.09)*/
{35, 0,123,__LINE__, 0x3fee693d, 0xff8a28bc, 0x3ff19999, 0x999999a1},	/* 0.950347=f(1.1)*/
{36, 0,123,__LINE__, 0x3feea035, 0xea8d0735, 0x3ff1c28f, 0x5c28f5ca},	/* 0.957057=f(1.11)*/
{37, 0,123,__LINE__, 0x3feed6e8, 0x07bbd3cb, 0x3ff1eb85, 0x1eb851f3},	/* 0.963734=f(1.12)*/
{40, 0,123,__LINE__, 0x3fef0d54, 0xc0f74ccb, 0x3ff2147a, 0xe147ae1c},	/* 0.970377=f(1.13)*/
{40, 0,123,__LINE__, 0x3fef437c, 0x80a424e6, 0x3ff23d70, 0xa3d70a45},	/* 0.976988=f(1.14)*/
{35, 0,123,__LINE__, 0x3fef795f, 0xb19bdf1f, 0x3ff26666, 0x6666666e},	/* 0.983566=f(1.15)*/
{40, 0,123,__LINE__, 0x3fefaefe, 0xbf1e3f71, 0x3ff28f5c, 0x28f5c297},	/* 0.990112=f(1.16)*/
{35, 0,123,__LINE__, 0x3fefe45a, 0x14c34c56, 0x3ff2b851, 0xeb851ec0},	/* 0.996625=f(1.17)*/
{36, 0,123,__LINE__, 0x3ff00cb9, 0x0f36ee94, 0x3ff2e147, 0xae147ae9},	/* 1.00311=f(1.18)*/
{35, 0,123,__LINE__, 0x3ff02723, 0xb8b59cc2, 0x3ff30a3d, 0x70a3d712},	/* 1.00956=f(1.19)*/
{37, 0,123,__LINE__, 0xc0044c62, 0xa5953b2f, 0xc01921fb, 0x54442d18},	/* -2.5373=f(-6.28319)*/
{37, 0,123,__LINE__, 0xc002090a, 0x84f94918, 0xc012d97c, 0x7f3321d2},	/* -2.25441=f(-4.71239)*/
{37, 0,123,__LINE__, 0xbffdcbf6, 0xa62e3547, 0xc00921fb, 0x54442d18},	/* -1.8623=f(-3.14159)*/
{36, 0,123,__LINE__, 0xbff3bc04, 0xee951033, 0xbff921fb, 0x54442d18},	/* -1.2334=f(-1.5708)*/
{64, 0,123,__LINE__, 0x00000000, 0x00000000, 0x00000000, 0x00000000},	/* 0=f(0)*/
{36, 0,123,__LINE__, 0x3ff3bc04, 0xee951033, 0x3ff921fb, 0x54442d18},	/* 1.2334=f(1.5708)*/
{37, 0,123,__LINE__, 0x3ffdcbf6, 0xa62e3547, 0x400921fb, 0x54442d18},	/* 1.8623=f(3.14159)*/
{37, 0,123,__LINE__, 0x4002090a, 0x84f94918, 0x4012d97c, 0x7f3321d2},	/* 2.25441=f(4.71239)*/
{37, 0,123,__LINE__, 0xc01060e4, 0xa5fbe5ca, 0xc03e0000, 0x00000000},	/* -4.09462=f(-30)*/
{36, 0,123,__LINE__, 0xc0102531, 0x52b24b7d, 0xc03c4ccc, 0xcccccccd},	/* -4.03632=f(-28.3)*/
{36, 0,123,__LINE__, 0xc00fcb98, 0x4871a7cd, 0xc03a9999, 0x9999999a},	/* -3.97441=f(-26.6)*/
{40, 0,123,__LINE__, 0xc00f4470, 0xa09130d5, 0xc038e666, 0x66666667},	/* -3.90842=f(-24.9)*/
{36, 0,123,__LINE__, 0xc00eb3bd, 0x6d1ded69, 0xc0373333, 0x33333334},	/* -3.83776=f(-23.2)*/
{36, 0,123,__LINE__, 0xc00e180b, 0x68a00467, 0xc0358000, 0x00000001},	/* -3.76174=f(-21.5)*/
{35, 0,123,__LINE__, 0xc00d6f8b, 0xf4578601, 0xc033cccc, 0xccccccce},	/* -3.67947=f(-19.8)*/
{37, 0,123,__LINE__, 0xc00cb7f4, 0x44409033, 0xc0321999, 0x9999999b},	/* -3.58982=f(-18.1)*/
{35, 0,123,__LINE__, 0xc00bee4c, 0x6c992cb4, 0xc0306666, 0x66666668},	/* -3.49136=f(-16.4)*/
{35, 0,123,__LINE__, 0xc00b0ea4, 0x70f21465, 0xc02d6666, 0x6666666a},	/* -3.38215=f(-14.7)*/
{37, 0,123,__LINE__, 0xc00a139a, 0xc6c0b4fa, 0xc02a0000, 0x00000004},	/* -3.25957=f(-13)*/
{36, 0,123,__LINE__, 0xc008f58f, 0x36b932c7, 0xc0269999, 0x9999999e},	/* -3.1199=f(-11.3)*/
{38, 0,123,__LINE__, 0xc007a930, 0x7dace0d2, 0xc0233333, 0x33333338},	/* -2.95761=f(-9.6)*/
{37, 0,123,__LINE__, 0xc0061ca7, 0xc41294f0, 0xc01f9999, 0x999999a3},	/* -2.76399=f(-7.9)*/
{37, 0,123,__LINE__, 0xc004316f, 0x05c16074, 0xc018cccc, 0xccccccd6},	/* -2.52414=f(-6.2)*/
{38, 0,123,__LINE__, 0xc001acbe, 0x7dcff693, 0xc0120000, 0x00000009},	/* -2.20935=f(-4.5)*/
{35, 0,123,__LINE__, 0xbffc0d39, 0xbb3c9f70, 0xc0066666, 0x66666678},	/* -1.75323=f(-2.8)*/
{35, 0,123,__LINE__, 0xbfee693d, 0xff8a28bc, 0xbff19999, 0x999999bd},	/* -0.950347=f(-1.1)*/
{35, 0,123,__LINE__, 0x3fe233d0, 0x512068c7, 0x3fe33333, 0x333332ec},	/* 0.568825=f(0.6)*/
{42, 0,123,__LINE__, 0x3ff91fdc, 0x5fc3829c, 0x40026666, 0x66666654},	/* 1.57028=f(2.3)*/
{37, 0,123,__LINE__, 0x4000c1f8, 0xa6e80eeb, 0x400fffff, 0xffffffee},	/* 2.09471=f(4)*/
{36, 0,123,__LINE__, 0x4003879e, 0xb4736354, 0x4016cccc, 0xccccccc4},	/* 2.44122=f(5.7)*/
{36, 0,123,__LINE__, 0x400597e2, 0x0c0797cf, 0x401d9999, 0x99999991},	/* 2.69916=f(7.4)*/
{37, 0,123,__LINE__, 0x40073c44, 0x3b0bfeb8, 0x40223333, 0x3333332f},	/* 2.90443=f(9.1)*/
{40, 0,123,__LINE__, 0x40089940, 0x6091b818, 0x40259999, 0x99999995},	/* 3.07483=f(10.8)*/
{36, 0,123,__LINE__, 0x4009c386, 0xd2b8b56e, 0x4028ffff, 0xfffffffb},	/* 3.22047=f(12.5)*/
{38, 0,123,__LINE__, 0x400ac7f0, 0x7d42bd05, 0x402c6666, 0x66666661},	/* 3.34763=f(14.2)*/
{36, 0,123,__LINE__, 0x400baf02, 0x57bd0d7f, 0x402fcccc, 0xccccccc7},	/* 3.46045=f(15.9)*/
{39, 0,123,__LINE__, 0x400c7eac, 0x5e7a5674, 0x40319999, 0x99999997},	/* 3.56185=f(17.6)*/
{36, 0,123,__LINE__, 0x400d3b3b, 0xd5efe5db, 0x40334ccc, 0xccccccca},	/* 3.65392=f(19.3)*/
{36, 0,123,__LINE__, 0x400de7e8, 0x4ab59e17, 0x4034ffff, 0xfffffffd},	/* 3.73824=f(21)*/
{36, 0,123,__LINE__, 0x400e8729, 0x68a222c5, 0x4036b333, 0x33333330},	/* 3.816=f(22.7)*/
{38, 0,123,__LINE__, 0x400f1aee, 0x5c024a89, 0x40386666, 0x66666663},	/* 3.88815=f(24.4)*/
{37, 0,123,__LINE__, 0x400fa4c2, 0x9a7ccf12, 0x403a1999, 0x99999996},	/* 3.95545=f(26.1)*/
{39, 0,123,__LINE__, 0x401012f3, 0x5e235e71, 0x403bcccc, 0xccccccc9},	/* 4.01851=f(27.8)*/
{43, 0,123,__LINE__, 0x40104fb1, 0x4017a7cb, 0x403d7fff, 0xfffffffc},	/* 4.07782=f(29.5)*/
0,};
test_asinhf(m)   {run_vector_1(m,asinhf_vec,(char *)(asinhf),"asinhf","ff");   }	
