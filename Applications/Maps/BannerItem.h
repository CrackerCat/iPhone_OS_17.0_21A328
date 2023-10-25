//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IPCGuidanceStateReply, NSString;

@interface BannerItem : NSObject
{
    NSString *_uniqueId;	// 8 = 0x8
    IPCGuidanceStateReply *_guidanceState;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000030e5cb
@property(readonly, copy, nonatomic) IPCGuidanceStateReply *guidanceState; // @synthesize guidanceState=_guidanceState;
- (void)updateFromGuidanceState:(id)arg1;	// IMP=0x001000000030e50f
@property(readonly, copy, nonatomic) NSString *uniqueId;
- (id)description;	// IMP=0x001000000030e4c0
- (id)initWithGuidanceState:(id)arg1;	// IMP=0x001000000030e44d

@end
