var s_op_hcompute_hw_input_global_wrapper_stencil, integer;
var s_op_hcompute_hw_output_stencil, integer;
s.t. c0 : 1*s_op_hcompute_hw_output_stencil + 0*s_op_hcompute_hw_input_global_wrapper_stencil + -1>= 0;
s.t. c1 : -1*s_op_hcompute_hw_output_stencil + 1*s_op_hcompute_hw_input_global_wrapper_stencil + 0>= 0;
s.t. c2 : 1*s_op_hcompute_hw_output_stencil + -1*s_op_hcompute_hw_input_global_wrapper_stencil + 0>= 0;
minimize obj: 1*s_op_hcompute_hw_input_global_wrapper_stencil + 1*s_op_hcompute_hw_output_stencil;
solve;printf "s_op_hcompute_hw_input_global_wrapper_stencil = %d\n", s_op_hcompute_hw_input_global_wrapper_stencil;
printf "s_op_hcompute_hw_output_stencil = %d\n", s_op_hcompute_hw_output_stencil;
end;
