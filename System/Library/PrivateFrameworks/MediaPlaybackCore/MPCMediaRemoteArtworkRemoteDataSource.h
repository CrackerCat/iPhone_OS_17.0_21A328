//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCMediaRemoteController, NSString;

__attribute__((visibility("hidden")))
@interface MPCMediaRemoteArtworkRemoteDataSource : NSObject
{
    MPCMediaRemoteController *_controller;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002f8ae1
@property(readonly, nonatomic) __weak MPCMediaRemoteController *controller; // @synthesize controller=_controller;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002f890e
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;	// IMP=0x00000000002f88f9
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x00000000002f88f3
- (id)existingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x00000000002f8712
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;	// IMP=0x00000000002f8706
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;	// IMP=0x00000000002f86fe
- (id)initWithController:(id)arg1;	// IMP=0x00000000002f869a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
