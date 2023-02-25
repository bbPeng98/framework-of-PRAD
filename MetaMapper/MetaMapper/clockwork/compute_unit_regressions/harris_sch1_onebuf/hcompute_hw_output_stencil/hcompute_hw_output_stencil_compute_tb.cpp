#include "hw_classes.h"
#include <fstream>
#include "verilated.h"
#include "Vhcompute_hw_output_stencil.h"

#include "harris_sch1_onebuf_compute.h"

int main() {
  cout << "\tStarting compute unit test" << endl;
  Vhcompute_hw_output_stencil dut;
  srand(1);
  for (int i = 0; i < 10000; i++) {
    int in0_padded16_global_wrapper_stencil_0 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_0_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_0);
    (dut.in0_padded16_global_wrapper_stencil)[0] = in0_padded16_global_wrapper_stencil_0;
    int in0_padded16_global_wrapper_stencil_1 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_1_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_1);
    (dut.in0_padded16_global_wrapper_stencil)[1] = in0_padded16_global_wrapper_stencil_1;
    int in0_padded16_global_wrapper_stencil_2 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_2_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_2);
    (dut.in0_padded16_global_wrapper_stencil)[2] = in0_padded16_global_wrapper_stencil_2;
    int in0_padded16_global_wrapper_stencil_3 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_3_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_3);
    (dut.in0_padded16_global_wrapper_stencil)[3] = in0_padded16_global_wrapper_stencil_3;
    int in0_padded16_global_wrapper_stencil_4 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_4_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_4);
    (dut.in0_padded16_global_wrapper_stencil)[4] = in0_padded16_global_wrapper_stencil_4;
    int in0_padded16_global_wrapper_stencil_5 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_5_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_5);
    (dut.in0_padded16_global_wrapper_stencil)[5] = in0_padded16_global_wrapper_stencil_5;
    int in0_padded16_global_wrapper_stencil_6 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_6_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_6);
    (dut.in0_padded16_global_wrapper_stencil)[6] = in0_padded16_global_wrapper_stencil_6;
    int in0_padded16_global_wrapper_stencil_7 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_7_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_7);
    (dut.in0_padded16_global_wrapper_stencil)[7] = in0_padded16_global_wrapper_stencil_7;
    int in0_padded16_global_wrapper_stencil_8 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_8_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_8);
    (dut.in0_padded16_global_wrapper_stencil)[8] = in0_padded16_global_wrapper_stencil_8;
    int in0_padded16_global_wrapper_stencil_9 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_9_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_9);
    (dut.in0_padded16_global_wrapper_stencil)[9] = in0_padded16_global_wrapper_stencil_9;
    int in0_padded16_global_wrapper_stencil_10 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_10_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_10);
    (dut.in0_padded16_global_wrapper_stencil)[10] = in0_padded16_global_wrapper_stencil_10;
    int in0_padded16_global_wrapper_stencil_11 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_11_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_11);
    (dut.in0_padded16_global_wrapper_stencil)[11] = in0_padded16_global_wrapper_stencil_11;
    int in0_padded16_global_wrapper_stencil_12 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_12_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_12);
    (dut.in0_padded16_global_wrapper_stencil)[12] = in0_padded16_global_wrapper_stencil_12;
    int in0_padded16_global_wrapper_stencil_13 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_13_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_13);
    (dut.in0_padded16_global_wrapper_stencil)[13] = in0_padded16_global_wrapper_stencil_13;
    int in0_padded16_global_wrapper_stencil_14 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_14_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_14);
    (dut.in0_padded16_global_wrapper_stencil)[14] = in0_padded16_global_wrapper_stencil_14;
    int in0_padded16_global_wrapper_stencil_15 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_15_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_15);
    (dut.in0_padded16_global_wrapper_stencil)[15] = in0_padded16_global_wrapper_stencil_15;
    int in0_padded16_global_wrapper_stencil_16 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_16_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_16);
    (dut.in0_padded16_global_wrapper_stencil)[16] = in0_padded16_global_wrapper_stencil_16;
    int in0_padded16_global_wrapper_stencil_17 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_17_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_17);
    (dut.in0_padded16_global_wrapper_stencil)[17] = in0_padded16_global_wrapper_stencil_17;
    int in0_padded16_global_wrapper_stencil_18 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_18_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_18);
    (dut.in0_padded16_global_wrapper_stencil)[18] = in0_padded16_global_wrapper_stencil_18;
    int in0_padded16_global_wrapper_stencil_19 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_19_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_19);
    (dut.in0_padded16_global_wrapper_stencil)[19] = in0_padded16_global_wrapper_stencil_19;
    int in0_padded16_global_wrapper_stencil_20 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_20_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_20);
    (dut.in0_padded16_global_wrapper_stencil)[20] = in0_padded16_global_wrapper_stencil_20;
    int in0_padded16_global_wrapper_stencil_21 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_21_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_21);
    (dut.in0_padded16_global_wrapper_stencil)[21] = in0_padded16_global_wrapper_stencil_21;
    int in0_padded16_global_wrapper_stencil_22 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_22_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_22);
    (dut.in0_padded16_global_wrapper_stencil)[22] = in0_padded16_global_wrapper_stencil_22;
    int in0_padded16_global_wrapper_stencil_23 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_23_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_23);
    (dut.in0_padded16_global_wrapper_stencil)[23] = in0_padded16_global_wrapper_stencil_23;
    int in0_padded16_global_wrapper_stencil_24 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_24_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_24);
    (dut.in0_padded16_global_wrapper_stencil)[24] = in0_padded16_global_wrapper_stencil_24;
    int in0_padded16_global_wrapper_stencil_25 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_25_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_25);
    (dut.in0_padded16_global_wrapper_stencil)[25] = in0_padded16_global_wrapper_stencil_25;
    int in0_padded16_global_wrapper_stencil_26 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_26_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_26);
    (dut.in0_padded16_global_wrapper_stencil)[26] = in0_padded16_global_wrapper_stencil_26;
    int in0_padded16_global_wrapper_stencil_27 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_27_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_27);
    (dut.in0_padded16_global_wrapper_stencil)[27] = in0_padded16_global_wrapper_stencil_27;
    int in0_padded16_global_wrapper_stencil_28 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_28_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_28);
    (dut.in0_padded16_global_wrapper_stencil)[28] = in0_padded16_global_wrapper_stencil_28;
    int in0_padded16_global_wrapper_stencil_29 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_29_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_29);
    (dut.in0_padded16_global_wrapper_stencil)[29] = in0_padded16_global_wrapper_stencil_29;
    int in0_padded16_global_wrapper_stencil_30 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_30_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_30);
    (dut.in0_padded16_global_wrapper_stencil)[30] = in0_padded16_global_wrapper_stencil_30;
    int in0_padded16_global_wrapper_stencil_31 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_31_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_31);
    (dut.in0_padded16_global_wrapper_stencil)[31] = in0_padded16_global_wrapper_stencil_31;
    int in0_padded16_global_wrapper_stencil_32 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_32_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_32);
    (dut.in0_padded16_global_wrapper_stencil)[32] = in0_padded16_global_wrapper_stencil_32;
    int in0_padded16_global_wrapper_stencil_33 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_33_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_33);
    (dut.in0_padded16_global_wrapper_stencil)[33] = in0_padded16_global_wrapper_stencil_33;
    int in0_padded16_global_wrapper_stencil_34 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_34_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_34);
    (dut.in0_padded16_global_wrapper_stencil)[34] = in0_padded16_global_wrapper_stencil_34;
    int in0_padded16_global_wrapper_stencil_35 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_35_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_35);
    (dut.in0_padded16_global_wrapper_stencil)[35] = in0_padded16_global_wrapper_stencil_35;
    int in0_padded16_global_wrapper_stencil_36 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_36_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_36);
    (dut.in0_padded16_global_wrapper_stencil)[36] = in0_padded16_global_wrapper_stencil_36;
    int in0_padded16_global_wrapper_stencil_37 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_37_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_37);
    (dut.in0_padded16_global_wrapper_stencil)[37] = in0_padded16_global_wrapper_stencil_37;
    int in0_padded16_global_wrapper_stencil_38 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_38_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_38);
    (dut.in0_padded16_global_wrapper_stencil)[38] = in0_padded16_global_wrapper_stencil_38;
    int in0_padded16_global_wrapper_stencil_39 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_39_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_39);
    (dut.in0_padded16_global_wrapper_stencil)[39] = in0_padded16_global_wrapper_stencil_39;
    int in0_padded16_global_wrapper_stencil_40 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_40_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_40);
    (dut.in0_padded16_global_wrapper_stencil)[40] = in0_padded16_global_wrapper_stencil_40;
    int in0_padded16_global_wrapper_stencil_41 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_41_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_41);
    (dut.in0_padded16_global_wrapper_stencil)[41] = in0_padded16_global_wrapper_stencil_41;
    int in0_padded16_global_wrapper_stencil_42 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_42_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_42);
    (dut.in0_padded16_global_wrapper_stencil)[42] = in0_padded16_global_wrapper_stencil_42;
    int in0_padded16_global_wrapper_stencil_43 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_43_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_43);
    (dut.in0_padded16_global_wrapper_stencil)[43] = in0_padded16_global_wrapper_stencil_43;
    int in0_padded16_global_wrapper_stencil_44 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_44_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_44);
    (dut.in0_padded16_global_wrapper_stencil)[44] = in0_padded16_global_wrapper_stencil_44;
    int in0_padded16_global_wrapper_stencil_45 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_45_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_45);
    (dut.in0_padded16_global_wrapper_stencil)[45] = in0_padded16_global_wrapper_stencil_45;
    int in0_padded16_global_wrapper_stencil_46 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_46_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_46);
    (dut.in0_padded16_global_wrapper_stencil)[46] = in0_padded16_global_wrapper_stencil_46;
    int in0_padded16_global_wrapper_stencil_47 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_47_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_47);
    (dut.in0_padded16_global_wrapper_stencil)[47] = in0_padded16_global_wrapper_stencil_47;
    int in0_padded16_global_wrapper_stencil_48 = rand() % 65536;
    hw_uint<16> in0_padded16_global_wrapper_stencil_48_hwint = hw_uint<16>(in0_padded16_global_wrapper_stencil_48);
    (dut.in0_padded16_global_wrapper_stencil)[48] = in0_padded16_global_wrapper_stencil_48;
    hw_uint<784 > in0_padded16_global_wrapper_stencil_packed;
    set_at<0, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_0_hwint);
    set_at<16, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_1_hwint);
    set_at<32, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_2_hwint);
    set_at<48, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_3_hwint);
    set_at<64, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_4_hwint);
    set_at<80, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_5_hwint);
    set_at<96, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_6_hwint);
    set_at<112, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_7_hwint);
    set_at<128, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_8_hwint);
    set_at<144, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_9_hwint);
    set_at<160, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_10_hwint);
    set_at<176, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_11_hwint);
    set_at<192, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_12_hwint);
    set_at<208, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_13_hwint);
    set_at<224, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_14_hwint);
    set_at<240, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_15_hwint);
    set_at<256, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_16_hwint);
    set_at<272, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_17_hwint);
    set_at<288, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_18_hwint);
    set_at<304, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_19_hwint);
    set_at<320, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_20_hwint);
    set_at<336, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_21_hwint);
    set_at<352, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_22_hwint);
    set_at<368, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_23_hwint);
    set_at<384, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_24_hwint);
    set_at<400, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_25_hwint);
    set_at<416, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_26_hwint);
    set_at<432, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_27_hwint);
    set_at<448, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_28_hwint);
    set_at<464, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_29_hwint);
    set_at<480, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_30_hwint);
    set_at<496, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_31_hwint);
    set_at<512, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_32_hwint);
    set_at<528, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_33_hwint);
    set_at<544, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_34_hwint);
    set_at<560, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_35_hwint);
    set_at<576, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_36_hwint);
    set_at<592, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_37_hwint);
    set_at<608, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_38_hwint);
    set_at<624, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_39_hwint);
    set_at<640, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_40_hwint);
    set_at<656, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_41_hwint);
    set_at<672, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_42_hwint);
    set_at<688, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_43_hwint);
    set_at<704, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_44_hwint);
    set_at<720, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_45_hwint);
    set_at<736, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_46_hwint);
    set_at<752, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_47_hwint);
    set_at<768, 784, 16>(in0_padded16_global_wrapper_stencil_packed, in0_padded16_global_wrapper_stencil_48_hwint);
    dut.eval();
    dut.eval();
    int coreir_result = dut.out_hw_output_stencil;
    int cpp_result = hcompute_hw_output_stencil(in0_padded16_global_wrapper_stencil_packed).to_int();
    if (coreir_result != cpp_result) {
      cout << "ERROR in compute unit: hcompute_hw_output_stencil" << endl;
    cout << "in0_padded16_global_wrapper_stencil[0] -> " << in0_padded16_global_wrapper_stencil_0 << endl;
    cout << "in0_padded16_global_wrapper_stencil[0] -> " << in0_padded16_global_wrapper_stencil_0_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[1] -> " << in0_padded16_global_wrapper_stencil_1 << endl;
    cout << "in0_padded16_global_wrapper_stencil[1] -> " << in0_padded16_global_wrapper_stencil_1_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[2] -> " << in0_padded16_global_wrapper_stencil_2 << endl;
    cout << "in0_padded16_global_wrapper_stencil[2] -> " << in0_padded16_global_wrapper_stencil_2_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[3] -> " << in0_padded16_global_wrapper_stencil_3 << endl;
    cout << "in0_padded16_global_wrapper_stencil[3] -> " << in0_padded16_global_wrapper_stencil_3_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[4] -> " << in0_padded16_global_wrapper_stencil_4 << endl;
    cout << "in0_padded16_global_wrapper_stencil[4] -> " << in0_padded16_global_wrapper_stencil_4_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[5] -> " << in0_padded16_global_wrapper_stencil_5 << endl;
    cout << "in0_padded16_global_wrapper_stencil[5] -> " << in0_padded16_global_wrapper_stencil_5_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[6] -> " << in0_padded16_global_wrapper_stencil_6 << endl;
    cout << "in0_padded16_global_wrapper_stencil[6] -> " << in0_padded16_global_wrapper_stencil_6_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[7] -> " << in0_padded16_global_wrapper_stencil_7 << endl;
    cout << "in0_padded16_global_wrapper_stencil[7] -> " << in0_padded16_global_wrapper_stencil_7_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[8] -> " << in0_padded16_global_wrapper_stencil_8 << endl;
    cout << "in0_padded16_global_wrapper_stencil[8] -> " << in0_padded16_global_wrapper_stencil_8_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[9] -> " << in0_padded16_global_wrapper_stencil_9 << endl;
    cout << "in0_padded16_global_wrapper_stencil[9] -> " << in0_padded16_global_wrapper_stencil_9_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[10] -> " << in0_padded16_global_wrapper_stencil_10 << endl;
    cout << "in0_padded16_global_wrapper_stencil[10] -> " << in0_padded16_global_wrapper_stencil_10_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[11] -> " << in0_padded16_global_wrapper_stencil_11 << endl;
    cout << "in0_padded16_global_wrapper_stencil[11] -> " << in0_padded16_global_wrapper_stencil_11_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[12] -> " << in0_padded16_global_wrapper_stencil_12 << endl;
    cout << "in0_padded16_global_wrapper_stencil[12] -> " << in0_padded16_global_wrapper_stencil_12_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[13] -> " << in0_padded16_global_wrapper_stencil_13 << endl;
    cout << "in0_padded16_global_wrapper_stencil[13] -> " << in0_padded16_global_wrapper_stencil_13_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[14] -> " << in0_padded16_global_wrapper_stencil_14 << endl;
    cout << "in0_padded16_global_wrapper_stencil[14] -> " << in0_padded16_global_wrapper_stencil_14_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[15] -> " << in0_padded16_global_wrapper_stencil_15 << endl;
    cout << "in0_padded16_global_wrapper_stencil[15] -> " << in0_padded16_global_wrapper_stencil_15_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[16] -> " << in0_padded16_global_wrapper_stencil_16 << endl;
    cout << "in0_padded16_global_wrapper_stencil[16] -> " << in0_padded16_global_wrapper_stencil_16_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[17] -> " << in0_padded16_global_wrapper_stencil_17 << endl;
    cout << "in0_padded16_global_wrapper_stencil[17] -> " << in0_padded16_global_wrapper_stencil_17_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[18] -> " << in0_padded16_global_wrapper_stencil_18 << endl;
    cout << "in0_padded16_global_wrapper_stencil[18] -> " << in0_padded16_global_wrapper_stencil_18_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[19] -> " << in0_padded16_global_wrapper_stencil_19 << endl;
    cout << "in0_padded16_global_wrapper_stencil[19] -> " << in0_padded16_global_wrapper_stencil_19_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[20] -> " << in0_padded16_global_wrapper_stencil_20 << endl;
    cout << "in0_padded16_global_wrapper_stencil[20] -> " << in0_padded16_global_wrapper_stencil_20_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[21] -> " << in0_padded16_global_wrapper_stencil_21 << endl;
    cout << "in0_padded16_global_wrapper_stencil[21] -> " << in0_padded16_global_wrapper_stencil_21_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[22] -> " << in0_padded16_global_wrapper_stencil_22 << endl;
    cout << "in0_padded16_global_wrapper_stencil[22] -> " << in0_padded16_global_wrapper_stencil_22_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[23] -> " << in0_padded16_global_wrapper_stencil_23 << endl;
    cout << "in0_padded16_global_wrapper_stencil[23] -> " << in0_padded16_global_wrapper_stencil_23_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[24] -> " << in0_padded16_global_wrapper_stencil_24 << endl;
    cout << "in0_padded16_global_wrapper_stencil[24] -> " << in0_padded16_global_wrapper_stencil_24_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[25] -> " << in0_padded16_global_wrapper_stencil_25 << endl;
    cout << "in0_padded16_global_wrapper_stencil[25] -> " << in0_padded16_global_wrapper_stencil_25_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[26] -> " << in0_padded16_global_wrapper_stencil_26 << endl;
    cout << "in0_padded16_global_wrapper_stencil[26] -> " << in0_padded16_global_wrapper_stencil_26_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[27] -> " << in0_padded16_global_wrapper_stencil_27 << endl;
    cout << "in0_padded16_global_wrapper_stencil[27] -> " << in0_padded16_global_wrapper_stencil_27_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[28] -> " << in0_padded16_global_wrapper_stencil_28 << endl;
    cout << "in0_padded16_global_wrapper_stencil[28] -> " << in0_padded16_global_wrapper_stencil_28_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[29] -> " << in0_padded16_global_wrapper_stencil_29 << endl;
    cout << "in0_padded16_global_wrapper_stencil[29] -> " << in0_padded16_global_wrapper_stencil_29_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[30] -> " << in0_padded16_global_wrapper_stencil_30 << endl;
    cout << "in0_padded16_global_wrapper_stencil[30] -> " << in0_padded16_global_wrapper_stencil_30_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[31] -> " << in0_padded16_global_wrapper_stencil_31 << endl;
    cout << "in0_padded16_global_wrapper_stencil[31] -> " << in0_padded16_global_wrapper_stencil_31_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[32] -> " << in0_padded16_global_wrapper_stencil_32 << endl;
    cout << "in0_padded16_global_wrapper_stencil[32] -> " << in0_padded16_global_wrapper_stencil_32_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[33] -> " << in0_padded16_global_wrapper_stencil_33 << endl;
    cout << "in0_padded16_global_wrapper_stencil[33] -> " << in0_padded16_global_wrapper_stencil_33_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[34] -> " << in0_padded16_global_wrapper_stencil_34 << endl;
    cout << "in0_padded16_global_wrapper_stencil[34] -> " << in0_padded16_global_wrapper_stencil_34_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[35] -> " << in0_padded16_global_wrapper_stencil_35 << endl;
    cout << "in0_padded16_global_wrapper_stencil[35] -> " << in0_padded16_global_wrapper_stencil_35_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[36] -> " << in0_padded16_global_wrapper_stencil_36 << endl;
    cout << "in0_padded16_global_wrapper_stencil[36] -> " << in0_padded16_global_wrapper_stencil_36_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[37] -> " << in0_padded16_global_wrapper_stencil_37 << endl;
    cout << "in0_padded16_global_wrapper_stencil[37] -> " << in0_padded16_global_wrapper_stencil_37_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[38] -> " << in0_padded16_global_wrapper_stencil_38 << endl;
    cout << "in0_padded16_global_wrapper_stencil[38] -> " << in0_padded16_global_wrapper_stencil_38_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[39] -> " << in0_padded16_global_wrapper_stencil_39 << endl;
    cout << "in0_padded16_global_wrapper_stencil[39] -> " << in0_padded16_global_wrapper_stencil_39_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[40] -> " << in0_padded16_global_wrapper_stencil_40 << endl;
    cout << "in0_padded16_global_wrapper_stencil[40] -> " << in0_padded16_global_wrapper_stencil_40_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[41] -> " << in0_padded16_global_wrapper_stencil_41 << endl;
    cout << "in0_padded16_global_wrapper_stencil[41] -> " << in0_padded16_global_wrapper_stencil_41_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[42] -> " << in0_padded16_global_wrapper_stencil_42 << endl;
    cout << "in0_padded16_global_wrapper_stencil[42] -> " << in0_padded16_global_wrapper_stencil_42_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[43] -> " << in0_padded16_global_wrapper_stencil_43 << endl;
    cout << "in0_padded16_global_wrapper_stencil[43] -> " << in0_padded16_global_wrapper_stencil_43_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[44] -> " << in0_padded16_global_wrapper_stencil_44 << endl;
    cout << "in0_padded16_global_wrapper_stencil[44] -> " << in0_padded16_global_wrapper_stencil_44_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[45] -> " << in0_padded16_global_wrapper_stencil_45 << endl;
    cout << "in0_padded16_global_wrapper_stencil[45] -> " << in0_padded16_global_wrapper_stencil_45_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[46] -> " << in0_padded16_global_wrapper_stencil_46 << endl;
    cout << "in0_padded16_global_wrapper_stencil[46] -> " << in0_padded16_global_wrapper_stencil_46_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[47] -> " << in0_padded16_global_wrapper_stencil_47 << endl;
    cout << "in0_padded16_global_wrapper_stencil[47] -> " << in0_padded16_global_wrapper_stencil_47_hwint << endl;
    cout << "in0_padded16_global_wrapper_stencil[48] -> " << in0_padded16_global_wrapper_stencil_48 << endl;
    cout << "in0_padded16_global_wrapper_stencil[48] -> " << in0_padded16_global_wrapper_stencil_48_hwint << endl;
      cout << "\tcoreir_result: " << coreir_result << endl;
      cout << "\tcpp_result   : " << cpp_result << endl;
      return -1;
    }
    assert(coreir_result == cpp_result);
  }

  return 0;
}
