//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableData.h>

@interface NSMutableData (CBLTVExtensions)
- (void)appendCBLTVType:(unsigned char)arg1 uint64:(unsigned long long)arg2;	// IMP=0x00700000000470e0
- (void)appendCBLTVType:(unsigned char)arg1 sint64:(long long)arg2;	// IMP=0x0070000000046f00
- (_Bool)appendCBLTVType:(unsigned char)arg1 bytes:(const void *)arg2 length:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0070000000046e50
@end
