//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Email/NSObject-Protocol.h>

@protocol EFInvocable;

@protocol EMMessageRepositoryCountQueryObserver_xpc <NSObject>
- (void)countDidChange:(long long)arg1 acknowledgementToken:(id <EFInvocable>)arg2;
@end
