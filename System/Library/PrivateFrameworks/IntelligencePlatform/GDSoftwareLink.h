//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GDEntityIdentifier, GDRelationshipIdentifier, NSString;

@interface GDSoftwareLink : NSObject
{
    GDRelationshipIdentifier *_relationshipIdentifier;	// 8 = 0x8
    GDEntityIdentifier *_softwareEntityIdentifier;	// 16 = 0x10
    NSString *_conversationIdentifier;	// 24 = 0x18
    NSString *_identifierType;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000044b113
@property(readonly, nonatomic) NSString *identifierType; // @synthesize identifierType=_identifierType;
@property(readonly, nonatomic) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
@property(readonly, nonatomic) GDEntityIdentifier *softwareEntityIdentifier; // @synthesize softwareEntityIdentifier=_softwareEntityIdentifier;
@property(readonly, nonatomic) GDRelationshipIdentifier *relationshipIdentifier; // @synthesize relationshipIdentifier=_relationshipIdentifier;
- (id)initWithRelationshipIdTriplesIterator:(id)arg1;	// IMP=0x000000000044ad3d

@end
