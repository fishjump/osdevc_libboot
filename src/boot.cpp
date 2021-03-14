#include <boot/boot.hpp>
#include <memory/memory.hpp>

namespace
{
    const system::boot::entity::BootInfo *bootInfo = (system::boot::entity::BootInfo *)(PHYICAL_TO_VIRTUAL_ADDR(0x60000));
} // namespace

namespace system::boot
{
    const entity::BootInfo *getBootInfo()
    {
        return bootInfo;
    }
} // namespace system::boot
