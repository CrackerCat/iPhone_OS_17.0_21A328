//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC14SiriTTSService28HTMLSpeakableStringExtractor : NSObject
{
    MISSING_TYPE *_speakableString;	// 8 = 0x8
    MISSING_TYPE *elements;	// 24 = 0x18
    MISSING_TYPE *isInSpeakableRange;	// 32 = 0x20
    MISSING_TYPE *htmlString;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002cc5e
- (id)init;	// IMP=0x000000000002cc44
- (void)parser:(id)arg1 foundCharacters:(id)arg2;	// IMP=0x000000000002cbb1
- (void)parser:(id)arg1 didEndElement:(id)arg2;	// IMP=0x000000000002caf2
- (void)parser:(id)arg1 didStartElement:(id)arg2 attributes:(id)arg3;	// IMP=0x000000000002c9a9

@end
