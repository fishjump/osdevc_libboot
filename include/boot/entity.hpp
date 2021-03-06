#pragma once

namespace system::boot::entity {
class GraphicInfo {
public:
    const unsigned int HorizontalResolution;
    const unsigned int VerticalResolution;
    const unsigned int PixelsPerScanLine;

    const int *         FrameBufferBase;
    const unsigned long FrameBufferSize;
};

class MemoryDescriptor {
public:
    void *        address;
    unsigned long length;
    unsigned int  type;
} __attribute__((packed));

class MemoryInfo {
public:
    const unsigned int     count;
    const MemoryDescriptor descriptors[];
};

class BootInfo {
public:
    const GraphicInfo graphicInfo;
    const MemoryInfo  memoryInfo;
};

} // namespace system::boot::entity
