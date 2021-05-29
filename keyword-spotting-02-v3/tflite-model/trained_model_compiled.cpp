/* Generated by Edge Impulse
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/
// Generated on: 26.05.2021 08:39:47

#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include "edge-impulse-sdk/tensorflow/lite/c/builtin_op_data.h"
#include "edge-impulse-sdk/tensorflow/lite/c/common.h"
#include "edge-impulse-sdk/tensorflow/lite/micro/kernels/micro_ops.h"

#if EI_CLASSIFIER_PRINT_STATE
#if defined(__cplusplus) && EI_C_LINKAGE == 1
extern "C" {
    extern void ei_printf(const char *format, ...);
}
#else
extern void ei_printf(const char *format, ...);
#endif
#endif

#if defined __GNUC__
#define ALIGN(X) __attribute__((aligned(X)))
#elif defined _MSC_VER
#define ALIGN(X) __declspec(align(X))
#elif defined __TASKING__
#define ALIGN(X) __align(X)
#endif

namespace {

constexpr int kTensorArenaSize = 1616;

#if defined(EI_CLASSIFIER_ALLOCATION_STATIC)
uint8_t tensor_arena[kTensorArenaSize] ALIGN(16);
#elif defined(EI_CLASSIFIER_ALLOCATION_STATIC_HIMAX)
#pragma Bss(".tensor_arena")
uint8_t tensor_arena[kTensorArenaSize] ALIGN(16);
#pragma Bss()
#elif defined(EI_CLASSIFIER_ALLOCATION_STATIC_HIMAX_GNU)
uint8_t tensor_arena[kTensorArenaSize] ALIGN(16) __attribute__((section(".tensor_arena")));
#else
#define EI_CLASSIFIER_ALLOCATION_HEAP 1
uint8_t* tensor_arena = NULL;
#endif

static uint8_t* tensor_boundary;
static uint8_t* current_location;

template <int SZ, class T> struct TfArray {
  int sz; T elem[SZ];
};
enum used_operators_e {
  OP_RESHAPE, OP_CONV_2D, OP_MAX_POOL_2D, OP_FULLY_CONNECTED, OP_SOFTMAX,  OP_LAST
};
struct TensorInfo_t { // subset of TfLiteTensor used for initialization from constant memory
  TfLiteAllocationType allocation_type;
  TfLiteType type;
  void* data;
  TfLiteIntArray* dims;
  size_t bytes;
  TfLiteQuantization quantization;
};
struct NodeInfo_t { // subset of TfLiteNode used for initialization from constant memory
  struct TfLiteIntArray* inputs;
  struct TfLiteIntArray* outputs;
  void* builtin_data;
  used_operators_e used_op_index;
};

TfLiteContext ctx{};
TfLiteTensor tflTensors[23];
TfLiteRegistration registrations[OP_LAST];
TfLiteNode tflNodes[11];

const TfArray<2, int> tensor_dimension0 = { 2, { 1,650 } };
const TfArray<1, float> quant0_scale = { 1, { 0.043887380510568619, } };
const TfArray<1, int> quant0_zero = { 1, { -15 } };
const TfLiteAffineQuantization quant0 = { (TfLiteFloatArray*)&quant0_scale, (TfLiteIntArray*)&quant0_zero, 0 };
const ALIGN(8) int32_t tensor_data1[2] = { -1, 208, };
const TfArray<1, int> tensor_dimension1 = { 1, { 2 } };
const ALIGN(8) int32_t tensor_data2[8] = { -1380, 1930, -12534, -7831, -8454, -7815, -3542, -10346, };
const TfArray<1, int> tensor_dimension2 = { 1, { 8 } };
const TfArray<8, float> quant2_scale = { 8, { 0.00048144019092433155, 0.00041178107494488358, 0.00017236139683518559, 0.00033606178476475179, 0.00018832649220712483, 0.00021108999499119818, 0.00045720237540081143, 0.00023296110157389194, } };
const TfArray<8, int> quant2_zero = { 8, { 0,0,0,0,0,0,0,0 } };
const TfLiteAffineQuantization quant2 = { (TfLiteFloatArray*)&quant2_scale, (TfLiteIntArray*)&quant2_zero, 0 };
const ALIGN(8) int32_t tensor_data3[16] = { -1897, -5623, 150, 1052, -821, -2385, -1166, 134, -1790, 193, -327, -106, -663, -551, -3122, -200, };
const TfArray<1, int> tensor_dimension3 = { 1, { 16 } };
const TfArray<16, float> quant3_scale = { 16, { 0.00088097265688702464, 0.00025323743466287851, 0.00048605594201944768, 0.00016448629321530461, 0.00036281580105423927, 0.00085772352758795023, 0.0006467251805588603, 0.0010079559870064259, 0.00043654826004058123, 0.00067255401518195868, 0.0008029816672205925, 0.00029251273372210562, 0.00051083898870274425, 0.00062275200616568327, 0.00037596546462737024, 0.00023892155149951577, } };
const TfArray<16, int> quant3_zero = { 16, { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 } };
const TfLiteAffineQuantization quant3 = { (TfLiteFloatArray*)&quant3_scale, (TfLiteIntArray*)&quant3_zero, 0 };
const ALIGN(8) int32_t tensor_data4[6] = { 2799, 1505, -1739, -654, 571, -2088, };
const TfArray<1, int> tensor_dimension4 = { 1, { 6 } };
const TfArray<1, float> quant4_scale = { 1, { 0.00064287550048902631, } };
const TfArray<1, int> quant4_zero = { 1, { 0 } };
const TfLiteAffineQuantization quant4 = { (TfLiteFloatArray*)&quant4_scale, (TfLiteIntArray*)&quant4_zero, 0 };
const ALIGN(8) int8_t tensor_data5[6*208] = { 
  2, 22, 9, 38, 26, -57, 16, 3, -16, 32, 30, 31, 1, -39, -35, 18, 15, 4, -3, 0, 9, -37, 34, -18, -54, 12, -13, 8, 6, -73, -20, 10, -14, -28, -6, -14, 9, -19, 3, -75, -118, -5, -25, 6, -14, -71, -15, 20, -3, -69, -6, -33, 4, -62, 1, -37, -93, -12, -10, 15, -22, -127, -14, 12, -24, -13, -21, -26, 2, -1, -14, -34, -59, -35, -37, -12, 0, -79, -10, 14, -44, -13, -20, -36, 2, -40, -13, -61, -54, -26, -40, -8, -6, -116, -41, 20, -8, -36, -13, -38, 6, -28, -14, -40, -86, -6, -25, -14, -21, -119, -8, 15, -19, -32, -26, -62, 9, -33, -21, -61, -53, -34, -50, -2, 8, -99, -2, 11, -17, 5, -26, -28, 5, -53, -3, -38, -100, -23, -31, 3, -14, -101, -7, 13, -31, -4, -9, -30, 3, -49, -31, -45, -82, -24, -29, 7, -1, -102, -19, 17, -19, -36, -27, -22, 25, -52, -1, -16, -76, -20, -27, 7, 3, -72, -14, 19, -9, -19, -6, -27, 4, -32, -14, -35, -44, -5, -35, 1, 20, -94, -8, 16, -13, -25, -29, 12, 6, -11, -17, 51, -23, 2, -22, 13, -14, -106, -54, 3, 
  -19, -21, -22, -1, 2, -41, 9, 6, 2, 2, -42, -14, -18, -8, -5, 0, -13, 21, -29, 4, -7, 3, -3, 19, -5, -7, 4, -1, 1, 4, -5, -1, -6, 26, -11, 7, 4, -1, 1, 15, -15, -14, 0, -8, -12, 2, 5, -8, -16, 19, -3, 10, 4, -5, -11, 7, -1, -11, 1, 3, -5, 2, 1, -7, -15, 15, -12, 5, 8, -4, 1, 6, 2, -10, 4, 9, -3, 3, -2, -6, -13, 15, -9, 4, 8, -3, 2, 13, -5, -10, 4, -4, 0, -2, -4, -9, -21, 17, -8, 4, 2, -8, -6, 8, 4, -5, -1, 3, -1, 1, -1, -13, -19, 18, -13, 9, 4, -5, -4, 8, 0, -11, 2, -6, -3, 5, -5, -3, -10, 16, -13, -2, 3, -2, 2, 13, 4, -11, 3, -2, -4, 1, -2, -7, -1, 23, -17, 1, -7, -3, 0, 18, 6, -7, 4, -8, -1, 0, -4, -2, 1, 11, -11, -5, -2, -6, -9, 4, 1, -10, 6, -12, -9, 2, -3, 6, 11, 6, -15, -10, -14, -2, -4, -4, 5, -5, -10, -16, -13, 5, 2, 7, -27, 13, -44, -25, 0, 1, 11, -27, 10, -4, 2, -3, -6, 1, 5, -4, 
  -22, -35, 3, -19, -9, -25, -9, 4, -77, -8, 15, -23, 35, -26, 20, -12, 0, -15, 24, -16, 5, -21, -12, -8, -2, 44, 20, -14, 28, -23, 16, -3, 2, -27, 2, -22, 0, -31, 7, -9, -1, 29, 26, 8, 23, -13, 13, 3, 4, 1, 12, -12, 11, -1, 24, -13, -16, 25, 23, -7, 17, -15, 12, 1, 10, 1, 15, -4, 7, -8, 19, -18, -10, 26, 19, 11, 25, -7, 5, -1, 13, 2, 18, 3, 7, -4, 14, -11, -12, 16, 18, 8, 17, -4, 14, 2, 16, -19, 15, 14, 0, -8, 6, -14, -13, 13, 13, 15, 17, -5, 5, 5, 8, -18, 19, 12, -6, -2, 6, -18, -11, 10, 16, 9, 5, -1, 10, 2, 9, -13, 19, 13, 7, 6, 10, -21, -11, 12, 10, 10, 4, -1, 8, -2, 7, -13, 21, 9, 4, 4, 7, -9, -3, 14, 12, 18, 10, 1, 2, -4, 13, 4, 12, 8, -1, -5, 9, -15, -4, 10, 5, 17, 3, 2, 6, -13, 17, -3, 19, 18, 11, 13, -2, -10, 8, -8, 10, 16, -17, 0, 17, -17, 17, 8, 32, 9, -2, 3, -22, -1, -4, 3, 4, 13, -9, 10, 18, 11, 
  -14, -85, 3, -5, -26, -54, -6, 4, -64, -10, 18, 2, -60, -5, 21, -5, -96, -49, -42, 20, -2, -79, -6, 13, -31, -47, -25, 6, -79, -3, 9, -8, -32, -11, 20, 25, -27, -37, -19, 7, -21, -53, -48, 0, -48, 0, 20, -21, -13, -14, 15, 21, -8, -40, -23, 22, -28, -30, -16, 8, -38, 6, 16, -37, -16, -7, 11, 16, -15, -20, -16, 15, -22, -47, -19, 11, -35, 5, 15, -17, -24, -19, 11, 19, -14, -33, 8, 23, -8, -36, -21, 7, -46, 4, 15, -16, -16, -18, 9, 18, -26, -32, -3, 9, -12, -12, -24, 12, -37, 2, 11, -15, -11, -15, 14, 19, -12, -9, 9, 13, 9, -25, -19, 8, -19, 3, 2, 2, -10, -19, 12, 16, -2, -9, 3, 5, -6, -15, -1, 14, -8, -1, 24, -6, -6, -26, 11, 9, -3, -18, 1, 11, -13, -19, -7, 15, -33, 4, 22, -19, -17, -12, 9, 6, -6, -10, 1, 8, 8, 1, -7, 13, -24, 8, 11, -10, -11, -10, 10, 17, 1, 5, -8, 7, 6, 1, 8, 14, -23, 4, 23, 0, -34, -34, 11, 22, -26, 5, -5, 21, 4, -3, 7, 10, -13, 3, 17, -20, 
  10, 1, 2, 1, -12, 32, -24, -7, -6, -7, 6, -3, -12, 24, -10, 3, 12, -10, 11, -7, -15, 20, -33, -49, -10, -12, 0, 0, -20, 7, -20, 6, 15, -8, 3, -6, -12, 17, -34, -44, 13, 14, 17, 7, -5, 14, -21, 10, 4, 2, 0, -3, -11, 19, -9, -32, 7, 7, 13, 6, 4, 11, -25, 11, 7, -5, 2, -4, -14, 18, -19, -30, -1, 16, 16, -5, 5, 10, -10, 5, 10, -4, -7, -2, -18, 20, -27, -29, 0, 16, 11, -14, -6, 11, -9, -5, 11, 8, -11, -6, -14, 25, -27, -25, -4, 15, 9, -10, -1, 6, -20, 2, 6, 5, -18, -18, -19, 20, -20, -26, 6, 19, 20, -27, -3, 11, -20, -12, 9, -11, -3, -9, -6, 23, -17, -39, 14, 12, 8, -34, -3, 2, -24, -9, -17, -13, -6, -5, -22, 18, -21, -41, -11, 12, 14, -23, 0, 3, -25, 6, -2, -23, -9, 1, -10, 18, -25, -32, -8, 15, 9, -23, 8, 9, -8, 9, -4, -9, -4, -6, -10, 6, -12, -15, -12, 8, 7, -26, -3, 6, -24, 7, -18, 10, -13, -9, 6, 9, 1, 21, -16, 6, -4, -11, 9, 13, -17, 16, 
  10, 2, 20, -6, 3, 25, 6, -33, 36, -1, -1, 5, 10, 8, -5, -8, 21, -3, 3, -8, 6, 17, -24, 13, 26, -35, -29, -3, 12, 6, -8, 0, 21, 1, 2, -11, 7, 12, 14, 17, 32, -12, -25, -5, 16, 10, -10, -2, 15, 6, -9, -1, 9, 11, 22, 22, 22, -19, -29, -11, 6, 9, 1, 7, 13, -6, -5, -8, 13, 13, 20, 17, 21, -1, -28, -9, 11, 6, -5, -2, 19, 4, -19, -17, 14, 14, 18, 14, 17, -2, -16, -9, 9, 2, -6, -6, 16, 2, -10, -14, 17, 18, 19, 26, 24, -1, -27, -17, 7, 5, -10, 3, 16, 2, -18, -3, 9, 15, 15, 16, 19, 3, -9, -18, 10, 1, 10, 5, 14, 14, -16, -11, 10, 13, 9, 19, 20, 3, -19, -10, 7, 6, 5, -1, 17, -2, -14, -19, 2, 6, 12, 13, 22, 4, -13, -15, 15, 1, 3, -5, 20, 0, -28, -28, 3, 4, 9, 17, 14, 2, -14, -3, 3, 0, -6, -10, -40, 4, -46, -51, 3, 9, -3, 30, 24, 2, -3, -26, 10, 7, -2, -2, 31, -4, -47, -23, 6, -31, 6, -46, 19, 12, -13, -27, 4, -45, -1, -20, 
};
const TfArray<2, int> tensor_dimension5 = { 2, { 6,208 } };
const TfArray<1, float> quant5_scale = { 1, { 0.022085603326559067, } };
const TfArray<1, int> quant5_zero = { 1, { 0 } };
const TfLiteAffineQuantization quant5 = { (TfLiteFloatArray*)&quant5_scale, (TfLiteIntArray*)&quant5_zero, 0 };
const ALIGN(8) int8_t tensor_data6[8*1*3*13] = { 
  /* [0][0][][] */ -94,120,-4,43,-15,-6,0,-12,17,-10,0,5,-13, -26,-127,28,-5,3,12,4,-8,7,0,-3,-15,3, -11,61,-3,-27,21,-10,-2,-18,14,-10,13,1,3, 
  /* [1][0][][] */ -68,-26,25,1,11,-17,5,3,-13,0,-13,-4,16, -127,-63,13,-6,5,-2,0,-9,-5,-9,-1,-17,-1, 1,-54,2,14,15,0,7,-1,-3,-10,16,-6,3, 
  /* [2][0][][] */ 124,47,-12,-20,19,-13,53,80,-65,-76,12,-16,10, 117,33,-34,-7,-33,26,62,29,-30,-30,15,-12,44, 127,17,-7,21,-29,21,68,41,-28,11,-7,-46,15, 
  /* [3][0][][] */ -4,80,-26,29,23,-49,-23,29,-16,27,15,-4,3, -62,56,-33,17,8,-10,-20,8,8,15,-35,18,2, 1,127,-61,4,-15,25,21,15,14,-20,-34,30,-13, 
  /* [4][0][][] */ 46,105,-31,-3,36,-73,-110,52,75,54,-40,36,18, 6,71,79,50,-19,-82,-91,20,-47,-4,44,28,10, -93,57,91,31,8,-127,-27,28,-49,13,71,-9,-19, 
  /* [5][0][][] */ -31,89,40,-72,14,13,-11,-48,-9,14,28,16,9, -1,59,76,-72,-13,4,-50,-16,-22,18,36,-8,-20, 36,127,52,-66,-36,18,-33,-20,4,44,-6,-5,14, 
  /* [6][0][][] */ -68,-27,-4,-20,15,28,7,4,-1,4,3,7,-20, -30,31,4,32,-20,9,-5,-13,4,0,11,-4,6, -38,127,36,25,55,-26,1,-11,5,15,-5,0,3, 
  /* [7][0][][] */ 71,-51,25,56,-89,-3,29,-18,12,5,-7,-27,-3, -9,-15,98,23,-127,30,-31,-5,39,27,-1,-6,2, 34,-21,122,20,-119,-17,-86,-9,-11,-16,14,-3,7, 
};
const TfArray<4, int> tensor_dimension6 = { 4, { 8,1,3,13 } };
const TfArray<8, float> quant6_scale = { 8, { 0.010969900526106358, 0.0093826763331890106, 0.0039273565635085106, 0.0076573668047785759, 0.0042911306954920292, 0.0048098107799887657, 0.010417627170681953, 0.0053081568330526352, } };
const TfArray<8, int> quant6_zero = { 8, { 0,0,0,0,0,0,0,0 } };
const TfLiteAffineQuantization quant6 = { (TfLiteFloatArray*)&quant6_scale, (TfLiteIntArray*)&quant6_zero, 0 };
const ALIGN(8) int8_t tensor_data7[16*1*3*8] = { 
  /* [0][0][][] */ 1,4,-127,-1,-6,-2,15,-24, 1,1,-22,-8,0,11,2,-15, 1,-12,-3,29,4,2,3,-13, 
  /* [1][0][][] */ -6,-4,-68,-14,-16,-24,-32,103, -66,-126,19,6,-7,-29,-19,-6, -44,-127,13,70,2,-17,27,33, 
  /* [2][0][][] */ 1,-34,-61,-17,-20,20,11,-24, -10,-127,-53,12,-5,0,-7,-36, -35,-25,-40,-2,30,-17,-35,-10, 
  /* [3][0][][] */ -74,-14,-24,-127,-52,79,-88,-6, -74,-26,-29,-23,-59,-59,-44,-77, -57,-83,-2,39,23,98,-23,-16, 
  /* [4][0][][] */ 32,2,-3,29,-36,-30,7,-127, -15,-7,-4,-14,-10,-30,-11,-37, -25,-24,17,56,-5,-7,-3,52, 
  /* [5][0][][] */ 9,-8,0,10,17,12,12,-6, -4,-67,-4,-6,1,-1,19,-2, -44,-127,17,7,-8,2,-113,-6, 
  /* [6][0][][] */ -6,-14,11,-21,10,2,-4,20, 4,0,-91,-86,12,-3,-10,-1, 7,6,-127,-77,-5,-36,-10,-18, 
  /* [7][0][][] */ -127,-104,-1,-2,-14,0,-104,-8, -91,-121,1,3,-5,-3,-39,-8, -9,-14,-1,-4,9,15,-6,11, 
  /* [8][0][][] */ -26,-70,4,67,-23,-16,-4,-109, -22,-62,1,-46,-50,-18,-127,-24, -32,-59,12,-55,-17,-3,17,36, 
  /* [9][0][][] */ -8,-8,26,-8,5,-5,-20,14, -1,-1,-20,-1,-13,-30,-24,-3, -7,-2,-16,-70,-39,-127,-76,-5, 
  /* [10][0][][] */ -18,-12,26,-6,-3,-7,-15,-19, -2,-2,-5,-1,-5,-9,4,-50, 0,2,-5,6,-35,-54,0,-127, 
  /* [11][0][][] */ 4,-96,-18,7,24,23,-11,-35, -6,-22,-39,10,5,-47,-61,-26, 2,5,-127,-14,62,-71,-21,-17, 
  /* [12][0][][] */ 0,3,-7,1,-24,-35,37,-37, -21,-9,38,-23,11,-29,-40,-1, -4,-3,-8,-55,1,-20,-127,6, 
  /* [13][0][][] */ 3,-10,11,2,13,8,-3,-1, -4,-91,0,11,8,6,-6,3, -21,-127,17,9,-4,13,-6,2, 
  /* [14][0][][] */ -10,39,-90,-58,-19,-47,-12,-23, -7,-3,-17,-17,-57,-5,-33,-41, -21,2,52,-127,-76,35,-24,-40, 
  /* [15][0][][] */ 31,-4,-127,-7,-85,-81,11,-20, -22,-16,-89,23,1,7,46,-78, 33,-6,-110,-16,8,-37,47,-29, 
};
const TfArray<4, int> tensor_dimension7 = { 4, { 16,1,3,8 } };
const TfArray<16, float> quant7_scale = { 16, { 0.023224091157317162, 0.0066758138127624989, 0.012813345529139042, 0.0043361671268939972, 0.0095645049586892128, 0.02261120080947876, 0.01704888790845871, 0.026571609079837799, 0.011508230119943619, 0.017729785293340683, 0.021168101578950882, 0.0077111837454140186, 0.013466672971844673, 0.016416911035776138, 0.0099111543968319893, 0.0062984200194478035, } };
const TfArray<16, int> quant7_zero = { 16, { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 } };
const TfLiteAffineQuantization quant7 = { (TfLiteFloatArray*)&quant7_scale, (TfLiteIntArray*)&quant7_zero, 0 };
const ALIGN(8) int32_t tensor_data8[4] = { 1, 1, 50, 13, };
const TfArray<1, int> tensor_dimension8 = { 1, { 4 } };
const ALIGN(8) int32_t tensor_data9[4] = { 1, 50, 1, 8, };
const TfArray<1, int> tensor_dimension9 = { 1, { 4 } };
const ALIGN(8) int32_t tensor_data10[4] = { 1, 1, 25, 8, };
const TfArray<1, int> tensor_dimension10 = { 1, { 4 } };
const ALIGN(8) int32_t tensor_data11[4] = { 1, 25, 1, 16, };
const TfArray<1, int> tensor_dimension11 = { 1, { 4 } };
const TfArray<4, int> tensor_dimension12 = { 4, { 1,1,50,13 } };
const TfArray<1, float> quant12_scale = { 1, { 0.043887380510568619, } };
const TfArray<1, int> quant12_zero = { 1, { -15 } };
const TfLiteAffineQuantization quant12 = { (TfLiteFloatArray*)&quant12_scale, (TfLiteIntArray*)&quant12_zero, 0 };
const TfArray<4, int> tensor_dimension13 = { 4, { 1,1,50,8 } };
const TfArray<1, float> quant13_scale = { 1, { 0.037933569401502609, } };
const TfArray<1, int> quant13_zero = { 1, { -128 } };
const TfLiteAffineQuantization quant13 = { (TfLiteFloatArray*)&quant13_scale, (TfLiteIntArray*)&quant13_zero, 0 };
const TfArray<4, int> tensor_dimension14 = { 4, { 1,50,1,8 } };
const TfArray<1, float> quant14_scale = { 1, { 0.037933569401502609, } };
const TfArray<1, int> quant14_zero = { 1, { -128 } };
const TfLiteAffineQuantization quant14 = { (TfLiteFloatArray*)&quant14_scale, (TfLiteIntArray*)&quant14_zero, 0 };
const TfArray<4, int> tensor_dimension15 = { 4, { 1,25,1,8 } };
const TfArray<1, float> quant15_scale = { 1, { 0.037933569401502609, } };
const TfArray<1, int> quant15_zero = { 1, { -128 } };
const TfLiteAffineQuantization quant15 = { (TfLiteFloatArray*)&quant15_scale, (TfLiteIntArray*)&quant15_zero, 0 };
const TfArray<4, int> tensor_dimension16 = { 4, { 1,1,25,8 } };
const TfArray<1, float> quant16_scale = { 1, { 0.037933569401502609, } };
const TfArray<1, int> quant16_zero = { 1, { -128 } };
const TfLiteAffineQuantization quant16 = { (TfLiteFloatArray*)&quant16_scale, (TfLiteIntArray*)&quant16_zero, 0 };
const TfArray<4, int> tensor_dimension17 = { 4, { 1,1,25,16 } };
const TfArray<1, float> quant17_scale = { 1, { 0.029108351096510887, } };
const TfArray<1, int> quant17_zero = { 1, { -128 } };
const TfLiteAffineQuantization quant17 = { (TfLiteFloatArray*)&quant17_scale, (TfLiteIntArray*)&quant17_zero, 0 };
const TfArray<4, int> tensor_dimension18 = { 4, { 1,25,1,16 } };
const TfArray<1, float> quant18_scale = { 1, { 0.029108351096510887, } };
const TfArray<1, int> quant18_zero = { 1, { -128 } };
const TfLiteAffineQuantization quant18 = { (TfLiteFloatArray*)&quant18_scale, (TfLiteIntArray*)&quant18_zero, 0 };
const TfArray<4, int> tensor_dimension19 = { 4, { 1,13,1,16 } };
const TfArray<1, float> quant19_scale = { 1, { 0.029108351096510887, } };
const TfArray<1, int> quant19_zero = { 1, { -128 } };
const TfLiteAffineQuantization quant19 = { (TfLiteFloatArray*)&quant19_scale, (TfLiteIntArray*)&quant19_zero, 0 };
const TfArray<2, int> tensor_dimension20 = { 2, { 1,208 } };
const TfArray<1, float> quant20_scale = { 1, { 0.029108351096510887, } };
const TfArray<1, int> quant20_zero = { 1, { -128 } };
const TfLiteAffineQuantization quant20 = { (TfLiteFloatArray*)&quant20_scale, (TfLiteIntArray*)&quant20_zero, 0 };
const TfArray<2, int> tensor_dimension21 = { 2, { 1,6 } };
const TfArray<1, float> quant21_scale = { 1, { 0.20129720866680145, } };
const TfArray<1, int> quant21_zero = { 1, { 74 } };
const TfLiteAffineQuantization quant21 = { (TfLiteFloatArray*)&quant21_scale, (TfLiteIntArray*)&quant21_zero, 0 };
const TfArray<2, int> tensor_dimension22 = { 2, { 1,6 } };
const TfArray<1, float> quant22_scale = { 1, { 0.00390625, } };
const TfArray<1, int> quant22_zero = { 1, { -128 } };
const TfLiteAffineQuantization quant22 = { (TfLiteFloatArray*)&quant22_scale, (TfLiteIntArray*)&quant22_zero, 0 };
const TfLiteReshapeParams opdata0 = { { 0, 0, 0, 0, 0, 0, 0, 0, }, 0 };
const TfArray<2, int> inputs0 = { 2, { 0,8 } };
const TfArray<1, int> outputs0 = { 1, { 12 } };
const TfLiteConvParams opdata1 = { kTfLitePaddingSame, 1,1, kTfLiteActRelu, 1,1 };
const TfArray<3, int> inputs1 = { 3, { 12,6,2 } };
const TfArray<1, int> outputs1 = { 1, { 13 } };
const TfLiteReshapeParams opdata2 = { { 0, 0, 0, 0, 0, 0, 0, 0, }, 0 };
const TfArray<2, int> inputs2 = { 2, { 13,9 } };
const TfArray<1, int> outputs2 = { 1, { 14 } };
const TfLitePoolParams opdata3 = { kTfLitePaddingSame, 1,2, 1,2, kTfLiteActNone, { { 0,0, 0, 0 } } };
const TfArray<1, int> inputs3 = { 1, { 14 } };
const TfArray<1, int> outputs3 = { 1, { 15 } };
const TfLiteReshapeParams opdata4 = { { 0, 0, 0, 0, 0, 0, 0, 0, }, 0 };
const TfArray<2, int> inputs4 = { 2, { 15,10 } };
const TfArray<1, int> outputs4 = { 1, { 16 } };
const TfLiteConvParams opdata5 = { kTfLitePaddingSame, 1,1, kTfLiteActRelu, 1,1 };
const TfArray<3, int> inputs5 = { 3, { 16,7,3 } };
const TfArray<1, int> outputs5 = { 1, { 17 } };
const TfLiteReshapeParams opdata6 = { { 0, 0, 0, 0, 0, 0, 0, 0, }, 0 };
const TfArray<2, int> inputs6 = { 2, { 17,11 } };
const TfArray<1, int> outputs6 = { 1, { 18 } };
const TfLitePoolParams opdata7 = { kTfLitePaddingSame, 1,2, 1,2, kTfLiteActNone, { { 0,0, 0, 0 } } };
const TfArray<1, int> inputs7 = { 1, { 18 } };
const TfArray<1, int> outputs7 = { 1, { 19 } };
const TfLiteReshapeParams opdata8 = { { 0, 0, 0, 0, 0, 0, 0, 0, }, 0 };
const TfArray<2, int> inputs8 = { 2, { 19,1 } };
const TfArray<1, int> outputs8 = { 1, { 20 } };
const TfLiteFullyConnectedParams opdata9 = { kTfLiteActNone, kTfLiteFullyConnectedWeightsFormatDefault, false, false };
const TfArray<3, int> inputs9 = { 3, { 20,5,4 } };
const TfArray<1, int> outputs9 = { 1, { 21 } };
const TfLiteSoftmaxParams opdata10 = { 1 };
const TfArray<1, int> inputs10 = { 1, { 21 } };
const TfArray<1, int> outputs10 = { 1, { 22 } };
const TensorInfo_t tensorData[] = {
  { kTfLiteArenaRw, kTfLiteInt8, tensor_arena + 656, (TfLiteIntArray*)&tensor_dimension0, 650, {kTfLiteAffineQuantization, const_cast<void*>(static_cast<const void*>(&quant0))}, },
  { kTfLiteMmapRo, kTfLiteInt32, (void*)tensor_data1, (TfLiteIntArray*)&tensor_dimension1, 8, {kTfLiteNoQuantization, nullptr}, },
  { kTfLiteMmapRo, kTfLiteInt32, (void*)tensor_data2, (TfLiteIntArray*)&tensor_dimension2, 32, {kTfLiteAffineQuantization, const_cast<void*>(static_cast<const void*>(&quant2))}, },
  { kTfLiteMmapRo, kTfLiteInt32, (void*)tensor_data3, (TfLiteIntArray*)&tensor_dimension3, 64, {kTfLiteAffineQuantization, const_cast<void*>(static_cast<const void*>(&quant3))}, },
  { kTfLiteMmapRo, kTfLiteInt32, (void*)tensor_data4, (TfLiteIntArray*)&tensor_dimension4, 24, {kTfLiteAffineQuantization, const_cast<void*>(static_cast<const void*>(&quant4))}, },
  { kTfLiteMmapRo, kTfLiteInt8, (void*)tensor_data5, (TfLiteIntArray*)&tensor_dimension5, 1248, {kTfLiteAffineQuantization, const_cast<void*>(static_cast<const void*>(&quant5))}, },
  { kTfLiteMmapRo, kTfLiteInt8, (void*)tensor_data6, (TfLiteIntArray*)&tensor_dimension6, 312, {kTfLiteAffineQuantization, const_cast<void*>(static_cast<const void*>(&quant6))}, },
  { kTfLiteMmapRo, kTfLiteInt8, (void*)tensor_data7, (TfLiteIntArray*)&tensor_dimension7, 384, {kTfLiteAffineQuantization, const_cast<void*>(static_cast<const void*>(&quant7))}, },
  { kTfLiteMmapRo, kTfLiteInt32, (void*)tensor_data8, (TfLiteIntArray*)&tensor_dimension8, 16, {kTfLiteNoQuantization, nullptr}, },
  { kTfLiteMmapRo, kTfLiteInt32, (void*)tensor_data9, (TfLiteIntArray*)&tensor_dimension9, 16, {kTfLiteNoQuantization, nullptr}, },
  { kTfLiteMmapRo, kTfLiteInt32, (void*)tensor_data10, (TfLiteIntArray*)&tensor_dimension10, 16, {kTfLiteNoQuantization, nullptr}, },
  { kTfLiteMmapRo, kTfLiteInt32, (void*)tensor_data11, (TfLiteIntArray*)&tensor_dimension11, 16, {kTfLiteNoQuantization, nullptr}, },
  { kTfLiteArenaRw, kTfLiteInt8, tensor_arena + 0, (TfLiteIntArray*)&tensor_dimension12, 650, {kTfLiteAffineQuantization, const_cast<void*>(static_cast<const void*>(&quant12))}, },
  { kTfLiteArenaRw, kTfLiteInt8, tensor_arena + 656, (TfLiteIntArray*)&tensor_dimension13, 400, {kTfLiteAffineQuantization, const_cast<void*>(static_cast<const void*>(&quant13))}, },
  { kTfLiteArenaRw, kTfLiteInt8, tensor_arena + 0, (TfLiteIntArray*)&tensor_dimension14, 400, {kTfLiteAffineQuantization, const_cast<void*>(static_cast<const void*>(&quant14))}, },
  { kTfLiteArenaRw, kTfLiteInt8, tensor_arena + 400, (TfLiteIntArray*)&tensor_dimension15, 200, {kTfLiteAffineQuantization, const_cast<void*>(static_cast<const void*>(&quant15))}, },
  { kTfLiteArenaRw, kTfLiteInt8, tensor_arena + 0, (TfLiteIntArray*)&tensor_dimension16, 200, {kTfLiteAffineQuantization, const_cast<void*>(static_cast<const void*>(&quant16))}, },
  { kTfLiteArenaRw, kTfLiteInt8, tensor_arena + 400, (TfLiteIntArray*)&tensor_dimension17, 400, {kTfLiteAffineQuantization, const_cast<void*>(static_cast<const void*>(&quant17))}, },
  { kTfLiteArenaRw, kTfLiteInt8, tensor_arena + 0, (TfLiteIntArray*)&tensor_dimension18, 400, {kTfLiteAffineQuantization, const_cast<void*>(static_cast<const void*>(&quant18))}, },
  { kTfLiteArenaRw, kTfLiteInt8, tensor_arena + 400, (TfLiteIntArray*)&tensor_dimension19, 208, {kTfLiteAffineQuantization, const_cast<void*>(static_cast<const void*>(&quant19))}, },
  { kTfLiteArenaRw, kTfLiteInt8, tensor_arena + 0, (TfLiteIntArray*)&tensor_dimension20, 208, {kTfLiteAffineQuantization, const_cast<void*>(static_cast<const void*>(&quant20))}, },
  { kTfLiteArenaRw, kTfLiteInt8, tensor_arena + 208, (TfLiteIntArray*)&tensor_dimension21, 6, {kTfLiteAffineQuantization, const_cast<void*>(static_cast<const void*>(&quant21))}, },
  { kTfLiteArenaRw, kTfLiteInt8, tensor_arena + 0, (TfLiteIntArray*)&tensor_dimension22, 6, {kTfLiteAffineQuantization, const_cast<void*>(static_cast<const void*>(&quant22))}, },
};const NodeInfo_t nodeData[] = {
  { (TfLiteIntArray*)&inputs0, (TfLiteIntArray*)&outputs0, const_cast<void*>(static_cast<const void*>(&opdata0)), OP_RESHAPE, },
  { (TfLiteIntArray*)&inputs1, (TfLiteIntArray*)&outputs1, const_cast<void*>(static_cast<const void*>(&opdata1)), OP_CONV_2D, },
  { (TfLiteIntArray*)&inputs2, (TfLiteIntArray*)&outputs2, const_cast<void*>(static_cast<const void*>(&opdata2)), OP_RESHAPE, },
  { (TfLiteIntArray*)&inputs3, (TfLiteIntArray*)&outputs3, const_cast<void*>(static_cast<const void*>(&opdata3)), OP_MAX_POOL_2D, },
  { (TfLiteIntArray*)&inputs4, (TfLiteIntArray*)&outputs4, const_cast<void*>(static_cast<const void*>(&opdata4)), OP_RESHAPE, },
  { (TfLiteIntArray*)&inputs5, (TfLiteIntArray*)&outputs5, const_cast<void*>(static_cast<const void*>(&opdata5)), OP_CONV_2D, },
  { (TfLiteIntArray*)&inputs6, (TfLiteIntArray*)&outputs6, const_cast<void*>(static_cast<const void*>(&opdata6)), OP_RESHAPE, },
  { (TfLiteIntArray*)&inputs7, (TfLiteIntArray*)&outputs7, const_cast<void*>(static_cast<const void*>(&opdata7)), OP_MAX_POOL_2D, },
  { (TfLiteIntArray*)&inputs8, (TfLiteIntArray*)&outputs8, const_cast<void*>(static_cast<const void*>(&opdata8)), OP_RESHAPE, },
  { (TfLiteIntArray*)&inputs9, (TfLiteIntArray*)&outputs9, const_cast<void*>(static_cast<const void*>(&opdata9)), OP_FULLY_CONNECTED, },
  { (TfLiteIntArray*)&inputs10, (TfLiteIntArray*)&outputs10, const_cast<void*>(static_cast<const void*>(&opdata10)), OP_SOFTMAX, },
};
static std::vector<void*> overflow_buffers;
static TfLiteStatus AllocatePersistentBuffer(struct TfLiteContext* ctx,
                                                 size_t bytes, void** ptr) {
  if (current_location - bytes < tensor_boundary) {
    // OK, this will look super weird, but.... we have CMSIS-NN buffers which
    // we cannot calculate beforehand easily.
    *ptr = malloc(bytes);
    if (*ptr == NULL) {
      printf("ERR: Failed to allocate persistent buffer of size %d\n", (int)bytes);
      return kTfLiteError;
    }
    overflow_buffers.push_back(*ptr);
    return kTfLiteOk;
  }

  current_location -= bytes;

  *ptr = current_location;
  return kTfLiteOk;
}
typedef struct {
  size_t bytes;
  void *ptr;
} scratch_buffer_t;
static std::vector<scratch_buffer_t> scratch_buffers;

