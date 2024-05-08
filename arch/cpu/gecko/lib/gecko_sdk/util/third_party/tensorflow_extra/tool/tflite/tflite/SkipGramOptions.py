# automatically generated by the FlatBuffers compiler, do not modify

# namespace: tflite

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class SkipGramOptions(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAsSkipGramOptions(cls, buf, offset=0):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = SkipGramOptions()
        x.Init(buf, n + offset)
        return x

    @classmethod
    def SkipGramOptionsBufferHasIdentifier(cls, buf, offset, size_prefixed=False):
        return flatbuffers.util.BufferHasIdentifier(buf, offset, b"\x54\x46\x4C\x33", size_prefixed=size_prefixed)

    # SkipGramOptions
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # SkipGramOptions
    def NgramSize(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int32Flags, o + self._tab.Pos)
        return 0

    # SkipGramOptions
    def MaxSkipSize(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int32Flags, o + self._tab.Pos)
        return 0

    # SkipGramOptions
    def IncludeAllNgrams(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            return bool(self._tab.Get(flatbuffers.number_types.BoolFlags, o + self._tab.Pos))
        return False

def SkipGramOptionsStart(builder): builder.StartObject(3)
def SkipGramOptionsAddNgramSize(builder, ngramSize): builder.PrependInt32Slot(0, ngramSize, 0)
def SkipGramOptionsAddMaxSkipSize(builder, maxSkipSize): builder.PrependInt32Slot(1, maxSkipSize, 0)
def SkipGramOptionsAddIncludeAllNgrams(builder, includeAllNgrams): builder.PrependBoolSlot(2, includeAllNgrams, 0)
def SkipGramOptionsEnd(builder): return builder.EndObject()
