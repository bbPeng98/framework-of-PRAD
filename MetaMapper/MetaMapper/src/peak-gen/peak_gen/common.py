from peak.family import MagmaFamily, SMTFamily

from hwtypes import make_modifier, BitVector
from hwtypes import SMTFPVector, FPVector, RoundingMode
from hwtypes import SMTBit
import magma

# Current PE has 16-bit data path
# DATAWIDTH = 32
def BFloat16_fc(family):
    if isinstance(family, MagmaFamily):
        BFloat16 =  magma.BFloat[16]
        BFloat16.reinterpret_from_bv = lambda bv: BFloat16(bv)
        BFloat16.reinterpret_as_bv = lambda f: magma.Bits[16](f)
        return BFloat16
    elif isinstance(family, SMTFamily):
        FPV = SMTFPVector
    else:
        FPV = FPVector
    BFloat16 = FPV[8, 7, RoundingMode.RNE, False]
    return BFloat16

# Global signal modifier.
Global = make_modifier("Global")

# DATA01_ADDR = 3
# BIT012_ADDR = 4
# DATA0_START = 0
# DATA0_WIDTH = DATAWIDTH
# DATA1_START = 16
# DATA1_WIDTH = DATAWIDTH
# BIT0_START = 0
# BIT1_START = 1
# BIT2_START = 2


