//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CNChangeHistoryEventVisitor;

__attribute__((visibility("hidden")))
@interface CNSafeChangeHistoryEventVisitorWrapper : NSObject
{
    id <CNChangeHistoryEventVisitor> _visitor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000128f9e
@property(readonly, nonatomic) id <CNChangeHistoryEventVisitor> visitor; // @synthesize visitor=_visitor;
- (void)visitPreferredContactForImageEvent:(id)arg1;	// IMP=0x0000000000128f41
- (void)visitPreferredContactForNameEvent:(id)arg1;	// IMP=0x0000000000128eee
- (void)visitUnlinkContactEvent:(id)arg1;	// IMP=0x0000000000128e9b
- (void)visitLinkContactsEvent:(id)arg1;	// IMP=0x0000000000128e48
- (void)visitDifferentMeCardEvent:(id)arg1;	// IMP=0x0000000000128df5
- (void)visitRemoveSubgroupFromGroupEvent:(id)arg1;	// IMP=0x0000000000128da2
- (void)visitAddSubgroupToGroupEvent:(id)arg1;	// IMP=0x0000000000128d4f
- (void)visitRemoveMemberFromGroupEvent:(id)arg1;	// IMP=0x0000000000128cfc
- (void)visitAddMemberToGroupEvent:(id)arg1;	// IMP=0x0000000000128ca9
- (void)visitDeleteGroupEvent:(id)arg1;	// IMP=0x0000000000128c56
- (void)visitUpdateGroupEvent:(id)arg1;	// IMP=0x0000000000128c03
- (void)visitAddGroupEvent:(id)arg1;	// IMP=0x0000000000128bb0
- (void)visitDeleteContactEvent:(id)arg1;	// IMP=0x0000000000128b5d
- (void)visitUpdateContactEvent:(id)arg1;	// IMP=0x0000000000128b0a
- (void)visitAddContactEvent:(id)arg1;	// IMP=0x0000000000128ab7
- (void)visitDropEverythingEvent:(id)arg1;	// IMP=0x0000000000128a64
@property(readonly, copy) NSString *description;
- (id)initWithChangeHistoryEventVisitor:(id)arg1;	// IMP=0x0000000000128940

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
