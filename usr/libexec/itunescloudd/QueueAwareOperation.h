//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class CloudArtworkImporter, ICUserIdentity, ML3MusicLibrary, NSArray, NSObject, NSOperationQueue;
@protocol OS_tcc_identity;

@interface QueueAwareOperation : NSOperation
{
    _Bool _shouldProcessSpecificArtists;	// 8 = 0x8
    NSObject<OS_tcc_identity> *_clientIdentity;	// 16 = 0x10
    ML3MusicLibrary *_musicLibrary;	// 24 = 0x18
    CloudArtworkImporter *_artworkImporter;	// 32 = 0x20
    ICUserIdentity *_userIdentity;	// 40 = 0x28
    NSOperationQueue *_operationQueue;	// 48 = 0x30
    NSArray *_artistPersistentIDsToUpdate;	// 56 = 0x38
    NSArray *_albumArtistPersistentIDsToUpdate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000006bc57
@property(retain, nonatomic) NSArray *albumArtistPersistentIDsToUpdate; // @synthesize albumArtistPersistentIDsToUpdate=_albumArtistPersistentIDsToUpdate;
@property(retain, nonatomic) NSArray *artistPersistentIDsToUpdate; // @synthesize artistPersistentIDsToUpdate=_artistPersistentIDsToUpdate;
@property(readonly, nonatomic) _Bool shouldProcessSpecificArtists; // @synthesize shouldProcessSpecificArtists=_shouldProcessSpecificArtists;
@property(readonly, nonatomic) __weak NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) CloudArtworkImporter *artworkImporter; // @synthesize artworkImporter=_artworkImporter;
@property(readonly, nonatomic) ML3MusicLibrary *musicLibrary; // @synthesize musicLibrary=_musicLibrary;
@property(readonly, nonatomic) NSObject<OS_tcc_identity> *clientIdentity; // @synthesize clientIdentity=_clientIdentity;
- (id)initWithArtworkImporter:(id)arg1 clientIdentity:(id)arg2 operationQueue:(id)arg3 artistPersistentIDsToUpdate:(id)arg4 albumArtistPersistentIDsToUpdate:(id)arg5;	// IMP=0x001000000006b9fc

@end
