//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PRUISIncomingCallSnapshotDefinition;

__attribute__((visibility("hidden")))
@interface CNPRUISIncomingCallSnapshotDefinition : NSObject
{
    PRUISIncomingCallSnapshotDefinition *_wrappedDefinition;	// 8 = 0x8
}

+ (id)contentsOnlySnapshotDefinitionWithContext:(id)arg1 attachmentIdentifiers:(id)arg2;	// IMP=0x00600000003537a7
+ (id)contentsAndOverlayContentSnapshotDefinitionWithContext:(id)arg1 attachmentIdentifiers:(id)arg2;	// IMP=0x00600000003536b5
+ (id)contentsAndObscurableContentSnapshotDefinitionWithContext:(id)arg1 attachmentIdentifiers:(id)arg2;	// IMP=0x00600000003535c3
+ (id)compositeSnapshotDefinitionWithContext:(id)arg1 attachmentIdentifiers:(id)arg2;	// IMP=0x00600000003534d1
- (void).cxx_destruct;	// IMP=0x0000000000353474
@property(readonly, nonatomic) PRUISIncomingCallSnapshotDefinition *wrappedDefinition; // @synthesize wrappedDefinition=_wrappedDefinition;
- (id)levelSets;	// IMP=0x000000000035340f
- (id)initWithWrappedDefinition:(id)arg1;	// IMP=0x00000000003533a4

@end
