# automatically generated by the FlatBuffers compiler, do not modify

# namespace: 

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class StringValue(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAs(cls, buf, offset=0):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = StringValue()
        x.Init(buf, n + offset)
        return x

    @classmethod
    def GetRootAsStringValue(cls, buf, offset=0):
        """This method is deprecated. Please switch to GetRootAs."""
        return cls.GetRootAs(buf, offset)
    # StringValue
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # StringValue
    def Data(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.String(o + self._tab.Pos)
        return None

def Start(builder): builder.StartObject(1)
def StringValueStart(builder):
    """This method is deprecated. Please switch to Start."""
    return Start(builder)
def AddData(builder, data): builder.PrependUOffsetTRelativeSlot(0, flatbuffers.number_types.UOffsetTFlags.py_type(data), 0)
def StringValueAddData(builder, data):
    """This method is deprecated. Please switch to AddData."""
    return AddData(builder, data)
def End(builder): return builder.EndObject()
def StringValueEnd(builder):
    """This method is deprecated. Please switch to End."""
    return End(builder)