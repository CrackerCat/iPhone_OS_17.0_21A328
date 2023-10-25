//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface ICCollaborationRespondToPendingCollaboratorRequest
{
    NSString *_globalPlaylistID;	// 8 = 0x8
    NSString *_socialProfileID;	// 16 = 0x10
    _Bool _approval;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000fc48f
- (id)_requestBody;	// IMP=0x00100000000fc432
- (id)canonicalResponseForResponse:(id)arg1;	// IMP=0x00100000000fc31c
- (id)initWithDatabaseID:(unsigned int)arg1 globalPlaylistID:(id)arg2 socialProfileID:(id)arg3 approval:(_Bool)arg4;	// IMP=0x00100000000fc1da

@end
