//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (Gzip)
- (id)dbg_gzipDeflateWithLevel:(int)arg1 windowBits:(int)arg2 memLevel:(int)arg3;	// IMP=0x009000000001541d
- (id)dbg_gzipDeflateRaw;	// IMP=0x00900000000153fb
- (id)dbg_gzipDeflate;	// IMP=0x00900000000152ef
- (id)dbg_gzipInflateWithWindowBits:(int)arg1;	// IMP=0x0090000000014e97
- (id)dbg_gzipInflateRaw;	// IMP=0x0090000000014e80
- (id)dbg_gzipInflate;	// IMP=0x0090000000014d7f
- (id)dbg_gzipInflateIfCompressed;	// IMP=0x0090000000014d34
- (_Bool)dbg_isGzipped;	// IMP=0x0090000000014cdd
@end
