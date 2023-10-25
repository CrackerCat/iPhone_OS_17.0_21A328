//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADAudioSessionCoordinationMessageKeepAudioSessionAliveResponse : NSObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000117020
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0010000000116fd3
- (id)buildDictionaryRepresentation;	// IMP=0x0020000000116f40
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x0010000000116f05
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000116eff
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000116eed
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000116ee2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000116eb3
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0010000000116e46
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0010000000116e1e
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0010000000116d78
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x0010000000117028

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
