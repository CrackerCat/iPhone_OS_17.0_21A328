//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoMailKitServer/NSObject-Protocol.h>

@class NSString;

@protocol NNMKMailboxItem <NSObject>
@property(nonatomic) unsigned long long status;
@property(retain, nonatomic) NSString *preview;
@property(retain, nonatomic) NSString *subject;
- (void)removeState:(unsigned long long)arg1;
- (void)addState:(unsigned long long)arg1;
- (_Bool)checkState:(unsigned long long)arg1;
@end