static TfLiteStatus RequestScratchBufferInArena(struct TfLiteContext* ctx, size_t bytes,
                                                int* buffer_idx) {
  scratch_buffer_t b;
  b.bytes = bytes;

  TfLiteStatus s = AllocatePersistentBuffer(ctx, b.bytes, &b.ptr);
  if (s != kTfLiteOk) {
    return s;
  }

  scratch_buffers.push_back(b);

  *buffer_idx = scratch_buffers.size() - 1;

  return kTfLiteOk;
}

static void* GetScratchBuffer(struct TfLiteContext* ctx, int buffer_idx) {
  if (buffer_idx > static_cast<int>(scratch_buffers.size()) - 1) {
    return NULL;
  }
  return scratch_buffers[buffer_idx].ptr;
}
} // namespace

  TfLiteStatus trained_model_init( void*(*alloc_fnc)(size_t,size_t) ) {
#ifdef EI_CLASSIFIER_ALLOCATION_HEAP
  tensor_arena = (uint8_t*) alloc_fnc(16, kTensorArenaSize);
  if (!tensor_arena) {
    printf("ERR: failed to allocate tensor arena\n");
    return kTfLiteError;
  }
#endif
  tensor_boundary = tensor_arena;
  current_location = tensor_arena + kTensorArenaSize;
  ctx.AllocatePersistentBuffer = &AllocatePersistentBuffer;
  ctx.RequestScratchBufferInArena = &RequestScratchBufferInArena;
  ctx.GetScratchBuffer = &GetScratchBuffer;
  ctx.tensors = tflTensors;
  ctx.tensors_size = 23;
  for(size_t i = 0; i < 23; ++i) {
    tflTensors[i].type = tensorData[i].type;
    tflTensors[i].is_variable = 0;

#if defined(EI_CLASSIFIER_ALLOCATION_HEAP)
    tflTensors[i].allocation_type = tensorData[i].allocation_type;
#else
    tflTensors[i].allocation_type = (tensor_arena <= tensorData[i].data && tensorData[i].data < tensor_arena + kTensorArenaSize) ? kTfLiteArenaRw : kTfLiteMmapRo;
#endif
    tflTensors[i].bytes = tensorData[i].bytes;
    tflTensors[i].dims = tensorData[i].dims;

#if defined(EI_CLASSIFIER_ALLOCATION_HEAP)
    if(tflTensors[i].allocation_type == kTfLiteArenaRw){
      uint8_t* start = (uint8_t*) ((uintptr_t)tensorData[i].data + (uintptr_t) tensor_arena);

     tflTensors[i].data.data =  start;
    }
    else{
       tflTensors[i].data.data = tensorData[i].data;
    }
#else
    tflTensors[i].data.data = tensorData[i].data;
#endif // EI_CLASSIFIER_ALLOCATION_HEAP
    tflTensors[i].quantization = tensorData[i].quantization;
    if (tflTensors[i].quantization.type == kTfLiteAffineQuantization) {
      TfLiteAffineQuantization const* quant = ((TfLiteAffineQuantization const*)(tensorData[i].quantization.params));
      tflTensors[i].params.scale = quant->scale->data[0];
      tflTensors[i].params.zero_point = quant->zero_point->data[0];
    }
    if (tflTensors[i].allocation_type == kTfLiteArenaRw) {
      auto data_end_ptr = (uint8_t*)tflTensors[i].data.data + tensorData[i].bytes;
      if (data_end_ptr > tensor_boundary) {
        tensor_boundary = data_end_ptr;
      }
    }
  }
  if (tensor_boundary > current_location /* end of arena size */) {
    printf("ERR: tensor arena is too small, does not fit model - even without scratch buffers\n");
    return kTfLiteError;
  }
  registrations[OP_RESHAPE] = *tflite::ops::micro::Register_RESHAPE();
  registrations[OP_CONV_2D] = *tflite::ops::micro::Register_CONV_2D();
  registrations[OP_MAX_POOL_2D] = *tflite::ops::micro::Register_MAX_POOL_2D();
  registrations[OP_FULLY_CONNECTED] = *tflite::ops::micro::Register_FULLY_CONNECTED();
  registrations[OP_SOFTMAX] = *tflite::ops::micro::Register_SOFTMAX();

  for(size_t i = 0; i < 11; ++i) {
    tflNodes[i].inputs = nodeData[i].inputs;
    tflNodes[i].outputs = nodeData[i].outputs;
    tflNodes[i].builtin_data = nodeData[i].builtin_data;
    tflNodes[i].custom_initial_data = nullptr;
    tflNodes[i].custom_initial_data_size = 0;
    if (registrations[nodeData[i].used_op_index].init) {
      tflNodes[i].user_data = registrations[nodeData[i].used_op_index].init(&ctx, (const char*)tflNodes[i].builtin_data, 0);
    }
  }
  for(size_t i = 0; i < 11; ++i) {
    if (registrations[nodeData[i].used_op_index].prepare) {
      TfLiteStatus status = registrations[nodeData[i].used_op_index].prepare(&ctx, &tflNodes[i]);
      if (status != kTfLiteOk) {
        return status;
      }
    }
  }
  return kTfLiteOk;
}

