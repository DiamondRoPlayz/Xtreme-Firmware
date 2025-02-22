#include "_protocols.h"

const Protocol* protocols[] = {
    &protocol_continuity,
    &protocol_fastpair,
    &protocol_smartthings,
    &protocol_swiftpair,
};

const size_t protocols_count = COUNT_OF(protocols);
