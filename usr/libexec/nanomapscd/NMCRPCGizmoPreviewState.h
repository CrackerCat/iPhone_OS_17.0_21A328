//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NMMessage;

@interface NMCRPCGizmoPreviewState : NSObject
{
    _Bool _hasShownNavModeAdvisory;	// 8 = 0x8
    NMMessage *_message;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002277c
@property(readonly, nonatomic) NMMessage *message; // @synthesize message=_message;
@property(readonly, nonatomic) _Bool hasShownNavModeAdvisory; // @synthesize hasShownNavModeAdvisory=_hasShownNavModeAdvisory;
- (id)initWithMessage:(id)arg1;	// IMP=0x0010000000022670

@end
