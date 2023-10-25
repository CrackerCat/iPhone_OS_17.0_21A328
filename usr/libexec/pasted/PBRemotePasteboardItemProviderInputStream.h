//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSInputStream.h>

@class NSFileHandle;

@interface PBRemotePasteboardItemProviderInputStream : NSInputStream
{
    NSFileHandle *_fileHandle;	// 8 = 0x8
    int _fd;	// 16 = 0x10
}

+ (id)inputStreamWithFileHandle:(id)arg1;	// IMP=0x0040000000013040
- (void).cxx_destruct;	// IMP=0x0020000000013220
- (_Bool)hasBytesAvailable;	// IMP=0x0010000000013218
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x0010000000013135
- (void)close;	// IMP=0x0010000000013118
- (void)open;	// IMP=0x0010000000013112
- (id)initWithFileHandle:(id)arg1;	// IMP=0x0010000000013089

@end
