//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBInCallPresentationRequestServer, SBSInCallPresentationConfiguration;
@protocol NSCopying;

@protocol SBInCallPresentationRequestServerDelegate <NSObject>
- (void)inCallPresentationRequestServer:(SBInCallPresentationRequestServer *)arg1 clientWithIdentifierDidInvalidate:(id <NSCopying>)arg2;
- (void)inCallPresentationRequestServer:(SBInCallPresentationRequestServer *)arg1 clientWithIdentifier:(id <NSCopying>)arg2 requestsPresentationWithConfiguration:(SBSInCallPresentationConfiguration *)arg3 completion:(void (^)(NSError *))arg4;
@end
