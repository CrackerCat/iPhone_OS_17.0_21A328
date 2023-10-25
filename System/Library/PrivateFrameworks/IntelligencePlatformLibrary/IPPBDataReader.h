//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface IPPBDataReader : NSObject
{
    unsigned long long _pos;	// 8 = 0x8
    long long _error;	// 16 = 0x10
    const char *_bytes;	// 24 = 0x18
    NSData *_data;	// 32 = 0x20
    unsigned long long _length;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000046d4
@property(nonatomic) unsigned long long position; // @synthesize position=_pos;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
- (id)readBigEndianShortThenString;	// IMP=0x000000000000460c
- (id)readBytes:(unsigned int)arg1;	// IMP=0x00000000000045a1
- (void)recall:(const CDStruct_4bcfbbae *)arg1;	// IMP=0x000000000000458c
- (_Bool)mark:(CDStruct_4bcfbbae *)arg1;	// IMP=0x00000000000044bc
- (id)readData;	// IMP=0x00000000000043d9
- (id)readString;	// IMP=0x00000000000042d5
- (_Bool)readBOOL;	// IMP=0x000000000000426e
- (long long)readSfixed64;	// IMP=0x000000000000423c
- (int)readSfixed32;	// IMP=0x000000000000420b
- (unsigned long long)readFixed64;	// IMP=0x00000000000041d9
- (unsigned int)readFixed32;	// IMP=0x00000000000041a8
- (long long)readSint64;	// IMP=0x0000000000004136
- (int)readSint32;	// IMP=0x00000000000040cc
- (unsigned long long)readUint64;	// IMP=0x0000000000004069
- (unsigned int)readUint32;	// IMP=0x000000000000400a
- (long long)readInt64;	// IMP=0x0000000000003fa7
- (int)readInt32;	// IMP=0x0000000000003f48
- (float)readFloat;	// IMP=0x0000000000003f14
- (double)readDouble;	// IMP=0x0000000000003ee0
- (long long)readVarInt;	// IMP=0x0000000000003e7d
- (BOOL)readInt8;	// IMP=0x0000000000003e4b
- (id)readProtoBuffer;	// IMP=0x0000000000003de0
- (unsigned long long)readBigEndianFixed64;	// IMP=0x0000000000003d92
- (unsigned int)readBigEndianFixed32;	// IMP=0x0000000000003d47
- (unsigned short)readBigEndianFixed16;	// IMP=0x0000000000003cf8
- (_Bool)skipValueWithTag:(unsigned short)arg1 andType:(unsigned char)arg2;	// IMP=0x0000000000003ce8
- (void)readTag:(unsigned short *)arg1 andType:(char *)arg2;	// IMP=0x0000000000003c73
- (_Bool)skipValueWithTag:(unsigned int)arg1 type:(unsigned char)arg2;	// IMP=0x0000000000003c63
- (void)readTag:(unsigned int *)arg1 type:(char *)arg2;	// IMP=0x0000000000003bef
- (_Bool)seekToOffset:(unsigned long long)arg1;	// IMP=0x0000000000003bce
- (void)updateData:(id)arg1;	// IMP=0x0000000000003b5d
- (unsigned long long)offset;	// IMP=0x0000000000003b53
- (_Bool)hasMoreData;	// IMP=0x0000000000003b3e
- (_Bool)hasError;	// IMP=0x0000000000003b30
- (_Bool)isAtEnd;	// IMP=0x0000000000003b1f
- (id)data;	// IMP=0x0000000000003b11
- (id)initWithData:(id)arg1;	// IMP=0x0000000000003a73

@end
