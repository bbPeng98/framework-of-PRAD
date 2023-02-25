module coreir_ule #(
    parameter width = 1
) (
    input [width-1:0] in0,
    input [width-1:0] in1,
    output out
);
  assign out = in0 <= in1;
endmodule

module TestBinary (
    input [2:0] I0,
    input [2:0] I1,
    output O
);
wire magma_UInt_3_ule_inst0_out;
coreir_ule #(
    .width(3)
) magma_UInt_3_ule_inst0 (
    .in0(I0),
    .in1(I1),
    .out(magma_UInt_3_ule_inst0_out)
);
assign O = magma_UInt_3_ule_inst0_out;
endmodule