static const int inTensorIndices[] = {
  0, 
};
TfLiteTensor* trained_model_input(int index) {
  return &ctx.tensors[inTensorIndices[index]];
}

static const int outTensorIndices[] = {
  22, 
};
TfLiteTensor* trained_model_output(int index) {
  return &ctx.tensors[outTensorIndices[index]];
}

TfLiteStatus trained_model_invoke() {
  for(size_t i = 0; i < 11; ++i) {
    TfLiteStatus status = registrations[nodeData[i].used_op_index].invoke(&ctx, &tflNodes[i]);

#if EI_CLASSIFIER_PRINT_STATE
    ei_printf("layer %lu\n", i);
    ei_printf("    inputs:\n");
    for (size_t ix = 0; ix < tflNodes[i].inputs->size; ix++) {
      auto d = tensorData[tflNodes[i].inputs->data[ix]];

      size_t data_ptr = (size_t)d.data;

      if (d.allocation_type == kTfLiteArenaRw) {
        data_ptr = (size_t)tensor_arena + data_ptr;
      }

      if (d.type == TfLiteType::kTfLiteInt8) {
        int8_t* data = (int8_t*)data_ptr;
        ei_printf("        %lu (%zu bytes, ptr=%p, alloc_type=%d, type=%d): ", ix, d.bytes, data, (int)d.allocation_type, (int)d.type);
        for (size_t jx = 0; jx < d.bytes; jx++) {
          ei_printf("%d ", data[jx]);
        }
      }
      else {
        float* data = (float*)data_ptr;
        ei_printf("        %lu (%zu bytes, ptr=%p, alloc_type=%d, type=%d): ", ix, d.bytes, data, (int)d.allocation_type, (int)d.type);
        for (size_t jx = 0; jx < d.bytes / 4; jx++) {
          ei_printf("%f ", data[jx]);
        }
      }
      ei_printf("\n");
    }
    ei_printf("\n");

    ei_printf("    outputs:\n");
    for (size_t ix = 0; ix < tflNodes[i].outputs->size; ix++) {
      auto d = tensorData[tflNodes[i].outputs->data[ix]];

      size_t data_ptr = (size_t)d.data;

      if (d.allocation_type == kTfLiteArenaRw) {
        data_ptr = (size_t)tensor_arena + data_ptr;
      }

      if (d.type == TfLiteType::kTfLiteInt8) {
        int8_t* data = (int8_t*)data_ptr;
        ei_printf("        %lu (%zu bytes, ptr=%p, alloc_type=%d, type=%d): ", ix, d.bytes, data, (int)d.allocation_type, (int)d.type);
        for (size_t jx = 0; jx < d.bytes; jx++) {
          ei_printf("%d ", data[jx]);
        }
      }
      else {
        float* data = (float*)data_ptr;
        ei_printf("        %lu (%zu bytes, ptr=%p, alloc_type=%d, type=%d): ", ix, d.bytes, data, (int)d.allocation_type, (int)d.type);
        for (size_t jx = 0; jx < d.bytes / 4; jx++) {
          ei_printf("%f ", data[jx]);
        }
      }
      ei_printf("\n");
    }
    ei_printf("\n");
#endif // EI_CLASSIFIER_PRINT_STATE

    if (status != kTfLiteOk) {
      return status;
    }
  }
  return kTfLiteOk;
}

TfLiteStatus trained_model_reset( void (*free_fnc)(void* ptr) ) {
#ifdef EI_CLASSIFIER_ALLOCATION_HEAP
  free_fnc(tensor_arena);
#endif
  scratch_buffers.clear();
  for (size_t ix = 0; ix < overflow_buffers.size(); ix++) {
    free(overflow_buffers[ix]);
  }
  overflow_buffers.clear();
  return kTfLiteOk;
}
